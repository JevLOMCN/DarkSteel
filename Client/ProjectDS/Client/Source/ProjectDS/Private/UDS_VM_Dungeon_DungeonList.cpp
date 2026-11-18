// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b637cf0

UClass * __cdecl UDS_VM_Dungeon_DungeonList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_DungeonList",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonList.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_DungeonList,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_DungeonList>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_DungeonList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonList.InnerSingleton;
}

// UDS_VM_Dungeon_DungeonList @ 14b63ab50

UDS_VM_Dungeon_DungeonList * __thiscall
UDS_VM_Dungeon_DungeonList::UDS_VM_Dungeon_DungeonList
          (UDS_VM_Dungeon_DungeonList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_DungeonList__6B_;
  (this->DungeonListSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DungeonListSlotEventField).UserObjectList.ArrayNum = 0;
  (this->DungeonListSlotEventField).UserObjectList.ArrayMax = 0;
  (this->DungeonList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonList).ArrayNum = 0;
  (this->DungeonList).ArrayMax = 0;
  return this;
}

// UDS_VM_Dungeon_DungeonList @ 14b63abb0

UDS_VM_Dungeon_DungeonList * __thiscall
UDS_VM_Dungeon_DungeonList::UDS_VM_Dungeon_DungeonList
          (UDS_VM_Dungeon_DungeonList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_DungeonList__6B_;
  (this->DungeonListSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DungeonListSlotEventField).UserObjectList.ArrayNum = 0;
  (this->DungeonListSlotEventField).UserObjectList.ArrayMax = 0;
  (this->DungeonList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonList).ArrayNum = 0;
  (this->DungeonList).ArrayMax = 0;
  return this;
}

// ~UDS_VM_Dungeon_DungeonList @ 14b63cb80

