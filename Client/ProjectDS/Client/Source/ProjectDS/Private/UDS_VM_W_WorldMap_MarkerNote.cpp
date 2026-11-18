// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetTextChangedEvent_WrapperImpl @ 14b754ce0

void __cdecl
UDS_VM_W_WorldMap_MarkerNote::SetTextChangedEvent_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  int iVar5;
  FName FStack_38;
  int iStack_30;
  ForAnyElementType FStack_28;
  int iStack_20;
  int iStack_1c;
  FString FStack_18;
  
  if (*(char *)((longlong)param_1 + 0x2b0) != '\x01') {
    pFVar2 = FText::ToString(param_2);
    FStack_28.Data = (FScriptContainerElement *)0x0;
    iStack_20 = (pFVar2->Data).ArrayNum;
    lVar4 = (longlong)iStack_20;
    _Src = (pFVar2->Data).AllocatorInstance.Data;
    if (iStack_20 == 0) {
      iStack_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_20,0,&FStack_28,iStack_20,&iStack_1c);
      memcpy(FStack_28.Data,_Src,lVar4 * 2);
    }
    iVar1 = iStack_20 + -1;
    if (iStack_20 == 0) {
      iVar1 = 0;
    }
    iVar5 = 0;
    if (iVar1 < 0x51) {
      pFVar2 = FText::ToString(param_2);
      ::FString::operator=((FString *)((longlong)param_1 + 0x100),pFVar2);
      iVar1 = *(int *)((longlong)param_1 + 0x108) + -1;
      if (*(int *)((longlong)param_1 + 0x108) == 0) {
        iVar1 = iVar5;
      }
      ::FString::AssignRange
                ((FString *)((longlong)param_1 + 0x268),*(wchar_t **)((longlong)param_1 + 0x100),
                 iVar1);
    }
    else {
      FVar3.Data = (FScriptContainerElement *)L"";
      if (iStack_20 != 0) {
        FVar3.Data = FStack_28.Data;
      }
      ::FString::ConstructFromPtrSize(&FStack_18,(wchar_t *)FVar3.Data,0x50);
      iVar1 = FStack_18.Data.ArrayNum + -1;
      if (FStack_18.Data.ArrayNum == 0) {
        iVar1 = iVar5;
      }
      ::FString::AssignRange
                ((FString *)((longlong)param_1 + 0x100),
                 (wchar_t *)FStack_18.Data.AllocatorInstance.Data,iVar1);
      iVar1 = *(int *)((longlong)param_1 + 0x108) + -1;
      if (*(int *)((longlong)param_1 + 0x108) == 0) {
        iVar1 = iVar5;
      }
      ::FString::AssignRange
                ((FString *)((longlong)param_1 + 0x268),*(wchar_t **)((longlong)param_1 + 0x100),
                 iVar1);
      iStack_30 = FFieldNotificationClassDescriptor::NoteString.BitNumber;
      FStack_38 = FFieldNotificationClassDescriptor::NoteString.FieldName;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_38);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
    }
    if (FStack_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data);
    }
  }
  return;
}

// SetClickOkEvnet_WrapperImpl @ 14b754cf0

