// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 18

// StaticClass @ 14a78a090

UClass * __cdecl UCommonUISubsystemBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUISubsystemBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUISubsystemBase",
               &Z_Registration_Info_UClass_UCommonUISubsystemBase.InnerSingleton,
               StaticRegisterNativesUCommonUISubsystemBase,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonUISubsystemBase>,
               InternalVTableHelperCtorCaller<UCommonUISubsystemBase>,local_res8,
               UGameInstanceSubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUISubsystemBase.InnerSingleton;
}

// UCommonUISubsystemBase @ 14a7af9e0

UCommonUISubsystemBase * __thiscall
UCommonUISubsystemBase::UCommonUISubsystemBase(UCommonUISubsystemBase *this,FVTableHelper *param_1)

{
  UGameInstanceSubsystem::UGameInstanceSubsystem((UGameInstanceSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonUISubsystemBase__6B_;
  (this->AnalyticProviderWeakPtr).Object = (IAnalyticsProviderET *)0x0;
  (this->AnalyticProviderWeakPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UCommonUISubsystemBase @ 14a7afa20

UCommonUISubsystemBase * __thiscall
UCommonUISubsystemBase::UCommonUISubsystemBase(UCommonUISubsystemBase *this)

{
  UGameInstanceSubsystem::UGameInstanceSubsystem((UGameInstanceSubsystem *)this);
  this->_padding_ = (longlong)&___7UCommonUISubsystemBase__6B_;
  (this->AnalyticProviderWeakPtr).Object = (IAnalyticsProviderET *)0x0;
  (this->AnalyticProviderWeakPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UCommonUISubsystemBase @ 14a7b3950

void __thiscall UCommonUISubsystemBase::~UCommonUISubsystemBase(UCommonUISubsystemBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7UCommonUISubsystemBase__6B_;
  pTVar3 = (this->AnalyticProviderWeakPtr).WeakReferenceCount.ReferenceController;
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
  UGameInstanceSubsystem::~UGameInstanceSubsystem((UGameInstanceSubsystem *)this);
  return;
}

// FireEvent_ButtonClicked @ 14a7dd3d0

void __thiscall
UCommonUISubsystemBase::FireEvent_ButtonClicked
          (UCommonUISubsystemBase *this,FString *param_1,FString *param_2,FString *param_3)

{
  return;
}

// FireEvent_PanelPushed @ 14a7dd3e0

void __thiscall
UCommonUISubsystemBase::FireEvent_PanelPushed(UCommonUISubsystemBase *this,FString *param_1)

{
  return;
}

// Get @ 14a7e0030

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

UCommonUISubsystemBase * __cdecl UCommonUISubsystemBase::Get(UWidget *param_1)

{
  int iVar1;
  bool bVar2;
  UGameInstance *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UCommonUISubsystemBase *pUVar6;
  
  pUVar3 = UWidget::GetGameInstance(param_1);
  if (pUVar3 == (UGameInstance *)0x0) {
    return (UCommonUISubsystemBase *)0x0;
  }
  pUVar4 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14a7e006c;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14a7e006c:
    pUVar5 = StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14a7e009c;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14a7e009c:
  pUVar6 = (UCommonUISubsystemBase *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar4);
  return pUVar6;
}

// GetEnhancedInputActionButtonIcon @ 14a7e2250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSlateBrush * __thiscall
UCommonUISubsystemBase::GetEnhancedInputActionButtonIcon
          (UCommonUISubsystemBase *this,FSlateBrush *__return_storage_ptr__,UInputAction *param_1,
          ULocalPlayer *param_2)

{
  UCommonInputSubsystem *pUVar1;
  FSlateBrush *pFVar2;
  
  if (param_2 != (ULocalPlayer *)0x0) {
    pUVar1 = UCommonInputSubsystem::Get(param_2);
    CommonUI::GetIconForEnhancedInputAction(__return_storage_ptr__,pUVar1,param_1);
    return __return_storage_ptr__;
  }
  pFVar2 = FStyleDefaults::GetNoBrush();
  FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar2);
  return __return_storage_ptr__;
}

// GetInputActionButtonIcon @ 14a7e2e00

FSlateBrush * __thiscall
UCommonUISubsystemBase::GetInputActionButtonIcon
          (UCommonUISubsystemBase *this,FSlateBrush *__return_storage_ptr__,
          FDataTableRowHandle *param_1,ECommonInputType param_2,FName *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FCommonInputActionDataBase *pFVar4;
  FName *pFVar5;
  UCommonInputPlatformSettings *this_00;
  FSlateBrush *pFVar6;
  FKey local_d8;
  FSlateBrush local_b8;
  
  if (param_2 == Count) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9018108325643943977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUISubsystemBase.cpp"
                       ,0x29,"InputType != ECommonInputType::Count");
    if (bVar3) {
code_r0x00014a7e2ead:
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSlateBrush *)(*pcVar2)();
      return pFVar6;
    }
  }
  else if (((param_1->DataTable).field0_0x0.DebugPtr != (UDataTable *)0x0) ||
          (param_1->RowName != (FName)0x0)) {
    pFVar4 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                       (param_1,
                        L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                       );
    if (pFVar4 == (FCommonInputActionDataBase *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9018108325643943980>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUISubsystemBase.cpp"
                         ,0x2c,"InputActionData");
      if (bVar3) goto code_r0x00014a7e2ead;
    }
    else {
      pFVar5 = (FName *)(**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,param_2,param_3);
      pFVar6 = (FSlateBrush *)(pFVar5 + 6);
      if ((char)pFVar5[9].Number != '\0') goto LAB_14a7e2f90;
      FSlateBrush::FSlateBrush(&local_b8);
      this_00 = UCommonInputPlatformSettings::Get();
      local_d8.KeyDetails.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar5 + 2);
      FVar1 = *param_3;
      local_d8.KeyName = *pFVar5;
      local_d8.KeyDetails.Object = *(FKeyDetails **)(pFVar5 + 1);
      if ((FName)local_d8.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0) {
        LOCK();
        *(int *)((longlong)local_d8.KeyDetails.SharedReferenceCount.ReferenceController + 8) =
             *(int *)((longlong)local_d8.KeyDetails.SharedReferenceCount.ReferenceController + 8) +
             1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar3 = UCommonInputPlatformSettings::TryGetInputBrush
                        (this_00,&local_b8,&local_d8,param_2,FVar1);
      if (bVar3) {
        FSlateBrush::FSlateBrush(__return_storage_ptr__,&local_b8);
        local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
      local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    }
  }
  pFVar6 = FStyleDefaults::GetNoBrush();
LAB_14a7e2f90:
  FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar6);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a7e69a0

UClass * __cdecl UCommonUISubsystemBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUISubsystemBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUISubsystemBase",
               &Z_Registration_Info_UClass_UCommonUISubsystemBase.InnerSingleton,
               StaticRegisterNativesUCommonUISubsystemBase,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonUISubsystemBase>,
               InternalVTableHelperCtorCaller<UCommonUISubsystemBase>,local_res8,
               UGameInstanceSubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUISubsystemBase.InnerSingleton;
}

// Initialize @ 14a7f3620

void __thiscall
UCommonUISubsystemBase::Initialize(UCommonUISubsystemBase *this,FSubsystemCollectionBase *param_1)

{
  CommonUI::EmptyScrollBoxStyle.BottomShadowBrush.DrawAs.Value = '\0';
  CommonUI::EmptyScrollBoxStyle.TopShadowBrush.DrawAs.Value = '\0';
  CommonUI::EmptyScrollBoxStyle.LeftShadowBrush.DrawAs.Value = '\0';
  CommonUI::EmptyScrollBoxStyle.RightShadowBrush.DrawAs.Value = '\0';
  return;
}

// IsInputAllowed @ 14a7f5e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCommonUISubsystemBase::IsInputAllowed(UCommonUISubsystemBase *this,ULocalPlayer *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  UCommonInputSubsystem *this_00;
  
  this_00 = UCommonInputSubsystem::Get(param_1);
  if (this_00 == (UCommonInputSubsystem *)0x0) {
    return true;
  }
  bVar1 = UCommonInputSubsystem::GetInputTypeFilter(this_00,MouseAndKeyboard);
  bVar2 = UCommonInputSubsystem::GetInputTypeFilter(this_00,Gamepad);
  bVar3 = UCommonInputSubsystem::GetInputTypeFilter(this_00,Touch);
  if (((bVar1) && (bVar2)) && (bVar3)) {
    return false;
  }
  return true;
}

// SetAnalyticProvider @ 14a816f70

void __thiscall
UCommonUISubsystemBase::SetAnalyticProvider
          (UCommonUISubsystemBase *this,TSharedPtr<IAnalyticsProviderET,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->AnalyticProviderWeakPtr).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->AnalyticProviderWeakPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->AnalyticProviderWeakPtr).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->AnalyticProviderWeakPtr).WeakReferenceCount.ReferenceController = pTVar3;
  }
  return;
}

