// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b546e00

UClass * __cdecl UDS_ObjectPoolItem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ObjectPoolItem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ObjectPoolItem",
               &Z_Registration_Info_UClass_UDS_ObjectPoolItem.InnerSingleton,
               StaticRegisterNativesUDS_ObjectPoolItem,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ObjectPoolItem>,
               InternalVTableHelperCtorCaller<UDS_ObjectPoolItem>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ObjectPoolItem.InnerSingleton;
}

// UDS_ObjectPoolItem @ 14b54b0a0

UDS_ObjectPoolItem * __thiscall
UDS_ObjectPoolItem::UDS_ObjectPoolItem(UDS_ObjectPoolItem *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDS_ObjectPoolItem__6B_;
  return this;
}

// UDS_ObjectPoolItem @ 14b54b0d0

UDS_ObjectPoolItem * __thiscall
UDS_ObjectPoolItem::UDS_ObjectPoolItem(UDS_ObjectPoolItem *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDS_ObjectPoolItem__6B_;
  return this;
}

// ~UDS_ObjectPoolItem @ 14b54b9b0

void __thiscall UDS_ObjectPoolItem::~UDS_ObjectPoolItem(UDS_ObjectPoolItem *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b54d1a0

UClass * __cdecl UDS_ObjectPoolItem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ObjectPoolItem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ObjectPoolItem",
               &Z_Registration_Info_UClass_UDS_ObjectPoolItem.InnerSingleton,
               StaticRegisterNativesUDS_ObjectPoolItem,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ObjectPoolItem>,
               InternalVTableHelperCtorCaller<UDS_ObjectPoolItem>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ObjectPoolItem.InnerSingleton;
}

// StaticRegisterNativesUDS_ObjectPoolItem @ 14b54d810

void __cdecl UDS_ObjectPoolItem::StaticRegisterNativesUDS_ObjectPoolItem(void)

{
  return;
}