void __cdecl UDS_VM_W_WorldMap_MarkerNote::SetClickOkEvnet_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UDS_WorldMapMarkerManager *this;
  FDS_WorldMapMarkerInfo *pFVar4;
  UDS_WorldMapEvent *pUVar5;
  FString *pFVar6;
  longlong *plVar7;
  FString *pFVar8;
  FString *pFVar9;
  undefined1 *puVar10;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FString FStack_98;
  FString FStack_88;
  FString FStack_78;
  FDS_WorldMapMarkerInfo FStack_68;
  
  this = UDS_WorldMapMarkerManager::GetInst();
  if (this != (UDS_WorldMapMarkerManager *)0x0) {
    pFVar4 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo
                       (&FStack_68,(FDS_WorldMapMarkerInfo *)((longlong)param_1 + 0x250));
    UDS_WorldMapMarkerManager::RegisterWorldMapMarkerNote(this,pFVar4);
    pUVar5 = UDS_WorldMapEvent::GetEvent();
    if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
      pFVar6 = ::FString::FString(&FStack_98,(FString *)((longlong)param_1 + 0x268));
      lVar1 = *(longlong *)((longlong)param_1 + 0x250);
      if (*(int *)&(pUVar5->MarkerNoteInfoDelegate).Subscriptions.field_0x8 !=
          *(int *)&(pUVar5->MarkerNoteInfoDelegate).Subscriptions.field_0x34) {
        puVar10 = *(undefined1 **)&(pUVar5->MarkerNoteInfoDelegate).Subscriptions.field_0x40;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(pUVar5->MarkerNoteInfoDelegate).Subscriptions.field_0x38;
        }
        iVar3 = *(int *)(puVar10 +
                        ((ulonglong)
                         (*(int *)&(pUVar5->MarkerNoteInfoDelegate).Subscriptions.field_0x48 - 1) &
                        (lVar1 >> 0x20) * 0x17 + lVar1) * 4);
        if (iVar3 != -1) {
          do {
            plVar7 = (longlong *)
                     ((longlong)iVar3 * 0x50 +
                     *(longlong *)&(pUVar5->MarkerNoteInfoDelegate).Subscriptions);
            if (*plVar7 == lVar1) {
              this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(plVar7 + 1);
              if (plVar7 == (longlong *)0x0) {
                this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
              }
              if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
                pFVar8 = ::FString::FString(&FStack_88,pFVar6);
                pFVar9 = ::FString::FString(&FStack_78,pFVar8);
                TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::
                Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,FString>
                          (this_00,pFVar9);
                pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
                if (pFVar2 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar2);
                }
              }
              break;
            }
            iVar3 = (int)plVar7[9];
          } while (iVar3 != -1);
        }
      }
      pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    CloseWidget(param_1);
  }
  return;
}

// SetClickCancleEvnet_WrapperImpl @ 14b754d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_WorldMap_MarkerNote::SetClickCancleEvnet_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_W_WorldMap_MarkerNote::CloseWidget",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x6f,L"windowMng is nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this,MapMarkerNote,auStack_144,&fStack_148);
  }
  return;
}

// StaticClass @ 14b754d10

UClass * __cdecl UDS_VM_W_WorldMap_MarkerNote::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_WorldMap_MarkerNote.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_WorldMap_MarkerNote",
               &Z_Registration_Info_UClass_UDS_VM_W_WorldMap_MarkerNote.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_WorldMap_MarkerNote,0x2b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_WorldMap_MarkerNote>,
               InternalVTableHelperCtorCaller<UDS_VM_W_WorldMap_MarkerNote>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_WorldMap_MarkerNote.InnerSingleton;
}

// UDS_VM_W_WorldMap_MarkerNote @ 14b75a0d0

UDS_VM_W_WorldMap_MarkerNote * __thiscall
UDS_VM_W_WorldMap_MarkerNote::UDS_VM_W_WorldMap_MarkerNote
          (UDS_VM_W_WorldMap_MarkerNote *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_ContentsPopupTitle).field0_0x0.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_WorldMap_MarkerNote__6B_;
  FText::FText(&(this->TextChangedEvent).NewText);
  (this->ClickOkEvnet)._padding_ = '\0';
  (this->ClickOkEvnet).bIsCustomSelected = false;
  (this->ClickOkEvnet).bIsLacked = false;
  (this->ClickOkEvnet).bIsCustomDisabled = false;
  this_00 = &(this->WorldMapMarkerInfo).Widget;
  *(undefined8 *)&(this->ClickOkEvnet).Delegate = 0;
  *(undefined8 *)&(this->ClickOkEvnet).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOkEvnet).Delegate.field_0x10 = 0;
  (this->ClickCancleEvnet)._padding_ = '\0';
  (this->ClickCancleEvnet).bIsCustomSelected = false;
  (this->ClickCancleEvnet).bIsLacked = false;
  (this->ClickCancleEvnet).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancleEvnet).Delegate = 0;
  *(undefined8 *)&(this->ClickCancleEvnet).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancleEvnet).Delegate.field_0x10 = 0;
  (this->NoteString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NoteString).Data.ArrayNum = 0;
  (this->NoteString).Data.ArrayMax = 0;
  (this->FixedText_DetailInfo).StringTableType = StringUi;
  (this->FixedText_DetailInfo).StringTableID = 0x44625;
  (this->FixedText_DetailInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DetailInfo).StringEnumTableNameID.Number = 0;
  (this->FixedText_DetailInfo).DateTime.Ticks = 0;
  (this->FixedText_DetailInfo).TimeSpan.Ticks = 0;
  (this->FixedText_DetailInfo).TimeExpressionType = None;
  (this->FixedText_DetailInfo).IsExpression = false;
  (this->FixedText_DetailInfo).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DetailInfo).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DetailInfo).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DetailInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_DetailInfo).FormatArgs.ArrayNum = 0;
  (this->FixedText_DetailInfo).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Hint_Enter).StringTableType = StringUi;
  (this->FixedText_Hint_Enter).StringTableID = 0x44629;
  (this->FixedText_Hint_Enter).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Hint_Enter).StringEnumTableNameID.Number = 0;
  (this->FixedText_Hint_Enter).DateTime.Ticks = 0;
  (this->FixedText_Hint_Enter).TimeSpan.Ticks = 0;
  (this->FixedText_Hint_Enter).TimeExpressionType = None;
  (this->FixedText_Hint_Enter).IsExpression = false;
  (this->FixedText_Hint_Enter).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Hint_Enter).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Hint_Enter).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Hint_Enter).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Hint_Enter).FormatArgs.ArrayNum = 0;
  (this->FixedText_Hint_Enter).FormatArgs.ArrayMax = 0;
  (this->WorldMapMarkerInfo).key = 0;
  (this->WorldMapMarkerInfo).Floor = 0;
  (this->WorldMapMarkerInfo).IslandID = 0;
  (this->WorldMapMarkerInfo).IndoorGroupID = 0;
  (this->WorldMapMarkerInfo).SavedScale = 0.0;
  (this->WorldMapMarkerInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldMapMarkerInfo).Memo.Data.ArrayNum = 0;
  (this->WorldMapMarkerInfo).Memo.Data.ArrayMax = 0;
  local_res8 = 0;
  (this->WorldMapMarkerInfo).MarkerGlobalPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->WorldMapMarkerInfo).CurMapPositionOffset.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->WorldMapMarkerInfo).MakerVector2D.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  this->IsSharedMarker = false;
  return this;
}

