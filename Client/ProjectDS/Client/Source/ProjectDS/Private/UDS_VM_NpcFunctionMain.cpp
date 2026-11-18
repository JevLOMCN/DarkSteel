// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 47

// SetClickExitButton_WrapperImpl @ 14b6ad8e0

void __cdecl UDS_VM_NpcFunctionMain::SetClickExitButton_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong **)((longlong)param_1 + 0x3f8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bef95af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x3f8) + 0x2b0))();
    return;
  }
  return;
}

// SetClickBackButton_WrapperImpl @ 14b6ad8f0

void __cdecl UDS_VM_NpcFunctionMain::SetClickBackButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_NpcFunctionEvent *pUVar1;
  
  pUVar1 = UDS_NpcFunctionEvent::GetEvent();
  if (pUVar1 != (UDS_NpcFunctionEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar1->OnBackDelegate);
    return;
  }
  return;
}

// SetEventMouseEnterRelation_WrapperImpl @ 14b6ad900

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_NpcFunctionMain::SetEventMouseEnterRelation_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this;
  FGeometry *pFVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_188;
  float fStack_184;
  undefined1 auStack_178 [8];
  FDelegateAllocation FStack_170;
  FDeprecateSlateVector2D FStack_160;
  void *apvStack_158 [2];
  code *pcStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TVector2<double>_u_0 TStack_138;
  FDestructionSentinel FStack_128;
  FDestructionSentinel FStack_110;
  FDelegateAllocation *pFStack_f8;
  TVector2<double>_u_0 TStack_f0;
  TVector2<double> TStack_e0;
  FDeprecateSlateVector2D FStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> aTStack_98 [4];
  
  this = UDS_WindowManager::GetInst();
  if ((this != (UDS_WindowManager *)0x0) && (*(UWidget **)param_2 != (UWidget *)0x0)) {
    pFVar3 = UWidget::GetCachedGeometry(*(UWidget **)param_2);
    fStack_b0 = (pFVar3->AccumulatedRenderTransform).M.M[0][1];
    fStack_ac = (pFVar3->AccumulatedRenderTransform).M.M[1][0];
    fStack_a8 = (pFVar3->AccumulatedRenderTransform).M.M[1][1];
    fStack_a4 = (pFVar3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    uStack_a0 = *(undefined8 *)
                 ((longlong)&(pFVar3->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    fVar12 = (float)uStack_a0;
    FStack_160 = pFVar3->Size;
    uStack_c8 = *(undefined8 *)&pFVar3->Scale;
    fStack_c0 = (pFVar3->AbsolutePosition).field0_0x0._s_0.Y;
    fStack_bc = (pFVar3->Position).field0_0x0._s_0.X;
    fStack_b8 = (pFVar3->Position).field0_0x0._s_0.Y;
    fStack_b4 = (pFVar3->AccumulatedRenderTransform).M.M[0][0];
    fStack_188 = FStack_160._0_4_;
    fStack_184 = FStack_160._4_4_;
    fVar10 = fStack_188 * __real_3f000000 * fStack_b0;
    fVar8 = fStack_184 * __real_3f000000;
    fVar9 = fStack_184 * __real_3f000000 * fStack_ac + fStack_188 * __real_3f000000 * fStack_b4 +
            fStack_a4;
    fVar11 = fStack_184 * __real_3f000000 * fStack_a8;
    fStack_188 = fStack_188 * __real_3f000000;
    FStack_d0 = FStack_160;
    pUVar4 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (pUVar4 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9063363953660265156>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_VM_NpcFunctionMain.cpp"
                         ,0x2c4,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      TStack_138._s_0.X = (double)fVar9;
      TStack_138._s_0.Y = (double)(fVar11 + fVar10 + fVar12);
      USlateBlueprintLibrary::AbsoluteToViewport
                (pUVar4,(TVector2<double> *)&TStack_138._s_0,&TStack_e0,
                 (TVector2<double> *)&TStack_f0._s_0);
      pcStack_148 = OnOpenRelationTooltipCallback;
      uStack_13c = TStack_e0.field0_0x0._12_4_;
      uStack_140 = 0;
      auStack_178 = (undefined1  [8])0x0;
      FStack_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_170.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_178,
                 (FWriteAccessScope *)&FStack_110);
      pFStack_f8 = &FStack_170;
      puVar5 = UE::Core::Private::DelegateAllocate(0x48,&FStack_170);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
        ;
        puVar5[1] = TStack_f0._s_0.X;
        puVar5[2] = TStack_f0._s_0.Y;
        puVar5[3] = (double)fStack_188;
        puVar5[4] = (double)fVar8;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[5] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_NpcFunctionMain____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar5[6] = 0;
        apvStack_158[0] = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 6),(FObjectPtr)apvStack_158);
        puVar5[7] = pcStack_148;
        puVar5[8] = CONCAT44(uStack_13c,uStack_140);
      }
      if (FStack_110.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_110.Accessor,&FStack_110);
      }
      pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         (aTStack_98,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          auStack_178);
      UDS_WindowManager::OpenWindow(this,RelationTooltip,pTVar7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_178,
                 (FWriteAccessScope *)&FStack_128);
      if ((FStack_170.DelegateSize != 0) &&
         (FStack_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_170.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_170,0,0,0x10);
        FStack_170.DelegateSize = 0;
      }
      if (FStack_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_128.Accessor,&FStack_128);
      }
      if (FStack_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_170.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_178);
    }
  }
  return;
}

// SetEventMouseLeaveRelation_WrapperImpl @ 14b6ad910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_NpcFunctionMain::SetEventMouseLeaveRelation_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,RelationTooltip,auStackX_20,afStackX_18);
  }
  return;
}

// StaticClass @ 14b6ad920

UClass * __cdecl UDS_VM_NpcFunctionMain::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunctionMain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunctionMain",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunctionMain.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunctionMain,0x460,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcFunctionMain>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunctionMain>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunctionMain.InnerSingleton;
}

// UDS_VM_NpcFunctionMain @ 14b6b17c0

UDS_VM_NpcFunctionMain * __thiscall
UDS_VM_NpcFunctionMain::UDS_VM_NpcFunctionMain(UDS_VM_NpcFunctionMain *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EntryBindingEventField_MenuSlotQuest).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunctionMain__6B_;
  (this->EntryBindingEventField_MenuSlotQuest).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MenuSlotQuest).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_MenuSlotFunction).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MenuSlotFunction).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MenuSlotFunction).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_MenuSlotNormalTalk).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MenuSlotNormalTalk).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MenuSlotNormalTalk).UserObjectList.ArrayMax = 0;
  (this->ClickExitButton)._padding_ = '\0';
  (this->ClickExitButton).bIsCustomSelected = false;
  (this->ClickExitButton).bIsLacked = false;
  (this->ClickExitButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExitButton).Delegate = 0;
  *(undefined8 *)&(this->ClickExitButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExitButton).Delegate.field_0x10 = 0;
  (this->ClickBackButton)._padding_ = '\0';
  (this->ClickBackButton).bIsCustomSelected = false;
  (this->ClickBackButton).bIsLacked = false;
  (this->ClickBackButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickBackButton).Delegate = 0;
  *(undefined8 *)&(this->ClickBackButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBackButton).Delegate.field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnterRelation);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeaveRelation);
  (this->NpcTitle).StringTableType = None;
  (this->NpcTitle).StringTableID = 0;
  (this->NpcTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcTitle).StringEnumTableNameID.Number = 0;
  (this->NpcTitle).DateTime.Ticks = 0;
  (this->NpcTitle).TimeSpan.Ticks = 0;
  (this->NpcTitle).TimeExpressionType = None;
  (this->NpcTitle).IsExpression = false;
  (this->NpcTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcTitle).UniqueString.Data.ArrayNum = 0;
  (this->NpcTitle).UniqueString.Data.ArrayMax = 0;
  (this->NpcTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcTitle).FormatArgs.ArrayNum = 0;
  (this->NpcTitle).FormatArgs.ArrayMax = 0;
  (this->VM_NPCData).field0_0x0.DebugPtr = (UDS_VM_NPCData *)0x0;
  (this->VM_NPCRelationData).field0_0x0.DebugPtr = (UDS_VM_NpcRelationData *)0x0;
  (this->VM_NpcFunction_TalkDialogue).field0_0x0.DebugPtr = (UDS_VM_NpcFunction_TalkDialogue *)0x0;
  (this->VM_NpcFunction_Frame).field0_0x0.DebugPtr = (UDS_VM_NpcFunction_Frame *)0x0;
  (this->FixedText_Btn_Back).StringTableType = StringUi;
  (this->FixedText_Btn_Back).StringTableID = 0x3112c;
  (this->FixedText_Btn_Back).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Back).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Back).DateTime.Ticks = 0;
  (this->FixedText_Btn_Back).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Back).TimeExpressionType = None;
  (this->FixedText_Btn_Back).IsExpression = false;
  (this->FixedText_Btn_Back).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Back).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Back).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Back).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Back).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Back).FormatArgs.ArrayMax = 0;
  (this->NpcDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CurNpcFunction).field0_0x0.DebugPtr = (UDS_NpcFunctionBase *)0x0;
  *(undefined8 *)&this->HistoryDataMap = 0;
  *(undefined8 *)&(this->HistoryDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryDataMap).field_0x20 = 0;
  this->InteractionID = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x48 = 0;
  this->IsNpcTalkCancel = false;
  return this;
}

// UDS_VM_NpcFunctionMain @ 14b6b19a0

