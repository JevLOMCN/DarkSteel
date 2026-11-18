// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 18

// FUIActionBinding @ 14a7aa650

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUIActionBinding * __thiscall
FUIActionBinding::FUIActionBinding
          (FUIActionBinding *this,UWidget *param_1,FBindUIActionArgs *param_2)

{
  FUIActionBindingHandle *pFVar1;
  FUIActionTag *pFVar2;
  int iVar3;
  ITextData *pIVar4;
  UDataTable *pUVar5;
  FUIActionTag FVar6;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FName FVar9;
  FName FVar10;
  code *pcVar11;
  FBindUIActionArgs *this_00;
  bool bVar12;
  int iVar13;
  UClass *pUVar14;
  FUIActionBinding *pFVar15;
  UObject *pUVar16;
  FCommonInputActionDataBase *pFVar17;
  ULocalPlayer *pUVar18;
  UCommonUIActionRouterBase *pUVar19;
  UCommonInputSubsystem *pUVar20;
  FName *pFVar21;
  UCommonInputSettings *pUVar22;
  TSubclassOf<UCommonUIHoldData> TVar23;
  UCommonUIHoldData *pUVar24;
  FName FVar25;
  FString *pFVar26;
  longlong lVar27;
  FUIActionTag this_01;
  FUIActionTag *pFVar28;
  TArray<FUIActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar29;
  FUIActionTag FVar30;
  float fVar31;
  float fVar32;
  undefined1 local_res8 [8];
  FUIActionBinding *local_res10;
  FBindUIActionArgs *local_res18;
  UWidget *local_res20;
  FUIActionKeyMapping local_128;
  FUIActionKeyMapping local_108;
  FUIActionKeyMapping local_e8;
  undefined1 local_c8 [16];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_b8 [2];
  FString local_88 [4];
  
  local_res18 = param_2;
  FBindUIActionArgs::GetActionName(param_2);
  this->InputEvent = param_2->KeyEvent;
  this->bConsumesInput = param_2->bConsumeInput;
  this->bIsPersistent = param_2->bIsPersistent;
  this->PriorityWithinCollection = param_2->PriorityWithinCollection;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->BoundWidget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->BoundWidget).WeakPtr,(FObjectPtr)&local_res20);
  this->InputMode = param_2->InputMode;
  this->UserIndex = -1;
  this->bDisplayInActionBar = param_2->bDisplayInActionBar;
  *(undefined8 *)&(this->InputTypesExemptFromValidKeyCheck).Elements = 0;
  *(undefined8 *)&(this->InputTypesExemptFromValidKeyCheck).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InputTypesExemptFromValidKeyCheck).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InputTypesExemptFromValidKeyCheck).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InputTypesExemptFromValidKeyCheck).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InputTypesExemptFromValidKeyCheck).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputTypesExemptFromValidKeyCheck).Elements.field_0x34 = 0;
  (this->InputTypesExemptFromValidKeyCheck).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InputTypesExemptFromValidKeyCheck).HashSize = 0;
  TSet<enum_ECommonInputType,DefaultKeyFuncs<enum_ECommonInputType,0>,FDefaultSetAllocator>::
  operator=(&this->InputTypesExemptFromValidKeyCheck,&param_2->InputTypesExemptFromValidKeyCheck);
  (this->ActionDisplayName).TextData.Reference = (ITextData *)0x0;
  pIVar4 = (param_2->OverrideDisplayName).TextData.Reference;
  (this->ActionDisplayName).TextData.Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  (this->ActionDisplayName).Flags = (param_2->OverrideDisplayName).Flags;
  (this->OwningCollection).Object = (FActionRouterBindingCollection *)0x0;
  (this->OwningCollection).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnExecuteAction = 0;
  *(undefined8 *)&(this->OnExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->OnExecuteAction).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnExecuteAction,&param_2->OnExecuteAction);
  iVar3 = IdCounter;
  IdCounter = IdCounter + 1;
  (this->Handle).CachedDebugActionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Handle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->Handle).CachedDebugActionName.Data.ArrayMax = 0;
  (this->Handle).RegistrationId = iVar3;
  (this->NormalMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalMappings).ArrayNum = 0;
  (this->NormalMappings).ArrayMax = 0;
  (this->HoldMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HoldMappings).ArrayNum = 0;
  (this->HoldMappings).ArrayMax = 0;
  *(undefined8 *)&this->OnHoldActionProgressed = 0;
  *(undefined8 *)&(this->OnHoldActionProgressed).field_0x8 = 0;
  *(undefined8 *)&(this->OnHoldActionProgressed).field_0x10 = 0;
  *(undefined8 *)&(this->OnHoldActionProgressed).field_0x18 = 2;
  *(undefined8 *)&this->OnHoldActionPressed = 0;
  *(undefined8 *)&(this->OnHoldActionPressed).field_0x8 = 0;
  *(undefined8 *)&(this->OnHoldActionPressed).field_0x10 = 0;
  *(undefined8 *)&(this->OnHoldActionPressed).field_0x18 = 2;
  *(undefined8 *)&this->OnHoldActionReleased = 0;
  *(undefined8 *)&(this->OnHoldActionReleased).field_0x8 = 0;
  *(undefined8 *)&(this->OnHoldActionReleased).field_0x10 = 0;
  *(undefined8 *)&(this->OnHoldActionReleased).field_0x18 = 2;
  pUVar5 = (param_2->LegacyActionTableRow).DataTable.field0_0x0.DebugPtr;
  (this->LegacyActionTableRow).DataTable.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->LegacyActionTableRow).RowName = (param_2->LegacyActionTableRow).RowName;
  (this->InputAction).WeakPtr = (param_2->InputAction).WeakPtr;
  this->HoldStartTime = -1.0;
  this->HoldStartSecond = 0.0;
  this->CurrentHoldSecond = 0.0;
  this->HoldTime = 0.0;
  (this->HoldProgressRollbackTickerHandle).Object = (FElement *)0x0;
  (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->HoldRollbackMultiplier = 1.0;
  TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
             &this->OnHoldActionProgressed,
             (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)local_c8);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->OnHoldActionPressed,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(local_c8 + 8));
  this_00 = local_res18;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->OnHoldActionReleased,local_b8);
  local_res10 = this;
  if (this_00->ActionTag != (FUIActionTag)0x0) {
    pUVar14 = UCommonUIInputSettings::StaticClass();
    if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar14);
    }
    pUVar16 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr;
    pFVar28 = *(FUIActionTag **)&pUVar16[1].field_0x8;
    pFVar2 = pFVar28 + (longlong)*(int *)&pUVar16[1].field_0x10 * 5;
    for (; pFVar28 != pFVar2; pFVar28 = pFVar28 + 5) {
      if (*pFVar28 == this_00->ActionTag) goto LAB_14a7aa9a6;
    }
    pFVar28 = (FUIActionTag *)0x0;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ActionMapping",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                        ,0x99,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pFVar15 = (FUIActionBinding *)(*pcVar11)();
      return pFVar15;
    }
