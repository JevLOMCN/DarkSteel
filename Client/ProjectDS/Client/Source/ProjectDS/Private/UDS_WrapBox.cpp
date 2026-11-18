// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b767f10

UClass * __cdecl UDS_WrapBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WrapBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WrapBox",
               &Z_Registration_Info_UClass_UDS_WrapBox.InnerSingleton,
               StaticRegisterNativesUDS_WrapBox,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_WrapBox>,InternalVTableHelperCtorCaller<UDS_WrapBox>,
               local_res8,UWrapBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WrapBox.InnerSingleton;
}

// UDS_WrapBox @ 14b76f990

UDS_WrapBox * __thiscall UDS_WrapBox::UDS_WrapBox(UDS_WrapBox *this,FVTableHelper *param_1)

{
  UWrapBox::UWrapBox((UWrapBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_WrapBox @ 14b771d70

void __thiscall UDS_WrapBox::~UDS_WrapBox(UDS_WrapBox *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UWrapBox::~UWrapBox((UWrapBox *)this);
  return;
}

// GetPrivateStaticClass @ 14b775be0

UClass * __cdecl UDS_WrapBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WrapBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WrapBox",
               &Z_Registration_Info_UClass_UDS_WrapBox.InnerSingleton,
               StaticRegisterNativesUDS_WrapBox,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_WrapBox>,InternalVTableHelperCtorCaller<UDS_WrapBox>,
               local_res8,UWrapBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WrapBox.InnerSingleton;
}

// StaticRegisterNativesUDS_WrapBox @ 14b777c80

void __cdecl UDS_WrapBox::StaticRegisterNativesUDS_WrapBox(void)

{
  return;
}

// UDS_WrapBox @ 14bc84850

UDS_WrapBox * __thiscall UDS_WrapBox::UDS_WrapBox(UDS_WrapBox *this,FObjectInitializer *param_1)

{
  UWrapBox::UWrapBox((UWrapBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// BeginDestroy @ 14bc87e60

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

void __thiscall UDS_WrapBox::BeginDestroy(UDS_WrapBox *this)

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

// ReleaseSlateResources @ 14bcc3c90

void __thiscall UDS_WrapBox::ReleaseSlateResources(UDS_WrapBox *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x1e0 != &uStack_18) {
    *(undefined8 *)&this->field_0x1e0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x1e8,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SynchronizeProperties @ 14bccbbf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WrapBox::SynchronizeProperties(UDS_WrapBox *this)

{
  code *pcVar1;
  bool bVar2;
  TVector2<double>_u_0 TStack_58;
  TAttribute<float> TStack_48;
  TAttribute<EHorizontalAlignment> TStack_28;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if (*(SWrapBox **)&this->field_0x1e0 == (SWrapBox *)0x0) {
    return;
  }
  TStack_58._s_0.X = (double)*(undefined8 *)&this->field_0x1c8;
  TStack_58._s_0.Y = (double)*(undefined8 *)&this->field_0x1d0;
  SWrapBox::SetInnerSlotPadding
            (*(SWrapBox **)&this->field_0x1e0,(TVector2<double> *)&TStack_58._s_0);
  if (*(longlong *)&this->field_0x1e0 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SWrapBox::SetUseAllottedSize(*(SWrapBox **)&this->field_0x1e0,this->field_0x1dc == '\0');
  if (*(longlong *)&this->field_0x1e0 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TStack_48.Value = *(float *)&this->field_0x1d8;
  TStack_48.Getter._0_8_ = 0;
  TStack_48.Getter._8_8_ = 0;
  TStack_48.bIsSet = true;
  TStack_48.Getter._16_8_ = 0;
  SWrapBox::SetWrapSize(*(SWrapBox **)&this->field_0x1e0,&TStack_48);
  if (*(longlong *)&this->field_0x1e0 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TStack_28.Value = (EHorizontalAlignment)(byte)this->field_0x1dd;
  TStack_28.Getter._16_8_ = 0;
  TStack_28.bIsSet = true;
  TStack_28.Getter._0_8_ = 0;
  TStack_28.Getter._8_8_ = 0;
  SWrapBox::SetHorizontalAlignment(*(SWrapBox **)&this->field_0x1e0,&TStack_28);
  if (*(longlong *)&this->field_0x1e0 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SWrapBox::SetOrientation(*(SWrapBox **)&this->field_0x1e0,(uint)(byte)this->field_0x1de);
  return;
}

