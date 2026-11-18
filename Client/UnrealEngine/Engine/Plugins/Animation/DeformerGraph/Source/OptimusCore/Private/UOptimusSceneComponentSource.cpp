// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 10

// StaticClass @ 14e113200

UClass * __cdecl UOptimusSceneComponentSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSceneComponentSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSceneComponentSource",
               &Z_Registration_Info_UClass_UOptimusSceneComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusSceneComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSceneComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusSceneComponentSource>,local_res8,
               UOptimusComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSceneComponentSource.InnerSingleton;
}

// UOptimusSceneComponentSource @ 14e15ca80

UOptimusSceneComponentSource * __thiscall
UOptimusSceneComponentSource::UOptimusSceneComponentSource
          (UOptimusSceneComponentSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOptimusSceneComponentSource__6B_;
  return this;
}

// UOptimusSceneComponentSource @ 14e15cab0

UOptimusSceneComponentSource * __thiscall
UOptimusSceneComponentSource::UOptimusSceneComponentSource
          (UOptimusSceneComponentSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOptimusSceneComponentSource__6B_;
  return this;
}

// ~UOptimusSceneComponentSource @ 14e163e70

void __thiscall
UOptimusSceneComponentSource::~UOptimusSceneComponentSource(UOptimusSceneComponentSource *this)

{
  *(undefined ***)this = &___7UOptimusComponentSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBindingName @ 14e1bbba0

FName __thiscall UOptimusSceneComponentSource::GetBindingName(UOptimusSceneComponentSource *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Scene");
  return in_RDX;
}

// GetComponentClass @ 14e1be5c0

TSubclassOf<UActorComponent> __thiscall
UOptimusSceneComponentSource::GetComponentClass(UOptimusSceneComponentSource *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_USceneComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetDisplayName @ 14e1c4b60

FText * __thiscall
UOptimusSceneComponentSource::GetDisplayName
          (UOptimusSceneComponentSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"OptimusSceneComponentSource",L"SceneComponent",
             L"Scene Component");
  return __return_storage_ptr__;
}

// GetExecutionDomains @ 14e1c50b0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusSceneComponentSource::GetExecutionDomains
          (UOptimusSceneComponentSource *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d8ac0

UClass * __cdecl UOptimusSceneComponentSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSceneComponentSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSceneComponentSource",
               &Z_Registration_Info_UClass_UOptimusSceneComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusSceneComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSceneComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusSceneComponentSource>,local_res8,
               UOptimusComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSceneComponentSource.InnerSingleton;
}

// StaticRegisterNativesUOptimusSceneComponentSource @ 14e225e30

void __cdecl UOptimusSceneComponentSource::StaticRegisterNativesUOptimusSceneComponentSource(void)

{
  return;
}

