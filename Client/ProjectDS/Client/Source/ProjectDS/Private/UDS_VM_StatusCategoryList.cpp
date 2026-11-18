// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// SetOnClickCloseEvent_WrapperImpl @ 14b6e21b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_StatusCategoryList::SetOnClickCloseEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this);
  }
  afStackX_18[0] = 0.0;
  auStackX_20[0] = 0;
  UDS_WindowManager::CloseWindow(this,StatusDetailPopup,auStackX_20,afStackX_18);
  return;
}

// StaticClass @ 14b6e21c0

UClass * __cdecl UDS_VM_StatusCategoryList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StatusCategoryList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StatusCategoryList",
               &Z_Registration_Info_UClass_UDS_VM_StatusCategoryList.InnerSingleton,
               StaticRegisterNativesUDS_VM_StatusCategoryList,0x120,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_StatusCategoryList>,
               InternalVTableHelperCtorCaller<UDS_VM_StatusCategoryList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StatusCategoryList.InnerSingleton;
}

// UDS_VM_StatusCategoryList @ 14b6e6170

UDS_VM_StatusCategoryList * __thiscall
UDS_VM_StatusCategoryList::UDS_VM_StatusCategoryList
          (UDS_VM_StatusCategoryList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCategoryList__6B_;
  (this->EntryBindingEventField_StatusCategory).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_StatusCategory).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_StatusCategory).UserObjectList.ArrayMax = 0;
  (this->OnClickCloseEvent)._padding_ = '\0';
  (this->OnClickCloseEvent).bIsCustomSelected = false;
  (this->OnClickCloseEvent).bIsLacked = false;
  (this->OnClickCloseEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnClickCloseEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickCloseEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnClickCloseEvent).Delegate.field_0x10 = 0;
  (this->StatusTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusTitleText).StringEnumTableNameID.Number = 0;
  (this->StatusTitleText).DateTime.Ticks = 0;
  (this->StatusTitleText).TimeSpan.Ticks = 0;
  (this->StatusTitleText).TimeExpressionType = None;
  (this->StatusTitleText).IsExpression = false;
  (this->StatusTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusTitleText).UniqueString.Data.ArrayNum = 0;
  (this->StatusTitleText).UniqueString.Data.ArrayMax = 0;
  (this->StatusTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusTitleText).FormatArgs.ArrayNum = 0;
  (this->StatusTitleText).FormatArgs.ArrayMax = 0;
  (this->StatusTitleText).StringTableType = StringUi;
  (this->StatusTitleText).StringTableID = 0x2b15;
  return this;
}

// UDS_VM_StatusCategoryList @ 14b6e6230

UDS_VM_StatusCategoryList * __thiscall
UDS_VM_StatusCategoryList::UDS_VM_StatusCategoryList
          (UDS_VM_StatusCategoryList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCategoryList__6B_;
  (this->EntryBindingEventField_StatusCategory).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_StatusCategory).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_StatusCategory).UserObjectList.ArrayMax = 0;
  (this->OnClickCloseEvent)._padding_ = '\0';
  (this->OnClickCloseEvent).bIsCustomSelected = false;
  (this->OnClickCloseEvent).bIsLacked = false;
  (this->OnClickCloseEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnClickCloseEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickCloseEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnClickCloseEvent).Delegate.field_0x10 = 0;
  (this->StatusTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusTitleText).StringEnumTableNameID.Number = 0;
  (this->StatusTitleText).DateTime.Ticks = 0;
  (this->StatusTitleText).TimeSpan.Ticks = 0;
  (this->StatusTitleText).TimeExpressionType = None;
  (this->StatusTitleText).IsExpression = false;
  (this->StatusTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusTitleText).UniqueString.Data.ArrayNum = 0;
  (this->StatusTitleText).UniqueString.Data.ArrayMax = 0;
  (this->StatusTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusTitleText).FormatArgs.ArrayNum = 0;
  (this->StatusTitleText).FormatArgs.ArrayMax = 0;
  (this->StatusTitleText).StringTableType = StringUi;
  (this->StatusTitleText).StringTableID = 0x2b15;
  return this;
}

// ~UDS_VM_StatusCategoryList @ 14b6e7420

