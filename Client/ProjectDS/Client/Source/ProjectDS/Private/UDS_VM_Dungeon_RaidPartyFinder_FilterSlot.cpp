// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetEventMouseEnter_WrapperImpl @ 14b636e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::SetEventMouseEnter_WrapperImpl
          (void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FGeometry *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_WindowManager *this;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_2d8 [32];
  float fStack_2a8;
  float fStack_2a4;
  undefined1 auStack_298 [8];
  FDelegateAllocation FStack_290;
  FWeakObjectPtr FStack_280;
  FDeprecateSlateVector2D FStack_278;
  UDS_WindowManager *pUStack_270;
  void *apvStack_268 [2];
  code *pcStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  TVector2<double>_u_0 TStack_248;
  FDestructionSentinel FStack_238;
  FDestructionSentinel FStack_220;
  FDelegateAllocation *pFStack_208;
  TVector2<double>_u_0 TStack_200;
  TVector2<double> TStack_1f0;
  FDeprecateSlateVector2D FStack_1e0;
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> TStack_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_188;
  ulonglong uStack_68;
  
  uStack_68 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pUStack_270 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_270);
  }
  FStack_280.ObjectIndex = 0;
  FStack_280.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_270);
  }
  FWeakObjectPtr::operator=(&FStack_280,(FObjectPtr)&pUStack_270);
  bVar2 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&FStack_280,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_188,"UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OnEventMouseEnter",0x3c,Yes
                );
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_188.Ptr,0x41,L"windowManager is nullptr.");
      if ((void *)TStack_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_188._padding_);
      }
    }
  }
  else if (*(UWidget **)param_2 != (UWidget *)0x0) {
    pFVar4 = UWidget::GetCachedGeometry(*(UWidget **)param_2);
    fStack_1c0 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
    fStack_1bc = (pFVar4->AccumulatedRenderTransform).M.M[1][0];
    fStack_1b8 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
    fStack_1b4 = (pFVar4->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    uStack_1b0 = *(undefined8 *)
                  ((longlong)&(pFVar4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    fVar12 = (float)uStack_1b0;
    FStack_278 = pFVar4->Size;
    uStack_1d8 = *(undefined8 *)&pFVar4->Scale;
    fStack_1d0 = (pFVar4->AbsolutePosition).field0_0x0._s_0.Y;
    fStack_1cc = (pFVar4->Position).field0_0x0._s_0.X;
    fStack_1c8 = (pFVar4->Position).field0_0x0._s_0.Y;
    fStack_1c4 = (pFVar4->AccumulatedRenderTransform).M.M[0][0];
    fStack_2a8 = FStack_278._0_4_;
    fStack_2a4 = FStack_278._4_4_;
    fVar10 = fStack_1bc * fStack_2a4 * __real_3f000000 + fStack_1c4 * fStack_2a8 * __real_3f000000 +
             fStack_1b4;
    fVar9 = fStack_1b8 * fStack_2a4 * __real_3f000000;
    fVar11 = fStack_1c0 * fStack_2a8 * __real_3f000000;
    fStack_2a4 = fStack_2a4 * __real_3f000000;
    fStack_2a8 = fStack_2a8 * __real_3f000000;
    FStack_1e0 = FStack_278;
    pUVar5 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (pUVar5 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7206911494410207310>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DungeonFinder\\DS_VM_Dungeon_RaidPartyFinder_FilterSlot.cpp"
                         ,0x4e,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      TStack_248._s_0.X = (double)fVar10;
      TStack_248._s_0.Y = (double)(fVar9 + fVar11 + fVar12);
      USlateBlueprintLibrary::AbsoluteToViewport
                (pUVar5,(TVector2<double> *)&TStack_248._s_0,&TStack_1f0,
                 (TVector2<double> *)&TStack_200._s_0);
      uStack_250 = 0;
      pcStack_258 = OpenDungeonTooltip;
      uStack_24c = TStack_1f0.field0_0x0._12_4_;
      auStack_298 = (undefined1  [8])0x0;
      FStack_290.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_290.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_298,
                 (FWriteAccessScope *)&FStack_220);
      pFStack_208 = &FStack_290;
      puVar6 = UE::Core::Private::DelegateAllocate(0x48,&FStack_290);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
        ;
        puVar6[1] = TStack_200._s_0.X;
        puVar6[2] = TStack_200._s_0.Y;
        puVar6[3] = (double)fStack_2a8;
        puVar6[4] = (double)fStack_2a4;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[5] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_FilterSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar6[6] = 0;
        apvStack_268[0] = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 6),(FObjectPtr)apvStack_268);
        puVar6[7] = pcStack_258;
        puVar6[8] = CONCAT44(uStack_24c,uStack_250);
      }
      if (FStack_220.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_220.Accessor,&FStack_220);
      }
      this = (UDS_WindowManager *)FWeakObjectPtr::Get(&FStack_280);
      pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         (&TStack_1a8,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          auStack_298);
      UDS_WindowManager::OpenWindow(this,RaidPartyDungeonTooltip,pTVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_298,
                 (FWriteAccessScope *)&FStack_238);
      if ((FStack_290.DelegateSize != 0) &&
         (FStack_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_290.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_290,0,0,0x10);
        FStack_290.DelegateSize = 0;
      }
      if (FStack_238.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_238.Accessor,&FStack_238);
      }
      if (FStack_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_290.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_298);
    }
  }
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b636e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::SetEventMouseLeave_WrapperImpl
          (void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr FStack_158;
  float afStack_150 [2];
  UDS_WindowManager *apUStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  apUStack_148[0] = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (apUStack_148[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)apUStack_148[0]);
  }
  FStack_158.ObjectIndex = 0;
  FStack_158.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (apUStack_148[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)apUStack_148[0]);
  }
  FWeakObjectPtr::operator=(&FStack_158,(FObjectPtr)apUStack_148);
  bVar1 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&FStack_158,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OnEventMouseLeave",0x3c,Yes
                );
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x5f,L"windowManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    this = (UDS_WindowManager *)FWeakObjectPtr::Get(&FStack_158);
    afStack_150[0] = 0.0;
    apUStack_148[0] = (UDS_WindowManager *)((ulonglong)apUStack_148[0] & 0xffffffff00000000);
    UDS_WindowManager::CloseWindow(this,RaidPartyDungeonTooltip,(uint *)apUStack_148,afStack_150);
  }
  return;
}

