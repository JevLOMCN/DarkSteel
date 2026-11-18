// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b730150

UClass * __cdecl UDS_VM_W_GameOptionSpin::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionSpin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionSpin",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionSpin.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionSpin,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GameOptionSpin>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionSpin>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionSpin.InnerSingleton;
}

// UDS_VM_W_GameOptionSpin @ 14b7359d0

UDS_VM_W_GameOptionSpin * __thiscall
UDS_VM_W_GameOptionSpin::UDS_VM_W_GameOptionSpin
          (UDS_VM_W_GameOptionSpin *this,FVTableHelper *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionSpin__6B_;
  (this->VMLeftButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VMRightButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  return this;
}

// UDS_VM_W_GameOptionSpin @ 14b735a20

UDS_VM_W_GameOptionSpin * __thiscall
UDS_VM_W_GameOptionSpin::UDS_VM_W_GameOptionSpin
          (UDS_VM_W_GameOptionSpin *this,FObjectInitializer *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionSpin__6B_;
  (this->VMLeftButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VMRightButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  return this;
}

// ~UDS_VM_W_GameOptionSpin @ 14b736a40

void __thiscall UDS_VM_W_GameOptionSpin::~UDS_VM_W_GameOptionSpin(UDS_VM_W_GameOptionSpin *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionSpin__6B_;
  UDS_VM_GameOptionData::~UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7399f0

IClassDescriptor * __thiscall
UDS_VM_W_GameOptionSpin::GetFieldNotificationDescriptor(UDS_VM_W_GameOptionSpin *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_GameOptionSpin::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73abc0

UClass * __cdecl UDS_VM_W_GameOptionSpin::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionSpin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionSpin",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionSpin.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionSpin,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GameOptionSpin>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionSpin>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionSpin.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_GameOptionSpin @ 14b73b090

void __cdecl UDS_VM_W_GameOptionSpin::StaticRegisterNativesUDS_VM_W_GameOptionSpin(void)

{
  return;
}

// GetOptionValueText @ 14bfac690

FDS_Text * __thiscall
UDS_VM_W_GameOptionSpin::GetOptionValueText
          (UDS_VM_W_GameOptionSpin *this,FDS_Text *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_Text *pFVar3;
  UDS_M_GameOptionDataBase *this_00;
  FDS_GameOptionBaseTableRow *pFVar4;
  FName FVar5;
  FString local_78;
  FDS_Text local_68;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (bVar2) {
    this_00 = (UDS_M_GameOptionDataBase *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    pFVar4 = UDS_M_GameOptionDataBase::GetGameOptionBaseTable(this_00);
    if (pFVar4 == (FDS_GameOptionBaseTableRow *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<941132380863725621>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionSpin.cpp"
                         ,0x35,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FDS_Text *)(*pcVar1)();
        return pFVar3;
      }
      __return_storage_ptr__->StringTableType = None;
      __return_storage_ptr__->StringTableID = 0;
      (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
      (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
      (__return_storage_ptr__->DateTime).Ticks = 0;
      (__return_storage_ptr__->TimeSpan).Ticks = 0;
      __return_storage_ptr__->TimeExpressionType = None;
      __return_storage_ptr__->IsExpression = false;
      (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
      (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
      (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
      (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    }
    else {
      local_68.StringTableType = None;
      local_68.StringTableID = 0;
      local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_68.StringEnumTableNameID.Number = 0;
      local_68.DateTime.Ticks = 0;
      local_68.TimeSpan.Ticks = 0;
      local_68.TimeExpressionType = None;
      local_68.IsExpression = false;
      local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.UniqueString.Data.ArrayNum = 0;
      local_68.UniqueString.Data.ArrayMax = 0;
      local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.FormatArgs.ArrayNum = 0;
      local_68.FormatArgs.ArrayMax = 0;
      UDS_VM_GameOptionData::GetGameOptionValue((UDS_VM_GameOptionData *)this);
      ::FString::PrintfImpl(&local_78,L"EDS_%s");
      FVar5 = DS_Util::GetStringEnumTableKey((FString *)&stack0x00000008,(int)&local_78);
      FDS_Text::SetTextFromStringEnumTable(&local_68,(FName *)FVar5);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      __return_storage_ptr__->StringTableType = local_68.StringTableType;
      __return_storage_ptr__->StringTableID = local_68.StringTableID;
      __return_storage_ptr__->StringEnumTableNameID = local_68.StringEnumTableNameID;
      (__return_storage_ptr__->DateTime).Ticks = local_68.DateTime.Ticks;
      (__return_storage_ptr__->TimeSpan).Ticks = local_68.TimeSpan.Ticks;
      __return_storage_ptr__->TimeExpressionType = local_68.TimeExpressionType;
      __return_storage_ptr__->IsExpression = local_68.IsExpression;
      (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
           local_68.UniqueString.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->UniqueString).Data.ArrayNum = local_68.UniqueString.Data.ArrayNum;
      (__return_storage_ptr__->UniqueString).Data.ArrayMax = local_68.UniqueString.Data.ArrayMax;
      (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data =
           local_68.FormatArgs.AllocatorInstance.Data;
      (__return_storage_ptr__->FormatArgs).ArrayNum = local_68.FormatArgs.ArrayNum;
      (__return_storage_ptr__->FormatArgs).ArrayMax = local_68.FormatArgs.ArrayMax;
      local_68.FormatArgs.ArrayNum = 0;
      local_68.FormatArgs.ArrayMax = 0;
      local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.UniqueString.Data.ArrayNum = 0;
      local_68.UniqueString.Data.ArrayMax = 0;
      local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (local_68.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
      }
      if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<941132380863725618>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionSpin.cpp"
                       ,0x32,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDS_Text *)(*pcVar1)();
      return pFVar3;
    }
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// OnClickedButton @ 14bfbb470

void __thiscall
UDS_VM_W_GameOptionSpin::OnClickedButton
          (UDS_VM_W_GameOptionSpin *this,FDS_ButtonEventField *param_1,int param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_M_GameOptionDataBase *this_00;
  FDS_GameOptionBaseTableRow *pFVar5;
  size_t sVar6;
  UClass *pUVar7;
  UEnum *this_01;
  FName *pFVar8;
  FName FVar9;
  int iVar10;
  FName local_res8;
  undefined1 local_res20 [8];
  FName local_98;
  undefined1 local_90 [8];
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<941132380863725635>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionSpin.cpp"
                       ,0x43,"false");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (UDS_M_GameOptionDataBase *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  pFVar5 = UDS_M_GameOptionDataBase::GetGameOptionBaseTable(this_00);
  if (pFVar5 == (FDS_GameOptionBaseTableRow *)0x0) {
    return;
  }
  iVar4 = UDS_VM_GameOptionData::GetGameOptionValue((UDS_VM_GameOptionData *)this);
  ::FString::FString(&local_48,"/Script/ProjectDS.EDS_");
  ::FString::ConcatFF(&local_58,&local_48,&pFVar5->GameOptionData);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.ArrayNum == 0) {
    local_88 = (FScriptContainerElement *)0x15060d16c;
LAB_14bfbb581:
    sVar6 = wcslen((wchar_t *)local_88);
    iStack_80 = (int)sVar6;
  }
  else {
    iStack_80 = 0;
    local_88 = local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14bfbb581;
  }
  pUVar7 = Z_Construct_UClass_UEnum_NoRegister();
  local_38._12_4_ = uStack_7c;
  local_38.Size = iStack_80;
  local_38.DataPtr = (wchar_t *)local_88;
  this_01 = (UEnum *)StaticFindObject(pUVar7,(UObject *)0x0,&local_38,None);
  if (this_01 == (UEnum *)0x0) goto LAB_14bfbb6b5;
  if (param_2 == 0) {
    ::FString::PrintfImpl(&local_68,L"EDS_%s::None");
    iVar10 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    pFVar8 = ::FName::FName(&local_98,iVar10,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar1 = *pFVar8;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    FVar9 = UEnum::GetNameByIndex(this_01,(int)local_90);
    if (*(FName *)FVar9 == FVar1) goto LAB_14bfbb6b5;
    iVar4 = iVar4 + -1;
  }
  else {
    if (param_2 != 1) goto LAB_14bfbb6b5;
    ::FString::PrintfImpl(&local_78,L"EDS_%s::Max");
    iVar10 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    pFVar8 = ::FName::FName(&local_res8,iVar10,(wchar_t *)local_78.Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar1 = *pFVar8;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar9 = UEnum::GetNameByIndex(this_01,(int)local_res20);
    if (*(FName *)FVar9 == FVar1) goto LAB_14bfbb6b5;
    iVar4 = iVar4 + 1;
  }
  UDS_VM_GameOptionData::SetGameOptionValue((UDS_VM_GameOptionData *)this,iVar4);
LAB_14bfbb6b5:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// OnSetViewModel @ 14bfce390

void __thiscall
UDS_VM_W_GameOptionSpin::OnSetViewModel
          (UDS_VM_W_GameOptionSpin *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ViewModelContext_CommonIconTextButton *pFVar3;
  bool bVar4;
  UDS_VM_CommonIconTextButton *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_VM_W_GameOptionSpin *local_res8;
  UDS_VM_W_GameOptionSpin *local_res10;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  FDestructionSentinel local_78;
  undefined1 *local_60;
  FDestructionSentinel local_58;
  undefined1 *local_40;
  
  local_88.Object = param_1->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_GameOptionData::OnSetViewModel((UDS_VM_GameOptionData *)this,&local_88);
  if ((this->VMLeftButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VMLeftButton).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VMRightButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VMRightButton).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VMLeftButton).field0_0x0.DebugPtr != (UDS_VM_CommonIconTextButton *)0x0) {
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_c8);
    pFVar3 = local_c8.Object;
    if (local_c8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
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
    *(undefined4 *)&pFVar3->_padding_ = 0x15b;
    local_b8.Object = (FDS_ViewModelContext *)OnClickedButton;
    local_b8.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->OnClickDelegate,
               (FWriteAccessScope *)&local_78);
    local_60 = &(pFVar3->OnClickDelegate).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_60);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      *(undefined4 *)(puVar6 + 1) = 0;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_GameOptionSpin____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
      puVar6[4] = local_b8.Object;
      puVar6[5] = local_b8.SharedReferenceCount.ReferenceController;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    pTVar2 = (TReferenceControllerBase<1> *)
             CONCAT44(local_c8.SharedReferenceCount.ReferenceController._4_4_,
                      local_c8.SharedReferenceCount.ReferenceController._0_4_);
    pUVar5 = (this->VMLeftButton).field0_0x0.DebugPtr;
    local_b8.Object = (FDS_ViewModelContext *)local_c8.Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  if ((this->VMRightButton).field0_0x0.DebugPtr != (UDS_VM_CommonIconTextButton *)0x0) {
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_a8);
    pFVar3 = local_a8.Object;
    if (local_a8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
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
    local_c8.SharedReferenceCount.ReferenceController._4_4_ =
         local_98.SharedReferenceCount.ReferenceController._4_4_;
    *(undefined4 *)&pFVar3->_padding_ = 0x15b;
    local_c8.Object = (FDS_ViewModelContext_CommonIconTextButton *)OnClickedButton;
    local_c8.SharedReferenceCount.ReferenceController._0_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->OnClickDelegate,
               (FWriteAccessScope *)&local_58);
    local_40 = &(pFVar3->OnClickDelegate).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_40);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      *(undefined4 *)(puVar6 + 1) = 1;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_GameOptionSpin____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res10);
      puVar6[4] = local_c8.Object;
      puVar6[5] = CONCAT44(local_c8.SharedReferenceCount.ReferenceController._4_4_,
                           local_c8.SharedReferenceCount.ReferenceController._0_4_);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    pUVar5 = (this->VMRightButton).field0_0x0.DebugPtr;
    local_98.Object = (FDS_ViewModelContext *)local_a8.Object;
    local_98.SharedReferenceCount.ReferenceController =
         local_a8.SharedReferenceCount.ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateView @ 14bfe6de0

void __thiscall
UDS_VM_W_GameOptionSpin::UpdateView
          (UDS_VM_W_GameOptionSpin *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.BitNumber;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