void __thiscall
UDS_VM_StatusCategoryList::~UDS_VM_StatusCategoryList(UDS_VM_StatusCategoryList *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCategoryList__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->StatusTitleText).FormatArgs.AllocatorInstance.Data,
             (this->StatusTitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->StatusTitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatusTitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickCloseEvent).Delegate);
  pvVar2 = *(void **)&(this->OnClickCloseEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickCloseEvent).Delegate);
  pFVar1 = (this->EntryBindingEventField_StatusCategory).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e99f0

IClassDescriptor * __thiscall
UDS_VM_StatusCategoryList::GetFieldNotificationDescriptor(UDS_VM_StatusCategoryList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_StatusCategoryList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea600

UClass * __cdecl UDS_VM_StatusCategoryList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StatusCategoryList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StatusCategoryList",
               &Z_Registration_Info_UClass_UDS_VM_StatusCategoryList.InnerSingleton,
               StaticRegisterNativesUDS_VM_StatusCategoryList,0x120,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_StatusCategoryList>,
               InternalVTableHelperCtorCaller<UDS_VM_StatusCategoryList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StatusCategoryList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_StatusCategoryList @ 14b6eacb0

void __cdecl UDS_VM_StatusCategoryList::StaticRegisterNativesUDS_VM_StatusCategoryList(void)

{
  return;
}

// OnClickClose @ 14be2c350

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_StatusCategoryList::OnClickClose
          (UDS_VM_StatusCategoryList *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,StatusDetailPopup,local_res20,local_res18);
  return;
}

// OnCloseInit @ 14be2d380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_StatusCategoryList::OnCloseInit(UDS_VM_StatusCategoryList *this)