// UDS_VM_W_WorldMap_MarkerNote @ 14b75a320

UDS_VM_W_WorldMap_MarkerNote * __thiscall
UDS_VM_W_WorldMap_MarkerNote::UDS_VM_W_WorldMap_MarkerNote
          (UDS_VM_W_WorldMap_MarkerNote *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_ContentsPopupTitle).field0_0x0.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_WorldMap_MarkerNote__6B_;
  FText::FText(&(this->TextChangedEvent).NewText);
  (this->ClickOkEvnet)._padding_ = '\0';
  (this->ClickOkEvnet).bIsCustomSelected = false;
  (this->ClickOkEvnet).bIsLacked = false;
  (this->ClickOkEvnet).bIsCustomDisabled = false;
  this_00 = &(this->WorldMapMarkerInfo).Widget;
  *(undefined8 *)&(this->ClickOkEvnet).Delegate = 0;
  *(undefined8 *)&(this->ClickOkEvnet).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOkEvnet).Delegate.field_0x10 = 0;
  (this->ClickCancleEvnet)._padding_ = '\0';
  (this->ClickCancleEvnet).bIsCustomSelected = false;
  (this->ClickCancleEvnet).bIsLacked = false;
  (this->ClickCancleEvnet).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancleEvnet).Delegate = 0;
  *(undefined8 *)&(this->ClickCancleEvnet).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancleEvnet).Delegate.field_0x10 = 0;
  (this->NoteString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NoteString).Data.ArrayNum = 0;
  (this->NoteString).Data.ArrayMax = 0;
  (this->FixedText_DetailInfo).StringTableType = StringUi;
  (this->FixedText_DetailInfo).StringTableID = 0x44625;
  (this->FixedText_DetailInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DetailInfo).StringEnumTableNameID.Number = 0;
  (this->FixedText_DetailInfo).DateTime.Ticks = 0;
  (this->FixedText_DetailInfo).TimeSpan.Ticks = 0;
  (this->FixedText_DetailInfo).TimeExpressionType = None;
  (this->FixedText_DetailInfo).IsExpression = false;
  (this->FixedText_DetailInfo).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DetailInfo).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DetailInfo).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DetailInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_DetailInfo).FormatArgs.ArrayNum = 0;
  (this->FixedText_DetailInfo).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Hint_Enter).StringTableType = StringUi;
  (this->FixedText_Hint_Enter).StringTableID = 0x44629;
  (this->FixedText_Hint_Enter).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Hint_Enter).StringEnumTableNameID.Number = 0;
  (this->FixedText_Hint_Enter).DateTime.Ticks = 0;
  (this->FixedText_Hint_Enter).TimeSpan.Ticks = 0;
  (this->FixedText_Hint_Enter).TimeExpressionType = None;
  (this->FixedText_Hint_Enter).IsExpression = false;
  (this->FixedText_Hint_Enter).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Hint_Enter).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Hint_Enter).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Hint_Enter).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Hint_Enter).FormatArgs.ArrayNum = 0;
  (this->FixedText_Hint_Enter).FormatArgs.ArrayMax = 0;
  (this->WorldMapMarkerInfo).key = 0;
  (this->WorldMapMarkerInfo).Floor = 0;
  (this->WorldMapMarkerInfo).IslandID = 0;
  (this->WorldMapMarkerInfo).IndoorGroupID = 0;
  (this->WorldMapMarkerInfo).SavedScale = 0.0;
  (this->WorldMapMarkerInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldMapMarkerInfo).Memo.Data.ArrayNum = 0;
  (this->WorldMapMarkerInfo).Memo.Data.ArrayMax = 0;
  local_res8 = 0;
  (this->WorldMapMarkerInfo).MarkerGlobalPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->WorldMapMarkerInfo).CurMapPositionOffset.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->WorldMapMarkerInfo).MakerVector2D.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  this->IsSharedMarker = false;
  return this;
}

