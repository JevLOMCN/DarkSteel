// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetTitleText_WrapperImpl @ 14b634dd0

void __cdecl UDS_VM_Dungeon_Level::SetTitleText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xb0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b634de0

UClass * __cdecl UDS_VM_Dungeon_Level::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Level.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Level",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Level.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Level,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Level>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Level>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Level.InnerSingleton;
}

// UDS_VM_Dungeon_Level @ 14b63b010

UDS_VM_Dungeon_Level * __thiscall
UDS_VM_Dungeon_Level::UDS_VM_Dungeon_Level(UDS_VM_Dungeon_Level *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Level__6B_;
  (this->DungeonLevelSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DungeonLevelSlotEventField).UserObjectList.ArrayNum = 0;
  (this->DungeonLevelSlotEventField).UserObjectList.ArrayMax = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  this->DungeonID = 0;
  return this;
}

// UDS_VM_Dungeon_Level @ 14b63b0b0

UDS_VM_Dungeon_Level * __thiscall
UDS_VM_Dungeon_Level::UDS_VM_Dungeon_Level(UDS_VM_Dungeon_Level *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Level__6B_;
  (this->DungeonLevelSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DungeonLevelSlotEventField).UserObjectList.ArrayNum = 0;
  (this->DungeonLevelSlotEventField).UserObjectList.ArrayMax = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  this->DungeonID = 0;
  return this;
}

// ~UDS_VM_Dungeon_Level @ 14b63cda0

void __thiscall UDS_VM_Dungeon_Level::~UDS_VM_Dungeon_Level(UDS_VM_Dungeon_Level *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Level__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DungeonLevelSlotEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f760

IClassDescriptor * __thiscall
UDS_VM_Dungeon_Level::GetFieldNotificationDescriptor(UDS_VM_Dungeon_Level *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_Level::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b640390

UClass * __cdecl UDS_VM_Dungeon_Level::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Level.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Level",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Level.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Level,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Level>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Level>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Level.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_Level @ 14b640b90

void __cdecl UDS_VM_Dungeon_Level::StaticRegisterNativesUDS_VM_Dungeon_Level(void)

{
  return;
}

// CreateDungeonLevelSlot @ 14be81410

void __thiscall
UDS_VM_Dungeon_Level::CreateDungeonLevelSlot
          (UDS_VM_Dungeon_Level *this,
          TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  UDS_UserObjectListItem *local_res8;
  longlong local_res10;
  int local_res18;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  local_res10 = (longlong)param_1->ArrayNum;
  uVar9 = 0;
  uVar11 = uVar9;
  local_res18 = param_2;
  if (0 < local_res10) {
    do {
      pFVar8 = (FDS_ViewModelContext *)0x0;
      uVar10 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + uVar11 * 8);
      this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar5 = ::operator_new(0x38);
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar5[1].ViewModelName.ComparisonIndex.Value + 1) = 0;
        *(undefined2 *)((longlong)&pFVar5[1].ViewModelName.Number + 1) = 0;
        *(undefined1 *)((longlong)&pFVar5[1].ViewModelName.Number + 3) = 0;
        pFVar5->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar5->ViewModelName).ComparisonIndex = 0;
        (pFVar5->ViewModelName).Number = 0;
        pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_DungeonLevelInfo__6B_;
        pFVar5[1]._padding_ = 0;
        pFVar5[1].DerivedStaticStruct = (UStruct *)0x0;
        *(undefined1 *)&pFVar5[1].ViewModelName.ComparisonIndex.Value = 0;
        pFVar8 = pFVar5;
      }
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar6->SharedReferenceCount = (atomic<int>)0x1;
        pTVar6[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar6->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_DungeonLevelInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar6->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar6[1].SharedReferenceCount = pFVar8;
      }
      if ((pFVar8 == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar7 = FDS_ViewModelContext_DungeonLevelInfo::StaticStruct();
      pFVar8->DerivedStaticStruct = (UStruct *)pUVar7;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58.Object = pFVar8;
        local_58.SharedReferenceCount.ReferenceController = pTVar6;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      pFVar8->ViewModelTemplateKey = DungeonLevelSlot;
      pFVar8[1]._padding_ = (longlong)*(int *)(lVar1 + 8);
      pFVar8[1].DerivedStaticStruct = (UStruct *)(longlong)*(int *)(lVar1 + 0x74);
      *(bool *)&pFVar8[1].ViewModelName.ComparisonIndex.Value = *(int *)(lVar1 + 8) == local_res18;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = pFVar8;
      local_48.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_UserObjectListItem::AddContext(this_00,&local_48);
      local_res8 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->DungeonLevelSlotEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      uVar9 = (ulonglong)(uVar10 + 1);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < local_res10);
  }
  local_60 = FFieldNotificationClassDescriptor::DungeonLevelSlotEventField.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::DungeonLevelSlotEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  return;
}

