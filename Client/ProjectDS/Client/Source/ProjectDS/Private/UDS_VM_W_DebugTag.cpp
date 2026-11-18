// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b72e040

UClass * __cdecl UDS_VM_W_DebugTag::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_DebugTag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_DebugTag",
               &Z_Registration_Info_UClass_UDS_VM_W_DebugTag.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_DebugTag,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_DebugTag>,
               InternalVTableHelperCtorCaller<UDS_VM_W_DebugTag>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_DebugTag.InnerSingleton;
}

// UDS_VM_W_DebugTag @ 14b734b90

UDS_VM_W_DebugTag * __thiscall
UDS_VM_W_DebugTag::UDS_VM_W_DebugTag(UDS_VM_W_DebugTag *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_DebugTag__6B_;
  FText::FText(&this->DebugText);
  FVar1 = FLinearColor::White;
  this->DebugVisibility = SelfHitTestInvisible;
  this->DebugAlpha = 1.0;
  (this->EntityData).WeakPtr.ObjectIndex = 0;
  (this->DebugColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->EntityData).WeakPtr.ObjectSerialNumber = 0;
  return this;
}

// UDS_VM_W_DebugTag @ 14b734c10

UDS_VM_W_DebugTag * __thiscall
UDS_VM_W_DebugTag::UDS_VM_W_DebugTag(UDS_VM_W_DebugTag *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_DebugTag__6B_;
  FText::FText(&this->DebugText);
  FVar1 = FLinearColor::White;
  this->DebugVisibility = SelfHitTestInvisible;
  this->DebugAlpha = 1.0;
  (this->EntityData).WeakPtr.ObjectIndex = 0;
  (this->DebugColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->EntityData).WeakPtr.ObjectSerialNumber = 0;
  return this;
}

// ~UDS_VM_W_DebugTag @ 14b7363e0