LAB_14a7aa9a6:
    bVar12 = FText::IsEmpty(&this->ActionDisplayName);
    if (bVar12) {
      FText::operator=(&this->ActionDisplayName,(FText *)(pFVar28 + 1));
    }
    iVar3 = *(int *)(pFVar28 + 4);
    this_01 = pFVar28[3];
    FVar30 = (FUIActionTag)((longlong)iVar3 * 0x20 + (longlong)this_01);
    while( true ) {
      if (*(int *)(pFVar28 + 4) != iVar3) {
        local_res18 = (FBindUIActionArgs *)((ulonglong)local_res18 & 0xffffffffffffff00);
        `TCheckedPointerIterator<FUIActionKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (this_01 == FVar30) break;
      bVar12 = FKey::IsValid((FKey *)this_01);
      if (bVar12) {
        if ((float)(((FKey *)((longlong)this_01 + 0x18))->KeyName).ComparisonIndex.Value <= 0.0) {
          pTVar29 = &local_res10->NormalMappings;
        }
        else {
          pTVar29 = &local_res10->HoldMappings;
        }
        FVar6 = (FUIActionTag)(pTVar29->AllocatorInstance).Data;
        if ((((ulonglong)FVar6 <= (ulonglong)this_01) &&
            ((ulonglong)this_01 < (ulonglong)((longlong)pTVar29->ArrayMax * 0x20 + (longlong)FVar6))
            ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
          pcVar11 = (code *)swi(3);
          pFVar15 = (FUIActionBinding *)(*pcVar11)();
          return pFVar15;
        }
        iVar13 = pTVar29->ArrayNum;
        if (iVar13 == pTVar29->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar29->AllocatorInstance,&pTVar29->ArrayMax);
        }
        pTVar29->ArrayNum = iVar13 + 1;
        pFVar7 = (pTVar29->AllocatorInstance).Data;
        lVar27 = (longlong)iVar13 * 0x20;
        *(undefined8 *)(pFVar7 + lVar27) = *(undefined8 *)this_01;
        *(FKeyDetails **)(pFVar7 + lVar27 + 8) =
             ((TSharedPtr<FKeyDetails,1> *)((longlong)this_01 + 8))->Object;
        pTVar8 = ((FSharedReferencer<1> *)((longlong)this_01 + 0x10))->ReferenceController;
        *(TReferenceControllerBase<1> **)(pFVar7 + lVar27 + 0x10) = pTVar8;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(uint *)(pFVar7 + lVar27 + 0x18) =
             (((FKey *)((longlong)this_01 + 0x18))->KeyName).ComparisonIndex.Value;
        *(uint *)(pFVar7 + lVar27 + 0x1c) = (((FKey *)((longlong)this_01 + 0x18))->KeyName).Number;
      }
      this_01 = (FUIActionTag)&((FKey *)((longlong)this_01 + 0x18))->KeyDetails;
    }
    goto LAB_14a7aaf2e;
  }
  bVar12 = CommonUI::IsEnhancedInputSupportEnabled();
  if ((bVar12) && (bVar12 = FWeakObjectPtr::IsValid(&(param_2->InputAction).WeakPtr), bVar12)) {
    bVar12 = FText::IsEmpty(&this->ActionDisplayName);
    if (bVar12) {
      pUVar16 = FWeakObjectPtr::Get(&(param_2->InputAction).WeakPtr);
      FText::operator=(&this->ActionDisplayName,(FText *)&pUVar16[1].field_0x8);
    }
    goto LAB_14a7aaf2e;
  }
  pFVar17 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>(&this->LegacyActionTableRow,L"")
  ;
  if ((pFVar17 == (FCommonInputActionDataBase *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("LegacyActionData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                          ,0xb2,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    pFVar15 = (FUIActionBinding *)(*pcVar11)();
    return pFVar15;
  }
  bVar12 = FText::IsEmpty(&this->ActionDisplayName);
  if (bVar12) {
    FText::operator=(&this->ActionDisplayName,&pFVar17->DisplayName);
  }
  pUVar18 = (ULocalPlayer *)(**(code **)(param_1->_padding_ + 0x2e0))(param_1);
  pUVar19 = (UCommonUIActionRouterBase *)0x0;
  if (pUVar18 != (ULocalPlayer *)0x0) {
    pUVar19 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(pUVar18);
  }
  pUVar18 = CastChecked<ULocalPlayer,UObject>((UObject *)pUVar19->_padding_);
  pUVar20 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(pUVar18);
  if ((pUVar20 == (UCommonInputSubsystem *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InputSubsytem",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                          ,0x28d,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    pFVar15 = (FUIActionBinding *)(*pcVar11)();
    return pFVar15;
  }
  UCommonInputSubsystem::GetCurrentGamepadName(pUVar20);
  pFVar21 = (FName *)(**(code **)(pFVar17->_padding_ + 0x20))
                               (pFVar17,0,&FCommonInputDefaults::GamepadGeneric);
  if (*(char *)((longlong)&pFVar21[3].ComparisonIndex.Value + 1) == '\0') {
    fVar31 = 0.0;
    fVar32 = 0.0;
  }
  else {
    fVar31 = (float)pFVar21[4].ComparisonIndex.Value;
    fVar32 = (float)pFVar21[3].Number;
  }
  FVar25 = pFVar21[2];
  FVar9 = *pFVar21;
  FVar10 = pFVar21[1];
  if (FVar25 == (FName)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    *(atomic<int> *)((longlong)FVar25 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar25 + 8) + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    *(atomic<int> *)((longlong)FVar25 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar25 + 8) + 1);
    UNLOCK();
  }
  local_e8.Key.KeyName = FVar9;
  local_e8.Key.KeyDetails.Object = (FKeyDetails *)FVar10;
  local_e8.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)FVar25;
  local_e8.HoldTime = fVar32;
  local_e8.HoldRollbackTime = fVar31;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar25);
  pFVar21 = (FName *)(**(code **)(pFVar17->_padding_ + 0x20))
                               (pFVar17,2,&FCommonInputDefaults::GamepadGeneric);
  if (*(char *)((longlong)&pFVar21[3].ComparisonIndex.Value + 1) == '\0') {
    fVar31 = 0.0;
    fVar32 = 0.0;
  }
  else {
    fVar31 = (float)pFVar21[4].ComparisonIndex.Value;
    fVar32 = (float)pFVar21[3].Number;
  }
  FVar25 = pFVar21[2];
  FVar9 = *pFVar21;
  FVar10 = pFVar21[1];
  if (FVar25 == (FName)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    *(atomic<int> *)((longlong)FVar25 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar25 + 8) + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    *(atomic<int> *)((longlong)FVar25 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar25 + 8) + 1);
    UNLOCK();
  }
  local_108.Key.KeyName = FVar9;
  local_108.Key.KeyDetails.Object = (FKeyDetails *)FVar10;
  local_108.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)FVar25;
  local_108.HoldTime = fVar32;
  local_108.HoldRollbackTime = fVar31;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar25);
  pUVar18 = (ULocalPlayer *)(**(code **)(param_1->_padding_ + 0x2e0))(param_1);
  if (pUVar18 == (ULocalPlayer *)0x0) {
    pUVar19 = (UCommonUIActionRouterBase *)0x0;
LAB_14a7aad20:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ActionRouter",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                        ,0xc6,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pFVar15 = (FUIActionBinding *)(*pcVar11)();
      return pFVar15;
    }
  }
  else {
    pUVar19 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(pUVar18);
    if (pUVar19 == (UCommonUIActionRouterBase *)0x0) goto LAB_14a7aad20;
  }
  pcVar11 = *(code **)(pFVar17->_padding_ + 0x20);
  pUVar18 = CastChecked<ULocalPlayer,UObject>((UObject *)pUVar19->_padding_);
  pUVar20 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(pUVar18);
  if ((pUVar20 == (UCommonInputSubsystem *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InputSubsytem",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                          ,0x28d,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    pFVar15 = (FUIActionBinding *)(*pcVar11)();
    return pFVar15;
  }
  FVar25 = UCommonInputSubsystem::GetCurrentGamepadName(pUVar20);
  pFVar21 = (FName *)(*pcVar11)(pFVar17,1,FVar25);
  if (*(char *)((longlong)&pFVar21[3].ComparisonIndex.Value + 1) == '\0') {
    fVar31 = 0.0;
    fVar32 = 0.0;
  }
  else {
    fVar31 = (float)pFVar21[4].ComparisonIndex.Value;
    fVar32 = (float)pFVar21[3].Number;
  }
  FVar25 = pFVar21[2];
  FVar9 = *pFVar21;
  FVar10 = pFVar21[1];
  if (FVar25 == (FName)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    *(atomic<int> *)((longlong)FVar25 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar25 + 8) + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    *(atomic<int> *)((longlong)FVar25 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar25 + 8) + 1);
    UNLOCK();
  }
  local_128.Key.KeyName = FVar9;
  local_128.Key.KeyDetails.Object = (FKeyDetails *)FVar10;
  local_128.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)FVar25;
  local_128.HoldTime = fVar32;
  local_128.HoldRollbackTime = fVar31;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar25);
  if (this_00->bForceHold != false) {
    pUVar22 = ICommonInputModule::GetSettings();
    TVar23 = UCommonInputSettings::GetDefaultHoldData(pUVar22);
    lVar27 = *(longlong *)TVar23.Class.field0_0x0;
    if ((lVar27 != 0) &&
       (pUVar14 = Z_Construct_UClass_UCommonUIHoldData_NoRegister(), pUVar14 != (UClass *)0x0)) {
      iVar3 = (int)pUVar14->_padding_;
      if ((*(int *)(lVar27 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar27 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar14->_padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((bVar12) && (*(longlong *)TVar23.Class.field0_0x0 != 0)) {
        pUVar22 = ICommonInputModule::GetSettings();
        TVar23 = UCommonInputSettings::GetDefaultHoldData(pUVar22);
        pUVar24 = TSubclassOf<UCommonUIHoldData>::GetDefaultObject
                            ((TSubclassOf<UCommonUIHoldData> *)TVar23.Class.field0_0x0);
        if (local_e8.HoldTime <= 0.0) {
          local_e8.HoldTime = (pUVar24->KeyboardAndMouse).HoldTime;
        }
        if (local_108.HoldTime <= 0.0) {
          local_108.HoldTime = (pUVar24->Touch).HoldTime;
        }
        if (local_128.HoldTime <= 0.0) {
          local_128.HoldTime = (pUVar24->Gamepad).HoldTime;
        }
      }
    }
  }
  `FUIActionBinding::FUIActionBinding'::__l2::<lambda_1>::operator()(&local_res10,&local_e8);
  `FUIActionBinding::FUIActionBinding'::__l2::<lambda_1>::operator()(&local_res10,&local_108);
  `FUIActionBinding::FUIActionBinding'::__l2::<lambda_1>::operator()(&local_res10,&local_128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.Key.KeyDetails.SharedReferenceCount.ReferenceController);
LAB_14a7aaf2e:
  FVar25 = FBindUIActionArgs::GetActionName(this_00);
  pFVar26 = ::FName::ToString((FName *)FVar25,local_88);
  pFVar1 = &this->Handle;
  if (pFVar1 != (FUIActionBindingHandle *)pFVar26) {
    pFVar7 = (pFVar1->CachedDebugActionName).Data.AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar1->CachedDebugActionName).Data.AllocatorInstance.Data =
         (pFVar26->Data).AllocatorInstance.Data;
    (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Handle).CachedDebugActionName.Data.ArrayNum = (pFVar26->Data).ArrayNum;
    (this->Handle).CachedDebugActionName.Data.ArrayMax = (pFVar26->Data).ArrayMax;
    (pFVar26->Data).ArrayNum = 0;
    (pFVar26->Data).ArrayMax = 0;
  }
  if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FUIActionBinding @ 14a7b1760

void __thiscall FUIActionBinding::~FUIActionBinding(FUIActionBinding *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  ITextData *pIVar6;
  ForElementType<FSetElementId> FVar7;
  
  pTVar3 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnHoldActionReleased).field_0x8,
             *(int *)&(this->OnHoldActionReleased).field_0x10);
  pvVar4 = *(void **)&(this->OnHoldActionReleased).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoldActionReleased);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnHoldActionPressed).field_0x8,*(int *)&(this->OnHoldActionPressed).field_0x10
            );
  pvVar4 = *(void **)&(this->OnHoldActionPressed).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoldActionPressed);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnHoldActionProgressed).field_0x8,
             *(int *)&(this->OnHoldActionProgressed).field_0x10);
  pvVar4 = *(void **)&(this->OnHoldActionProgressed).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoldActionProgressed);
  DestructItems<FUIActionKeyMapping,int>
            ((FUIActionKeyMapping *)(this->HoldMappings).AllocatorInstance.Data,
             (this->HoldMappings).ArrayNum);
  pFVar5 = (this->HoldMappings).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FUIActionKeyMapping,int>
            ((FUIActionKeyMapping *)(this->NormalMappings).AllocatorInstance.Data,
             (this->NormalMappings).ArrayNum);
  pFVar5 = (this->NormalMappings).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->Handle).CachedDebugActionName.Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExecuteAction);
  pvVar4 = *(void **)&(this->OnExecuteAction).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExecuteAction);
  pTVar3 = (this->OwningCollection).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pIVar6 = (this->ActionDisplayName).TextData.Reference;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  (this->InputTypesExemptFromValidKeyCheck).HashSize = 0;
  FVar7 = (this->InputTypesExemptFromValidKeyCheck).Hash.SecondaryData;
  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<TSparseSetElement<enum_ECommonInputType>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_ECommonInputType>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->InputTypesExemptFromValidKeyCheck);
  return;
}

