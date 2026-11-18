// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetClickMountRegisterButton_WrapperImpl @ 14b74a2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_Mount_Get_Popup::SetClickMountRegisterButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_SendPacketManager *this;
  UDS_UIMessageManager *pUVar4;
  FDS_MountBaseTableRow *this_00;
  FText *this_01;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FStringFormatArg *this_02;
  undefined1 auStackY_208 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_1c8;
  FDS_Text FStack_1b8;
  FText FStack_168;
  FString FStack_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (*(longlong *)((longlong)param_1 + 0x2d0) == 0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_W_Mount_Get_Popup::OnClickMountRegisterButton",0x34,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,TStack_148.Ptr,0x52,
               L"Failed to register mount. CharacterEntityID is invalid. CharacterEntityID: %lld");
    FVar6.Data = (FScriptContainerElement *)TStack_148._padding_;
  }
  else {
    this = UDS_SendPacketManager::GetInst();
    if (this == (UDS_SendPacketManager *)0x0) {
      return;
    }
    UDS_SendPacketManager::SendUseItem
              (this,*(int *)((longlong)param_1 + 0x2cc),*(ulong64 *)((longlong)param_1 + 0x2d0));
    pUVar4 = UDS_UIMessageManager::GetInst();
    if (pUVar4 == (UDS_UIMessageManager *)0x0) {
      return;
    }
    TStack_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_1c8.ArrayNum = 0;
    TStack_1c8.ArrayMax = 0;
    this_00 = FDS_MountBaseTableRow::GetRef((longlong)*(int *)((longlong)param_1 + 0x2c8),true);
    bVar1 = FDS_MountBaseTableRow::IsValid(this_00);
    if (bVar1) {
      FStack_1b8.StringTableType = None;
      FStack_1b8.StringTableID = 0;
      FStack_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      FStack_1b8.StringEnumTableNameID.Number = 0;
      FStack_1b8.DateTime.Ticks = 0;
      FStack_1b8.TimeSpan.Ticks = 0;
      FStack_1b8.TimeExpressionType = None;
      FStack_1b8.IsExpression = false;
      FStack_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1b8.UniqueString.Data.ArrayNum = 0;
      FStack_1b8.UniqueString.Data.ArrayMax = 0;
      FStack_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1b8.FormatArgs.ArrayNum = 0;
      FStack_1b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&FStack_1b8,StringWorld,(this_00->ID_DefaultName).ID);
      this_01 = FDS_Text::GetText(&FStack_1b8,&FStack_168);
      pFVar5 = FText::ToString(this_01);
      iVar2 = TStack_1c8.ArrayNum;
      if (TStack_1c8.ArrayNum == TStack_1c8.ArrayMax) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&TStack_1c8.AllocatorInstance,&TStack_1c8.ArrayMax);
      }
      TStack_1c8.ArrayNum = iVar2 + 1;
      this_02 = (FStringFormatArg *)(TStack_1c8.AllocatorInstance.Data + (longlong)iVar2 * 0x20);
      pFVar5 = ::FString::FString(&FStack_158,pFVar5);
      FStringFormatArg::FStringFormatArg(this_02,pFVar5);
      if (FStack_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*FStack_168.TextData.Reference + 0x10))();
      }
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x55773,Complete_None_01,&TStack_1c8,
                 (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                  *)0x0);
      ClosePopup(param_1);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)FStack_1b8.FormatArgs.AllocatorInstance.Data,
                 FStack_1b8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)FStack_1b8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(FStack_1b8.FormatArgs.AllocatorInstance.Data);
      }
      if (FStack_1b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1b8.UniqueString.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)TStack_1c8.AllocatorInstance.Data,TStack_1c8.ArrayNum);
    FVar6.Data = TStack_1c8.AllocatorInstance.Data;
  }
  if ((FStringFormatArg *)FVar6.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return;
}

// SetClickCancelButton_WrapperImpl @ 14b74a2c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_Mount_Get_Popup::SetClickCancelButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if ((this != (UDS_WindowManager *)0x0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,MountRegisterPopup,auStackX_20,afStackX_18);
  }
  return;
}

// StaticClass @ 14b74a2d0

UClass * __cdecl UDS_VM_W_Mount_Get_Popup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Mount_Get_Popup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Mount_Get_Popup",
               &Z_Registration_Info_UClass_UDS_VM_W_Mount_Get_Popup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Mount_Get_Popup,0x2d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_Mount_Get_Popup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Mount_Get_Popup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Mount_Get_Popup.InnerSingleton;
}