UDS_VM_NpcFunctionMain * __thiscall
UDS_VM_NpcFunctionMain::UDS_VM_NpcFunctionMain
          (UDS_VM_NpcFunctionMain *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EntryBindingEventField_MenuSlotQuest).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunctionMain__6B_;
  (this->EntryBindingEventField_MenuSlotQuest).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MenuSlotQuest).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_MenuSlotFunction).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MenuSlotFunction).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MenuSlotFunction).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_MenuSlotNormalTalk).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MenuSlotNormalTalk).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MenuSlotNormalTalk).UserObjectList.ArrayMax = 0;
  (this->ClickExitButton)._padding_ = '\0';
  (this->ClickExitButton).bIsCustomSelected = false;
  (this->ClickExitButton).bIsLacked = false;
  (this->ClickExitButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExitButton).Delegate = 0;
  *(undefined8 *)&(this->ClickExitButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExitButton).Delegate.field_0x10 = 0;
  (this->ClickBackButton)._padding_ = '\0';
  (this->ClickBackButton).bIsCustomSelected = false;
  (this->ClickBackButton).bIsLacked = false;
  (this->ClickBackButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickBackButton).Delegate = 0;
  *(undefined8 *)&(this->ClickBackButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBackButton).Delegate.field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnterRelation);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeaveRelation);
  (this->NpcTitle).StringTableType = None;
  (this->NpcTitle).StringTableID = 0;
  (this->NpcTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcTitle).StringEnumTableNameID.Number = 0;
  (this->NpcTitle).DateTime.Ticks = 0;
  (this->NpcTitle).TimeSpan.Ticks = 0;
  (this->NpcTitle).TimeExpressionType = None;
  (this->NpcTitle).IsExpression = false;
  (this->NpcTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcTitle).UniqueString.Data.ArrayNum = 0;
  (this->NpcTitle).UniqueString.Data.ArrayMax = 0;
  (this->NpcTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcTitle).FormatArgs.ArrayNum = 0;
  (this->NpcTitle).FormatArgs.ArrayMax = 0;
  (this->VM_NPCData).field0_0x0.DebugPtr = (UDS_VM_NPCData *)0x0;
  (this->VM_NPCRelationData).field0_0x0.DebugPtr = (UDS_VM_NpcRelationData *)0x0;
  (this->VM_NpcFunction_TalkDialogue).field0_0x0.DebugPtr = (UDS_VM_NpcFunction_TalkDialogue *)0x0;
  (this->VM_NpcFunction_Frame).field0_0x0.DebugPtr = (UDS_VM_NpcFunction_Frame *)0x0;
  (this->FixedText_Btn_Back).StringTableType = StringUi;
  (this->FixedText_Btn_Back).StringTableID = 0x3112c;
  (this->FixedText_Btn_Back).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Back).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Back).DateTime.Ticks = 0;
  (this->FixedText_Btn_Back).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Back).TimeExpressionType = None;
  (this->FixedText_Btn_Back).IsExpression = false;
  (this->FixedText_Btn_Back).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Back).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Back).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Back).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Back).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Back).FormatArgs.ArrayMax = 0;
  (this->NpcDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CurNpcFunction).field0_0x0.DebugPtr = (UDS_NpcFunctionBase *)0x0;
  *(undefined8 *)&this->HistoryDataMap = 0;
  *(undefined8 *)&(this->HistoryDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryDataMap).field_0x20 = 0;
  this->InteractionID = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x48 = 0;
  this->IsNpcTalkCancel = false;
  return this;
}

// ~UDS_VM_NpcFunctionMain @ 14b6b3b40

void __thiscall UDS_VM_NpcFunctionMain::~UDS_VM_NpcFunctionMain(UDS_VM_NpcFunctionMain *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunctionMain__6B_;
  *(undefined4 *)&(this->HistoryDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HistoryDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InteractionFunctionType,FDS_HistoryData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InteractionFunctionType,FDS_HistoryData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->HistoryDataMap);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Back).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Back).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedText_Btn_Back).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedText_Btn_Back).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NpcTitle).FormatArgs.AllocatorInstance.Data,
             (this->NpcTitle).FormatArgs.ArrayNum);
  pFVar2 = (this->NpcTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NpcTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeaveRelation).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeaveRelation).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnterRelation).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnterRelation).PointerEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickBackButton).Delegate);
  pvVar1 = *(void **)&(this->ClickBackButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickBackButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickExitButton).Delegate);
  pvVar1 = *(void **)&(this->ClickExitButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickExitButton).Delegate);
  pFVar2 = (this->EntryBindingEventField_MenuSlotNormalTalk).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EntryBindingEventField_MenuSlotFunction).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EntryBindingEventField_MenuSlotQuest).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b67f0

IClassDescriptor * __thiscall
UDS_VM_NpcFunctionMain::GetFieldNotificationDescriptor(UDS_VM_NpcFunctionMain *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NpcFunctionMain::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b70a0

UClass * __cdecl UDS_VM_NpcFunctionMain::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunctionMain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunctionMain",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunctionMain.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunctionMain,0x460,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcFunctionMain>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunctionMain>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunctionMain.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NpcFunctionMain @ 14b6b7d50

void __cdecl UDS_VM_NpcFunctionMain::StaticRegisterNativesUDS_VM_NpcFunctionMain(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_NpcFunctionMain_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOpenRelationTooltipCallback @ 14b6b9800

void __cdecl
UDS_VM_NpcFunctionMain::execOnOpenRelationTooltipCallback
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserWidget *local_res10;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  local_res10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_18._s_0.X = local_38;
  local_18._s_0.Y = dStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnOpenRelationTooltipCallback
            ((UDS_VM_NpcFunctionMain *)param_1,local_res10,(TVector2<double> *)&local_18._s_0,
             (TVector2<double> *)&local_28._s_0);
  return;
}

// BindModel @ 14bed93e0

void __thiscall UDS_VM_NpcFunctionMain::BindModel(UDS_VM_NpcFunctionMain *this)

{
  UDS_InteractionEvent *pUVar1;
  UDS_QuestEvent *pUVar2;
  UDS_NpcFunctionEvent *this_00;
  UDS_HistoryManager *pUVar3;
  EDS_InteractionFunctionType local_res10 [8];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_InteractionEvent::GetEvent();
  if (pUVar1 != (UDS_InteractionEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->InteractionNpcTalkCancelDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NpcFunctionMain>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->InteractionNpcTalkCancelDelegate,(UDS_VM_NpcFunctionMain *)local_res10,
               (pmf_4bb3ac57 *)this);
  }
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnAddQuestDataDelegate
               ,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NpcFunctionMain>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnAddQuestDataDelegate,(UDS_VM_NpcFunctionMain *)local_res10,
               (pmf_83684659 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateQuestDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NpcFunctionMain>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateQuestDataDelegate,(UDS_VM_NpcFunctionMain *)local_res10,
               (pmf_83684659 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnCompleteQuestDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NpcFunctionMain>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnCompleteQuestDelegate,(UDS_VM_NpcFunctionMain *)local_res10,
               (pmf_83684659 *)this);
  }
  this_00 = UDS_NpcFunctionEvent::GetEvent();
  if (this_00 != (UDS_NpcFunctionEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this_00->OnChangedNpcFunctionDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InteractionFunctionType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NpcFunctionMain>
              (&this_00->OnChangedNpcFunctionDelegate,(UDS_VM_NpcFunctionMain *)local_res10,
               (pmf_57e07858 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this_00->OnSelectedQuestDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NpcFunctionMain>
              ((TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->OnSelectedQuestDelegate,(UDS_VM_NpcFunctionMain *)local_res10,
               (pmf_b1a56399 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this_00->OnTalkDialogueLastDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NpcFunctionMain>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this_00->OnTalkDialogueLastDelegate,(UDS_VM_NpcFunctionMain *)local_res10,
               (pmf_4bb3ac57 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->OnBackDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NpcFunctionMain>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this_00->OnBackDelegate,(UDS_VM_NpcFunctionMain *)local_res10,(pmf_4bb3ac57 *)this);
    local_res10[0] = None;
    UDS_NpcFunctionEvent::OnChangedNpcFunction(this_00,local_res10);
  }
  pUVar3 = UDS_HistoryManager::GetInst();
  if (pUVar3 != (UDS_HistoryManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NpcFunctionMain>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar3->OnHistoryBackEvent,(UDS_VM_NpcFunctionMain *)local_res10,
               (pmf_754ccbcf *)this);
  }
  return;
}

// GetCurFunctionType @ 14beee020

EDS_InteractionFunctionType __thiscall
UDS_VM_NpcFunctionMain::GetCurFunctionType(UDS_VM_NpcFunctionMain *this)

{
  UDS_NpcFunctionBase *pUVar1;
  
  pUVar1 = (this->CurNpcFunction).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_NpcFunctionBase *)0x0) {
    return pUVar1->FunctionType;
  }
  return None;
}

// InitViewModel @ 14bef38f0

void __thiscall UDS_VM_NpcFunctionMain::InitViewModel(UDS_VM_NpcFunctionMain *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->IsNpcTalkCancel = false;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->NpcDataSet).WeakPtr = local_res8;
  (this->CurNpcFunction).field0_0x0.DebugPtr = (UDS_NpcFunctionBase *)0x0;
  TSet<TTuple<enum_EDS_InteractionFunctionType,FDS_HistoryData>,TDefaultMapHashableKeyFuncs<enum_EDS_InteractionFunctionType,FDS_HistoryData,0>,FDefaultSetAllocator>
  ::Reset(&this->HistoryDataMap);
  return;
}

// OnBackEvent @ 14bef7220

void __thiscall UDS_VM_NpcFunctionMain::OnBackEvent(UDS_VM_NpcFunctionMain *this)

{
  UDS_NpcFunctionBase *pUVar1;
  
  pUVar1 = (this->CurNpcFunction).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_NpcFunctionBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bef722f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2d8))();
    return;
  }
  return;
}

// OnChangedNpcFunction @ 14bef7f90

void __thiscall
UDS_VM_NpcFunctionMain::OnChangedNpcFunction
          (UDS_VM_NpcFunctionMain *this,EDS_InteractionFunctionType *param_1)

{
  FName FVar1;
  bool bVar2;
  int iVar3;
  UDS_DataSetBase *this_00;
  FDS_NpcBaseTableRow *this_01;
  UDS_NPCDataSet *this_02;
  long64 lVar4;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  SetNpcFunction(this,param_1);
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.TimeExpressionType = None;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  bVar2 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar2) {
    if (*param_1 == None) {
      this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      iVar3 = UDS_DataSetBase::GetEntityTableID(this_00);
      this_01 = FDS_NpcBaseTableRow::GetRef((longlong)iVar3,true);
      bVar2 = FDS_NpcBaseTableRow::IsValid(this_01);
      if (bVar2) {
        FDS_Text::SetTextFromStringID(&local_58,&this_01->ID_NameTitleSid);
      }
    }
    else {
      this_02 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      lVar4 = UDS_NPCDataSet::GetFunctionNameID(this_02,this->InteractionID,*param_1);
      FDS_Text::SetTextFromStringTable(&local_58,StringBase,lVar4);
    }
  }
  iVar3 = FFieldNotificationClassDescriptor::NpcTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::NpcTitle.FieldName;
  FDS_Text::operator=(&this->NpcTitle,&local_58);
  local_68 = FVar1;
  local_60 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  iVar3 = FFieldNotificationClassDescriptor::bUseNpcTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::bUseNpcTitle.FieldName;
  bVar2 = FDS_Text::IsEmpty(&local_58);
  if (this->bUseNpcTitle != !bVar2) {
    this->bUseNpcTitle = !bVar2;
    local_68 = FVar1;
    local_60 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnClickBackButton @ 14bef8690

void __thiscall
UDS_VM_NpcFunctionMain::OnClickBackButton
          (UDS_VM_NpcFunctionMain *this,FDS_ButtonEventField *param_1)

{
  UDS_NpcFunctionEvent *pUVar1;
  
  pUVar1 = UDS_NpcFunctionEvent::GetEvent();
  if (pUVar1 != (UDS_NpcFunctionEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar1->OnBackDelegate);
    return;
  }
  return;
}

// OnClickExitButton @ 14bef95a0

void __thiscall
UDS_VM_NpcFunctionMain::OnClickExitButton
          (UDS_VM_NpcFunctionMain *this,FDS_ButtonEventField *param_1)

{
  UDS_NpcFunctionBase *pUVar1;
  
  pUVar1 = (this->CurNpcFunction).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_NpcFunctionBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bef95af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2b0))();
    return;
  }
  return;
}

