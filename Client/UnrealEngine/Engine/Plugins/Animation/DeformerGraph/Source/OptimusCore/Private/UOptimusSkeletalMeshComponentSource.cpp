// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 9

// StaticClass @ 14e114530

UClass * __cdecl UOptimusSkeletalMeshComponentSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkeletalMeshComponentSource",
               &Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusSkeletalMeshComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkeletalMeshComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusSkeletalMeshComponentSource>,local_res8,
               UOptimusSkinnedMeshComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.InnerSingleton;
}

// UOptimusSkeletalMeshComponentSource @ 14e15cc20

UOptimusSkeletalMeshComponentSource * __thiscall
UOptimusSkeletalMeshComponentSource::UOptimusSkeletalMeshComponentSource
          (UOptimusSkeletalMeshComponentSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOptimusSkeletalMeshComponentSource__6B_;
  return this;
}

// UOptimusSkeletalMeshComponentSource @ 14e15cc50

UOptimusSkeletalMeshComponentSource * __thiscall
UOptimusSkeletalMeshComponentSource::UOptimusSkeletalMeshComponentSource
          (UOptimusSkeletalMeshComponentSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOptimusSkeletalMeshComponentSource__6B_;
  return this;
}

// ~UOptimusSkeletalMeshComponentSource @ 14e163ee0

void __thiscall
UOptimusSkeletalMeshComponentSource::~UOptimusSkeletalMeshComponentSource
          (UOptimusSkeletalMeshComponentSource *this)

{
  *(undefined ***)this = &___7UOptimusComponentSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBindingName @ 14e1bbbd0

FName __thiscall
UOptimusSkeletalMeshComponentSource::GetBindingName(UOptimusSkeletalMeshComponentSource *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SkeletalMesh");
  return in_RDX;
}

// GetComponentClass @ 14e1be600

TSubclassOf<UActorComponent> __thiscall
UOptimusSkeletalMeshComponentSource::GetComponentClass(UOptimusSkeletalMeshComponentSource *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetDisplayName @ 14e1c4bd0

FText * __thiscall
UOptimusSkeletalMeshComponentSource::GetDisplayName
          (UOptimusSkeletalMeshComponentSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"OptimusSkeletalMeshComponentSource",L"SkeletalMeshComponent",
             L"Skeletal Mesh Component");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d8dc0

UClass * __cdecl UOptimusSkeletalMeshComponentSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkeletalMeshComponentSource",
               &Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusSkeletalMeshComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkeletalMeshComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusSkeletalMeshComponentSource>,local_res8,
               UOptimusSkinnedMeshComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.InnerSingleton;
}

// StaticRegisterNativesUOptimusSkeletalMeshComponentSource @ 14e225e70

void __cdecl
UOptimusSkeletalMeshComponentSource::StaticRegisterNativesUOptimusSkeletalMeshComponentSource(void)

{
  return;
}

