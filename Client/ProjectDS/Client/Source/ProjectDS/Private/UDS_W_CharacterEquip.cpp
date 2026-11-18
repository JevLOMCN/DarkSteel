// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b769a00

UClass * __cdecl UDS_W_CharacterEquip::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CharacterEquip.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CharacterEquip",
               &Z_Registration_Info_UClass_UDS_W_CharacterEquip.InnerSingleton,
               StaticRegisterNativesUDS_W_CharacterEquip,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CharacterEquip>,
               InternalVTableHelperCtorCaller<UDS_W_CharacterEquip>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CharacterEquip.InnerSingleton;
}

// UDS_W_CharacterEquip @ 14b76d540

UDS_W_CharacterEquip * __thiscall
UDS_W_CharacterEquip::UDS_W_CharacterEquip(UDS_W_CharacterEquip *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_W_CharacterEquip @ 14b770a90

void __thiscall UDS_W_CharacterEquip::~UDS_W_CharacterEquip(UDS_W_CharacterEquip *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b775460

UClass * __cdecl UDS_W_CharacterEquip::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CharacterEquip.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CharacterEquip",
               &Z_Registration_Info_UClass_UDS_W_CharacterEquip.InnerSingleton,
               StaticRegisterNativesUDS_W_CharacterEquip,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CharacterEquip>,
               InternalVTableHelperCtorCaller<UDS_W_CharacterEquip>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CharacterEquip.InnerSingleton;
}

// StaticRegisterNativesUDS_W_CharacterEquip @ 14b777b80

void __cdecl UDS_W_CharacterEquip::StaticRegisterNativesUDS_W_CharacterEquip(void)

{
  return;
}

// UDS_W_CharacterEquip @ 14bce5410

UDS_W_CharacterEquip * __thiscall
UDS_W_CharacterEquip::UDS_W_CharacterEquip(UDS_W_CharacterEquip *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// NativeOnDrop @ 14bd08340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_W_CharacterEquip::NativeOnDrop
          (UDS_W_CharacterEquip *this,FGeometry *param_1,FDragDropEvent *param_2,
          UDragDropOperation *param_3)

{
  UUserWidget::NativeOnDrop((UUserWidget *)this,param_1,param_2,param_3);
  return true;
}