void __thiscall
UDS_VM_Dungeon_DungeonList::~UDS_VM_Dungeon_DungeonList(UDS_VM_Dungeon_DungeonList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_DungeonList__6B_;
  pFVar1 = (this->DungeonList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DungeonListSlotEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f610

IClassDescriptor * __thiscall
UDS_VM_Dungeon_DungeonList::GetFieldNotificationDescriptor(UDS_VM_Dungeon_DungeonList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_DungeonList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b640150

UClass * __cdecl UDS_VM_Dungeon_DungeonList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_DungeonList",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonList.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_DungeonList,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_DungeonList>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_DungeonList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_DungeonList @ 14b640b30

void __cdecl UDS_VM_Dungeon_DungeonList::StaticRegisterNativesUDS_VM_Dungeon_DungeonList(void)

{
  return;
}

// operator() @ 14be73000

bool __thiscall
`UDS_VM_Dungeon_DungeonList::SetDungeonList'::__l2::<lambda_1>::operator()
          (void *this,int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  FDS_DungeonBaseTableRow *pFVar3;
  FDS_DungeonBaseTableRow *pFVar4;
  FDS_DungeonLevelGroupTableRow *pFVar5;
  FDS_DungeonLevelGroupTableRow *pFVar6;
  
  bVar1 = UDS_DungeonManager::IsLockDungeon(*(UDS_DungeonManager **)this,*param_1);
  bVar2 = UDS_DungeonManager::IsLockDungeon(*(UDS_DungeonManager **)this,*param_2);
  if (bVar1 == bVar2) {
    pFVar3 = FDS_DungeonBaseTableRow::GetRef((longlong)*param_1,true);
    pFVar4 = FDS_DungeonBaseTableRow::GetRef((longlong)*param_2,true);
    pFVar5 = FDS_DungeonLevelGroupTableRow::GetRef((longlong)pFVar3->LevelGroup,true);
    pFVar6 = FDS_DungeonLevelGroupTableRow::GetRef((longlong)pFVar4->LevelGroup,true);
    bVar2 = pFVar5->DisplayOrder < pFVar6->DisplayOrder;
  }
  else if (bVar1) {
    bVar2 = false;
  }
  return bVar2;
}

// BindModel @ 14be74e90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon_DungeonList::BindModel(UDS_VM_Dungeon_DungeonList *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// MakeDungeonFilterOption @ 14be90160

FDS_DungeonFilterOption * __thiscall
UDS_VM_Dungeon_DungeonList::MakeDungeonFilterOption
          (UDS_VM_Dungeon_DungeonList *this,FDS_DungeonFilterOption *__return_storage_ptr__,
          int *param_1)

{
  EDS_ContentsTabFrameType EVar1;
  
  EVar1 = this->ContentsTabFrameType;
  __return_storage_ptr__->OpenMinLevel = 0;
  __return_storage_ptr__->OpenMaxLevel = 0x7fffffff;
  __return_storage_ptr__->DungeonType = Max;
  __return_storage_ptr__->UseIsVisible = true;
  __return_storage_ptr__->UseLevelGroup = true;
  if (EVar1 == NormalDungeon) {
    __return_storage_ptr__->DungeonType = Normal;
  }
  else {
    if (EVar1 == HeroicDungeon) {
      __return_storage_ptr__->DungeonType = Heroic;
      return __return_storage_ptr__;
    }
    if (EVar1 == RaidDungeon) {
      __return_storage_ptr__->DungeonType = Raid;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// OnSetViewModel @ 14be9d980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_DungeonList::OnSetViewModel
          (UDS_VM_Dungeon_DungeonList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_ContentsTabFrameType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  TTuple<FName,int> *pTVar7;
  undefined1 auStackY_1b8 [32];
  int local_188 [2];
  FDS_DungeonFilterOption local_180;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_170;
  FName local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_170,&local_158);
  if (local_170.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)local_170.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Dungeon_DungeonList::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x16,L"contentsOpenContext IsValid() == false");
      if ((FDS_ViewModelContext_ContentsOpen *)local_148._padding_ !=
          (FDS_ViewModelContext_ContentsOpen *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_188[0] = 0;
    if ((local_170.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = FWeakObjectPtr::IsValid(&((local_170.Object)->ContentArguments).WeakPtr);
    if (bVar4) {
      if ((local_170.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = FWeakObjectPtr::Get(&((local_170.Object)->ContentArguments).WeakPtr);
      ::FName::FName(&local_160,"DungeonBaseID");
      pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                       *)(pUVar6 + 3),local_160);
      local_188[0] = 0;
      if (pTVar7 != (TTuple<FName,int> *)0x0) {
        local_188[0] = *(int *)&pTVar7->field_0x8;
      }
    }
    if ((local_170.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar1 = (local_170.Object)->TabFrameID;
    this->ContentsTabFrameType = EVar1;
    local_180.OpenMinLevel = 0;
    local_180.OpenMaxLevel = 0x7fffffff;
    local_180.DungeonType = Max;
    local_180.UseIsVisible = true;
    local_180.UseLevelGroup = true;
    if (EVar1 == NormalDungeon) {
      local_180.DungeonType = Normal;
      local_180.UseIsVisible = true;
    }
    else if (EVar1 == HeroicDungeon) {
      local_180.DungeonType = Heroic;
      local_180.UseIsVisible = true;
    }
    else if (EVar1 == RaidDungeon) {
      local_180.DungeonType = Raid;
      local_180.UseIsVisible = true;
    }
    SetDungeonList(this,&local_180,local_188);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_170.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDungeonList @ 14beae840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_DungeonList::SetDungeonList
          (UDS_VM_Dungeon_DungeonList *this,FDS_DungeonFilterOption *param_1,int *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UDS_DungeonManager *pUVar5;
  UDS_LogManager *pUVar6;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *pUVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  FDS_RaidPartyRepo *pFVar13;
  FDS_DungeonBaseTableRow *pFVar14;
  ulonglong uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  FDS_ViewModelContext *pFVar18;
  FDS_ViewModelContext *pFVar19;
  undefined1 auStackY_358 [32];
  FIdentityFunctor local_328 [4];
  uint local_324;
  FScriptContainerElement *local_320;
  UDS_DungeonManager *local_318;
  UDS_DungeonManager *local_310;
  UDS_UserObjectListItem *local_308;
  FScriptContainerElement *local_300;
  FDS_DungeonFilterOption *local_2f8;
  int *local_2f0;
  FName local_2e8;
  int local_2e0;
  FName local_2d8;
  int local_2d0;
  TSharedPtr<FDS_ViewModelContext,1> local_2c8;
  TSharedPtr<FDS_ViewModelContext,1> local_2b8;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_2f8 = param_1;
  local_2f0 = param_2;
  pUVar5 = UDS_DungeonManager::GetInst();
  local_318 = pUVar5;
  if (pUVar5 == (UDS_DungeonManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"UDS_VM_Dungeon_DungeonList::SetDungeonList",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_288.Ptr,0x52,L"dungeonManager is nullptr");
    if ((void *)local_288._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_288._padding_);
    return;
  }
  FDS_EntryBindingEventField::Reset(&this->DungeonListSlotEventField);
  pTVar1 = &this->DungeonList;
  pFVar19 = (FDS_ViewModelContext *)0x0;
  (this->DungeonList).ArrayNum = 0;
  if ((this->DungeonList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,&(this->DungeonList).ArrayMax);
  }
  UDS_DungeonManager::GetFilteredDungeonList(pTVar1,param_1);
  iVar16 = (this->DungeonList).ArrayNum;
  if (iVar16 == 0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_Dungeon_DungeonList::SetDungeonList",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x5c,L"DungeonList is empty");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    local_2e0 = FFieldNotificationClassDescriptor::DungeonListSlotEventField.BitNumber;
    local_2e8 = FFieldNotificationClassDescriptor::DungeonListSlotEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2e8);
    return;
  }
  local_310 = pUVar5;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_VM_Dungeon_DungeonList::SetDungeonList_::__l2::<lambda_1>_>_>
            ((int *)(pTVar1->AllocatorInstance).Data,iVar16,local_328[0],(<lambda_1> *)&local_310);
  local_324 = (this->DungeonList).ArrayNum;
  uVar15 = (ulonglong)(int)local_324;
  pFVar17 = (pTVar1->AllocatorInstance).Data;
  local_300 = pFVar17 + uVar15 * 4;
  while( true ) {
    pFVar3 = local_300;
    local_320 = pFVar17;
    if ((this->DungeonList).ArrayNum != (int)uVar15) {
      local_328[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_328);
    }
    if (pFVar17 == pFVar3) break;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar7 = ::operator_new(0x28);
    pFVar18 = pFVar19;
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
      (pFVar7->ViewModelName).ComparisonIndex = 0;
      (pFVar7->ViewModelName).Number = 0;
      pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_Dungeon__6B_;
      pFVar7[1]._padding_ = 0;
      pFVar18 = pFVar7;
    }
    pFVar8 = ::operator_new(0x20);
    pFVar7 = pFVar19;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Dungeon__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar18;
      pFVar7 = pFVar8;
    }
    if ((pFVar18 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar9 = FDS_ViewModelContext_Dungeon::StaticStruct();
    *(UScriptStruct **)&pFVar18->DerivedStaticStruct = pUVar9;
    pUVar10 = UDS_ViewModelContextManager::GetInst();
    if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_2c8.Object = pFVar18;
      local_2c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_2c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
    }
    pFVar18->ViewModelTemplateKey = DungeonListSlot;
    pFVar18[1]._padding_ = (longlong)*(int *)pFVar17;
    pFVar11 = ::operator_new(0x28);
    pFVar8 = pFVar19;
    if (pFVar11 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar11->DerivedStaticStruct = 0;
      (pFVar11->ViewModelName).ComparisonIndex = 0;
      (pFVar11->ViewModelName).Number = 0;
      pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_Dungeon__6B_;
      pFVar11[1]._padding_ = 0;
      pFVar8 = pFVar11;
    }
    pFVar12 = ::operator_new(0x20);
    pFVar11 = pFVar19;
    if (pFVar12 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar12->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar12->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar12->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Dungeon__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar12->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar12->ViewModelTemplateKey = pFVar8;
      pFVar11 = pFVar12;
    }
    if ((pFVar8 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar9 = FDS_ViewModelContext_Dungeon::StaticStruct();
    *(UScriptStruct **)&pFVar8->DerivedStaticStruct = pUVar9;
    pUVar10 = UDS_ViewModelContextManager::GetInst();
    if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar11 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar11->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_2b8.Object = pFVar8;
      local_2b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
      UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_2b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2b8.SharedReferenceCount.ReferenceController);
    }
    pFVar8->ViewModelTemplateKey = DungeonInfo;
    pFVar8[1]._padding_ = (longlong)*(int *)local_320;
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar7->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_2a8.Object = pFVar18;
    local_2a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    UDS_UserObjectListItem::AddContext(this_00,&local_2a8);
    if (pFVar11 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar11->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_298.Object = pFVar8;
    local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
    UDS_UserObjectListItem::AddContext(this_00,&local_298);
    local_308 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->DungeonListSlotEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_308);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
    uVar15 = (ulonglong)local_324;
    pFVar17 = local_320 + 4;
  }
  local_2d0 = FFieldNotificationClassDescriptor::DungeonListSlotEventField.BitNumber;
  local_2d8 = FFieldNotificationClassDescriptor::DungeonListSlotEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2d8);
  pFVar13 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar13);
  if (bVar4) {
    pFVar13 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar14 = FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar13->RaidPartyInfo).DungeonId,true);
    if (local_2f8->DungeonType == pFVar14->DungeonType) {
      pFVar13 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      iVar16 = (pFVar13->RaidPartyInfo).DungeonId;
      goto LAB_14beaed72;
    }
  }
  iVar16 = *local_2f0;
  if (iVar16 < 1) {
    if ((this->DungeonList).ArrayNum < 1) {
      return;
    }
    iVar16 = *(int *)(this->DungeonList).AllocatorInstance.Data;
  }
LAB_14beaed72:
  UDS_DungeonManager::SetSelectedDungeonID(local_318,iVar16);
  return;
}

// UnbindModel @ 14bebbc10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon_DungeonList::UnbindModel(UDS_VM_Dungeon_DungeonList *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

