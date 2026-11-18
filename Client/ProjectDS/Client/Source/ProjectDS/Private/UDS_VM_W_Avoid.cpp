// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b70b080

UClass * __cdecl UDS_VM_W_Avoid::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Avoid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Avoid",
               &Z_Registration_Info_UClass_UDS_VM_W_Avoid.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Avoid,0x3c0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_W_Avoid>,InternalVTableHelperCtorCaller<UDS_VM_W_Avoid>,
               local_res8,UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Avoid.InnerSingleton;
}

// UDS_VM_W_Avoid @ 14b710d40

UDS_VM_W_Avoid * __thiscall
UDS_VM_W_Avoid::UDS_VM_W_Avoid(UDS_VM_W_Avoid *this,FVTableHelper *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Avoid__6B_;
  (this->VM_CoolDown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->AvoidSkillDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvoidSkillDataList).ArrayNum = 0;
  (this->AvoidSkillDataList).ArrayMax = 0;
  return this;
}

// UDS_VM_W_Avoid @ 14b710da0

UDS_VM_W_Avoid * __thiscall
UDS_VM_W_Avoid::UDS_VM_W_Avoid(UDS_VM_W_Avoid *this,FObjectInitializer *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Avoid__6B_;
  (this->VM_CoolDown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->AvoidSkillDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvoidSkillDataList).ArrayNum = 0;
  (this->AvoidSkillDataList).ArrayMax = 0;
  return this;
}

// ~UDS_VM_W_Avoid @ 14b7131d0

void __thiscall UDS_VM_W_Avoid::~UDS_VM_W_Avoid(UDS_VM_W_Avoid *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Avoid__6B_;
  pFVar1 = (this->AvoidSkillDataList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_W_CommonSkillSlot::~UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this);
  return;
}

// GetPrivateStaticClass @ 14b717950

UClass * __cdecl UDS_VM_W_Avoid::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Avoid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Avoid",
               &Z_Registration_Info_UClass_UDS_VM_W_Avoid.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Avoid,0x3c0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_W_Avoid>,InternalVTableHelperCtorCaller<UDS_VM_W_Avoid>,
               local_res8,UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Avoid.InnerSingleton;
}

// GetTickableTickType @ 14b7187a0

ETickableTickType __thiscall UDS_VM_W_Avoid::GetTickableTickType(UDS_VM_W_Avoid *this)

{
  return Conditional;
}

// IsUpdate @ 14b718870

