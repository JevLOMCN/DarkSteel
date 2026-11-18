// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147358840

UClass * __cdecl UVectorField::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UVectorField.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorField",
               &Z_Registration_Info_UClass_UVectorField.InnerSingleton,
               StaticRegisterNativesUVectorField,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVectorField>,InternalVTableHelperCtorCaller<UVectorField>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVectorField.InnerSingleton;
}

// UVectorField @ 14890bce0

UVectorField * __thiscall UVectorField::UVectorField(UVectorField *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVectorField__6B_;
  (this->Bounds).IsValid = '\0';
  return this;
}

// UVectorField @ 14890bd10

UVectorField * __thiscall UVectorField::UVectorField(UVectorField *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Intensity = 1.0;
  this->_padding_ = (longlong)&___7UVectorField__6B_;
  (this->Bounds).IsValid = '\0';
  return this;
}

// ~UVectorField @ 14890ed20

void __thiscall UVectorField::~UVectorField(UVectorField *this)

{
  this->_padding_ = (longlong)&___7UVectorField__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14895b470

UClass * __cdecl UVectorField::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVectorField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorField",
               &Z_Registration_Info_UClass_UVectorField.InnerSingleton,
               StaticRegisterNativesUVectorField,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVectorField>,InternalVTableHelperCtorCaller<UVectorField>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVectorField.InnerSingleton;
}

// InitInstance @ 148962350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UVectorField::InitInstance(UVectorField *this,FVectorFieldInstance *param_1,bool param_2)

{
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(local_res8,&local_18);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVectorField);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUVectorField @ 148982bb0

void __cdecl UVectorField::StaticRegisterNativesUVectorField(void)

{
  return;
}

