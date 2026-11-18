// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b5fd020

UClass * __cdecl UDS_VM_CharBuffData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharBuffData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharBuffData",
               &Z_Registration_Info_UClass_UDS_VM_CharBuffData.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharBuffData,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharBuffData>,
               InternalVTableHelperCtorCaller<UDS_VM_CharBuffData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharBuffData.InnerSingleton;
}

// UDS_VM_CharBuffData @ 14b600b70

UDS_VM_CharBuffData * __thiscall
UDS_VM_CharBuffData::UDS_VM_CharBuffData(UDS_VM_CharBuffData *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharBuffData__6B_;
  (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharBuffData).WeakPtr,(FObjectPtr)&local_res8);
  this->BuffListFilterType = All;
  this->NeedBuffCount = 0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_CharBuffData @ 14b600bf0

UDS_VM_CharBuffData * __thiscall
UDS_VM_CharBuffData::UDS_VM_CharBuffData(UDS_VM_CharBuffData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharBuffData__6B_;
  (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharBuffData).WeakPtr,(FObjectPtr)&local_res8);
  this->BuffListFilterType = All;
  this->NeedBuffCount = 0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_CharBuffData @ 14b601ef0

void __thiscall UDS_VM_CharBuffData::~UDS_VM_CharBuffData(UDS_VM_CharBuffData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharBuffData__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b603c30

IClassDescriptor * __thiscall
UDS_VM_CharBuffData::GetFieldNotificationDescriptor(UDS_VM_CharBuffData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CharBuffData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b604460

UClass * __cdecl UDS_VM_CharBuffData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharBuffData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharBuffData",
               &Z_Registration_Info_UClass_UDS_VM_CharBuffData.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharBuffData,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharBuffData>,
               InternalVTableHelperCtorCaller<UDS_VM_CharBuffData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharBuffData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CharBuffData @ 14b604970

void __cdecl UDS_VM_CharBuffData::StaticRegisterNativesUDS_VM_CharBuffData(void)

{
  return;
}

// OnChangedBuffList @ 14bdca490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharBuffData::OnChangedBuffList
          (UDS_VM_CharBuffData *this,ulong64 *param_1,int *param_2,bool *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_CharBuffData *this_00;
  UDS_UserObjectListItem *pUVar7;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_01;
  ulonglong uVar11;
  FDS_ViewModelContext *pFVar12;
  ForAnyElementType FVar13;
  FWeakObjectPtr *this_02;
  atomic<int> *paVar14;
  undefined1 auStackY_318 [32];
  undefined1 auStack_2e8 [4];
  uint uStack_2e4;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_2e0;
  undefined8 uStack_2d0;
  UDS_UserObjectListItem *pUStack_2c8;
  FDS_EntryBindingEventField *pFStack_2c0;
  UDS_VM_CharBuffData *pUStack_2b8;
  FWeakObjectPtr *pFStack_2b0;
  FScriptContainerElement *pFStack_2a8;
  FName FStack_298;
  int iStack_290;
  TSharedPtr<FDS_ViewModelContext,1> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  pFStack_2c0 = &this->EntryBindingEventField;
  pUStack_2b8 = this;
  FDS_EntryBindingEventField::Reset(pFStack_2c0);
  this_02 = &(this->CharBuffData).WeakPtr;
  pFStack_2b0 = this_02;
  bVar4 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)this_02,(void *)0x0);
  if (bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    TStack_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_278,"UDS_VM_CharBuffData::UpdateBuffList",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,TStack_278.Ptr,0x45,L"CharBuffData is nullptr.");
    TStack_2e0.AllocatorInstance.Data = (FScriptContainerElement *)TStack_278._padding_;
  }
  else {
    this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(this_02);
    UDS_CharBuffData::GetBuffList(this_00,&TStack_2e0,&this->BuffListFilterType,this->NeedBuffCount)
    ;
    uStack_2e4 = TStack_2e0.ArrayNum;
    uVar11 = (ulonglong)(int)uStack_2e4;
    pFStack_2a8 = TStack_2e0.AllocatorInstance.Data + uVar11 * 4;
    FVar13.Data = TStack_2e0.AllocatorInstance.Data;
    while( true ) {
      pFVar2 = pFStack_2a8;
      if (TStack_2e0.ArrayNum != (int)uVar11) {
        auStack_2e8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStack_2e8);
      }
      if (FVar13.Data == pFVar2) break;
      pUVar7 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 == (UDS_UserObjectListItem *)0x0) goto LAB_14bded7d3;
      }
      else {
        if (pUVar7 == (UDS_UserObjectListItem *)0x0) {
LAB_14bded7d3:
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            TStack_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_158,"UDS_VM_CharBuffData::UpdateBuffList",0x23,Yes);
            UDS_LogManager::PrintLog(pUVar6,1,Warning,TStack_158.Ptr,0x4f,L"listItem is nullptr.");
            if ((void *)TStack_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_158._padding_);
            }
          }
          goto LAB_14bded899;
        }
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      pFVar8 = ::operator_new(0x38);
      pFVar12 = (FDS_ViewModelContext *)0x0;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
        *(undefined8 *)&pFVar8[1].DerivedStaticStruct = 0;
        pFVar8[1].ViewModelName.ComparisonIndex = 0;
        pFVar8[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
        (pFVar8->ViewModelName).ComparisonIndex = 0;
        (pFVar8->ViewModelName).Number = 0;
        pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_BuffInfo__6B_;
        *(int *)&pFVar8[1]._padding_ = 0;
        *(undefined4 *)((longlong)&pFVar8[1]._padding_ + 4) = 0;
        uStack_2d0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar8 + 1),(FObjectPtr)&uStack_2d0);
        *(undefined8 *)&pFVar8[1].DerivedStaticStruct = 0;
        pFVar8[1].ViewModelName.ComparisonIndex.Value = 0;
        *(undefined2 *)&pFVar8[1].ViewModelName.Number = 0;
        *(undefined1 *)((longlong)&pFVar8[1].ViewModelName.Number + 2) = 0;
        pFVar12 = pFVar8;
      }
      pFVar9 = ::operator_new(0x20);
      pFVar8 = (FDS_ViewModelContext *)0x0;
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(code **)&(pFVar9->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        *(atomic<int> *)&pFVar9->DerivedStaticStruct = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar9->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        pFVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_BuffInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(FDS_ViewModelContext **)&pFVar9->ViewModelTemplateKey = pFVar12;
        pFVar8 = pFVar9;
      }
      if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar10 = FDS_ViewModelContext_BuffInfo::StaticStruct();
      *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar10;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar8->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
          UNLOCK();
        }
        TStack_288.Object = pFVar12;
        TStack_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        UDS_ViewModelContextManager::RegisterContext(this_01,&TStack_288);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_288.SharedReferenceCount.ReferenceController);
      }
      pFVar12->ViewModelTemplateKey = Data_BuffInfo;
      pFVar12[1]._padding_ = (longlong)*this_02;
      pFVar12[1].ViewModelName.ComparisonIndex.Value = *(uint *)FVar13.Data;
      if (pFVar8 == (FDS_ViewModelContext *)0x0) {
        paVar14 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar14 = (atomic<int> *)&pFVar8->DerivedStaticStruct;
        LOCK();
        *paVar14 = (atomic<int>)((int)*paVar14 + 1);
        UNLOCK();
      }
      iVar5 = (pUVar7->ViewModelContextArray).ArrayNum;
      piVar1 = &(pUVar7->ViewModelContextArray).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pUVar7->ViewModelContextArray).AllocatorInstance,piVar1);
      }
      (pUVar7->ViewModelContextArray).ArrayNum = iVar5 + 1;
      pFVar2 = (pUVar7->ViewModelContextArray).AllocatorInstance.Data;
      *(FDS_ViewModelContext **)(pFVar2 + (longlong)iVar5 * 0x10) = pFVar12;
      *(FDS_ViewModelContext **)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = pFVar8;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *paVar14 = (atomic<int>)((int)*paVar14 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
      pUStack_2c8 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FDS_EntryBindingEventField::Add(pFStack_2c0,(TObjectPtr<UDS_UserObjectListItem>)&pUStack_2c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
      FVar13.Data = FVar13.Data + 4;
      uVar11 = (ulonglong)uStack_2e4;
      this = pUStack_2b8;
      this_02 = pFStack_2b0;
    }
    iStack_290 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
    FStack_298 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_298);
  }
