// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b724aa0

UClass * __cdecl UDS_VM_W_CharacterToolTip::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterToolTip.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterToolTip",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterToolTip.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterToolTip,0x110,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_CharacterToolTip>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterToolTip>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterToolTip.InnerSingleton;
}

// UDS_VM_W_CharacterToolTip @ 14b727230

UDS_VM_W_CharacterToolTip * __thiscall
UDS_VM_W_CharacterToolTip::UDS_VM_W_CharacterToolTip
          (UDS_VM_W_CharacterToolTip *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterToolTip__6B_;
  (this->VM_CharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  (this->VM_CharSkillList).field0_0x0.DebugPtr = (UDS_VM_CharSkillList *)0x0;
  (this->FixedText_Possession).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Possession).StringEnumTableNameID.Number = 0;
  (this->FixedText_Possession).DateTime.Ticks = 0;
  (this->FixedText_Possession).TimeSpan.Ticks = 0;
  (this->FixedText_Possession).TimeExpressionType = None;
  (this->FixedText_Possession).IsExpression = false;
  (this->FixedText_Possession).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Possession).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Possession).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Possession).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Possession).FormatArgs.ArrayNum = 0;
  (this->FixedText_Possession).FormatArgs.ArrayMax = 0;
  this->PlayerEntityID = 0;
  this->CharID = 0;
  (this->FixedText_Possession).StringTableType = StringUi;
  (this->FixedText_Possession).StringTableID = 0x29839;
  return this;
}

// UDS_VM_W_CharacterToolTip @ 14b7272e0

UDS_VM_W_CharacterToolTip * __thiscall
UDS_VM_W_CharacterToolTip::UDS_VM_W_CharacterToolTip
          (UDS_VM_W_CharacterToolTip *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterToolTip__6B_;
  (this->VM_CharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  (this->VM_CharSkillList).field0_0x0.DebugPtr = (UDS_VM_CharSkillList *)0x0;
  (this->FixedText_Possession).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Possession).StringEnumTableNameID.Number = 0;
  (this->FixedText_Possession).DateTime.Ticks = 0;
  (this->FixedText_Possession).TimeSpan.Ticks = 0;
  (this->FixedText_Possession).TimeExpressionType = None;
  (this->FixedText_Possession).IsExpression = false;
  (this->FixedText_Possession).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Possession).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Possession).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Possession).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Possession).FormatArgs.ArrayNum = 0;
  (this->FixedText_Possession).FormatArgs.ArrayMax = 0;
  this->PlayerEntityID = 0;
  this->CharID = 0;
  (this->FixedText_Possession).StringTableType = StringUi;
  (this->FixedText_Possession).StringTableID = 0x29839;
  return this;
}

// ~UDS_VM_W_CharacterToolTip @ 14b728db0

void __thiscall
UDS_VM_W_CharacterToolTip::~UDS_VM_W_CharacterToolTip(UDS_VM_W_CharacterToolTip *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterToolTip__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Possession).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Possession).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Possession).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Possession).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72ad50

