// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 35

// SetIconID_WrapperImpl @ 14b7481e0

void __cdecl UDS_VM_W_RingCmd_IconImg::SetIconID_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  plVar1 = (longlong *)((longlong)param_1 + 0x28);
  if (*(int *)((longlong)param_1 + 0xa0) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xa0) = *(int *)param_2;
    (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  }
  iStack_10 = FFieldNotificationClassDescriptor::HasIconId.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::HasIconId.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  return;
}

// SetIconVisibility_WrapperImpl @ 14b7481f0

void __cdecl UDS_VM_W_RingCmd_IconImg::SetIconVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IconVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IconVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0xa4) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xa4) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetQuantityText_WrapperImpl @ 14b748200

void __cdecl UDS_VM_W_RingCmd_IconImg::SetQuantityText_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::QuantityText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::QuantityText.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xa8),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xa8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xa8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xb0) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetQuantityVisibility_WrapperImpl @ 14b748210

void __cdecl
UDS_VM_W_RingCmd_IconImg::SetQuantityVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::QuantityVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::QuantityVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0xb8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xb8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetIsNewSymbol_WrapperImpl @ 14b748220

void __cdecl UDS_VM_W_RingCmd_IconImg::SetIsNewSymbol_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)((longlong)param_1 + 0xe8) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xb9) = 0;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)param_2;
  }
  iStack_10 = FFieldNotificationClassDescriptor::IsNewSymbol.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsNewSymbol.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  return;
}

// SetIsLock_WrapperImpl @ 14b748230

void __cdecl UDS_VM_W_RingCmd_IconImg::SetIsLock_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xba) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IsLock.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsLock.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetReleasedListView_WrapperImpl @ 14b748240

void __cdecl UDS_VM_W_RingCmd_IconImg::SetReleasedListView_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014c042fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2f8))();
  return;
}

// StaticClass @ 14b748250

UClass * __cdecl UDS_VM_W_RingCmd_IconImg::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCmd_IconImg.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCmd_IconImg",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCmd_IconImg.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCmd_IconImg,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_RingCmd_IconImg>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RingCmd_IconImg>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCmd_IconImg.InnerSingleton;
}

// UDS_VM_W_RingCmd_IconImg @ 14b74e580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_RingCmd_IconImg * __thiscall
UDS_VM_W_RingCmd_IconImg::UDS_VM_W_RingCmd_IconImg
          (UDS_VM_W_RingCmd_IconImg *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd_IconImg__6B_;
  FText::FText(&this->QuantityText);
  (this->ReleasedListView).bIsActivate = false;
  (this->VM_Item).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_TotalMenuItem).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_Item *)0x0;
  (this->VM_ActionFunction).field0_0x0.DebugPtr = (UDS_VM_ActionFunction *)0x0;
  (this->ItemSlotModel).field0_0x0.DebugPtr = (UDS_M_ItemImplBase *)0x0;
  this->DeckID = 0;
  this->SlotIndex = 0;
  this->bIsEditMode = false;
  return this;
}

// UDS_VM_W_RingCmd_IconImg @ 14b74e600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_RingCmd_IconImg * __thiscall
UDS_VM_W_RingCmd_IconImg::UDS_VM_W_RingCmd_IconImg
          (UDS_VM_W_RingCmd_IconImg *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd_IconImg__6B_;
  FText::FText(&this->QuantityText);
  (this->ReleasedListView).bIsActivate = false;
  (this->VM_Item).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_TotalMenuItem).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_Item *)0x0;
  (this->VM_ActionFunction).field0_0x0.DebugPtr = (UDS_VM_ActionFunction *)0x0;
  (this->ItemSlotModel).field0_0x0.DebugPtr = (UDS_M_ItemImplBase *)0x0;
  this->DeckID = 0;
  this->SlotIndex = 0;
  this->bIsEditMode = false;
  return this;
}

