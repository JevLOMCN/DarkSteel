// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 9

// StaticClass @ 14e2eb330

UClass * __cdecl UDatasmithSkyLightComponentTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSkyLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithSkyLightComponentTemplate,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithSkyLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithSkyLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.InnerSingleton;
}

// UDatasmithSkyLightComponentTemplate @ 14e2f5500

UDatasmithSkyLightComponentTemplate * __thiscall
UDatasmithSkyLightComponentTemplate::UDatasmithSkyLightComponentTemplate
          (UDatasmithSkyLightComponentTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithSkyLightComponentTemplate__6B_;
  (this->Cubemap).field0_0x0.DebugPtr = (UTextureCube *)0x0;
  return this;
}

// UDatasmithSkyLightComponentTemplate @ 14e2f5540

UDatasmithSkyLightComponentTemplate * __thiscall
UDatasmithSkyLightComponentTemplate::UDatasmithSkyLightComponentTemplate
          (UDatasmithSkyLightComponentTemplate *this)

{
  UClass *this_00;
  
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithSkyLightComponentTemplate__6B_;
  (this->Cubemap).field0_0x0.DebugPtr = (UTextureCube *)0x0;
  this_00 = Z_Construct_UClass_USkyLightComponent_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  return this;
}

// ~UDatasmithSkyLightComponentTemplate @ 14e2f63b0

void __thiscall
UDatasmithSkyLightComponentTemplate::~UDatasmithSkyLightComponentTemplate
          (UDatasmithSkyLightComponentTemplate *this)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2fa040

bool __thiscall
UDatasmithSkyLightComponentTemplate::Equals
          (UDatasmithSkyLightComponentTemplate *this,UDatasmithObjectTemplate *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) && ((this->SourceType).Value == (uchar)param_1[1]._padding_)) &&
       ((this->CubemapResolution == *(int *)((longlong)&param_1[1]._padding_ + 4) &&
        ((this->Cubemap).field0_0x0.DebugPtr == (UTextureCube *)param_1[1]._padding_)))) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fd100

UClass * __cdecl UDatasmithSkyLightComponentTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSkyLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithSkyLightComponentTemplate,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithSkyLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithSkyLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.InnerSingleton;
}

// Load @ 14e2fe190

void __thiscall
UDatasmithSkyLightComponentTemplate::Load
          (UDatasmithSkyLightComponentTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithSkyLightComponentTemplate @ 14e2fee20

void __cdecl
UDatasmithSkyLightComponentTemplate::StaticRegisterNativesUDatasmithSkyLightComponentTemplate(void)

{
  return;
}

// UpdateObject @ 14e2ffe20

UObject * __thiscall
UDatasmithSkyLightComponentTemplate::UpdateObject
          (UDatasmithSkyLightComponentTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USkyLightComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}

