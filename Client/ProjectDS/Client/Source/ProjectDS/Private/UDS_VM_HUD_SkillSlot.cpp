// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// StaticClass @ 14b6747e0

UClass * __cdecl UDS_VM_HUD_SkillSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_SkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_SkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_HUD_SkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_SkillSlot,1000,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_SkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_SkillSlot>,local_res8,
               UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_SkillSlot.InnerSingleton;
}

// UDS_VM_HUD_SkillSlot @ 14b67a8f0

UDS_VM_HUD_SkillSlot * __thiscall
UDS_VM_HUD_SkillSlot::UDS_VM_HUD_SkillSlot(UDS_VM_HUD_SkillSlot *this,FVTableHelper *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_SkillSlot__6B_;
  this->SlotIndex = 0;
  this->StackCountPosition = 0;
  this->bShowInputKey = false;
  (this->VM_Cooldown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_Vigor).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  this->IsEmptyInfo = false;
  (this->SkillSlotInfo).SlotIndex = 0;
  (this->SkillSlotInfo).SkillID = 0;
  (this->SkillSlotInfo).SkillIconID = 0;
  (this->SkillSlotInfo).IsDraggedFromSkillList = false;
  this->CooldownRemainTime = 0.0;
  return this;
}

// UDS_VM_HUD_SkillSlot @ 14b67a970

UDS_VM_HUD_SkillSlot * __thiscall
UDS_VM_HUD_SkillSlot::UDS_VM_HUD_SkillSlot(UDS_VM_HUD_SkillSlot *this,FObjectInitializer *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_SkillSlot__6B_;
  this->SlotIndex = 0;
  this->StackCountPosition = 0;
  this->bShowInputKey = false;
  (this->VM_Cooldown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_Vigor).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  this->IsEmptyInfo = false;
  (this->SkillSlotInfo).SlotIndex = 0;
  (this->SkillSlotInfo).SkillID = 0;
  (this->SkillSlotInfo).SkillIconID = 0;
  (this->SkillSlotInfo).IsDraggedFromSkillList = false;
  this->CooldownRemainTime = 0.0;
  return this;
}

// ~UDS_VM_HUD_SkillSlot @ 14b67bb80

void __thiscall UDS_VM_HUD_SkillSlot::~UDS_VM_HUD_SkillSlot(UDS_VM_HUD_SkillSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_SkillSlot__6B_;
  UDS_VM_W_CommonSkillSlot::~UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67e130

IClassDescriptor * __thiscall
UDS_VM_HUD_SkillSlot::GetFieldNotificationDescriptor(UDS_VM_HUD_SkillSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_SkillSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67ed70

UClass * __cdecl UDS_VM_HUD_SkillSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_SkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_SkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_HUD_SkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_SkillSlot,1000,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_SkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_SkillSlot>,local_res8,
               UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_SkillSlot.InnerSingleton;
}

// GetTickableTickType @ 14b67f090

ETickableTickType __thiscall UDS_VM_HUD_SkillSlot::GetTickableTickType(UDS_VM_HUD_SkillSlot *this)

{
  return Conditional;
}

// IsUpdate @ 14b67f0f0

bool __thiscall UDS_VM_HUD_SkillSlot::IsUpdate(UDS_VM_HUD_SkillSlot *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_HUD_SkillSlot @ 14b67f340

void __cdecl UDS_VM_HUD_SkillSlot::StaticRegisterNativesUDS_VM_HUD_SkillSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_HUD_SkillSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangeMpValue @ 14b6802f0

void __cdecl
UDS_VM_HUD_SkillSlot::execOnChangeMpValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [4];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeMpValue((UDS_VM_HUD_SkillSlot *)param_1,local_res20[0],local_res10[0]);
  return;
}

// execOnChangeVigorValue @ 14b6803c0

void __cdecl
UDS_VM_HUD_SkillSlot::execOnChangeVigorValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [4];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeVigorValue((UDS_VM_HUD_SkillSlot *)param_1,local_res20[0],local_res10[0]);
  return;
}

// execUpdateSkillSlot @ 14b680870

void __cdecl
UDS_VM_HUD_SkillSlot::execUpdateSkillSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateSkillSlot((UDS_VM_HUD_SkillSlot *)param_1,local_res10);
  return;
}

