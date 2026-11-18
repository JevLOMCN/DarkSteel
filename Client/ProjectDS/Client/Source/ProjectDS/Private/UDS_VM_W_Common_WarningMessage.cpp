// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetIconID_WrapperImpl @ 14b731120

void __cdecl UDS_VM_W_Common_WarningMessage::SetIconID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0x188) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b731130

UClass * __cdecl UDS_VM_W_Common_WarningMessage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_WarningMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_WarningMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_WarningMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_WarningMessage,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_WarningMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_WarningMessage>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_WarningMessage.InnerSingleton;
}

// UDS_VM_W_Common_WarningMessage @ 14b734690

UDS_VM_W_Common_WarningMessage * __thiscall
UDS_VM_W_Common_WarningMessage::UDS_VM_W_Common_WarningMessage
          (UDS_VM_W_Common_WarningMessage *this,FVTableHelper *param_1)

{
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_WarningMessage__6B_;
  this->IconID = 0;
  this->TitleID = 0;
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
  return this;
}

// UDS_VM_W_Common_WarningMessage @ 14b734720

UDS_VM_W_Common_WarningMessage * __thiscall
UDS_VM_W_Common_WarningMessage::UDS_VM_W_Common_WarningMessage
          (UDS_VM_W_Common_WarningMessage *this,FObjectInitializer *param_1)

{
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_WarningMessage__6B_;
  this->IconID = 0;
  this->TitleID = 0;
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
  return this;
}

// ~UDS_VM_W_Common_WarningMessage @ 14b7361c0

void __thiscall
UDS_VM_W_Common_WarningMessage::~UDS_VM_W_Common_WarningMessage
          (UDS_VM_W_Common_WarningMessage *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_WarningMessage__6B_;
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
  UDS_VM_CommonMessage::~UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7392f0

IClassDescriptor * __thiscall
UDS_VM_W_Common_WarningMessage::GetFieldNotificationDescriptor(UDS_VM_W_Common_WarningMessage *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Common_WarningMessage::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b739fc0

UClass * __cdecl UDS_VM_W_Common_WarningMessage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_WarningMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_WarningMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_WarningMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_WarningMessage,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_WarningMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_WarningMessage>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_WarningMessage.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Common_WarningMessage @ 14b73af00

void __cdecl
UDS_VM_W_Common_WarningMessage::StaticRegisterNativesUDS_VM_W_Common_WarningMessage(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_Common_WarningMessage_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsContentIconVis @ 14b73c750

void __cdecl
UDS_VM_W_Common_WarningMessage::execIsContentIconVis(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsContentIconVis((UDS_VM_W_Common_WarningMessage *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// CheckNextMessage @ 14bf9e280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_WarningMessage::CheckNextMessage(UDS_VM_W_Common_WarningMessage *this)

{
  char cVar1;
  bool bVar2;
  UDS_UIMessageManager *this_00;
  UDS_LogManager *pUVar3;
  longlong *plVar4;
  undefined1 auStackY_248 [32];
  FName FStack_218;
  int iStack_210;
  undefined1 auStack_208 [168];
  undefined4 uStack_160;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  cVar1 = (**(code **)(this->_padding_ + 0x338))();
  if ((cVar1 != '\0') && (bVar2 = FDS_Text::IsEmpty((FDS_Text *)&this->_padding_), bVar2)) {
    this_00 = UDS_UIMessageManager::GetInst();
    if (this_00 == (UDS_UIMessageManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_CommonMessage::CheckNextMessage",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0x26,L"msgMng is nullptr.");
      auStack_208._48_8_ = TStack_138._padding_;
    }
    else {
      FDS_UIMessageInfo::FDS_UIMessageInfo
                ((FDS_UIMessageInfo *)auStack_208,
                 *(EDS_MessageType *)((longlong)&this->_padding_ + 1));
      bVar2 = UDS_UIMessageManager::DequeueMsg(this_00,(FDS_UIMessageInfo *)auStack_208);
      if (bVar2) {
        FDS_Text::operator=((FDS_Text *)&this->_padding_,(FDS_Text *)auStack_208);
        iStack_210 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MsgText.BitNumber;
        FStack_218 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MsgText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_218);
        *(undefined1 *)&this->_padding_ = 3;
        iStack_210 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MessageVisibility.
                     BitNumber;
        FStack_218 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::MessageVisibility.
                     FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_218);
        (**(code **)(this->_padding_ + 0x350))(this,auStack_208 + 0x60);
        plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x340))(this,&FStack_218);
        this->_padding_ = *plVar4;
        *(undefined1 *)((longlong)&this->_padding_ + 4) = 2;
        *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
        iStack_210 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::PlayOpenAniEvent.
                     BitNumber;
        FStack_218 = UDS_VM_CommonMessage::FFieldNotificationClassDescriptor::PlayOpenAniEvent.
                     FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_218);
      }
      else {
        UDS_UIMessageManager::EndMsgQueueing
                  (this_00,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),0,true);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_158);
      if ((void *)auStack_158._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_158._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_158);
      uStack_160 = 0;
      if ((void *)auStack_208._160_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_208._160_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (auStack_208 + 0x60);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)auStack_208._64_8_,auStack_208._72_4_);
      if ((FDS_TextFormatArg *)auStack_208._64_8_ != (FDS_TextFormatArg *)0x0) {
        FMemory::Free((void *)auStack_208._64_8_);
      }
    }
    if ((FScriptContainerElement *)auStack_208._48_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_208._48_8_);
    }
  }
  return;
}