void __thiscall UDS_VM_W_DebugTag::~UDS_VM_W_DebugTag(UDS_VM_W_DebugTag *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_DebugTag__6B_;
  pIVar1 = (this->DebugText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7394b0

IClassDescriptor * __thiscall
UDS_VM_W_DebugTag::GetFieldNotificationDescriptor(UDS_VM_W_DebugTag *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_DebugTag::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a2c0

UClass * __cdecl UDS_VM_W_DebugTag::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_DebugTag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_DebugTag",
               &Z_Registration_Info_UClass_UDS_VM_W_DebugTag.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_DebugTag,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_DebugTag>,
               InternalVTableHelperCtorCaller<UDS_VM_W_DebugTag>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_DebugTag.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_DebugTag @ 14b73af70

void __cdecl UDS_VM_W_DebugTag::StaticRegisterNativesUDS_VM_W_DebugTag(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_DebugTag_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedDebugText @ 14b73c790

void __cdecl
UDS_VM_W_DebugTag::execOnChangedDebugText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedDebugText((UDS_VM_W_DebugTag *)param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnChangedDebugText @ 14bfb6860

void __thiscall UDS_VM_W_DebugTag::OnChangedDebugText(UDS_VM_W_DebugTag *this,FString *param_1)

{
  bool bVar1;
  FText *pFVar2;
  FText local_18;
  
  pFVar2 = FText::FromString(&local_18,param_1);
  FText::operator=(&this->DebugText,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  local_18.Flags = FFieldNotificationClassDescriptor::DebugText.BitNumber;
  local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::DebugText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  bVar1 = FText::IsEmpty(&this->DebugText);
  if (bVar1) {
    this->DebugVisibility = bVar1;
  }
  else {
    this->DebugVisibility = SelfHitTestInvisible;
  }
  local_18.Flags = FFieldNotificationClassDescriptor::DebugVisibility.BitNumber;
  local_18.TextData.Reference =
       (ITextData *)FFieldNotificationClassDescriptor::DebugVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCloseInit @ 14bfbbfa0

void __thiscall UDS_VM_W_DebugTag::OnCloseInit(UDS_VM_W_DebugTag *this)

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

// OnSetViewModel @ 14bfcbf20

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_W_DebugTag::OnSetViewModel
          (UDS_VM_W_DebugTag *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar5;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar6;
  UObject *pUVar7;
  char *pcVar8;
  UObject *this_01;
  UFunction *pUVar9;
  char *pcVar10;
  <lambda_1> local_res10 [8];
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_d0;
  UDS_VM_W_DebugTag *local_c0;
  FName *local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_b0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_a0;
  FDestructionSentinel local_90;
  undefined1 local_78 [8];
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_b0.Object = param_1->Object;
  local_b0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Entity>(&local_d0,&local_b0);
  if (local_d0.Object == (FDS_ViewModelContext_Entity *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.SharedReferenceCount.ReferenceController);
    goto LAB_14bfcc266;
  }
  if ((local_d0.Object == (FDS_ViewModelContext_Entity *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = (local_d0.Object)->EntityID;
  this_00 = UDS_EntityManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 != (UDS_EntityManager *)0x0) goto LAB_14bfcbff3;
  }
  else if (this_00 != (UDS_EntityManager *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14bfcbff3:
    pFVar5 = UDS_EntityManager::FindEntityBase(this_00,uVar2);
    if (pFVar5 != (FDS_EntityBase *)0x0) {
      TVar6 = UDS_EntityData::GetData((ulong64)local_78,uVar2);
                    /* WARNING: Load size is inaccurate */
      (this->EntityData).WeakPtr = *TVar6.WeakPtr;
      bVar4 = FWeakObjectPtr::IsValid(&(this->EntityData).WeakPtr);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get(&(this->EntityData).WeakPtr);
        pcVar8 = strstr("&UDS_VM_W_DebugTag::OnChangedDebugText","::");
        if (pcVar8 == (char *)0x0) {
LAB_14bfcc09d:
          pcVar10 = &DAT_00000002;
LAB_14bfcc0a2:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          do {
            pcVar10 = pcVar8;
            pcVar8 = strstr(pcVar10 + 1,"::");
          } while (pcVar8 != (char *)0x0);
          if (pcVar10 == (char *)0x0) goto LAB_14bfcc09d;
          pcVar10 = pcVar10 + 2;
          if (*pcVar10 == '0') goto LAB_14bfcc0a2;
        }
        ::FName::FName(&local_res20,pcVar10);
        if ((this == (UDS_VM_W_DebugTag *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && InMethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                               ,0x4c8,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_res18 = local_res20;
        local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_e0.ObjectIndex = 0;
        local_e0.ObjectSerialNumber = 0;
        local_d8.ComparisonIndex.Value = 0;
        local_d8.Number = 0;
        if ((this == (UDS_VM_W_DebugTag *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && InMethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                               ,0x46d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_c0 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_W_DebugTag *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_c0);
        local_d8 = local_res18;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_e8,&local_70);
        if ((local_d8 == (FName)0x0) ||
           (this_01 = FWeakObjectPtr::Get(&local_e0), this_01 == (UObject *)0x0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_70);
LAB_14bfcc1cf:
          local_b8 = &local_res18;
          `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FString_const_&>::
          __Internal_BindDynamic<UDS_VM_W_DebugTag>'::__l2::<lambda_1>::operator()(&local_b8);
        }
        else {
          pUVar9 = UObject::FindFunction(this_01,local_d8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_70);
          if (pUVar9 == (UFunction *)0x0) goto LAB_14bfcc1cf;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_e8,&local_58);
        local_a0.Object = local_e0;
        local_a0.FunctionName = local_d8;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar7[5].field_0x8,
                   (FWriteAccessScope *)&local_90);
        TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
        RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                  ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                    *)&pUVar7[5].field_0x10,local_res10,Default);
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar7[5].field_0x8,
                   &local_a0);
        if (local_90.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.SharedReferenceCount.ReferenceController);
LAB_14bfcc266:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnViewDestruct @ 14bfd21f0

void __thiscall UDS_VM_W_DebugTag::OnViewDestruct(UDS_VM_W_DebugTag *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals(&this->EntityData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->EntityData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2[5].field_0x8,
               (UObject *)this);
  }
  return;
}

// SetDebugVisibility @ 14bfd9680

void __thiscall
UDS_VM_W_DebugTag::SetDebugVisibility(UDS_VM_W_DebugTag *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->DebugVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::DebugVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DebugVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bfdff80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_W_DebugTag::UnbindModel(UDS_VM_W_DebugTag *this)

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

