// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 6

// StaticClass @ 14a045ad0

UClass * __cdecl UWN_ReactComponentContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ReactComponentContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_ReactComponentContext",
               &Z_Registration_Info_UClass_UWN_ReactComponentContext.InnerSingleton,
               StaticRegisterNativesUWN_ReactComponentContext,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_ReactComponentContext>,
               InternalVTableHelperCtorCaller<UWN_ReactComponentContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ReactComponentContext.InnerSingleton;
}

// UWN_ReactComponentContext @ 14a0472d0

UWN_ReactComponentContext * __thiscall
UWN_ReactComponentContext::UWN_ReactComponentContext
          (UWN_ReactComponentContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWN_ReactComponentContext__6B_;
  *(undefined8 *)&(this->ReactComponents).Elements = 0;
  *(undefined8 *)&(this->ReactComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReactComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReactComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReactComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReactComponents).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReactComponents).Elements.field_0x30 = 0xffffffff;
  (this->ReactComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReactComponents).HashSize = 0;
  return this;
}

// UWN_ReactComponentContext @ 14a047320

UWN_ReactComponentContext * __thiscall
UWN_ReactComponentContext::UWN_ReactComponentContext
          (UWN_ReactComponentContext *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWN_ReactComponentContext__6B_;
  *(undefined8 *)&(this->ReactComponents).Elements = 0;
  *(undefined8 *)&(this->ReactComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReactComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReactComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReactComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReactComponents).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReactComponents).Elements.field_0x30 = 0xffffffff;
  (this->ReactComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReactComponents).HashSize = 0;
  return this;
}

// ~UWN_ReactComponentContext @ 14a048340

void __thiscall
UWN_ReactComponentContext::~UWN_ReactComponentContext(UWN_ReactComponentContext *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UWN_ReactComponentContext__6B_;
  (this->ReactComponents).HashSize = 0;
  FVar1 = (this->ReactComponents).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReactComponents).Elements);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a04b4f0

UClass * __cdecl UWN_ReactComponentContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ReactComponentContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_ReactComponentContext",
               &Z_Registration_Info_UClass_UWN_ReactComponentContext.InnerSingleton,
               StaticRegisterNativesUWN_ReactComponentContext,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_ReactComponentContext>,
               InternalVTableHelperCtorCaller<UWN_ReactComponentContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ReactComponentContext.InnerSingleton;
}

// StaticRegisterNativesUWN_ReactComponentContext @ 14a04ba90

void __cdecl UWN_ReactComponentContext::StaticRegisterNativesUWN_ReactComponentContext(void)

{
  return;
}