// OnCloseInit @ 14befbff0

void __thiscall UDS_VM_NpcFunctionMain::OnCloseInit(UDS_VM_NpcFunctionMain *this)

{
  UDS_NpcFunctionBase *pUVar1;
  UDS_InteractionEvent *pUVar2;
  UDS_HistoryManager *pUVar3;
  UDS_QuestEvent *pUVar4;
  UDS_NpcFunctionEvent *pUVar5;
  EDS_AbilityDeactivateType local_res8 [8];
  ulong64 local_res10;
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  pUVar1 = (this->CurNpcFunction).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_NpcFunctionBase *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))();
    (this->CurNpcFunction).field0_0x0.DebugPtr = (UDS_NpcFunctionBase *)0x0;
  }
  pUVar2 = UDS_InteractionEvent::GetEvent();
  if (pUVar2 != (UDS_InteractionEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->InteractionNpcTalkCancelDelegate,this);
  }
  pUVar3 = UDS_HistoryManager::GetInst();
  if (pUVar3 != (UDS_HistoryManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnHistoryBackEvent,
               this);
  }
  pUVar4 = UDS_QuestEvent::GetEvent();
  if (pUVar4 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnAddQuestDataDelegate
               ,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnUpdateQuestDataDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnCompleteQuestDelegate,this);
  }
  pUVar5 = UDS_NpcFunctionEvent::GetEvent();
  if (pUVar5 != (UDS_NpcFunctionEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->OnChangedNpcFunctionDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->OnSelectedQuestDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->OnTalkDialogueLastDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnBackDelegate,this);
  }
  if (this->IsNpcTalkCancel == false) {
    local_res8[0] = Success;
    local_res10 = FDS_EntityBase::GetMainPlayerEntityID(true);
    UDS_InteractionAbility_NPC::Deactivate(&local_res10,local_res8);
  }
  return;
}

// OnCompleteQuest @ 14befc180

void __thiscall UDS_VM_NpcFunctionMain::OnCompleteQuest(UDS_VM_NpcFunctionMain *this,int param_1)

{
  UDS_NpcFunctionBase *pUVar1;
  
  pUVar1 = (this->CurNpcFunction).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_NpcFunctionBase *)0x0) && (pUVar1->FunctionType != None)) {
    return;
  }
  UpdateMenuSlotList_Quest(this);
  return;
}

// OnEventMouseEnterRelation @ 14befd6f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NpcFunctionMain::OnEventMouseEnterRelation
          (UDS_VM_NpcFunctionMain *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  FGeometry *pFVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_188;
  float fStack_184;
  undefined1 local_178 [8];
  FDelegateAllocation local_170;
  FDeprecateSlateVector2D local_160;
  UDS_VM_NpcFunctionMain *local_158 [2];
  code *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TVector2<double>_u_0 local_138;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  FDelegateAllocation *local_f8;
  TVector2<double>_u_0 local_f0;
  TVector2<double> local_e0;
  FDeprecateSlateVector2D local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_98 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if ((this_00 != (UDS_WindowManager *)0x0) && (param_1->TargetWidget != (UDS_UserWidget *)0x0)) {
    pFVar3 = UWidget::GetCachedGeometry((UWidget *)param_1->TargetWidget);
    local_b0 = (pFVar3->AccumulatedRenderTransform).M.M[0][1];
    fStack_ac = (pFVar3->AccumulatedRenderTransform).M.M[1][0];
    fStack_a8 = (pFVar3->AccumulatedRenderTransform).M.M[1][1];
    fStack_a4 = (pFVar3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    local_a0 = *(undefined8 *)((longlong)&(pFVar3->AccumulatedRenderTransform).Trans.field0_0x0 + 4)
    ;
    fVar12 = (float)local_a0;
    local_160 = pFVar3->Size;
    uStack_c8 = *(undefined8 *)&pFVar3->Scale;
    local_c0 = (pFVar3->AbsolutePosition).field0_0x0._s_0.Y;
    fStack_bc = (pFVar3->Position).field0_0x0._s_0.X;
    fStack_b8 = (pFVar3->Position).field0_0x0._s_0.Y;
    fStack_b4 = (pFVar3->AccumulatedRenderTransform).M.M[0][0];
    local_188 = local_160._0_4_;
    fStack_184 = local_160._4_4_;
    fVar10 = local_188 * __real_3f000000 * local_b0;
    fVar8 = fStack_184 * __real_3f000000;
    fVar9 = fStack_184 * __real_3f000000 * fStack_ac + local_188 * __real_3f000000 * fStack_b4 +
            fStack_a4;
    fVar11 = fStack_184 * __real_3f000000 * fStack_a8;
    local_188 = local_188 * __real_3f000000;
    local_d0 = local_160;
    pUVar4 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    if (pUVar4 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9063363953660265156>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_VM_NpcFunctionMain.cpp"
                         ,0x2c4,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_138._s_0.X = (double)fVar9;
      local_138._s_0.Y = (double)(fVar11 + fVar10 + fVar12);
      USlateBlueprintLibrary::AbsoluteToViewport
                (pUVar4,(TVector2<double> *)&local_138._s_0,&local_e0,
                 (TVector2<double> *)&local_f0._s_0);
      local_148 = OnOpenRelationTooltipCallback;
      uStack_13c = local_e0.field0_0x0._12_4_;
      uStack_140 = 0;
      local_178 = (undefined1  [8])0x0;
      local_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_170.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
                 (FWriteAccessScope *)&local_110);
      local_f8 = &local_170;
      puVar5 = UE::Core::Private::DelegateAllocate(0x48,&local_170);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
        ;
        puVar5[1] = local_f0._s_0.X;
        puVar5[2] = local_f0._s_0.Y;
        puVar5[3] = (double)local_188;
        puVar5[4] = (double)fVar8;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[5] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_NpcFunctionMain____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[6] = 0;
        local_158[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 6),(FObjectPtr)local_158);
        puVar5[7] = local_148;
        puVar5[8] = CONCAT44(uStack_13c,uStack_140);
      }
      if (local_110.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
      }
      pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         (local_98,(TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                    *)local_178);
      UDS_WindowManager::OpenWindow(this_00,RelationTooltip,pTVar7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
                 (FWriteAccessScope *)&local_128);
      if ((local_170.DelegateSize != 0) &&
         (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_170.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_170,0,0,0x10);
        local_170.DelegateSize = 0;
      }
      if (local_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
      }
      if (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_170.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_178);
    }
  }
  return;
}

// OnEventMouseLeaveRelation @ 14befda90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NpcFunctionMain::OnEventMouseLeaveRelation
          (UDS_VM_NpcFunctionMain *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RelationTooltip,local_res20,local_res18);
  }
  return;
}

// OnHistoryBackEvent @ 14befdc50

void __thiscall
UDS_VM_NpcFunctionMain::OnHistoryBackEvent(UDS_VM_NpcFunctionMain *this,FDS_HistoryData *param_1)

{
  uint uVar1;
  int iVar2;
  UDS_NpcFunctionEvent *this_00;
  undefined1 *puVar3;
  TMap<EDS_InteractionFunctionType,FDS_HistoryData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InteractionFunctionType,FDS_HistoryData,0>_>
  *this_01;
  EDS_InteractionFunctionType local_res10 [8];
  TPairInitializer<EDS_InteractionFunctionType_&,FDS_HistoryData_const_&> local_res18;
  EDS_InteractionFunctionType *local_18;
  FDS_HistoryData *local_10;
  
  if (param_1->DataType == NPCFunction) {
    ::FName::FName((FName *)&local_res18,L"EDS_InteractionFunctionType");
    uVar1 = FDS_HistoryData::FindInt32(param_1,(FName *)&local_res18);
    this_01 = &this->HistoryDataMap;
    local_res10[0] = (EDS_InteractionFunctionType)uVar1;
    if (*(int *)&(this->HistoryDataMap).field_0x8 != *(int *)&(this->HistoryDataMap).field_0x34) {
      puVar3 = *(undefined1 **)&(this->HistoryDataMap).field_0x40;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(this->HistoryDataMap).field_0x38;
      }
      iVar2 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(this->HistoryDataMap).field_0x48 - 1U & uVar1 & 0xff) * 4
                      );
      if (iVar2 != -1) {
        do {
          if (*(EDS_InteractionFunctionType *)((longlong)iVar2 * 0x298 + *(longlong *)this_01) ==
              local_res10[0]) {
            local_res18.Key._0_1_ = local_res10[0];
            TSet<TTuple<enum_EDS_InteractionFunctionType,FDS_HistoryData>,TDefaultMapHashableKeyFuncs<enum_EDS_InteractionFunctionType,FDS_HistoryData,0>,FDefaultSetAllocator>
            ::RemoveImpl<enum_EDS_InteractionFunctionType>
                      (this_01,uVar1 & 0xff,(EDS_InteractionFunctionType *)&local_res18);
            break;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x298 + 0x290 + *(longlong *)this_01);
        } while (iVar2 != -1);
      }
    }
    local_18 = local_res10;
    local_10 = param_1;
    TSet<TTuple<enum_EDS_InteractionFunctionType,FDS_HistoryData>,TDefaultMapHashableKeyFuncs<enum_EDS_InteractionFunctionType,FDS_HistoryData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_InteractionFunctionType_&,FDS_HistoryData_const_&>_>
              (this_01,&local_res18,(bool *)&local_18);
    this_00 = UDS_NpcFunctionEvent::GetEvent();
    if (this_00 != (UDS_NpcFunctionEvent *)0x0) {
      UDS_NpcFunctionEvent::OnChangedNpcFunction(this_00,local_res10);
    }
  }
  return;
}

