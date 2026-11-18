// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147e42d00

UClass * __cdecl UActorContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UActorContainer.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorContainer",
               &Z_Registration_Info_UClass_UActorContainer.InnerSingleton,
               StaticRegisterNativesUActorContainer,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorContainer>,InternalVTableHelperCtorCaller<UActorContainer>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorContainer.InnerSingleton;
}

// UActorContainer @ 147e552f0

UActorContainer * __thiscall
UActorContainer::UActorContainer(UActorContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UActorContainer__6B_;
  *(undefined8 *)&this->Actors = 0;
  *(undefined8 *)&(this->Actors).field_0x8 = 0;
  *(undefined8 *)&(this->Actors).field_0x20 = 0;
  *(undefined4 *)&(this->Actors).field_0x28 = 0;
  *(undefined4 *)&(this->Actors).field_0x2c = 0x80;
  *(undefined4 *)&(this->Actors).field_0x34 = 0;
  *(undefined4 *)&(this->Actors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Actors).field_0x40 = 0;
  *(undefined4 *)&(this->Actors).field_0x48 = 0;
  return this;
}

// UActorContainer @ 147e55340

UActorContainer * __thiscall
UActorContainer::UActorContainer(UActorContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UActorContainer__6B_;
  *(undefined8 *)&this->Actors = 0;
  *(undefined8 *)&(this->Actors).field_0x8 = 0;
  *(undefined8 *)&(this->Actors).field_0x20 = 0;
  *(undefined4 *)&(this->Actors).field_0x28 = 0;
  *(undefined4 *)&(this->Actors).field_0x2c = 0x80;
  *(undefined4 *)&(this->Actors).field_0x34 = 0;
  *(undefined4 *)&(this->Actors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Actors).field_0x40 = 0;
  *(undefined4 *)&(this->Actors).field_0x48 = 0;
  return this;
}

// ~UActorContainer @ 147e576b0

void __thiscall UActorContainer::~UActorContainer(UActorContainer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UActorContainer__6B_;
  *(undefined4 *)&(this->Actors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Actors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Actors);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147e69790

UClass * __cdecl UActorContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorContainer",
               &Z_Registration_Info_UClass_UActorContainer.InnerSingleton,
               StaticRegisterNativesUActorContainer,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorContainer>,InternalVTableHelperCtorCaller<UActorContainer>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorContainer.InnerSingleton;
}

// StaticRegisterNativesUActorContainer @ 147e821f0

void __cdecl UActorContainer::StaticRegisterNativesUActorContainer(void)

{
  return;
}

