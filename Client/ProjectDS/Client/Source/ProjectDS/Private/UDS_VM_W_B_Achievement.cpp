// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetClickClaimAll_WrapperImpl @ 14b70c5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_B_Achievement::SetClickClaimAll_WrapperImpl(void *param_1,void *param_2)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UDS_AchievementDataSet *this;
  UDS_AchievementData *this_00;
  FDS_AchievementBaseTableRow *pFVar5;
  int iVar6;
  ForAnyElementType FVar7;
  undefined1 auStackY_1c8 [32];
  FIdentityFunctor aFStack_198 [8];
  TArray<int,TSizedDefaultAllocator<32>_> TStack_190;
  FWeakObjectPtr FStack_180;
  FWeakObjectPtr FStack_178;
  TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_170;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  TStack_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_190.ArrayNum = 0;
  TStack_190.ArrayMax = 0;
  TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&FStack_180);
  bVar2 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&FStack_180,
                     (void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bfb8d99;
    pUVar4 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_W_B_Achievement::OnClickClaimAll",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_148.Ptr,0x70,L"achievementDataSet is nullptr.")
    ;
    TStack_170.AllocatorInstance.Data = (FScriptContainerElement *)TStack_148._padding_;
  }
  else {
    this = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(&FStack_180);
    UDS_AchievementDataSet::GetAchievementClaimAbleDataList(this,&TStack_170);
    iVar6 = TStack_170.ArrayNum;
    pFVar1 = (FWeakObjectPtr *)(TStack_170.AllocatorInstance.Data + (longlong)iVar6 * 8);
    FVar7.Data = TStack_170.AllocatorInstance.Data;
    while( true ) {
      if (TStack_170.ArrayNum != iVar6) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(aFStack_198);
      }
      if ((FWeakObjectPtr *)FVar7.Data == pFVar1) break;
      FStack_178 = *(FWeakObjectPtr *)FVar7.Data;
      bVar2 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> *)&FStack_178,
                         (void *)0x0);
      if (!bVar2) {
        this_00 = (UDS_AchievementData *)FWeakObjectPtr::Get(&FStack_178);
        pFVar5 = UDS_AchievementData::GetAchievementBaseTableRow(this_00);
        if (pFVar5 != (FDS_AchievementBaseTableRow *)0x0) {
          iVar3 = TStack_190.ArrayNum;
          if (TStack_190.ArrayNum == TStack_190.ArrayMax) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&TStack_190.AllocatorInstance,&TStack_190.ArrayMax);
          }
          TStack_190.ArrayNum = iVar3 + 1;
          *(int *)(TStack_190.AllocatorInstance.Data + (longlong)iVar3 * 4) = pFVar5->ID;
        }
      }
      FVar7.Data = FVar7.Data + 8;
    }
    if (TStack_190.ArrayNum == 0) {
      TStack_160._0_8_ = 0;
      TStack_160._8_8_ = 0;
      TStack_160._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x50916,Alert_System_01,&TStack_160);
    }
    else {
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)TStack_190.AllocatorInstance.Data,TStack_190.ArrayNum,aFStack_198[0],
                 (TLess<void> *)aFStack_198);
      FDS_AchievementService::RequestAchievementCompleteAll(&TStack_190);
    }
  }
  if (TStack_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_170.AllocatorInstance.Data);
  }
LAB_14bfb8d99:
  if (TStack_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_190.AllocatorInstance.Data);
  }
  return;
}

// SetCheckBoxCheckedEvent_WrapperImpl @ 14b70c5e0

void __cdecl
UDS_VM_W_B_Achievement::SetCheckBoxCheckedEvent_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 400) = *(undefined1 *)param_2;
  UpdateData(param_1,*(EDS_AchievementCategory *)((longlong)param_1 + 0x188),true);
  return;
}

// StaticClass @ 14b70c600

UClass * __cdecl UDS_VM_W_B_Achievement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_Achievement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_Achievement",
               &Z_Registration_Info_UClass_UDS_VM_W_B_Achievement.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_Achievement,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_Achievement>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_Achievement>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_Achievement.InnerSingleton;
}

// UDS_VM_W_B_Achievement @ 14b710e00