// ~UDS_VM_W_WorldMap_MarkerNote @ 14b75bc40

void __thiscall
UDS_VM_W_WorldMap_MarkerNote::~UDS_VM_W_WorldMap_MarkerNote(UDS_VM_W_WorldMap_MarkerNote *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_WorldMap_MarkerNote__6B_;
  pFVar1 = (this->WorldMapMarkerInfo).Memo.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Hint_Enter).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Hint_Enter).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Hint_Enter).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Hint_Enter).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_OK).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_DetailInfo).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_DetailInfo).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_DetailInfo).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_DetailInfo).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NoteString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancleEvnet).Delegate);
  pvVar2 = *(void **)&(this->ClickCancleEvnet).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancleEvnet).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickOkEvnet).Delegate);
  pvVar2 = *(void **)&(this->ClickOkEvnet).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickOkEvnet).Delegate);
  pIVar3 = (this->TextChangedEvent).NewText.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75df20

IClassDescriptor * __thiscall
UDS_VM_W_WorldMap_MarkerNote::GetFieldNotificationDescriptor(UDS_VM_W_WorldMap_MarkerNote *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_WorldMap_MarkerNote::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e970

UClass * __cdecl UDS_VM_W_WorldMap_MarkerNote::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_WorldMap_MarkerNote.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_WorldMap_MarkerNote",
               &Z_Registration_Info_UClass_UDS_VM_W_WorldMap_MarkerNote.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_WorldMap_MarkerNote,0x2b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_WorldMap_MarkerNote>,
               InternalVTableHelperCtorCaller<UDS_VM_W_WorldMap_MarkerNote>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_WorldMap_MarkerNote.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_WorldMap_MarkerNote @ 14b75efe0

void __cdecl UDS_VM_W_WorldMap_MarkerNote::StaticRegisterNativesUDS_VM_W_WorldMap_MarkerNote(void)

{
  return;
}

// CloseWidget @ 14c006aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_WorldMap_MarkerNote::CloseWidget(UDS_VM_W_WorldMap_MarkerNote *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_WorldMap_MarkerNote::CloseWidget",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x6f,L"windowMng is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,MapMarkerNote,local_144,&local_148);
  }
  return;
}

// InitViewModel @ 14c01f1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_WorldMap_MarkerNote::InitViewModel(UDS_VM_W_WorldMap_MarkerNote *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_ContentsPopupTitle *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_ContentsPopupTitle).field0_0x0.DebugPtr == (UDS_VM_W_ContentsPopupTitle *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_W_ContentsPopupTitle_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_W_ContentsPopupTitle_NoRegister();
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
    pUVar5 = (UDS_VM_W_ContentsPopupTitle *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_W_ContentsPopupTitle *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_W_ContentsPopupTitle *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_ContentsPopupTitle).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnClickCancleEvent @ 14c026210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_WorldMap_MarkerNote::OnClickCancleEvent
          (UDS_VM_W_WorldMap_MarkerNote *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_W_WorldMap_MarkerNote::CloseWidget",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x6f,L"windowMng is nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,MapMarkerNote,auStack_144,&fStack_148);
  }
  return;
}

// OnClickOkEvent @ 14c026730

