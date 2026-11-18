// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 8

// StaticClass @ 1494844d0

UClass * __cdecl AWN_BindlessISM_Test::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_BindlessISM_Test.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_BindlessISM_Test",
               &Z_Registration_Info_UClass_AWN_BindlessISM_Test.InnerSingleton,
               StaticRegisterNativesAWN_BindlessISM_Test,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_BindlessISM_Test>,
               InternalVTableHelperCtorCaller<AWN_BindlessISM_Test>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_BindlessISM_Test.InnerSingleton;
}

// AWN_BindlessISM_Test @ 14948c1d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_BindlessISM_Test * __thiscall
AWN_BindlessISM_Test::AWN_BindlessISM_Test(AWN_BindlessISM_Test *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_BindlessISM_Test__6B_;
  (this->SpawnInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnInfos).ArrayNum = 0;
  (this->SpawnInfos).ArrayMax = 0;
  (this->BindlessISMComponent).field0_0x0.DebugPtr = (UWN_BindlessISMComponent *)0x0;
  return this;
}

// AWN_BindlessISM_Test @ 14948c210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_BindlessISM_Test * __thiscall
AWN_BindlessISM_Test::AWN_BindlessISM_Test(AWN_BindlessISM_Test *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UWN_BindlessISMComponent *pUVar5;
  UStaticMesh *pUVar6;
  FName local_res8;
  FString local_38;
  FGCObject local_28;
  UStaticMesh *local_18;
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xf9;
  this->_padding_ = (longlong)&___7AWN_BindlessISM_Test__6B_;
  (this->SpawnInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnInfos).ArrayNum = 0;
  (this->SpawnInfos).ArrayMax = 0;
  (this->BindlessISMComponent).field0_0x0.DebugPtr = (UWN_BindlessISMComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,"BindlessISMComponent");
  FVar2 = *pFVar3;
  pUVar4 = UWN_BindlessISMComponent::StaticClass();
  pUVar5 = (UWN_BindlessISMComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UWN_BindlessISMComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->BindlessISMComponent).field0_0x0.DebugPtr = pUVar5;
  local_28._padding_ = (longlong)&___7FGCObject__6B_;
  local_28.bCanMakeInitialReferences = false;
  local_28.bReferenceAdded = false;
  FGCObject::RegisterGCObject(&local_28);
  local_18 = (UStaticMesh *)0x0;
  local_28._padding_ = (longlong)&___7__FObjectFinder_VUStaticMesh___ConstructorHelpers__6B_;
  ConstructorHelpers::CheckIfIsInConstructor(L"/Engine/EngineMeshes/Sphere.Sphere");
  ::FString::FString(&local_38,L"/Engine/EngineMeshes/Sphere.Sphere");
  ConstructorHelpers::StripObjectClass(&local_38,true);
  pUVar6 = ConstructorHelpersInternal::FindOrLoadObject<UStaticMesh>(&local_38,0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UStaticMesh *)0x0)) {
    local_18 = pUVar6;
    if (pUVar6 == (UStaticMesh *)0x0) {
      ConstructorHelpers::FailedToFind(L"/Engine/EngineMeshes/Sphere.Sphere");
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
    local_18 = pUVar6;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18 != (UStaticMesh *)0x0) {
    pUVar5 = (this->BindlessISMComponent).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar5 + 0xb28))(pUVar5,local_18);
  }
  AActor::SetRootComponent
            ((AActor *)this,(USceneComponent *)(this->BindlessISMComponent).field0_0x0.DebugPtr);
  local_28._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(&local_28);
  return this;
}