// OnNpcTalkCancel @ 14beff230

void __thiscall UDS_VM_NpcFunctionMain::OnNpcTalkCancel(UDS_VM_NpcFunctionMain *this)

{
  UDS_NpcFunctionBase *pUVar1;
  
  this->IsNpcTalkCancel = true;
  pUVar1 = (this->CurNpcFunction).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_NpcFunctionBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014beff246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2b0))();
    return;
  }
  return;
}

// OnOpenRelationTooltipCallback @ 14bf010a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NpcFunctionMain::OnOpenRelationTooltipCallback
          (UDS_VM_NpcFunctionMain *this,UDS_UserWidget *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  code *pcVar1;
  FDS_ViewModelContext_NpcRelationData *pFVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  FMargin *pFVar6;
  UDS_DataSetBase *this_00;
  undefined1 auStackY_208 [32];
  FWeakObjectPtr local_1d8;
  UDS_UserWidget *local_1d0;
  TSharedPtr<FDS_ViewModelContext_NpcRelationData,1> local_1c8;
  TVector2<double>_u_0 local_1b8;
  FMargin local_1a8;
  TVector2<double>_u_0 local_198;
  TVector2<double> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  FMargin local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_NpcFunctionMain::OnOpenRelationTooltipCallback",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x2df,L"InContentWidget is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    local_1b8._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_1b8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    pFVar6 = UDS_UserWidget::GetWindowFrameSlotMargin(param_1,&local_168);
    local_198._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_198._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_1a8.Left = pFVar6->Left;
    local_1a8.Top = pFVar6->Top;
    local_1a8.Right = pFVar6->Right;
    local_1a8.Bottom = pFVar6->Bottom;
    DS_Util::TransformTooltipPosition
              (&local_188,(TVector2<double> *)&local_198._s_0,&local_1a8,
               (TVector2<double> *)&local_1b8._s_0,None);
    UDS_UserWidget::OnSetWindowPosition(param_1,&local_188);
    bVar3 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
    if (bVar3) {
      MakeContext<FDS_ViewModelContext_NpcRelationData>(&local_1c8);
      pFVar2 = local_1c8.Object;
      if ((local_1c8.Object == (FDS_ViewModelContext_NpcRelationData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)&pFVar2->_padding_ = 0x1c7;
      pFVar2->PlayerEntityID = UDS_PlayerData::MainPlayerEntityID;
      this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      iVar4 = UDS_DataSetBase::GetEntityTableID(this_00);
      local_178.Object = (FDS_ViewModelContext *)local_1c8.Object;
      local_178.SharedReferenceCount.ReferenceController =
           local_1c8.SharedReferenceCount.ReferenceController;
      pFVar2->NpcTID = iVar4;
      if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_1d8.ObjectIndex = 0;
      local_1d8.ObjectSerialNumber = 0;
      local_1d0 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_1d0);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1d8,&local_178,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnSelectedQuest @ 14bf04350

void __thiscall UDS_VM_NpcFunctionMain::OnSelectedQuest(UDS_VM_NpcFunctionMain *this,int *param_1)

{
  TObjectPtr<UDS_NpcFunctionBase> *this_00;
  UDS_NpcFunctionBase *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  
  this_00 = &this->CurNpcFunction;
  if ((this_00->field0_0x0).DebugPtr != (UDS_NpcFunctionBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_NpcFunctionQuest_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if ((bVar2) && (pUVar1 = (this_00->field0_0x0).DebugPtr, pUVar1 != (UDS_NpcFunctionBase *)0x0))
    {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      *(int *)&pUVar1[1]._padding_ = *param_1;
    }
  }
  return;
}

// OnSetViewModel @ 14bf084e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_NpcFunctionMain::OnSetViewModel
          (UDS_VM_NpcFunctionMain *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FDS_ViewModelContext_NpcFunction *pFVar3;
  bool bVar4;
  TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> TVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UDS_VM_NpcFunction_TalkDialogue *pUVar8;
  UDS_DataSetBase *pUVar9;
  ulong64 uVar10;
  UDS_VM_NpcFunction_Frame *pUVar11;
  longlong *plVar12;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  TSharedPtr<FDS_ViewModelContext_NpcFunction,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext_NpcFunction,1> local_198;
  TSharedPtr<FDS_ViewModelContext_NpcFunction,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  undefined1 local_168 [16];
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NpcFunction>(&local_188,&local_178);
  if (local_188.Object == (FDS_ViewModelContext_NpcFunction *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    goto LAB_14bf088e3;
  }
  this->InteractionID = (local_188.Object)->InteractionID;
  TVar5 = TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_168);
                    /* WARNING: Load size is inaccurate */
  (this->NpcDataSet).WeakPtr = *TVar5.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (!bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    goto LAB_14bf088e3;
  }
  SetVM_NPCData(this);
  SetVM_NpcRelationData(this);
  if ((this->VM_NpcFunction_TalkDialogue).field0_0x0.DebugPtr ==
      (UDS_VM_NpcFunction_TalkDialogue *)0x0) {
    local_1b8 = 0;
    pUVar6 = Z_Construct_UClass_UDS_VM_NpcFunction_TalkDialogue_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_VM_NpcFunction_TalkDialogue_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_138,pUVar6);
    local_138._48_8_ = (FObjectInstancingGraph *)0x0;
    local_138._56_8_ = (UPackage *)0x0;
    local_138._16_4_ = 0;
    local_138._20_4_ = 0;
    local_138._24_4_ = RF_Transient;
    local_138._40_8_ = (UObject *)0x0;
    local_138[0x20] = false;
    local_138._8_8_ = this;
    pUVar8 = (UDS_VM_NpcFunction_TalkDialogue *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
    if (local_138._64_8_ != 0) {
      plVar12 = (longlong *)(local_138 + 0x50);
      if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_138._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (pUVar8 != (UDS_VM_NpcFunction_TalkDialogue *)0x0) {
      *(undefined1 *)((longlong)&pUVar8->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_VM_NpcFunction_TalkDialogue *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->VM_NpcFunction_TalkDialogue).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 != (UDS_VM_NpcFunction_TalkDialogue *)0x0) goto LAB_14bf08699;
  }
  else {
LAB_14bf08699:
    MakeContext<FDS_ViewModelContext_NpcFunction>(&local_1a8);
    pFVar3 = local_1a8.Object;
    if (local_1a8.Object != (FDS_ViewModelContext_NpcFunction *)0x0) {
      if ((local_1a8.Object == (FDS_ViewModelContext_NpcFunction *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x72;
      pUVar9 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      uVar10 = UDS_DataSetBase::GetEntityID(pUVar9);
      pFVar3->NpcEntityID = uVar10;
      pUVar8 = (this->VM_NpcFunction_TalkDialogue).field0_0x0.DebugPtr;
      local_158.Object = (FDS_ViewModelContext *)local_1a8.Object;
      local_158.SharedReferenceCount.ReferenceController =
           local_1a8.SharedReferenceCount.ReferenceController;
      if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_158);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  pUVar11 = (this->VM_NpcFunction_Frame).field0_0x0.DebugPtr;
  if (pUVar11 == (UDS_VM_NpcFunction_Frame *)0x0) {
    local_1b0 = 0;
    pUVar6 = Z_Construct_UClass_UDS_VM_NpcFunction_Frame_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_VM_NpcFunction_Frame_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_Transient;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar11 = (UDS_VM_NpcFunction_Frame *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar12 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (pUVar11 != (UDS_VM_NpcFunction_Frame *)0x0) {
      *(undefined1 *)((longlong)&pUVar11->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (UDS_VM_NpcFunction_Frame *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (this->VM_NpcFunction_Frame).field0_0x0.DebugPtr = pUVar11;
  }
  if (pUVar11 != (UDS_VM_NpcFunction_Frame *)0x0) {
    MakeContext<FDS_ViewModelContext_NpcFunction>(&local_198);
    pFVar3 = local_198.Object;
    if (local_198.Object != (FDS_ViewModelContext_NpcFunction *)0x0) {
      if ((local_198.Object == (FDS_ViewModelContext_NpcFunction *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x71;
      pUVar9 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      uVar10 = UDS_DataSetBase::GetEntityID(pUVar9);
      pFVar3->NpcEntityID = uVar10;
      pFVar3->InteractionID = this->InteractionID;
      pUVar11 = (this->VM_NpcFunction_Frame).field0_0x0.DebugPtr;
      local_148.Object = (FDS_ViewModelContext *)local_198.Object;
      local_148.SharedReferenceCount.ReferenceController =
           local_198.SharedReferenceCount.ReferenceController;
      if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar11,&local_148);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
LAB_14bf088e3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTalkDialogueLast @ 14bf0a830

void __thiscall UDS_VM_NpcFunctionMain::OnTalkDialogueLast(UDS_VM_NpcFunctionMain *this)

{
  UDS_NpcFunctionBase *pUVar1;
  
  pUVar1 = (this->CurNpcFunction).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_NpcFunctionBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bf0a83f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2d0))();
    return;
  }
  return;
}

// OnUpdateQuestData @ 14bf0ae20

void __thiscall UDS_VM_NpcFunctionMain::OnUpdateQuestData(UDS_VM_NpcFunctionMain *this,int param_1)

{
  UDS_NpcFunctionBase *pUVar1;
  
  pUVar1 = (this->CurNpcFunction).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_NpcFunctionBase *)0x0) && (pUVar1->FunctionType != None)) {
    return;
  }
  UpdateMenuSlotList_Quest(this);
  return;
}

// SetHistoryData @ 14bf14ac0

void __thiscall
UDS_VM_NpcFunctionMain::SetHistoryData
          (UDS_VM_NpcFunctionMain *this,EDS_InteractionFunctionType *param_1,
          EDS_InteractionFunctionType *param_2)

{
  bool bVar1;
  int iVar2;
  UDS_HistoryManager *pUVar3;
  UDS_HistoryBuilder *pUVar4;
  FDS_HistoryData *pFVar5;
  UDS_NPCDataSet *pUVar6;
  FDS_NpcFrameTableRow *pFVar7;
  FDS_NpcFrameTableRow *pFVar8;
  FWeakObjectPtr local_res8;
  UDS_NpcFunctionBuilder *local_res20;
  FDS_HistoryData local_2a8;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar1) {
    if (*param_1 == None) {
      local_res20 = UDS_NpcFunctionBuilder::Create(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res20 != (UDS_NpcFunctionBuilder *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res20 != (UDS_NpcFunctionBuilder *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      pUVar3 = UDS_HistoryManager::GetInst();
      if (pUVar3 != (UDS_HistoryManager *)0x0) {
        UDS_HistoryManager::CollectHistory
                  (pUVar3,(TWeakObjectPtr<UDS_HistoryBuilder,FWeakObjectPtr>)local_res8);
        pUVar4 = (UDS_HistoryBuilder *)FWeakObjectPtr::Get(&local_res8);
        pFVar5 = UDS_HistoryBuilder::Build(pUVar4,&local_2a8);
        UDS_HistoryManager::AddHistoryData(pUVar3,pFVar5);
      }
    }
    else {
      pUVar6 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      iVar2 = UDS_NPCDataSet::GetNpcFrameID(pUVar6,this->InteractionID,*param_1);
      pFVar7 = FDS_NpcFrameTableRow::Get((longlong)iVar2,true);
      pUVar6 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      iVar2 = UDS_NPCDataSet::GetNpcFrameID(pUVar6,this->InteractionID,*param_2);
      pFVar8 = FDS_NpcFrameTableRow::Get((longlong)iVar2,true);
      if (((pFVar7 != (FDS_NpcFrameTableRow *)0x0) && (pFVar8 != (FDS_NpcFrameTableRow *)0x0)) &&
         (pFVar7->HistoryGroup != pFVar8->HistoryGroup)) {
        local_res20 = UDS_NpcFunctionBuilder::Create(param_1);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res20 != (UDS_NpcFunctionBuilder *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res20);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res20 != (UDS_NpcFunctionBuilder *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res20);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
        pUVar3 = UDS_HistoryManager::GetInst();
        if (pUVar3 != (UDS_HistoryManager *)0x0) {
          UDS_HistoryManager::CollectHistory
                    (pUVar3,(TWeakObjectPtr<UDS_HistoryBuilder,FWeakObjectPtr>)local_res8);
          pUVar4 = (UDS_HistoryBuilder *)FWeakObjectPtr::Get(&local_res8);
          pFVar5 = UDS_HistoryBuilder::Build(pUVar4,&local_2a8);
          UDS_HistoryManager::AddHistoryData(pUVar3,pFVar5);
        }
      }
    }
  }
  return;
}

// SetNpcCamera_Function @ 14bf17af0

void __thiscall
UDS_VM_NpcFunctionMain::SetNpcCamera_Function
          (UDS_VM_NpcFunctionMain *this,EDS_InteractionFunctionType *param_1)

{
  TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_DataSetBase *pUVar2;
  UDS_InteractionDataSet *this_01;
  UObject *pUVar3;
  UDS_InteractionData *this_02;
  ADS_CameraManager *this_03;
  int iVar4;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  FDS_InteractionFunctionData local_48;
  
  this_00 = &this->NpcDataSet;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_DataSetBase::GetEntityID(pUVar2);
    TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_res18);
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar1) {
      this_01 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_res18);
      UDS_InteractionDataSet::GetInteractionDataByID(this_01,(int)local_res8);
      bVar1 = FWeakObjectPtr::IsValid(local_res8);
      if (bVar1) {
        if (*param_1 == None) {
          pUVar3 = FWeakObjectPtr::Get(local_res8);
          iVar4 = *(int *)&pUVar3[3].field_0x18;
        }
        else {
          this_02 = (UDS_InteractionData *)FWeakObjectPtr::Get(local_res8);
          UDS_InteractionData::GetFunctionDataByType(this_02,&local_48,*param_1);
          iVar4 = local_48.CameraID;
        }
        this_03 = ADS_CameraManager::GetInst();
        if (this_03 != (ADS_CameraManager *)0x0) {
          pUVar2 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_res20 = UDS_DataSetBase::GetEntityID(pUVar2);
          ADS_CameraManager::SetNpcTalkCamera(this_03,&local_res20,iVar4);
        }
      }
    }
  }
  return;
}

// SetNpcFunction @ 14bf17c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_NpcFunctionMain::SetNpcFunction
          (UDS_VM_NpcFunctionMain *this,EDS_InteractionFunctionType *param_1)

{
  EDS_InteractionFunctionType EVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_DataSetBase *pUVar6;
  UDS_InteractionDataSet *this_00;
  UObject *pUVar7;
  UDS_InteractionData *this_01;
  ADS_CameraManager *this_02;
  ulong64 uVar8;
  UDS_NPCDataSet *this_03;
  UDS_NpcFunctionBase *pUVar9;
  UDS_NpcFunctionItemRepair *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  FDS_HistoryData *pFVar13;
  ESlateVisibility EVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  int iVar17;
  FNameEntryId FVar18;
  uint uVar19;
  undefined1 auStackY_298 [32];
  EDS_InteractionFunctionType local_258 [8];
  FString local_250;
  FString local_238;
  EDS_InteractionFunctionType local_228 [8];
  FWeakObjectPtr local_220;
  FDS_InteractionFunctionData local_218;
  undefined1 local_1e8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  plVar15 = (longlong *)(local_1e8 + 0x50);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  bVar4 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (!bVar4) {
    return;
  }
  pUVar9 = (this->CurNpcFunction).field0_0x0.DebugPtr;
  if (pUVar9 == (UDS_NpcFunctionBase *)0x0) {
    local_258[0] = None;
  }
  else {
    local_258[0] = pUVar9->FunctionType;
    if ((local_258[0] != None) && (local_258[0] == *param_1)) {
      return;
    }
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    EVar1 = local_258[0];
    ::FString::FString(&local_238,"EDS_InteractionFunctionType");
    DS_Util::GetEnumString(&local_250,&local_238,(uint)EVar1);
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_NpcFunctionMain::SetNpcFunction",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Display,local_168.Ptr,0x14c,L"%s");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if ((FWeakObjectPtr)local_250.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
    if ((FName)local_238.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  pUVar9 = (this->CurNpcFunction).field0_0x0.DebugPtr;
  if (pUVar9 != (UDS_NpcFunctionBase *)0x0) {
    (**(code **)(pUVar9->_padding_ + 0x2c0))();
    (this->CurNpcFunction).field0_0x0.DebugPtr = (UDS_NpcFunctionBase *)0x0;
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar4) {
    pUVar6 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    UDS_DataSetBase::GetEntityID(pUVar6);
    TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_250);
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_250);
    if (bVar4) {
      this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_250);
      UDS_InteractionDataSet::GetInteractionDataByID(this_00,(int)&local_220);
      bVar4 = FWeakObjectPtr::IsValid(&local_220);
      if (bVar4) {
        if (*param_1 == None) {
          pUVar7 = FWeakObjectPtr::Get(&local_220);
          iVar17 = *(int *)&pUVar7[3].field_0x18;
        }
        else {
          this_01 = (UDS_InteractionData *)FWeakObjectPtr::Get(&local_220);
          UDS_InteractionData::GetFunctionDataByType(this_01,&local_218,*param_1);
          iVar17 = local_218.CameraID;
        }
        this_02 = ADS_CameraManager::GetInst();
        if (this_02 != (ADS_CameraManager *)0x0) {
          pUVar6 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
          local_238.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)UDS_DataSetBase::GetEntityID(pUVar6);
          ADS_CameraManager::SetNpcTalkCamera(this_02,(ulong64 *)&local_238,iVar17);
        }
      }
    }
  }
  SetHistoryData(this,local_258,param_1);
  iVar17 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Quest.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Quest.FieldName;
  if (this->VisibilityMenuSlot_Quest != Collapsed) {
    this->VisibilityMenuSlot_Quest = Collapsed;
    local_238.Data.ArrayNum = iVar17;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
  }
  iVar17 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_NormalTalk.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_NormalTalk.FieldName;
  if (this->VisibilityMenuSlot_NormalTalk != Collapsed) {
    this->VisibilityMenuSlot_NormalTalk = Collapsed;
    local_238.Data.ArrayNum = iVar17;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
  }
  if ((*param_1 == None) && (bVar4 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr), bVar4)) {
    iVar17 = this->InteractionID;
    pUVar6 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    uVar8 = UDS_DataSetBase::GetEntityID(pUVar6);
    UDS_InteractionData::GetData((ulong64)&local_250,uVar8,SUB41(iVar17,0));
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_250);
    if (!bVar4) goto LAB_14bf17fc5;
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_250);
    iVar17 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Function.BitNumber;
    FVar18 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Function.FieldName.
             ComparisonIndex.Value;
    uVar19 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Function.FieldName.Number;
    if (*(int *)(pUVar7 + 4) == 0) goto LAB_14bf17fd3;
    if (this->VisibilityMenuSlot_Function != SelfHitTestInvisible) {
      this->VisibilityMenuSlot_Function = SelfHitTestInvisible;
      goto LAB_14bf17fe3;
    }
  }
  else {
LAB_14bf17fc5:
    FVar18 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Function.FieldName.
             ComparisonIndex.Value;
    uVar19 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Function.FieldName.Number;
LAB_14bf17fd3:
    iVar17 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Function.BitNumber;
    if (this->VisibilityMenuSlot_Function != Collapsed) {
      this->VisibilityMenuSlot_Function = Collapsed;
LAB_14bf17fe3:
      local_238.Data.AllocatorInstance.Data._4_4_ = uVar19;
      local_238.Data.AllocatorInstance.Data._0_4_ = FVar18.Value;
      local_238.Data.ArrayNum = iVar17;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
    }
  }
  this_03 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
  bVar4 = UDS_NPCDataSet::HasInteractionFunctionType(this_03,NpcGift);
  iVar17 = FFieldNotificationClassDescriptor::VisibilityRelation.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::VisibilityRelation.FieldName;
  EVar14 = Collapsed;
  if (bVar4) {
    EVar14 = SelfHitTestInvisible;
  }
  if (this->VisibilityRelation != EVar14) {
    this->VisibilityRelation = EVar14;
    local_238.Data.ArrayNum = iVar17;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
  }
  iVar17 = FFieldNotificationClassDescriptor::VisibilityBackButton.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::VisibilityBackButton.FieldName;
  EVar14 = SelfHitTestInvisible;
  if (*param_1 == None) {
    EVar14 = Collapsed;
  }
  if (this->VisibilityBackButton != EVar14) {
    this->VisibilityBackButton = EVar14;
    local_238.Data.ArrayNum = iVar17;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
  }
  switch(*param_1) {
  case None:
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar11 = Z_Construct_UClass_UDS_NpcFunctionTalk_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_NpcFunctionTalk_NoRegister();
    CheckIsClassChildOf_Internal(pUVar12,pUVar11);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1e8,pUVar11);
    local_1e8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1e8._56_8_ = (UPackage *)0x0;
    local_1e8._16_4_ = 0;
    local_1e8._20_4_ = 0;
    local_1e8._24_4_ = RF_Transient;
    local_1e8._40_8_ = (UObject *)0x0;
    local_1e8[0x20] = false;
    local_1e8._8_8_ = this;
    pUVar9 = (UDS_NpcFunctionBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
    if (local_1e8._64_8_ != 0) {
      if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_1e8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_NpcFunctionBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->CurNpcFunction).field0_0x0.DebugPtr = pUVar9;
    UpdateMenuSlotList_Quest(this);
    UpdateMenuSlotList_Function(this);
    iVar17 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Quest.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Quest.FieldName;
    if (this->VisibilityMenuSlot_Quest != SelfHitTestInvisible) {
      this->VisibilityMenuSlot_Quest = SelfHitTestInvisible;
      local_238.Data.ArrayNum = iVar17;
      local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
    }
  default:
    goto switchD_14bf180bc_caseD_1;
  case RepeatQuest:
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar11 = Z_Construct_UClass_UDS_NpcFunctionQuestRepeat_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_NpcFunctionQuestRepeat_NoRegister();
    break;
  case Shop:
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar11 = Z_Construct_UClass_UDS_NpcFunctionShop_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_NpcFunctionShop_NoRegister();
    break;
  case ReturnHomeRegistration:
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar11 = Z_Construct_UClass_UDS_NpcFunctionRetrunHome_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_NpcFunctionRetrunHome_NoRegister();
    break;
  case NormalTalk:
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar11 = Z_Construct_UClass_UDS_NpcFunctionNormalTalk_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_NpcFunctionNormalTalk_NoRegister();
    CheckIsClassChildOf_Internal(pUVar12,pUVar11);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1e8,pUVar11);
    local_1e8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1e8._56_8_ = (UPackage *)0x0;
    local_1e8._16_4_ = 0;
    local_1e8._20_4_ = 0;
    local_1e8._24_4_ = RF_Transient;
    local_1e8._40_8_ = (UObject *)0x0;
    local_1e8[0x20] = false;
    local_1e8._8_8_ = this;
    pUVar9 = (UDS_NpcFunctionBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
    if (local_1e8._64_8_ != 0) {
      if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_1e8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_NpcFunctionBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->CurNpcFunction).field0_0x0.DebugPtr = pUVar9;
    UpdateMenuSlotList_NormalTalk(this);
    iVar17 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_NormalTalk.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_NormalTalk.FieldName;
    if (this->VisibilityMenuSlot_NormalTalk != SelfHitTestInvisible) {
      this->VisibilityMenuSlot_NormalTalk = SelfHitTestInvisible;
      local_238.Data.ArrayNum = iVar17;
      local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
    }
    goto switchD_14bf180bc_caseD_1;
  case NpcGift:
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar11 = Z_Construct_UClass_UDS_NpcFunctionGift_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_NpcFunctionGift_NoRegister();
    break;
  case Quest:
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar11 = Z_Construct_UClass_UDS_NpcFunctionQuest_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_NpcFunctionQuest_NoRegister();
    break;
  case MountManagement:
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar11 = Z_Construct_UClass_UDS_NpcFunctionMountManagement_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_NpcFunctionMountManagement_NoRegister();
    break;
  case Warehouse:
  case ItemDismantle:
  case ItemEnchant:
    pUVar10 = (UDS_NpcFunctionItemRepair *)
              UDS_NpcFunctionBase::CreateNpcFunction<UDS_NpcFunctionItemDismantle>((UObject *)this);
    goto LAB_14bf1847e;
  case MountLostReclaim:
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar11 = Z_Construct_UClass_UDS_NpcFunctionMountLostReclaim_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_NpcFunctionMountLostReclaim_NoRegister();
    break;
  case ItemCraft:
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar11 = Z_Construct_UClass_UDS_NpcFunctionItemCraft_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_NpcFunctionItemCraft_NoRegister();
    break;
  case ItemRepair:
  case ItemRepairCamp:
    pUVar10 = UDS_NpcFunctionBase::CreateNpcFunction<UDS_NpcFunctionItemRepair>((UObject *)this);
    goto LAB_14bf1847e;
  }
  CheckIsClassChildOf_Internal(pUVar12,pUVar11);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1e8,pUVar11);
  local_1e8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1e8._56_8_ = (UPackage *)0x0;
  local_1e8._16_4_ = 0;
  local_1e8._20_4_ = 0;
  local_1e8._24_4_ = RF_Transient;
  local_1e8._40_8_ = (UObject *)0x0;
  local_1e8[0x20] = false;
  local_1e8._8_8_ = this;
  pUVar10 = (UDS_NpcFunctionItemRepair *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
  if (local_1e8._64_8_ != 0) {
    if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_1e8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
LAB_14bf1847e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UDS_NpcFunctionItemRepair *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->CurNpcFunction).field0_0x0.DebugPtr = (UDS_NpcFunctionBase *)pUVar10;
switchD_14bf180bc_caseD_1:
  pUVar9 = (this->CurNpcFunction).field0_0x0.DebugPtr;
  if (pUVar9 != (UDS_NpcFunctionBase *)0x0) {
    (**(code **)(pUVar9->_padding_ + 0x2b8))
              (pUVar9,(this->NpcDataSet).WeakPtr,this->InteractionID,*param_1);
    EVar1 = *param_1;
    if (*(int *)&(this->HistoryDataMap).field_0x8 != *(int *)&(this->HistoryDataMap).field_0x34) {
      puVar16 = *(undefined1 **)&(this->HistoryDataMap).field_0x40;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = &(this->HistoryDataMap).field_0x38;
      }
      iVar17 = *(int *)(puVar16 +
                       ((ulonglong)(*(int *)&(this->HistoryDataMap).field_0x48 - 1) &
                       (ulonglong)EVar1) * 4);
      if (iVar17 != -1) {
        do {
          if (*(EDS_InteractionFunctionType *)
               ((longlong)iVar17 * 0x298 + *(longlong *)&this->HistoryDataMap) == EVar1) {
            pUVar9 = (this->CurNpcFunction).field0_0x0.DebugPtr;
            pcVar2 = *(code **)(pUVar9->_padding_ + 0x2c8);
            pFVar13 = TMapBase<enum_EDS_InteractionFunctionType,FDS_HistoryData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InteractionFunctionType,FDS_HistoryData,0>_>
                      ::FindChecked(&this->HistoryDataMap,EVar1);
            (*pcVar2)(pUVar9,pFVar13);
            local_228[0] = *param_1;
            if (*(int *)&(this->HistoryDataMap).field_0x8 ==
                *(int *)&(this->HistoryDataMap).field_0x34) {
              return;
            }
            TSet<TTuple<enum_EDS_InteractionFunctionType,FDS_HistoryData>,TDefaultMapHashableKeyFuncs<enum_EDS_InteractionFunctionType,FDS_HistoryData,0>,FDefaultSetAllocator>
            ::RemoveImpl<enum_EDS_InteractionFunctionType>
                      (&this->HistoryDataMap,(uint)local_228[0],local_228);
            return;
          }
          iVar17 = *(int *)((longlong)iVar17 * 0x298 + 0x290 + *(longlong *)&this->HistoryDataMap);
        } while (iVar17 != -1);
      }
    }
  }
  return;
}

// SetNpcTitle @ 14bf18670

void __thiscall
UDS_VM_NpcFunctionMain::SetNpcTitle
          (UDS_VM_NpcFunctionMain *this,EDS_InteractionFunctionType *param_1)

{
  FName FVar1;
  bool bVar2;
  int iVar3;
  UDS_DataSetBase *this_00;
  FDS_NpcBaseTableRow *this_01;
  UDS_NPCDataSet *this_02;
  long64 lVar4;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.TimeExpressionType = None;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  bVar2 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar2) {
    if (*param_1 == None) {
      this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      iVar3 = UDS_DataSetBase::GetEntityTableID(this_00);
      this_01 = FDS_NpcBaseTableRow::GetRef((longlong)iVar3,true);
      bVar2 = FDS_NpcBaseTableRow::IsValid(this_01);
      if (bVar2) {
        FDS_Text::SetTextFromStringID(&local_58,&this_01->ID_NameTitleSid);
      }
    }
    else {
      this_02 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      lVar4 = UDS_NPCDataSet::GetFunctionNameID(this_02,this->InteractionID,*param_1);
      FDS_Text::SetTextFromStringTable(&local_58,StringBase,lVar4);
    }
  }
  iVar3 = FFieldNotificationClassDescriptor::NpcTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::NpcTitle.FieldName;
  FDS_Text::operator=(&this->NpcTitle,&local_58);
  local_68 = FVar1;
  local_60 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  iVar3 = FFieldNotificationClassDescriptor::bUseNpcTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::bUseNpcTitle.FieldName;
  bVar2 = FDS_Text::IsEmpty(&local_58);
  if (this->bUseNpcTitle != !bVar2) {
    this->bUseNpcTitle = !bVar2;
    local_68 = FVar1;
    local_60 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// SetVM_NPCData @ 14bf1ac60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_NpcFunctionMain::SetVM_NPCData(UDS_VM_NpcFunctionMain *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_NPCData *pUVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_00;
  UDS_DataSetBase *this_01;
  ulong64 uVar8;
  longlong *plVar9;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *pFVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_c0;
  TSharedPtr<FDS_ViewModelContext,1> local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar10 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_NPCData).field0_0x0.DebugPtr == (UDS_VM_NPCData *)0x0) {
    local_c8 = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_NPCData_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_VM_NPCData_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_NPCData *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar9 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_NPCData *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_NPCData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_NPCData).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_NPCData *)0x0) {
      return;
    }
  }
  pFVar6 = ::operator_new(0x30);
  pFVar11 = pFVar10;
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar6->field_0x1c = 0;
    *(undefined8 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
    ((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
    *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
    (pFVar6->ViewModelName).ComparisonIndex = 0;
    (pFVar6->ViewModelName).Number = 0;
    pFVar6->ViewModelTemplateKey = None;
    pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_NPC__6B_;
    pFVar11 = pFVar6;
  }
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_NPC__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar11;
    pFVar10 = pFVar6;
  }
  if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar7 = FDS_ViewModelContext_NPC::StaticStruct();
  *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar7;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_c0.Object = pFVar11;
    local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.SharedReferenceCount.ReferenceController);
  }
  pFVar11->ViewModelTemplateKey = Data_NPC;
  this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
  uVar8 = UDS_DataSetBase::GetEntityID(this_01);
  pFVar11[1]._padding_ = uVar8;
  pUVar5 = (this->VM_NPCData).field0_0x0.DebugPtr;
  if (pFVar10 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar10->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_b0.Object = pFVar11;
  local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return;
}