bool __thiscall UDS_VM_W_Avoid::IsUpdate(UDS_VM_W_Avoid *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_W_Avoid @ 14b7189d0

void __cdecl UDS_VM_W_Avoid::StaticRegisterNativesUDS_VM_W_Avoid(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_Avoid_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedAvoidSkillData @ 14b71a0c0

void __cdecl
UDS_VM_W_Avoid::execOnChangedAvoidSkillData(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnChangedAvoidSkillData((UDS_VM_W_Avoid *)param_1,local_res10);
  return;
}

// BindModel @ 14bf9bf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Avoid::BindModel(UDS_VM_W_Avoid *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  UDS_SkillDataSet *this_00;
  UDS_DataSetBase *this_01;
  ulong64 uVar8;
  UObject *pUVar9;
  char *pcVar10;
  UObject *this_02;
  UFunction *pUVar11;
  UDS_LogManager *pUVar12;
  int iVar13;
  char *pcVar14;
  ForAnyElementType FVar15;
  undefined1 auStackY_278 [32];
  undefined1 local_248;
  <lambda_1> local_247 [7];
  FWeakObjectPtr local_240;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  FWeakObjectPtr local_230;
  FName local_228;
  FWeakObjectPtr local_220;
  FWeakObjectPtr local_218;
  FName local_210;
  TArray<int,TSizedDefaultAllocator<32>_> local_208;
  FName local_1f8;
  UDS_VM_W_Avoid *local_1f0;
  FName *local_1e8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_1e0;
  code *local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  FDestructionSentinel local_1b8;
  undefined1 local_1a0 [48];
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  FDateTime local_38;
  
  local_38.Ticks = __security_cookie.value ^ (ulonglong)auStackY_278;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  FDS_EntityBase::GetMainPlayerEntityID(true);
  TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_220);
  bVar6 = FWeakObjectPtr::IsValid(&local_220);
  if (bVar6) {
    this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_220);
    UDS_SkillDataSet::GetAvoidSkillList(this_00,&local_208);
    iVar13 = local_208.ArrayNum;
    pFVar2 = local_208.AllocatorInstance.Data + (longlong)iVar13 * 4;
    FVar15.Data = local_208.AllocatorInstance.Data;
    while( true ) {
      if (local_208.ArrayNum != iVar13) {
        local_248 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_248);
      }
      if (FVar15.Data == pFVar2) break;
      uVar3 = *(undefined4 *)FVar15.Data;
      this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_220);
      uVar8 = UDS_DataSetBase::GetDataContainerKey(this_01);
      UDS_SkillData::GetData((ulong64)&local_240,uVar8,SUB41(uVar3,0));
      bVar6 = FWeakObjectPtr::IsValid(&local_240);
      if ((bVar6) && (pUVar9 = FWeakObjectPtr::Get(&local_240), *(int *)&pUVar9[2].field_0x1c != 0))
      {
        iVar7 = (this->AvoidSkillDataList).ArrayNum;
        piVar1 = &(this->AvoidSkillDataList).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(this->AvoidSkillDataList).AllocatorInstance,piVar1);
        }
        (this->AvoidSkillDataList).ArrayNum = iVar7 + 1;
        *(FWeakObjectPtr *)((this->AvoidSkillDataList).AllocatorInstance.Data + (longlong)iVar7 * 8)
             = local_240;
        pUVar9 = FWeakObjectPtr::Get(&local_240);
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar9 + 1),
                   (UObject *)this);
        pUVar9 = FWeakObjectPtr::Get(&local_240);
        pcVar10 = strstr("&UDS_VM_W_Avoid::OnChangedAvoidSkillData","::");
        if (pcVar10 == (char *)0x0) {
LAB_14bf9c12b:
          pcVar14 = &DAT_00000002;
LAB_14bf9c130:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          do {
            pcVar14 = pcVar10;
            pcVar10 = strstr(pcVar14 + 1,"::");
          } while (pcVar10 != (char *)0x0);
          if (pcVar14 == (char *)0x0) goto LAB_14bf9c12b;
          pcVar14 = pcVar14 + 2;
          if (*pcVar14 == '0') goto LAB_14bf9c130;
        }
        ::FName::FName(&local_1f8,pcVar14);
        FVar5 = local_1f8;
        if ((this == (UDS_VM_W_Avoid *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && InMethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                               ,0x4c8,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_210 = FVar5;
        local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_230.ObjectIndex = 0;
        local_230.ObjectSerialNumber = 0;
        local_228.ComparisonIndex.Value = 0;
        local_228.Number = 0;
        if ((this == (UDS_VM_W_Avoid *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && InMethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                               ,0x46d,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1f0 = this;
        if (this == (UDS_VM_W_Avoid *)0x0) {
          local_1f0 = (UDS_VM_W_Avoid *)0x0;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1f0 != (UDS_VM_W_Avoid *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1f0);
        }
        FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_1f0);
        local_228 = local_210;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_238,(FReadAccessScope *)(local_1a0 + 0x18));
        if ((local_228 == (FName)0x0) ||
           (this_02 = FWeakObjectPtr::Get(&local_230), this_02 == (UObject *)0x0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)(local_1a0 + 0x18));
LAB_14bf9c267:
          local_1e8 = &local_210;
          `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
          __Internal_BindDynamic<UDS_VM_W_Avoid>'::__l2::<lambda_1>::operator()(&local_1e8);
        }
        else {
          pUVar11 = UObject::FindFunction(this_02,local_228);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)(local_1a0 + 0x18));
          if (pUVar11 == (UFunction *)0x0) goto LAB_14bf9c267;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_238,&local_170);
        local_1e0.Object = local_230;
        local_1e0.FunctionName = local_228;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_170);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar9 + 1),
                   (FWriteAccessScope *)&local_1b8);
        TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
        RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                  ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                    *)&pUVar9[1].field_0x8,local_247,Default);
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar9 + 1),&local_1e0);
        if (local_1b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
        local_218 = local_240;
        bVar6 = FWeakObjectPtr::IsValid(&local_218);
        if (bVar6) {
          pUVar9 = FWeakObjectPtr::Get(&local_218);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar9[10].field_0x10,
                     this);
          uStack_1c0 = 0;
          local_1c8 = UDS_VM_W_CommonSkillSlot::OnSkillStartEndEvent;
          local_1a0._16_8_ = (ulonglong)uStack_1bc << 0x20;
          local_1a0._8_8_ = UDS_VM_W_CommonSkillSlot::OnSkillStartEndEvent;
          pUVar9 = FWeakObjectPtr::Get(&local_218);
          TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
          ::AddUObject<UDS_VM_W_CommonSkillSlot>
                    ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                      *)&pUVar9[10].field_0x10,(UDS_VM_W_CommonSkillSlot *)local_1a0,
                     (pmf_0eaa1c03 *)this);
        }
LAB_14bf9c358:
        FVar15.Data = FVar15.Data + 4;
      }
      else {
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 == (UDS_LogManager *)0x0) goto LAB_14bf9c358;
        pUVar12 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_W_Avoid::BindModel",0x19,Yes);
        UDS_LogManager::PrintLog(pUVar12,1,Warning,local_158.Ptr,0x73,L"skillData is invalid.");
        if ((void *)local_158._padding_ == (void *)0x0) goto LAB_14bf9c358;
        FMemory::Free((void *)local_158._padding_);
        FVar15.Data = FVar15.Data + 4;
      }
    }
    if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.AllocatorInstance.Data);
    }
  }
  return;
}

// InitViewModel @ 14bfafa60

void __thiscall UDS_VM_W_Avoid::InitViewModel(UDS_VM_W_Avoid *this)

{
  UDS_VM_StackSkillCount *pUVar1;
  UDS_VM_InputKey *pUVar2;
  UDS_VM_Progress *pUVar3;
  
  UDS_VM_W_CommonSkillSlot::InitViewModel((UDS_VM_W_CommonSkillSlot *)this);
  if (this->_padding_ == 0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StackSkillCount>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_StackSkillCount *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this->_padding_ = (longlong)pUVar1;
  }
  if (this->_padding_ == 0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StackSkillCount>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_StackSkillCount *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this->_padding_ = (longlong)pUVar1;
  }
  if (this->_padding_ == 0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    this->_padding_ = (longlong)pUVar2;
  }
  if ((this->VM_CoolDown).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_CoolDown).field0_0x0.DebugPtr = pUVar3;
  }
  return;
}

// OnChangedAvoidSkillData @ 14bfb6020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Avoid::OnChangedAvoidSkillData(UDS_VM_W_Avoid *this,UDS_DataBase *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_DataBase *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 != (UDS_DataBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_SkillData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14bfb606f;
  }
  param_1 = (UDS_DataBase *)0x0;
LAB_14bfb606f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_140 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar2 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_148);
    UDS_VM_W_CommonSkillSlot::SetIcon((UDS_VM_W_CommonSkillSlot *)this,*(int *)&pUVar5[5].field_0x8)
    ;
    UpdateCoolDownSVM(this,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_148);
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_Avoid::OnChangedAvoidSkillData",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0xb9,L"skillData is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnClickSkillSlot @ 14bfbab60

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_Avoid::OnClickSkillSlot(UDS_VM_W_Avoid *this)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  EDS_AbilityTagType local_b8 [8];
  ulong64 local_b0;
  FWeakObjectPtr local_a8;
  UObject *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b0 = FDS_EntityBase::GetMainPlayerEntityID(true);
  this_00 = FDS_EntityBase::GetEntityBase(&local_b0);
  if (this_00 != (FDS_EntityBase *)0x0) {
    (**(code **)(this_00->_padding_ + 0x78))(this_00,&local_a8);
    bVar1 = FWeakObjectPtr::IsValid(&local_a8);
    if (bVar1) {
      pUVar2 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar3 = Z_Construct_UClass_UDS_SkillAbilityContext_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar3);
      local_98._8_8_ = pUVar2;
      pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar4 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_a0 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_b8[0] = Avoid_Process;
      FDS_EntityBase::TryActivateAbility(this_00,local_b8,(TObjectPtr<UWN_AbilityContext>)&local_a0)
      ;
    }
  }
  return;
}

// OnCloseInit @ 14bfbbd40

void __thiscall UDS_VM_W_Avoid::OnCloseInit(UDS_VM_W_Avoid *this)

{
  int *piVar1;
  
  this->_padding_ = 0;
  piVar1 = &(this->AvoidSkillDataList).ArrayMax;
  (this->VM_CoolDown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->AvoidSkillDataList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->AvoidSkillDataList).AllocatorInstance,0,piVar1);
  }
  return;
}

// OnSetViewModel @ 14bfc4080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Avoid::OnSetViewModel(UDS_VM_W_Avoid *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  UDS_ViewModelBase *this_00;
  UDS_VM_StackSkillCount *pUVar4;
  code *pcVar5;
  FName FVar6;
  int iVar7;
  FDS_ViewModelContext_InputKey *pFVar8;
  bool bVar9;
  TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> TVar10;
  UDS_SkillDataSet *this_01;
  UDS_DataSetBase *this_02;
  ulong64 uVar11;
  UObject *pUVar12;
  UDS_LogManager *pUVar13;
  int iVar14;
  ForAnyElementType FVar15;
  undefined1 auStackY_248 [32];
  undefined1 local_218 [8];
  FWeakObjectPtr local_210;
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8 [2];
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_198;
  undefined1 local_188 [16];
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_210 = (FWeakObjectPtr)param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  TVar10 = UDS_CharBuffData::GetData((ulong64)local_188);
  this->_padding_ = *(longlong *)TVar10.WeakPtr;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  iVar14 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsSkillExist.BitNumber;
  FVar6 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsSkillExist.FieldName;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
    local_1c0 = iVar14;
    local_1c8 = FVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
  }
  FDS_EntityBase::GetMainPlayerEntityID(true);
  TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_200);
  bVar9 = FWeakObjectPtr::IsValid(&local_200);
  if (bVar9) {
    this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_200);
    UDS_SkillDataSet::GetAvoidSkillList(this_01,&local_1f0);
    iVar14 = local_1f0.ArrayNum;
    pFVar1 = local_1f0.AllocatorInstance.Data + (longlong)iVar14 * 4;
    FVar15.Data = local_1f0.AllocatorInstance.Data;
LAB_14bfc41a0:
    do {
      if (local_1f0.ArrayNum != iVar14) {
        local_218[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_218);
      }
      param_1 = (TSharedPtr<FDS_ViewModelContext,1> *)local_210;
      if (FVar15.Data == pFVar1) goto LAB_14bfc42e9;
      uVar2 = *(undefined4 *)FVar15.Data;
      this_02 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_200);
      uVar11 = UDS_DataSetBase::GetDataContainerKey(this_02);
      UDS_SkillData::GetData((ulong64)&local_208,uVar11,SUB41(uVar2,0));
      bVar9 = FWeakObjectPtr::IsValid(&local_208);
      if (bVar9) {
        pUVar12 = FWeakObjectPtr::Get(&local_208);
        if (*(int *)&pUVar12[2].field_0x1c == 0) goto LAB_14bfc426e;
        pUVar12 = FWeakObjectPtr::Get(&local_208);
        UDS_VM_W_CommonSkillSlot::SetIcon
                  ((UDS_VM_W_CommonSkillSlot *)this,*(int *)&pUVar12[5].field_0x8);
        UpdateCoolDownSVM(this,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_208);
        iVar7 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsSkillExist.BitNumber;
        FVar6 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsSkillExist.FieldName;
        if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
          *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
          local_1b0 = iVar7;
          local_1b8 = FVar6;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
          FVar15.Data = FVar15.Data + 4;
          goto LAB_14bfc41a0;
        }
      }
      else {
LAB_14bfc426e:
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 != (UDS_LogManager *)0x0) {
          pUVar13 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_VM_W_Avoid::OnSetViewModel",0x1e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar13,1,Warning,local_168.Ptr,0x44,
                     L"UDS_VM_W_Avoid::OnCompleteTableLoad, skillData is invalid.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      FVar15.Data = FVar15.Data + 4;
    } while( true );
  }
LAB_14bfc4315:
  FVar6 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.FieldName;
  if ((char)this->_padding_ != '\x04') {
    local_1a0 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.BitNumber;
    *(undefined1 *)&this->_padding_ = 4;
    local_1a8 = FVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
  }
  if (this->_padding_ != 0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_198);
    pFVar8 = local_198.Object;
    if (local_198.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)&pFVar8->_padding_ = 0x15d;
    pFVar8->KeyActionType = IA_Avoid;
    this_00 = (UDS_ViewModelBase *)this->_padding_;
    local_178.Object = (FDS_ViewModelContext *)local_198.Object;
    local_178.SharedReferenceCount.ReferenceController =
         local_198.SharedReferenceCount.ReferenceController;
    if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext(this_00,&local_178);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
  }
  pUVar4 = (UDS_VM_StackSkillCount *)this->_padding_;
  if (pUVar4 != (UDS_VM_StackSkillCount *)0x0) {
    local_1f8.ObjectIndex = 0;
    local_1f8.ObjectSerialNumber = 0;
    local_1e0 = 0;
    FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1e0);
    UDS_VM_StackSkillCount::UpdateStackCount
              (pUVar4,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_1f8);
  }
  pUVar4 = (UDS_VM_StackSkillCount *)this->_padding_;
  if (pUVar4 != (UDS_VM_StackSkillCount *)0x0) {
    local_210.ObjectIndex = 0;
    local_210.ObjectSerialNumber = 0;
    local_1d8[0] = 0;
    FWeakObjectPtr::operator=(&local_210,(FObjectPtr)local_1d8);
    UDS_VM_StackSkillCount::UpdateStackCount
              (pUVar4,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_210);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (((FSharedReferencer<1> *)((longlong)param_1 + 8))->ReferenceController);
  return;
LAB_14bfc42e9:
  if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
  }
  goto LAB_14bfc4315;
}

// OnUpdate @ 14bfd08d0

void __thiscall UDS_VM_W_Avoid::OnUpdate(UDS_VM_W_Avoid *this,float param_1)

{
  longlong *plVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  FName FVar4;
  bool bVar5;
  char cVar6;
  UObject *pUVar7;
  FWeakObjectPtr *pFVar8;
  char cVar9;
  float fVar10;
  FWeakObjectPtr local_res8;
  FName local_28;
  int local_20;
  
  if ((this->VM_CoolDown).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    return;
  }
  iVar3 = (this->AvoidSkillDataList).ArrayNum;
  pFVar8 = (FWeakObjectPtr *)(this->AvoidSkillDataList).AllocatorInstance.Data;
  cVar9 = '\x01';
  pFVar2 = pFVar8 + iVar3;
  while( true ) {
    if ((this->AvoidSkillDataList).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar8 == pFVar2) goto LAB_14bfd0963;
    local_res8 = *pFVar8;
    bVar5 = FWeakObjectPtr::IsValid(&local_res8);
    if (!bVar5) break;
    pUVar7 = FWeakObjectPtr::Get(&local_res8);
    cVar6 = (**(code **)(*(longlong *)pUVar7 + 0x2f8))(pUVar7);
    if (cVar6 == '\0') break;
    pFVar8 = pFVar8 + 1;
  }
  cVar9 = '\0';
LAB_14bfd0963:
  bVar5 = UDS_VM_Progress::GetIsUpdateCurrentValue((this->VM_CoolDown).field0_0x0.DebugPtr);
  iVar3 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_CooldownProgress.
          BitNumber;
  FVar4 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_CooldownProgress.
          FieldName;
  if (bVar5) {
    fVar10 = UDS_VM_Progress::GetReverseCurrentPercent((this->VM_CoolDown).field0_0x0.DebugPtr);
    iVar3 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::CooldownProgressRatio.
            BitNumber;
    FVar4 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::CooldownProgressRatio.
            FieldName;
    plVar1 = &this->_padding_;
    if (fVar10 != *(float *)&this->_padding_) {
      *(float *)&this->_padding_ = fVar10;
      local_20 = iVar3;
      local_28 = FVar4;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
    }
    fVar10 = UDS_VM_Progress::GetRemainValue((this->VM_CoolDown).field0_0x0.DebugPtr);
    UDS_VM_W_CommonSkillSlot::SetCooldownValue((UDS_VM_W_CommonSkillSlot *)this,fVar10);
    local_20 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_CooldownProgress.
               BitNumber;
    local_28 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_CooldownProgress.
               FieldName;
    if (*(char *)((longlong)&this->_padding_ + 4) != '\x04') {
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 4;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
    }
    local_20 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.
               BitNumber;
    local_28 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.
               FieldName;
    if ((char)this->_padding_ == '\x01') goto LAB_14bfd0aa5;
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
      local_20 = iVar3;
      local_28 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.
               BitNumber;
    local_28 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.
               FieldName;
    if ((char)this->_padding_ == '\0') goto LAB_14bfd0aa5;
    *(undefined1 *)&this->_padding_ = 0;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
LAB_14bfd0aa5:
  local_20 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::WidgetEnabled.BitNumber;
  local_28 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::WidgetEnabled.FieldName;
  if (*(char *)((longlong)&this->_padding_ + 4) != cVar9) {
    *(char *)((longlong)&this->_padding_ + 4) = cVar9;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// UnbindModel @ 14bfdf4a0

void __thiscall UDS_VM_W_Avoid::UnbindModel(UDS_VM_W_Avoid *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  UDS_VM_W_Avoid *pUVar6;
  UObject *pUVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  FWeakObjectPtr *pFVar11;
  FWeakObjectPtr *pFVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  undefined1 local_res18;
  undefined1 local_res20;
  FWeakObjectPtr local_80;
  FWeakObjectPtr local_78;
  FWeakObjectPtr *local_70;
  FWeakObjectPtr *local_68;
  FDestructionSentinel local_60;
  
  UDS_VM_W_CommonSkillSlot::UnbindModel((UDS_VM_W_CommonSkillSlot *)this);
  uVar1 = (this->AvoidSkillDataList).ArrayNum;
  uVar9 = (ulonglong)(int)uVar1;
  pFVar12 = (FWeakObjectPtr *)(this->AvoidSkillDataList).AllocatorInstance.Data;
  pFVar11 = pFVar12 + uVar9;
  local_70 = pFVar11;
  do {
    local_68 = pFVar12;
    if ((this->AvoidSkillDataList).ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar11) {
      (this->AvoidSkillDataList).ArrayNum = 0;
      if ((this->AvoidSkillDataList).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->AvoidSkillDataList).AllocatorInstance,0,
                   &(this->AvoidSkillDataList).ArrayMax);
      }
      return;
    }
    local_80 = *pFVar12;
    bVar3 = FWeakObjectPtr::IsValid(&local_80);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_80);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar5 + 1),
                 (FWriteAccessScope *)&local_60);
      uVar10 = *(int *)&pUVar5[1].field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar13 = (longlong)(int)uVar10 << 4;
        do {
          uVar4 = 0;
          if ((int)uVar10 < *(int *)&pUVar5[1].field_0x10) {
            uVar4 = ~uVar10 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar11 = (FWeakObjectPtr *)(*(longlong *)&pUVar5[1].field_0x8 + lVar13);
          local_res10 = 0;
          if (this == (UDS_VM_W_Avoid *)0x0) {
LAB_14bfdf5bf:
            local_res20 = 0;
            if ((pFVar11[1] == (FWeakObjectPtr)0x0) ||
               (pUVar7 = FWeakObjectPtr::Get(pFVar11,true), pUVar7 == (UObject *)0x0))
            goto LAB_14bfdf5e1;
          }
          else {
            local_res18 = 0;
            pUVar6 = (UDS_VM_W_Avoid *)FWeakObjectPtr::Get(pFVar11);
            if (this != pUVar6) goto LAB_14bfdf5bf;
LAB_14bfdf5e1:
            uVar4 = 0;
            if ((int)uVar10 < *(int *)&pUVar5[1].field_0x10) {
              uVar4 = ~uVar10 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar8 = ~uVar10 + *(int *)&pUVar5[1].field_0x10;
            if (1 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              memmove((void *)(lVar13 + *(longlong *)&pUVar5[1].field_0x8),
                      (void *)((longlong)(*(int *)&pUVar5[1].field_0x10 - iVar8) * 0x10 +
                              *(longlong *)&pUVar5[1].field_0x8),(longlong)iVar8 << 4);
            }
            *(int *)&pUVar5[1].field_0x10 = *(int *)&pUVar5[1].field_0x10 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,(ForAnyElementType *)&pUVar5[1].field_0x8,
                       *(int *)&pUVar5[1].field_0x10,(int *)&pUVar5[1].field_0x14);
          }
          lVar13 = lVar13 + -0x10;
          uVar10 = uVar10 - 1;
          pFVar12 = local_68;
        } while (-1 < (int)uVar10);
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      local_78 = local_80;
      bVar3 = FWeakObjectPtr::IsValid(&local_78);
      pFVar11 = local_70;
      if (bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&local_78);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[10].field_0x10,this
                  );
        pFVar11 = local_70;
      }
    }
    uVar9 = (ulonglong)uVar1;
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// UpdateCoolDownSVM @ 14bfe2650

void __thiscall
UDS_VM_W_Avoid::UpdateCoolDownSVM
          (UDS_VM_W_Avoid *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  UDS_VM_Progress *pUVar1;
  bool bVar2;
  UDS_SkillData *pUVar3;
  float fVar4;
  FWeakObjectPtr local_res10 [3];
  
  if ((this->VM_CoolDown).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
    local_res10[0] = param_1.WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar2) {
      UDS_VM_Progress::SetIncreaseType((this->VM_CoolDown).field0_0x0.DebugPtr,DeltaTime);
      pUVar1 = (this->VM_CoolDown).field0_0x0.DebugPtr;
      pUVar3 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
      fVar4 = UDS_SkillData::GetFinalCoolTime(pUVar3,0.0);
      UDS_VM_Progress::SetMaxValue(pUVar1,fVar4);
      pUVar1 = (this->VM_CoolDown).field0_0x0.DebugPtr;
      pUVar3 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
      fVar4 = UDS_SkillData::GetFinalCoolTime(pUVar3,0.0);
      UDS_VM_Progress::SetTargetValue(pUVar1,fVar4);
      pUVar1 = (this->VM_CoolDown).field0_0x0.DebugPtr;
      pUVar3 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
      fVar4 = UDS_SkillData::GetElapsedCoolTime(pUVar3);
      UDS_VM_Progress::SetCurrentValue(pUVar1,fVar4);
    }
  }
  return;
}

// UpdateInputKey @ 14bfe35b0

void __thiscall UDS_VM_W_Avoid::UpdateInputKey(UDS_VM_W_Avoid *this)

{
  UDS_ViewModelBase *this_00;
  code *pcVar1;
  FName FVar2;
  int iVar3;
  FDS_ViewModelContext_InputKey *pFVar4;
  bool bVar5;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  iVar3 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.BitNumber;
  FVar2 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.FieldName;
  if ((char)this->_padding_ != '\x04') {
    *(undefined1 *)&this->_padding_ = 4;
    local_30 = iVar3;
    local_38 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  if (this->_padding_ != 0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar4 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x15d;
    pFVar4->KeyActionType = IA_Avoid;
    this_00 = (UDS_ViewModelBase *)this->_padding_;
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
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

