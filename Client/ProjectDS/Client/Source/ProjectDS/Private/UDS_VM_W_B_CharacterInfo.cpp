// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b71b470

UClass * __cdecl UDS_VM_W_B_CharacterInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_CharacterInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_CharacterInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_B_CharacterInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_CharacterInfo,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_CharacterInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_CharacterInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_CharacterInfo.InnerSingleton;
}

// UDS_VM_W_B_CharacterInfo @ 14b71d400

UDS_VM_W_B_CharacterInfo * __thiscall
UDS_VM_W_B_CharacterInfo::UDS_VM_W_B_CharacterInfo
          (UDS_VM_W_B_CharacterInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_CharacterInfo__6B_;
  (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr = (UDS_VM_ViewportInteractionButton *)0x0
  ;
  (this->VM_LookAtCheckButton).field0_0x0.DebugPtr = (UDS_VM_Common_Check *)0x0;
  (this->FixedText_LookAt).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_LookAt).StringEnumTableNameID.Number = 0;
  (this->FixedText_LookAt).DateTime.Ticks = 0;
  (this->FixedText_LookAt).TimeSpan.Ticks = 0;
  (this->FixedText_LookAt).TimeExpressionType = None;
  (this->FixedText_LookAt).IsExpression = false;
  (this->FixedText_LookAt).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_LookAt).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_LookAt).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_LookAt).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_LookAt).FormatArgs.ArrayNum = 0;
  (this->FixedText_LookAt).FormatArgs.ArrayMax = 0;
  (this->FixedText_LookAt).StringTableType = StringUi;
  (this->FixedText_LookAt).StringTableID = 0x2984d;
  return this;
}

// UDS_VM_W_B_CharacterInfo @ 14b71d4a0

UDS_VM_W_B_CharacterInfo * __thiscall
UDS_VM_W_B_CharacterInfo::UDS_VM_W_B_CharacterInfo
          (UDS_VM_W_B_CharacterInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_CharacterInfo__6B_;
  (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr = (UDS_VM_ViewportInteractionButton *)0x0
  ;
  (this->VM_LookAtCheckButton).field0_0x0.DebugPtr = (UDS_VM_Common_Check *)0x0;
  (this->FixedText_LookAt).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_LookAt).StringEnumTableNameID.Number = 0;
  (this->FixedText_LookAt).DateTime.Ticks = 0;
  (this->FixedText_LookAt).TimeSpan.Ticks = 0;
  (this->FixedText_LookAt).TimeExpressionType = None;
  (this->FixedText_LookAt).IsExpression = false;
  (this->FixedText_LookAt).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_LookAt).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_LookAt).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_LookAt).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_LookAt).FormatArgs.ArrayNum = 0;
  (this->FixedText_LookAt).FormatArgs.ArrayMax = 0;
  (this->FixedText_LookAt).StringTableType = StringUi;
  (this->FixedText_LookAt).StringTableID = 0x2984d;
  return this;
}

// ~UDS_VM_W_B_CharacterInfo @ 14b71f300

void __thiscall UDS_VM_W_B_CharacterInfo::~UDS_VM_W_B_CharacterInfo(UDS_VM_W_B_CharacterInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_CharacterInfo__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_LookAt).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_LookAt).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_LookAt).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_LookAt).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b720fb0