// BindModel @ 14bf40c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_SkillSlot::BindModel(UDS_VM_HUD_SkillSlot *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  char *pcVar6;
  UDS_CharStatusData *pUVar7;
  FDS_StatusInfo *pFVar8;
  UDS_VM_HUD_SkillSlot *pUVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 auStackY_248 [32];
  undefined1 local_218 [8];
  FWeakObjectPtr local_210;
  undefined1 local_208 [56];
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined1 local_1c8 [32];
  code *local_1a8;
  longlong lStack_1a0;
  code *local_198;
  longlong lStack_190;
  code *local_188;
  longlong lStack_180;
  code *local_178;
  longlong lStack_170;
  code *local_168;
  longlong lStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  UDS_VM_W_CommonSkillSlot::BindModel((UDS_VM_W_CommonSkillSlot *)this);
  UDS_PlayerData::GetData((ulong64)(local_208 + 0x10),UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_208 + 0x10));
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_HUD_SkillSlot::BindModel",0x1f,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0xc3,L"Failed to get PlayerData");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  FWeakObjectPtr::Get((FWeakObjectPtr *)(local_208 + 0x10));
  TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)(local_208 + 0x18));
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_208 + 0x18));
  if (!bVar3) {
    return;
  }
  local_1c8._0_8_ = OnSkillDeckChanged;
  local_1c8._8_4_ = 0;
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_208 + 0x18));
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            TMapBase<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
                        *)&pUVar5[6].field_0x8,this->SlotIndex,&this->SlotIndex);
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
  lStack_1a0 = CONCAT44(local_1c8._12_4_,local_1c8._8_4_);
  local_1a8 = (code *)local_1c8._0_8_;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy>::
  AddUObject<UDS_VM_HUD_SkillSlot>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
             this_00,(UDS_VM_HUD_SkillSlot *)local_208,(pmf_fb079984 *)this);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar3) goto LAB_14bf40fce;
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar5 + 1),(UObject *)this);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pcVar6 = strstr("&UDS_VM_HUD_SkillSlot::UpdateSkillSlot","::");
  if (pcVar6 == (char *)0x0) {
LAB_14bf40e2b:
    pcVar10 = &DAT_00000002;
LAB_14bf40e30:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14bf40e2b;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14bf40e30;
  }
  ::FName::FName((FName *)(local_208 + 0x20),pcVar10);
  local_208._0_8_ = UpdateSkillSlot;
  local_208._8_4_ = 0;
  lStack_190 = (ulonglong)(uint)local_208._12_4_ << 0x20;
  local_198 = UpdateSkillSlot;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_AddDynamic<UDS_VM_HUD_SkillSlot>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*> *)
             (pUVar5 + 1),this,(pmf_e95ce90e *)&local_198,(FName)local_208._32_8_);
  UDS_VM_W_CommonSkillSlot::BindSkillData_StartEnd
            ((UDS_VM_W_CommonSkillSlot *)this,
             (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)this->_padding_);
  FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_CharStatusData::GetData((ulong64)&local_210);
  bVar3 = FWeakObjectPtr::IsValid(&local_210);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    iVar1 = *(int *)&pUVar5[9].field_0x20;
    puVar11 = *(undefined4 **)&pUVar5[9].field_0x18;
    puVar12 = puVar11 + (longlong)iVar1 * 4;
    while( true ) {
      if (*(int *)&pUVar5[9].field_0x20 != iVar1) {
        `TCheckedPointerIterator<FDS_SkillCost_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_218);
      }
      if (puVar11 == puVar12) break;
      if ((char)*puVar11 == '\x01') {
        pUVar7 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_210);
        pFVar8 = UDS_CharStatusData::GetStatusInfo(pUVar7,Mp);
        if (pFVar8 != (FDS_StatusInfo *)0x0) {
          local_208._0_8_ = OnChangeMpValue;
          local_208._8_4_ = 0;
          pUVar9 = (UDS_VM_HUD_SkillSlot *)(local_1c8 + 0x10);
          lStack_180 = (ulonglong)(uint)local_208._12_4_ << 0x20;
          local_188 = OnChangeMpValue;
LAB_14bf40f9e:
          TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
          AddUObject<UDS_VM_HUD_SkillSlot>
                    ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                      *)&pFVar8->ChangeStatusDelegate,pUVar9,(pmf_2ee7b500 *)this);
        }
      }
      else if ((char)*puVar11 == '\x02') {
        pUVar7 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_210);
        pFVar8 = UDS_CharStatusData::GetStatusInfo(pUVar7,Vigor);
        if (pFVar8 != (FDS_StatusInfo *)0x0) {
          local_208._40_4_ = 0;
          local_208._32_8_ = OnChangeVigorValue;
          lStack_170 = (ulonglong)(uint)local_208._44_4_ << 0x20;
          pUVar9 = (UDS_VM_HUD_SkillSlot *)(local_208 + 0x30);
          local_178 = OnChangeVigorValue;
          goto LAB_14bf40f9e;
        }
      }
      puVar11 = puVar11 + 4;
    }
  }
LAB_14bf40fce:
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar3) {
    uStack_1d0 = 0;
    local_208._48_8_ = UDS_VM_W_CommonSkillSlot::OnChangedBuffList;
    lStack_160 = (ulonglong)uStack_1cc << 0x20;
    local_168 = UDS_VM_W_CommonSkillSlot::OnChangedBuffList;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_HUD_SkillSlot>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar5[6].field_0x8,(UDS_VM_HUD_SkillSlot *)local_1c8,(pmf_3deb46e2 *)this);
  }
  return;
}

// InitViewModel @ 14bf5b240

void __thiscall UDS_VM_HUD_SkillSlot::InitViewModel(UDS_VM_HUD_SkillSlot *this)

{
  UDS_VM_Progress *pUVar1;
  UDS_VM_StackSkillCount *pUVar2;
  UDS_VM_InputKey *pUVar3;
  
  UDS_VM_W_CommonSkillSlot::InitViewModel((UDS_VM_W_CommonSkillSlot *)this);
  if ((this->VM_Cooldown).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_Cooldown).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_AvailableTime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_AvailableTime).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_Vigor).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_Vigor).field0_0x0.DebugPtr = pUVar1;
  }
  if (this->_padding_ == 0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StackSkillCount>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_VM_StackSkillCount *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    this->_padding_ = (longlong)pUVar2;
  }
  if (this->_padding_ == 0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StackSkillCount>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_VM_StackSkillCount *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    this->_padding_ = (longlong)pUVar2;
  }
  if (this->_padding_ == 0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    this->_padding_ = (longlong)pUVar3;
  }
  this->IsEmptyInfo = false;
  return;
}

// OnChangeMpValue @ 14bf5f140

void __thiscall
UDS_VM_HUD_SkillSlot::OnChangeMpValue(UDS_VM_HUD_SkillSlot *this,float param_1,float param_2)

{
  bool bVar1;
  UDS_SkillData *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = UDS_SkillData::CheckSkillCost(this_00);
    UDS_VM_W_CommonSkillSlot::SetIsButtonDisabled((UDS_VM_W_CommonSkillSlot *)this,!bVar1);
  }
  return;
}

// OnChangeVigorValue @ 14bf5fdb0

void __thiscall
UDS_VM_HUD_SkillSlot::OnChangeVigorValue(UDS_VM_HUD_SkillSlot *this,float param_1,float param_2)

{
  UDS_VM_Progress *this_00;
  bool bVar1;
  UDS_SkillData *this_01;
  float fVar2;
  
  if (((this->VM_Vigor).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) &&
     (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), bVar1)) {
    this_00 = (this->VM_Vigor).field0_0x0.DebugPtr;
    if (0.0 < param_2) {
      UDS_VM_Progress::SetMaxValue(this_00,param_2);
      UDS_VM_Progress::SetTargetValue((this->VM_Vigor).field0_0x0.DebugPtr,param_2);
      UDS_VM_Progress::SetCurrentValue((this->VM_Vigor).field0_0x0.DebugPtr,param_1);
      UDS_VM_W_CommonSkillSlot::SetVigorValue((UDS_VM_W_CommonSkillSlot *)this,param_1);
      fVar2 = UDS_VM_Progress::GetCurrentPercent((this->VM_Vigor).field0_0x0.DebugPtr);
      UDS_VM_W_CommonSkillSlot::SetVigorProgressRatio((UDS_VM_W_CommonSkillSlot *)this,fVar2);
      this_01 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      bVar1 = UDS_SkillData::CheckSkillCost(this_01);
      UDS_VM_W_CommonSkillSlot::SetIsButtonDisabled((UDS_VM_W_CommonSkillSlot *)this,!bVar1);
    }
    else {
      UDS_VM_Progress::SetCurrentValue(this_00,0.0);
    }
  }
  return;
}

// OnClickSkillSlot @ 14bf62820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_HUD_SkillSlot::OnClickSkillSlot(UDS_VM_HUD_SkillSlot *this)

{
  longlong *this_00;
  bool bVar1;
  UDS_DataBase *pUVar2;
  FDS_EntityBase *this_01;
  UObject *pUVar3;
  EDS_AbilityTagType local_res8 [8];
  FWeakObjectPtr local_res10;
  ulong64 local_res18;
  ulong64 local_res20;
  
  this_00 = &this->_padding_;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (!bVar1) {
    return;
  }
  pUVar2 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res18 = UDS_DataBase::GetEntityID(pUVar2);
  this_01 = FDS_EntityBase::GetEntityBase(&local_res18);
  if (this_01 == (FDS_EntityBase *)0x0) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if (pUVar3[9].field_0x7 != '\0') {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    FDS_EntityBase::TryActivateSkillAbility(this_01,*(int *)&pUVar3[2].field_0x1c);
    return;
  }
  local_res8[0] = AirWalk_Process;
  pUVar2 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res20 = UDS_DataBase::GetEntityID(pUVar2);
  UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
            ((ulong64 *)&local_res10,(EDS_AbilityTagType *)&local_res20);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar1) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar3[4].field_0x20 != '\x01') {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    local_res8[0] = NormalAttack;
    if (pUVar3[4].field_0x20 != '\x02') goto LAB_14bf628ee;
  }
  local_res8[0] = AirNormalAttack;
LAB_14bf628ee:
  local_res20 = 0;
  FDS_EntityBase::TryActivateAbility
            (this_01,local_res8,(TObjectPtr<UWN_AbilityContext>)&local_res20);
  return;
}

// OnCloseInit @ 14bf634a0

void __thiscall UDS_VM_HUD_SkillSlot::OnCloseInit(UDS_VM_HUD_SkillSlot *this)

{
  this->_padding_ = 0;
  return;
}

// OnSetViewModel @ 14bf693c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_SkillSlot::OnSetViewModel
          (UDS_VM_HUD_SkillSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *this_00;
  int iVar1;
  UDS_ViewModelBase *pUVar2;
  code *pcVar3;
  FDS_ViewModelContext_SkillData *pFVar4;
  FDS_ViewModelContext_Smite *pFVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UDS_DataBase *pUVar8;
  UObject *pUVar9;
  UDS_CharStatusData *pUVar10;
  FDS_StatusInfo *pFVar11;
  UDS_SkillData *this_01;
  FWeakObjectPtr FVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined1 auStackY_268 [32];
  undefined1 local_238 [8];
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  FWeakObjectPtr local_220;
  TSharedPtr<FDS_ViewModelContext_SkillSlot,1> local_218;
  UObject *local_208;
  undefined8 local_200;
  undefined8 local_1f8 [2];
  TSharedPtr<FDS_ViewModelContext_SkillData,1> local_1e8;
  TSharedPtr<FDS_ViewModelContext_SkillData,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext_Smite,1> local_1c8;
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1b8.Object = param_1->Object;
  local_1b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_W_CommonSkillSlot::OnSetViewModel((UDS_VM_W_CommonSkillSlot *)this,&local_1b8);
  local_1a8.Object = param_1->Object;
  local_1a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_SkillSlot>(&local_218,&local_1a8);
  if (local_218.Object != (FDS_ViewModelContext_SkillSlot *)0x0) {
    UDS_PlayerData::GetMainPlayerCurrentEntityID();
    UDS_CharStatusData::GetData((ulong64)&local_230);
    bVar6 = FWeakObjectPtr::IsValid(&local_230);
    if (bVar6) {
      if (local_218.Object == (FDS_ViewModelContext_SkillSlot *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this->SlotIndex = (local_218.Object)->SlotIndex;
      this->StackCountPosition = (local_218.Object)->StackCountPosition;
      this->bShowInputKey = (local_218.Object)->bShowInputKey;
      local_208 = FWeakObjectPtr::Get(&((local_218.Object)->SkillData).WeakPtr);
      this_00 = &this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_208);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_208);
      bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
      if (bVar6) {
        this->IsEmptyInfo = false;
        UDS_VM_W_CommonSkillSlot::SetIsSkillExist((UDS_VM_W_CommonSkillSlot *)this,true);
        pUVar8 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        UpdateSkillSlot(this,pUVar8);
        UDS_VM_W_CommonSkillSlot::SetVis_Vigor((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        iVar1 = *(int *)&pUVar9[9].field_0x20;
        puVar13 = *(undefined4 **)&pUVar9[9].field_0x18;
        puVar14 = puVar13 + (longlong)iVar1 * 4;
LAB_14bf69610:
        do {
          if (*(int *)&pUVar9[9].field_0x20 != iVar1) {
            local_238[0] = 0;
            `TCheckedPointerIterator<FDS_SkillCost_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_238);
          }
          if (puVar13 == puVar14) goto LAB_14bf696ca;
          if ((char)*puVar13 == '\x01') {
            pUVar10 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_230);
            pFVar11 = UDS_CharStatusData::GetStatusInfo(pUVar10,Mp);
            if (pFVar11 != (FDS_StatusInfo *)0x0) {
              bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
              if (bVar6) {
                this_01 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
                bVar6 = UDS_SkillData::CheckSkillCost(this_01);
                UDS_VM_W_CommonSkillSlot::SetIsButtonDisabled
                          ((UDS_VM_W_CommonSkillSlot *)this,!bVar6);
                puVar13 = puVar13 + 4;
                goto LAB_14bf69610;
              }
            }
          }
          else if ((char)*puVar13 == '\x02') {
            UDS_VM_W_CommonSkillSlot::SetVis_Vigor
                      ((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible);
            pUVar10 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_230);
            pFVar11 = UDS_CharStatusData::GetStatusInfo(pUVar10,Vigor);
            if (pFVar11 != (FDS_StatusInfo *)0x0) {
              OnChangeVigorValue(this,(float)pFVar11->CurrentValue,pFVar11->MaxValue);
            }
          }
          puVar13 = puVar13 + 4;
        } while( true );
      }
      UDS_VM_W_CommonSkillSlot::SetIsSkillExist((UDS_VM_W_CommonSkillSlot *)this,false);
      SetEmptyInfo(this,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
      goto LAB_14bf69904;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_HUD_SkillSlot::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,0x53,L"charStatusData is invalid.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.SharedReferenceCount.ReferenceController);
  goto LAB_14bf69904;
LAB_14bf696ca:
  if (this->_padding_ != 0) {
    MakeContext<FDS_ViewModelContext_SkillData>(&local_1e8);
    pFVar4 = local_1e8.Object;
    if (local_1e8.Object == (FDS_ViewModelContext_SkillData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&pFVar4->_padding_ = 0xc4;
    if (this->StackCountPosition == 1) {
      FVar12 = (FWeakObjectPtr)*this_00;
    }
    else {
      local_228.ObjectIndex = 0;
      local_228.ObjectSerialNumber = 0;
      local_200 = 0;
      FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_200);
      FVar12 = local_228;
    }
    (pFVar4->SkillData).WeakPtr = FVar12;
    pUVar2 = (UDS_ViewModelBase *)this->_padding_;
    local_198.Object = (FDS_ViewModelContext *)local_1e8.Object;
    local_198.SharedReferenceCount.ReferenceController =
         local_1e8.SharedReferenceCount.ReferenceController;
    if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext(pUVar2,&local_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.SharedReferenceCount.ReferenceController);
  }
  if (this->_padding_ != 0) {
    MakeContext<FDS_ViewModelContext_SkillData>(&local_1d8);
    pFVar4 = local_1d8.Object;
    if (local_1d8.Object == (FDS_ViewModelContext_SkillData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&pFVar4->_padding_ = 0xc4;
    if (this->StackCountPosition == 2) {
      FVar12 = (FWeakObjectPtr)*this_00;
    }
    else {
      local_220.ObjectIndex = 0;
      local_220.ObjectSerialNumber = 0;
      local_1f8[0] = 0;
      FWeakObjectPtr::operator=(&local_220,(FObjectPtr)local_1f8);
      FVar12 = local_220;
    }
    (pFVar4->SkillData).WeakPtr = FVar12;
    pUVar2 = (UDS_ViewModelBase *)this->_padding_;
    local_188.Object = (FDS_ViewModelContext *)local_1d8.Object;
    local_188.SharedReferenceCount.ReferenceController =
         local_1d8.SharedReferenceCount.ReferenceController;
    if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext(pUVar2,&local_188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
  }
  if (this->_padding_ != 0) {
    UDS_VM_W_CommonSkillSlot::SetVis_Smite((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible);
    MakeContext<FDS_ViewModelContext_Smite>(&local_1c8);
    pFVar5 = local_1c8.Object;
    if (local_1c8.Object == (FDS_ViewModelContext_Smite *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x21;
    pFVar5->TargetEntityID = 0;
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    local_178.Object = (FDS_ViewModelContext *)local_1c8.Object;
    local_178.SharedReferenceCount.ReferenceController =
         local_1c8.SharedReferenceCount.ReferenceController;
    pFVar5->SkillID = *(int *)&pUVar9[2].field_0x1c;
    pUVar2 = (UDS_ViewModelBase *)this->_padding_;
    if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext(pUVar2,&local_178);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.SharedReferenceCount.ReferenceController);
  }
  UpdateInputKey(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.SharedReferenceCount.ReferenceController);
LAB_14bf69904:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSkillDeckChanged @ 14bf70790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_SkillSlot::OnSkillDeckChanged(UDS_VM_HUD_SkillSlot *this,int param_1)

{
  longlong *this_00;
  int iVar1;
  UDS_ViewModelBase *pUVar2;
  code *pcVar3;
  FDS_ViewModelContext_SkillData *pFVar4;
  FDS_ViewModelContext_Smite *pFVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  UDS_DataSetBase *this_01;
  ulong64 uVar9;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar10;
  char *pcVar11;
  UDS_DataBase *pUVar12;
  UDS_CharStatusData *pUVar13;
  FDS_StatusInfo *pFVar14;
  UDS_SkillData *this_02;
  FWeakObjectPtr FVar15;
  char *pcVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined1 auStackY_4a8 [32];
  undefined1 local_478 [8];
  FWeakObjectPtr local_470;
  FWeakObjectPtr local_468;
  FWeakObjectPtr local_460;
  FWeakObjectPtr local_458;
  FWeakObjectPtr local_450;
  code *local_448;
  undefined8 uStack_440;
  FName local_438;
  undefined8 local_430;
  undefined8 local_428 [2];
  TSharedPtr<FDS_ViewModelContext_SkillData,1> local_418;
  TSharedPtr<FDS_ViewModelContext_SkillData,1> local_408;
  TSharedPtr<FDS_ViewModelContext_Smite,1> local_3f8;
  undefined1 local_3e8 [16];
  TSharedPtr<FDS_ViewModelContext,1> local_3d8;
  TSharedPtr<FDS_ViewModelContext,1> local_3c8;
  TSharedPtr<FDS_ViewModelContext,1> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  UDS_PlayerData::GetData((ulong64)&local_458,UDS_PlayerData::MainPlayerEntityID,false);
  bVar6 = FWeakObjectPtr::IsValid(&local_458);
  if (!bVar6) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"UDS_VM_HUD_SkillSlot::OnSkillDeckChanged",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_3a8.Ptr,0x241,L"Failed to get PlayerData");
    if ((void *)local_3a8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_3a8._padding_);
    return;
  }
  FWeakObjectPtr::Get(&local_458);
  TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_450);
  bVar6 = FWeakObjectPtr::IsValid(&local_450);
  if (!bVar6) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"UDS_VM_HUD_SkillSlot::OnSkillDeckChanged",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_288.Ptr,0x248,L"skillDataSet is invalid.");
    if ((void *)local_288._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_288._padding_);
    return;
  }
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharStatusData::GetData((ulong64)&local_470);
  bVar6 = FWeakObjectPtr::IsValid(&local_470);
  if (!bVar6) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_HUD_SkillSlot::OnSkillDeckChanged",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,0x24f,L"charStatusData is invalid.");
    if ((void *)local_168._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_168._padding_);
    return;
  }
  this_00 = &this->_padding_;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar6) {
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar8 + 1),(UObject *)this)
    ;
    UDS_VM_W_CommonSkillSlot::UnbindSkillData_StartEnd
              ((UDS_VM_W_CommonSkillSlot *)this,
               (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)*this_00);
  }
  this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_450);
  uVar9 = UDS_DataSetBase::GetDataContainerKey(this_01);
  TVar10 = UDS_SkillData::GetData((ulong64)local_3e8,uVar9,SUB41(param_1,0));
  *this_00 = *(longlong *)TVar10.WeakPtr;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (!bVar6) {
    UDS_VM_W_CommonSkillSlot::SetIsSkillExist((UDS_VM_W_CommonSkillSlot *)this,false);
    SetEmptyInfo(this,0);
    return;
  }
  this->IsEmptyInfo = false;
  UDS_VM_W_CommonSkillSlot::SetIsSkillExist((UDS_VM_W_CommonSkillSlot *)this,true);
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pcVar11 = strstr("&UDS_VM_HUD_SkillSlot::UpdateSkillSlot","::");
  if (pcVar11 == (char *)0x0) {
LAB_14bf70acb:
    pcVar16 = &DAT_00000002;
  }
  else {
    do {
      pcVar16 = pcVar11;
      pcVar11 = strstr(pcVar16 + 1,"::");
    } while (pcVar11 != (char *)0x0);
    if (pcVar16 == (char *)0x0) goto LAB_14bf70acb;
    pcVar16 = pcVar16 + 2;
    if (*pcVar16 != '0') goto LAB_14bf70afe;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14bf70afe:
  ::FName::FName(&local_438,pcVar16);
  uStack_440 = (ulonglong)uStack_440._4_4_ << 0x20;
  local_448 = UpdateSkillSlot;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_AddDynamic<UDS_VM_HUD_SkillSlot>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*> *)
             (pUVar8 + 1),this,(pmf_e95ce90e *)&local_448,local_438);
  UDS_VM_W_CommonSkillSlot::BindSkillData_StartEnd
            ((UDS_VM_W_CommonSkillSlot *)this,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)*this_00
            );
  pUVar12 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  UpdateSkillSlot(this,pUVar12);
  UDS_VM_W_CommonSkillSlot::SetVis_Vigor((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  iVar1 = *(int *)&pUVar8[9].field_0x20;
  puVar17 = *(undefined4 **)&pUVar8[9].field_0x18;
  puVar18 = puVar17 + (longlong)iVar1 * 4;
LAB_14bf70b90:
  do {
    if (*(int *)&pUVar8[9].field_0x20 != iVar1) {
      local_478[0] = 0;
      `TCheckedPointerIterator<FDS_SkillCost_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_478);
    }
    if (puVar17 == puVar18) {
      if (this->_padding_ != 0) {
        MakeContext<FDS_ViewModelContext_SkillData>(&local_418);
        pFVar4 = local_418.Object;
        if ((local_418.Object == (FDS_ViewModelContext_SkillData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar4->_padding_ = 0xc4;
        if (this->StackCountPosition == 1) {
          FVar15 = (FWeakObjectPtr)*this_00;
        }
        else {
          local_468.ObjectIndex = 0;
          local_468.ObjectSerialNumber = 0;
          local_430 = 0;
          FWeakObjectPtr::operator=(&local_468,(FObjectPtr)&local_430);
          FVar15 = local_468;
        }
        (pFVar4->SkillData).WeakPtr = FVar15;
        pUVar2 = (UDS_ViewModelBase *)this->_padding_;
        local_3d8.Object = (FDS_ViewModelContext *)local_418.Object;
        local_3d8.SharedReferenceCount.ReferenceController =
             local_418.SharedReferenceCount.ReferenceController;
        if (local_418.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext(pUVar2,&local_3d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_418.SharedReferenceCount.ReferenceController);
      }
      if (this->_padding_ != 0) {
        MakeContext<FDS_ViewModelContext_SkillData>(&local_408);
        pFVar4 = local_408.Object;
        if ((local_408.Object == (FDS_ViewModelContext_SkillData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar4->_padding_ = 0xc4;
        if (this->StackCountPosition == 2) {
          FVar15 = (FWeakObjectPtr)this->_padding_;
        }
        else {
          local_460.ObjectIndex = 0;
          local_460.ObjectSerialNumber = 0;
          local_428[0] = 0;
          FWeakObjectPtr::operator=(&local_460,(FObjectPtr)local_428);
          FVar15 = local_460;
        }
        (pFVar4->SkillData).WeakPtr = FVar15;
        pUVar2 = (UDS_ViewModelBase *)this->_padding_;
        local_3c8.Object = (FDS_ViewModelContext *)local_408.Object;
        local_3c8.SharedReferenceCount.ReferenceController =
             local_408.SharedReferenceCount.ReferenceController;
        if (local_408.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext(pUVar2,&local_3c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_408.SharedReferenceCount.ReferenceController);
      }
      if (this->_padding_ != 0) {
        UDS_VM_W_CommonSkillSlot::SetVis_Smite
                  ((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible);
        MakeContext<FDS_ViewModelContext_Smite>(&local_3f8);
        pFVar5 = local_3f8.Object;
        if ((local_3f8.Object == (FDS_ViewModelContext_Smite *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar5->_padding_ = 0x21;
        pFVar5->TargetEntityID = 0;
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_3b8.Object = (FDS_ViewModelContext *)local_3f8.Object;
        local_3b8.SharedReferenceCount.ReferenceController =
             local_3f8.SharedReferenceCount.ReferenceController;
        pFVar5->SkillID = *(int *)&pUVar8[2].field_0x1c;
        pUVar2 = (UDS_ViewModelBase *)this->_padding_;
        if (local_3f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_3f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_3f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext(pUVar2,&local_3b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3f8.SharedReferenceCount.ReferenceController);
      }
      UpdateInputKey(this);
      return;
    }
    if ((char)*puVar17 == '\x01') {
      pUVar13 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_470);
      pFVar14 = UDS_CharStatusData::GetStatusInfo(pUVar13,Mp);
      if ((pFVar14 != (FDS_StatusInfo *)0x0) &&
         (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), bVar6)) {
        this_02 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        bVar6 = UDS_SkillData::CheckSkillCost(this_02);
        UDS_VM_W_CommonSkillSlot::SetIsButtonDisabled((UDS_VM_W_CommonSkillSlot *)this,!bVar6);
        puVar17 = puVar17 + 4;
        goto LAB_14bf70b90;
      }
    }
    else if ((char)*puVar17 == '\x02') {
      UDS_VM_W_CommonSkillSlot::SetVis_Vigor((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible);
      pUVar13 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_470);
      pFVar14 = UDS_CharStatusData::GetStatusInfo(pUVar13,Vigor);
      if (pFVar14 != (FDS_StatusInfo *)0x0) {
        OnChangeVigorValue(this,(float)pFVar14->CurrentValue,pFVar14->MaxValue);
      }
    }
    puVar17 = puVar17 + 4;
  } while( true );
}

// OnUpdate @ 14bf721f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_SkillSlot::OnUpdate(UDS_VM_HUD_SkillSlot *this,float param_1)

{
  UDS_VM_Progress *pUVar1;
  bool bVar2;
  char cVar3;
  ESlateVisibility EVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UDS_DataBase *pUVar8;
  float fVar9;
  undefined1 auStackY_178 [32];
  int local_148 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->IsEmptyInfo == true) {
    return;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar2) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_SkillSlot::OnUpdate",0x1e,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x128,L"SkillData is not valid.");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  pUVar1 = (this->VM_Cooldown).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_VM_Progress *)0x0) {
    fVar9 = UDS_VM_Progress::GetRemainValue(pUVar1);
    pUVar1 = (this->VM_Cooldown).field0_0x0.DebugPtr;
    this->CooldownRemainTime = fVar9;
    bVar2 = UDS_VM_Progress::GetIsUpdateCurrentValue(pUVar1);
    if (bVar2) {
      fVar9 = UDS_VM_Progress::GetReverseCurrentPercent((this->VM_Cooldown).field0_0x0.DebugPtr);
      UDS_VM_W_CommonSkillSlot::SetCooldownProgressRatio((UDS_VM_W_CommonSkillSlot *)this,fVar9);
      fVar9 = UDS_VM_Progress::GetRemainValue((this->VM_Cooldown).field0_0x0.DebugPtr);
      UDS_VM_W_CommonSkillSlot::SetCooldownValue((UDS_VM_W_CommonSkillSlot *)this,fVar9);
      UDS_VM_W_CommonSkillSlot::SetIsButtonDisabled((UDS_VM_W_CommonSkillSlot *)this,true);
      UDS_VM_W_CommonSkillSlot::SetVis_CooldownProgress
                ((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible);
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (pUVar7[9].field_0x8 == '\x03') {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        iVar5 = (**(code **)(*(longlong *)pUVar7 + 0x2f0))(pUVar7);
        if (iVar5 < 1) {
          local_148[0] = 0;
          UDS_VM_W_CommonSkillSlot::SetCooldownSwitcherIndex
                    ((UDS_VM_W_CommonSkillSlot *)this,local_148);
        }
        else {
          local_148[0] = 1;
          UDS_VM_W_CommonSkillSlot::SetCooldownSwitcherIndex
                    ((UDS_VM_W_CommonSkillSlot *)this,local_148);
        }
      }
      else {
        local_148[0] = 0;
        UDS_VM_W_CommonSkillSlot::SetCooldownSwitcherIndex
                  ((UDS_VM_W_CommonSkillSlot *)this,local_148);
      }
      goto LAB_14bf723ec;
    }
    if (this->CooldownRemainTime != 0.0) goto LAB_14bf723ec;
    this->CooldownRemainTime = -1.0;
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    cVar3 = (**(code **)(*(longlong *)pUVar7 + 0x2f8))(pUVar7);
    UDS_VM_W_CommonSkillSlot::SetIsButtonDisabled((UDS_VM_W_CommonSkillSlot *)this,cVar3 == '\0');
  }
  UDS_VM_W_CommonSkillSlot::SetVis_CooldownProgress((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
LAB_14bf723ec:
  pUVar1 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
  if ((pUVar1 == (UDS_VM_Progress *)0x0) ||
     (bVar2 = UDS_VM_Progress::GetIsUpdateCurrentValue(pUVar1), !bVar2)) {
    EVar4 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this);
    if (EVar4 != Collapsed) {
      pUVar8 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UpdateSkillSlot(this,pUVar8);
    }
    EVar4 = Collapsed;
  }
  else {
    fVar9 = UDS_VM_Progress::GetCurrentPercent((this->VM_AvailableTime).field0_0x0.DebugPtr);
    UDS_VM_W_CommonSkillSlot::SetAvailableProgressRatio((UDS_VM_W_CommonSkillSlot *)this,fVar9);
    EVar4 = SelfHitTestInvisible;
  }
  UDS_VM_W_CommonSkillSlot::SetVis_AvailableProgress((UDS_VM_W_CommonSkillSlot *)this,EVar4);
  return;
}

// SetEmptyInfo @ 14bf7aac0

void __thiscall UDS_VM_HUD_SkillSlot::SetEmptyInfo(UDS_VM_HUD_SkillSlot *this,int param_1)

{
  this->IsEmptyInfo = true;
  UDS_VM_W_CommonSkillSlot::SetIcon((UDS_VM_W_CommonSkillSlot *)this,param_1);
  UDS_VM_W_CommonSkillSlot::SetVis_CooldownProgress((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_AvailableProgress((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_ToggleSkill((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_Smite((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_UseSkill((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_EndCoolDown((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_Vigor((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_Silence((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UpdateInputKey(this);
  SetSkillSlotInfo(this);
  return;
}

// SetSkillSlotInfo @ 14bf7d940

void __thiscall UDS_VM_HUD_SkillSlot::SetSkillSlotInfo(UDS_VM_HUD_SkillSlot *this)

{
  bool bVar1;
  UObject *pUVar2;
  int iVar3;
  FName local_18;
  int local_10;
  
  (this->SkillSlotInfo).SlotIndex = this->SlotIndex;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (this->SkillSlotInfo).SkillID = *(int *)&pUVar2[2].field_0x1c;
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    iVar3 = *(int *)&pUVar2[5].field_0x8;
  }
  else {
    iVar3 = 0;
    (this->SkillSlotInfo).SkillID = 0;
  }
  (this->SkillSlotInfo).SkillIconID = iVar3;
  local_10 = FFieldNotificationClassDescriptor::SkillSlotInfo.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SkillSlotInfo.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf84cf0

void __thiscall UDS_VM_HUD_SkillSlot::UnbindModel(UDS_VM_HUD_SkillSlot *this)

{
  bool bVar1;
  uint uVar2;
  UObject *pUVar3;
  uint *puVar4;
  UDS_CharStatusData *pUVar5;
  FDS_StatusInfo *pFVar6;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  undefined1 *puVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  
  UDS_VM_W_CommonSkillSlot::UnbindModel((UDS_VM_W_CommonSkillSlot *)this);
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    FWeakObjectPtr::Get(&local_res10);
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res18);
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      if (*(int *)&pUVar3[6].field_0x10 != *(int *)&pUVar3[7].field_0x14) {
        puVar7 = *(undefined1 **)&pUVar3[7].field_0x20;
        if (*(undefined1 **)&pUVar3[7].field_0x20 == (undefined1 *)0x0) {
          puVar7 = &pUVar3[7].field_0x18;
        }
        uVar2 = *(uint *)(puVar7 + (ulonglong)(*(int *)(pUVar3 + 8) - 1U & this->SlotIndex) * 4);
        if (uVar2 != 0xffffffff) {
          do {
            puVar4 = (uint *)((longlong)(int)uVar2 * 0x50 + *(longlong *)&pUVar3[6].field_0x8);
            if (*puVar4 == this->SlotIndex) {
              this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(puVar4 + 2);
              if (puVar4 == (uint *)0x0) {
                this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
              }
              if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
                TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
              }
              break;
            }
            uVar2 = puVar4[0x12];
          } while (uVar2 != 0xffffffff);
        }
      }
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this)
    ;
    UDS_VM_W_CommonSkillSlot::UnbindSkillData_StartEnd
              ((UDS_VM_W_CommonSkillSlot *)this,
               (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)this->_padding_);
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x8,this);
  }
  FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_CharStatusData::GetData((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar5 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
    pFVar6 = UDS_CharStatusData::GetStatusInfo(pUVar5,Mp);
    if (pFVar6 != (FDS_StatusInfo *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar6->ChangeStatusDelegate
                 ,this);
    }
    pUVar5 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
    pFVar6 = UDS_CharStatusData::GetStatusInfo(pUVar5,Vigor);
    if (pFVar6 != (FDS_StatusInfo *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar6->ChangeStatusDelegate
                 ,this);
    }
  }
  return;
}

// UpdateAvailableTime @ 14bf863d0

void __thiscall
UDS_VM_HUD_SkillSlot::UpdateAvailableTime
          (UDS_VM_HUD_SkillSlot *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  UDS_VM_Progress *pUVar1;
  bool bVar2;
  UDS_SkillData *pUVar3;
  UObject *pUVar4;
  float fVar5;
  FWeakObjectPtr local_res10 [3];
  
  if ((this->VM_AvailableTime).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
    local_res10[0] = param_1.WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar2) {
      pUVar3 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
      fVar5 = UDS_SkillData::GetRemainWaitTimeUntilNextStep(pUVar3);
      pUVar1 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
      if (0.0 < fVar5) {
        UDS_VM_Progress::SetCurrentValue(pUVar1,0.0);
        return;
      }
      UDS_VM_Progress::SetIncreaseType(pUVar1,DeltaTime);
      pUVar1 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
      pUVar4 = FWeakObjectPtr::Get(local_res10);
      UDS_VM_Progress::SetMaxValue(pUVar1,*(float *)&pUVar4[5].field_0x20);
      UDS_VM_Progress::SetTargetValue((this->VM_AvailableTime).field0_0x0.DebugPtr,0.0);
      pUVar1 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
      pUVar3 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
      fVar5 = UDS_SkillData::GetRemainAvailableTime(pUVar3);
      UDS_VM_Progress::SetCurrentValue(pUVar1,fVar5);
    }
  }
  return;
}

// UpdateCoolTime @ 14bf87800

void __thiscall
UDS_VM_HUD_SkillSlot::UpdateCoolTime
          (UDS_VM_HUD_SkillSlot *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_SkillData *pUVar2;
  UObject *pUVar3;
  UDS_VM_Progress *pUVar4;
  float fVar5;
  FWeakObjectPtr local_res10 [3];
  
  if ((this->VM_Cooldown).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
    local_res10[0] = param_1.WeakPtr;
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      UDS_VM_Progress::SetIncreaseType((this->VM_Cooldown).field0_0x0.DebugPtr,DeltaTime);
      pUVar2 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
      fVar5 = UDS_SkillData::GetRemainWaitTimeUntilNextStep(pUVar2);
      pUVar4 = (this->VM_Cooldown).field0_0x0.DebugPtr;
      if (fVar5 <= 0.0) {
        pUVar2 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
        fVar5 = UDS_SkillData::GetFinalCoolTime(pUVar2,0.0);
        UDS_VM_Progress::SetMaxValue(pUVar4,fVar5);
        pUVar4 = (this->VM_Cooldown).field0_0x0.DebugPtr;
        pUVar2 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
        fVar5 = UDS_SkillData::GetFinalCoolTime(pUVar2,0.0);
        UDS_VM_Progress::SetTargetValue(pUVar4,fVar5);
        pUVar4 = (this->VM_Cooldown).field0_0x0.DebugPtr;
        pUVar2 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
        fVar5 = UDS_SkillData::GetElapsedCoolTime(pUVar2);
      }
      else {
        pUVar3 = FWeakObjectPtr::Get(local_res10);
        UDS_VM_Progress::SetMaxValue(pUVar4,*(float *)&pUVar3[5].field_0x10);
        pUVar4 = (this->VM_Cooldown).field0_0x0.DebugPtr;
        pUVar3 = FWeakObjectPtr::Get(local_res10);
        UDS_VM_Progress::SetTargetValue(pUVar4,*(float *)&pUVar3[5].field_0x10);
        pUVar4 = (this->VM_Cooldown).field0_0x0.DebugPtr;
        pUVar2 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
        fVar5 = UDS_SkillData::GetElapsedWaitTimeUntilNextStep(pUVar2);
      }
      UDS_VM_Progress::SetCurrentValue(pUVar4,fVar5);
    }
  }
  return;
}

// UpdateInputKey @ 14bf87a90

void __thiscall UDS_VM_HUD_SkillSlot::UpdateInputKey(UDS_VM_HUD_SkillSlot *this)

{
  int iVar1;
  UDS_ViewModelBase *this_00;
  code *pcVar2;
  FDS_ViewModelContext_InputKey *pFVar3;
  bool bVar4;
  EDS_KeyActionType EVar5;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if ((bVar4) && (this->bShowInputKey != false)) {
    iVar1 = this->SlotIndex;
    if (iVar1 == 1) {
      EVar5 = IA_SkillSlot_1;
    }
    else if (iVar1 == 2) {
      EVar5 = IA_SkillSlot_2;
    }
    else if (iVar1 == 3) {
      EVar5 = IA_SkillSlot_3;
    }
    else if (iVar1 == 4) {
      EVar5 = IA_SkillSlot_4;
    }
    else if (iVar1 == 5) {
      EVar5 = IA_SkillSlot_5;
    }
    else if (iVar1 == 6) {
      EVar5 = IA_SkillSlot_6;
    }
    else {
      if (iVar1 != 0) goto LAB_14bf87bb7;
      EVar5 = IA_NormalAttack;
    }
    UDS_VM_W_CommonSkillSlot::SetVis_InputKey((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible)
    ;
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar3 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x15d;
    pFVar3->KeyActionType = EVar5;
    this_00 = (UDS_ViewModelBase *)this->_padding_;
    if (this_00 != (UDS_ViewModelBase *)0x0) {
      local_18.Object = (FDS_ViewModelContext *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext(this_00,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
LAB_14bf87bb7:
  UDS_VM_W_CommonSkillSlot::SetVis_InputKey((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  return;
}

// UpdateSkillSlot @ 14bf8a220

void __thiscall
UDS_VM_HUD_SkillSlot::UpdateSkillSlot(UDS_VM_HUD_SkillSlot *this,UDS_DataBase *param_1)

{
  longlong *this_00;
  undefined4 uVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_DataBase *this_01;
  ulong64 uVar4;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar5;
  UDS_SkillData *pUVar6;
  UDS_VM_Progress *pUVar7;
  float fVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  
  this_00 = &this->_padding_;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar2) {
    bVar2 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals<UDS_DataBase,bool>
                      ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)this_00,param_1);
    if (bVar2) {
      local_res18 = (FWeakObjectPtr)*this_00;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      if (0 < *(int *)(pUVar3 + 5)) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        uVar1 = *(undefined4 *)(pUVar3 + 5);
        this_01 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        uVar4 = UDS_DataBase::GetDataContainerKey(this_01);
        TVar5 = UDS_SkillData::GetData((ulong64)&local_res8,uVar4,SUB41(uVar1,0));
                    /* WARNING: Load size is inaccurate */
        local_res18 = *TVar5.WeakPtr;
      }
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      UDS_VM_W_CommonSkillSlot::SetIcon
                ((UDS_VM_W_CommonSkillSlot *)this,*(int *)&pUVar3[5].field_0x8);
      local_res8 = (FWeakObjectPtr)*this_00;
      if ((this->VM_Cooldown).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
        bVar2 = FWeakObjectPtr::IsValid(&local_res8);
        if (bVar2) {
          UDS_VM_Progress::SetIncreaseType((this->VM_Cooldown).field0_0x0.DebugPtr,DeltaTime);
          pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res8);
          fVar8 = UDS_SkillData::GetRemainWaitTimeUntilNextStep(pUVar6);
          pUVar7 = (this->VM_Cooldown).field0_0x0.DebugPtr;
          if (fVar8 <= 0.0) {
            pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res8);
            fVar8 = UDS_SkillData::GetFinalCoolTime(pUVar6,0.0);
            UDS_VM_Progress::SetMaxValue(pUVar7,fVar8);
            pUVar7 = (this->VM_Cooldown).field0_0x0.DebugPtr;
            pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res8);
            fVar8 = UDS_SkillData::GetFinalCoolTime(pUVar6,0.0);
            UDS_VM_Progress::SetTargetValue(pUVar7,fVar8);
            pUVar7 = (this->VM_Cooldown).field0_0x0.DebugPtr;
            pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res8);
            fVar8 = UDS_SkillData::GetElapsedCoolTime(pUVar6);
          }
          else {
            pUVar3 = FWeakObjectPtr::Get(&local_res8);
            UDS_VM_Progress::SetMaxValue(pUVar7,*(float *)&pUVar3[5].field_0x10);
            pUVar7 = (this->VM_Cooldown).field0_0x0.DebugPtr;
            pUVar3 = FWeakObjectPtr::Get(&local_res8);
            UDS_VM_Progress::SetTargetValue(pUVar7,*(float *)&pUVar3[5].field_0x10);
            pUVar7 = (this->VM_Cooldown).field0_0x0.DebugPtr;
            pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res8);
            fVar8 = UDS_SkillData::GetElapsedWaitTimeUntilNextStep(pUVar6);
          }
          UDS_VM_Progress::SetCurrentValue(pUVar7,fVar8);
        }
      }
      local_res8 = (FWeakObjectPtr)*this_00;
      if ((this->VM_AvailableTime).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
        bVar2 = FWeakObjectPtr::IsValid(&local_res8);
        if (bVar2) {
          pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res8);
          fVar8 = UDS_SkillData::GetRemainWaitTimeUntilNextStep(pUVar6);
          pUVar7 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
          if (fVar8 <= 0.0) {
            UDS_VM_Progress::SetIncreaseType(pUVar7,DeltaTime);
            pUVar7 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
            pUVar3 = FWeakObjectPtr::Get(&local_res8);
            UDS_VM_Progress::SetMaxValue(pUVar7,*(float *)&pUVar3[5].field_0x20);
            UDS_VM_Progress::SetTargetValue((this->VM_AvailableTime).field0_0x0.DebugPtr,0.0);
            pUVar7 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
            pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res8);
            fVar8 = UDS_SkillData::GetRemainAvailableTime(pUVar6);
          }
          else {
            fVar8 = 0.0;
          }
          UDS_VM_Progress::SetCurrentValue(pUVar7,fVar8);
        }
      }
      SetSkillSlotInfo(this);
    }
  }
  return;
}