// GetDungeonsByLevel @ 14be894e0

TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UDS_VM_Dungeon_Level::GetDungeonsByLevel
          (UDS_VM_Dungeon_Level *this,
          TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType FVar8;
  FIdentityFunctor local_res10 [16];
  undefined1 local_res20 [8];
  longlong local_48;
  TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FDS_DungeonBaseTableRow::GetAll(&local_40);
  iVar4 = local_40.ArrayNum;
  if (local_40.ArrayNum != 0) {
    pFVar1 = local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 8;
    FVar8.Data = local_40.AllocatorInstance.Data;
    while( true ) {
      if (local_40.ArrayNum != iVar4) {
        local_res10[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FDS_DungeonBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar8.Data == pFVar1) break;
      local_48 = *(longlong *)FVar8.Data;
      if (*(int *)(local_48 + 0x24) == param_1) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
           ((FScriptContainerElement *)&local_48 <
            pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar7;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_48;
      }
      FVar8.Data = FVar8.Data + 8;
    }
    AlgoImpl::
    IntroSortInternal<FDS_DungeonBaseTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_DungeonBaseTableRow_const_*,_UDS_VM_Dungeon_Level::GetDungeonsByLevel_::__l2::<lambda_1>_>_>
              ((FDS_DungeonBaseTableRow **)(__return_storage_ptr__->AllocatorInstance).Data,
               __return_storage_ptr__->ArrayNum,local_res10[0],(<lambda_1> *)local_res20);
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnSetViewModel @ 14be9de40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_Level::OnSetViewModel
          (UDS_VM_Dungeon_Level *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  FDS_DungeonBaseTableRow *pFVar7;
  FDS_RaidPartyRepo *pFVar8;
  FDS_DungeonBaseTableRow *this_00;
  undefined1 auStackY_228 [32];
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_1f8;
  TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_1e8;
  FName local_1d8;
  int local_1d0;
  FDS_Text local_1c8;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Dungeon>(&local_1f8,&local_178);
  if (local_1f8.Object == (FDS_ViewModelContext_Dungeon *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_Dungeon_Level::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x15,L"dungeonContext is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
    goto LAB_14be9e0f7;
  }
  iVar1 = (int)(local_1f8.Object)->DungeonId;
  this->DungeonID = iVar1;
  pFVar7 = FDS_DungeonBaseTableRow::GetRef((longlong)iVar1,true);
  bVar5 = FDS_DungeonBaseTableRow::IsValid(pFVar7);
  iVar1 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  if (!bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
    goto LAB_14be9e0f7;
  }
  local_1c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_1c8.StringEnumTableNameID.Number = 0;
  local_1c8.DateTime.Ticks = 0;
  local_1c8.TimeSpan.Ticks = 0;
  local_1c8.TimeExpressionType = None;
  local_1c8.IsExpression = false;
  local_1c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.UniqueString.Data.ArrayNum = 0;
  local_1c8.UniqueString.Data.ArrayMax = 0;
  local_1c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.FormatArgs.ArrayNum = 0;
  local_1c8.FormatArgs.ArrayMax = 0;
  local_1c8.StringTableType = StringUi;
  local_1c8.StringTableID = 0x334ab;
  FDS_Text::operator=(&this->TitleText,&local_1c8);
  local_1d8 = FVar3;
  local_1d0 = iVar1;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
  FVar4.Data = local_1c8.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1c8.FormatArgs.AllocatorInstance.Data,
             local_1c8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar4.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_1c8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.UniqueString.Data.AllocatorInstance.Data);
  }
  FDS_EntryBindingEventField::Reset(&this->DungeonLevelSlotEventField);
  pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar5 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar8);
  if (bVar5) {
    pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    iVar1 = (pFVar8->RaidPartyInfo).DungeonId;
    this_00 = FDS_DungeonBaseTableRow::GetRef((longlong)iVar1,true);
    bVar5 = FDS_DungeonBaseTableRow::IsValid(this_00);
    if (bVar5) {
      if (this_00->DungeonType != pFVar7->DungeonType) goto LAB_14be9e0c9;
      pFVar7 = FDS_DungeonBaseTableRow::GetRef((longlong)iVar1,true);
      bVar5 = FDS_DungeonBaseTableRow::IsValid(pFVar7);
      if (bVar5) {
        GetDungeonsByLevel(this,&local_1e8,pFVar7->LevelGroup);
        if (local_1e8.ArrayNum != 0) {
          CreateDungeonLevelSlot(this,&local_1e8,iVar1);
        }
        if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
LAB_14be9e0c9:
    SetDungeonLevelListByPlayerLevel(this,pFVar7->LevelGroup);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
LAB_14be9e0f7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SelectDungeonID @ 14bead350

int __thiscall
UDS_VM_Dungeon_Level::SelectDungeonID
          (UDS_VM_Dungeon_Level *this,
          TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UDS_DungeonManager *this_00;
  UObject *pUVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FWeakObjectPtr local_res18 [2];
  
  if (param_1->ArrayNum != 0) {
    this_00 = UDS_DungeonManager::GetInst();
    UDS_PlayerData::GetMainPlayerData();
    bVar5 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res18,(void *)0x0);
    if ((!bVar5) && (this_00 != (UDS_DungeonManager *)0x0)) {
      pUVar8 = FWeakObjectPtr::Get(local_res18);
      iVar7 = param_1->ArrayNum;
      uVar10 = 0;
      uVar9 = 0;
      iVar1 = *(int *)&pUVar8[6].field_0x10;
      if (0 < (longlong)iVar7) {
        lVar11 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar9 < param_1->ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          lVar3 = *(longlong *)((param_1->AllocatorInstance).Data + lVar11 * 8);
          if (lVar3 != 0) {
            iVar2 = *(int *)(lVar3 + 0x74);
            bVar5 = UDS_DungeonManager::IsLockDungeon(this_00,*(int *)(lVar3 + 8));
            if ((!bVar5) && (iVar2 <= iVar1)) {
              uVar10 = uVar9;
            }
          }
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar7);
      }
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      return *(int *)(*(longlong *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 8) +
                     8);
    }
  }
  return -1;
}

// SetDungeonLevelListByPlayerLevel @ 14beae590

void __thiscall
UDS_VM_Dungeon_Level::SetDungeonLevelListByPlayerLevel(UDS_VM_Dungeon_Level *this,int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UDS_DungeonManager *this_00;
  UDS_DungeonManager *this_01;
  UObject *pUVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  FWeakObjectPtr local_res20;
  TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_50;
  
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 != (UDS_DungeonManager *)0x0) {
    GetDungeonsByLevel(this,&local_50,param_1);
    if ((local_50.ArrayNum != 0) && (local_50.ArrayNum != 0)) {
      this_01 = UDS_DungeonManager::GetInst();
      UDS_PlayerData::GetMainPlayerData();
      bVar5 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
      if ((!bVar5) && (this_01 != (UDS_DungeonManager *)0x0)) {
        pUVar7 = FWeakObjectPtr::Get(&local_res20);
        lVar11 = (longlong)local_50.ArrayNum;
        uVar9 = 0;
        uVar8 = 0;
        iVar1 = *(int *)&pUVar7[6].field_0x10;
        if (0 < lVar11) {
          lVar10 = 0;
          do {
            uVar6 = 0;
            if ((int)uVar8 < local_50.ArrayNum) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar3 = *(longlong *)(local_50.AllocatorInstance.Data + lVar10 * 8);
            if (lVar3 != 0) {
              iVar2 = *(int *)(lVar3 + 0x74);
              bVar5 = UDS_DungeonManager::IsLockDungeon(this_01,*(int *)(lVar3 + 8));
              if ((!bVar5) && (iVar2 <= iVar1)) {
                uVar9 = uVar8;
              }
            }
            uVar8 = uVar8 + 1;
            lVar10 = lVar10 + 1;
          } while (lVar10 < lVar11);
        }
        uVar8 = 0;
        if ((int)uVar9 < local_50.ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar1 = *(int *)(*(longlong *)(local_50.AllocatorInstance.Data + (longlong)(int)uVar9 * 8) +
                        8);
        if ((iVar1 != -1) &&
           (CreateDungeonLevelSlot(this,&local_50,iVar1), this->DungeonID != iVar1)) {
          UDS_DungeonManager::SetSelectedDungeonID(this_00,iVar1);
        }
      }
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  return;
}

// SetDungeonLevelListByRaidParty @ 14beae7c0

void __thiscall
UDS_VM_Dungeon_Level::SetDungeonLevelListByRaidParty(UDS_VM_Dungeon_Level *this,int param_1)

{
  bool bVar1;
  FDS_DungeonBaseTableRow *this_00;
  TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = FDS_DungeonBaseTableRow::GetRef((longlong)param_1,true);
  bVar1 = FDS_DungeonBaseTableRow::IsValid(this_00);
  if (bVar1) {
    GetDungeonsByLevel(this,&local_18,this_00->LevelGroup);
    if (local_18.ArrayNum != 0) {
      CreateDungeonLevelSlot(this,&local_18,param_1);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// SetTitleText @ 14beb4a40

void __thiscall UDS_VM_Dungeon_Level::SetTitleText(UDS_VM_Dungeon_Level *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=(&this->TitleText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