// SetClickFilterSlot_WrapperImpl @ 14b636ea0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::SetClickFilterSlot_WrapperImpl
          (void *param_1,void *param_2)

{
  char cVar1;
  FName FVar2;
  int iVar3;
  UDS_DungeonEvent *pUVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar3 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  cVar1 = *(char *)((longlong)param_1 + 0x2d8);
  if ((bool)cVar1 != (cVar1 == '\0')) {
    *(bool *)((longlong)param_1 + 0x2d8) = cVar1 == '\0';
    iStack_10 = iVar3;
    FStack_18 = FVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  pUVar4 = UDS_DungeonEvent::GetEvent();
  if (pUVar4 != (UDS_DungeonEvent *)0x0) {
    FDS_EventDelegate<int_const_,bool_const_>::Broadcast
              (&pUVar4->OnClickedFinderDungeon,*(int *)((longlong)param_1 + 0x330),
               *(bool *)((longlong)param_1 + 0x2d8));
    return;
  }
  return;
}

// SetIsSelected_WrapperImpl @ 14b636eb0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::SetIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  if (*(char *)((longlong)param_1 + 0x2d8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x2d8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetDungeonNameText_WrapperImpl @ 14b636ec0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::SetDungeonNameText_WrapperImpl
          (void *param_1,void *param_2)

{
  int iVar1;
  FDS_TextFormatArg *pFVar2;
  FDS_Text local_58;
  
  local_58.StringTableType = *(EDS_StringTableType *)param_2;
  local_58.StringTableID = *(long64 *)((longlong)param_2 + 8);
  local_58.StringEnumTableNameID = *(FName *)((longlong)param_2 + 0x10);
  local_58.DateTime.Ticks = *(long64 *)((longlong)param_2 + 0x18);
  local_58.TimeSpan.Ticks = *(long64 *)((longlong)param_2 + 0x20);
  local_58.TimeExpressionType = *(EDS_TimeExpression *)((longlong)param_2 + 0x28);
  local_58.IsExpression = *(bool *)((longlong)param_2 + 0x2c);
  ::FString::FString(&local_58.UniqueString,(FString *)((longlong)param_2 + 0x30));
  iVar1 = *(int *)((longlong)param_2 + 0x48);
  pFVar2 = *(FDS_TextFormatArg **)((longlong)param_2 + 0x40);
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_58.FormatArgs.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar1,0,&local_58.FormatArgs.AllocatorInstance,iVar1,
               &local_58.FormatArgs.ArrayMax);
    ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
              (local_58.FormatArgs.AllocatorInstance.Data,pFVar2,iVar1);
  }
  SetDungeonNameText(param_1,&local_58);
  return;
}

