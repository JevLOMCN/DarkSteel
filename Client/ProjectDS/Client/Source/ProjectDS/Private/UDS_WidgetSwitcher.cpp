// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b760b70

UClass * __cdecl UDS_WidgetSwitcher::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WidgetSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WidgetSwitcher",
               &Z_Registration_Info_UClass_UDS_WidgetSwitcher.InnerSingleton,
               StaticRegisterNativesUDS_WidgetSwitcher,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WidgetSwitcher>,
               InternalVTableHelperCtorCaller<UDS_WidgetSwitcher>,local_res8,
               UWidgetSwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WidgetSwitcher.InnerSingleton;
}

// UDS_WidgetSwitcher @ 14b764660

UDS_WidgetSwitcher * __thiscall
UDS_WidgetSwitcher::UDS_WidgetSwitcher(UDS_WidgetSwitcher *this,FVTableHelper *param_1)

{
  UWidgetSwitcher::UWidgetSwitcher((UWidgetSwitcher *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_WidgetSwitcher @ 14b7652b0

void __thiscall UDS_WidgetSwitcher::~UDS_WidgetSwitcher(UDS_WidgetSwitcher *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UWidgetSwitcher::~UWidgetSwitcher((UWidgetSwitcher *)this);
  return;
}

// GetPrivateStaticClass @ 14b766900

UClass * __cdecl UDS_WidgetSwitcher::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WidgetSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WidgetSwitcher",
               &Z_Registration_Info_UClass_UDS_WidgetSwitcher.InnerSingleton,
               StaticRegisterNativesUDS_WidgetSwitcher,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WidgetSwitcher>,
               InternalVTableHelperCtorCaller<UDS_WidgetSwitcher>,local_res8,
               UWidgetSwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WidgetSwitcher.InnerSingleton;
}

// StaticRegisterNativesUDS_WidgetSwitcher @ 14b766d40

void __cdecl UDS_WidgetSwitcher::StaticRegisterNativesUDS_WidgetSwitcher(void)

{
  return;
}

// UDS_WidgetSwitcher @ 14bc84810

UDS_WidgetSwitcher * __thiscall
UDS_WidgetSwitcher::UDS_WidgetSwitcher(UDS_WidgetSwitcher *this,FObjectInitializer *param_1)

{
  UWidgetSwitcher::UWidgetSwitcher((UWidgetSwitcher *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// BeginDestroy @ 14bc87e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WidgetSwitcher::BeginDestroy(UDS_WidgetSwitcher *this)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  
  if ((this->field_0xf9 & 0x20) != 0) {
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      UGameViewportSubsystem::RemoveWidget(this_00,(UWidget *)this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this,0);
  return;
}

// ReleaseSlateResources @ 14bcc3c80

void __thiscall UDS_WidgetSwitcher::ReleaseSlateResources(UDS_WidgetSwitcher *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x1d0 != &uStack_18) {
    *(undefined8 *)&this->field_0x1d0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x1d8,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SynchronizeProperties @ 14bccbbe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WidgetSwitcher::SynchronizeProperties(UDS_WidgetSwitcher *this)

{
  int iVar1;
  int iVar2;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if (*(SWidgetSwitcher **)&this->field_0x1d0 != (SWidgetSwitcher *)0x0) {
    iVar2 = *(int *)&this->field_0x1b8 + -1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (*(int *)&this->field_0x1c8 < iVar2) {
      iVar2 = *(int *)&this->field_0x1c8;
    }
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    SWidgetSwitcher::SetActiveWidgetIndex(*(SWidgetSwitcher **)&this->field_0x1d0,iVar1);
    return;
  }
  return;
}

