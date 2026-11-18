// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148076ce0

UClass * __cdecl UEngineHandlerComponentFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineHandlerComponentFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineHandlerComponentFactory",
               &Z_Registration_Info_UClass_UEngineHandlerComponentFactory.InnerSingleton,
               StaticRegisterNativesUEngineHandlerComponentFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineHandlerComponentFactory>,
               InternalVTableHelperCtorCaller<UEngineHandlerComponentFactory>,local_res8,
               UHandlerComponentFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineHandlerComponentFactory.InnerSingleton;
}

// UEngineHandlerComponentFactory @ 14808b890

UEngineHandlerComponentFactory * __thiscall
UEngineHandlerComponentFactory::UEngineHandlerComponentFactory
          (UEngineHandlerComponentFactory *this,FVTableHelper *param_1)

{
  UHandlerComponentFactory::UHandlerComponentFactory((UHandlerComponentFactory *)this,param_1);
  *(undefined ***)this = &___7UEngineHandlerComponentFactory__6B_;
  return this;
}

// UEngineHandlerComponentFactory @ 14808b8c0

UEngineHandlerComponentFactory * __thiscall
UEngineHandlerComponentFactory::UEngineHandlerComponentFactory
          (UEngineHandlerComponentFactory *this,FObjectInitializer *param_1)

{
  UHandlerComponentFactory::UHandlerComponentFactory((UHandlerComponentFactory *)this,param_1);
  *(undefined ***)this = &___7UEngineHandlerComponentFactory__6B_;
  return this;
}

// ~UEngineHandlerComponentFactory @ 14808f1b0

void __thiscall
UEngineHandlerComponentFactory::~UEngineHandlerComponentFactory
          (UEngineHandlerComponentFactory *this)

{
  *(undefined ***)this = &___7UEngineHandlerComponentFactory__6B_;
  UHandlerComponentFactory::~UHandlerComponentFactory((UHandlerComponentFactory *)this);
  return;
}

// CreateComponentInstance @ 14809c3b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

TSharedPtr<HandlerComponent,1> * __thiscall
UEngineHandlerComponentFactory::CreateComponentInstance
          (UEngineHandlerComponentFactory *this,
          TSharedPtr<HandlerComponent,1> *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  StatelessConnectHandlerComponent *this_00;
  wchar_t *pwVar2;
  TRawPtrProxy<StatelessConnectHandlerComponent> local_res18 [2];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"StatelessConnectHandlerComponent");
  if (iVar1 == 0) {
    this_00 = ::operator_new(0x220);
    local_res18[0].Object = (StatelessConnectHandlerComponent *)0x0;
    if (this_00 != (StatelessConnectHandlerComponent *)0x0) {
      local_res18[0].Object =
           StatelessConnectHandlerComponent::StatelessConnectHandlerComponent(this_00);
    }
    TSharedPtr<HandlerComponent,1>::TSharedPtr<HandlerComponent,1><StatelessConnectHandlerComponent>
              (__return_storage_ptr__,local_res18);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (HandlerComponent *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1480a94a0

UClass * __cdecl UEngineHandlerComponentFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineHandlerComponentFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineHandlerComponentFactory",
               &Z_Registration_Info_UClass_UEngineHandlerComponentFactory.InnerSingleton,
               StaticRegisterNativesUEngineHandlerComponentFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineHandlerComponentFactory>,
               InternalVTableHelperCtorCaller<UEngineHandlerComponentFactory>,local_res8,
               UHandlerComponentFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineHandlerComponentFactory.InnerSingleton;
}

// StaticRegisterNativesUEngineHandlerComponentFactory @ 1480d5680

void __cdecl
UEngineHandlerComponentFactory::StaticRegisterNativesUEngineHandlerComponentFactory(void)

{
  return;
}

