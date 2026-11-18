// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147269f10

UClass * __cdecl UBookMark2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBookMark2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BookMark2D",
               &Z_Registration_Info_UClass_UBookMark2D.InnerSingleton,
               StaticRegisterNativesUBookMark2D,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBookMark2D>,InternalVTableHelperCtorCaller<UBookMark2D>,
               local_res8,UBookmarkBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBookMark2D.InnerSingleton;
}

// UBookMark2D @ 14726c9d0

UBookMark2D * __thiscall UBookMark2D::UBookMark2D(UBookMark2D *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBookMark2D__6B_;
  return this;
}

// ~UBookMark2D @ 14726d2a0

void __thiscall UBookMark2D::~UBookMark2D(UBookMark2D *this)

{
  this->_padding_ = (longlong)&___7UBookmarkBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14726ef20

UClass * __cdecl UBookMark2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBookMark2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BookMark2D",
               &Z_Registration_Info_UClass_UBookMark2D.InnerSingleton,
               StaticRegisterNativesUBookMark2D,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBookMark2D>,InternalVTableHelperCtorCaller<UBookMark2D>,
               local_res8,UBookmarkBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBookMark2D.InnerSingleton;
}

// StaticRegisterNativesUBookMark2D @ 147270960

void __cdecl UBookMark2D::StaticRegisterNativesUBookMark2D(void)

{
  return;
}

// UBookMark2D @ 147688930

UBookMark2D * __thiscall UBookMark2D::UBookMark2D(UBookMark2D *this,FObjectInitializer *param_1)

{
  UBookmarkBase::UBookmarkBase((UBookmarkBase *)this,param_1);
  this->_padding_ = (longlong)&___7UBookMark2D__6B_;
  return this;
}

