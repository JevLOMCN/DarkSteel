// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 8

// StaticClass @ 14e2ea830

UClass * __cdecl UDatasmithPostProcessVolumeTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithPostProcessVolumeTemplate",
               &Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithPostProcessVolumeTemplate,0x80,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithPostProcessVolumeTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithPostProcessVolumeTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.InnerSingleton;
}

// UDatasmithPostProcessVolumeTemplate @ 14e2f51e0

UDatasmithPostProcessVolumeTemplate * __thiscall
UDatasmithPostProcessVolumeTemplate::UDatasmithPostProcessVolumeTemplate
          (UDatasmithPostProcessVolumeTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x28 = 0;
  *(undefined ***)this = &___7UDatasmithPostProcessVolumeTemplate__6B_;
  FDatasmithPostProcessSettingsTemplate::FDatasmithPostProcessSettingsTemplate(&this->Settings);
  return this;
}

// ~UDatasmithPostProcessVolumeTemplate @ 14e2f62d0

void __thiscall
UDatasmithPostProcessVolumeTemplate::~UDatasmithPostProcessVolumeTemplate
          (UDatasmithPostProcessVolumeTemplate *this)

{
  *(undefined ***)this = &___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2f9ed0

bool __thiscall
UDatasmithPostProcessVolumeTemplate::Equals
          (UDatasmithPostProcessVolumeTemplate *this,UDatasmithObjectTemplate *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      uVar2 = (uint)param_1[2]._padding_;
      if ((((uVar2 ^ ZPULL(*(undefined4 *)&this->field_0x70,0,1)) & 1) == 0) &&
         (((*(undefined4 *)&this->field_0x70 ^ uVar2) & 2) == 0)) {
        bVar3 = FDatasmithPostProcessSettingsTemplate::Equals
                          (&this->Settings,(FDatasmithPostProcessSettingsTemplate *)(param_1 + 1));
        if (bVar3) {
          return true;
        }
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fce10

UClass * __cdecl UDatasmithPostProcessVolumeTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithPostProcessVolumeTemplate",
               &Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithPostProcessVolumeTemplate,0x80,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithPostProcessVolumeTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithPostProcessVolumeTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.InnerSingleton;
}

// Load @ 14e2fe170

void __thiscall
UDatasmithPostProcessVolumeTemplate::Load
          (UDatasmithPostProcessVolumeTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithPostProcessVolumeTemplate @ 14e2fede0

void __cdecl
UDatasmithPostProcessVolumeTemplate::StaticRegisterNativesUDatasmithPostProcessVolumeTemplate(void)

{
  return;
}

// UpdateObject @ 14e2ffd50

UObject * __thiscall
UDatasmithPostProcessVolumeTemplate::UpdateObject
          (UDatasmithPostProcessVolumeTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      param_1 = *(UObject **)&param_1[4].field_0x8;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_APostProcessVolume_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return *(UObject **)(param_1 + 0xb);
    }
  }
  return (UObject *)0x0;
}