// IsContentIconVis @ 14bfb2d50

bool __thiscall
UDS_VM_W_Common_WarningMessage::IsContentIconVis(UDS_VM_W_Common_WarningMessage *this)

{
  return this->IconID != 0;
}

// IsPlayableNextMessage @ 14bfb3120

bool __thiscall
UDS_VM_W_Common_WarningMessage::IsPlayableNextMessage(UDS_VM_W_Common_WarningMessage *this)

{
  return *(char *)((longlong)&this->_padding_ + 2) == '\0';
}

// OnCloseInit @ 14bfbbf90

void __thiscall UDS_VM_W_Common_WarningMessage::OnCloseInit(UDS_VM_W_Common_WarningMessage *this)

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

// OnSetViewModel @ 14bfcb880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_WarningMessage::OnSetViewModel
          (UDS_VM_W_Common_WarningMessage *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FTimerManager *this_00;
  undefined1 auStackY_1c8 [32];
  ESlateVisibility local_198 [8];
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_190;
  code *local_178;
  undefined8 uStack_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  undefined1 local_148 [272];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  cVar2 = (**(code **)(this->_padding_ + 0x338))();
  if (cVar2 != '\0') {
    local_168.Object = param_1->Object;
    local_168.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_VM_CommonMessage::OnSetViewModel((UDS_VM_CommonMessage *)this,&local_168);
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
    SafeCast<FDS_ViewModelContext_CommonMessage>(&local_190,&local_158);
    if (local_190.Object == (FDS_ViewModelContext_CommonMessage *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                   "UDS_VM_W_Common_WarningMessage::OnSetViewModel",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_30,0x18,L"context.IsValid() == false");
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
      }
    }
    else {
      if (local_190.Object == (FDS_ViewModelContext_CommonMessage *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(EDS_MessageType *)((longlong)&this->_padding_ + 1) = (local_190.Object)->MsgType;
      local_198[0] = Hidden;
      UDS_VM_CommonMessage::SetMessageVisibility((UDS_VM_CommonMessage *)this,local_198);
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
      local_178 = _vcall__816__flat______;
      FTimerManager::SetTimerForNextTick<UDS_VM_W_Common_WarningMessage>
                (this_00,(UDS_VM_W_Common_WarningMessage *)local_148,(pmf_3f802172 *)this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIconID @ 14bfda630

void __thiscall
UDS_VM_W_Common_WarningMessage::SetIconID(UDS_VM_W_Common_WarningMessage *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->IconID = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMsgArgs @ 14bfdc210

void __thiscall
UDS_VM_W_Common_WarningMessage::SetMsgArgs
          (UDS_VM_W_Common_WarningMessage *this,
          TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
          *param_1)

{
  long64 lVar1;
  long64 *plVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  FName local_28;
  int local_20;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar3 = *(undefined1 **)&param_1->field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &param_1->field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & 4) * 4);
    if (iVar4 != -1) {
      do {
        if (*(int *)(*(longlong *)param_1 + (longlong)iVar4 * 0x18) == 4) {
          if (iVar4 != -1) {
            plVar2 = TMapBase<enum_EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>_>
                     ::FindChecked(param_1,IconID);
            this->IconID = (int)*plVar2;
            local_20 = FFieldNotificationClassDescriptor::IconID.BitNumber;
            local_28 = FFieldNotificationClassDescriptor::IconID.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
          }
          break;
        }
        iVar4 = *(int *)(*(longlong *)param_1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  plVar5 = &this->_padding_;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar3 = *(undefined1 **)&param_1->field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &param_1->field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & 3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(int *)(*(longlong *)param_1 + (longlong)iVar4 * 0x18) == 3) {
          if (iVar4 != -1) {
            plVar2 = TMapBase<enum_EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>_>
                     ::FindChecked(param_1,TitleID);
            lVar1 = *plVar2;
            this->TitleID = (int)lVar1;
            FDS_Text::SetTextFromStringTable(&this->TitleText,StringUi,(longlong)(int)lVar1);
            local_20 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
            local_28 = FFieldNotificationClassDescriptor::TitleText.FieldName;
            (**(code **)(*plVar5 + 0x38))(plVar5,&local_28);
          }
          break;
        }
        iVar4 = *(int *)(*(longlong *)param_1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_20 = FFieldNotificationClassDescriptor::IsContentIconVis.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::IsContentIconVis.FieldName;
  (**(code **)(*plVar5 + 0x38))(plVar5,&local_28);
  return;
}

// SetTitleID @ 14bfddee0

void __thiscall
UDS_VM_W_Common_WarningMessage::SetTitleID(UDS_VM_W_Common_WarningMessage *this,int *param_1)

{
  int iVar1;
  FName local_18;
  int local_10;
  
  iVar1 = *param_1;
  this->TitleID = iVar1;
  FDS_Text::SetTextFromStringTable(&this->TitleText,StringUi,(longlong)iVar1);
  local_10 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bfdff50

void __thiscall UDS_VM_W_Common_WarningMessage::UnbindModel(UDS_VM_W_Common_WarningMessage *this)

{
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  UDS_VM_CommonMessage::ClearMsgString((UDS_VM_CommonMessage *)this);
  return;
}

