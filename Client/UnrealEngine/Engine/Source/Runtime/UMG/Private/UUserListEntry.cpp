// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// StaticClass @ 1468d6cc0

UClass * __cdecl UUserListEntry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserListEntry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserListEntry",
               &Z_Registration_Info_UClass_UUserListEntry.InnerSingleton,
               StaticRegisterNativesUUserListEntry,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserListEntry>,InternalVTableHelperCtorCaller<UUserListEntry>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserListEntry.InnerSingleton;
}

// UUserListEntry @ 146902410

UUserListEntry * __thiscall
UUserListEntry::UUserListEntry(UUserListEntry *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UUserListEntry__6B_;
  return this;
}

// UUserListEntry @ 146902440

UUserListEntry * __thiscall
UUserListEntry::UUserListEntry(UUserListEntry *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UUserListEntry__6B_;
  return this;
}

// ~UUserListEntry @ 146904e80

void __thiscall UUserListEntry::~UUserListEntry(UUserListEntry *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146922d30

UClass * __cdecl UUserListEntry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserListEntry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserListEntry",
               &Z_Registration_Info_UClass_UUserListEntry.InnerSingleton,
               StaticRegisterNativesUUserListEntry,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserListEntry>,InternalVTableHelperCtorCaller<UUserListEntry>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserListEntry.InnerSingleton;
}

// StaticRegisterNativesUUserListEntry @ 146945ab0

void __cdecl UUserListEntry::StaticRegisterNativesUUserListEntry(void)

{
  return;
}