// StaticClass @ 14b636fb0

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_FilterSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_FilterSlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_FilterSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_FilterSlot,0x338,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_FilterSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_FilterSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_FilterSlot.InnerSingleton;
}

// UDS_VM_Dungeon_RaidPartyFinder_FilterSlot @ 14b63bfb0

UDS_VM_Dungeon_RaidPartyFinder_FilterSlot * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::UDS_VM_Dungeon_RaidPartyFinder_FilterSlot
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_FilterSlot__6B_;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeave);
  (this->ClickFilterSlot)._padding_ = '\0';
  (this->ClickFilterSlot).bIsCustomSelected = false;
  (this->ClickFilterSlot).bIsLacked = false;
  (this->ClickFilterSlot).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickFilterSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickFilterSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickFilterSlot).Delegate.field_0x10 = 0;
  (this->VM_DungeonFilterCheckBox).field0_0x0.DebugPtr = (UDS_VM_Common_Check *)0x0;
  (this->DungeonNameText).StringTableType = None;
  (this->DungeonNameText).StringTableID = 0;
  (this->DungeonNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DungeonNameText).StringEnumTableNameID.Number = 0;
  (this->DungeonNameText).DateTime.Ticks = 0;
  (this->DungeonNameText).TimeSpan.Ticks = 0;
  (this->DungeonNameText).TimeExpressionType = None;
  (this->DungeonNameText).IsExpression = false;
  (this->DungeonNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonNameText).UniqueString.Data.ArrayNum = 0;
  (this->DungeonNameText).UniqueString.Data.ArrayMax = 0;
  (this->DungeonNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonNameText).FormatArgs.ArrayNum = 0;
  (this->DungeonNameText).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_Dungeon_RaidPartyFinder_FilterSlot @ 14b63c080

UDS_VM_Dungeon_RaidPartyFinder_FilterSlot * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::UDS_VM_Dungeon_RaidPartyFinder_FilterSlot
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_FilterSlot__6B_;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeave);
  (this->ClickFilterSlot)._padding_ = '\0';
  (this->ClickFilterSlot).bIsCustomSelected = false;
  (this->ClickFilterSlot).bIsLacked = false;
  (this->ClickFilterSlot).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickFilterSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickFilterSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickFilterSlot).Delegate.field_0x10 = 0;
  (this->VM_DungeonFilterCheckBox).field0_0x0.DebugPtr = (UDS_VM_Common_Check *)0x0;
  (this->DungeonNameText).StringTableType = None;
  (this->DungeonNameText).StringTableID = 0;
  (this->DungeonNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DungeonNameText).StringEnumTableNameID.Number = 0;
  (this->DungeonNameText).DateTime.Ticks = 0;
  (this->DungeonNameText).TimeSpan.Ticks = 0;
  (this->DungeonNameText).TimeExpressionType = None;
  (this->DungeonNameText).IsExpression = false;
  (this->DungeonNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonNameText).UniqueString.Data.ArrayNum = 0;
  (this->DungeonNameText).UniqueString.Data.ArrayMax = 0;
  (this->DungeonNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonNameText).FormatArgs.ArrayNum = 0;
  (this->DungeonNameText).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_Dungeon_RaidPartyFinder_FilterSlot @ 14b63d3e0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::~UDS_VM_Dungeon_RaidPartyFinder_FilterSlot
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_FilterSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DungeonNameText).FormatArgs.AllocatorInstance.Data,
             (this->DungeonNameText).FormatArgs.ArrayNum);
  pFVar1 = (this->DungeonNameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DungeonNameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickFilterSlot).Delegate);
  pvVar2 = *(void **)&(this->ClickFilterSlot).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickFilterSlot).Delegate);
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63fa00