// UDS_VM_W_Mount_Get_Popup @ 14b74c8c0

UDS_VM_W_Mount_Get_Popup * __thiscall
UDS_VM_W_Mount_Get_Popup::UDS_VM_W_Mount_Get_Popup
          (UDS_VM_W_Mount_Get_Popup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Mount_Get_Popup__6B_;
  (this->MountDisplay_ViewModel).field0_0x0.DebugPtr = (UDS_VM_MountDisplay *)0x0;
  (this->ClickMountRegisterButton)._padding_ = '\0';
  (this->ClickMountRegisterButton).bIsCustomSelected = false;
  (this->ClickMountRegisterButton).bIsLacked = false;
  (this->ClickMountRegisterButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountRegisterButton).Delegate = 0;
  *(undefined8 *)&(this->ClickMountRegisterButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountRegisterButton).Delegate.field_0x10 = 0;
  (this->ClickCancelButton)._padding_ = '\0';
  (this->ClickCancelButton).bIsCustomSelected = false;
  (this->ClickCancelButton).bIsLacked = false;
  (this->ClickCancelButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelButton).Delegate.field_0x10 = 0;
  (this->PopupTitleLabel_Text).StringTableType = None;
  (this->PopupTitleLabel_Text).StringTableID = 0;
  (this->PopupTitleLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PopupTitleLabel_Text).StringEnumTableNameID.Number = 0;
  (this->PopupTitleLabel_Text).DateTime.Ticks = 0;
  (this->PopupTitleLabel_Text).TimeSpan.Ticks = 0;
  (this->PopupTitleLabel_Text).TimeExpressionType = None;
  (this->PopupTitleLabel_Text).IsExpression = false;
  (this->PopupTitleLabel_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PopupTitleLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->PopupTitleLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->PopupTitleLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupTitleLabel_Text).FormatArgs.ArrayNum = 0;
  (this->PopupTitleLabel_Text).FormatArgs.ArrayMax = 0;
  (this->PopupLabel_Text).StringTableType = None;
  (this->PopupLabel_Text).StringTableID = 0;
  (this->PopupLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PopupLabel_Text).StringEnumTableNameID.Number = 0;
  (this->PopupLabel_Text).DateTime.Ticks = 0;
  (this->PopupLabel_Text).TimeSpan.Ticks = 0;
  (this->PopupLabel_Text).TimeExpressionType = None;
  (this->PopupLabel_Text).IsExpression = false;
  (this->PopupLabel_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->PopupLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->PopupLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupLabel_Text).FormatArgs.ArrayNum = 0;
  (this->PopupLabel_Text).FormatArgs.ArrayMax = 0;
  (this->AvaliableMountLabel_Text).StringTableType = None;
  (this->AvaliableMountLabel_Text).StringTableID = 0;
  (this->AvaliableMountLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AvaliableMountLabel_Text).StringEnumTableNameID.Number = 0;
  (this->AvaliableMountLabel_Text).DateTime.Ticks = 0;
  (this->AvaliableMountLabel_Text).TimeSpan.Ticks = 0;
  (this->AvaliableMountLabel_Text).TimeExpressionType = None;
  (this->AvaliableMountLabel_Text).IsExpression = false;
  (this->AvaliableMountLabel_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AvaliableMountLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->AvaliableMountLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->AvaliableMountLabel_Text).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AvaliableMountLabel_Text).FormatArgs.ArrayNum = 0;
  (this->AvaliableMountLabel_Text).FormatArgs.ArrayMax = 0;
  (this->AvaliableMountSlotCount_Text).StringTableType = None;
  (this->AvaliableMountSlotCount_Text).StringTableID = 0;
  (this->AvaliableMountSlotCount_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AvaliableMountSlotCount_Text).StringEnumTableNameID.Number = 0;
  (this->AvaliableMountSlotCount_Text).DateTime.Ticks = 0;
  (this->AvaliableMountSlotCount_Text).TimeSpan.Ticks = 0;
  (this->AvaliableMountSlotCount_Text).TimeExpressionType = None;
  (this->AvaliableMountSlotCount_Text).IsExpression = false;
  (this->AvaliableMountSlotCount_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AvaliableMountSlotCount_Text).UniqueString.Data.ArrayNum = 0;
  (this->AvaliableMountSlotCount_Text).UniqueString.Data.ArrayMax = 0;
  (this->AvaliableMountSlotCount_Text).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AvaliableMountSlotCount_Text).FormatArgs.ArrayNum = 0;
  (this->AvaliableMountSlotCount_Text).FormatArgs.ArrayMax = 0;
  (this->CancelButton_Text).StringTableType = None;
  (this->CancelButton_Text).StringTableID = 0;
  (this->CancelButton_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CancelButton_Text).StringEnumTableNameID.Number = 0;
  (this->CancelButton_Text).DateTime.Ticks = 0;
  (this->CancelButton_Text).TimeSpan.Ticks = 0;
  (this->CancelButton_Text).TimeExpressionType = None;
  (this->CancelButton_Text).IsExpression = false;
  (this->CancelButton_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CancelButton_Text).UniqueString.Data.ArrayNum = 0;
  (this->CancelButton_Text).UniqueString.Data.ArrayMax = 0;
  (this->CancelButton_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CancelButton_Text).FormatArgs.ArrayNum = 0;
  (this->CancelButton_Text).FormatArgs.ArrayMax = 0;
  (this->ConfirmButton_Text).StringTableType = None;
  (this->ConfirmButton_Text).StringTableID = 0;
  (this->ConfirmButton_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ConfirmButton_Text).StringEnumTableNameID.Number = 0;
  (this->ConfirmButton_Text).DateTime.Ticks = 0;
  (this->ConfirmButton_Text).TimeSpan.Ticks = 0;
  (this->ConfirmButton_Text).TimeExpressionType = None;
  (this->ConfirmButton_Text).IsExpression = false;
  (this->ConfirmButton_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConfirmButton_Text).UniqueString.Data.ArrayNum = 0;
  (this->ConfirmButton_Text).UniqueString.Data.ArrayMax = 0;
  (this->ConfirmButton_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfirmButton_Text).FormatArgs.ArrayNum = 0;
  (this->ConfirmButton_Text).FormatArgs.ArrayMax = 0;
  this->CharacterEntityID = 0;
  this->CurrentMountTID = -1;
  this->ItemTID = -1;
  return this;
}

