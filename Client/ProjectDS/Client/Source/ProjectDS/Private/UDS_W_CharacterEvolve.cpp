// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b769bd0

UClass * __cdecl UDS_W_CharacterEvolve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CharacterEvolve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CharacterEvolve",
               &Z_Registration_Info_UClass_UDS_W_CharacterEvolve.InnerSingleton,
               StaticRegisterNativesUDS_W_CharacterEvolve,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CharacterEvolve>,
               InternalVTableHelperCtorCaller<UDS_W_CharacterEvolve>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CharacterEvolve.InnerSingleton;
}

// UDS_W_CharacterEvolve @ 14b76d590

UDS_W_CharacterEvolve * __thiscall
UDS_W_CharacterEvolve::UDS_W_CharacterEvolve(UDS_W_CharacterEvolve *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_W_CharacterEvolve @ 14b76d5e0

UDS_W_CharacterEvolve * __thiscall
UDS_W_CharacterEvolve::UDS_W_CharacterEvolve
          (UDS_W_CharacterEvolve *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_W_CharacterEvolve @ 14b770ad0

void __thiscall UDS_W_CharacterEvolve::~UDS_W_CharacterEvolve(UDS_W_CharacterEvolve *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b775520

UClass * __cdecl UDS_W_CharacterEvolve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CharacterEvolve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CharacterEvolve",
               &Z_Registration_Info_UClass_UDS_W_CharacterEvolve.InnerSingleton,
               StaticRegisterNativesUDS_W_CharacterEvolve,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CharacterEvolve>,
               InternalVTableHelperCtorCaller<UDS_W_CharacterEvolve>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CharacterEvolve.InnerSingleton;
}

// StaticRegisterNativesUDS_W_CharacterEvolve @ 14b777b90

void __cdecl UDS_W_CharacterEvolve::StaticRegisterNativesUDS_W_CharacterEvolve(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_W_CharacterEvolve_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnEvolveCompleteSlotEffect @ 14b77ae10

void __cdecl
UDS_W_CharacterEvolve::execOnEvolveCompleteSlotEffect
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnEvolveCompleteSlotEffect((UDS_W_CharacterEvolve *)param_1);
  return;
}

// OnEvolveCompleteSlotEffect @ 14bd0def0

void __thiscall UDS_W_CharacterEvolve::OnEvolveCompleteSlotEffect(UDS_W_CharacterEvolve *this)

{
  UDS_CharacterUIEvent *pUVar1;
  
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar1->OnCharEvolveCompleteSlotEffect);
    return;
  }
  return;
}