IClassDescriptor * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::GetFieldNotificationDescriptor
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b640810

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_FilterSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_FilterSlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_FilterSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_FilterSlot,0x338,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_FilterSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_FilterSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_FilterSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_FilterSlot @ 14b640c50

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::
StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_FilterSlot(void)

{
  return;
}

// InitViewModel @ 14be24ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::InitViewModel
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Common_Check *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_DungeonFilterCheckBox).field0_0x0.DebugPtr == (UDS_VM_Common_Check *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_Common_Check_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_Common_Check_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_Common_Check *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_Common_Check *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_Common_Check *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_DungeonFilterCheckBox).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnChangedFilterSlotCheckBox @ 14be2a270

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OnChangedFilterSlotCheckBox
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this,uint param_1,bool param_2)

{
  FName FVar1;
  int iVar2;
  UDS_DungeonEvent *pUVar3;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  if (this->IsSelected != param_2) {
    this->IsSelected = param_2;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pUVar3 = UDS_DungeonEvent::GetEvent();
  if (pUVar3 != (UDS_DungeonEvent *)0x0) {
    FDS_EventDelegate<int_const_,bool_const_>::Broadcast
              (&pUVar3->OnClickedFinderDungeon,this->DungeonID,this->IsSelected);
    return;
  }
  return;
}

// OnClickFilterSlot @ 14be2c4a0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OnClickFilterSlot
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  FName FVar2;
  int iVar3;
  UDS_DungeonEvent *pUVar4;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  bVar1 = this->IsSelected;
  if (bVar1 != (bVar1 == false)) {
    this->IsSelected = bVar1 == false;
    local_10 = iVar3;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pUVar4 = UDS_DungeonEvent::GetEvent();
  if (pUVar4 != (UDS_DungeonEvent *)0x0) {
    FDS_EventDelegate<int_const_,bool_const_>::Broadcast
              (&pUVar4->OnClickedFinderDungeon,this->DungeonID,this->IsSelected);
    return;
  }
  return;
}

// OnEventMouseEnter @ 14be2ef10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OnEventMouseEnter
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FGeometry *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_WindowManager *this_00;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_2d8 [32];
  float local_2a8;
  float fStack_2a4;
  undefined1 local_298 [8];
  FDelegateAllocation local_290;
  FWeakObjectPtr local_280;
  FDeprecateSlateVector2D local_278;
  UDS_WindowManager *local_270;
  UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *local_268 [2];
  code *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  TVector2<double>_u_0 local_248;
  FDestructionSentinel local_238;
  FDestructionSentinel local_220;
  FDelegateAllocation *local_208;
  TVector2<double>_u_0 local_200;
  TVector2<double> local_1f0;
  FDeprecateSlateVector2D local_1e0;
  undefined8 uStack_1d8;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 local_1b0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_270 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_270);
  }
  local_280.ObjectIndex = 0;
  local_280.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_270);
  }
  FWeakObjectPtr::operator=(&local_280,(FObjectPtr)&local_270);
  bVar2 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_280,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OnEventMouseEnter",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_188.Ptr,0x41,L"windowManager is nullptr.");
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
    }
  }
  else if (param_1->TargetWidget != (UDS_UserWidget *)0x0) {
    pFVar4 = UWidget::GetCachedGeometry((UWidget *)param_1->TargetWidget);
    local_1c0 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
    fStack_1bc = (pFVar4->AccumulatedRenderTransform).M.M[1][0];
    fStack_1b8 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
    fStack_1b4 = (pFVar4->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    local_1b0 = *(undefined8 *)
                 ((longlong)&(pFVar4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    fVar12 = (float)local_1b0;
    local_278 = pFVar4->Size;
    uStack_1d8 = *(undefined8 *)&pFVar4->Scale;
    local_1d0 = (pFVar4->AbsolutePosition).field0_0x0._s_0.Y;
    fStack_1cc = (pFVar4->Position).field0_0x0._s_0.X;
    fStack_1c8 = (pFVar4->Position).field0_0x0._s_0.Y;
    fStack_1c4 = (pFVar4->AccumulatedRenderTransform).M.M[0][0];
    local_2a8 = local_278._0_4_;
    fStack_2a4 = local_278._4_4_;
    fVar10 = fStack_1bc * fStack_2a4 * __real_3f000000 + fStack_1c4 * local_2a8 * __real_3f000000 +
             fStack_1b4;
    fVar9 = fStack_1b8 * fStack_2a4 * __real_3f000000;
    fVar11 = local_1c0 * local_2a8 * __real_3f000000;
    fStack_2a4 = fStack_2a4 * __real_3f000000;
    local_2a8 = local_2a8 * __real_3f000000;
    local_1e0 = local_278;
    pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    if (pUVar5 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7206911494410207310>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DungeonFinder\\DS_VM_Dungeon_RaidPartyFinder_FilterSlot.cpp"
                         ,0x4e,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_248._s_0.X = (double)fVar10;
      local_248._s_0.Y = (double)(fVar9 + fVar11 + fVar12);
      USlateBlueprintLibrary::AbsoluteToViewport
                (pUVar5,(TVector2<double> *)&local_248._s_0,&local_1f0,
                 (TVector2<double> *)&local_200._s_0);
      uStack_250 = 0;
      local_258 = OpenDungeonTooltip;
      uStack_24c = local_1f0.field0_0x0._12_4_;
      local_298 = (undefined1  [8])0x0;
      local_290.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_290.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
                 (FWriteAccessScope *)&local_220);
      local_208 = &local_290;
      puVar6 = UE::Core::Private::DelegateAllocate(0x48,&local_290);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
        ;
        puVar6[1] = local_200._s_0.X;
        puVar6[2] = local_200._s_0.Y;
        puVar6[3] = (double)local_2a8;
        puVar6[4] = (double)fStack_2a4;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[5] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_FilterSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[6] = 0;
        local_268[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 6),(FObjectPtr)local_268);
        puVar6[7] = local_258;
        puVar6[8] = CONCAT44(uStack_24c,uStack_250);
      }
      if (local_220.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
      }
      this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_280);
      pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         (&local_1a8,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_298);
      UDS_WindowManager::OpenWindow(this_00,RaidPartyDungeonTooltip,pTVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
                 (FWriteAccessScope *)&local_238);
      if ((local_290.DelegateSize != 0) &&
         (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_290.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_290,0,0,0x10);
        local_290.DelegateSize = 0;
      }
      if (local_238.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
      }
      if (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_290.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_298);
    }
  }
  return;
}