UDS_VM_W_B_Achievement * __thiscall
UDS_VM_W_B_Achievement::UDS_VM_W_B_Achievement(UDS_VM_W_B_Achievement *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_Achievement__6B_;
  *(undefined8 *)&(this->ClickClaimAll).Delegate = 0;
  *(undefined8 *)&(this->ClickClaimAll).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClaimAll).Delegate.field_0x10 = 0;
  (this->AchievementCategoryEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AchievementCategoryEventField).UserObjectList.ArrayNum = 0;
  (this->AchievementCategoryEventField).UserObjectList.ArrayMax = 0;
  (this->AchievementListEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AchievementListEventField).UserObjectList.ArrayNum = 0;
  (this->AchievementListEventField).UserObjectList.ArrayMax = 0;
  (this->CheckBoxCheckedEvent).bIsActivate = false;
  (this->FixedText_Btn_ClaimAll).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_ClaimAll).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_ClaimAll).DateTime.Ticks = 0;
  (this->FixedText_Btn_ClaimAll).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_ClaimAll).TimeExpressionType = None;
  (this->FixedText_Btn_ClaimAll).IsExpression = false;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.ArrayMax = 0;
  (this->FixedText_Check_ShowAll).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Check_ShowAll).StringEnumTableNameID.Number = 0;
  (this->FixedText_Check_ShowAll).DateTime.Ticks = 0;
  (this->FixedText_Check_ShowAll).TimeSpan.Ticks = 0;
  (this->FixedText_Check_ShowAll).TimeExpressionType = None;
  (this->FixedText_Check_ShowAll).IsExpression = false;
  (this->FixedText_Check_ShowAll).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Check_ShowAll).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Check_ShowAll).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Check_ShowAll).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Check_ShowAll).FormatArgs.ArrayNum = 0;
  (this->FixedText_Check_ShowAll).FormatArgs.ArrayMax = 0;
  this->CurrentCategory = None;
  this->AchievementDataCount = 0;
  this->bShowAllAchievement = false;
  (this->ClickClaimAll)._padding_ = '\0';
  (this->ClickClaimAll).bIsCustomSelected = false;
  (this->ClickClaimAll).bIsLacked = false;
  (this->ClickClaimAll).bIsCustomDisabled = false;
  (this->FixedText_Btn_ClaimAll).StringTableType = StringUi;
  (this->FixedText_Btn_ClaimAll).StringTableID = 0x50922;
  (this->FixedText_Check_ShowAll).StringTableType = StringUi;
  (this->FixedText_Check_ShowAll).StringTableID = 0x50921;
  return this;
}

// UDS_VM_W_B_Achievement @ 14b710f30

UDS_VM_W_B_Achievement * __thiscall
UDS_VM_W_B_Achievement::UDS_VM_W_B_Achievement
          (UDS_VM_W_B_Achievement *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_Achievement__6B_;
  *(undefined8 *)&(this->ClickClaimAll).Delegate = 0;
  *(undefined8 *)&(this->ClickClaimAll).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClaimAll).Delegate.field_0x10 = 0;
  (this->AchievementCategoryEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AchievementCategoryEventField).UserObjectList.ArrayNum = 0;
  (this->AchievementCategoryEventField).UserObjectList.ArrayMax = 0;
  (this->AchievementListEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AchievementListEventField).UserObjectList.ArrayNum = 0;
  (this->AchievementListEventField).UserObjectList.ArrayMax = 0;
  (this->CheckBoxCheckedEvent).bIsActivate = false;
  (this->FixedText_Btn_ClaimAll).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_ClaimAll).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_ClaimAll).DateTime.Ticks = 0;
  (this->FixedText_Btn_ClaimAll).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_ClaimAll).TimeExpressionType = None;
  (this->FixedText_Btn_ClaimAll).IsExpression = false;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.ArrayMax = 0;
  (this->FixedText_Check_ShowAll).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Check_ShowAll).StringEnumTableNameID.Number = 0;
  (this->FixedText_Check_ShowAll).DateTime.Ticks = 0;
  (this->FixedText_Check_ShowAll).TimeSpan.Ticks = 0;
  (this->FixedText_Check_ShowAll).TimeExpressionType = None;
  (this->FixedText_Check_ShowAll).IsExpression = false;
  (this->FixedText_Check_ShowAll).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Check_ShowAll).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Check_ShowAll).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Check_ShowAll).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Check_ShowAll).FormatArgs.ArrayNum = 0;
  (this->FixedText_Check_ShowAll).FormatArgs.ArrayMax = 0;
  this->CurrentCategory = None;
  this->AchievementDataCount = 0;
  this->bShowAllAchievement = false;
  (this->ClickClaimAll)._padding_ = '\0';
  (this->ClickClaimAll).bIsCustomSelected = false;
  (this->ClickClaimAll).bIsLacked = false;
  (this->ClickClaimAll).bIsCustomDisabled = false;
  (this->FixedText_Btn_ClaimAll).StringTableType = StringUi;
  (this->FixedText_Btn_ClaimAll).StringTableID = 0x50922;
  (this->FixedText_Check_ShowAll).StringTableType = StringUi;
  (this->FixedText_Check_ShowAll).StringTableID = 0x50921;
  return this;
}

// ~UDS_VM_W_B_Achievement @ 14b713220

