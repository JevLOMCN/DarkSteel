// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b58bcc0

UClass * __cdecl UDS_SizeBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SizeBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SizeBox",
               &Z_Registration_Info_UClass_UDS_SizeBox.InnerSingleton,
               StaticRegisterNativesUDS_SizeBox,0x200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SizeBox>,InternalVTableHelperCtorCaller<UDS_SizeBox>,
               local_res8,USizeBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SizeBox.InnerSingleton;
}

// UDS_SizeBox @ 14b58dfc0

UDS_SizeBox * __thiscall UDS_SizeBox::UDS_SizeBox(UDS_SizeBox *this,FVTableHelper *param_1)

{
  USizeBox::USizeBox((USizeBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_SizeBox @ 14b58e540

void __thiscall UDS_SizeBox::~UDS_SizeBox(UDS_SizeBox *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  USizeBox::~USizeBox((USizeBox *)this);
  return;
}

// GetPrivateStaticClass @ 14b58f100

UClass * __cdecl UDS_SizeBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SizeBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SizeBox",
               &Z_Registration_Info_UClass_UDS_SizeBox.InnerSingleton,
               StaticRegisterNativesUDS_SizeBox,0x200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SizeBox>,InternalVTableHelperCtorCaller<UDS_SizeBox>,
               local_res8,USizeBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SizeBox.InnerSingleton;
}

// StaticRegisterNativesUDS_SizeBox @ 14b58f3f0

void __cdecl UDS_SizeBox::StaticRegisterNativesUDS_SizeBox(void)

{
  return;
}

// UDS_SizeBox @ 14bc841d0

UDS_SizeBox * __thiscall UDS_SizeBox::UDS_SizeBox(UDS_SizeBox *this,FObjectInitializer *param_1)

{
  USizeBox::USizeBox((USizeBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// BeginDestroy @ 14bc87e00

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

void __thiscall UDS_SizeBox::BeginDestroy(UDS_SizeBox *this)

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

// ReleaseSlateResources @ 14bcc3c30

void __thiscall UDS_SizeBox::ReleaseSlateResources(UDS_SizeBox *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x1c8 != &uStack_18) {
    *(undefined8 *)&this->field_0x1c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x1d0,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SynchronizeProperties @ 14bccbb70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SizeBox::SynchronizeProperties(UDS_SizeBox *this)

{
  byte bVar1;
  SBox *pSVar2;
  TAttribute<FOptionalSize> TStack_28;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  bVar1 = this->field_0x1f8;
  pSVar2 = *(SBox **)&this->field_0x1c8;
  if ((bVar1 & 1) == 0) {
    this->field_0x1f8 = bVar1 & 0xfe;
    if (pSVar2 != (SBox *)0x0) {
      TStack_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a252f4;
    }
  }
  else {
    TStack_28.Value.Size = *(float *)&this->field_0x1d8;
    this->field_0x1f8 = bVar1 | 1;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a252f4:
      TStack_28.Getter._8_8_ = 0;
      TStack_28.Getter._0_8_ = 0;
      TStack_28.bIsSet = true;
      TStack_28.Getter._16_8_ = 0;
      SBox::SetWidthOverride(pSVar2,&TStack_28);
    }
  }
  bVar1 = this->field_0x1f8;
  pSVar2 = *(SBox **)&this->field_0x1c8;
  if ((bVar1 & 2) == 0) {
    this->field_0x1f8 = bVar1 & 0xfd;
    if (pSVar2 != (SBox *)0x0) {
      TStack_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a25362;
    }
  }
  else {
    TStack_28.Value.Size = *(float *)&this->field_0x1dc;
    this->field_0x1f8 = bVar1 | 2;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a25362:
      TStack_28.Getter._8_8_ = 0;
      TStack_28.Getter._0_8_ = 0;
      TStack_28.bIsSet = true;
      TStack_28.Getter._16_8_ = 0;
      SBox::SetHeightOverride(pSVar2,&TStack_28);
    }
  }
  bVar1 = this->field_0x1f8;
  pSVar2 = *(SBox **)&this->field_0x1c8;
  if ((bVar1 & 4) == 0) {
    this->field_0x1f8 = bVar1 & 0xfb;
    if (pSVar2 != (SBox *)0x0) {
      TStack_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a253d0;
    }
  }
  else {
    TStack_28.Value.Size = *(float *)&this->field_0x1e0;
    this->field_0x1f8 = bVar1 | 4;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a253d0:
      TStack_28.Getter._8_8_ = 0;
      TStack_28.Getter._0_8_ = 0;
      TStack_28.bIsSet = true;
      TStack_28.Getter._16_8_ = 0;
      SBox::SetMinDesiredWidth(pSVar2,&TStack_28);
    }
  }
  bVar1 = this->field_0x1f8;
  pSVar2 = *(SBox **)&this->field_0x1c8;
  if ((bVar1 & 8) == 0) {
    this->field_0x1f8 = bVar1 & 0xf7;
    if (pSVar2 != (SBox *)0x0) {
      TStack_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a2543e;
    }
  }
  else {
    TStack_28.Value.Size = *(float *)&this->field_0x1e4;
    this->field_0x1f8 = bVar1 | 8;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a2543e:
      TStack_28.Getter._8_8_ = 0;
      TStack_28.Getter._0_8_ = 0;
      TStack_28.bIsSet = true;
      TStack_28.Getter._16_8_ = 0;
      SBox::SetMinDesiredHeight(pSVar2,&TStack_28);
    }
  }
  bVar1 = this->field_0x1f8;
  pSVar2 = *(SBox **)&this->field_0x1c8;
  if ((bVar1 & 0x10) == 0) {
    this->field_0x1f8 = bVar1 & 0xef;
    if (pSVar2 != (SBox *)0x0) {
      TStack_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a254ac;
    }
  }
  else {
    TStack_28.Value.Size = *(float *)&this->field_0x1e8;
    this->field_0x1f8 = bVar1 | 0x10;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a254ac:
      TStack_28.Getter._8_8_ = 0;
      TStack_28.Getter._0_8_ = 0;
      TStack_28.bIsSet = true;
      TStack_28.Getter._16_8_ = 0;
      SBox::SetMaxDesiredWidth(pSVar2,&TStack_28);
    }
  }
  bVar1 = this->field_0x1f8;
  pSVar2 = *(SBox **)&this->field_0x1c8;
  if ((bVar1 & 0x20) == 0) {
    this->field_0x1f8 = bVar1 & 0xdf;
    if (pSVar2 != (SBox *)0x0) {
      TStack_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a2551a;
    }
  }
  else {
    TStack_28.Value.Size = *(float *)&this->field_0x1ec;
    this->field_0x1f8 = bVar1 | 0x20;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a2551a:
      TStack_28.Getter._8_8_ = 0;
      TStack_28.Getter._0_8_ = 0;
      TStack_28.bIsSet = true;
      TStack_28.Getter._16_8_ = 0;
      SBox::SetMaxDesiredHeight(pSVar2,&TStack_28);
    }
  }
  bVar1 = this->field_0x1f8;
  pSVar2 = *(SBox **)&this->field_0x1c8;
  if ((bVar1 & 0x40) == 0) {
    this->field_0x1f8 = bVar1 & 0xbf;
    if (pSVar2 == (SBox *)0x0) goto LAB_146a2559e;
    TStack_28.Value.Size = FOptionalSize::Unspecified;
  }
  else {
    TStack_28.Value.Size = *(float *)&this->field_0x1f0;
    this->field_0x1f8 = bVar1 | 0x40;
    if (pSVar2 == (SBox *)0x0) goto LAB_146a2559e;
  }
  TStack_28.Getter._8_8_ = 0;
  TStack_28.Getter._0_8_ = 0;
  TStack_28.bIsSet = true;
  TStack_28.Getter._16_8_ = 0;
  SBox::SetMinAspectRatio(pSVar2,&TStack_28);
LAB_146a2559e:
  bVar1 = this->field_0x1f8;
  pSVar2 = *(SBox **)&this->field_0x1c8;
  if ((char)bVar1 < '\0') {
    TStack_28.Value.Size = *(float *)&this->field_0x1f4;
    this->field_0x1f8 = bVar1 | 0x80;
    if (pSVar2 == (SBox *)0x0) {
      return;
    }
  }
  else {
    this->field_0x1f8 = bVar1 & 0x7f;
    if (pSVar2 == (SBox *)0x0) {
      return;
    }
    TStack_28.Value.Size = FOptionalSize::Unspecified;
  }
  TStack_28.Getter._8_8_ = 0;
  TStack_28.Getter._0_8_ = 0;
  TStack_28.bIsSet = true;
  TStack_28.Getter._16_8_ = 0;
  SBox::SetMaxAspectRatio(pSVar2,&TStack_28);
  return;
}

