// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e11d7c0

UClass * __cdecl UOptimusClothDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusClothDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusClothDataProvider",
               &Z_Registration_Info_UClass_UOptimusClothDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusClothDataProvider,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusClothDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusClothDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusClothDataProvider.InnerSingleton;
}

// UOptimusClothDataProvider @ 14e1585d0

UOptimusClothDataProvider * __thiscall
UOptimusClothDataProvider::UOptimusClothDataProvider
          (UOptimusClothDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusClothDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UOptimusClothDataProvider @ 14e158610

UOptimusClothDataProvider * __thiscall
UOptimusClothDataProvider::UOptimusClothDataProvider
          (UOptimusClothDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusClothDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UOptimusClothDataProvider @ 14e1622e0

void __thiscall
UOptimusClothDataProvider::~UOptimusClothDataProvider(UOptimusClothDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusClothDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d48a0

UClass * __cdecl UOptimusClothDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusClothDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusClothDataProvider",
               &Z_Registration_Info_UClass_UOptimusClothDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusClothDataProvider,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusClothDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusClothDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusClothDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dcd00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UOptimusClothDataProvider::GetRenderProxy(UOptimusClothDataProvider *this)

{
  double dVar1;
  int iVar2;
  FComputeDataProviderRenderProxy *pFVar3;
  UActorComponent *this_00;
  FSceneInterface *pFVar4;
  UClass *pUVar5;
  
  pFVar3 = ::operator_new(0x28);
  if (pFVar3 != (FComputeDataProviderRenderProxy *)0x0) {
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->SkinnedMesh).WeakPtr);
    pFVar3[1] = (FComputeDataProviderRenderProxy)0x0;
    *(undefined4 *)(pFVar3 + 2) = 0x3f800000;
    *pFVar3 = (FComputeDataProviderRenderProxy)&___7FOptimusClothDataProviderProxy__6B_;
    *(undefined8 *)&pFVar3[2].field_0x4 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    *(float *)&pFVar3[3].field_0x4 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    *(undefined4 *)(pFVar3 + 4) = 0;
    if (this_00 != (UActorComponent *)0x0) {
      pFVar4 = UActorComponent::GetScene(this_00);
      if (pFVar4 != (FSceneInterface *)0x0) {
        pFVar3[1] = *(FComputeDataProviderRenderProxy *)&this_00[10].UCSSerializationIndex;
        pFVar4 = UActorComponent::GetScene(this_00);
        iVar2 = (**(code **)(pFVar4->_padding_ + 0x4e8))(pFVar4);
        *(int *)(pFVar3 + 4) = iVar2 + 1;
        pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar5->_padding_)) {
          *(undefined4 *)(pFVar3 + 2) = *(undefined4 *)&this_00[0xe].PrimaryComponentTick.Target;
          dVar1 = (double)this_00[3]._padding_;
          *(ulonglong *)&pFVar3[2].field_0x4 =
               CONCAT44((float)*(double *)&this_00[2].field_0xb8,
                        (float)(double)this_00[2].WorldPrivate);
          *(float *)&pFVar3[3].field_0x4 = (float)dVar1;
        }
      }
    }
    return pFVar3;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusClothDataProvider @ 14e2257b0

void __cdecl UOptimusClothDataProvider::StaticRegisterNativesUOptimusClothDataProvider(void)

{
  return;
}