// ~UDS_VM_W_RingCmd_IconImg @ 14b74f960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_IconImg::~UDS_VM_W_RingCmd_IconImg(UDS_VM_W_RingCmd_IconImg *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd_IconImg__6B_;
  pIVar1 = (this->QuantityText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7516a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_RingCmd_IconImg::GetFieldNotificationDescriptor(UDS_VM_W_RingCmd_IconImg *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_RingCmd_IconImg::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b752140

UClass * __cdecl UDS_VM_W_RingCmd_IconImg::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCmd_IconImg.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCmd_IconImg",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCmd_IconImg.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCmd_IconImg,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_RingCmd_IconImg>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RingCmd_IconImg>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCmd_IconImg.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_RingCmd_IconImg @ 14b7524d0

void __cdecl UDS_VM_W_RingCmd_IconImg::StaticRegisterNativesUDS_VM_W_RingCmd_IconImg(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_RingCmd_IconImg_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execHasIconId @ 14b7533a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_RingCmd_IconImg::execHasIconId(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = HasIconId((UDS_VM_W_RingCmd_IconImg *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnItemDataSetChanged @ 14b753620

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_RingCmd_IconImg::execOnItemDataSetChanged(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnItemDataSetChanged((UDS_VM_W_RingCmd_IconImg *)param_1,local_res10);
  return;
}

// ActionBind @ 14c001ee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::ActionBind
          (UDS_VM_W_RingCmd_IconImg *this,TSharedPtr<FDS_RingCommandSlotData,1> *param_1)

{
  UDS_VM_ActionFunction *this_00;
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  FDS_ActionBaseTableRow *pFVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_01;
  ESlateVisibility EVar8;
  FName *pFVar9;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *pFVar11;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  if ((param_1->Object == (FDS_RingCommandSlotData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar5 = FDS_ActionBaseTableRow::GetRef(param_1->Object->SlotData,true);
  SetIconID(this,&pFVar5->ID_Icon);
  iVar3 = FFieldNotificationClassDescriptor::IconVisibility.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IconVisibility.FieldName;
  EVar8 = HitTestInvisible;
  if (this->IconID < 1) {
    EVar8 = Collapsed;
  }
  if (this->IconVisibility != EVar8) {
    this->IconVisibility = EVar8;
    local_80 = iVar3;
    local_88 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  iVar3 = FFieldNotificationClassDescriptor::QuantityVisibility.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::QuantityVisibility.FieldName;
  if (this->QuantityVisibility != Collapsed) {
    this->QuantityVisibility = Collapsed;
    local_70 = iVar3;
    local_78 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  this->IsNewSymbol = false;
  if (this->bIsEditMode == true) {
    local_68 = FFieldNotificationClassDescriptor::IsNewSymbol.FieldName;
    pFVar9 = &local_68;
    local_60 = FFieldNotificationClassDescriptor::IsNewSymbol.BitNumber;
  }
  else {
    local_58 = FFieldNotificationClassDescriptor::IsNewSymbol.FieldName;
    pFVar9 = &local_58;
    local_50 = FFieldNotificationClassDescriptor::IsNewSymbol.BitNumber;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar9);
  if ((this->VM_ActionFunction).field0_0x0.DebugPtr != (UDS_VM_ActionFunction *)0x0) {
    pFVar6 = ::operator_new(0x28);
    pFVar10 = (FDS_ViewModelContext *)0x0;
    pFVar11 = pFVar10;
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar6->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar6[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar6[1]._padding_ + 7) = 0;
      *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
      (pFVar6->ViewModelName).ComparisonIndex = 0;
      (pFVar6->ViewModelName).Number = 0;
      pFVar6->ViewModelTemplateKey = None;
      pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_ActionFunction__6B_;
      *(undefined1 *)&pFVar6[1]._padding_ = 0;
      pFVar11 = pFVar6;
    }
    pFVar6 = ::operator_new(0x20);
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar6->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ActionFunction__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar11;
      pFVar10 = pFVar6;
    }
    if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar7 = FDS_ViewModelContext_ActionFunction::StaticStruct();
    *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar7;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_48.Object = pFVar11;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    *(EDS_ActionFunctionType *)&pFVar11[1]._padding_ = pFVar5->ID;
    this_00 = (this->VM_ActionFunction).field0_0x0.DebugPtr;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_38.Object = pFVar11;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// BindModel @ 14c0037b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_IconImg::BindModel(UDS_VM_W_RingCmd_IconImg *this)

{
  FDS_EventDelegate<int_const_,int_const_> *this_00;
  EDS_RingCmdType EVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_RingCommandDeckData *this_01;
  UDS_RingCommandUIEvent *pUVar5;
  FWeakObjectPtr local_res8 [2];
  FName local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TSharedPtr<FDS_RingCommandSlotData,1> local_b8;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  TSharedPtr<FDS_RingCommandSlotData,1> local_48;
  TSharedPtr<FDS_RingCommandSlotData,1> local_38;
  TSharedPtr<FDS_RingCommandSlotData,1> local_28;
  FName local_18;
  undefined8 uStack_10;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  UDS_RingCommandDeckData::GetData
            ((ulong64)local_res8,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DeckID,0));
  bVar4 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)local_res8,
                     (void *)0x0);
  if (!bVar4) {
    this_01 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(local_res8);
    UDS_RingCommandDeckData::GetRingCommandData(this_01,&local_b8,&this->SlotIndex);
    iVar3 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::IconID.FieldName;
    if (local_b8.Object != (FDS_RingCommandSlotData *)0x0) {
      EVar1 = (local_b8.Object)->SlotType;
      if (EVar1 == Item) {
        local_28.Object = local_b8.Object;
        local_28.SharedReferenceCount.ReferenceController =
             local_b8.SharedReferenceCount.ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        ItemBind(this,&local_28);
      }
      else if (EVar1 == Menu) {
        local_38.Object = local_b8.Object;
        local_38.SharedReferenceCount.ReferenceController =
             local_b8.SharedReferenceCount.ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        MenuBind(this,&local_38);
      }
      else if (EVar1 == Action) {
        local_48.Object = local_b8.Object;
        local_48.SharedReferenceCount.ReferenceController =
             local_b8.SharedReferenceCount.ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        ActionBind(this,&local_48);
      }
      else {
        if (this->IconID != -1) {
          this->IconID = -1;
          local_a0 = iVar3;
          local_a8 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
        }
        local_90 = FFieldNotificationClassDescriptor::HasIconId.BitNumber;
        local_98 = FFieldNotificationClassDescriptor::HasIconId.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
        iVar3 = FFieldNotificationClassDescriptor::IconVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::IconVisibility.FieldName;
        if (this->IconVisibility != Collapsed) {
          this->IconVisibility = Collapsed;
          local_80 = iVar3;
          local_88 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
        }
        iVar3 = FFieldNotificationClassDescriptor::QuantityVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::QuantityVisibility.FieldName;
        if (this->QuantityVisibility != Collapsed) {
          this->QuantityVisibility = Collapsed;
          local_70 = iVar3;
          local_78 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
        }
        this->IsLock = true;
        local_60 = FFieldNotificationClassDescriptor::IsLock.BitNumber;
        local_68 = FFieldNotificationClassDescriptor::IsLock.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
        this->IsNewSymbol = false;
        if (this->bIsEditMode == true) {
          local_50 = FFieldNotificationClassDescriptor::IsNewSymbol.BitNumber;
          local_58 = FFieldNotificationClassDescriptor::IsNewSymbol.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
        }
        else {
          iStack_c0 = FFieldNotificationClassDescriptor::IsNewSymbol.BitNumber;
          local_c8 = FFieldNotificationClassDescriptor::IsNewSymbol.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
        }
      }
      pUVar5 = UDS_EventManager::GetEvent<UDS_RingCommandUIEvent>();
      if (pUVar5 != (UDS_RingCommandUIEvent *)0x0) {
        this_00 = &pUVar5->OnRingCmdSlotStateChanged;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
        iStack_c0 = 0;
        local_c8 = (FName)OnChangedSlotState;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
        uStack_10 = CONCAT44(uStack_bc,iStack_c0);
        local_18 = local_c8;
        TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_VM_W_RingCmd_IconImg>
                  ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>
                    *)this_00,(UDS_VM_W_RingCmd_IconImg *)(local_res8 + 1),(pmf_da367472 *)this);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// HasIconId @ 14c01c240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_W_RingCmd_IconImg::HasIconId(UDS_VM_W_RingCmd_IconImg *this)

{
  return 0 < this->IconID;
}

// InitViewModel @ 14c01ed40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_IconImg::InitViewModel(UDS_VM_W_RingCmd_IconImg *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_Item *pUVar3;
  UDS_VM_TotalMenu_Item *pUVar4;
  UDS_VM_ActionFunction *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->VM_Item).field0_0x0.DebugPtr == (UDS_VM_Item *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar3 = (UDS_VM_Item *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_Item *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_VM_Item *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_Item).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->VM_TotalMenuItem).field0_0x0.DebugPtr == (UDS_VM_TotalMenu_Item *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_TotalMenu_Item_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_TotalMenu_Item_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar4 = (UDS_VM_TotalMenu_Item *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_TotalMenu_Item *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_TotalMenu_Item *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_TotalMenuItem).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_ActionFunction).field0_0x0.DebugPtr == (UDS_VM_ActionFunction *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_ActionFunction_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_ActionFunction_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar5 = (UDS_VM_ActionFunction *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_ActionFunction *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_ActionFunction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_ActionFunction).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// ItemBind @ 14c023f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::ItemBind
          (UDS_VM_W_RingCmd_IconImg *this,TSharedPtr<FDS_RingCommandSlotData,1> *param_1)

{
  UDS_M_ItemImplBase *pUVar1;
  UDS_VM_Item *this_00;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FDS_ItemBaseTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  FText *pFVar8;
  TObjectPtr<UDS_M_ItemImplBase>_u_0 TVar9;
  UObject *pUVar10;
  char *pcVar11;
  UObject *this_01;
  UFunction *pUVar12;
  undefined8 *puVar13;
  ESlateVisibility EVar14;
  undefined8 uVar15;
  FDestructionSentinel *pFVar16;
  FDestructionSentinel *__return_storage_ptr__;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar17;
  char *pcVar18;
  undefined1 auStackY_418 [32];
  <lambda_1> local_3e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3e0;
  FWeakObjectPtr local_3d8;
  FName local_3d0;
  FWeakObjectPtr local_3c8;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> local_3c0;
  FName local_3b8;
  FName local_3b0;
  UDS_VM_W_RingCmd_IconImg *local_3a8;
  FName *local_3a0;
  FName local_398;
  int local_390;
  FName local_388;
  int local_380;
  FName local_378;
  int local_370;
  FName local_368;
  int local_360;
  TSharedPtr<FCulture,1> local_358;
  FWeakObjectPtr local_348;
  FName local_340;
  TSharedPtr<FCulture,1> local_338;
  TSharedPtr<FDS_ViewModelContext,1> local_328;
  FDestructionSentinel local_318;
  undefined1 local_2f8 [8];
  FText local_2f0;
  FText local_2e0;
  FText local_2d0;
  undefined1 local_2c0 [8];
  TReferenceControllerBase<1> *local_2b8;
  FReadAccessScope local_2b0;
  FReadAccessScope local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  __return_storage_ptr__ = &local_318;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_418;
  if ((param_1->Object == (FDS_RingCommandSlotData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = FDS_ItemBaseTableRow::GetRef(param_1->Object->SlotData,true);
  SetIconID(this,&pFVar6->ID_Icon);
  iVar5 = FFieldNotificationClassDescriptor::IconVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::IconVisibility.FieldName;
  EVar14 = HitTestInvisible;
  if (this->IconID < 1) {
    EVar14 = Collapsed;
  }
  if (this->IconVisibility != EVar14) {
    this->IconVisibility = EVar14;
    local_390 = iVar5;
    local_398 = FVar3;
    (**(code **)(this->_padding_ + 0x38))();
  }
  iVar5 = FFieldNotificationClassDescriptor::QuantityVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::QuantityVisibility.FieldName;
  if (this->QuantityVisibility != HitTestInvisible) {
    this->QuantityVisibility = HitTestInvisible;
    local_380 = iVar5;
    local_388 = FVar3;
    (**(code **)(this->_padding_ + 0x38))();
  }
  DS_ItemDataUtil::GetItemDataSet();
  bVar4 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_3c8,(void *)0x0);
  if (bVar4) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_W_RingCmd_IconImg::ItemBind",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_278.Ptr,0xea,L"itemDataSet is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    goto LAB_14c02458c;
  }
  if ((param_1->Object == (FDS_RingCommandSlotData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  DS_ItemDataUtil::GetItemDataByUID((long64)&local_3c0);
  bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals(&local_3c0,(void *)0x0);
  if (bVar4) {
    local_358.Object = (FCulture *)0x0;
    local_358.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = FText::AsNumber(&local_2f0,0,(FNumberFormattingOptions *)0x0,&local_358);
    SetQuantityText(this,pFVar8);
    if (local_2f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f0.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_358.SharedReferenceCount.ReferenceController);
    this->IsNewSymbol = false;
    if (this->bIsEditMode == true) {
      local_378 = FFieldNotificationClassDescriptor::IsNewSymbol.FieldName;
      local_370 = FFieldNotificationClassDescriptor::IsNewSymbol.BitNumber;
    }
    else {
      local_368 = FFieldNotificationClassDescriptor::IsNewSymbol.FieldName;
      local_360 = FFieldNotificationClassDescriptor::IsNewSymbol.BitNumber;
    }
    (**(code **)(this->_padding_ + 0x38))();
  }
  if ((this->VM_Item).field0_0x0.DebugPtr == (UDS_VM_Item *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_RingCmd_IconImg::ItemBind",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0xf7,L"VM_Item is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    goto LAB_14c02458c;
  }
  uVar15 = 0;
  bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals(&local_3c0,(void *)0x0);
  if (bVar4) {
    TVar9.ObjectPtr.field0_0x0 =
         (FObjectPtr)
         DS_ItemDataUtil::CreateItemModel(None,(int)CONCAT71((int7)((ulonglong)uVar15 >> 8),0xc));
  }
  else {
    pUVar10 = FWeakObjectPtr::Get(&local_3c8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar10 + 1),(UObject *)this
              );
    pUVar10 = FWeakObjectPtr::Get(&local_3c8);
    pcVar11 = strstr("&UDS_VM_W_RingCmd_IconImg::OnItemDataSetChanged","::");
    if (pcVar11 == (char *)0x0) {
LAB_14c0242fb:
      pcVar18 = &DAT_00000002;
LAB_14c024300:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      do {
        pcVar18 = pcVar11;
        pcVar11 = strstr(pcVar18 + 1,"::");
      } while (pcVar11 != (char *)0x0);
      if (pcVar18 == (char *)0x0) goto LAB_14c0242fb;
      pcVar18 = pcVar18 + 2;
      if (*pcVar18 == '0') goto LAB_14c024300;
    }
    ::FName::FName(&local_3b0,pcVar18);
    local_3b8 = local_3b0;
    local_3a8 = this;
    if (this == (UDS_VM_W_RingCmd_IconImg *)0x0) {
      local_3a8 = (UDS_VM_W_RingCmd_IconImg *)0x0;
    }
    local_3e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_3d8.ObjectIndex = 0;
    local_3d8.ObjectSerialNumber = 0;
    local_3d0.ComparisonIndex.Value = 0;
    local_3d0.Number = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_3a8 != (UDS_VM_W_RingCmd_IconImg *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_3a8);
    }
    FWeakObjectPtr::operator=(&local_3d8,(FObjectPtr)&local_3a8);
    local_3d0 = local_3b8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_3e0,&local_2b0);
    if ((local_3d0 == (FName)0x0) ||
       (this_01 = FWeakObjectPtr::Get(&local_3d8), this_01 == (UObject *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_2b0);
LAB_14c0243e9:
      local_3a0 = &local_3b8;
      `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
      __Internal_BindDynamic<UDS_VM_W_RingCmd_IconImg>'::__l2::<lambda_1>::operator()(&local_3a0);
    }
    else {
      pUVar12 = UObject::FindFunction(this_01,local_3d0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_2b0);
      if (pUVar12 == (UFunction *)0x0) goto LAB_14c0243e9;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_3e0,&local_298);
    local_348 = local_3d8;
    local_340 = local_3d0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_298);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar10 + 1),
               (FWriteAccessScope *)__return_storage_ptr__);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&pUVar10[1].field_0x8,local_3e8,Default);
    pFVar16 = (FDestructionSentinel *)&local_348;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar10 + 1),
               (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)pFVar16);
    if (local_318.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,__return_storage_ptr__);
      pFVar16 = __return_storage_ptr__;
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3e0.AccessDetector);
    TVar17.WeakPtr._1_7_ = (undefined7)((ulonglong)pFVar16 >> 8);
    TVar17.WeakPtr.ObjectIndex._0_1_ = 0xc;
    TVar9.ObjectPtr.field0_0x0 =
         (FObjectPtr)DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_2f8,TVar17);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)(TVar9.DebugPtr)->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(TVar9.DebugPtr)->_padding_);
  }
  pUVar1 = (UDS_M_ItemImplBase *)(TVar9.DebugPtr)->_padding_;
  (this->ItemSlotModel).field0_0x0.DebugPtr = pUVar1;
  if (pUVar1 != (UDS_M_ItemImplBase *)0x0) {
    iVar5 = (**(code **)(pUVar1->_padding_ + 0x378))();
    if (iVar5 < 10000) {
      local_338.Object = (FCulture *)0x0;
      local_338.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      iVar5 = (**(code **)(((this->ItemSlotModel).field0_0x0.DebugPtr)->_padding_ + 0x378))();
      pFVar8 = FText::AsNumber(&local_2d0,iVar5,(FNumberFormattingOptions *)0x0,&local_338);
      SetQuantityText(this,pFVar8);
      if (local_2d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2d0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_338.SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar8 = FText::FromString(&local_2e0,"9,999+");
      SetQuantityText(this,pFVar8);
      if (local_2e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2e0.TextData.Reference + 0x10))();
      }
    }
    this_00 = (this->VM_Item).field0_0x0.DebugPtr;
    if (this_00 != (UDS_VM_Item *)0x0) {
      pUVar1 = (this->ItemSlotModel).field0_0x0.DebugPtr;
      puVar13 = (undefined8 *)(**(code **)(pUVar1->_padding_ + 0x310))(pUVar1,local_2c0);
      local_328.Object = (FDS_ViewModelContext *)*puVar13;
      local_328.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar13[1]
      ;
      if (local_328.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_328);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2b8)
      ;
    }
  }
LAB_14c02458c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ItemUnbind @ 14c0245c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::ItemUnbind
          (UDS_VM_W_RingCmd_IconImg *this,TSharedPtr<FDS_RingCommandSlotData,1> *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  DS_ItemDataUtil::GetItemDataSet();
  bVar1 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_RingCmd_IconImg::ItemUnbind",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x158,L"itemDataSet is nullptr.");
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// MenuBind @ 14c0248b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::MenuBind
          (UDS_VM_W_RingCmd_IconImg *this,TSharedPtr<FDS_RingCommandSlotData,1> *param_1)

{
  UDS_VM_TotalMenu_Item *this_00;
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  ESlateVisibility EVar5;
  UDS_NotificationManager *pUVar6;
  UDS_LogManager *pUVar7;
  FDS_ContentsTotalMenuTableRow *pFVar8;
  FDS_ViewModelContext *pFVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  undefined1 auStackY_1c8 [32];
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pUVar6 = UDS_NotificationManager::GetInst();
  if (pUVar6 == (UDS_NotificationManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_RingCmd_IconImg::MenuBind",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_158.Ptr,0x120,L"notificationManager is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    if ((param_1->Object == (FDS_RingCommandSlotData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar8 = FDS_ContentsTotalMenuTableRow::GetRef(param_1->Object->SlotData,true);
    SetIconID(this,&pFVar8->ID_Icon);
    FVar2 = FFieldNotificationClassDescriptor::IconVisibility.FieldName;
    EVar5 = HitTestInvisible;
    if (this->IconID < 1) {
      EVar5 = Collapsed;
    }
    if (this->IconVisibility != EVar5) {
      local_190 = FFieldNotificationClassDescriptor::IconVisibility.BitNumber;
      this->IconVisibility = EVar5;
      local_198 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    }
    iVar3 = FFieldNotificationClassDescriptor::QuantityVisibility.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::QuantityVisibility.FieldName;
    if (this->QuantityVisibility != Collapsed) {
      this->QuantityVisibility = Collapsed;
      local_180 = iVar3;
      local_188 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    }
    if ((this->VM_TotalMenuItem).field0_0x0.DebugPtr != (UDS_VM_TotalMenu_Item *)0x0) {
      pFVar9 = ::operator_new(0x28);
      pFVar11 = (FDS_ViewModelContext *)0x0;
      pFVar12 = pFVar11;
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar9->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar9[1]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar9->DerivedStaticStruct = 0;
        (pFVar9->ViewModelName).ComparisonIndex = 0;
        (pFVar9->ViewModelName).Number = 0;
        pFVar9->ViewModelTemplateKey = None;
        pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_TotalMenuItem__6B_;
        pFVar12 = pFVar9;
      }
      pFVar9 = ::operator_new(0x20);
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar9->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar9->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TotalMenuItem__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar9->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar9->ViewModelTemplateKey = pFVar12;
        pFVar11 = pFVar9;
      }
      if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar10 = FDS_ViewModelContext_TotalMenuItem::StaticStruct();
      *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar10;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar11 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar11->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_178.Object = pFVar12;
        local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_178);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178.SharedReferenceCount.ReferenceController);
      }
      *(EDS_TotalMenuId *)&pFVar12[1]._padding_ = pFVar8->ID;
      this_00 = (this->VM_TotalMenuItem).field0_0x0.DebugPtr;
      if (pFVar11 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar11->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_168.Object = pFVar12;
      local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar11);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnChangedSlotState @ 14c025b10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::OnChangedSlotState(UDS_VM_W_RingCmd_IconImg *this,int param_1,int param_2)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SlotState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotState.FieldName;
  if (this->SlotIndex == param_1) {
    if (2 < (uint)param_2) {
      param_2 = 2;
    }
    if (this->SlotState != param_2) {
      this->SlotState = param_2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnItemDataSetChanged @ 14c02bfa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::OnItemDataSetChanged
          (UDS_VM_W_RingCmd_IconImg *this,UDS_DataSetBase *param_1)

{
  UDS_M_ItemImplBase *pUVar1;
  code *pcVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  pUVar1 = (this->ItemSlotModel).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar2)(pUVar1,local_res8,1);
  return;
}

// OnSetViewModel @ 14c0342a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::OnSetViewModel
          (UDS_VM_W_RingCmd_IconImg *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  FName FVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext_RingCmd,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_RingCmd_IconImg::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x36,L"InViewModelContext is nullptr")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148.Object = pFVar2;
    SafeCast<FDS_ViewModelContext_RingCmd>(&local_158,&local_148);
    if (local_158.Object == (FDS_ViewModelContext_RingCmd *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_RingCmd_IconImg::OnSetViewModel",0x28,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x3d,L"context is nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      this->DeckID = (local_158.Object)->RingCmdDeckNum;
      this->SlotIndex = (local_158.Object)->RingCmdIndex;
      this->bIsEditMode = (local_158.Object)->bIsEditMode;
      iVar4 = FFieldNotificationClassDescriptor::SlotState.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::SlotState.FieldName;
      if (this->SlotState != 2) {
        this->SlotState = 2;
        local_160 = iVar4;
        local_168 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnViewDestruct @ 14c03b920

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_IconImg::OnViewDestruct(UDS_VM_W_RingCmd_IconImg *this)

{
  (**(code **)(this->_padding_ + 0x2f8))();
  UDS_ViewModelBase::OnViewDestruct((UDS_ViewModelBase *)this);
  return;
}

// SetIconID @ 14c041590

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_IconImg::SetIconID(UDS_VM_W_RingCmd_IconImg *this,int *param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  plVar1 = &this->_padding_;
  if (this->IconID != *param_1) {
    this->IconID = *param_1;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::HasIconId.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HasIconId.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// SetIconVisibility @ 14c041760

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::SetIconVisibility
          (UDS_VM_W_RingCmd_IconImg *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IconVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconVisibility.FieldName;
  if (this->IconVisibility != *param_1) {
    this->IconVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsLock @ 14c0418a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_IconImg::SetIsLock(UDS_VM_W_RingCmd_IconImg *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsLock = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsLock.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsLock.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsNewSymbol @ 14c0418e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::SetIsNewSymbol(UDS_VM_W_RingCmd_IconImg *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  if (this->bIsEditMode == true) {
    this->IsNewSymbol = false;
  }
  else {
    this->IsNewSymbol = *param_1;
  }
  local_10 = FFieldNotificationClassDescriptor::IsNewSymbol.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNewSymbol.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetQuantityText @ 14c042af0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::SetQuantityText(UDS_VM_W_RingCmd_IconImg *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::QuantityText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::QuantityText.FieldName;
  bVar5 = FText::IdenticalTo(&this->QuantityText,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->QuantityText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->QuantityText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->QuantityText).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetQuantityVisibility @ 14c042bb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::SetQuantityVisibility
          (UDS_VM_W_RingCmd_IconImg *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::QuantityVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::QuantityVisibility.FieldName;
  if (this->QuantityVisibility != *param_1) {
    this->QuantityVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetReleasedListView @ 14c042fc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_IconImg::SetReleasedListView
          (UDS_VM_W_RingCmd_IconImg *this,FDS_WidgetEventField *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014c042fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))();
  return;
}

// UnbindModel @ 14c048d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_IconImg::UnbindModel(UDS_VM_W_RingCmd_IconImg *this)

{
  UDS_VM_Item *pUVar1;
  UDS_VM_TotalMenu_Item *pUVar2;
  UDS_VM_ActionFunction *pUVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  UDS_RingCommandUIEvent *pUVar6;
  UDS_RingCommandDeckData *this_00;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  TSharedPtr<FDS_RingCommandSlotData,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = (this->VM_Item).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_VM_Item *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))();
  }
  pUVar2 = (this->VM_TotalMenuItem).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_VM_TotalMenu_Item *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2c0))();
  }
  pUVar3 = (this->VM_ActionFunction).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_VM_ActionFunction *)0x0) {
    (**(code **)(pUVar3->_padding_ + 0x2c0))();
  }
  pUVar6 = UDS_EventManager::GetEvent<UDS_RingCommandUIEvent>();
  if (pUVar6 != (UDS_RingCommandUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnRingCmdSlotStateChanged,this);
  }
  UDS_RingCommandDeckData::GetData
            ((ulong64)&local_158,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DeckID,0));
  bVar5 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_158,
                     (void *)0x0);
  if (!bVar5) {
    this_00 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(&local_158);
    UDS_RingCommandDeckData::GetRingCommandData(this_00,&local_148,&this->SlotIndex);
    FVar4.ReferenceController = local_148.SharedReferenceCount.ReferenceController;
    if ((local_148.Object != (FDS_RingCommandSlotData *)0x0) &&
       ((local_148.Object)->SlotType == Item)) {
      if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      DS_ItemDataUtil::GetItemDataSet();
      bVar5 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_150,(void *)0x0);
      if (bVar5) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_W_RingCmd_IconImg::ItemUnbind",0x24,Yes);
          UDS_LogManager::PrintLog(pUVar7,1,Warning,local_138.Ptr,0x158,L"itemDataSet is nullptr.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        pUVar8 = FWeakObjectPtr::Get(&local_150);
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar8 + 1),
                   (UObject *)this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

