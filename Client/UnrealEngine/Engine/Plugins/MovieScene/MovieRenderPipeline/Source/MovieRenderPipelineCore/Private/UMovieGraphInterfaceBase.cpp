// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 6

// StaticClass @ 14dc66cb0

UClass * __cdecl UMovieGraphInterfaceBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphInterfaceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphInterfaceBase",
               &Z_Registration_Info_UClass_UMovieGraphInterfaceBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphInterfaceBase,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphInterfaceBase>,
               InternalVTableHelperCtorCaller<UMovieGraphInterfaceBase>,local_res8,
               UMovieGraphMember::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphInterfaceBase.InnerSingleton;
}

// UMovieGraphInterfaceBase @ 14dc73650

UMovieGraphInterfaceBase * __thiscall
UMovieGraphInterfaceBase::UMovieGraphInterfaceBase
          (UMovieGraphInterfaceBase *this,FVTableHelper *param_1)

{
  UMovieGraphValueContainer::UMovieGraphValueContainer((UMovieGraphValueContainer *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieGraphInterfaceBase__6B_;
  this->bIsBranch = true;
  return this;
}

// UMovieGraphInterfaceBase @ 14dc736a0

UMovieGraphInterfaceBase * __thiscall
UMovieGraphInterfaceBase::UMovieGraphInterfaceBase(UMovieGraphInterfaceBase *this)

{
  UMovieGraphValueContainer::UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieGraphInterfaceBase__6B_;
  this->bIsBranch = true;
  return this;
}

// ~UMovieGraphInterfaceBase @ 14dc74790

void __thiscall UMovieGraphInterfaceBase::~UMovieGraphInterfaceBase(UMovieGraphInterfaceBase *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphMember__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  return;
}

// GetPrivateStaticClass @ 14dc82060

UClass * __cdecl UMovieGraphInterfaceBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphInterfaceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphInterfaceBase",
               &Z_Registration_Info_UClass_UMovieGraphInterfaceBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphInterfaceBase,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphInterfaceBase>,
               InternalVTableHelperCtorCaller<UMovieGraphInterfaceBase>,local_res8,
               UMovieGraphMember::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphInterfaceBase.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphInterfaceBase @ 14dc89c20

void __cdecl UMovieGraphInterfaceBase::StaticRegisterNativesUMovieGraphInterfaceBase(void)

{
  return;
}