IClassDescriptor * __thiscall
UDS_VM_W_CharacterToolTip::GetFieldNotificationDescriptor(UDS_VM_W_CharacterToolTip *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_CharacterToolTip::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72b3a0

UClass * __cdecl UDS_VM_W_CharacterToolTip::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterToolTip.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterToolTip",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterToolTip.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterToolTip,0x110,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_CharacterToolTip>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterToolTip>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterToolTip.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_CharacterToolTip @ 14b72bdc0

void __cdecl UDS_VM_W_CharacterToolTip::StaticRegisterNativesUDS_VM_W_CharacterToolTip(void)

{
  return;
}

// OnSetViewModel @ 14bfc84e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterToolTip::OnSetViewModel
          (UDS_VM_W_CharacterToolTip *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FDS_ViewModelContext_CharInfoData *pFVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_VM_CharInfoData *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UDS_VM_CharSkillList *pUVar9;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_00;
  longlong *plVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext *pFVar14;
  undefined1 auStackY_298 [32];
  TSharedPtr<FDS_ViewModelContext_CharInfoData,1> local_258;
  TSharedPtr<FDS_ViewModelContext_Character,1> local_248;
  FName local_238;
  int local_230;
  FName local_228;
  int local_220;
  TSharedPtr<FDS_ViewModelContext,1> local_218;
  TSharedPtr<FDS_ViewModelContext,1> local_208;
  TSharedPtr<FDS_ViewModelContext,1> local_1f8;
  TSharedPtr<FDS_ViewModelContext,1> local_1e8;
  undefined1 local_1d8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_208.Object = param_1->Object;
  local_208.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Character>(&local_248,&local_208);
  if (local_248.Object == (FDS_ViewModelContext_Character *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_CharacterToolTip::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x12,L"context is Invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.SharedReferenceCount.ReferenceController);
    goto LAB_14bfc8951;
  }
  if ((local_248.Object == (FDS_ViewModelContext_Character *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->PlayerEntityID = (local_248.Object)->PlayerEntityID;
  pUVar6 = (this->VM_CharInfoData).field0_0x0.DebugPtr;
  this->CharID = (local_248.Object)->CharID;
  if (pUVar6 == (UDS_VM_CharInfoData *)0x0) {
    pUVar6 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CharInfoData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_CharInfoData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_CharInfoData).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 != (UDS_VM_CharInfoData *)0x0) goto LAB_14bfc8667;
  }
  else {
LAB_14bfc8667:
    MakeContext<FDS_ViewModelContext_CharInfoData>(&local_258);
    pFVar3 = local_258.Object;
    if (local_258.Object != (FDS_ViewModelContext_CharInfoData *)0x0) {
      if ((local_258.Object == (FDS_ViewModelContext_CharInfoData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0xe;
      pFVar3->CharEntityID = this->PlayerEntityID;
      pUVar6 = (this->VM_CharInfoData).field0_0x0.DebugPtr;
      local_1e8.Object = (FDS_ViewModelContext *)local_258.Object;
      local_1e8.SharedReferenceCount.ReferenceController =
           local_258.SharedReferenceCount.ReferenceController;
      if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_1e8);
      local_230 = FFieldNotificationClassDescriptor::VM_CharInfoData.BitNumber;
      local_238 = FFieldNotificationClassDescriptor::VM_CharInfoData.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.SharedReferenceCount.ReferenceController);
  }
  pFVar14 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_CharSkillList).field0_0x0.DebugPtr == (UDS_VM_CharSkillList *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_VM_CharSkillList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UDS_VM_CharSkillList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar8,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1d8,pUVar7);
    local_1d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1d8._56_8_ = (UPackage *)0x0;
    local_1d8._16_4_ = 0;
    local_1d8._20_4_ = 0;
    local_1d8._24_4_ = RF_Transient;
    local_1d8._40_8_ = (UObject *)0x0;
    local_1d8[0x20] = false;
    local_1d8._8_8_ = this;
    pUVar9 = (UDS_VM_CharSkillList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
    if (local_1d8._64_8_ != 0) {
      plVar12 = (longlong *)(local_1d8 + 0x50);
      if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_1d8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (pUVar9 != (UDS_VM_CharSkillList *)0x0) {
      *(undefined1 *)((longlong)&pUVar9->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_CharSkillList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_CharSkillList).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 != (UDS_VM_CharSkillList *)0x0) goto LAB_14bfc87fa;
  }
  else {
LAB_14bfc87fa:
    pFVar10 = ::operator_new(0x30);
    pFVar13 = pFVar14;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar10->ViewModelTemplateKey = 0;
      ((atomic<int> *)&pFVar10[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
      *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
      (pFVar10->ViewModelName).ComparisonIndex = 0;
      (pFVar10->ViewModelName).Number = 0;
      pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_CharSkillList__6B_;
      pFVar10[1]._padding_ = 0;
      *(atomic<int> *)&pFVar10[1].DerivedStaticStruct = (atomic<int>)0x0;
      pFVar13 = pFVar10;
    }
    pFVar10 = ::operator_new(0x20);
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharSkillList__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar13;
      pFVar14 = pFVar10;
    }
    if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar11 = FDS_ViewModelContext_CharSkillList::StaticStruct();
    *(UScriptStruct **)&pFVar13->DerivedStaticStruct = pUVar11;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar14 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar14->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar14->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_218.Object = pFVar13;
      local_218.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar14;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_218);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
    }
    pFVar13->ViewModelTemplateKey = SkillInfoList;
    pFVar13[1]._padding_ = this->PlayerEntityID;
    *(int *)&pFVar13[1].DerivedStaticStruct = this->CharID;
    pUVar9 = (this->VM_CharSkillList).field0_0x0.DebugPtr;
    if (pFVar14 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar14->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar14->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_1f8.Object = pFVar13;
    local_1f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar14;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_1f8);
    local_220 = FFieldNotificationClassDescriptor::VM_CharSkillList.BitNumber;
    local_228 = FFieldNotificationClassDescriptor::VM_CharSkillList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar14);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
LAB_14bfc8951:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