// SetInputAllowed @ 14a818d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonUISubsystemBase::SetInputAllowed
          (UCommonUISubsystemBase *this,bool param_1,FName *param_2,ULocalPlayer *param_3)

{
  UCommonInputSubsystem *this_00;
  bool bVar1;
  
  this_00 = UCommonInputSubsystem::Get(param_3);
  if (this_00 != (UCommonInputSubsystem *)0x0) {
    bVar1 = !param_1;
    UCommonInputSubsystem::SetInputTypeFilter(this_00,MouseAndKeyboard,*param_2,bVar1);
    UCommonInputSubsystem::SetInputTypeFilter(this_00,Gamepad,*param_2,bVar1);
    UCommonInputSubsystem::SetInputTypeFilter(this_00,Touch,*param_2,bVar1);
  }
  return;
}

// ShouldCreateSubsystem @ 14a81d790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCommonUISubsystemBase::ShouldCreateSubsystem(UCommonUISubsystemBase *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UGameInstance>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = Z_Construct_UClass_UGameInstance_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    bVar2 = UGameInstance::IsDedicatedServerInstance((UGameInstance *)param_1);
    return !bVar2;
  }
  pFVar4 = GetTypeName<UGameInstance>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// StaticRegisterNativesUCommonUISubsystemBase @ 14a81e980

