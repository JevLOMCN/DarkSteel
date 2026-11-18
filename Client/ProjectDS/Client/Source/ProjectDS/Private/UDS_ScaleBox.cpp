// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b583120

UClass * __cdecl UDS_ScaleBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ScaleBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ScaleBox",
               &Z_Registration_Info_UClass_UDS_ScaleBox.InnerSingleton,
               StaticRegisterNativesUDS_ScaleBox,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ScaleBox>,InternalVTableHelperCtorCaller<UDS_ScaleBox>,
               local_res8,UScaleBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ScaleBox.InnerSingleton;
}

// UDS_ScaleBox @ 14b587540

UDS_ScaleBox * __thiscall UDS_ScaleBox::UDS_ScaleBox(UDS_ScaleBox *this,FVTableHelper *param_1)

{
  UScaleBox::UScaleBox((UScaleBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_ScaleBox @ 14b587c30

void __thiscall UDS_ScaleBox::~UDS_ScaleBox(UDS_ScaleBox *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UScaleBox::~UScaleBox((UScaleBox *)this);
  return;
}

// GetPrivateStaticClass @ 14b5895b0

UClass * __cdecl UDS_ScaleBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ScaleBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ScaleBox",
               &Z_Registration_Info_UClass_UDS_ScaleBox.InnerSingleton,
               StaticRegisterNativesUDS_ScaleBox,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ScaleBox>,InternalVTableHelperCtorCaller<UDS_ScaleBox>,
               local_res8,UScaleBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ScaleBox.InnerSingleton;
}

// StaticRegisterNativesUDS_ScaleBox @ 14b589c10

void __cdecl UDS_ScaleBox::StaticRegisterNativesUDS_ScaleBox(void)

{
  return;
}

// UDS_ScaleBox @ 14bc84130

UDS_ScaleBox * __thiscall UDS_ScaleBox::UDS_ScaleBox(UDS_ScaleBox *this,FObjectInitializer *param_1)

{
  UScaleBox::UScaleBox((UScaleBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// BeginDestroy @ 14bc87de0

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

void __thiscall UDS_ScaleBox::BeginDestroy(UDS_ScaleBox *this)

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

// ReleaseSlateResources @ 14bcc3c10

void __thiscall UDS_ScaleBox::ReleaseSlateResources(UDS_ScaleBox *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x1d8 != &uStack_18) {
    *(undefined8 *)&this->field_0x1d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x1e0,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SynchronizeProperties @ 14bccbb50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ScaleBox::SynchronizeProperties(UDS_ScaleBox *this)

{
  code *pcVar1;
  bool bVar2;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if (*(SScaleBox **)&this->field_0x1d8 == (SScaleBox *)0x0) {
    return;
  }
  SScaleBox::SetStretchDirection(*(SScaleBox **)&this->field_0x1d8,(uint)(byte)this->field_0x1c9);
  if (*(longlong *)&this->field_0x1d8 == 0) {
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
  SScaleBox::SetStretch(*(SScaleBox **)&this->field_0x1d8,(uint)(byte)this->field_0x1c8);
  if (*(longlong *)&this->field_0x1d8 == 0) {
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
  SScaleBox::SetUserSpecifiedScale(*(SScaleBox **)&this->field_0x1d8,*(float *)&this->field_0x1cc);
  if (*(longlong *)&this->field_0x1d8 == 0) {
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
  SScaleBox::SetIgnoreInheritedScale(*(SScaleBox **)&this->field_0x1d8,(bool)this->field_0x1d0);
  return;
}

