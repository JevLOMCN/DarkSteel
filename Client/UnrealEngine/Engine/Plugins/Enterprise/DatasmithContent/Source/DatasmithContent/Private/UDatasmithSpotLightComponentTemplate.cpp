// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 9

// StaticClass @ 14e2ebab0

UClass * __cdecl UDatasmithSpotLightComponentTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSpotLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithSpotLightComponentTemplate,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithSpotLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithSpotLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.InnerSingleton;
}

// UDatasmithSpotLightComponentTemplate @ 14e2f5590

UDatasmithSpotLightComponentTemplate * __thiscall
UDatasmithSpotLightComponentTemplate::UDatasmithSpotLightComponentTemplate
          (UDatasmithSpotLightComponentTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithSpotLightComponentTemplate__6B_;
  return this;
}

// UDatasmithSpotLightComponentTemplate @ 14e2f55c0

UDatasmithSpotLightComponentTemplate * __thiscall
UDatasmithSpotLightComponentTemplate::UDatasmithSpotLightComponentTemplate
          (UDatasmithSpotLightComponentTemplate *this)

{
  UClass *this_00;
  
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithSpotLightComponentTemplate__6B_;
  this_00 = Z_Construct_UClass_USpotLightComponent_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  return this;
}

// ~UDatasmithSpotLightComponentTemplate @ 14e2f63d0

void __thiscall
UDatasmithSpotLightComponentTemplate::~UDatasmithSpotLightComponentTemplate
          (UDatasmithSpotLightComponentTemplate *this)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2fa0c0

bool __thiscall
UDatasmithSpotLightComponentTemplate::Equals
          (UDatasmithSpotLightComponentTemplate *this,UDatasmithObjectTemplate *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      if (((float)((uint)(this->InnerConeAngle - *(float *)&param_1[1]._padding_) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
         ((float)((uint)(this->OuterConeAngle - *(float *)((longlong)&param_1[1]._padding_ + 4)) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
        return true;
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fd1c0

UClass * __cdecl UDatasmithSpotLightComponentTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSpotLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithSpotLightComponentTemplate,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithSpotLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithSpotLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.InnerSingleton;
}

// Load @ 14e2fe1a0

void __thiscall
UDatasmithSpotLightComponentTemplate::Load
          (UDatasmithSpotLightComponentTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithSpotLightComponentTemplate @ 14e2fee30

void __cdecl
UDatasmithSpotLightComponentTemplate::StaticRegisterNativesUDatasmithSpotLightComponentTemplate
          (void)

{
  return;
}

// UpdateObject @ 14e2ffe70

UObject * __thiscall
UDatasmithSpotLightComponentTemplate::UpdateObject
          (UDatasmithSpotLightComponentTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USpotLightComponent_NoRegister();
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

