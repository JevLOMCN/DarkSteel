// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 9

// StaticClass @ 14e2eb070

UClass * __cdecl UDatasmithDecalComponentTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithDecalComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithDecalComponentTemplate,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithDecalComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithDecalComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.InnerSingleton;
}

// UDatasmithDecalComponentTemplate @ 14e2f4970

UDatasmithDecalComponentTemplate * __thiscall
UDatasmithDecalComponentTemplate::UDatasmithDecalComponentTemplate
          (UDatasmithDecalComponentTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithDecalComponentTemplate__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

// UDatasmithDecalComponentTemplate @ 14e2f49b0

UDatasmithDecalComponentTemplate * __thiscall
UDatasmithDecalComponentTemplate::UDatasmithDecalComponentTemplate
          (UDatasmithDecalComponentTemplate *this)

{
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithDecalComponentTemplate__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

// ~UDatasmithDecalComponentTemplate @ 14e2f5f60

void __thiscall
UDatasmithDecalComponentTemplate::~UDatasmithDecalComponentTemplate
          (UDatasmithDecalComponentTemplate *this)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2f9900

bool __thiscall
UDatasmithDecalComponentTemplate::Equals
          (UDatasmithDecalComponentTemplate *this,UDatasmithObjectTemplate *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) && (this->SortOrder == (int)param_1[1]._padding_)) &&
       ((((double)param_1[1]._padding_ == (this->DecalSize).field0_0x0._s_0.X &&
         ((double)param_1[1]._padding_ == (this->DecalSize).field0_0x0._s_0.Y)) &&
        (((double)param_1[1]._padding_ == (this->DecalSize).field0_0x0._s_0.Z &&
         ((this->Material).field0_0x0.DebugPtr == (UMaterialInterface *)param_1[1]._padding_)))))) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fc470

UClass * __cdecl UDatasmithDecalComponentTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithDecalComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithDecalComponentTemplate,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithDecalComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithDecalComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.InnerSingleton;
}

// Load @ 14e2fe110

void __thiscall
UDatasmithDecalComponentTemplate::Load(UDatasmithDecalComponentTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithDecalComponentTemplate @ 14e2fed10

void __cdecl
UDatasmithDecalComponentTemplate::StaticRegisterNativesUDatasmithDecalComponentTemplate(void)

{
  return;
}

// UpdateObject @ 14e2ffb80

UObject * __thiscall
UDatasmithDecalComponentTemplate::UpdateObject
          (UDatasmithDecalComponentTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UDecalComponent_NoRegister();
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