// operator() @ 14a7b5ae0

void __thiscall
`FUIActionBinding::FUIActionBinding'::__l2::<lambda_1>::operator()
          (void *this,FUIActionKeyMapping *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ForAnyElementType *pFVar8;
  
  bVar5 = FKey::IsValid(&param_1->Key);
  if (bVar5) {
    if (param_1->HoldTime <= 0.0) {
      pFVar8 = (ForAnyElementType *)(*(longlong *)this + 200);
    }
    else {
      pFVar8 = (ForAnyElementType *)(*(longlong *)this + 0xd8);
    }
    if (((FUIActionKeyMapping *)pFVar8->Data <= param_1) &&
       (param_1 < (FUIActionKeyMapping *)pFVar8->Data + *(int *)((longlong)&pFVar8[1].Data + 4))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar8[1].Data;
    piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,pFVar8,piVar1);
    }
    *(int *)&pFVar8[1].Data = iVar6 + 1;
    pFVar2 = pFVar8->Data;
    lVar7 = (longlong)iVar6 * 0x20;
    *(FName *)(pFVar2 + lVar7) = (param_1->Key).KeyName;
    *(FKeyDetails **)(pFVar2 + lVar7 + 8) = (param_1->Key).KeyDetails.Object;
    pTVar3 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar2 + lVar7 + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(float *)(pFVar2 + lVar7 + 0x18) = param_1->HoldTime;
    *(float *)(pFVar2 + lVar7 + 0x1c) = param_1->HoldRollbackTime;
  }
  return;
}

// operator() @ 14a7b5bf0

bool __thiscall
`FUIActionBinding::BeginRollback'::__l2::<lambda_1>::operator()(void *this,float param_1)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  double dVar8;
  double dVar9;
  TSharedPtr<FUIActionBinding,1> local_68;
  TWeakPtr<FTSTicker::FElement,1> local_58;
  undefined8 local_48 [2];
  FUIActionBindingHandle local_38 [2];
  
  ::FString::FString(&local_38[0].CachedDebugActionName,this);
  local_38[0].RegistrationId = *(int *)((longlong)this + 0x10);
  FUIActionBinding::FindBinding(&local_68,local_38);
  if (local_68.Object == (FUIActionBinding *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_68.Object == (FUIActionBinding *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if (local_68.Object == (FUIActionBinding *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  dVar9 = (local_68.Object)->CurrentHoldSecond -
          (double)param_1 * (local_68.Object)->HoldRollbackMultiplier;
  dVar8 = (double)(float)((local_68.Object)->HoldTime / (local_68.Object)->HoldRollbackMultiplier);
  if (dVar8 <= dVar9) {
    dVar9 = dVar8;
  }
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  (local_68.Object)->CurrentHoldSecond = dVar9;
  dVar9 = dVar9 / (local_68.Object)->HoldTime;
  if (__real_3ff0000000000000 <= dVar9) {
    dVar9 = __real_3ff0000000000000;
  }
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
            (&(local_68.Object)->OnHoldActionProgressed,(float)dVar9);
  (local_68.Object)->HoldStartSecond = (local_68.Object)->CurrentHoldSecond;
  if (0.0 < (float)dVar9) {
    bVar6 = true;
  }
  else {
    pTVar2 = &(local_68.Object)->HoldProgressRollbackTickerHandle;
    local_58.Object = pTVar2->Object;
    local_58.WeakReferenceCount.ReferenceController =
         ((local_68.Object)->HoldProgressRollbackTickerHandle).WeakReferenceCount.
         ReferenceController;
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_58);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_48) {
      pTVar4 = ((local_68.Object)->HoldProgressRollbackTickerHandle).WeakReferenceCount.
               ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      ((local_68.Object)->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
    (local_68.Object)->HoldStartSecond = 0.0;
    (local_68.Object)->CurrentHoldSecond = 0.0;
    bVar6 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return bVar6;
}

// BeginHold @ 14a7c14a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUIActionBinding::BeginHold(FUIActionBinding *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar2 = &this->HoldProgressRollbackTickerHandle;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar4 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar2->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  if (6 < (byte)LogUIActionRouter._0_1_) {
    ::FName::ToString(&this->ActionName,(FString *)&local_28);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    if (local_28.Object != (FElement *)0x0) {
      FMemory::Free(local_28.Object);
    }
  }
  QueryPerformanceCounter(&local_res8);
  this->HoldStartTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  dVar5 = 0.0;
  if (0.0 < this->HoldTime) {
    dVar5 = this->HoldStartSecond / this->HoldTime;
  }
  TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnHoldActionProgressed,(float)dVar5);
  return;
}

// BeginRollback @ 14a7c15e0

void __thiscall
FUIActionBinding::BeginRollback
          (FUIActionBinding *this,float param_1,float param_2,FUIActionBindingHandle *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FTSTicker *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  TWeakPtr<FTSTicker::FElement,1> *pTVar7;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FString local_50;
  int local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  this->HoldRollbackMultiplier = (double)(param_2 / param_1);
  this->HoldTime = (double)param_2;
  this_00 = FTSTicker::GetCoreTicker();
  ::FString::FString(&local_50,&param_3->CachedDebugActionName);
  local_40 = param_3->RegistrationId;
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FUIActionBinding::BeginRollback'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = 0;
    puVar5[3] = local_50.Data.AllocatorInstance.Data;
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar5 + 4) = local_50.Data.ArrayNum;
    *(int *)((longlong)puVar5 + 0x24) = local_50.Data.ArrayMax;
    local_50.Data.ArrayNum = 0;
    local_50.Data.ArrayMax = 0;
    *(int *)(puVar5 + 5) = local_40;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar7 = FTSTicker::AddTicker
                     (this_00,&local_78,
                      (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
  if (&this->HoldProgressRollbackTickerHandle != pTVar7) {
    (this->HoldProgressRollbackTickerHandle).Object = pTVar7->Object;
    pTVar7->Object = (FElement *)0x0;
    pTVar3 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
    (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
         (pTVar7->WeakReferenceCount).ReferenceController;
    (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  pFVar4 = (param_3->CachedDebugActionName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CancelHold @ 14a7c3dd0

void __thiscall FUIActionBinding::CancelHold(FUIActionBinding *this)

{
  this->HoldStartTime = -1.0;
  return;
}

// CleanRegistrations @ 14a7c4150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FUIActionBinding::CleanRegistrations(void)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  char cVar4;
  atomic<int> aVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  FString *pFVar9;
  FActionRouterBindingCollection *this;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uVar12;
  int iVar13;
  longlong **local_res8;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
  *local_88;
  char local_80;
  char cStack_7f;
  FReadAccessScope local_78;
  FUIActionBindingHandle local_60;
  undefined1 local_48 [32];
  longlong local_28;
  TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  
  iVar13 = 0;
  TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_48,
             (TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
              *)&AllRegistrationsByHandle);
  local_88 = (TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
              *)&AllRegistrationsByHandle;
  local_80 = '\0';
  cStack_7f = '\0';
  stack0xffffffffffffff58 = local_48._16_16_;
  local_b8 = (longlong *)local_48._0_8_;
  auStack_b0._0_8_ = local_48._8_8_;
  local_98 = local_28;
  pTStack_90 = pTStack_20;
  uVar7 = local_48._24_8_ >> 0x20;
  if (local_48._28_4_ < *(int *)(local_48._16_8_ + 0x18)) {
    do {
      lVar8 = (longlong)(int)uVar7 * 0x30 + *local_b8;
      if ((*(longlong *)(lVar8 + 0x18) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)(lVar8 + 0x18) + 0x14));
      if (bVar3) {
        lVar10 = (longlong)(int)uStack_9c;
        lVar8 = *local_b8;
        if ((*(longlong *)(lVar8 + 0x18 + lVar10 * 0x30) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar8 = *(longlong *)(lVar8 + 0x18 + lVar10 * 0x30);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar8 + 0x98),
                   &local_78);
        if (((*(int *)(lVar8 + 0xa8) == 0) || (*(longlong **)(lVar8 + 0xa0) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar8 + 0xa0) + 0x38))(), cVar4 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_78);
          local_res8 = &local_b8;
          bVar3 = `FUIActionBinding::CleanRegistrations'::__l5::<lambda_1>::operator()(&local_res8);
          if (!bVar3) goto LAB_14a7c42cf;
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_78);
        }
      }
      else {
LAB_14a7c42cf:
        lVar10 = (longlong)(int)uStack_9c;
        lVar8 = *local_b8;
        if ((*(longlong *)(lVar8 + 0x18 + lVar10 * 0x30) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar8 = *(longlong *)(lVar8 + 0x18 + lVar10 * 0x30);
        if (((*(longlong *)(lVar8 + 0x88) != 0) && (lVar8 = *(longlong *)(lVar8 + 0x90), lVar8 != 0)
            ) && (0 < *(int *)(lVar8 + 8))) {
          lVar10 = (longlong)(int)uStack_9c;
          lVar8 = *local_b8;
          if ((*(longlong *)(lVar8 + 0x18 + lVar10 * 0x30) == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          this = (FActionRouterBindingCollection *)0x0;
          lVar8 = *(longlong *)(lVar8 + 0x18 + lVar10 * 0x30);
          pTVar11 = *(TReferenceControllerBase<1> **)(lVar8 + 0x90);
          if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_14a7c43c4:
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
          else {
            aVar2 = pTVar11->SharedReferenceCount;
            do {
              if (aVar2 == (atomic<int>)0x0) {
                pTVar11 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_14a7c43c4;
              }
              LOCK();
              aVar5 = pTVar11->SharedReferenceCount;
              bVar3 = aVar2 == aVar5;
              if (bVar3) {
                pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
                aVar5 = aVar2;
              }
              UNLOCK();
              aVar2 = aVar5;
            } while (!bVar3);
            this = *(FActionRouterBindingCollection **)(lVar8 + 0x88);
            if (this == (FActionRouterBindingCollection *)0x0) goto LAB_14a7c43c4;
          }
          pFVar9 = (FString *)((longlong)(int)uStack_9c * 0x30 + *local_b8);
          ::FString::FString(&local_60.CachedDebugActionName,pFVar9);
          local_60.RegistrationId = *(int *)&pFVar9[1].Data.AllocatorInstance.Data;
          FActionRouterBindingCollection::RemoveBinding(this,&local_60);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
        }
        TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_90,uStack_9c);
        iVar13 = iVar13 + 1;
        local_80 = '\x01';
      }
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      uVar7 = (ulonglong)uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if ((local_80 != '\0') && (cStack_7f != '\0')) {
      uVar12 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (uVar12 < 4) {
        iVar6 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_88->HashSize < iVar6)) || (iVar6 < local_88->HashSize)) {
        local_88->HashSize = iVar6;
        TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
    if ((0 < iVar13) && (4 < (byte)LogUIActionRouter._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    }
  }
  return;
}

// FindBinding @ 14a7dbfe0

TSharedPtr<FUIActionBinding,1> * __cdecl
FUIActionBinding::FindBinding
          (TSharedPtr<FUIActionBinding,1> *__return_storage_ptr__,FUIActionBindingHandle *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (AllRegistrationsByHandle._8_4_ != AllRegistrationsByHandle._52_4_) {
    lVar4 = 0x154cb26b8;
    if (AllRegistrationsByHandle._64_8_ != 0) {
      lVar4 = AllRegistrationsByHandle._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)
                             (AllRegistrationsByHandle._72_4_ - 1 & param_1->RegistrationId) * 4);
    while (iVar1 != -1) {
      lVar4 = (longlong)iVar1 * 0x30 + AllRegistrationsByHandle._0_8_;
      if (*(uint *)(lVar4 + 0x10) == param_1->RegistrationId) {
        puVar5 = (undefined8 *)(lVar4 + 0x18);
        if (lVar4 == 0) {
          puVar5 = (undefined8 *)0x0;
        }
        if (puVar5 != (undefined8 *)0x0) {
          __return_storage_ptr__->Object = (FUIActionBinding *)*puVar5;
          pTVar3 = (TReferenceControllerBase<1> *)puVar5[1];
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          goto LAB_14a7dc053;
        }
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x28);
    }
  }
  __return_storage_ptr__->Object = (FUIActionBinding *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14a7dc053:
  pFVar2 = (param_1->CachedDebugActionName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// GetLegacyInputActionData @ 14a7e3300

FCommonInputActionDataBase * __thiscall
FUIActionBinding::GetLegacyInputActionData(FUIActionBinding *this)

{
  FCommonInputActionDataBase *pFVar1;
  
  pFVar1 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>(&this->LegacyActionTableRow,L"");
  return pFVar1;
}

// GetSecondsHeld @ 14a7e7660

double __thiscall FUIActionBinding::GetSecondsHeld(FUIActionBinding *this)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  dVar1 = 0.0;
  if (0.0 < this->HoldStartTime || this->HoldStartTime == 0.0) {
    QueryPerformanceCounter(local_res8);
    dVar1 = ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000) - this->HoldStartTime;
  }
  return dVar1;
}

// IsHoldActive @ 14a7f5a80

bool __thiscall FUIActionBinding::IsHoldActive(FUIActionBinding *this)

{
  return 0.0 < this->HoldStartTime || this->HoldStartTime == 0.0;
}

// ResetHold @ 14a814bd0

void __thiscall FUIActionBinding::ResetHold(FUIActionBinding *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar2 = &this->HoldProgressRollbackTickerHandle;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar4 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar2->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  this->HoldStartSecond = 0.0;
  this->CurrentHoldSecond = 0.0;
  return;
}

// ToDebugString @ 14a822f50

FString * __thiscall
FUIActionBinding::ToDebugString(FUIActionBinding *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  wchar_t *pwVar3;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pwVar3 = L"true";
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (this->bDisplayInActionBar == false) {
    pwVar3 = L"false";
  }
  ::FString::FString(&local_48,pwVar3);
  bVar1 = FWeakObjectPtr::IsValid(&(this->BoundWidget).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->BoundWidget).WeakPtr);
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
    local_res8.Number = *(uint *)&pUVar2->field_0x1c;
    ::FName::ToString(&local_res8,&local_58);
  }
  ::FName::ToString(&this->ActionName,&local_38);
  ::FString::PrintfImpl
            (__return_storage_ptr__,L"%s: Owner [%s], Mode [%s], Displayed? [%s], UserIndex [%d]");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TryCreate @ 14a823940

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FUIActionBindingHandle * __cdecl
FUIActionBinding::TryCreate
          (FUIActionBindingHandle *__return_storage_ptr__,UWidget *param_1,
          FBindUIActionArgs *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(param_1->_padding_ + 0x2e0))(param_1);
  if (plVar2 == (longlong *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x340))(plVar2);
  }
  TryCreate(__return_storage_ptr__,param_1,param_2,iVar1);
  return __return_storage_ptr__;
}

// TryCreate @ 14a8239b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FUIActionBindingHandle * __cdecl
FUIActionBinding::TryCreate
          (FUIActionBindingHandle *__return_storage_ptr__,UWidget *param_1,
          FBindUIActionArgs *param_2,int param_3)

{
  FUIActionTag *pFVar1;
  ulonglong uVar2;
  longlong *plVar3;
  UObject *pUVar4;
  code *pcVar5;
  byte bVar6;
  TMap<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>_>
  *pTVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  UClass *this;
  FName this_00;
  FCommonInputActionDataBase *pFVar11;
  FUIActionBindingHandle *pFVar12;
  UWidget *pUVar13;
  FUIActionBinding *pFVar14;
  FUIActionBinding *pFVar15;
  longlong lVar16;
  FUIActionTag *pFVar17;
  FUIActionBinding *pFVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 local_228 [4];
  uint local_224;
  FName local_220;
  TSharedPtr<FUIActionBinding,1> local_218;
  FString local_208;
  int local_1f8;
  TMap<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>_>
  *local_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint local_1d0;
  uint uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  int local_1c0;
  undefined1 local_1bc [12];
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  TRawPtrProxy<FUIActionBinding> local_190;
  FName local_188;
  FName local_180;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  int local_108;
  TMap<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString *local_d0;
  TSharedPtr<FUIActionBinding,1> *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FReadAccessScope local_58;
  
  bVar8 = CommonUI::IsEnhancedInputSupportEnabled();
  FBindUIActionArgs::GetActionName(param_2);
  if ((local_220 != (FName)0x0) ||
     ((bVar8 && (bVar9 = FWeakObjectPtr::IsValid(&(param_2->InputAction).WeakPtr), bVar9)))) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->OnExecuteAction,
               &local_58);
    if ((*(int *)&(param_2->OnExecuteAction).field_0x10 == 0) ||
       ((plVar3 = *(longlong **)&(param_2->OnExecuteAction).field_0x8, plVar3 == (longlong *)0x0 ||
        (cVar10 = (**(code **)(*plVar3 + 0x38))(), cVar10 == '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      if ((byte)LogUIActionRouter._0_1_ < 2) goto LAB_14a8242fc;
      ::FName::ToString(&local_220,&local_70);
      local_180 = (FName)param_1->_padding_;
      ::FName::ToString(&local_180,&local_118);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      local_178.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
        local_178.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      if (param_2->ActionTag == (FUIActionTag)0x0) {
LAB_14a823b96:
        if ((((param_2->LegacyActionTableRow).DataTable.field0_0x0.DebugPtr == (UDataTable *)0x0) &&
            ((param_2->LegacyActionTableRow).RowName == (FName)0x0)) ||
           (pFVar11 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                                (&param_2->LegacyActionTableRow,L""),
           pFVar11 != (FCommonInputActionDataBase *)0x0)) {
          if (((param_2->ActionTag != (FUIActionTag)0x0) ||
              ((param_2->LegacyActionTableRow).DataTable.field0_0x0.DebugPtr != (UDataTable *)0x0))
             || (((param_2->LegacyActionTableRow).RowName != (FName)0x0 ||
                 ((!bVar8 ||
                  (bVar8 = FWeakObjectPtr::IsValid(&(param_2->InputAction).WeakPtr), bVar8)))))) {
            if (param_3 != -1) {
              pFVar15 = (FUIActionBinding *)0x0;
              uStack_1e4 = 1;
              local_1d0 = 0;
              uVar19 = AllRegistrationsByHandle._40_4_;
              uStack_1d4 = local_1d0;
              uStack_1e8 = local_1d0;
              if (uVar19 != 0) {
                puVar20 = (uint *)&AllRegistrationsByHandle.field_0x10;
                if (AllRegistrationsByHandle._32_8_ != 0) {
                  puVar20 = (uint *)AllRegistrationsByHandle._32_8_;
                }
                uVar21 = *puVar20;
                pFVar14 = pFVar15;
                pFVar18 = pFVar15;
                local_1d0 = 0;
                uStack_1e8 = 0;
                while (uVar21 == 0) {
                  iVar22 = (int)pFVar14;
                  local_1d0 = (int)pFVar18 + 0x20;
                  pFVar18 = (FUIActionBinding *)(ulonglong)local_1d0;
                  uStack_1e8 = iVar22 + 1;
                  pFVar14 = (FUIActionBinding *)(ulonglong)uStack_1e8;
                  uStack_1d4 = uVar19;
                  if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 <
                      (int)uStack_1e8) goto LAB_14a823e20;
                  uVar21 = puVar20[(longlong)iVar22 + 1];
                }
                uStack_1e4 = -uVar21 & uVar21;
                uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
                lVar23 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                  }
                }
                local_108 = (int)lVar23;
                uStack_1d4 = (local_1d0 - 1) + local_108;
                if ((int)uVar19 < (int)uStack_1d4) {
                  uStack_1d4 = uVar19;
                }
              }
LAB_14a823e20:
              local_1f0 = &AllRegistrationsByHandle;
              bVar6 = AllRegistrationsByHandle._40_1_;
              iStack_1c8 = AllRegistrationsByHandle._8_4_ - AllRegistrationsByHandle._52_4_;
              local_1e0 = 0x154cb2690;
              uStack_1d8 = 0xffffffff;
              uVar21 = uVar19 & 0xffffffe0;
              TStack_f8.CurrentBitIndex = uStack_1d4;
              TStack_f8.UnvisitedBitMask = 0xffffffff;
              TStack_f8._padding_ = CONCAT44(uStack_1e4,uStack_1e8);
              iVar22 = (int)uVar19 >> 5;
              local_100 = &AllRegistrationsByHandle;
              TStack_f8._28_4_ = uStack_1d4;
              TStack_f8.BaseBitIndex = local_1d0;
              uStack_d8 = CONCAT44(uStack_1c4,iStack_1c8);
              TStack_f8.Array =
                   (TBitArray<FDefaultBitArrayAllocator> *)&AllRegistrationsByHandle.field_0x10;
              local_224 = uVar19;
              uStack_1cc = uStack_1d4;
              if ((int)uVar19 < 0) {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L"");
                if (bVar8) {
                  pcVar5 = (code *)swi(3);
                  pFVar12 = (FUIActionBindingHandle *)(*pcVar5)();
                  return pFVar12;
                }
                uVar19 = AllRegistrationsByHandle._40_4_;
              }
              uVar24 = local_224;
              if (local_224 != uVar19) {
                lVar23 = 0x154cb2690;
                if (AllRegistrationsByHandle._32_8_ != 0) {
                  lVar23 = AllRegistrationsByHandle._32_8_;
                }
                uVar24 = -1 << (bVar6 & 0x1f) & *(uint *)(lVar23 + (longlong)iVar22 * 4);
                while (uVar24 == 0) {
                  lVar16 = (longlong)iVar22;
                  uVar21 = uVar21 + 0x20;
                  iVar22 = iVar22 + 1;
                  local_224 = uVar19;
                  uVar24 = uVar19;
                  if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
                  goto LAB_14a823f52;
                  uVar24 = *(uint *)(lVar23 + 4 + lVar16 * 4);
                }
                uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
                lVar23 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                  }
                }
                local_1c0 = (int)lVar23;
                local_224 = (uVar21 - 1) + local_1c0;
                uVar24 = local_224;
                if ((int)uVar19 < (int)local_224) {
                  local_224 = uVar19;
                  uVar24 = uVar19;
                }
              }
LAB_14a823f52:
              do {
                pTVar7 = local_100;
                if (*(int *)&local_100->field_0x8 - *(int *)&local_100->field_0x34 != (int)uStack_d8
                   ) {
                  local_228[0] = 0;
                  `TSparseArray<TSparseSetElement<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_228);
                }
                if (((TStack_f8.CurrentBitIndex == uVar24) &&
                    (TStack_f8.Array ==
                     (TBitArray<FDefaultBitArrayAllocator> *)&AllRegistrationsByHandle.field_0x10))
                   && (pTVar7 == &AllRegistrationsByHandle)) {
                  pFVar14 = ::operator_new(0x198);
                  if (pFVar14 != (FUIActionBinding *)0x0) {
                    pFVar15 = FUIActionBinding(pFVar14,param_1,param_2);
                  }
                  local_190.Object = pFVar15;
                  TSharedPtr<FUIActionBinding,1>::TSharedPtr<FUIActionBinding,1><FUIActionBinding>
                            (&local_218,&local_190);
                  if ((local_218.Object == (FUIActionBinding *)0x0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    pFVar12 = (FUIActionBindingHandle *)(*pcVar5)();
                    return pFVar12;
                  }
                  (local_218.Object)->UserIndex = param_3;
                  if ((local_218.Object == (FUIActionBinding *)0x0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    pFVar12 = (FUIActionBindingHandle *)(*pcVar5)();
                    return pFVar12;
                  }
                  ::FString::FString(&local_208,&((local_218.Object)->Handle).CachedDebugActionName)
                  ;
                  local_1f8 = ((local_218.Object)->Handle).RegistrationId;
                  local_d0 = &local_208;
                  local_c8 = &local_218;
                  TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<FUIActionBindingHandle_const_&,TSharedPtr<FUIActionBinding,1>_&&>_>
                            ((TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
                              *)&AllRegistrationsByHandle,
                             (TPairInitializer<FUIActionBindingHandle_const_&,TSharedPtr<FUIActionBinding,1>_&&>
                              *)local_1bc,(bool *)&local_d0);
                  (__return_storage_ptr__->CachedDebugActionName).Data.AllocatorInstance.Data =
                       local_208.Data.AllocatorInstance.Data;
                  (__return_storage_ptr__->CachedDebugActionName).Data.ArrayNum =
                       local_208.Data.ArrayNum;
                  (__return_storage_ptr__->CachedDebugActionName).Data.ArrayMax =
                       local_208.Data.ArrayMax;
                  __return_storage_ptr__->RegistrationId = local_1f8;
                  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_208.Data.ArrayNum = 0;
                  local_208.Data.ArrayMax = 0;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_218.SharedReferenceCount.ReferenceController)
                  ;
                  return __return_storage_ptr__;
                }
                lVar23 = *(longlong *)pTVar7 + (longlong)TStack_f8.CurrentBitIndex * 0x30;
                if ((*(longlong *)(lVar23 + 0x18) == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  pFVar12 = (FUIActionBindingHandle *)(*pcVar5)();
                  return pFVar12;
                }
                if (**(FName **)(lVar23 + 0x18) == local_220) {
                  if ((*(FName **)(lVar23 + 0x18) == (FName *)0x0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    pFVar12 = (FUIActionBindingHandle *)(*pcVar5)();
                    return pFVar12;
                  }
                  if (*(EInputEvent *)(*(longlong *)(lVar23 + 0x18) + 8) == param_2->KeyEvent) {
                    if ((*(longlong *)(lVar23 + 0x18) == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      pFVar12 = (FUIActionBindingHandle *)(*pcVar5)();
                      return pFVar12;
                    }
                    pUVar13 = (UWidget *)
                              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                                  (*(longlong *)(lVar23 + 0x18) + 0x14));
                    if (pUVar13 == param_1) {
                      if ((*(longlong *)(lVar23 + 0x18) == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar8)) {
                        pcVar5 = (code *)swi(3);
                        pFVar12 = (FUIActionBindingHandle *)(*pcVar5)();
                        return pFVar12;
                      }
                      if (*(int *)(*(longlong *)(lVar23 + 0x18) + 0x20) == param_3)
                      goto LAB_14a8241bd;
                    }
                  }
                }
                TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
              } while( true );
            }
            if ((byte)LogUIActionRouter._0_1_ < 2) goto LAB_14a8242fc;
            local_198 = (FName)param_1->_padding_;
            ::FName::ToString(&local_198,&local_138);
            InputEventToString(param_2->KeyEvent);
            ::FName::ToString(&local_220,&local_90);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
            local_178.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
              local_178.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
            }
          }
          else {
            if ((byte)LogUIActionRouter._0_1_ < 2) goto LAB_14a8242fc;
            ::FName::ToString(&local_220,&local_a0);
            local_1a0 = (FName)param_1->_padding_;
            ::FName::ToString(&local_1a0,&local_148);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
            local_178.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
              local_178.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
            }
          }
        }
        else {
          if ((byte)LogUIActionRouter._0_1_ < 2) goto LAB_14a8242fc;
          ::FName::ToString(&local_220,&local_b0);
          local_1a8 = (FName)param_1->_padding_;
          ::FName::ToString(&local_1a8,&local_158);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
          local_178.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
            local_178.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
          }
        }
      }
      else {
        this = UCommonUIInputSettings::StaticClass();
        if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this);
        }
        pUVar4 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
        pFVar17 = *(FUIActionTag **)&pUVar4[1].field_0x8;
        pFVar1 = pFVar17 + (longlong)*(int *)&pUVar4[1].field_0x10 * 5;
        for (; pFVar17 != pFVar1; pFVar17 = pFVar17 + 5) {
          if (*pFVar17 == param_2->ActionTag) goto LAB_14a823b96;
        }
        if ((byte)LogUIActionRouter._0_1_ < 2) goto LAB_14a8242fc;
        this_00 = FBindUIActionArgs::GetActionName(param_2);
        ::FName::ToString((FName *)this_00,&local_c0);
        local_1b0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_1b0,&local_168);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
        local_178.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
          local_178.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
        }
      }
    }
  }
  else {
    if ((byte)LogUIActionRouter._0_1_ < 2) goto LAB_14a8242fc;
    local_1bc._4_8_ = param_1->_padding_;
    ::FName::ToString((FName *)(local_1bc + 4),&local_178);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  goto LAB_14a8242fc;
LAB_14a8241bd:
  if (1 < (byte)LogUIActionRouter._0_1_) {
    InputEventToString(param_2->KeyEvent);
    pFVar15 = TSharedPtr<FUIActionBinding,1>::operator->
                        ((TSharedPtr<FUIActionBinding,1> *)(lVar23 + 0x18));
    ::FName::ToString(&pFVar15->ActionName,&local_80);
    local_188 = (FName)param_1->_padding_;
    ::FName::ToString(&local_188,&local_128);
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_Widget___s__is__152233b68,
               (FLogCategoryBase *)&LogUIActionRouter);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
LAB_14a8242fc:
  (__return_storage_ptr__->CachedDebugActionName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CachedDebugActionName).Data.ArrayNum = 0;
  (__return_storage_ptr__->CachedDebugActionName).Data.ArrayMax = 0;
  __return_storage_ptr__->RegistrationId = -1;
  return __return_storage_ptr__;
}