void __thiscall
UDS_VM_W_WorldMap_MarkerNote::OnClickOkEvent
          (UDS_VM_W_WorldMap_MarkerNote *this,FDS_ButtonEventField *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UDS_WorldMapMarkerManager *this_00;
  FDS_WorldMapMarkerInfo *pFVar4;
  UDS_WorldMapEvent *pUVar5;
  FString *pFVar6;
  longlong *plVar7;
  FString *pFVar8;
  FString *pFVar9;
  undefined1 *puVar10;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_01;
  FString local_98;
  FString local_88;
  FString local_78;
  FDS_WorldMapMarkerInfo local_68;
  
  this_00 = UDS_WorldMapMarkerManager::GetInst();
  if (this_00 != (UDS_WorldMapMarkerManager *)0x0) {
    pFVar4 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo(&local_68,&this->WorldMapMarkerInfo);
    UDS_WorldMapMarkerManager::RegisterWorldMapMarkerNote(this_00,pFVar4);
    pUVar5 = UDS_WorldMapEvent::GetEvent();
    if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
      pFVar6 = ::FString::FString(&local_98,&(this->WorldMapMarkerInfo).Memo);
      lVar1 = (this->WorldMapMarkerInfo).key;
      if (*(int *)&(pUVar5->MarkerNoteInfoDelegate).Subscriptions.field_0x8 !=
          *(int *)&(pUVar5->MarkerNoteInfoDelegate).Subscriptions.field_0x34) {
        puVar10 = *(undefined1 **)&(pUVar5->MarkerNoteInfoDelegate).Subscriptions.field_0x40;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(pUVar5->MarkerNoteInfoDelegate).Subscriptions.field_0x38;
        }
        iVar3 = *(int *)(puVar10 +
                        ((ulonglong)
                         (*(int *)&(pUVar5->MarkerNoteInfoDelegate).Subscriptions.field_0x48 - 1) &
                        (lVar1 >> 0x20) * 0x17 + lVar1) * 4);
        if (iVar3 != -1) {
          do {
            plVar7 = (longlong *)
                     ((longlong)iVar3 * 0x50 +
                     *(longlong *)&(pUVar5->MarkerNoteInfoDelegate).Subscriptions);
            if (*plVar7 == lVar1) {
              this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(plVar7 + 1);
              if (plVar7 == (longlong *)0x0) {
                this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
              }
              if (this_01 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
                pFVar8 = ::FString::FString(&local_88,pFVar6);
                pFVar9 = ::FString::FString(&local_78,pFVar8);
                TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::
                Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,FString>
                          (this_01,pFVar9);
                pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
                if (pFVar2 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar2);
                }
              }
              break;
            }
            iVar3 = (int)plVar7[9];
          } while (iVar3 != -1);
        }
      }
      pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    CloseWidget(this);
  }
  return;
}

// OnSetViewModel @ 14c0364a0

