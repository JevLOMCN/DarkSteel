// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PacketHandler
// Functions: 7

// StaticClass @ 14463d2e0

UClass * __cdecl UHandlerComponentFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHandlerComponentFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PacketHandler",L"HandlerComponentFactory",
               &Z_Registration_Info_UClass_UHandlerComponentFactory.InnerSingleton,
               StaticRegisterNativesUHandlerComponentFactory,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UHandlerComponentFactory>,
               InternalVTableHelperCtorCaller<UHandlerComponentFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHandlerComponentFactory.InnerSingleton;
}

// UHandlerComponentFactory @ 14463da10

UHandlerComponentFactory * __thiscall
UHandlerComponentFactory::UHandlerComponentFactory
          (UHandlerComponentFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHandlerComponentFactory__6B_;
  return this;
}

// UHandlerComponentFactory @ 14463da40

UHandlerComponentFactory * __thiscall
UHandlerComponentFactory::UHandlerComponentFactory
          (UHandlerComponentFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHandlerComponentFactory__6B_;
  return this;
}

// ~UHandlerComponentFactory @ 14463db40

void __thiscall UHandlerComponentFactory::~UHandlerComponentFactory(UHandlerComponentFactory *this)

{
  *(undefined ***)this = &___7UHandlerComponentFactory__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateComponentInstance @ 14463ed50

TSharedPtr<HandlerComponent,1> * __thiscall
UHandlerComponentFactory::CreateComponentInstance
          (UHandlerComponentFactory *this,TSharedPtr<HandlerComponent,1> *__return_storage_ptr__,
          FString *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Classes\\HandlerComponentFactory.h"
             ,0x17,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (HandlerComponent *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14463f410

UClass * __cdecl UHandlerComponentFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHandlerComponentFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PacketHandler",L"HandlerComponentFactory",
               &Z_Registration_Info_UClass_UHandlerComponentFactory.InnerSingleton,
               StaticRegisterNativesUHandlerComponentFactory,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UHandlerComponentFactory>,
               InternalVTableHelperCtorCaller<UHandlerComponentFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHandlerComponentFactory.InnerSingleton;
}

// StaticRegisterNativesUHandlerComponentFactory @ 144643110

void __cdecl UHandlerComponentFactory::StaticRegisterNativesUHandlerComponentFactory(void)

{
  return;
}

