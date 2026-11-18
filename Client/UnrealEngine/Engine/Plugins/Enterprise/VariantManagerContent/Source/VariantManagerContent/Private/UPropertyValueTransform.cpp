// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 8

// StaticClass @ 14e2cff50

UClass * __cdecl UPropertyValueTransform::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueTransform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueTransform",
               &Z_Registration_Info_UClass_UPropertyValueTransform.InnerSingleton,
               StaticRegisterNativesUPropertyValueTransform,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueTransform>,
               InternalVTableHelperCtorCaller<UPropertyValueTransform>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueTransform.InnerSingleton;
}

// UPropertyValueTransform @ 14e2d4b00

UPropertyValueTransform * __thiscall
UPropertyValueTransform::UPropertyValueTransform
          (UPropertyValueTransform *this,FVTableHelper *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueTransform__6B_;
  return this;
}

// UPropertyValueTransform @ 14e2d4b30

UPropertyValueTransform * __thiscall
UPropertyValueTransform::UPropertyValueTransform
          (UPropertyValueTransform *this,FObjectInitializer *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueTransform__6B_;
  return this;
}

// ~UPropertyValueTransform @ 14e2d5550

void __thiscall UPropertyValueTransform::~UPropertyValueTransform(UPropertyValueTransform *this)

{
  *(undefined ***)this = &___7UPropertyValueTransform__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  return;
}

// GetPrivateStaticClass @ 14e2de7d0

UClass * __cdecl UPropertyValueTransform::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueTransform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueTransform",
               &Z_Registration_Info_UClass_UPropertyValueTransform.InnerSingleton,
               StaticRegisterNativesUPropertyValueTransform,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueTransform>,
               InternalVTableHelperCtorCaller<UPropertyValueTransform>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueTransform.InnerSingleton;
}

// Serialize @ 14e2e5900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPropertyValueTransform::Serialize(UPropertyValueTransform *this,FArchive *param_1)

{
  char cVar1;
  uint uVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  FName local_res8 [4];
  
  UPropertyValue::Serialize((UPropertyValue *)this,param_1);
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    cVar1 = this->field_0x158;
    if (cVar1 == '\x02') {
      pwVar4 = L"K2_SetRelativeLocation";
    }
    else if (cVar1 == '\x04') {
      pwVar4 = L"K2_SetRelativeRotation";
    }
    else {
      if (cVar1 != '\b') {
        if ((byte)LogVariantContent._0_1_ < 2) {
          return;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        return;
      }
      pwVar4 = L"SetRelativeScale3D";
    }
    pFVar3 = ::FName::FName(local_res8,pwVar4);
    uVar2 = pFVar3->Number;
    *(uint *)&this->field_0xd8 = (pFVar3->ComparisonIndex).Value;
    *(uint *)&this->field_0xdc = uVar2;
  }
  return;
}

// Serialize @ 14e2e59a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPropertyValueTransform::Serialize(UPropertyValueTransform *this,FStructuredArchiveRecord param_1)

{
  char cVar1;
  uint uVar2;
  FArchive *pFVar3;
  FName *pFVar4;
  wchar_t *pwVar5;
  FName local_res8 [4];
  
  local_res8[0] = (FName)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive((FSlotBase *)local_res8);
  UPropertyValue::Serialize((UPropertyValue *)this,pFVar3);
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    cVar1 = this->field_0x158;
    if (cVar1 == '\x02') {
      pwVar5 = L"K2_SetRelativeLocation";
    }
    else if (cVar1 == '\x04') {
      pwVar5 = L"K2_SetRelativeRotation";
    }
    else {
      if (cVar1 != '\b') {
        if ((byte)LogVariantContent._0_1_ < 2) {
          return;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        return;
      }
      pwVar5 = L"SetRelativeScale3D";
    }
    pFVar4 = ::FName::FName(local_res8,pwVar5);
    uVar2 = pFVar4->Number;
    *(uint *)&this->field_0xd8 = (pFVar4->ComparisonIndex).Value;
    *(uint *)&this->field_0xdc = uVar2;
  }
  return;
}

// StaticRegisterNativesUPropertyValueTransform @ 14e2e70c0

void __cdecl UPropertyValueTransform::StaticRegisterNativesUPropertyValueTransform(void)

{
  return;
}