// UDS_VM_W_Mount_Get_Popup @ 14b74cb10

UDS_VM_W_Mount_Get_Popup * __thiscall
UDS_VM_W_Mount_Get_Popup::UDS_VM_W_Mount_Get_Popup
          (UDS_VM_W_Mount_Get_Popup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Mount_Get_Popup__6B_;
  (this->MountDisplay_ViewModel).field0_0x0.DebugPtr = (UDS_VM_MountDisplay *)0x0;
  (this->ClickMountRegisterButton)._padding_ = '\0';
  (this->ClickMountRegisterButton).bIsCustomSelected = false;
  (this->ClickMountRegisterButton).bIsLacked = false;
  (this->ClickMountRegisterButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountRegisterButton).Delegate = 0;
  *(undefined8 *)&(this->ClickMountRegisterButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountRegisterButton).Delegate.field_0x10 = 0;
  (this->ClickCancelButton)._padding_ = '\0';
  (this->ClickCancelButton).bIsCustomSelected = false;
  (this->ClickCancelButton).bIsLacked = false;
  (this->ClickCancelButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelButton).Delegate.field_0x10 = 0;
  (this->PopupTitleLabel_Text).StringTableType = None;
  (this->PopupTitleLabel_Text).StringTableID = 0;
  (this->PopupTitleLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PopupTitleLabel_Text).StringEnumTableNameID.Number = 0;
  (this->PopupTitleLabel_Text).DateTime.Ticks = 0;
  (this->PopupTitleLabel_Text).TimeSpan.Ticks = 0;
  (this->PopupTitleLabel_Text).TimeExpressionType = None;
  (this->PopupTitleLabel_Text).IsExpression = false;
  (this->PopupTitleLabel_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PopupTitleLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->PopupTitleLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->PopupTitleLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupTitleLabel_Text).FormatArgs.ArrayNum = 0;
  (this->PopupTitleLabel_Text).FormatArgs.ArrayMax = 0;
  (this->PopupLabel_Text).StringTableType = None;
  (this->PopupLabel_Text).StringTableID = 0;
  (this->PopupLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PopupLabel_Text).StringEnumTableNameID.Number = 0;
  (this->PopupLabel_Text).DateTime.Ticks = 0;
  (this->PopupLabel_Text).TimeSpan.Ticks = 0;
  (this->PopupLabel_Text).TimeExpressionType = None;
  (this->PopupLabel_Text).IsExpression = false;
  (this->PopupLabel_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->PopupLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->PopupLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupLabel_Text).FormatArgs.ArrayNum = 0;
  (this->PopupLabel_Text).FormatArgs.ArrayMax = 0;
  (this->AvaliableMountLabel_Text).StringTableType = None;
  (this->AvaliableMountLabel_Text).StringTableID = 0;
  (this->AvaliableMountLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AvaliableMountLabel_Text).StringEnumTableNameID.Number = 0;
  (this->AvaliableMountLabel_Text).DateTime.Ticks = 0;
  (this->AvaliableMountLabel_Text).TimeSpan.Ticks = 0;
  (this->AvaliableMountLabel_Text).TimeExpressionType = None;
  (this->AvaliableMountLabel_Text).IsExpression = false;
  (this->AvaliableMountLabel_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AvaliableMountLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->AvaliableMountLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->AvaliableMountLabel_Text).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AvaliableMountLabel_Text).FormatArgs.ArrayNum = 0;
  (this->AvaliableMountLabel_Text).FormatArgs.ArrayMax = 0;
  (this->AvaliableMountSlotCount_Text).StringTableType = None;
  (this->AvaliableMountSlotCount_Text).StringTableID = 0;
  (this->AvaliableMountSlotCount_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AvaliableMountSlotCount_Text).StringEnumTableNameID.Number = 0;
  (this->AvaliableMountSlotCount_Text).DateTime.Ticks = 0;
  (this->AvaliableMountSlotCount_Text).TimeSpan.Ticks = 0;
  (this->AvaliableMountSlotCount_Text).TimeExpressionType = None;
  (this->AvaliableMountSlotCount_Text).IsExpression = false;
  (this->AvaliableMountSlotCount_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AvaliableMountSlotCount_Text).UniqueString.Data.ArrayNum = 0;
  (this->AvaliableMountSlotCount_Text).UniqueString.Data.ArrayMax = 0;
  (this->AvaliableMountSlotCount_Text).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AvaliableMountSlotCount_Text).FormatArgs.ArrayNum = 0;
  (this->AvaliableMountSlotCount_Text).FormatArgs.ArrayMax = 0;
  (this->CancelButton_Text).StringTableType = None;
  (this->CancelButton_Text).StringTableID = 0;
  (this->CancelButton_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CancelButton_Text).StringEnumTableNameID.Number = 0;
  (this->CancelButton_Text).DateTime.Ticks = 0;
  (this->CancelButton_Text).TimeSpan.Ticks = 0;
  (this->CancelButton_Text).TimeExpressionType = None;
  (this->CancelButton_Text).IsExpression = false;
  (this->CancelButton_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CancelButton_Text).UniqueString.Data.ArrayNum = 0;
  (this->CancelButton_Text).UniqueString.Data.ArrayMax = 0;
  (this->CancelButton_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CancelButton_Text).FormatArgs.ArrayNum = 0;
  (this->CancelButton_Text).FormatArgs.ArrayMax = 0;
  (this->ConfirmButton_Text).StringTableType = None;
  (this->ConfirmButton_Text).StringTableID = 0;
  (this->ConfirmButton_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ConfirmButton_Text).StringEnumTableNameID.Number = 0;
  (this->ConfirmButton_Text).DateTime.Ticks = 0;
  (this->ConfirmButton_Text).TimeSpan.Ticks = 0;
  (this->ConfirmButton_Text).TimeExpressionType = None;
  (this->ConfirmButton_Text).IsExpression = false;
  (this->ConfirmButton_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConfirmButton_Text).UniqueString.Data.ArrayNum = 0;
  (this->ConfirmButton_Text).UniqueString.Data.ArrayMax = 0;
  (this->ConfirmButton_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfirmButton_Text).FormatArgs.ArrayNum = 0;
  (this->ConfirmButton_Text).FormatArgs.ArrayMax = 0;
  this->CharacterEntityID = 0;
  this->CurrentMountTID = -1;
  this->ItemTID = -1;
  return this;
}

