// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// StaticClass @ 141e48c50

UClass * __cdecl UArrayProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UArrayProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ArrayProperty",
               &Z_Registration_Info_UClass_UArrayProperty.InnerSingleton,
               StaticRegisterNativesUArrayProperty,0x78,8,CLASS_Intrinsic,CASTCLASS_FArrayProperty,
               L"Engine",InternalConstructor<UArrayProperty>,
               InternalVTableHelperCtorCaller<UArrayProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UArrayProperty.InnerSingleton;
}

// UArrayProperty @ 141e56730

UArrayProperty * __thiscall
UArrayProperty::UArrayProperty(UArrayProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  this->_padding_ = (longlong)&___7UArrayProperty__6B_;
  this->_padding_ = 0;
  (this->Inner).field0_0x0.DebugPtr = (UProperty *)0x0;
  return this;
}

// ~UArrayProperty @ 141e57700

void __thiscall UArrayProperty::~UArrayProperty(UArrayProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5b540

UClass * __cdecl UArrayProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UArrayProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ArrayProperty",
               &Z_Registration_Info_UClass_UArrayProperty.InnerSingleton,
               StaticRegisterNativesUArrayProperty,0x78,8,CLASS_Intrinsic,CASTCLASS_FArrayProperty,
               L"Engine",InternalConstructor<UArrayProperty>,
               InternalVTableHelperCtorCaller<UArrayProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UArrayProperty.InnerSingleton;
}

// Serialize @ 141e5fd50

void __thiscall UArrayProperty::Serialize(UArrayProperty *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUArrayProperty @ 141e605f0

void __cdecl UArrayProperty::StaticRegisterNativesUArrayProperty(void)

{
  return;
}

// Serialize @ 14218aa30

void __thiscall UArrayProperty::Serialize(UArrayProperty *this,FArchive *param_1)

{
  UProperty::Serialize((UProperty *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014218aa59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Inner);
  return;
}