LAB_14bded899:
  if (TStack_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_2e0.AllocatorInstance.Data);
  }
  return;
}

// OnSetViewModel @ 14bdd39d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharBuffData::OnSetViewModel
          (UDS_VM_CharBuffData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDS_ViewModelContext *pFVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  undefined1 auStackY_1d8 [32];
  TSharedPtr<FDS_ViewModelContext_CharBuffData,1> local_1a8;
  UObject *local_198 [2];
  undefined1 local_188 [24];
  TReferenceControllerBase<1> *local_170;
  code *local_168;
  longlong lStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar1 = &param_1->SharedReferenceCount;
  pTVar3 = pFVar1->ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar4 = param_1->Object;
  if (pFVar4 == (FDS_ViewModelContext *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_CharBuffData::OnSetViewModel",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_158.Ptr,0x13,L"InViewModelContext is nullptr.");
      if ((FDS_ViewModelContext_CharBuffData *)local_158._padding_ !=
          (FDS_ViewModelContext_CharBuffData *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    goto LAB_14bdd3cd4;
  }
  local_170 = pFVar1->ReferenceController;
  if (local_170 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_170->SharedReferenceCount = (atomic<int>)((int)local_170->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188._16_8_ = pFVar4;
  SafeCast<FDS_ViewModelContext_CharBuffData>
            (&local_1a8,(TSharedPtr<FDS_ViewModelContext,1> *)(local_188 + 0x10));
  if (local_1a8.Object == (FDS_ViewModelContext_CharBuffData *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = (longlong)local_1a8.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_CharBuffData::OnSetViewModel",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x1a,L"context is nullptr.");
      if ((FDS_ViewModelContext_CharBuffData *)local_158._padding_ !=
          (FDS_ViewModelContext_CharBuffData *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
    goto LAB_14bdd3cd4;
  }
  local_198[0] = FWeakObjectPtr::Get(&((local_1a8.Object)->Value).WeakPtr);
  if (local_198[0] == (UObject *)0x0) {
LAB_14bdd3b9c:
    local_198[0] = (UObject *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_CharBuffData_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&local_198[0]->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_198[0]->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) goto LAB_14bdd3b9c;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_198[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_198[0]);
  }
  FWeakObjectPtr::operator=(&(this->CharBuffData).WeakPtr,(FObjectPtr)local_198);
  bVar5 = FWeakObjectPtr::IsValid(&(this->CharBuffData).WeakPtr);
  if (bVar5) {
    this->BuffListFilterType = (local_1a8.Object)->BuffListFilterType;
    this->NeedBuffCount = (local_1a8.Object)->NeedBuffCount;
    local_188._0_8_ = OnChangedBuffList;
    local_188._8_4_ = 0;
    lStack_160 = (ulonglong)(uint)local_188._12_4_ << 0x20;
    local_168 = OnChangedBuffList;
    pUVar8 = FWeakObjectPtr::Get(&(this->CharBuffData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_CharBuffData>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar8[6].field_0x8,(UDS_VM_CharBuffData *)local_188,(pmf_64d5cf5e *)this);
    UpdateBuffList(this);
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_CharBuffData::OnSetViewModel",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x21,L"CharBuffData is invalid.");
      if ((FDS_ViewModelContext_CharBuffData *)local_158._padding_ !=
          (FDS_ViewModelContext_CharBuffData *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
LAB_14bdd3cd4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return;
}

// UnbindModel @ 14bdeba50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CharBuffData::UnbindModel(UDS_VM_CharBuffData *this)

{
  bool bVar1;
  UDS_LanguageManager *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  pUVar2 = UDS_LanguageManager::GetInst();
  if (pUVar2 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLanguageChanged,this
              );
  }
  bVar1 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    (&this->CharBuffData,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->CharBuffData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x8,this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->CharBuffData).WeakPtr = local_res8;
  return;
}

// UpdateBuffList @ 14bded480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharBuffData::UpdateBuffList(UDS_VM_CharBuffData *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_CharBuffData *this_00;
  UDS_UserObjectListItem *pUVar7;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_01;
  ulonglong uVar11;
  FDS_ViewModelContext *pFVar12;
  ForAnyElementType FVar13;
  FWeakObjectPtr *this_02;
  atomic<int> *paVar14;
  undefined1 auStackY_318 [32];
  undefined1 local_2e8 [4];
  uint local_2e4;
  TArray<int,TSizedDefaultAllocator<32>_> local_2e0;
  undefined8 local_2d0;
  UDS_UserObjectListItem *local_2c8;
  FDS_EntryBindingEventField *local_2c0;
  UDS_VM_CharBuffData *local_2b8;
  FWeakObjectPtr *local_2b0;
  FScriptContainerElement *local_2a8;
  FName local_298;
  int local_290;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2c0 = &this->EntryBindingEventField;
  local_2b8 = this;
  FDS_EntryBindingEventField::Reset(local_2c0);
  this_02 = &(this->CharBuffData).WeakPtr;
  local_2b0 = this_02;
  bVar4 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)this_02,(void *)0x0);
  if (bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_VM_CharBuffData::UpdateBuffList",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_278.Ptr,0x45,L"CharBuffData is nullptr.");
    local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)local_278._padding_;
  }
  else {
    this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(this_02);
    UDS_CharBuffData::GetBuffList(this_00,&local_2e0,&this->BuffListFilterType,this->NeedBuffCount);
    local_2e4 = local_2e0.ArrayNum;
    uVar11 = (ulonglong)(int)local_2e4;
    local_2a8 = local_2e0.AllocatorInstance.Data + uVar11 * 4;
    FVar13.Data = local_2e0.AllocatorInstance.Data;
    while( true ) {
      pFVar2 = local_2a8;
      if (local_2e0.ArrayNum != (int)uVar11) {
        local_2e8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2e8);
      }
      if (FVar13.Data == pFVar2) break;
      pUVar7 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 == (UDS_UserObjectListItem *)0x0) goto LAB_14bded7d3;
      }
      else {
        if (pUVar7 == (UDS_UserObjectListItem *)0x0) {
LAB_14bded7d3:
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_VM_CharBuffData::UpdateBuffList",0x23,Yes);
            UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x4f,L"listItem is nullptr.");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
          goto LAB_14bded899;
        }
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      pFVar8 = ::operator_new(0x38);
      pFVar12 = (FDS_ViewModelContext *)0x0;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
        *(undefined8 *)&pFVar8[1].DerivedStaticStruct = 0;
        pFVar8[1].ViewModelName.ComparisonIndex = 0;
        pFVar8[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
        (pFVar8->ViewModelName).ComparisonIndex = 0;
        (pFVar8->ViewModelName).Number = 0;
        pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_BuffInfo__6B_;
        *(int *)&pFVar8[1]._padding_ = 0;
        *(undefined4 *)((longlong)&pFVar8[1]._padding_ + 4) = 0;
        local_2d0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar8 + 1),(FObjectPtr)&local_2d0);
        *(undefined8 *)&pFVar8[1].DerivedStaticStruct = 0;
        pFVar8[1].ViewModelName.ComparisonIndex.Value = 0;
        *(undefined2 *)&pFVar8[1].ViewModelName.Number = 0;
        *(undefined1 *)((longlong)&pFVar8[1].ViewModelName.Number + 2) = 0;
        pFVar12 = pFVar8;
      }
      pFVar9 = ::operator_new(0x20);
      pFVar8 = (FDS_ViewModelContext *)0x0;
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(code **)&(pFVar9->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        *(atomic<int> *)&pFVar9->DerivedStaticStruct = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar9->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        pFVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_BuffInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(FDS_ViewModelContext **)&pFVar9->ViewModelTemplateKey = pFVar12;
        pFVar8 = pFVar9;
      }
      if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar10 = FDS_ViewModelContext_BuffInfo::StaticStruct();
      *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar10;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar8->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_288.Object = pFVar12;
        local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_288);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288.SharedReferenceCount.ReferenceController);
      }
      pFVar12->ViewModelTemplateKey = Data_BuffInfo;
      pFVar12[1]._padding_ = (longlong)*this_02;
      pFVar12[1].ViewModelName.ComparisonIndex.Value = *(uint *)FVar13.Data;
      if (pFVar8 == (FDS_ViewModelContext *)0x0) {
        paVar14 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar14 = (atomic<int> *)&pFVar8->DerivedStaticStruct;
        LOCK();
        *paVar14 = (atomic<int>)((int)*paVar14 + 1);
        UNLOCK();
      }
      iVar5 = (pUVar7->ViewModelContextArray).ArrayNum;
      piVar1 = &(pUVar7->ViewModelContextArray).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pUVar7->ViewModelContextArray).AllocatorInstance,piVar1);
      }
      (pUVar7->ViewModelContextArray).ArrayNum = iVar5 + 1;
      pFVar2 = (pUVar7->ViewModelContextArray).AllocatorInstance.Data;
      *(FDS_ViewModelContext **)(pFVar2 + (longlong)iVar5 * 0x10) = pFVar12;
      *(FDS_ViewModelContext **)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = pFVar8;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *paVar14 = (atomic<int>)((int)*paVar14 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
      local_2c8 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FDS_EntryBindingEventField::Add(local_2c0,(TObjectPtr<UDS_UserObjectListItem>)&local_2c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
      FVar13.Data = FVar13.Data + 4;
      uVar11 = (ulonglong)local_2e4;
      this = local_2b8;
      this_02 = local_2b0;
    }
    local_290 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
    local_298 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
  }
LAB_14bded899:
  if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.AllocatorInstance.Data);
  }
  return;
}