// UpdateHold @ 14a8267d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FUIActionBinding::UpdateHold(FUIActionBinding *this,float param_1)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  FReadAccessScope local_58 [3];
  
  dVar2 = 0.0;
  if (0.0 < this->HoldStartTime || this->HoldStartTime == 0.0) {
    QueryPerformanceCounter(&local_res8);
    dVar2 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000) - this->HoldStartTime;
  }
  dVar2 = dVar2 + this->HoldStartSecond;
  dVar4 = (double)param_1;
  if (dVar4 <= dVar2) {
    dVar2 = dVar4;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  this->CurrentHoldSecond = dVar2;
  if (6 < (byte)LogUIActionRouter._0_1_) {
    ::FName::ToString(&this->ActionName,(FString *)local_58);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    if ((void *)local_58[0].DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58[0].DestructionSentinel._0_8_);
    }
  }
  dVar4 = this->CurrentHoldSecond / dVar4;
  if (__real_3ff0000000000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnHoldActionProgressed,(float)dVar4);
  if ((float)dVar4 < __real_3f800000) {
    bVar3 = false;
  }
  else {
    this->HoldStartTime = -1.0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnExecuteAction,
               local_58);
    if ((*(int *)&(this->OnExecuteAction).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnExecuteAction).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_58);
    TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnHoldActionProgressed,0.0);
    this->HoldStartSecond = 0.0;
    this->CurrentHoldSecond = 0.0;
    if (6 < (byte)LogUIActionRouter._0_1_) {
      ::FName::ToString(&this->ActionName,(FString *)local_58);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      if ((void *)local_58[0].DestructionSentinel._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58[0].DestructionSentinel._0_8_);
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

// operator() @ 1505554d0

bool __thiscall `FUIActionBinding::CleanRegistrations'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  longlong lVar5;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8809435093299888428>);
  if (bVar2) {
    lVar5 = (longlong)*(int *)((longlong)*(undefined8 **)this + 0x1c) * 0x30 +
            *(longlong *)**(undefined8 **)this;
    if ((*(longlong *)(lVar5 + 0x18) == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FName::ToString(*(FName **)(lVar5 + 0x18),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8809435093299888428>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055557c;
    }
  }
  bVar2 = false;
LAB_15055557c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