// ~AWN_BindlessISM_Test @ 14948fd60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_BindlessISM_Test::~AWN_BindlessISM_Test(AWN_BindlessISM_Test *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AWN_BindlessISM_Test__6B_;
  DestructItems<FWN_TestInstanceSpawnInfo,int>
            ((FWN_TestInstanceSpawnInfo *)(this->SpawnInfos).AllocatorInstance.Data,
             (this->SpawnInfos).ArrayNum);
  pFVar1 = (this->SpawnInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1494a1310

UClass * __cdecl AWN_BindlessISM_Test::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_BindlessISM_Test.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_BindlessISM_Test",
               &Z_Registration_Info_UClass_AWN_BindlessISM_Test.InnerSingleton,
               StaticRegisterNativesAWN_BindlessISM_Test,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_BindlessISM_Test>,
               InternalVTableHelperCtorCaller<AWN_BindlessISM_Test>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_BindlessISM_Test.InnerSingleton;
}

// OnConstruction @ 1494a6820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWN_BindlessISM_Test::OnConstruction(AWN_BindlessISM_Test *this,TTransform<double> *param_1)

{
  int *piVar1;
  int iVar2;
  UWN_BindlessISMComponent *pUVar3;
  UWN_TextureCollection *pUVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  int iVar8;
  UMaterialInterface *pUVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  FStaticBasicLogRecord *pFVar12;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  bool local_res8 [8];
  undefined1 local_res18 [16];
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_48;
  
  pUVar3 = (this->BindlessISMComponent).field0_0x0.DebugPtr;
  if (0 < *(int *)&pUVar3->field_0x660) {
    (**(code **)(*(longlong *)pUVar3 + 0xc38))(pUVar3);
    piVar1 = &(pUVar3->Bindless_MaterialIndices).ArrayMax;
    (pUVar3->Bindless_MaterialIndices).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(pUVar3->Bindless_MaterialIndices).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(pUVar3->Bindless_MaterialInterfaces).ArrayMax;
    (pUVar3->Bindless_MaterialInterfaces).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pUVar3->Bindless_MaterialInterfaces).AllocatorInstance,0,piVar1);
    }
    pUVar4 = pUVar3->Bindless_TextureCollection;
    *(undefined4 *)&pUVar4->field_0x38 = 0;
    if (*(int *)&pUVar4->field_0x3c != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pUVar4->field_0x30,0,(int *)&pUVar4->field_0x3c);
    }
    UTextureCollection::UpdateResource((UTextureCollection *)pUVar3->Bindless_TextureCollection);
    UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)pUVar3);
    (pUVar3->Bindless_MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
    UActorComponent::MarkRenderInstancesDirty((UActorComponent *)pUVar3);
  }
  UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)pUVar3);
  (pUVar3->Bindless_MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  pFVar5 = (this->SpawnInfos).AllocatorInstance.Data;
  iVar2 = (this->SpawnInfos).ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar5 + 0x10);
  do {
    if ((this->SpawnInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_TestInstanceSpawnInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((FScriptContainerElement *)&this_00[-1].ObjectID.SubPathString ==
        pFVar5 + (longlong)iVar2 * 0x38) {
      return;
    }
    pUVar9 = (UMaterialInterface *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar9 == (UMaterialInterface *)0x0) {
      if ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar9 = (UMaterialInterface *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
        goto LAB_1494a6993;
      }
    }
    else {
LAB_1494a6993:
      if (pUVar9 != (UMaterialInterface *)0x0) {
        pUVar10 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        iVar8 = (int)pUVar10->_padding_;
        if ((iVar8 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
            &pUVar10->_padding_)) {
          WN_CreateInstanceTransforms
                    (&local_48,
                     (double)this_00[-1].ObjectID.SubPathString.Data.AllocatorInstance.Data,
                     this_00[-1].ObjectID.SubPathString.Data.ArrayNum);
          pUVar3 = (this->BindlessISMComponent).field0_0x0.DebugPtr;
          pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                              ((TPersistentObjectPtr<FSoftObjectPath> *)
                               &pUVar3->Bindless_BaseMaterial);
          if (pUVar11 == (UObject *)0x0) {
LAB_1494a6abf:
            if (2 < (byte)Common._0_1_) {
              pFVar12 = &::LOG_Static;
LAB_1494a6acf:
              UE::Logging::Private::BasicLog<3>(pFVar12,(FLogCategoryBase *)&Common);
            }
          }
          else {
            pUVar10 = Z_Construct_UClass_UMaterial_NoRegister();
            iVar8 = (int)pUVar10->_padding_;
            if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar8) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar10->_padding_)) goto LAB_1494a6abf;
            if ((pUVar3->Bindless_TextureCollectionBindings).ArrayNum == 0) {
              if ((byte)Common._0_1_ < 3) goto LAB_1494a6adb;
              pFVar12 = &::LOG_Static;
              goto LAB_1494a6acf;
            }
            iVar8 = UWN_BindlessISMComponent::TryAddBindlessMaterialInterface
                              (pUVar3,pUVar9,local_res8);
            bVar6 = local_res8[0];
            if (local_res8[0] != false) {
              UTextureCollection::UpdateResource
                        ((UTextureCollection *)pUVar3->Bindless_TextureCollection);
            }
            UWN_BindlessISMComponent::AddBindlessInstances_Impl
                      (pUVar3,&local_58,&local_48,true,iVar8);
            if (bVar6 != false) {
              UWN_BindlessISMComponent::UpdateBindlessTextureCollection(pUVar3,true);
            }
            UActorComponent::MarkRenderInstancesDirty((UActorComponent *)pUVar3);
            FVar7.Data = local_58.AllocatorInstance.Data;
            local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_58.ArrayNum = 0;
            local_58.ArrayMax = 0;
            if (FVar7.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar7.Data);
            }
          }
LAB_1494a6adb:
          if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.AllocatorInstance.Data);
          }
        }
      }
    }
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_00[1].ObjectID.AssetPath.AssetName;
  } while( true );
}