void __thiscall UDS_VM_W_B_Achievement::~UDS_VM_W_B_Achievement(UDS_VM_W_B_Achievement *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_Achievement__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Check_ShowAll).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Check_ShowAll).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Check_ShowAll).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Check_ShowAll).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_ClaimAll).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_ClaimAll).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_ClaimAll).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_ClaimAll).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AchievementListEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AchievementCategoryEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClaimAll).Delegate);
  pvVar2 = *(void **)&(this->ClickClaimAll).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClaimAll).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7169f0

IClassDescriptor * __thiscall
UDS_VM_W_B_Achievement::GetFieldNotificationDescriptor(UDS_VM_W_B_Achievement *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_B_Achievement::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717a10

UClass * __cdecl UDS_VM_W_B_Achievement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_Achievement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_Achievement",
               &Z_Registration_Info_UClass_UDS_VM_W_B_Achievement.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_Achievement,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_Achievement>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_Achievement>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_Achievement.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_B_Achievement @ 14b718a10

void __cdecl UDS_VM_W_B_Achievement::StaticRegisterNativesUDS_VM_W_B_Achievement(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_B_Achievement_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsAllCaimeAble @ 14b719f60

void __cdecl
UDS_VM_W_B_Achievement::execIsAllCaimeAble(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsAllCaimeAble((UDS_VM_W_B_Achievement *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnChangedData @ 14b71a150

void __cdecl
UDS_VM_W_B_Achievement::execOnChangedData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
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
  OnChangedData((UDS_VM_W_B_Achievement *)param_1,local_res10);
  return;
}

// BindModel @ 14bf9c440

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_W_B_Achievement::BindModel(UDS_VM_W_B_Achievement *this)

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

// GetActiveAchievementCategory @ 14bfaab00

EDS_AchievementCategory __thiscall
UDS_VM_W_B_Achievement::GetActiveAchievementCategory(UDS_VM_W_B_Achievement *this)

{
  return None;
}

// GetCategoryID @ 14bfaaf30

int __thiscall
UDS_VM_W_B_Achievement::GetCategoryID(UDS_VM_W_B_Achievement *this,EDS_AchievementCategory param_1)

{
  if (param_1 == Adventure) {
    return 0x5091d;
  }
  if (param_1 == Upgrade) {
    return 0x5091e;
  }
  if (param_1 == Challenge) {
    return 0x5091f;
  }
  if (param_1 != Sever) {
    return 0;
  }
  return 0x50920;
}

// InitViewModel @ 14bfafb50

void __thiscall UDS_VM_W_B_Achievement::InitViewModel(UDS_VM_W_B_Achievement *this)

{
  return;
}

// IsAllCaimeAble @ 14bfb22a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_W_B_Achievement::IsAllCaimeAble(UDS_VM_W_B_Achievement *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AchievementDataSet *this_00;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)local_148);
  bVar1 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)local_148,(void *)0x0)
  ;
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_B_Achievement::IsAllCaimeAble",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xf7,L"achievementDataSet is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  this_00 = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(local_148);
  bVar1 = UDS_AchievementDataSet::IsAllClaimAble(this_00);
  return bVar1;
}

// OnChangedData @ 14bfb6690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_Achievement::OnChangedData(UDS_VM_W_B_Achievement *this,UDS_DataSetBase *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UClass *pUVar4;
  undefined1 auStackY_178 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_148;
  UDS_DataSetBase *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == (UDS_DataSetBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_B_Achievement::OnChangedData",0x25,Yes);
    pwVar6 = L"InDataSetBase is nullptr.";
    uVar5 = 0xde;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_AchievementDataSet_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      param_1 = (UDS_DataSetBase *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataSetBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    local_140 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataSetBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
    bVar2 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_148,
                       (void *)0x0);
    if (!bVar2) {
      UpdateData(this,this->CurrentCategory,true);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_B_Achievement::OnChangedData",0x25,Yes);
    pwVar6 = L"achievementDataSet is nullptr.";
    uVar5 = 0xe5;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnCheckBoxCheckedEvent @ 14bfb7c50

void __thiscall
UDS_VM_W_B_Achievement::OnCheckBoxCheckedEvent
          (UDS_VM_W_B_Achievement *this,FDS_WidgetEventField *param_1)

{
  this->bShowAllAchievement = param_1->bIsActivate;
  UpdateData(this,this->CurrentCategory,true);
  return;
}

// OnClickCategory @ 14bfb8b30

void __thiscall
UDS_VM_W_B_Achievement::OnClickCategory
          (UDS_VM_W_B_Achievement *this,FDS_ButtonEventField *param_1,int param_2)

{
  UpdateData(this,(EDS_AchievementCategory)param_2,false);
  return;
}

// OnClickClaimAll @ 14bfb8b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_Achievement::OnClickClaimAll(UDS_VM_W_B_Achievement *this,FDS_ButtonEventField *param_1)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UDS_AchievementDataSet *this_00;
  UDS_AchievementData *this_01;
  FDS_AchievementBaseTableRow *pFVar5;
  int iVar6;
  ForAnyElementType FVar7;
  undefined1 auStackY_1c8 [32];
  FIdentityFunctor local_198 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_190;
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_170;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&local_180);
  bVar2 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_180,(void *)0x0
                    );
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bfb8d99;
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_W_B_Achievement::OnClickClaimAll",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x70,L"achievementDataSet is nullptr.");
    local_170.AllocatorInstance.Data = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    this_00 = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(&local_180);
    UDS_AchievementDataSet::GetAchievementClaimAbleDataList(this_00,&local_170);
    iVar6 = local_170.ArrayNum;
    pFVar1 = (FWeakObjectPtr *)(local_170.AllocatorInstance.Data + (longlong)iVar6 * 8);
    FVar7.Data = local_170.AllocatorInstance.Data;
    while( true ) {
      if (local_170.ArrayNum != iVar6) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_198);
      }
      if ((FWeakObjectPtr *)FVar7.Data == pFVar1) break;
      local_178 = *(FWeakObjectPtr *)FVar7.Data;
      bVar2 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> *)&local_178,
                         (void *)0x0);
      if (!bVar2) {
        this_01 = (UDS_AchievementData *)FWeakObjectPtr::Get(&local_178);
        pFVar5 = UDS_AchievementData::GetAchievementBaseTableRow(this_01);
        if (pFVar5 != (FDS_AchievementBaseTableRow *)0x0) {
          iVar3 = local_190.ArrayNum;
          if (local_190.ArrayNum == local_190.ArrayMax) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_190.AllocatorInstance,&local_190.ArrayMax);
          }
          local_190.ArrayNum = iVar3 + 1;
          *(int *)(local_190.AllocatorInstance.Data + (longlong)iVar3 * 4) = pFVar5->ID;
        }
      }
      FVar7.Data = FVar7.Data + 8;
    }
    if (local_190.ArrayNum == 0) {
      local_160._0_8_ = 0;
      local_160._8_8_ = 0;
      local_160._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x50916,Alert_System_01,&local_160);
    }
    else {
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)local_190.AllocatorInstance.Data,local_190.ArrayNum,local_198[0],
                 (TLess<void> *)local_198);
      FDS_AchievementService::RequestAchievementCompleteAll(&local_190);
    }
  }
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
LAB_14bfb8d99:
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  return;
}