IClassDescriptor * __thiscall
UDS_VM_W_B_CharacterInfo::GetFieldNotificationDescriptor(UDS_VM_W_B_CharacterInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_B_CharacterInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b721460

UClass * __cdecl UDS_VM_W_B_CharacterInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_CharacterInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_CharacterInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_B_CharacterInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_CharacterInfo,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_CharacterInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_CharacterInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_CharacterInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_B_CharacterInfo @ 14b721b30

void __cdecl UDS_VM_W_B_CharacterInfo::StaticRegisterNativesUDS_VM_W_B_CharacterInfo(void)

{
  return;
}

// BindModel @ 14bf9c5b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_W_B_CharacterInfo::BindModel(UDS_VM_W_B_CharacterInfo *this)

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

// InitViewModelCDO @ 14bfb0f80

void __thiscall UDS_VM_W_B_CharacterInfo::InitViewModelCDO(UDS_VM_W_B_CharacterInfo *this)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  undefined4 local_res10 [2];
  UDS_VM_W_B_CharacterInfo *local_res18;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_78._0_8_ = OnLoadWindowCallbackManual;
  local_78.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_78.Accessor & 0xffffffff00000000);
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget__W4EDS_ContentsTabFrameType__U__TWeakObjectPtr_VUDS_ContentArguments__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_CharacterInfo____A6AXPEAVUDS_UserWidget__W4EDS_ContentsTabFrameType__U__TWeakObjectPtr_VUDS_ContentArguments__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_B_CharacterInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_B_CharacterInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res18);
    puVar2[4] = local_78._0_8_;
    puVar2[5] = local_78.Accessor;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  local_res10[0] = 0xcb;
  if (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._8_4_ !=
      UDS_ContentsController::OnLoadWindowCallbackManualDelegate._52_4_) {
    lVar4 = 0x154cef9f8;
    if (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._64_8_ != 0) {
      lVar4 = UDS_ContentsController::OnLoadWindowCallbackManualDelegate._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)
                             (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._72_4_ - 1
                             & 0xcb) * 4);
    while (iVar1 != -1) {
      lVar4 = UDS_ContentsController::OnLoadWindowCallbackManualDelegate._0_8_ +
              (longlong)iVar1 * 0x28;
      if (*(int *)(UDS_ContentsController::OnLoadWindowCallbackManualDelegate._0_8_ +
                  (longlong)iVar1 * 0x28) == 0xcb) {
        if (lVar4 != 0) goto LAB_14bfb1123;
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x20);
    }
  }
  local_78._0_8_ = local_res10;
  local_78.Accessor = &local_58.AccessDetector;
  TSet<TTuple<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_WindowWidget_&&,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_&&>_>
            (&UDS_ContentsController::OnLoadWindowCallbackManualDelegate,(uint)&local_res18,
             (TPairInitializer<EDS_WindowWidget_&&,TDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_&&>
              *)0xcb,(bool *)&local_78);
LAB_14bfb1123:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// OnChangedLookAtOnOffButton @ 14bfb6a10

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterInfo::OnChangedLookAtOnOffButton
          (UDS_VM_W_B_CharacterInfo *this,uint param_1,bool param_2)

{
  UDS_ViewerManager *this_00;
  bool local_res18 [16];
  
  local_res18[0] = param_2;
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 != (UDS_ViewerManager *)0x0) {
    UDS_ViewerManager::SetEnableLookAt(this_00,local_res18);
  }
  return;
}

// OnChangedLookAtOnOffButton @ 14bfb6a40

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterInfo::OnChangedLookAtOnOffButton(UDS_VM_W_B_CharacterInfo *this,bool param_1)

{
  UDS_ViewerManager *this_00;
  bool local_res10 [24];
  
  local_res10[0] = param_1;
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 != (UDS_ViewerManager *)0x0) {
    UDS_ViewerManager::SetEnableLookAt(this_00,local_res10);
  }
  return;
}

// OnCloseInit @ 14bfbbdc0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_CharacterInfo::OnCloseInit(UDS_VM_W_B_CharacterInfo *this)

{
  UDS_VM_ViewportInteractionButton *this_00;
  UDS_ViewerManager *this_01;
  UDS_WindowManager *this_02;
  float local_res8 [2];
  uint local_res10 [2];
  
  this_00 = (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_ViewportInteractionButton *)0x0) {
    local_res8[0] = 0.0;
    UDS_VM_ViewportInteractionButton::SetActionType
              (this_00,(EDS_ViewportInteractionActionType *)local_res8);
  }
  this_01 = UDS_ViewerManager::GetInst();
  if (this_01 != (UDS_ViewerManager *)0x0) {
    UDS_ViewerManager::CloseViewerScene(this_01);
  }
  this_02 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_02 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_02 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_02);
  }
  local_res8[0] = 0.0;
  local_res10[0] = 0;
  UDS_WindowManager::CloseWindow(this_02,CharacterTooltip,local_res10,local_res8);
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnLoadWindowCallbackManual @ 14bfbec20

