// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// StaticClass @ 1468d8200

UClass * __cdecl UUserObjectListEntry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserObjectListEntry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserObjectListEntry",
               &Z_Registration_Info_UClass_UUserObjectListEntry.InnerSingleton,
               StaticRegisterNativesUUserObjectListEntry,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserObjectListEntry>,
               InternalVTableHelperCtorCaller<UUserObjectListEntry>,local_res8,
               UUserListEntry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserObjectListEntry.InnerSingleton;
}

// UUserObjectListEntry @ 1469024d0

UUserObjectListEntry * __thiscall
UUserObjectListEntry::UUserObjectListEntry(UUserObjectListEntry *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UUserObjectListEntry__6B_;
  return this;
}

// UUserObjectListEntry @ 146902500

UUserObjectListEntry * __thiscall
UUserObjectListEntry::UUserObjectListEntry(UUserObjectListEntry *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UUserObjectListEntry__6B_;
  return this;
}

// ~UUserObjectListEntry @ 146904eb0

void __thiscall UUserObjectListEntry::~UUserObjectListEntry(UUserObjectListEntry *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146922eb0

UClass * __cdecl UUserObjectListEntry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserObjectListEntry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserObjectListEntry",
               &Z_Registration_Info_UClass_UUserObjectListEntry.InnerSingleton,
               StaticRegisterNativesUUserObjectListEntry,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserObjectListEntry>,
               InternalVTableHelperCtorCaller<UUserObjectListEntry>,local_res8,
               UUserListEntry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserObjectListEntry.InnerSingleton;
}

// StaticRegisterNativesUUserObjectListEntry @ 146945b00

void __cdecl UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry(void)

{
  return;
}

