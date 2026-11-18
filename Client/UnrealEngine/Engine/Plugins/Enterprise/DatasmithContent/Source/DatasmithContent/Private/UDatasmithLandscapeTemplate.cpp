// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 8

// StaticClass @ 14e2eb430

UClass * __cdecl UDatasmithLandscapeTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithLandscapeTemplate",
               &Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithLandscapeTemplate,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithLandscapeTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithLandscapeTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.InnerSingleton;
}

// UDatasmithLandscapeTemplate @ 14e2f4cf0

UDatasmithLandscapeTemplate * __thiscall
UDatasmithLandscapeTemplate::UDatasmithLandscapeTemplate
          (UDatasmithLandscapeTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithLandscapeTemplate__6B_;
  (this->LandscapeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

// ~UDatasmithLandscapeTemplate @ 14e2f6130

void __thiscall
UDatasmithLandscapeTemplate::~UDatasmithLandscapeTemplate(UDatasmithLandscapeTemplate *this)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2f9990

bool __thiscall
UDatasmithLandscapeTemplate::Equals
          (UDatasmithLandscapeTemplate *this,UDatasmithObjectTemplate *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) &&
        ((this->LandscapeMaterial).field0_0x0.DebugPtr == (UMaterialInterface *)param_1[1]._padding_
        )) && (this->StaticLightingLOD == (int)param_1[1]._padding_)) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fc8f0

UClass * __cdecl UDatasmithLandscapeTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithLandscapeTemplate",
               &Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithLandscapeTemplate,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithLandscapeTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithLandscapeTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.InnerSingleton;
}

// Load @ 14e2fe120

void __thiscall
UDatasmithLandscapeTemplate::Load(UDatasmithLandscapeTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithLandscapeTemplate @ 14e2fed70

void __cdecl UDatasmithLandscapeTemplate::StaticRegisterNativesUDatasmithLandscapeTemplate(void)

{
  return;
}

// UpdateObject @ 14e2ffbd0

UObject * __thiscall
UDatasmithLandscapeTemplate::UpdateObject
          (UDatasmithLandscapeTemplate *this,UObject *param_1,bool param_2)

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
    pUVar2 = Z_Construct_UClass_ALandscape_NoRegister();
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