void __thiscall
UDS_VM_W_B_CharacterInfo::OnLoadWindowCallbackManual
          (UDS_VM_W_B_CharacterInfo *this,UDS_UserWidget *param_1,EDS_ContentsTabFrameType param_2,
          TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr> param_3)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *pUVar6;
  ulong64 uVar7;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  UDS_UserWidget *local_68;
  UDS_UserWidget *local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pFVar3 = ::operator_new(0x28);
  pFVar8 = (FDS_ViewModelContext *)0x0;
  pFVar9 = pFVar8;
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
    *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
    (pFVar3->ViewModelName).ComparisonIndex = 0;
    (pFVar3->ViewModelName).Number = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_EquipSlotGroup__6B_;
    pFVar3[1]._padding_ = 0;
    pFVar9 = pFVar3;
  }
  pFVar4 = ::operator_new(0x20);
  pFVar3 = pFVar8;
  if (pFVar4 != (FDS_ViewModelContext *)0x0) {
    *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    pFVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_EquipSlotGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar9;
    pFVar3 = pFVar4;
  }
  if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar5 = FDS_ViewModelContext_EquipSlotGroup::StaticStruct();
  *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar5;
  pUVar6 = UDS_ViewModelContextManager::GetInst();
  if (pUVar6 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar3->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar3->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_58.Object = pFVar9;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
    UDS_ViewModelContextManager::RegisterContext(pUVar6,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  uVar7 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  pFVar9[1]._padding_ = uVar7;
  pFVar9->ViewModelTemplateKey = EquipSlotGroup;
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar3->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar3->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_38.Object = pFVar9;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  local_68 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_68);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_78,&local_38,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  pFVar3 = ::operator_new(0x28);
  pFVar9 = pFVar8;
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
    *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
    (pFVar3->ViewModelName).ComparisonIndex = 0;
    (pFVar3->ViewModelName).Number = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_CharDetailInfoGroup__6B_;
    pFVar3[1]._padding_ = 0;
    pFVar9 = pFVar3;
  }
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharDetailInfoGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar9;
    pFVar8 = pFVar3;
  }
  if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar5 = FDS_ViewModelContext_CharDetailInfoGroup::StaticStruct();
  *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar5;
  pUVar6 = UDS_ViewModelContextManager::GetInst();
  if (pUVar6 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_48.Object = pFVar9;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    UDS_ViewModelContextManager::RegisterContext(pUVar6,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  uVar7 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  pFVar9[1]._padding_ = uVar7;
  pFVar9->ViewModelTemplateKey = CharDetailInfoGroup;
  if (pFVar8 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar8->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_28.Object = pFVar9;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_70.ObjectIndex = 0;
  local_70.ObjectSerialNumber = 0;
  local_60 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_60);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_70,&local_28,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  return;
}

// OnSetViewModel @ 14bfc4a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterInfo::OnSetViewModel
          (UDS_VM_W_B_CharacterInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_VM_ViewportInteractionButton *this_00;
  UClass *pUVar4;
  UClass *pUVar5;
  UDS_VM_Common_Check *pUVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  UDS_ViewerManager *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  longlong *plVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext *pFVar14;
  undefined1 auStack_148 [32];
  EDS_ViewportInteractionActionType local_128;
  EDS_ViewerSceneType local_124 [3];
  TSharedPtr<FDS_ViewModelContext,1> local_118;
  undefined8 local_108;
  UDS_VM_W_B_CharacterInfo *local_100;
  TSharedPtr<FDS_ViewModelContext,1> local_f8;
  FDestructionSentinel local_e8;
  FName *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this_00 = (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr;
  if (this_00 == (UDS_VM_ViewportInteractionButton *)0x0) {
    this_00 = UDS_ViewModelBase::CreateViewModel<UDS_VM_ViewportInteractionButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_VM_ViewportInteractionButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr = this_00;
    if (this_00 != (UDS_VM_ViewportInteractionButton *)0x0) goto LAB_14bfc4b0a;
  }
  else {
LAB_14bfc4b0a:
    local_128 = CharacterEquip;
    UDS_VM_ViewportInteractionButton::SetActionType(this_00,&local_128);
  }
  pFVar13 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_LookAtCheckButton).field0_0x0.DebugPtr == (UDS_VM_Common_Check *)0x0) {
    local_108 = 0;
    pUVar4 = Z_Construct_UClass_UDS_VM_Common_Check_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_VM_Common_Check_NoRegister();
    CheckIsClassChildOf_Internal(pUVar5,pUVar4);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar4);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_Transient;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = this;
    pUVar6 = (UDS_VM_Common_Check *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar12 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (pUVar6 != (UDS_VM_Common_Check *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_Common_Check *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_LookAtCheckButton).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 == (UDS_VM_Common_Check *)0x0) goto LAB_14bfc4dfc;
  }
  pFVar7 = ::operator_new(0x40);
  pFVar14 = pFVar13;
  if (pFVar7 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar7->field_0x1c = 0;
    *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
    *(undefined4 *)&pFVar7[1].field_0x1c = 0;
    *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
    (pFVar7->ViewModelName).ComparisonIndex = 0;
    (pFVar7->ViewModelName).Number = 0;
    pFVar7->ViewModelTemplateKey = None;
    pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonCheck__6B_;
    *(undefined8 *)&pFVar7[1].DerivedStaticStruct = 0;
    pFVar7[1].ViewModelName.ComparisonIndex = 0;
    pFVar7[1].ViewModelName.Number = 0;
    pFVar7[1].ViewModelTemplateKey = None;
    pFVar14 = pFVar7;
  }
  pFVar7 = ::operator_new(0x20);
  if (pFVar7 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonCheck__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar14;
    pFVar13 = pFVar7;
  }
  if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar8 = FDS_ViewModelContext_CommonCheck::StaticStruct();
  *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar8;
  this_01 = UDS_ViewModelContextManager::GetInst();
  if (this_01 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar13->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_118.Object = pFVar14;
    local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
    UDS_ViewModelContextManager::RegisterContext(this_01,&local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
  }
  pFVar14->ViewModelTemplateKey = W_CommonCheck;
  pUVar9 = UDS_ViewerManager::GetInst();
  if (pUVar9 != (UDS_ViewerManager *)0x0) {
    bVar3 = UDS_ViewerManager::GetEnableLookAt(pUVar9);
    *(bool *)((longlong)&pFVar14[1]._padding_ + 4) = bVar3;
  }
  local_118.Object = (FDS_ViewModelContext *)OnChangedLookAtOnOffButton;
  local_118.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_f8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar14[1].DerivedStaticStruct,(FWriteAccessScope *)&local_e8);
  local_d0 = &pFVar14[1].ViewModelName;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_d0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXI_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_CharacterInfo____A6AXI_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_100 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_100);
    puVar10[4] = local_118.Object;
    puVar10[5] = local_118.SharedReferenceCount.ReferenceController;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  pUVar6 = (this->VM_LookAtCheckButton).field0_0x0.DebugPtr;
  if (pFVar13 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar13->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_f8.Object = pFVar14;
  local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
LAB_14bfc4dfc:
  pUVar9 = UDS_ViewerManager::GetInst();
  if (pUVar9 != (UDS_ViewerManager *)0x0) {
    local_124[0] = CharacterEquip;
    UDS_ViewerManager::OpenViewerScene(pUVar9,local_124);
    local_124[1] = 0;
    local_124[2] = UDS_PlayerData::GetMainPlayerCurrentCharID();
    UDS_ViewerManager::SetViewerCharacter(pUVar9,(int *)(local_124 + 2),(int *)(local_124 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bfdf8a0

void __thiscall UDS_VM_W_B_CharacterInfo::UnbindModel(UDS_VM_W_B_CharacterInfo *this)

{
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  if ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this->ContentBackgroundClickDelegate !=
      (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               this->ContentBackgroundClickDelegate,this);
    this->ContentBackgroundClickDelegate =
         (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
  }
  return;
}