// SetVM_NpcFunction_Frame @ 14bf1aed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_NpcFunctionMain::SetVM_NpcFunction_Frame(UDS_VM_NpcFunctionMain *this)

{
  FName FVar1;
  code *pcVar2;
  FDS_ViewModelContext_NpcFunction *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_NpcFunction_Frame *pUVar7;
  UDS_DataSetBase *this_00;
  ulong64 uVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  FName local_c8;
  TSharedPtr<FDS_ViewModelContext_NpcFunction,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar1 = (FName)(this->VM_NpcFunction_Frame).field0_0x0.DebugPtr;
  if (FVar1 == (FName)0x0) {
    local_c8 = FVar1;
    pUVar5 = Z_Construct_UClass_UDS_VM_NpcFunction_Frame_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_VM_NpcFunction_Frame_NoRegister();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar7 = (UDS_VM_NpcFunction_Frame *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar9 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_NpcFunction_Frame *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_VM_NpcFunction_Frame *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_NpcFunction_Frame).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UDS_VM_NpcFunction_Frame *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_NpcFunction>(&local_b8);
  pFVar3 = local_b8.Object;
  if (local_b8.Object != (FDS_ViewModelContext_NpcFunction *)0x0) {
    if ((local_b8.Object == (FDS_ViewModelContext_NpcFunction *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x71;
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    uVar8 = UDS_DataSetBase::GetEntityID(this_00);
    pFVar3->NpcEntityID = uVar8;
    pFVar3->InteractionID = this->InteractionID;
    pUVar7 = (this->VM_NpcFunction_Frame).field0_0x0.DebugPtr;
    local_a8.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetVM_NpcFunction_TalkDialogue @ 14bf1b0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_NpcFunctionMain::SetVM_NpcFunction_TalkDialogue(UDS_VM_NpcFunctionMain *this)

{
  FName FVar1;
  code *pcVar2;
  FDS_ViewModelContext_NpcFunction *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_NpcFunction_TalkDialogue *pUVar7;
  UDS_DataSetBase *this_00;
  ulong64 uVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  FName local_c8;
  TSharedPtr<FDS_ViewModelContext_NpcFunction,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar1 = (FName)(this->VM_NpcFunction_TalkDialogue).field0_0x0.DebugPtr;
  if (FVar1 == (FName)0x0) {
    local_c8 = FVar1;
    pUVar5 = Z_Construct_UClass_UDS_VM_NpcFunction_TalkDialogue_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_VM_NpcFunction_TalkDialogue_NoRegister();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar7 = (UDS_VM_NpcFunction_TalkDialogue *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar9 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_NpcFunction_TalkDialogue *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_VM_NpcFunction_TalkDialogue *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_NpcFunction_TalkDialogue).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UDS_VM_NpcFunction_TalkDialogue *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_NpcFunction>(&local_b8);
  pFVar3 = local_b8.Object;
  if (local_b8.Object != (FDS_ViewModelContext_NpcFunction *)0x0) {
    if ((local_b8.Object == (FDS_ViewModelContext_NpcFunction *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x72;
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    uVar8 = UDS_DataSetBase::GetEntityID(this_00);
    pFVar3->NpcEntityID = uVar8;
    pUVar7 = (this->VM_NpcFunction_TalkDialogue).field0_0x0.DebugPtr;
    local_a8.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetVM_NpcRelationData @ 14bf1b2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_NpcFunctionMain::SetVM_NpcRelationData(UDS_VM_NpcFunctionMain *this)

{
  FName FVar1;
  code *pcVar2;
  FDS_ViewModelContext_NpcRelationData *pFVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UDS_VM_NpcRelationData *pUVar8;
  UDS_DataSetBase *this_00;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  FName local_c8;
  TSharedPtr<FDS_ViewModelContext_NpcRelationData,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar1 = (FName)(this->VM_NPCRelationData).field0_0x0.DebugPtr;
  if (FVar1 == (FName)0x0) {
    local_c8 = FVar1;
    pUVar6 = Z_Construct_UClass_UDS_VM_NpcRelationData_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_VM_NpcRelationData_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar6);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar8 = (UDS_VM_NpcRelationData *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar9 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (pUVar8 != (UDS_VM_NpcRelationData *)0x0) {
      *(undefined1 *)((longlong)&pUVar8->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_VM_NpcRelationData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->VM_NPCRelationData).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 == (UDS_VM_NpcRelationData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_NpcRelationData>(&local_b8);
  pFVar3 = local_b8.Object;
  if (local_b8.Object != (FDS_ViewModelContext_NpcRelationData *)0x0) {
    if ((local_b8.Object == (FDS_ViewModelContext_NpcRelationData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x1c7;
    pFVar3->PlayerEntityID = UDS_PlayerData::MainPlayerEntityID;
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    iVar5 = UDS_DataSetBase::GetEntityTableID(this_00);
    pFVar3->NpcTID = iVar5;
    pUVar8 = (this->VM_NPCRelationData).field0_0x0.DebugPtr;
    local_a8.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetVisibilityBackButton @ 14bf1bcd0

void __thiscall
UDS_VM_NpcFunctionMain::SetVisibilityBackButton
          (UDS_VM_NpcFunctionMain *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityBackButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityBackButton.FieldName;
  if (this->VisibilityBackButton != *param_1) {
    this->VisibilityBackButton = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityMenuSlot_Function @ 14bf1be50

void __thiscall
UDS_VM_NpcFunctionMain::SetVisibilityMenuSlot_Function
          (UDS_VM_NpcFunctionMain *this,EDS_InteractionFunctionType *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this_00;
  ulong64 uVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res10;
  FName local_18;
  int local_10;
  
  if ((*param_1 == None) && (bVar2 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr), bVar2)) {
    iVar1 = this->InteractionID;
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    uVar3 = UDS_DataSetBase::GetEntityID(this_00);
    UDS_InteractionData::GetData((ulong64)&local_res10,uVar3,SUB41(iVar1,0));
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if ((bVar2) &&
       (pUVar4 = FWeakObjectPtr::Get(&local_res10),
       local_10 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Function.BitNumber,
       local_18 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Function.FieldName,
       *(int *)(pUVar4 + 4) != 0)) {
      if (this->VisibilityMenuSlot_Function == SelfHitTestInvisible) {
        return;
      }
      this->VisibilityMenuSlot_Function = SelfHitTestInvisible;
      goto LAB_14bf1bf0d;
    }
  }
  local_10 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Function.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Function.FieldName;
  if (this->VisibilityMenuSlot_Function == Collapsed) {
    return;
  }
  this->VisibilityMenuSlot_Function = Collapsed;
LAB_14bf1bf0d:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVisibilityMenuSlot_NormalTalk @ 14bf1bf40

void __thiscall
UDS_VM_NpcFunctionMain::SetVisibilityMenuSlot_NormalTalk
          (UDS_VM_NpcFunctionMain *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_NormalTalk.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_NormalTalk.FieldName;
  if (this->VisibilityMenuSlot_NormalTalk != *param_1) {
    this->VisibilityMenuSlot_NormalTalk = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityMenuSlot_Quest @ 14bf1bf90

void __thiscall
UDS_VM_NpcFunctionMain::SetVisibilityMenuSlot_Quest
          (UDS_VM_NpcFunctionMain *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Quest.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityMenuSlot_Quest.FieldName;
  if (this->VisibilityMenuSlot_Quest != *param_1) {
    this->VisibilityMenuSlot_Quest = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityRelation @ 14bf1c030

void __thiscall
UDS_VM_NpcFunctionMain::SetVisibilityRelation
          (UDS_VM_NpcFunctionMain *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityRelation.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityRelation.FieldName;
  if (this->VisibilityRelation != *param_1) {
    this->VisibilityRelation = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bf1e5f0

void __thiscall UDS_VM_NpcFunctionMain::UnbindModel(UDS_VM_NpcFunctionMain *this)

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

// UpdateMenuSlotList_Function @ 14bf21210

void __thiscall UDS_VM_NpcFunctionMain::UpdateMenuSlotList_Function(UDS_VM_NpcFunctionMain *this)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  FDS_ViewModelContext_NpcFunctionMenuSlot *pFVar4;
  bool bVar5;
  UDS_DataSetBase *pUVar6;
  ulong64 uVar7;
  UObject *pUVar8;
  UDS_UserObjectListItem *this_00;
  FName *pFVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  FSharedReferencer<1> FVar12;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  FWeakObjectPtr local_res18;
  UDS_UserObjectListItem *local_res20;
  FName local_b8 [2];
  FName local_a8;
  int local_a0;
  TSharedPtr<FDS_ViewModelContext_NpcFunctionMenuSlot,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar5) {
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_MenuSlotFunction);
    iVar1 = this->InteractionID;
    pUVar6 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    uVar7 = UDS_DataSetBase::GetEntityID(pUVar6);
    UDS_InteractionData::GetData((ulong64)&local_res18,uVar7,SUB41(iVar1,0));
    bVar5 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar5) {
      pUVar8 = FWeakObjectPtr::Get(&local_res18);
      iVar1 = *(int *)(pUVar8 + 4);
      puVar11 = *(undefined4 **)&pUVar8[3].field_0x20;
      puVar10 = puVar11 + (longlong)iVar1 * 10;
      local_res10 = puVar10;
      while( true ) {
        if (*(int *)(pUVar8 + 4) != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FDS_InteractionFunctionData_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (puVar11 == puVar10) break;
        local_68 = *(undefined8 *)(puVar11 + 4);
        uStack_60 = *(undefined8 *)(puVar11 + 6);
        uVar2 = *puVar11;
        local_58 = *(undefined8 *)(puVar11 + 8);
        if ((EDS_InteractionFunctionType)uVar2 != Quest) {
          this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          puVar10 = local_res10;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (this_00 != (UDS_UserObjectListItem *)0x0) goto LAB_14bf2135c;
          }
          else if (this_00 != (UDS_UserObjectListItem *)0x0) {
            UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14bf2135c:
            MakeContext<FDS_ViewModelContext_NpcFunctionMenuSlot>(&local_98);
            pFVar4 = local_98.Object;
            FVar12.ReferenceController = local_98.SharedReferenceCount.ReferenceController;
            if (local_98.Object != (FDS_ViewModelContext_NpcFunctionMenuSlot *)0x0) {
              if ((local_98.Object == (FDS_ViewModelContext_NpcFunctionMenuSlot *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(undefined4 *)&pFVar4->_padding_ = 0x74;
              pFVar9 = ::FName::FName(local_b8,"DS_VM_NpcFunction_MenuSlotBase");
              pFVar4->_padding_ = (longlong)*pFVar9;
              pUVar6 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
              uVar7 = UDS_DataSetBase::GetEntityID(pUVar6);
              FVar12.ReferenceController = local_98.SharedReferenceCount.ReferenceController;
              pFVar4->NpcEntityID = uVar7;
              pFVar4->InteractionID = this->InteractionID;
              local_88[0].Object = (FDS_ViewModelContext *)local_98.Object;
              local_88[0].SharedReferenceCount.ReferenceController =
                   local_98.SharedReferenceCount.ReferenceController;
              pFVar4->FunctionType = (EDS_InteractionFunctionType)uVar2;
              if (local_98.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(this_00,local_88);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            local_res20 = this_00;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField_MenuSlotFunction,
                       (TObjectPtr<UDS_UserObjectListItem>)&local_res20);
            puVar10 = local_res10;
          }
        }
        puVar11 = puVar11 + 10;
      }
      local_a0 = FFieldNotificationClassDescriptor::EntryBindingEventField_MenuSlotFunction.
                 BitNumber;
      local_a8 = FFieldNotificationClassDescriptor::EntryBindingEventField_MenuSlotFunction.
                 FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    }
  }
  return;
}

// UpdateMenuSlotList_NormalTalk @ 14bf214d0

void __thiscall UDS_VM_NpcFunctionMain::UpdateMenuSlotList_NormalTalk(UDS_VM_NpcFunctionMain *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FDS_ViewModelContext_NpcFunctionMenuSlot *pFVar4;
  bool bVar5;
  int iVar6;
  UDS_QuestManager *this_00;
  UDS_DataSetBase *pUVar7;
  UDS_UserObjectListItem *this_01;
  FName *pFVar8;
  ulong64 uVar9;
  ForAnyElementType FVar10;
  FSharedReferencer<1> FVar11;
  undefined1 local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  FName local_res18;
  FName local_78;
  int local_70;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FDS_ViewModelContext_NpcFunctionMenuSlot,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar5) {
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_MenuSlotNormalTalk);
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      pUVar7 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      iVar6 = UDS_DataSetBase::GetEntityTableID(pUVar7);
      UDS_QuestManager::GetNpcNormalTalkIDs(this_00,&local_68,iVar6);
      iVar6 = local_68.ArrayNum;
      pFVar1 = local_68.AllocatorInstance.Data + (longlong)iVar6 * 4;
      FVar10.Data = local_68.AllocatorInstance.Data;
      do {
        if (local_68.ArrayNum != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (FVar10.Data == pFVar1) {
          if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.AllocatorInstance.Data);
          }
          break;
        }
        iVar2 = *(int *)FVar10.Data;
        this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf216c6;
        }
        else {
          if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf216c6:
            if (local_68.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_68.AllocatorInstance.Data);
            return;
          }
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        MakeContext<FDS_ViewModelContext_NpcFunctionMenuSlot>(&local_58);
        pFVar4 = local_58.Object;
        FVar11.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
        if (local_58.Object != (FDS_ViewModelContext_NpcFunctionMenuSlot *)0x0) {
          if ((local_58.Object == (FDS_ViewModelContext_NpcFunctionMenuSlot *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined4 *)&pFVar4->_padding_ = 0x75;
          pFVar8 = ::FName::FName(&local_res18,"DS_VM_NpcFunction_MenuSlotBase");
          pFVar4->_padding_ = (longlong)*pFVar8;
          pUVar7 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
          uVar9 = UDS_DataSetBase::GetEntityID(pUVar7);
          FVar11.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
          pFVar4->NpcEntityID = uVar9;
          pFVar4->Value = iVar2;
          local_48.Object = (FDS_ViewModelContext *)local_58.Object;
          local_48.SharedReferenceCount.ReferenceController =
               local_58.SharedReferenceCount.ReferenceController;
          pFVar4->InteractionID = this->InteractionID;
          if (local_58.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_01,&local_48);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar11.ReferenceController);
        local_res10 = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField_MenuSlotNormalTalk,
                   (TObjectPtr<UDS_UserObjectListItem>)&local_res10);
        FVar10.Data = FVar10.Data + 4;
      } while( true );
    }
    local_70 = FFieldNotificationClassDescriptor::EntryBindingEventField_MenuSlotNormalTalk.
               BitNumber;
    local_78 = FFieldNotificationClassDescriptor::EntryBindingEventField_MenuSlotNormalTalk.
               FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  return;
}

// UpdateMenuSlotList_Quest @ 14bf21750

void __thiscall UDS_VM_NpcFunctionMain::UpdateMenuSlotList_Quest(UDS_VM_NpcFunctionMain *this)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  FDS_ViewModelContext_NpcFunctionMenuSlot *pFVar4;
  bool bVar5;
  UDS_NPCDataSet *this_00;
  UDS_QuestManager *this_01;
  UDS_DataSetBase *pUVar6;
  ulong64 uVar7;
  UDS_UserObjectListItem *this_02;
  FName *pFVar8;
  int iVar9;
  ForAnyElementType FVar10;
  FSharedReferencer<1> FVar11;
  undefined1 local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  FScriptContainerElement *local_res18;
  FName local_res20;
  FName local_88;
  int local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext_NpcFunctionMenuSlot,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if (bVar5) {
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_MenuSlotQuest);
    this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    bVar5 = UDS_NPCDataSet::HasInteractionFunctionType(this_00,Quest);
    if ((bVar5) && (this_01 = UDS_QuestManager::GetInst(), this_01 != (UDS_QuestManager *)0x0)) {
      pUVar6 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      uVar7 = UDS_DataSetBase::GetEntityID(pUVar6);
      UDS_QuestManager::GetNpcActiveQuestIDs(this_01,&local_78,uVar7,false);
      iVar9 = local_78.ArrayNum;
      local_res18 = local_78.AllocatorInstance.Data + (longlong)iVar9 * 4;
      FVar10.Data = local_78.AllocatorInstance.Data;
      do {
        pFVar3 = local_res18;
        if (local_78.ArrayNum != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (FVar10.Data == pFVar3) {
          if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.AllocatorInstance.Data);
          }
          break;
        }
        iVar1 = *(int *)FVar10.Data;
        this_02 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_02 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf2197b;
        }
        else {
          if (this_02 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf2197b:
            if (local_78.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_78.AllocatorInstance.Data);
            return;
          }
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        MakeContext<FDS_ViewModelContext_NpcFunctionMenuSlot>(&local_68);
        pFVar4 = local_68.Object;
        FVar11.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
        if (local_68.Object != (FDS_ViewModelContext_NpcFunctionMenuSlot *)0x0) {
          if ((local_68.Object == (FDS_ViewModelContext_NpcFunctionMenuSlot *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)&pFVar4->_padding_ = 0x73;
          pFVar8 = ::FName::FName(&local_res20,"DS_VM_NpcFunction_MenuSlotBase");
          pFVar4->_padding_ = (longlong)*pFVar8;
          pUVar6 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
          uVar7 = UDS_DataSetBase::GetEntityID(pUVar6);
          FVar11.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
          pFVar4->NpcEntityID = uVar7;
          pFVar4->Value = iVar1;
          local_58.Object = (FDS_ViewModelContext *)local_68.Object;
          local_58.SharedReferenceCount.ReferenceController =
               local_68.SharedReferenceCount.ReferenceController;
          pFVar4->InteractionID = this->InteractionID;
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_02,&local_58);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar11.ReferenceController);
        local_res10 = this_02;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField_MenuSlotQuest,
                   (TObjectPtr<UDS_UserObjectListItem>)&local_res10);
        FVar10.Data = FVar10.Data + 4;
      } while( true );
    }
    local_80 = FFieldNotificationClassDescriptor::EntryBindingEventField_MenuSlotQuest.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::EntryBindingEventField_MenuSlotQuest.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  return;
}

