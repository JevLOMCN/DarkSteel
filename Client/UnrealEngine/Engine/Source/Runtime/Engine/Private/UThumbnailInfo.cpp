// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147b2ae20

UClass * __cdecl UThumbnailInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UThumbnailInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ThumbnailInfo",
               &Z_Registration_Info_UClass_UThumbnailInfo.InnerSingleton,
               StaticRegisterNativesUThumbnailInfo,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UThumbnailInfo>,InternalVTableHelperCtorCaller<UThumbnailInfo>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UThumbnailInfo.InnerSingleton;
}

// UThumbnailInfo @ 147b3b9e0

UThumbnailInfo * __thiscall
UThumbnailInfo::UThumbnailInfo(UThumbnailInfo *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UThumbnailInfo__6B_;
  return this;
}

// UThumbnailInfo @ 147b3ba10

UThumbnailInfo * __thiscall
UThumbnailInfo::UThumbnailInfo(UThumbnailInfo *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UThumbnailInfo__6B_;
  return this;
}

// ~UThumbnailInfo @ 147b3dab0

void __thiscall UThumbnailInfo::~UThumbnailInfo(UThumbnailInfo *this)

{
  *(undefined ***)this = &___7UThumbnailInfo__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147b6c970

UClass * __cdecl UThumbnailInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UThumbnailInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ThumbnailInfo",
               &Z_Registration_Info_UClass_UThumbnailInfo.InnerSingleton,
               StaticRegisterNativesUThumbnailInfo,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UThumbnailInfo>,InternalVTableHelperCtorCaller<UThumbnailInfo>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UThumbnailInfo.InnerSingleton;
}

// IsEditorOnly @ 147b78020

bool __thiscall UThumbnailInfo::IsEditorOnly(UThumbnailInfo *this)

{
  return true;
}

// StaticRegisterNativesUThumbnailInfo @ 147b8ed30

void __cdecl UThumbnailInfo::StaticRegisterNativesUThumbnailInfo(void)

{
  return;
}