void __thiscall
UDS_VM_W_WorldMap_MarkerNote::OnSetViewModel
          (UDS_VM_W_WorldMap_MarkerNote *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_VM_W_ContentsPopupTitle *this_00;
  code *pcVar3;
  bool bVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  int iVar9;
  FName local_b8;
  int local_b0;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> local_98;
  FDS_Text local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_WorldMapMarkerInfo>(&local_98,&local_38);
  if (local_98.Object != (FDS_ViewModelContext_WorldMapMarkerInfo *)0x0) {
    FDS_WorldMapMarkerInfo::operator=
              (&this->WorldMapMarkerInfo,&(local_98.Object)->WorldMapMarkerInfo);
    pFVar8 = (FDS_ViewModelContext *)0x0;
    this->IsSharedMarker = (local_98.Object)->IsSharedMarker;
    if ((this->VM_ContentsPopupTitle).field0_0x0.DebugPtr != (UDS_VM_W_ContentsPopupTitle *)0x0) {
      pFVar5 = ::operator_new(0x70);
      pFVar7 = pFVar8;
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(undefined4 *)&pFVar5->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 1) = 0;
        *(undefined2 *)((longlong)&pFVar5[1]._padding_ + 5) = 0;
        *(undefined1 *)((longlong)&pFVar5[1]._padding_ + 7) = 0;
        *(undefined2 *)&((atomic<int> *)&pFVar5[2].DerivedStaticStruct)[1].field_0x1 = 0;
        ((atomic<int> *)&pFVar5[2].DerivedStaticStruct)[1].field_0x3 = 0;
        pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_PopupTitle__6B_;
        *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
        (pFVar5->ViewModelName).ComparisonIndex = 0;
        (pFVar5->ViewModelName).Number = 0;
        pFVar5->ViewModelTemplateKey = None;
        *(undefined1 *)&pFVar5[1]._padding_ = 0;
        *(undefined8 *)&pFVar5[1].DerivedStaticStruct = 0;
        pFVar5[1].ViewModelName.ComparisonIndex = 0;
        pFVar5[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar5[1].ViewModelTemplateKey = 0;
        pFVar5[2]._padding_ = 0;
        *(atomic<int> *)&pFVar5[2].DerivedStaticStruct = (atomic<int>)0x0;
        *(undefined1 *)((atomic<int> *)&pFVar5[2].DerivedStaticStruct + 1) = 0;
        pFVar5[2].ViewModelName.ComparisonIndex = 0;
        pFVar5[2].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar5[2].ViewModelTemplateKey = 0;
        pFVar5[3]._padding_ = 0;
        *(undefined8 *)&pFVar5[3].DerivedStaticStruct = 0;
        pFVar7 = pFVar5;
      }
      pFVar5 = ::operator_new(0x20);
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar5->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PopupTitle__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar7;
        pFVar8 = pFVar5;
      }
      if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = FDS_ViewModelContext_PopupTitle::StaticStruct();
      *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar6;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar8->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar7;
        local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
      }
      pFVar7->ViewModelTemplateKey = W_ContentsPopupTitle;
      local_88.StringTableType = None;
      local_88.StringTableID = 0;
      local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_88.StringEnumTableNameID.Number = 0;
      local_88.DateTime.Ticks = 0;
      local_88.TimeSpan.Ticks = 0;
      local_88.TimeExpressionType = None;
      local_88.IsExpression = false;
      local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.UniqueString.Data.ArrayNum = 0;
      local_88.UniqueString.Data.ArrayMax = 0;
      local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.FormatArgs.ArrayNum = 0;
      local_88.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_88,StringUi,0x44626);
      FDS_Text::operator=((FDS_Text *)(pFVar7 + 1),&local_88);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
                 local_88.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
      }
      if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
      }
      this_00 = (this->VM_ContentsPopupTitle).field0_0x0.DebugPtr;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar8->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_28.Object = pFVar7;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
    }
    iVar1 = (this->WorldMapMarkerInfo).Memo.Data.ArrayNum;
    iVar9 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar9 = 0;
    }
    ::FString::AssignRange
              (&this->NoteString,
               (wchar_t *)(this->WorldMapMarkerInfo).Memo.Data.AllocatorInstance.Data,iVar9);
    local_b0 = FFieldNotificationClassDescriptor::NoteString.BitNumber;
    local_b8 = FFieldNotificationClassDescriptor::NoteString.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTextChangedEvent @ 14c039bc0

void __thiscall
UDS_VM_W_WorldMap_MarkerNote::OnTextChangedEvent
          (UDS_VM_W_WorldMap_MarkerNote *this,FDS_TextCommittedEventField *param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  FName local_38;
  int local_30;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  FString local_18;
  
  if (this->IsSharedMarker != true) {
    pFVar2 = FText::ToString(&param_1->NewText);
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = (pFVar2->Data).ArrayNum;
    lVar4 = (longlong)local_20;
    _Src = (pFVar2->Data).AllocatorInstance.Data;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_20,0,&local_28,local_20,&local_1c);
      memcpy(local_28.Data,_Src,lVar4 * 2);
    }
    iVar1 = local_20 + -1;
    if (local_20 == 0) {
      iVar1 = 0;
    }
    iVar5 = 0;
    if (iVar1 < 0x51) {
      pFVar2 = FText::ToString(&param_1->NewText);
      ::FString::operator=(&this->NoteString,pFVar2);
      iVar1 = (this->NoteString).Data.ArrayNum;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = iVar5;
      }
      ::FString::AssignRange
                (&(this->WorldMapMarkerInfo).Memo,
                 (wchar_t *)(this->NoteString).Data.AllocatorInstance.Data,iVar6);
    }
    else {
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_20 != 0) {
        FVar3.Data = local_28.Data;
      }
      ::FString::ConstructFromPtrSize(&local_18,(wchar_t *)FVar3.Data,0x50);
      iVar1 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar1 = iVar5;
      }
      ::FString::AssignRange
                (&this->NoteString,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
      iVar1 = (this->NoteString).Data.ArrayNum;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = iVar5;
      }
      ::FString::AssignRange
                (&(this->WorldMapMarkerInfo).Memo,
                 (wchar_t *)(this->NoteString).Data.AllocatorInstance.Data,iVar6);
      local_30 = FFieldNotificationClassDescriptor::NoteString.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::NoteString.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