// ~UDS_VM_W_Mount_Get_Popup @ 14b74eca0

void __thiscall UDS_VM_W_Mount_Get_Popup::~UDS_VM_W_Mount_Get_Popup(UDS_VM_W_Mount_Get_Popup *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Mount_Get_Popup__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ConfirmButton_Text).FormatArgs.AllocatorInstance.Data,
             (this->ConfirmButton_Text).FormatArgs.ArrayNum);
  pFVar1 = (this->ConfirmButton_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConfirmButton_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CancelButton_Text).FormatArgs.AllocatorInstance.Data,
             (this->CancelButton_Text).FormatArgs.ArrayNum);
  pFVar1 = (this->CancelButton_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CancelButton_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->AvaliableMountSlotCount_Text).FormatArgs.AllocatorInstance.Data,
             (this->AvaliableMountSlotCount_Text).FormatArgs.ArrayNum);
  pFVar1 = (this->AvaliableMountSlotCount_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AvaliableMountSlotCount_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->AvaliableMountLabel_Text).FormatArgs.AllocatorInstance.Data
             ,(this->AvaliableMountLabel_Text).FormatArgs.ArrayNum);
  pFVar1 = (this->AvaliableMountLabel_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AvaliableMountLabel_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->PopupLabel_Text).FormatArgs.AllocatorInstance.Data,
             (this->PopupLabel_Text).FormatArgs.ArrayNum);
  pFVar1 = (this->PopupLabel_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PopupLabel_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->PopupTitleLabel_Text).FormatArgs.AllocatorInstance.Data,
             (this->PopupTitleLabel_Text).FormatArgs.ArrayNum);
  pFVar1 = (this->PopupTitleLabel_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PopupTitleLabel_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancelButton).Delegate);
  pvVar2 = *(void **)&(this->ClickCancelButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancelButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickMountRegisterButton).Delegate
            );
  pvVar2 = *(void **)&(this->ClickMountRegisterButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickMountRegisterButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7511d0

IClassDescriptor * __thiscall
UDS_VM_W_Mount_Get_Popup::GetFieldNotificationDescriptor(UDS_VM_W_Mount_Get_Popup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Mount_Get_Popup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b751900

UClass * __cdecl UDS_VM_W_Mount_Get_Popup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Mount_Get_Popup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Mount_Get_Popup",
               &Z_Registration_Info_UClass_UDS_VM_W_Mount_Get_Popup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Mount_Get_Popup,0x2d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_Mount_Get_Popup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Mount_Get_Popup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Mount_Get_Popup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Mount_Get_Popup @ 14b752390

void __cdecl UDS_VM_W_Mount_Get_Popup::StaticRegisterNativesUDS_VM_W_Mount_Get_Popup(void)

{
  return;
}

// ClosePopup @ 14beda1f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Mount_Get_Popup::ClosePopup(UDS_VM_W_Mount_Get_Popup *this)

{
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if ((this_00 != (UDS_WindowManager *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
    local_res10[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,MountRegisterPopup,local_res18,local_res10);
  }
  return;
}

// InitViewModel @ 14bef3dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_Mount_Get_Popup::InitViewModel(UDS_VM_W_Mount_Get_Popup *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_MountDisplay *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  int local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->MountDisplay_ViewModel).field0_0x0.DebugPtr == (UDS_VM_MountDisplay *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_MountDisplay_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_MountDisplay_NoRegister();
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
    pUVar5 = (UDS_VM_MountDisplay *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_MountDisplay *)0x0) {
      pUVar5->field_0x8c = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_MountDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->MountDisplay_ViewModel).field0_0x0.DebugPtr = pUVar5;
  }
  FDS_Text::SetTextFromStringTable(&this->PopupTitleLabel_Text,StringUi,0x55736);
  local_a0 = FFieldNotificationClassDescriptor::PopupTitleLabel_Text.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::PopupTitleLabel_Text.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  FDS_Text::SetTextFromStringTable(&this->PopupLabel_Text,StringUi,0x55737);
  local_a0 = FFieldNotificationClassDescriptor::PopupLabel_Text.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::PopupLabel_Text.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  FDS_Text::SetTextFromStringTable(&this->CancelButton_Text,StringUi,0x66);
  local_a0 = FFieldNotificationClassDescriptor::CancelButton_Text.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::CancelButton_Text.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  FDS_Text::SetTextFromStringTable(&this->ConfirmButton_Text,StringUi,0x65);
  local_a0 = FFieldNotificationClassDescriptor::ConfirmButton_Text.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::ConfirmButton_Text.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  FDS_Text::SetTextFromStringTable(&this->AvaliableMountLabel_Text,StringUi,0x55738);
  local_a0 = FFieldNotificationClassDescriptor::AvaliableMountLabel_Text.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::AvaliableMountLabel_Text.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  return;
}

// OnClickCancelButton @ 14bef8be0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Mount_Get_Popup::OnClickCancelButton
          (UDS_VM_W_Mount_Get_Popup *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if ((this_00 != (UDS_WindowManager *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,MountRegisterPopup,local_res20,local_res18);
  }
  return;
}

// OnClickMountRegisterButton @ 14befa020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Mount_Get_Popup::OnClickMountRegisterButton
          (UDS_VM_W_Mount_Get_Popup *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_SendPacketManager *this_00;
  UDS_UIMessageManager *pUVar4;
  FDS_MountBaseTableRow *this_01;
  FText *this_02;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FStringFormatArg *this_03;
  undefined1 auStackY_208 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1c8;
  FDS_Text local_1b8;
  FText local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (this->CharacterEntityID == 0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_W_Mount_Get_Popup::OnClickMountRegisterButton",0x34,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,local_148.Ptr,0x52,
               L"Failed to register mount. CharacterEntityID is invalid. CharacterEntityID: %lld");
    FVar6.Data = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    this_00 = UDS_SendPacketManager::GetInst();
    if (this_00 == (UDS_SendPacketManager *)0x0) {
      return;
    }
    UDS_SendPacketManager::SendUseItem(this_00,this->ItemTID,this->CharacterEntityID);
    pUVar4 = UDS_UIMessageManager::GetInst();
    if (pUVar4 == (UDS_UIMessageManager *)0x0) {
      return;
    }
    local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.ArrayNum = 0;
    local_1c8.ArrayMax = 0;
    this_01 = FDS_MountBaseTableRow::GetRef((longlong)this->CurrentMountTID,true);
    bVar1 = FDS_MountBaseTableRow::IsValid(this_01);
    if (bVar1) {
      local_1b8.StringTableType = None;
      local_1b8.StringTableID = 0;
      local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1b8.StringEnumTableNameID.Number = 0;
      local_1b8.DateTime.Ticks = 0;
      local_1b8.TimeSpan.Ticks = 0;
      local_1b8.TimeExpressionType = None;
      local_1b8.IsExpression = false;
      local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.UniqueString.Data.ArrayNum = 0;
      local_1b8.UniqueString.Data.ArrayMax = 0;
      local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.FormatArgs.ArrayNum = 0;
      local_1b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1b8,StringWorld,(this_01->ID_DefaultName).ID);
      this_02 = FDS_Text::GetText(&local_1b8,&local_168);
      pFVar5 = FText::ToString(this_02);
      iVar2 = local_1c8.ArrayNum;
      if (local_1c8.ArrayNum == local_1c8.ArrayMax) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_1c8.AllocatorInstance,&local_1c8.ArrayMax);
      }
      local_1c8.ArrayNum = iVar2 + 1;
      this_03 = (FStringFormatArg *)(local_1c8.AllocatorInstance.Data + (longlong)iVar2 * 0x20);
      pFVar5 = ::FString::FString(&local_158,pFVar5);
      FStringFormatArg::FStringFormatArg(this_03,pFVar5);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x55773,Complete_None_01,&local_1c8,
                 (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                  *)0x0);
      ClosePopup(this);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data,
                 local_1b8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_1b8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_1b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.UniqueString.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
    FVar6.Data = local_1c8.AllocatorInstance.Data;
  }
  if ((FStringFormatArg *)FVar6.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return;
}

