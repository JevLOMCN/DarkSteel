// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 8

// StaticClass @ 145ed03e0

UClass * __cdecl UInteractiveFoliageComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveFoliageComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"InteractiveFoliageComponent",
               &Z_Registration_Info_UClass_UInteractiveFoliageComponent.InnerSingleton,
               StaticRegisterNativesUInteractiveFoliageComponent,0x660,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveFoliageComponent>,
               InternalVTableHelperCtorCaller<UInteractiveFoliageComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveFoliageComponent.InnerSingleton;
}

// UInteractiveFoliageComponent @ 145ed9330

UInteractiveFoliageComponent * __thiscall
UInteractiveFoliageComponent::UInteractiveFoliageComponent
          (UInteractiveFoliageComponent *this,FVTableHelper *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UInteractiveFoliageComponent @ 145ed93a0

UInteractiveFoliageComponent * __thiscall
UInteractiveFoliageComponent::UInteractiveFoliageComponent
          (UInteractiveFoliageComponent *this,FObjectInitializer *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UInteractiveFoliageComponent @ 145eda570

void __thiscall
UInteractiveFoliageComponent::~UInteractiveFoliageComponent(UInteractiveFoliageComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// CreateSceneProxy @ 145edfa40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UInteractiveFoliageComponent::CreateSceneProxy(UInteractiveFoliageComponent *this)

{
  UObject *pUVar1;
  UStaticMesh *pUVar2;
  code *pcVar3;
  bool bVar4;
  FStaticMeshRenderData *pFVar5;
  FPrimitiveSceneProxy *pFVar6;
  FInteractiveFoliageSceneProxy *this_00;
  
  pUVar1 = *(UObject **)&this->field_0x5a0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 == (UObject *)0x0) {
      return (FPrimitiveSceneProxy *)0x0;
    }
    UE::GC::MarkAsReachable(pUVar1);
  }
  else if (pUVar1 == (UObject *)0x0) {
    return (FPrimitiveSceneProxy *)0x0;
  }
  pUVar2 = *(UStaticMesh **)&this->field_0x5a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pFVar5 = UStaticMesh::GetRenderData(pUVar2);
  if (pFVar5 != (FStaticMeshRenderData *)0x0) {
    pUVar2 = *(UStaticMesh **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pFVar5 = UStaticMesh::GetRenderData(pUVar2);
    if ((pFVar5->LODResources).Array.ArrayNum != 0) {
      pUVar2 = *(UStaticMesh **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pFVar5 = UStaticMesh::GetRenderData(pUVar2);
      if (((pFVar5->LODResources).Array.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPrimitiveSceneProxy *)(*pcVar3)();
        return pFVar6;
      }
      if (*(int *)(*(longlong *)(pFVar5->LODResources).Array.AllocatorInstance.Data + 0x17c) != 0) {
        this_00 = ::operator_new(0xbc0);
        if (this_00 == (FInteractiveFoliageSceneProxy *)0x0) {
          this->FoliageSceneProxy = (FInteractiveFoliageSceneProxy *)0x0;
          return (FPrimitiveSceneProxy *)0x0;
        }
        FStaticMeshSceneProxy::FStaticMeshSceneProxy
                  ((FStaticMeshSceneProxy *)this_00,(UStaticMeshComponent *)this,false);
        this_00->_padding_ = (longlong)&___7FInteractiveFoliageSceneProxy__6B_;
        (this_00->FoliageNormalizedRotationAxisAndAngle).field0_0x0._s_0.Z = 1.0;
        (this_00->FoliageImpluseDirection).field0_0x0._s_0.X = 0.0;
        (this_00->FoliageImpluseDirection).field0_0x0._s_0.Y = 0.0;
        (this_00->FoliageImpluseDirection).field0_0x0._s_0.Z = 0.0;
        (this_00->FoliageNormalizedRotationAxisAndAngle).field0_0x0._s_0.X = 0.0;
        (this_00->FoliageNormalizedRotationAxisAndAngle).field0_0x0._s_0.Y = 0.0;
        (this_00->FoliageNormalizedRotationAxisAndAngle).field0_0x0._s_0.W = 0.0;
        this->FoliageSceneProxy = this_00;
        return (FPrimitiveSceneProxy *)this_00;
      }
    }
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DestroyRenderState_Concurrent @ 145ee0010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UInteractiveFoliageComponent::DestroyRenderState_Concurrent(UInteractiveFoliageComponent *this)

{
  UPrimitiveComponent::DestroyRenderState_Concurrent((UPrimitiveComponent *)this);
  this->FoliageSceneProxy = (FInteractiveFoliageSceneProxy *)0x0;
  return;
}

// GetPrivateStaticClass @ 145ee52c0

UClass * __cdecl UInteractiveFoliageComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveFoliageComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"InteractiveFoliageComponent",
               &Z_Registration_Info_UClass_UInteractiveFoliageComponent.InnerSingleton,
               StaticRegisterNativesUInteractiveFoliageComponent,0x660,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveFoliageComponent>,
               InternalVTableHelperCtorCaller<UInteractiveFoliageComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveFoliageComponent.InnerSingleton;
}

// StaticRegisterNativesUInteractiveFoliageComponent @ 145eed070

void __cdecl UInteractiveFoliageComponent::StaticRegisterNativesUInteractiveFoliageComponent(void)

{
  return;
}

