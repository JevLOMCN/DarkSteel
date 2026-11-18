// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 9

// StaticClass @ 14e2ea0d0

UClass * __cdecl UDatasmithPointLightComponentTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithPointLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithPointLightComponentTemplate,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithPointLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithPointLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.InnerSingleton;
}

// UDatasmithPointLightComponentTemplate @ 14e2f5160

UDatasmithPointLightComponentTemplate * __thiscall
UDatasmithPointLightComponentTemplate::UDatasmithPointLightComponentTemplate
          (UDatasmithPointLightComponentTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithPointLightComponentTemplate__6B_;
  return this;
}

// UDatasmithPointLightComponentTemplate @ 14e2f5190

UDatasmithPointLightComponentTemplate * __thiscall
UDatasmithPointLightComponentTemplate::UDatasmithPointLightComponentTemplate
          (UDatasmithPointLightComponentTemplate *this)

{
  UClass *this_00;
  
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithPointLightComponentTemplate__6B_;
  this_00 = Z_Construct_UClass_UPointLightComponent_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  return this;
}

// ~UDatasmithPointLightComponentTemplate @ 14e2f62b0

void __thiscall
UDatasmithPointLightComponentTemplate::~UDatasmithPointLightComponentTemplate
          (UDatasmithPointLightComponentTemplate *this)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2f9e20

bool __thiscall
UDatasmithPointLightComponentTemplate::Equals
          (UDatasmithPointLightComponentTemplate *this,UDatasmithObjectTemplate *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) && (this->IntensityUnits == (ELightUnits)param_1[1]._padding_)) {
      if ((((float)((uint)(this->SourceRadius - *(float *)((longlong)&param_1[1]._padding_ + 4)) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
          ((float)((uint)(this->SourceLength - *(float *)&param_1[1]._padding_) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
         ((float)((uint)(this->AttenuationRadius - *(float *)((longlong)&param_1[1]._padding_ + 4))
                 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
        return true;
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fcd50

UClass * __cdecl UDatasmithPointLightComponentTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithPointLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithPointLightComponentTemplate,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithPointLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithPointLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.InnerSingleton;
}

// Load @ 14e2fe160

void __thiscall
UDatasmithPointLightComponentTemplate::Load
          (UDatasmithPointLightComponentTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithPointLightComponentTemplate @ 14e2fedd0

void __cdecl
UDatasmithPointLightComponentTemplate::StaticRegisterNativesUDatasmithPointLightComponentTemplate
          (void)

{
  return;
}

// UpdateObject @ 14e2ffd00

UObject * __thiscall
UDatasmithPointLightComponentTemplate::UpdateObject
          (UDatasmithPointLightComponentTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UPointLightComponent_NoRegister();
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