{
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res10[0] = 0.0;
  local_res18[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,StatusToolTip,local_res18,local_res10);
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnSetViewModel @ 14be3fe70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_StatusCategoryList::OnSetViewModel
          (UDS_VM_StatusCategoryList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FName *pFVar1;
  ulonglong uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *_Src;
  longlong lVar4;
  code *pcVar5;
  atomic<int> aVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  UDS_LogManager *pUVar11;
  TSet<TTuple<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar12;
  UEnum *this_00;
  UObject *pUVar13;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar14;
  FDS_ViewModelContext *pFVar15;
  UScriptStruct *pUVar16;
  UDS_ViewModelContextManager *this_02;
  byte bVar17;
  undefined1 *puVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  FDS_ViewModelContext *pFVar22;
  uint uVar23;
  FDS_ViewModelContext *pFVar24;
  uint uVar25;
  uint *puVar26;
  FDS_EntryBindingEventField *this_03;
  uint uVar27;
  undefined1 auStackY_428 [32];
  undefined1 local_3e8 [8];
  byte local_3e0;
  TReferenceControllerBase<1> local_3d8;
  FString local_3c8;
  int local_3b8;
  uint uStack_3b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3b0;
  uint local_3a8;
  uint uStack_3a4;
  uint uStack_3a0;
  undefined4 uStack_39c;
  uint local_398;
  FDS_EntryBindingEventField *local_390;
  TSharedPtr<FDS_ViewModelContext_StatusCategoryList,1> local_388;
  TBitArray<FDefaultBitArrayAllocator> *local_378;
  longlong *local_370;
  undefined8 uStack_368;
  TBitArray<FDefaultBitArrayAllocator> *local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  int iStack_348;
  undefined4 uStack_344;
  int local_340;
  int local_33c;
  FName local_338;
  UDS_UserObjectListItem *local_330;
  UDS_VM_StatusCategoryList *local_328;
  TSharedPtr<FDS_ViewModelContext,1> *local_320;
  FName local_318;
  int local_310;
  FString local_308;
  TSharedPtr<FDS_ViewModelContext,1> local_2f8;
  longlong *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 uStack_2c0;
  TSharedPtr<FDS_ViewModelContext,1> local_2b8;
  FString local_2a8;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  FString local_288 [2];
  undefined4 local_25c;
  undefined1 local_258 [32];
  uint *local_238;
  uint local_230;
  undefined4 local_22c;
  undefined4 local_228;
  int local_224;
  ForElementType<FSetElementId> local_218;
  int local_210;
  undefined1 local_208 [72];
  undefined4 local_1c0;
  undefined1 local_1b8 [72];
  undefined4 local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_428;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_328 = this;
  local_320 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_2b8.Object = param_1->Object;
  local_2b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_2b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_StatusCategoryList>(&local_388,&local_2b8);
  if (local_388.Object == (FDS_ViewModelContext_StatusCategoryList *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_StatusCategoryList::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_168.Ptr,0x12,L"context is Invalid.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_388.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar22 = (FDS_ViewModelContext *)0x0;
    local_258._0_8_ = 0;
    local_258._8_8_ = 0;
    local_238 = (uint *)0x0;
    uVar25 = 0;
    local_230 = 0;
    local_22c = 0x80;
    local_228 = 0xffffffff;
    local_224 = 0;
    local_218 = (ForElementType<FSetElementId>)0x0;
    local_210 = 0;
    if ((local_388.Object == (FDS_ViewModelContext_StatusCategoryList *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((local_388.Object)->CategoryListType == Player) {
      pTVar12 = (TSet<TTuple<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)FDS_StatusTableRow::GetPlayerViewDetailStatusCategoryMap
                             ((TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
                               *)local_208);
      if ((TSet<TTuple<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)local_258 != pTVar12) {
        TSet<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_258,pTVar12);
      }
      local_1c0 = 0;
      if ((void *)local_208._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_208._64_8_);
      }
      puVar18 = local_208;
    }
    else {
      pTVar12 = (TSet<TTuple<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)FDS_StatusTableRow::GetCharViewDetailStatusCategoryMap
                             ((TMap<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
                               *)local_1b8);
      if ((TSet<TTuple<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)local_258 != pTVar12) {
        TSet<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EDS_StatusCategoryType,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_258,pTVar12);
      }
      local_170 = 0;
      if ((void *)local_1b8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1b8._64_8_);
      }
      puVar18 = local_1b8;
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (puVar18);
    this_03 = &this->EntryBindingEventField_StatusCategory;
    local_390 = this_03;
    FDS_EntryBindingEventField::Reset(this_03);
    uVar8 = local_230;
    uVar10 = 1;
    local_350._0_4_ = 0;
    uStack_358._4_4_ = (uint)local_350;
    if (local_230 != 0) {
      puVar26 = (uint *)(local_258 + 0x10);
      if (local_238 != (uint *)0x0) {
        puVar26 = local_238;
      }
      uVar27 = *puVar26;
      pFVar24 = pFVar22;
      pFVar14 = pFVar22;
      local_350._0_4_ = 0;
      uVar25 = 0;
      while (uVar27 == 0) {
        iVar20 = (int)pFVar24;
        local_350._0_4_ = (int)pFVar14 + 0x20;
        pFVar14 = (FDS_ViewModelContext *)(ulonglong)(uint)local_350;
        uVar25 = iVar20 + 1;
        pFVar24 = (FDS_ViewModelContext *)(ulonglong)uVar25;
        uStack_358._4_4_ = local_230;
        if ((int)((local_230 - 1) + ((int)(local_230 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar25)
        goto LAB_14be40140;
        uVar27 = puVar26[(longlong)iVar20 + 1];
      }
      uVar10 = -uVar27 & uVar27;
      uVar2 = (ulonglong)uVar10 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_340 = (int)lVar4;
      uStack_358._4_4_ = ((uint)local_350 - 1) + local_340;
      if ((int)local_230 < (int)uStack_358._4_4_) {
        uStack_358._4_4_ = local_230;
      }
    }
LAB_14be40140:
    local_370 = (longlong *)local_258;
    uVar23 = local_230 & 0xffffffe0;
    iStack_348 = local_258._8_4_ - local_224;
    local_360 = (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10);
    bVar17 = (byte)local_230 & 0x1f;
    uStack_3b4 = 1 << bVar17;
    iVar20 = (int)local_230 >> 5;
    uVar27 = -1 << bVar17;
    uStack_368 = CONCAT44(uVar10,uVar25);
    uStack_358._0_4_ = 0xffffffff;
    local_350._4_4_ = local_25c;
    pTStack_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10);
    uStack_3a4 = local_230;
    TStack_2e0._padding_ = uStack_368;
    uStack_2c0 = CONCAT44(uStack_344,iStack_348);
    TStack_2e0.UnvisitedBitMask = 0xffffffff;
    TStack_2e0.CurrentBitIndex = uStack_358._4_4_;
    TStack_2e0.BaseBitIndex = (uint)local_350;
    TStack_2e0._28_4_ = local_25c;
    local_3b8 = iVar20;
    local_3a8 = uVar27;
    uStack_3a0 = uVar23;
    local_2e8 = local_370;
    TStack_2e0.Array = local_360;
    if (((int)local_230 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar8 != local_230) {
      puVar26 = (uint *)(local_258 + 0x10);
      if (local_238 != (uint *)0x0) {
        puVar26 = local_238;
      }
      uVar27 = uVar27 & puVar26[iVar20];
      while (uVar27 == 0) {
        uStack_3a0 = uVar23 + 0x20;
        local_3b8 = iVar20 + 1;
        if ((int)((local_230 - 1) + ((int)(local_230 - 1) >> 0x1f & 0x1fU)) >> 5 < local_3b8) {
          uStack_3a4 = local_230;
          goto LAB_14be402a3;
        }
        uVar27 = puVar26[(longlong)iVar20 + 1];
        local_3a8 = 0xffffffff;
        uVar23 = uStack_3a0;
        iVar20 = local_3b8;
      }
      uStack_3b4 = -uVar27 & uVar27;
      uVar2 = (ulonglong)uStack_3b4 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_33c = (int)lVar4;
      uStack_3a4 = (uVar23 - 1) + local_33c;
      if ((int)local_230 < (int)uStack_3a4) {
        uStack_3a4 = local_230;
      }
    }
LAB_14be402a3:
    uStack_368 = CONCAT44(uStack_3b4,local_3b8);
    uStack_358 = CONCAT44(uStack_3a4,local_3a8);
    local_350 = CONCAT44(uStack_39c,uStack_3a0);
    local_360 = pTStack_3b0;
    local_378 = pTStack_3b0;
    local_398 = uStack_3a4;
    while( true ) {
      plVar7 = local_2e8;
      uVar25 = local_398;
      if ((int)local_2e8[1] - *(int *)((longlong)local_2e8 + 0x34) != (int)uStack_2c0) {
        local_3e8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3e8);
      }
      if (((TStack_2e0.CurrentBitIndex == uVar25) && (TStack_2e0.Array == local_378)) &&
         (plVar7 == (longlong *)local_258)) break;
      lVar4 = *plVar7;
      lVar19 = (longlong)TStack_2e0.CurrentBitIndex * 0x20;
      local_3e0 = *(byte *)(lVar19 + lVar4);
      local_3d8._padding_ = 0;
      local_3d8.SharedReferenceCount = *(atomic<int> *)(lVar19 + 0x10 + lVar4);
      lVar21 = (longlong)(int)local_3d8.SharedReferenceCount;
      _Src = *(void **)(lVar19 + 8 + lVar4);
      if (local_3d8.SharedReferenceCount == (atomic<int>)0x0) {
        local_3d8.WeakReferenceCount = (atomic<int>)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_3d8.SharedReferenceCount,0,(ForAnyElementType *)&local_3d8,
                   (int)local_3d8.SharedReferenceCount,(int *)&local_3d8.WeakReferenceCount);
        memcpy((void *)local_3d8._padding_,_Src,lVar21 << 2);
      }
      bVar17 = local_3e0;
      this_00 = StaticEnum<enum_EDS_StatusCategoryType>();
      if (this_00 == (UEnum *)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8627520946023956279>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",
                           0xc9,"false");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_3c8.Data.ArrayNum = 0;
        local_3c8.Data.ArrayMax = 0;
        local_3c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      else {
        UEnum::GetNameStringByValue(this_00,local_288,(ulonglong)bVar17);
        local_338 = (FName)this_00->_padding_;
        ::FName::ToString(&local_338,&local_308);
        ::FString::PrintfImpl(&local_2a8,L"%s_%s");
        DS_Util::GetEnumString(&local_3c8,&local_2a8);
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
        if (local_288[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288[0].Data.AllocatorInstance.Data);
        }
      }
      if (local_3c8.Data.ArrayNum < 2) {
LAB_14be4048b:
        if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
        }
        if ((void *)local_3d8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3d8._padding_);
        }
      }
      else {
        pUVar13 = GetTransientPackageAsObject();
        this_01 = NewObject<UDS_UserObjectListItem>(pUVar13);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_01 != (UDS_UserObjectListItem *)0x0) goto LAB_14be404d3;
          goto LAB_14be4048b;
        }
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14be4048b;
        UE::GC::MarkAsReachable((UObject *)this_01);
LAB_14be404d3:
        pFVar14 = ::operator_new(0x40);
        pFVar24 = pFVar22;
        if (pFVar14 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar14->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar14[1].DerivedStaticStruct = 0;
          *(undefined8 *)&pFVar14->DerivedStaticStruct = 0;
          (pFVar14->ViewModelName).ComparisonIndex = 0;
          (pFVar14->ViewModelName).Number = 0;
          pFVar14->_padding_ = (longlong)&___7FDS_ViewModelContext_StatusCategory__6B_;
          pFVar14[1]._padding_ = 0;
          pFVar14[1].ViewModelName.ComparisonIndex = 0;
          pFVar14[1].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar14[1].ViewModelTemplateKey = 0;
          pFVar24 = pFVar14;
        }
        pFVar15 = ::operator_new(0x20);
        pFVar14 = pFVar22;
        if (pFVar15 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar15->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar15->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar15->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_StatusCategory__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar15->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar15->ViewModelTemplateKey = pFVar24;
          pFVar14 = pFVar15;
        }
        if ((pFVar24 == (FDS_ViewModelContext *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar16 = FDS_ViewModelContext_StatusCategory::StaticStruct();
        *(UScriptStruct **)&pFVar24->DerivedStaticStruct = pUVar16;
        this_02 = UDS_ViewModelContextManager::GetInst();
        if (this_02 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar14 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar14->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar14->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_2f8.Object = pFVar24;
          local_2f8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar14;
          UDS_ViewModelContextManager::RegisterContext(this_02,&local_2f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f8.SharedReferenceCount.ReferenceController);
        }
        pFVar24->ViewModelTemplateKey = StatusCategory;
        if ((local_388.Object == (FDS_ViewModelContext_StatusCategoryList *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        aVar6 = local_3d8.SharedReferenceCount;
        lVar4 = local_3d8._padding_;
        pFVar1 = &pFVar24[1].ViewModelName;
        pFVar24[1]._padding_ = (local_388.Object)->PlayerEntityID;
        *(int *)&pFVar24[1].DerivedStaticStruct = (local_388.Object)->CharID;
        *(byte *)((atomic<int> *)&pFVar24[1].DerivedStaticStruct + 1) = local_3e0;
        if ((TReferenceControllerBase<1> *)pFVar1 != &local_3d8) {
          lVar19 = (longlong)(int)local_3d8.SharedReferenceCount;
          puVar18 = &pFVar24[1].field_0x1c;
          pFVar24[1].ViewModelTemplateKey = (EDS_ViewModelTemplateKey)local_3d8.SharedReferenceCount
          ;
          if ((local_3d8.SharedReferenceCount == (atomic<int>)0x0) && (*(int *)puVar18 == 0)) {
            *(undefined4 *)puVar18 = 0;
            this_03 = local_390;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(int)local_3d8.SharedReferenceCount,*(int *)puVar18,
                       (ForAnyElementType *)pFVar1,(int)local_3d8.SharedReferenceCount,
                       (int *)puVar18);
            this_03 = local_390;
            if (aVar6 != (atomic<int>)0x0) {
              memcpy(*(void **)&pFVar1->ComparisonIndex,(void *)lVar4,lVar19 << 2);
              this_03 = local_390;
            }
          }
        }
        if (pFVar14 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar14->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar14->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_298.Object = pFVar24;
        local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar14;
        UDS_UserObjectListItem::AddContext(this_01,&local_298);
        local_330 = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FDS_EntryBindingEventField::Add(this_03,(TObjectPtr<UDS_UserObjectListItem>)&local_330);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar14);
        if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
        }
        if ((void *)local_3d8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3d8._padding_);
        }
      }
      TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
    }
    local_310 = FFieldNotificationClassDescriptor::EntryBindingEventField_StatusCategory.BitNumber;
    local_318 = FFieldNotificationClassDescriptor::EntryBindingEventField_StatusCategory.FieldName;
    (**(code **)(local_328->_padding_ + 0x38))(&local_328->_padding_,&local_318);
    local_210 = 0;
    if (local_218 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_218);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_258);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_388.SharedReferenceCount.ReferenceController);
    param_1 = local_320;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