// OnSetViewModel @ 14bf0a570

void __thiscall
UDS_VM_W_Mount_Get_Popup::OnSetViewModel
          (UDS_VM_W_Mount_Get_Popup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_MountDisplay *pUVar2;
  code *pcVar3;
  bool bVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext_MountGetPopup *pFVar8;
  FDS_ViewModelContext *pFVar9;
  TSharedPtr<FDS_ViewModelContext_MountGetPopup,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
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
  SafeCast<FDS_ViewModelContext_MountGetPopup>(&local_58,&local_38);
  pFVar8 = local_58.Object;
  if (local_58.Object == (FDS_ViewModelContext_MountGetPopup *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7149975432249475047>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_W_Mount_Get_Popup.cpp"
                       ,0x19,"context");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar2 = (this->MountDisplay_ViewModel).field0_0x0.DebugPtr;
    this->CurrentMountTID = (local_58.Object)->MountTID;
    this->ItemTID = (local_58.Object)->ItemTID;
    this->CharacterEntityID = (local_58.Object)->CharacterEntityID;
    if (pUVar2 != (UDS_VM_MountDisplay *)0x0) {
      pFVar5 = ::operator_new(0x28);
      pFVar7 = (FDS_ViewModelContext *)0x0;
      pFVar9 = pFVar7;
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
        (pFVar5->ViewModelName).ComparisonIndex = 0;
        (pFVar5->ViewModelName).Number = 0;
        pFVar5->_padding_ = (longlong)&___7FDS_VMContext_MountDisplay__6B_;
        *(undefined4 *)&pFVar5[1]._padding_ = 0;
        pFVar8 = local_58.Object;
        pFVar9 = pFVar5;
      }
      pFVar5 = ::operator_new(0x20);
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar5->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_VMContext_MountDisplay__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar9;
        pFVar7 = pFVar5;
      }
      if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = FDS_VMContext_MountDisplay::StaticStruct();
      *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
      this_00 = UDS_ViewModelContextManager::GetInst();
      if (this_00 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar7->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_48.Object = pFVar9;
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        UDS_ViewModelContextManager::RegisterContext(this_00,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
      pFVar9->ViewModelTemplateKey = MountDisplay;
      *(int *)&pFVar9[1]._padding_ = this->CurrentMountTID;
      pUVar2 = (this->MountDisplay_ViewModel).field0_0x0.DebugPtr;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_28.Object = pFVar9;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar7);
    }
    if ((pFVar8 == (FDS_ViewModelContext_MountGetPopup *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SetMountSlotCount(this,pFVar8->AvailableSlotCount,pFVar8->TotalSlotCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMountSlotCount @ 14bf168b0

void __thiscall
UDS_VM_W_Mount_Get_Popup::SetMountSlotCount(UDS_VM_W_Mount_Get_Popup *this,int param_1,int param_2)

{
  FInstancedStruct *pFVar1;
  FObjectPtr_u_0 FVar2;
  int iVar3;
  FObjectPtr_u_0 *pFVar4;
  FString *pFVar5;
  FString local_28;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  if ((-1 < param_1) && (-1 < param_2)) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_28,param_1);
    iVar3 = local_18.ArrayNum;
    if (local_18.ArrayNum == local_18.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
    }
    local_18.ArrayNum = iVar3 + 1;
    pFVar1 = (FInstancedStruct *)(local_18.AllocatorInstance.Data + (longlong)iVar3 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar1);
    pFVar4 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar2 = pFVar4[1];
    pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar4;
    pFVar1[1].StructMemory = (uchar *)FVar2;
    pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar4[2];
    FInstancedStruct::InitializeAs<FDS_StringFormatArg>(pFVar1);
    pFVar5 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(pFVar1)->Value;
    if (pFVar5 != (FString *)0x0) {
      iVar3 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AssignRange(pFVar5,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_28,param_2);
    iVar3 = local_18.ArrayNum;
    if (local_18.ArrayNum == local_18.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
    }
    local_18.ArrayNum = iVar3 + 1;
    pFVar1 = (FInstancedStruct *)(local_18.AllocatorInstance.Data + (longlong)iVar3 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar1);
    pFVar4 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar2 = pFVar4[1];
    pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar4;
    pFVar1[1].StructMemory = (uchar *)FVar2;
    pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar4[2];
    FInstancedStruct::InitializeAs<FDS_StringFormatArg>(pFVar1);
    pFVar5 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(pFVar1)->Value;
    if (pFVar5 != (FString *)0x0) {
      iVar3 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AssignRange(pFVar5,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    FDS_Text::SetTextFormatFromStringTable
              (&this->AvaliableMountSlotCount_Text,StringUi,0x55743,&local_18);
    local_28.Data.ArrayNum =
         FFieldNotificationClassDescriptor::AvaliableMountSlotCount_Text.BitNumber;
    local_28.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         FFieldNotificationClassDescriptor::AvaliableMountSlotCount_Text.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

