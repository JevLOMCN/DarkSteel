// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b6c5e80

UClass * __cdecl UDS_VM_QuestMainStoryInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainStoryInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainStoryInfo",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainStoryInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainStoryInfo,0x140,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_QuestMainStoryInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainStoryInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainStoryInfo.InnerSingleton;
}

// UDS_VM_QuestMainStoryInfo @ 14b6cad10

UDS_VM_QuestMainStoryInfo * __thiscall
UDS_VM_QuestMainStoryInfo::UDS_VM_QuestMainStoryInfo
          (UDS_VM_QuestMainStoryInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainStoryInfo__6B_;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  (this->Story).StringTableType = None;
  (this->Story).StringTableID = 0;
  (this->Story).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Story).StringEnumTableNameID.Number = 0;
  (this->Story).DateTime.Ticks = 0;
  (this->Story).TimeSpan.Ticks = 0;
  (this->Story).TimeExpressionType = None;
  (this->Story).IsExpression = false;
  (this->Story).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Story).UniqueString.Data.ArrayNum = 0;
  (this->Story).UniqueString.Data.ArrayMax = 0;
  (this->Story).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Story).FormatArgs.ArrayNum = 0;
  (this->Story).FormatArgs.ArrayMax = 0;
  (this->Title).StringTableType = None;
  return this;
}

// UDS_VM_QuestMainStoryInfo @ 14b6cadf0

UDS_VM_QuestMainStoryInfo * __thiscall
UDS_VM_QuestMainStoryInfo::UDS_VM_QuestMainStoryInfo
          (UDS_VM_QuestMainStoryInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainStoryInfo__6B_;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  (this->Story).StringTableType = None;
  (this->Story).StringTableID = 0;
  (this->Story).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Story).StringEnumTableNameID.Number = 0;
  (this->Story).DateTime.Ticks = 0;
  (this->Story).TimeSpan.Ticks = 0;
  (this->Story).TimeExpressionType = None;
  (this->Story).IsExpression = false;
  (this->Story).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Story).UniqueString.Data.ArrayNum = 0;
  (this->Story).UniqueString.Data.ArrayMax = 0;
  (this->Story).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Story).FormatArgs.ArrayNum = 0;
  (this->Story).FormatArgs.ArrayMax = 0;
  (this->Title).StringTableType = None;
  return this;
}

// ~UDS_VM_QuestMainStoryInfo @ 14b6cc9d0

void __thiscall
UDS_VM_QuestMainStoryInfo::~UDS_VM_QuestMainStoryInfo(UDS_VM_QuestMainStoryInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainStoryInfo__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Story).FormatArgs.AllocatorInstance.Data,
             (this->Story).FormatArgs.ArrayNum);
  pFVar1 = (this->Story).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Story).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Title).FormatArgs.AllocatorInstance.Data,
             (this->Title).FormatArgs.ArrayNum);
  pFVar1 = (this->Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cfb50

IClassDescriptor * __thiscall
UDS_VM_QuestMainStoryInfo::GetFieldNotificationDescriptor(UDS_VM_QuestMainStoryInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestMainStoryInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0900

UClass * __cdecl UDS_VM_QuestMainStoryInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainStoryInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainStoryInfo",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainStoryInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainStoryInfo,0x140,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_QuestMainStoryInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainStoryInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainStoryInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestMainStoryInfo @ 14b6d10c0

void __cdecl UDS_VM_QuestMainStoryInfo::StaticRegisterNativesUDS_VM_QuestMainStoryInfo(void)

{
  return;
}

// OnSetViewModel @ 14bf6c160

void __thiscall
UDS_VM_QuestMainStoryInfo::OnSetViewModel
          (UDS_VM_QuestMainStoryInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  TSharedPtr<FDS_ViewModelContext_QuestMainStoryInfo,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_QuestMainStoryInfo>(&local_38,&local_28);
  if (local_38.Object == (FDS_ViewModelContext_QuestMainStoryInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  if (local_38.Object == (FDS_ViewModelContext_QuestMainStoryInfo *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = FFieldNotificationClassDescriptor::Title.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Title.FieldName;
  FDS_Text::operator=(&this->Title,&(local_38.Object)->Title);
  local_58 = FVar2;
  local_50 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  if (local_38.Object == (FDS_ViewModelContext_QuestMainStoryInfo *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = FFieldNotificationClassDescriptor::Story.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Story.FieldName;
  FDS_Text::operator=(&this->Story,&(local_38.Object)->Story);
  local_48 = FVar2;
  local_40 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetStory @ 14bf7e4d0

void __thiscall
UDS_VM_QuestMainStoryInfo::SetStory(UDS_VM_QuestMainStoryInfo *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Story.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Story.FieldName;
  FDS_Text::operator=(&this->Story,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTitle @ 14bf7ec60

void __thiscall
UDS_VM_QuestMainStoryInfo::SetTitle(UDS_VM_QuestMainStoryInfo *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Title.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Title.FieldName;
  FDS_Text::operator=(&this->Title,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

