// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b6acd70

UClass * __cdecl UDS_VM_NpcFunction_Frame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_Frame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_Frame",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_Frame.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_Frame,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcFunction_Frame>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_Frame>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_Frame.InnerSingleton;
}

// UDS_VM_NpcFunction_Frame @ 14b6b1de0

UDS_VM_NpcFunction_Frame * __thiscall
UDS_VM_NpcFunction_Frame::UDS_VM_NpcFunction_Frame
          (UDS_VM_NpcFunction_Frame *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_Frame__6B_;
  (this->VM_MoneyGroup).field0_0x0.DebugPtr = (UDS_VM_MoneyGroup *)0x0;
  (this->VM_CombinationKeyGroup).field0_0x0.DebugPtr = (UDS_VM_Common_CombinationKeyGroup *)0x0;
  (this->NpcDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_NpcFunction_Frame @ 14b6b1e40

UDS_VM_NpcFunction_Frame * __thiscall
UDS_VM_NpcFunction_Frame::UDS_VM_NpcFunction_Frame
          (UDS_VM_NpcFunction_Frame *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_Frame__6B_;
  (this->VM_MoneyGroup).field0_0x0.DebugPtr = (UDS_VM_MoneyGroup *)0x0;
  (this->VM_CombinationKeyGroup).field0_0x0.DebugPtr = (UDS_VM_Common_CombinationKeyGroup *)0x0;
  (this->NpcDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_NpcFunction_Frame @ 14b6b3dd0

void __thiscall UDS_VM_NpcFunction_Frame::~UDS_VM_NpcFunction_Frame(UDS_VM_NpcFunction_Frame *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_Frame__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b68d0

IClassDescriptor * __thiscall
UDS_VM_NpcFunction_Frame::GetFieldNotificationDescriptor(UDS_VM_NpcFunction_Frame *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NpcFunction_Frame::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b7220

UClass * __cdecl UDS_VM_NpcFunction_Frame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_Frame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_Frame",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_Frame.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_Frame,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcFunction_Frame>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_Frame>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_Frame.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NpcFunction_Frame @ 14b6b7da0

void __cdecl UDS_VM_NpcFunction_Frame::StaticRegisterNativesUDS_VM_NpcFunction_Frame(void)

{
  return;
}

// OnChangedNpcFunction @ 14bef8130

void __thiscall
UDS_VM_NpcFunction_Frame::OnChangedNpcFunction
          (UDS_VM_NpcFunction_Frame *this,EDS_InteractionFunctionType *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_NPCDataSet *this_00;
  FDS_NpcFrameTableRow *this_01;
  char cVar3;
  ESlateVisibility EVar4;
  bool local_res8 [8];
  bool local_res18 [8];
  FName local_38;
  int local_30;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar1) {
    local_res8[0] = false;
    SetVM_MoneyGroup(this,param_1,local_res8);
    local_res18[0] = false;
    SetVM_CombinationKeyGroup(this,param_1,local_res18);
    cVar3 = '\0';
    EVar4 = Collapsed;
    bVar1 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
    if (bVar1) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      iVar2 = UDS_NPCDataSet::GetNpcFrameID(this_00,this->InteractionID,*param_1);
      this_01 = FDS_NpcFrameTableRow::GetRef((longlong)iVar2,true);
      bVar1 = FDS_NpcFrameTableRow::IsValid(this_01);
      if (bVar1) {
        cVar3 = this_01->IsCloseBtnDisplay;
        EVar4 = Collapsed;
        if ((bool)cVar3 == true) {
          EVar4 = SelfHitTestInvisible;
        }
      }
    }
    local_30 = FFieldNotificationClassDescriptor::VisibilityExitButton.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::VisibilityExitButton.FieldName;
    if (this->VisibilityExitButton != EVar4) {
      this->VisibilityExitButton = EVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    local_30 = FFieldNotificationClassDescriptor::VisibilityTopFrame.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::VisibilityTopFrame.FieldName;
    if ((local_res8[0] != false) || (EVar4 = Collapsed, cVar3 != '\0')) {
      EVar4 = SelfHitTestInvisible;
    }
    if (this->VisibilityTopFrame != EVar4) {
      this->VisibilityTopFrame = EVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    local_30 = FFieldNotificationClassDescriptor::VisibilityBottomFrame.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::VisibilityBottomFrame.FieldName;
    EVar4 = Collapsed;
    if (local_res18[0] != false) {
      EVar4 = SelfHitTestInvisible;
    }
    if (this->VisibilityBottomFrame != EVar4) {
      this->VisibilityBottomFrame = EVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
  }
  return;
}

// OnSetViewModel @ 14bf08c00

void __thiscall
UDS_VM_NpcFunction_Frame::OnSetViewModel
          (UDS_VM_NpcFunction_Frame *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> TVar3;
  UDS_NpcFunctionEvent *pUVar4;
  undefined1 local_res10 [24];
  TSharedPtr<FDS_ViewModelContext_NpcFunction,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  code *local_28;
  ulonglong uStack_20;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NpcFunction>(&local_48,&local_38);
  if (local_48.Object == (FDS_ViewModelContext_NpcFunction *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  TVar3 = TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->NpcDataSet).WeakPtr = *TVar3.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar2) {
    this->InteractionID = (local_48.Object)->InteractionID;
    pUVar4 = UDS_NpcFunctionEvent::GetEvent();
    if (pUVar4 != (UDS_NpcFunctionEvent *)0x0) {
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = OnChangedNpcFunction;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar4->OnChangedNpcFunctionDelegate,this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_InteractionFunctionType_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_NpcFunction_Frame>
                (&pUVar4->OnChangedNpcFunctionDelegate,(UDS_VM_NpcFunction_Frame *)(local_res10 + 8)
                 ,(pmf_80c9caa3 *)this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVM_CombinationKeyGroup @ 14bf19970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_NpcFunction_Frame::SetVM_CombinationKeyGroup
          (UDS_VM_NpcFunction_Frame *this,EDS_InteractionFunctionType *param_1,bool *param_2)

{
  EDS_KeyRemoveType EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_Common_CombinationKeyGroup *pUVar7;
  UDS_NPCDataSet *this_00;
  FDS_NpcFrameTableRow *this_01;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_02;
  FDS_KeyMappingDataTableRow *this_03;
  longlong *plVar10;
  atomic<int> *this_04;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  int iVar13;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  TSharedPtr<FDS_ViewModelContext,1> local_f0;
  TSharedPtr<FDS_ViewModelContext,1> local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar12 = (FDS_ViewModelContext *)0x0;
  iVar13 = 0;
  if ((this->VM_CombinationKeyGroup).field0_0x0.DebugPtr == (UDS_VM_Common_CombinationKeyGroup *)0x0
     ) {
    local_f8 = 0;
    pUVar5 = Z_Construct_UClass_UDS_VM_Common_CombinationKeyGroup_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_VM_Common_CombinationKeyGroup_NoRegister();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar5);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_Transient;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = this;
    pUVar7 = (UDS_VM_Common_CombinationKeyGroup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_Common_CombinationKeyGroup *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_VM_Common_CombinationKeyGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_CombinationKeyGroup).field0_0x0.DebugPtr = pUVar7;
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar3) {
    this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    iVar4 = UDS_NPCDataSet::GetNpcFrameID(this_00,this->InteractionID,*param_1);
    this_01 = FDS_NpcFrameTableRow::GetRef((longlong)iVar4,true);
    bVar3 = FDS_NpcFrameTableRow::IsValid(this_01);
    if (bVar3) {
      iVar13 = this_01->ID_KeyMappingData;
    }
  }
  if ((this->VM_CombinationKeyGroup).field0_0x0.DebugPtr == (UDS_VM_Common_CombinationKeyGroup *)0x0
     ) {
    return;
  }
  pFVar8 = ::operator_new(0x58);
  pFVar11 = pFVar12;
  if (pFVar8 != (FDS_ViewModelContext *)0x0) {
    *(undefined4 *)&pFVar8->field_0x1c = 0;
    *(undefined2 *)&pFVar8[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar8[1]._padding_ + 3) = 0;
    *(undefined1 *)((longlong)&pFVar8[1]._padding_ + 7) = 0;
    pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_InputKeyGroup__6B_;
    *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
    (pFVar8->ViewModelName).ComparisonIndex = 0;
    (pFVar8->ViewModelName).Number = 0;
    pFVar8->ViewModelTemplateKey = None;
    *(undefined1 *)((longlong)&pFVar8[1]._padding_ + 2) = 0;
    *(undefined8 *)&pFVar8[1].DerivedStaticStruct = 0;
    pFVar8[1].ViewModelName.ComparisonIndex = 0;
    pFVar8[1].ViewModelName.Number = 0;
    *(undefined8 *)&pFVar8[1].ViewModelTemplateKey = 0;
    pFVar8[2]._padding_ = 0;
    *(undefined8 *)&pFVar8[2].DerivedStaticStruct = 0;
    pFVar8[2].ViewModelName.ComparisonIndex = 0;
    pFVar8[2].ViewModelName.Number = 0;
    pFVar11 = pFVar8;
  }
  pFVar8 = ::operator_new(0x20);
  if (pFVar8 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_InputKeyGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar11;
    pFVar12 = pFVar8;
  }
  if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar9 = FDS_ViewModelContext_InputKeyGroup::StaticStruct();
  *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar9;
  this_02 = UDS_ViewModelContextManager::GetInst();
  if (this_02 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar12 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar12->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_f0.Object = pFVar11;
    local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
    UDS_ViewModelContextManager::RegisterContext(this_02,&local_f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f0.SharedReferenceCount.ReferenceController);
  }
  pFVar11->ViewModelTemplateKey = InputKeyGroup;
  this_03 = FDS_KeyMappingDataTableRow::GetRef((longlong)iVar13,true);
  bVar3 = FDS_KeyMappingDataTableRow::IsValid(this_03);
  if (!bVar3) goto LAB_14bf19c26;
  EVar1 = this_03->KeyRemoveType;
  if (EVar1 == Fixed) {
    this_04 = (atomic<int> *)&pFVar11[1].DerivedStaticStruct;
LAB_14bf19c19:
    TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::operator=
              (this_04,&this_03->ID_KeyAction);
  }
  else {
    if (EVar1 == Same) {
      this_04 = (atomic<int> *)&pFVar11[1].ViewModelTemplateKey;
      goto LAB_14bf19c19;
    }
    if (EVar1 == Self) {
      this_04 = (atomic<int> *)&pFVar11[2].DerivedStaticStruct;
      goto LAB_14bf19c19;
    }
  }
  *param_2 = true;
LAB_14bf19c26:
  *(undefined2 *)&pFVar11[1]._padding_ = 2;
  pUVar7 = (this->VM_CombinationKeyGroup).field0_0x0.DebugPtr;
  if (pFVar12 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar12->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_e0.Object = pFVar11;
  local_e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return;
}

// SetVM_MoneyGroup @ 14bf1a880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_NpcFunction_Frame::SetVM_MoneyGroup
          (UDS_VM_NpcFunction_Frame *this,EDS_InteractionFunctionType *param_1,bool *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 _Src [8];
  atomic<int> aVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UDS_VM_MoneyGroup *pUVar10;
  UDS_NPCDataSet *this_00;
  FDS_NpcFrameTableRow *this_01;
  FDS_ViewModelContext *pFVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_02;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  FDS_ViewModelContext *pFVar15;
  size_t _Size;
  TArray<EDS_MoneyType,TSizedDefaultAllocator<32>_> *pTVar16;
  FDS_ViewModelContext *pFVar17;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined8 local_f8;
  FName local_f0;
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pFVar17 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_MoneyGroup).field0_0x0.DebugPtr == (UDS_VM_MoneyGroup *)0x0) {
    local_f0.ComparisonIndex.Value = 0;
    local_f0.Number = 0;
    pUVar8 = Z_Construct_UClass_UDS_VM_MoneyGroup_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UDS_VM_MoneyGroup_NoRegister();
    CheckIsClassChildOf_Internal(pUVar9,pUVar8);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar8);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_Transient;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = this;
    pUVar10 = (UDS_VM_MoneyGroup *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar13 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (pUVar10 != (UDS_VM_MoneyGroup *)0x0) {
      *(undefined1 *)((longlong)&pUVar10->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_VM_MoneyGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_MoneyGroup).field0_0x0.DebugPtr = pUVar10;
  }
  local_100 = (undefined1  [8])0x0;
  local_f8 = (UStruct *)0x0;
  bVar6 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar6) {
    this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    iVar7 = UDS_NPCDataSet::GetNpcFrameID(this_00,this->InteractionID,*param_1);
    this_01 = FDS_NpcFrameTableRow::GetRef((longlong)iVar7,true);
    bVar6 = FDS_NpcFrameTableRow::IsValid(this_01);
    if (bVar6) {
      pTVar16 = &this_01->DisplayMoney;
      if ((TArray<EDS_MoneyType,TSizedDefaultAllocator<32>_> *)local_100 != pTVar16) {
        iVar7 = (this_01->DisplayMoney).ArrayNum;
        pFVar3 = (pTVar16->AllocatorInstance).Data;
        local_f8 = (UStruct *)CONCAT44(local_f8._4_4_,iVar7);
        if (((iVar7 != 0) || (local_f8._4_4_ != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar7,local_f8._4_4_,(ForAnyElementType *)local_100,iVar7,
                       (int *)((longlong)&local_f8 + 4)), iVar7 != 0)) {
          memcpy((void *)local_100,pFVar3,(longlong)iVar7);
        }
      }
      pFVar14 = (pTVar16->AllocatorInstance).Data;
      iVar7 = (this_01->DisplayMoney).ArrayNum;
      pFVar3 = pFVar14 + iVar7;
      while( true ) {
        if ((this_01->DisplayMoney).ArrayNum != iVar7) {
          local_108[0] = 0;
          `TCheckedPointerIterator<enum_EDS_MoneyType_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_108);
        }
        if (pFVar14 == pFVar3) goto LAB_14bf1aa79;
        if (*pFVar14 != (FScriptContainerElement)0x0) break;
        pFVar14 = pFVar14 + 1;
      }
      *param_2 = true;
    }
  }
LAB_14bf1aa79:
  if ((this->VM_MoneyGroup).field0_0x0.DebugPtr != (UDS_VM_MoneyGroup *)0x0) {
    pFVar11 = ::operator_new(0x30);
    pFVar15 = pFVar17;
    if (pFVar11 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar11->DerivedStaticStruct = 0;
      (pFVar11->ViewModelName).ComparisonIndex = 0;
      (pFVar11->ViewModelName).Number = 0;
      pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyGroup__6B_;
      pFVar11[1]._padding_ = 0;
      *(undefined8 *)&pFVar11[1].DerivedStaticStruct = 0;
      pFVar15 = pFVar11;
    }
    pFVar11 = ::operator_new(0x20);
    if (pFVar11 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar11->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar11->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar11->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar11->ViewModelTemplateKey = pFVar15;
      pFVar17 = pFVar11;
    }
    if ((pFVar15 == (FDS_ViewModelContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar12 = FDS_ViewModelContext_MoneyGroup::StaticStruct();
    *(UScriptStruct **)&pFVar15->DerivedStaticStruct = pUVar12;
    this_02 = UDS_ViewModelContextManager::GetInst();
    if (this_02 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar17 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar17->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar17->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_e8.Object = pFVar15;
      local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar17;
      UDS_ViewModelContextManager::RegisterContext(this_02,&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
    }
    _Src = local_100;
    pFVar11 = pFVar15 + 1;
    pFVar15->ViewModelTemplateKey = W_MoneyGroup;
    if (pFVar11 != (FDS_ViewModelContext *)local_100) {
      aVar5 = local_f8._0_4_;
      _Size = (size_t)(int)local_f8._0_4_;
      paVar1 = (atomic<int> *)&pFVar15[1].DerivedStaticStruct + 1;
      aVar2 = *paVar1;
      *(atomic<int> *)&pFVar15[1].DerivedStaticStruct = local_f8._0_4_;
      if ((local_f8._0_4_ == (atomic<int>)0x0) && (aVar2 == (atomic<int>)0x0)) {
        *paVar1 = (atomic<int>)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(int)local_f8._0_4_,(int)aVar2,(ForAnyElementType *)pFVar11,
                   (int)local_f8._0_4_,(int *)paVar1);
        if (aVar5 != (atomic<int>)0x0) {
          memcpy((FScriptContainerElement *)pFVar11->_padding_,(void *)_Src,_Size);
        }
      }
    }
    pUVar10 = (this->VM_MoneyGroup).field0_0x0.DebugPtr;
    if (pFVar17 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar17->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar17->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_d8.Object = pFVar15;
    local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar17;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar10,&local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar17);
  }
  if (local_100 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_100);
  }
  return;
}

// SetVisibilityBottomFrame @ 14bf1bd20

void __thiscall
UDS_VM_NpcFunction_Frame::SetVisibilityBottomFrame
          (UDS_VM_NpcFunction_Frame *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityBottomFrame.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityBottomFrame.FieldName;
  if (this->VisibilityBottomFrame != *param_1) {
    this->VisibilityBottomFrame = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityExitButton @ 14bf1bd70

void __thiscall
UDS_VM_NpcFunction_Frame::SetVisibilityExitButton
          (UDS_VM_NpcFunction_Frame *this,EDS_InteractionFunctionType *param_1,bool *param_2)

{
  bool bVar1;
  int iVar2;
  UDS_NPCDataSet *this_00;
  FDS_NpcFrameTableRow *this_01;
  ESlateVisibility EVar3;
  FName local_18;
  int local_10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  EVar3 = Collapsed;
  if (bVar1) {
    this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    iVar2 = UDS_NPCDataSet::GetNpcFrameID(this_00,this->InteractionID,*param_1);
    this_01 = FDS_NpcFrameTableRow::GetRef((longlong)iVar2,true);
    bVar1 = FDS_NpcFrameTableRow::IsValid(this_01);
    if (bVar1) {
      bVar1 = this_01->IsCloseBtnDisplay;
      *param_2 = bVar1;
      EVar3 = Collapsed;
      if (bVar1 == true) {
        EVar3 = SelfHitTestInvisible;
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::VisibilityExitButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityExitButton.FieldName;
  if (this->VisibilityExitButton != EVar3) {
    this->VisibilityExitButton = EVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityTopFrame @ 14bf1c120

void __thiscall
UDS_VM_NpcFunction_Frame::SetVisibilityTopFrame
          (UDS_VM_NpcFunction_Frame *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityTopFrame.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityTopFrame.FieldName;
  if (this->VisibilityTopFrame != *param_1) {
    this->VisibilityTopFrame = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bf1e670

void __thiscall UDS_VM_NpcFunction_Frame::UnbindModel(UDS_VM_NpcFunction_Frame *this)

{
  UDS_NpcFunctionEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_NpcFunctionEvent::GetEvent();
  if (pUVar1 != (UDS_NpcFunctionEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedNpcFunctionDelegate,this);
    return;
  }
  return;
}

