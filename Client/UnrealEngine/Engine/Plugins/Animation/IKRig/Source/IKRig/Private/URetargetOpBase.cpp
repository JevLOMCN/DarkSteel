// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 9

// StaticClass @ 14df03510

UClass * __cdecl URetargetOpBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetOpBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetOpBase",
               &Z_Registration_Info_UClass_URetargetOpBase.InnerSingleton,
               StaticRegisterNativesURetargetOpBase,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URetargetOpBase>,InternalVTableHelperCtorCaller<URetargetOpBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetOpBase.InnerSingleton;
}

// URetargetOpBase @ 14df1ade0

URetargetOpBase * __thiscall
URetargetOpBase::URetargetOpBase(URetargetOpBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsEnabled = true;
  this->bIsInitialized = false;
  this->_padding_ = (longlong)&___7URetargetOpBase__6B_;
  return this;
}

// URetargetOpBase @ 14df1ae10

URetargetOpBase * __thiscall
URetargetOpBase::URetargetOpBase(URetargetOpBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsEnabled = true;
  this->bIsInitialized = false;
  this->_padding_ = (longlong)&___7URetargetOpBase__6B_;
  return this;
}

// ~URetargetOpBase @ 14df1c9e0

void __thiscall URetargetOpBase::~URetargetOpBase(URetargetOpBase *this)

{
  this->_padding_ = (longlong)&___7URetargetOpBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14df2c250

void __thiscall
URetargetOpBase::ConvertToInstancedStruct(URetargetOpBase *this,FInstancedStruct *param_1)

{
  return;
}

// GetPrivateStaticClass @ 14df3e040

UClass * __cdecl URetargetOpBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetOpBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetOpBase",
               &Z_Registration_Info_UClass_URetargetOpBase.InnerSingleton,
               StaticRegisterNativesURetargetOpBase,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URetargetOpBase>,InternalVTableHelperCtorCaller<URetargetOpBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetOpBase.InnerSingleton;
}

// Initialize @ 14df45d00

bool __thiscall
URetargetOpBase::Initialize
          (URetargetOpBase *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRigLogger *param_4)

{
  return false;
}

// Run @ 14df52200

void __thiscall
URetargetOpBase::Run
          (URetargetOpBase *this,FIKRetargetProcessor *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// StaticRegisterNativesURetargetOpBase @ 14df5a380

void __cdecl URetargetOpBase::StaticRegisterNativesURetargetOpBase(void)

{
  return;
}

