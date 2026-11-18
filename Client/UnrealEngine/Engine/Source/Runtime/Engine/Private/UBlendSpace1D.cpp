// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147419af0

UClass * __cdecl UBlendSpace1D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UBlendSpace1D.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendSpace1D",
               &Z_Registration_Info_UClass_UBlendSpace1D.InnerSingleton,
               StaticRegisterNativesUBlendSpace1D,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendSpace1D>,InternalVTableHelperCtorCaller<UBlendSpace1D>,
               aFStackX_8,UBlendSpace::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendSpace1D.InnerSingleton;
}

// UBlendSpace1D @ 147532580

UBlendSpace1D * __thiscall UBlendSpace1D::UBlendSpace1D(UBlendSpace1D *this,FVTableHelper *param_1)

{
  UBlendSpace::UBlendSpace((UBlendSpace *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&___7UBlendSpace1D__6B_;
  return this;
}

// UBlendSpace1D @ 1475325d0

UBlendSpace1D * __thiscall
UBlendSpace1D::UBlendSpace1D(UBlendSpace1D *this,FObjectInitializer *param_1)

{
  int local_res8 [8];
  
  UBlendSpace::UBlendSpace((UBlendSpace *)this,param_1);
  local_res8[0] = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&___7UBlendSpace1D__6B_;
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_res8,1,
             *(int *)((longlong)&this->_padding_ + 4));
  return this;
}

// ~UBlendSpace1D @ 147533c50

void __thiscall UBlendSpace1D::~UBlendSpace1D(UBlendSpace1D *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&___7UBlendSpace1D__6B_;
  UBlendSpace::~UBlendSpace((UBlendSpace *)this);
  return;
}

// GetAxisToScale @ 14755a6f0

EBlendSpaceAxis __thiscall UBlendSpace1D::GetAxisToScale(UBlendSpace1D *this)

{
  return (EBlendSpaceAxis)(this->bScaleAnimation != false);
}

// GetPrivateStaticClass @ 14755f050

UClass * __cdecl UBlendSpace1D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendSpace1D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendSpace1D",
               &Z_Registration_Info_UClass_UBlendSpace1D.InnerSingleton,
               StaticRegisterNativesUBlendSpace1D,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendSpace1D>,InternalVTableHelperCtorCaller<UBlendSpace1D>,
               local_res8,UBlendSpace::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendSpace1D.InnerSingleton;
}

// StaticRegisterNativesUBlendSpace1D @ 14757ad10

void __cdecl UBlendSpace1D::StaticRegisterNativesUBlendSpace1D(void)

{
  return;
}