// OnEventMouseLeave @ 14be2fdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OnEventMouseLeave
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this,FDS_WidgetPointerEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  float local_150 [2];
  UDS_WindowManager *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_148[0] = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_148[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_148[0]);
  }
  local_158.ObjectIndex = 0;
  local_158.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_148[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_148[0]);
  }
  FWeakObjectPtr::operator=(&local_158,(FObjectPtr)local_148);
  bVar1 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OnEventMouseLeave",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x5f,L"windowManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_158);
    local_150[0] = 0.0;
    local_148[0] = (UDS_WindowManager *)((ulonglong)local_148[0] & 0xffffffff00000000);
    UDS_WindowManager::CloseWindow(this_00,RaidPartyDungeonTooltip,(uint *)local_148,local_150);
  }
  return;
}

// OnSetViewModel @ 14be33910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OnSetViewModel
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_Common_Check *this_00;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  FDS_DungeonBaseTableRow *pFVar7;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_01;
  undefined8 *puVar10;
  ulong64 uVar11;
  FDS_ViewModelContext *pFVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext_RaidPartyFinderSlot *pFVar14;
  undefined1 auStackY_298 [32];
  TSharedPtr<FDS_ViewModelContext_RaidPartyFinderSlot,1> local_268;
  UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *local_258;
  TSharedPtr<FDS_ViewModelContext,1> *local_250;
  FName local_248;
  int local_240;
  FName local_238;
  int local_230;
  TSharedPtr<FDS_ViewModelContext,1> local_228;
  code *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  TSharedPtr<FDS_ViewModelContext,1> local_208;
  FDS_Text local_1f8;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  FDestructionSentinel local_198;
  FName *local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_250 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_RaidPartyFinderSlot>(&local_268,&local_1a8);
  pFVar14 = local_268.Object;
  if (local_268.Object == (FDS_ViewModelContext_RaidPartyFinderSlot *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OnSetViewModel",0x39,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_178.Ptr,0x16,L"slotContext.IsValid() == false");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
  }
  else {
    if ((local_268.Object == (FDS_ViewModelContext_RaidPartyFinderSlot *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->DungeonID = (int)pFVar14->DungeonId;
    FVar3 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
    if (this->IsSelected != pFVar14->bIsSelected) {
      local_240 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
      this->IsSelected = pFVar14->bIsSelected;
      local_248 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_248);
    }
    pFVar7 = FDS_DungeonBaseTableRow::Get((longlong)this->DungeonID,true);
    pFVar12 = (FDS_ViewModelContext *)0x0;
    if (pFVar7 != (FDS_DungeonBaseTableRow *)0x0) {
      local_1f8.StringTableType = None;
      local_1f8.StringTableID = 0;
      local_1f8.DateTime.Ticks = 0;
      local_1f8.TimeSpan.Ticks = 0;
      local_1f8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1f8.StringEnumTableNameID.Number = 0;
      local_1f8.TimeExpressionType = None;
      local_1f8.IsExpression = false;
      local_1f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.UniqueString.Data.ArrayNum = 0;
      local_1f8.UniqueString.Data.ArrayMax = 0;
      local_1f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.FormatArgs.ArrayNum = 0;
      local_1f8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_1f8,&pFVar7->ID_Name);
      iVar4 = FFieldNotificationClassDescriptor::DungeonNameText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::DungeonNameText.FieldName;
      FDS_Text::operator=(&this->DungeonNameText,&local_1f8);
      local_238 = FVar3;
      local_230 = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_1f8.FormatArgs.AllocatorInstance.Data,
                 local_1f8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_1f8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_1f8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_1f8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.UniqueString.Data.AllocatorInstance.Data);
      }
    }
    if ((this->VM_DungeonFilterCheckBox).field0_0x0.DebugPtr != (UDS_VM_Common_Check *)0x0) {
      pFVar8 = ::operator_new(0x40);
      pFVar13 = pFVar12;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar8->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar8[1]._padding_ + 4) = 0;
        *(undefined4 *)&pFVar8[1].field_0x1c = 0;
        *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
        (pFVar8->ViewModelName).ComparisonIndex = 0;
        (pFVar8->ViewModelName).Number = 0;
        pFVar8->ViewModelTemplateKey = None;
        pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonCheck__6B_;
        *(undefined8 *)&pFVar8[1].DerivedStaticStruct = 0;
        pFVar8[1].ViewModelName.ComparisonIndex = 0;
        pFVar8[1].ViewModelName.Number = 0;
        pFVar8[1].ViewModelTemplateKey = None;
        pFVar13 = pFVar8;
        pFVar14 = local_268.Object;
      }
      pFVar8 = ::operator_new(0x20);
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar8->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonCheck__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar13;
        pFVar12 = pFVar8;
      }
      if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar9 = FDS_ViewModelContext_CommonCheck::StaticStruct();
      *(UScriptStruct **)&pFVar13->DerivedStaticStruct = pUVar9;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar12->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_228.Object = pFVar13;
        local_228.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_228);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_228.SharedReferenceCount.ReferenceController);
      }
      pFVar13->ViewModelTemplateKey = W_CommonCheck;
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar13[1].DerivedStaticStruct);
      uStack_210 = 0;
      local_218 = OnChangedFilterSlotCheckBox;
      uStack_20c = local_208.SharedReferenceCount.ReferenceController._4_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar13[1].DerivedStaticStruct,(FWriteAccessScope *)&local_198);
      local_180 = &pFVar13[1].ViewModelName;
      puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_180);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXI_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_FilterSlot____A6AXI_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar10[3] = 0;
        local_258 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_258);
        puVar10[4] = local_218;
        puVar10[5] = CONCAT44(uStack_20c,uStack_210);
      }
      if (local_198.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
      }
      if ((pFVar14 == (FDS_ViewModelContext_RaidPartyFinderSlot *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(bool *)((longlong)&pFVar13[1]._padding_ + 4) = pFVar14->bIsSelected;
      this_00 = (this->VM_DungeonFilterCheckBox).field0_0x0.DebugPtr;
      if (pFVar12 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar12->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_208.Object = pFVar13;
      local_208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_208);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
      param_1 = local_250;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenDungeonTooltip @ 14be45560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OpenDungeonTooltip
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this,UDS_UserWidget *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3)

{
  code *pcVar1;
  FDS_ViewModelContext_Dungeon *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FMargin *pFVar5;
  undefined1 auStackY_1f8 [32];
  FWeakObjectPtr local_1c8;
  UDS_UserWidget *local_1c0;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_1b8;
  TVector2<double>_u_0 local_1a8;
  FMargin local_198;
  TVector2<double>_u_0 local_188;
  TVector2<double> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  FMargin local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::OpenDungeonTooltip",0x3d,Yes
                );
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x88,L"InWidget is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_1a8._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_1a8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    pFVar5 = UDS_UserWidget::GetWindowFrameSlotMargin(param_1,&local_158);
    local_188._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_188._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_198.Left = pFVar5->Left;
    local_198.Top = pFVar5->Top;
    local_198.Right = pFVar5->Right;
    local_198.Bottom = pFVar5->Bottom;
    DS_Util::TransformTooltipPosition
              (&local_178,(TVector2<double> *)&local_188._s_0,&local_198,
               (TVector2<double> *)&local_1a8._s_0,None);
    UDS_UserWidget::OnSetWindowPosition(param_1,&local_178);
    MakeContext<FDS_ViewModelContext_Dungeon>(&local_1b8);
    pFVar2 = local_1b8.Object;
    if (local_1b8.Object == (FDS_ViewModelContext_Dungeon *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0xcc;
    local_168.Object = (FDS_ViewModelContext *)local_1b8.Object;
    local_168.SharedReferenceCount.ReferenceController =
         local_1b8.SharedReferenceCount.ReferenceController;
    pFVar2->DungeonId = (longlong)this->DungeonID;
    if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1c8.ObjectIndex = 0;
    local_1c8.ObjectSerialNumber = 0;
    local_1c0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_1c0);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1c8,&local_168,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetDungeonNameText @ 14be4b130

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::SetDungeonNameText
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this,FDS_Text *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  int iVar3;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::DungeonNameText.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::DungeonNameText.FieldName;
  FDS_Text::operator=(&this->DungeonNameText,param_1);
  local_18 = FVar2;
  local_10 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar1 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetIsSelected @ 14be4cb30

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_FilterSlot::SetIsSelected
          (UDS_VM_Dungeon_RaidPartyFinder_FilterSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  if (this->IsSelected != *param_1) {
    this->IsSelected = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

