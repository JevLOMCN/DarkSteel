// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// UDataAsset @ 147a28210

UDataAsset * __thiscall UDataAsset::UDataAsset(UDataAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataAsset__6B_;
  (this->NativeClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UDataAsset @ 147a28240

UDataAsset * __thiscall UDataAsset::UDataAsset(UDataAsset *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pUVar1 = (UClass *)this->_padding_;
  this->_padding_ = (longlong)&___7UDataAsset__6B_;
  (this->NativeClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->NativeClass).Class.field0_0x0.DebugPtr = pUVar1;
  return this;
}

// ~UDataAsset @ 147a2a8e0

void __thiscall UDataAsset::~UDataAsset(UDataAsset *this)

{
  this->_padding_ = (longlong)&___7UDataAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147a57460

UClass * __cdecl UDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataAsset",&Z_Registration_Info_UClass_UDataAsset.InnerSingleton,
               StaticRegisterNativesUDataAsset,0x30,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataAsset>,InternalVTableHelperCtorCaller<UDataAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataAsset.InnerSingleton;
}

// StaticRegisterNativesUDataAsset @ 147a97640

void __cdecl UDataAsset::StaticRegisterNativesUDataAsset(void)

{
  return;
}