// OnSetViewModel @ 14bfc4470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_Achievement::OnSetViewModel
          (UDS_VM_W_B_Achievement *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_ContentsTabFrameType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  char *pcVar7;
  UObject *this_00;
  UFunction *pUVar8;
  UDS_AchievementDataSet *this_01;
  TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  EDS_AchievementCategory EVar10;
  char *pcVar11;
  undefined1 auStackY_4a8 [32];
  <lambda_1> local_468 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_460;
  FWeakObjectPtr local_458;
  FName local_450;
  FWeakObjectPtr local_448;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_440;
  FName local_430;
  FName local_428;
  UDS_VM_W_B_Achievement *local_420;
  FName *local_418;
  TSharedPtr<FDS_ViewModelContext,1> local_410;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_400;
  FDestructionSentinel local_3f0;
  TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_3d8;
  FReadAccessScope local_3c8;
  FReadAccessScope local_3b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_410.Object = param_1->Object;
  local_410.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_410.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_410.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_410.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_440,&local_410);
  if (local_440.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_VM_W_B_Achievement::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_398.Ptr,0x1a,L"context is nullptr.");
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_440.SharedReferenceCount.ReferenceController);
    goto LAB_14bfc499a;
  }
  TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&local_448);
  bVar4 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_448,(void *)0x0
                    );
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_W_B_Achievement::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_278.Ptr,0x21,L"achievementDataSet is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_440.SharedReferenceCount.ReferenceController);
    goto LAB_14bfc499a;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_448);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar6 + 1),(UObject *)this);
  pUVar6 = FWeakObjectPtr::Get(&local_448);
  pcVar7 = strstr("&UDS_VM_W_B_Achievement::OnChangedData","::");
  if (pcVar7 == (char *)0x0) {
LAB_14bfc469c:
    pcVar11 = &DAT_00000002;
LAB_14bfc46a1:
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
      pcVar11 = pcVar7;
      pcVar7 = strstr(pcVar11 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar11 == (char *)0x0) goto LAB_14bfc469c;
    pcVar11 = pcVar11 + 2;
    if (*pcVar11 == '0') goto LAB_14bfc46a1;
  }
  ::FName::FName(&local_428,pcVar11);
  if ((this == (UDS_VM_W_B_Achievement *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_430 = local_428;
  local_460.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_458.ObjectIndex = 0;
  local_458.ObjectSerialNumber = 0;
  local_450.ComparisonIndex.Value = 0;
  local_450.Number = 0;
  if ((this == (UDS_VM_W_B_Achievement *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_420 = this;
  if (this == (UDS_VM_W_B_Achievement *)0x0) {
    local_420 = (UDS_VM_W_B_Achievement *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_420 != (UDS_VM_W_B_Achievement *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_420);
  }
  FWeakObjectPtr::operator=(&local_458,(FObjectPtr)&local_420);
  local_450 = local_430;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_460,&local_3c8);
  if ((local_450 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_458), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3c8);
LAB_14bfc47d1:
    local_418 = &local_430;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
    __Internal_BindDynamic<UDS_VM_W_B_Achievement>'::__l2::<lambda_1>::operator()(&local_418);
  }
  else {
    pUVar8 = UObject::FindFunction(this_00,local_450);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3c8);
    if (pUVar8 == (UFunction *)0x0) goto LAB_14bfc47d1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_460,&local_3b0);
  local_400.Object = local_458;
  local_400.FunctionName = local_450;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_3b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar6 + 1),
             (FWriteAccessScope *)&local_3f0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar6[1].field_0x8,local_468,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar6 + 1),&local_400);
  if (local_3f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f0.Accessor,&local_3f0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_460.AccessDetector);
  if ((local_440.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar1 = (local_440.Object)->TabFrameID;
  if ((EVar1 == Achievement) || (EVar1 == Achievement_Adventure)) {
    EVar10 = Adventure;
LAB_14bfc4947:
    UpdateData(this,EVar10,false);
    this_01 = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(&local_448);
    pTVar9 = UDS_AchievementDataSet::GetAchievementDataList
                       (this_01,&local_3d8,this->CurrentCategory);
    this->AchievementDataCount = pTVar9->ArrayNum;
LAB_14bfc497e:
    if (local_3d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.AllocatorInstance.Data);
    }
  }
  else {
    if (EVar1 == Achievement_Upgrade) {
      EVar10 = Upgrade;
      goto LAB_14bfc4947;
    }
    if (EVar1 == Achievement_Challenge) {
      EVar10 = Challenge;
      goto LAB_14bfc4947;
    }
    if (EVar1 == Achievement_Sever) {
      EVar10 = Sever;
      goto LAB_14bfc4947;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_B_Achievement::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x48,L"TabFrameType is invalid. (%d)")
      ;
      local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
      goto LAB_14bfc497e;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_440.SharedReferenceCount.ReferenceController);
LAB_14bfc499a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bfdf740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_Achievement::UnbindModel(UDS_VM_W_B_Achievement *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)local_148);
  bVar1 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)local_148,(void *)0x0)
  ;
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_B_Achievement::UnbindModel",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,99,L"achievementDataSet is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(local_148);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this)
    ;
  }
  return;
}

