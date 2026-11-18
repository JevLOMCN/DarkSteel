// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 8

// StaticClass @ 14e2d0120

UClass * __cdecl UPropertyValueVisibility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueVisibility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueVisibility",
               &Z_Registration_Info_UClass_UPropertyValueVisibility.InnerSingleton,
               StaticRegisterNativesUPropertyValueVisibility,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueVisibility>,
               InternalVTableHelperCtorCaller<UPropertyValueVisibility>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueVisibility.InnerSingleton;
}

// UPropertyValueVisibility @ 14e2d4b60

UPropertyValueVisibility * __thiscall
UPropertyValueVisibility::UPropertyValueVisibility
          (UPropertyValueVisibility *this,FVTableHelper *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueVisibility__6B_;
  return this;
}

// UPropertyValueVisibility @ 14e2d4b90

UPropertyValueVisibility * __thiscall
UPropertyValueVisibility::UPropertyValueVisibility
          (UPropertyValueVisibility *this,FObjectInitializer *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueVisibility__6B_;
  return this;
}

// ~UPropertyValueVisibility @ 14e2d5570

void __thiscall UPropertyValueVisibility::~UPropertyValueVisibility(UPropertyValueVisibility *this)

{
  *(undefined ***)this = &___7UPropertyValueVisibility__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  return;
}

// GetPrivateStaticClass @ 14e2de890

UClass * __cdecl UPropertyValueVisibility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueVisibility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueVisibility",
               &Z_Registration_Info_UClass_UPropertyValueVisibility.InnerSingleton,
               StaticRegisterNativesUPropertyValueVisibility,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueVisibility>,
               InternalVTableHelperCtorCaller<UPropertyValueVisibility>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueVisibility.InnerSingleton;
}

// Serialize @ 14e2e5a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPropertyValueVisibility::Serialize(UPropertyValueVisibility *this,FArchive *param_1)

{
  uint uVar1;
  FName *pFVar2;
  FName local_res8 [4];
  
  UPropertyValue::Serialize((UPropertyValue *)this,param_1);
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    if (this->field_0x158 == '\x10') {
      pFVar2 = ::FName::FName(local_res8,L"SetVisibility");
      uVar1 = pFVar2->Number;
      *(uint *)&this->field_0xd8 = (pFVar2->ComparisonIndex).Value;
      *(uint *)&this->field_0xdc = uVar1;
    }
    else if (1 < (byte)LogVariantContent._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      return;
    }
  }
  return;
}

// Serialize @ 14e2e5ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPropertyValueVisibility::Serialize(UPropertyValueVisibility *this,FStructuredArchiveRecord param_1)

{
  uint uVar1;
  FArchive *pFVar2;
  FName *pFVar3;
  FName local_res8 [4];
  
  local_res8[0] = (FName)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive((FSlotBase *)local_res8);
  UPropertyValue::Serialize((UPropertyValue *)this,pFVar2);
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    if (this->field_0x158 == '\x10') {
      pFVar3 = ::FName::FName(local_res8,L"SetVisibility");
      uVar1 = pFVar3->Number;
      *(uint *)&this->field_0xd8 = (pFVar3->ComparisonIndex).Value;
      *(uint *)&this->field_0xdc = uVar1;
    }
    else if (1 < (byte)LogVariantContent._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      return;
    }
  }
  return;
}

// StaticRegisterNativesUPropertyValueVisibility @ 14e2e70d0

void __cdecl UPropertyValueVisibility::StaticRegisterNativesUPropertyValueVisibility(void)

{
  return;
}