void __cdecl UCommonUISubsystemBase::StaticRegisterNativesUCommonUISubsystemBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCommonUISubsystemBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetEnhancedInputActionButtonIcon @ 14a82de90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UCommonUISubsystemBase::execGetEnhancedInputActionButtonIcon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInputAction *pUVar2;
  UCommonInputSubsystem *pUVar3;
  FSlateBrush *pFVar4;
  ULocalPlayer *local_res10;
  UInputAction *local_res20;
  FSlateBrush local_b8;
  
  local_res20 = (UInputAction *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = (ULocalPlayer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (ULocalPlayer *)0x0) {
    pFVar4 = FStyleDefaults::GetNoBrush();
    FSlateBrush::FSlateBrush(&local_b8,pFVar4);
  }
  else {
    pUVar3 = UCommonInputSubsystem::Get(local_res10);
    CommonUI::GetIconForEnhancedInputAction(&local_b8,pUVar3,pUVar2);
  }
  FSlateBrush::operator=(param_3,&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetInputActionButtonIcon @ 14a82e370

void __cdecl
UCommonUISubsystemBase::execGetInputActionButtonIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  code *pcVar4;
  ECommonInputType EVar5;
  bool bVar6;
  FCommonInputActionDataBase *pFVar7;
  FName *pFVar8;
  UCommonInputPlatformSettings *this;
  FSlateBrush *pFVar9;
  FName *pFVar10;
  TObjectPtr<UDataTable_const_>_u_0 *this_00;
  ECommonInputType local_res10 [8];
  FName local_res20;
  TObjectPtr<UDataTable_const_>_u_0 local_1b8;
  undefined8 local_1b0;
  FKey local_1a8;
  FSlateBrush local_188;
  FSlateBrush local_d8;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_1b8.DebugPtr = (UDataTable *)0x0;
  local_1b0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_res10[0] = MouseAndKeyboard;
  this_00 = &local_1b8;
  if ((TObjectPtr<UDataTable_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UDataTable_const_>_u_0 *)0x0) {
    this_00 = (TObjectPtr<UDataTable_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  EVar5 = local_res10[0];
  pFVar10 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar10 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == Count) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9018108325643943977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUISubsystemBase.cpp"
                       ,0x29,"InputType != ECommonInputType::Count");
    if (bVar6) {
code_r0x00014a82e526:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_14a82e5e2:
    pFVar9 = FStyleDefaults::GetNoBrush();
  }
  else {
    if (((this_00->ObjectPtr).field0_0x0.Handle == (UObject *)0x0) &&
       (this_00[1].DebugPtr == (UDataTable *)0x0)) goto LAB_14a82e5e2;
    pFVar7 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                       ((FDataTableRowHandle *)&this_00->ObjectPtr,
                        L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                       );
    if (pFVar7 == (FCommonInputActionDataBase *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9018108325643943980>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUISubsystemBase.cpp"
                         ,0x2c,"InputActionData");
      if (bVar6) goto code_r0x00014a82e526;
      goto LAB_14a82e5e2;
    }
    pFVar8 = (FName *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7,EVar5,pFVar10);
    pFVar9 = (FSlateBrush *)(pFVar8 + 6);
    if ((char)pFVar8[9].Number == '\0') {
      FSlateBrush::FSlateBrush(&local_188);
      this = UCommonInputPlatformSettings::Get();
      local_1a8.KeyDetails.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar8 + 2);
      FVar3 = *pFVar10;
      local_1a8.KeyName = *pFVar8;
      local_1a8.KeyDetails.Object = *(FKeyDetails **)(pFVar8 + 1);
      if ((FName)local_1a8.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0) {
        LOCK();
        *(int *)((longlong)local_1a8.KeyDetails.SharedReferenceCount.ReferenceController + 8) =
             *(int *)((longlong)local_1a8.KeyDetails.SharedReferenceCount.ReferenceController + 8) +
             1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar6 = UCommonInputPlatformSettings::TryGetInputBrush(this,&local_188,&local_1a8,EVar5,FVar3)
      ;
      if (bVar6) {
        FSlateBrush::FSlateBrush(&local_d8,&local_188);
        local_188._padding_ = (longlong)&___7FSlateBrush__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
        goto LAB_14a82e5f3;
      }
      local_188._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
      goto LAB_14a82e5e2;
    }
  }
  FSlateBrush::FSlateBrush(&local_d8,pFVar9);
LAB_14a82e5f3:
  FSlateBrush::operator=(param_3,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