// UpdateData @ 14bfe2750

void __thiscall
UDS_VM_W_B_Achievement::UpdateData
          (UDS_VM_W_B_Achievement *this,EDS_AchievementCategory param_1,bool param_2)

{
  EDS_ViewModelTemplateKey *pEVar1;
  atomic<int> *paVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UDS_UserObjectListItem *pUVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FDS_ViewModelContext *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  FDS_ViewModelContext *pFVar18;
  longlong *plVar19;
  FDS_ViewModelContext *pFVar20;
  long64 lVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  undefined1 local_res10 [8];
  FDS_Text local_198;
  FName local_148;
  int iStack_140;
  uint uStack_13c;
  TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_138;
  UDS_VM_W_B_Achievement *local_128;
  UDS_UserObjectListItem *local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  UDS_UserObjectListItem *local_100;
  FScriptContainerElement *local_f8;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDestructionSentinel local_68;
  atomic<int> *local_50;
  
  if ((this->CurrentCategory != param_1) || (param_2)) {
    this->CurrentCategory = param_1;
    FDS_EntryBindingEventField::Reset(&this->AchievementCategoryEventField);
    local_148 = (FName)OnClickCategory;
    uVar22 = 1;
    uStack_13c = local_98.SharedReferenceCount.ReferenceController._4_4_;
    iStack_140 = 0;
    uVar15 = (ulonglong)local_98.SharedReferenceCount.ReferenceController._4_4_;
    do {
      pFVar18 = (FDS_ViewModelContext *)0x0;
      pUVar6 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      pFVar7 = ::operator_new(0xf8);
      pFVar20 = pFVar18;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
        *(undefined4 *)&((atomic<int> *)&pFVar7[1].DerivedStaticStruct)->field_0x1 = 0;
        *(undefined2 *)&((atomic<int> *)&pFVar7[1].DerivedStaticStruct)[1].field_0x1 = 0;
        ((atomic<int> *)&pFVar7[1].DerivedStaticStruct)[1].field_0x3 = 0;
        *(undefined2 *)((longlong)&pFVar7[2].ViewModelName.Number + 1) = 0;
        *(undefined1 *)((longlong)&pFVar7[2].ViewModelName.Number + 3) = 0;
        *(undefined4 *)((longlong)&pFVar7[3].ViewModelTemplateKey + 1) = 0;
        *(undefined2 *)&pFVar7[3].field_0x1d = 0;
        pFVar7[3].field_0x1f = 0;
        *(undefined2 *)((longlong)&pFVar7[5]._padding_ + 5) = 0;
        *(undefined1 *)((longlong)&pFVar7[5]._padding_ + 7) = 0;
        pFVar7[6].ViewModelName.ComparisonIndex = 0;
        pFVar7[6].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7[6].ViewModelTemplateKey = 0;
        pFVar7[7].ViewModelName.ComparisonIndex = 0;
        pFVar7[7].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
        (pFVar7->ViewModelName).ComparisonIndex = 0;
        (pFVar7->ViewModelName).Number = 0;
        pFVar7[1]._padding_ = 0;
        pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonIconTextButton__6B_;
        *(undefined1 *)&pFVar7[1].DerivedStaticStruct = 0;
        pFVar7[1].ViewModelName.ComparisonIndex = 0;
        pFVar7[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7[1].ViewModelTemplateKey = 0;
        pFVar7[2]._padding_ = 0;
        *(undefined8 *)&pFVar7[2].DerivedStaticStruct = 0;
        pFVar7[2].ViewModelName.ComparisonIndex.Value = 0;
        *(undefined1 *)&pFVar7[2].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7[2].ViewModelTemplateKey = 0;
        pFVar7[3]._padding_ = 0;
        *(undefined8 *)&pFVar7[3].DerivedStaticStruct = 0;
        pFVar7[3].ViewModelName.ComparisonIndex = 0;
        pFVar7[3].ViewModelName.Number = 0;
        *(undefined1 *)&pFVar7[3].ViewModelTemplateKey = None;
        pFVar7[4]._padding_ = 0;
        *(undefined8 *)&pFVar7[4].DerivedStaticStruct = 0;
        pFVar7[4].ViewModelName.ComparisonIndex = 0;
        pFVar7[4].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7[4].ViewModelTemplateKey = 0;
        *(undefined4 *)&pFVar7[5]._padding_ = 0;
        *(undefined1 *)((longlong)&pFVar7[5]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar7[5].DerivedStaticStruct = 0;
        pFVar7[5].ViewModelName.ComparisonIndex = 0;
        pFVar7[5].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar7[5].ViewModelTemplateKey = 0;
        pFVar7[6]._padding_ = 0;
        *(undefined8 *)&pFVar7[6].DerivedStaticStruct = 0;
        pFVar7[7]._padding_ = 0;
        *(undefined8 *)&pFVar7[7].DerivedStaticStruct = 0;
        pFVar20 = pFVar7;
      }
      pFVar7 = ::operator_new(0x20);
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar7->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonIconTextButton__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar20;
        pFVar18 = pFVar7;
      }
      if ((pFVar20 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_CommonIconTextButton::StaticStruct();
      *(UScriptStruct **)&pFVar20->DerivedStaticStruct = pUVar8;
      pUVar9 = UDS_ViewModelContextManager::GetInst();
      if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar18 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar18->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_c8.Object = pFVar20;
        local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
        UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
      }
      pFVar20->ViewModelTemplateKey = W_Achievement_Wrapped_Button;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar20 + 7),
                 (FWriteAccessScope *)&local_68);
      local_50 = (atomic<int> *)&pFVar20[7].DerivedStaticStruct;
      puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_50);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
        ;
        *(uint *)(puVar10 + 1) = uVar22;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_Achievement____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar10[3] = 0;
        local_128 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_128);
        puVar10[4] = OnClickCategory;
        puVar10[5] = uVar15 << 0x20;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      uVar14 = uVar22 & 0xff;
      *(bool *)&pFVar20[6].ViewModelName.ComparisonIndex.Value =
           this->CurrentCategory == (EDS_AchievementCategory)uVar22;
      if (uVar14 == 1) {
        lVar21 = 0x5091d;
      }
      else if (uVar14 == 2) {
        lVar21 = 0x5091e;
      }
      else if (uVar14 == 3) {
        lVar21 = 0x5091f;
      }
      else {
        lVar21 = 0;
        if (uVar14 == 4) {
          lVar21 = 0x50920;
        }
      }
      local_198.StringTableType = None;
      local_198.StringTableID = 0;
      local_198.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_198.StringEnumTableNameID.Number = 0;
      local_198.DateTime.Ticks = 0;
      local_198.TimeSpan.Ticks = 0;
      local_198.TimeExpressionType = None;
      local_198.IsExpression = false;
      local_198.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.UniqueString.Data.ArrayNum = 0;
      local_198.UniqueString.Data.ArrayMax = 0;
      local_198.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.FormatArgs.ArrayNum = 0;
      local_198.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_198,StringUi,lVar21);
      pEVar1 = &pFVar20[2].ViewModelTemplateKey;
      *(EDS_StringTableType *)&pFVar20[1].DerivedStaticStruct = local_198.StringTableType;
      pFVar20[1].ViewModelName.ComparisonIndex = (FNameEntryId)(undefined4)local_198.StringTableID;
      pFVar20[1].ViewModelName.Number = local_198.StringTableID._4_4_;
      pFVar20[1].ViewModelTemplateKey = local_198.StringEnumTableNameID.ComparisonIndex.Value;
      *(uint *)&pFVar20[1].field_0x1c = local_198.StringEnumTableNameID.Number;
      pFVar20[2]._padding_ = local_198.DateTime.Ticks;
      *(long64 *)&pFVar20[2].DerivedStaticStruct = local_198.TimeSpan.Ticks;
      pFVar20[2].ViewModelName.ComparisonIndex.Value = local_198.TimeExpressionType;
      *(bool *)&pFVar20[2].ViewModelName.Number = local_198.IsExpression;
      if ((FString *)pEVar1 != &local_198.UniqueString) {
        if (*(void **)pEVar1 != (void *)0x0) {
          FMemory::Free(*(void **)pEVar1);
        }
        *(FScriptContainerElement **)pEVar1 = local_198.UniqueString.Data.AllocatorInstance.Data;
        local_198.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar20[3]._padding_ = local_198.UniqueString.Data.ArrayNum;
        *(int *)((longlong)&pFVar20[3]._padding_ + 4) = local_198.UniqueString.Data.ArrayMax;
        local_198.UniqueString.Data.ArrayNum = 0;
        local_198.UniqueString.Data.ArrayMax = 0;
      }
      paVar2 = (atomic<int> *)&pFVar20[3].DerivedStaticStruct;
      if ((TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)paVar2 == &local_198.FormatArgs)
      {
        iVar16 = local_198.FormatArgs.ArrayNum;
      }
      else {
        DestructItems<FDS_TextFormatArg,int>
                  (*(FDS_TextFormatArg **)paVar2,pFVar20[3].ViewModelName.ComparisonIndex.Value);
        if (*(void **)paVar2 != (void *)0x0) {
          FMemory::Free(*(void **)paVar2);
        }
        *(FScriptContainerElement **)paVar2 = local_198.FormatArgs.AllocatorInstance.Data;
        local_198.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar20[3].ViewModelName.ComparisonIndex.Value = local_198.FormatArgs.ArrayNum;
        pFVar20[3].ViewModelName.Number = local_198.FormatArgs.ArrayMax;
        local_198.FormatArgs.ArrayNum = 0;
        local_198.FormatArgs.ArrayMax = 0;
        iVar16 = 0;
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_198.FormatArgs.AllocatorInstance.Data,iVar16);
      if ((FDS_TextFormatArg *)local_198.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_198.FormatArgs.AllocatorInstance.Data);
      }
      if (local_198.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.UniqueString.Data.AllocatorInstance.Data);
      }
      if (pFVar18 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar18->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_88.Object = pFVar20;
      local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
      UDS_UserObjectListItem::AddContext(pUVar6,&local_88);
      local_120 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FDS_EntryBindingEventField::Add
                (&this->AchievementCategoryEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_120
                );
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar18);
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < 5);
    FDS_EntryBindingEventField::Reset(&this->AchievementListEventField);
    FDS_AchievementService::GetAchievementTabList
              (&local_138,this->CurrentCategory,this->bShowAllAchievement);
    iVar16 = local_138.ArrayNum;
    uVar15 = (ulonglong)local_138.ArrayNum;
    pFVar17 = local_138.AllocatorInstance.Data + uVar15 * 8;
    FVar23.Data = local_138.AllocatorInstance.Data;
    local_f8 = pFVar17;
    while( true ) {
      if (local_138.ArrayNum != (uint)uVar15) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FDS_AchievementBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar23.Data == pFVar17) break;
      lVar3 = *(longlong *)FVar23.Data;
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x2c) != '\0')) {
        pUVar6 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        pFVar7 = ::operator_new(0x30);
        pFVar20 = (FDS_ViewModelContext *)0x0;
        pFVar18 = pFVar20;
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar7[1].DerivedStaticStruct = 0;
          *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
          (pFVar7->ViewModelName).ComparisonIndex = 0;
          (pFVar7->ViewModelName).Number = 0;
          pFVar7->_padding_ = (longlong)&___7FDS_VMContext_AchievementData__6B_;
          *(int *)&pFVar7[1]._padding_ = 0;
          *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
          local_118 = 0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar7 + 1),(FObjectPtr)&local_118);
          *(undefined8 *)&pFVar7[1].DerivedStaticStruct = 0;
          pFVar18 = pFVar7;
        }
        pFVar12 = ::operator_new(0x20);
        pFVar7 = pFVar20;
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar12->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar12->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          ((atomic<int> *)&pFVar12->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_VMContext_AchievementData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar12->ViewModelTemplateKey = pFVar18;
          pFVar7 = pFVar12;
        }
        if ((pFVar18 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar8 = FDS_VMContext_AchievementData::StaticStruct();
        *(UScriptStruct **)&pFVar18->DerivedStaticStruct = pUVar8;
        pUVar9 = UDS_ViewModelContextManager::GetInst();
        if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar7 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar7->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_b8.Object = pFVar18;
          local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b8.SharedReferenceCount.ReferenceController);
        }
        UDS_AchievementData::FindOrAddData((ulong64)&local_110,UDS_PlayerData::MainPlayerEntityID);
        pFVar18[1]._padding_ = local_110;
        *(longlong *)&pFVar18[1].DerivedStaticStruct = lVar3;
        pFVar18->ViewModelTemplateKey = Data_Achievement;
        pFVar12 = ::operator_new(0x30);
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar12->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar12[1].DerivedStaticStruct = 0;
          *(undefined8 *)&pFVar12->DerivedStaticStruct = 0;
          (pFVar12->ViewModelName).ComparisonIndex = 0;
          (pFVar12->ViewModelName).Number = 0;
          pFVar12->_padding_ = (longlong)&___7FDS_VMContext_AchievementData__6B_;
          *(int *)&pFVar12[1]._padding_ = 0;
          *(undefined4 *)((longlong)&pFVar12[1]._padding_ + 4) = 0;
          local_108 = 0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar12 + 1),(FObjectPtr)&local_108);
          *(undefined8 *)&pFVar12[1].DerivedStaticStruct = 0;
          pFVar20 = pFVar12;
        }
        pTVar13 = ::operator_new(0x20);
        if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar13->SharedReferenceCount = (atomic<int>)0x1;
          pTVar13[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar13->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_VMContext_AchievementData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar13->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar13[1].SharedReferenceCount = pFVar20;
        }
        if ((pFVar20 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar8 = FDS_VMContext_AchievementData::StaticStruct();
        *(UScriptStruct **)&pFVar20->DerivedStaticStruct = pUVar8;
        pUVar9 = UDS_ViewModelContextManager::GetInst();
        if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_a8.Object = pFVar20;
          local_a8.SharedReferenceCount.ReferenceController = pTVar13;
          UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
        }
        *(longlong *)&pFVar20[1].DerivedStaticStruct = lVar3;
        pFVar20->ViewModelTemplateKey = W_Achievement_List_Slot;
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_78.Object = pFVar20;
        local_78.SharedReferenceCount.ReferenceController = pTVar13;
        UDS_UserObjectListItem::AddContext(pUVar6,&local_78);
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar7->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_98.Object = pFVar18;
        local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        UDS_UserObjectListItem::AddContext(pUVar6,&local_98);
        local_100 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        FDS_EntryBindingEventField::Add
                  (&this->AchievementListEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_100);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar7);
        pFVar17 = local_f8;
      }
      uVar15 = (ulonglong)(uint)iVar16;
      FVar23.Data = FVar23.Data + 8;
    }
    plVar19 = &this->_padding_;
    local_e0 = FFieldNotificationClassDescriptor::AchievementCategoryEventField.BitNumber;
    local_e8 = FFieldNotificationClassDescriptor::AchievementCategoryEventField.FieldName;
    (**(code **)(*plVar19 + 0x38))(plVar19,&local_e8);
    local_d0 = FFieldNotificationClassDescriptor::AchievementListEventField.BitNumber;
    local_d8 = FFieldNotificationClassDescriptor::AchievementListEventField.FieldName;
    (**(code **)(*plVar19 + 0x38))(plVar19,&local_d8);
    iStack_140 = FFieldNotificationClassDescriptor::IsAllCaimeAble.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::IsAllCaimeAble.FieldName;
    (**(code **)(*plVar19 + 0x38))(plVar19,&local_148);
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
  }
  return;
}

