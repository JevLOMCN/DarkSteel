// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b6d3b30

UClass * __cdecl UDS_VM_Required_Time::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Required_Time.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Required_Time",
               &Z_Registration_Info_UClass_UDS_VM_Required_Time.InnerSingleton,
               StaticRegisterNativesUDS_VM_Required_Time,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Required_Time>,
               InternalVTableHelperCtorCaller<UDS_VM_Required_Time>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Required_Time.InnerSingleton;
}

// UDS_VM_Required_Time @ 14b6d8d20

UDS_VM_Required_Time * __thiscall
UDS_VM_Required_Time::UDS_VM_Required_Time(UDS_VM_Required_Time *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Required_Time__6B_;
  FText::FText(&this->RequiredTimeText);
  (this->FixedText_TimeRequired).StringTableType = StringUi;
  (this->FixedText_TimeRequired).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_TimeRequired).StringEnumTableNameID.Number = 0;
  (this->FixedText_TimeRequired).DateTime.Ticks = 0;
  (this->FixedText_TimeRequired).TimeSpan.Ticks = 0;
  (this->FixedText_TimeRequired).TimeExpressionType = None;
  (this->FixedText_TimeRequired).IsExpression = false;
  (this->FixedText_TimeRequired).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_TimeRequired).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_TimeRequired).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_TimeRequired).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_TimeRequired).FormatArgs.ArrayNum = 0;
  (this->FixedText_TimeRequired).FormatArgs.ArrayMax = 0;
  (this->FixedText_TimeRequired).StringTableID = 0x186a4;
  return this;
}

// UDS_VM_Required_Time @ 14b6d8dc0

UDS_VM_Required_Time * __thiscall
UDS_VM_Required_Time::UDS_VM_Required_Time(UDS_VM_Required_Time *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Required_Time__6B_;
  FText::FText(&this->RequiredTimeText);
  (this->FixedText_TimeRequired).StringTableType = StringUi;
  (this->FixedText_TimeRequired).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_TimeRequired).StringEnumTableNameID.Number = 0;
  (this->FixedText_TimeRequired).DateTime.Ticks = 0;
  (this->FixedText_TimeRequired).TimeSpan.Ticks = 0;
  (this->FixedText_TimeRequired).TimeExpressionType = None;
  (this->FixedText_TimeRequired).IsExpression = false;
  (this->FixedText_TimeRequired).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_TimeRequired).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_TimeRequired).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_TimeRequired).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_TimeRequired).FormatArgs.ArrayNum = 0;
  (this->FixedText_TimeRequired).FormatArgs.ArrayMax = 0;
  (this->FixedText_TimeRequired).StringTableID = 0x186a4;
  return this;
}

// ~UDS_VM_Required_Time @ 14b6da710

void __thiscall UDS_VM_Required_Time::~UDS_VM_Required_Time(UDS_VM_Required_Time *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Required_Time__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_TimeRequired).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_TimeRequired).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_TimeRequired).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_TimeRequired).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->RequiredTimeText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dcd70

IClassDescriptor * __thiscall
UDS_VM_Required_Time::GetFieldNotificationDescriptor(UDS_VM_Required_Time *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Required_Time::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd8c0

UClass * __cdecl UDS_VM_Required_Time::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Required_Time.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Required_Time",
               &Z_Registration_Info_UClass_UDS_VM_Required_Time.InnerSingleton,
               StaticRegisterNativesUDS_VM_Required_Time,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Required_Time>,
               InternalVTableHelperCtorCaller<UDS_VM_Required_Time>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Required_Time.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Required_Time @ 14b6ddf50

void __cdecl UDS_VM_Required_Time::StaticRegisterNativesUDS_VM_Required_Time(void)

{
  return;
}

// OnSetViewModel @ 14be3e170

void __thiscall
UDS_VM_Required_Time::OnSetViewModel
          (UDS_VM_Required_Time *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  FText *pFVar6;
  FFieldId local_68;
  TSharedPtr<FDS_ViewModelContext_RequiredTime,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  FString local_38;
  FText local_28 [2];
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_RequiredTime>(&local_58,&local_48);
  if (local_58.Object == (FDS_ViewModelContext_RequiredTime *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5299005163745312796>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Required_Time.cpp"
                       ,0x1c,"context.IsValid()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((local_58.Object)->RequiredTime == 0.0) {
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    }
    UDS_TimeUtilManager::ConvertStringFromSec
              (&local_38,(local_58.Object)->RequiredTime + __real_3f7d70a4,DayHourSec,false);
    iVar4 = FFieldNotificationClassDescriptor::RequiredTimeText.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::RequiredTimeText.FieldName;
    pFVar6 = FText::FromString(local_28,&local_38);
    local_68.FieldName = FVar3;
    local_68.BitNumber = iVar4;
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->RequiredTimeText,pFVar6,&local_68);
    if (local_28[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28[0].TextData.Reference + 0x10))();
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetContext @ 14be4a250

void __thiscall UDS_VM_Required_Time::SetContext(UDS_VM_Required_Time *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28 [2];
  
  pFVar3 = ::operator_new(0x28);
  pFVar5 = (FDS_ViewModelContext *)0x0;
  pFVar6 = pFVar5;
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar3->field_0x1c = 0;
    *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 4) = 0;
    *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
    (pFVar3->ViewModelName).ComparisonIndex = 0;
    (pFVar3->ViewModelName).Number = 0;
    pFVar3->ViewModelTemplateKey = None;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_RequiredTime__6B_;
    pFVar6 = pFVar3;
  }
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RequiredTime__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
    pFVar5 = pFVar3;
  }
  if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar4 = FDS_ViewModelContext_RequiredTime::StaticStruct();
  *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_38.Object = pFVar6;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  pFVar6->ViewModelTemplateKey = RequiredTime;
  *(float *)&pFVar6[1]._padding_ = param_1;
  if (pFVar5 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar5->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_28[0].Object = pFVar6;
  local_28[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this,local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return;
}

