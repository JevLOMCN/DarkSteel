// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b77ba30

UClass * __cdecl UDS_W_CraftMaterialSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CraftMaterialSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CraftMaterialSlot",
               &Z_Registration_Info_UClass_UDS_W_CraftMaterialSlot.InnerSingleton,
               StaticRegisterNativesUDS_W_CraftMaterialSlot,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CraftMaterialSlot>,
               InternalVTableHelperCtorCaller<UDS_W_CraftMaterialSlot>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CraftMaterialSlot.InnerSingleton;
}

// UDS_W_CraftMaterialSlot @ 14b781940

UDS_W_CraftMaterialSlot * __thiscall
UDS_W_CraftMaterialSlot::UDS_W_CraftMaterialSlot
          (UDS_W_CraftMaterialSlot *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_W_CraftMaterialSlot @ 14b781990

UDS_W_CraftMaterialSlot * __thiscall
UDS_W_CraftMaterialSlot::UDS_W_CraftMaterialSlot
          (UDS_W_CraftMaterialSlot *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_W_CraftMaterialSlot @ 14b783060

void __thiscall UDS_W_CraftMaterialSlot::~UDS_W_CraftMaterialSlot(UDS_W_CraftMaterialSlot *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b785c60

UClass * __cdecl UDS_W_CraftMaterialSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CraftMaterialSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CraftMaterialSlot",
               &Z_Registration_Info_UClass_UDS_W_CraftMaterialSlot.InnerSingleton,
               StaticRegisterNativesUDS_W_CraftMaterialSlot,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CraftMaterialSlot>,
               InternalVTableHelperCtorCaller<UDS_W_CraftMaterialSlot>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CraftMaterialSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_W_CraftMaterialSlot @ 14b786560

void __cdecl UDS_W_CraftMaterialSlot::StaticRegisterNativesUDS_W_CraftMaterialSlot(void)

{
  return;
}