// SpawnInstances @ 1494ad840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWN_BindlessISM_Test::SpawnInstances
          (AWN_BindlessISM_Test *this,double param_1,int param_2,UMaterialInterface *param_3)

{
  UWN_BindlessISMComponent *this_00;
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FStaticBasicLogRecord *pFVar4;
  bool local_res8 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  WN_CreateInstanceTransforms(&local_28,param_1,param_2);
  this_00 = (this->BindlessISMComponent).field0_0x0.DebugPtr;
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this_00->Bindless_BaseMaterial);
  if (pUVar2 == (UObject *)0x0) {
LAB_1494ad94f:
    if ((byte)Common._0_1_ < 3) goto LAB_1494ad96b;
    pFVar4 = &::LOG_Static;
  }
  else {
    pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_1494ad94f;
    if (param_3 == (UMaterialInterface *)0x0) {
      if ((byte)Common._0_1_ < 3) goto LAB_1494ad96b;
      pFVar4 = &::LOG_Static;
    }
    else {
      if ((this_00->Bindless_TextureCollectionBindings).ArrayNum != 0) {
        iVar1 = UWN_BindlessISMComponent::TryAddBindlessMaterialInterface
                          (this_00,param_3,local_res8);
        if (local_res8[0] != false) {
          UTextureCollection::UpdateResource
                    ((UTextureCollection *)this_00->Bindless_TextureCollection);
        }
        UWN_BindlessISMComponent::AddBindlessInstances_Impl(this_00,&local_18,&local_28,true,iVar1);
        if (local_res8[0] != false) {
          UWN_BindlessISMComponent::UpdateBindlessTextureCollection(this_00,true);
        }
        UActorComponent::MarkRenderInstancesDirty((UActorComponent *)this_00);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
        goto LAB_1494ad96b;
      }
      if ((byte)Common._0_1_ < 3) goto LAB_1494ad96b;
      pFVar4 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<3>(pFVar4,(FLogCategoryBase *)&Common);
LAB_1494ad96b:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesAWN_BindlessISM_Test @ 1494ae140

void __cdecl AWN_BindlessISM_Test::StaticRegisterNativesAWN_BindlessISM_Test(void)

{
  return;
}

