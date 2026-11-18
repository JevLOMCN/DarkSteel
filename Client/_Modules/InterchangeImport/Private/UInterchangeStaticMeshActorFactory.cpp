// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 11

// StaticClass @ 14e700a00

UClass * __cdecl UInterchangeStaticMeshActorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeStaticMeshActorFactory",
               &Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeStaticMeshActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeStaticMeshActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeStaticMeshActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.InnerSingleton;
}

// UInterchangeStaticMeshActorFactory @ 14e708cf0

UInterchangeStaticMeshActorFactory * __thiscall
UInterchangeStaticMeshActorFactory::UInterchangeStaticMeshActorFactory
          (UInterchangeStaticMeshActorFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeStaticMeshActorFactory__6B_;
  return this;
}

// UInterchangeStaticMeshActorFactory @ 14e708d20

UInterchangeStaticMeshActorFactory * __thiscall
UInterchangeStaticMeshActorFactory::UInterchangeStaticMeshActorFactory
          (UInterchangeStaticMeshActorFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeStaticMeshActorFactory__6B_;
  return this;
}

// ~UInterchangeStaticMeshActorFactory @ 14e709b10

void __thiscall
UInterchangeStaticMeshActorFactory::~UInterchangeStaticMeshActorFactory
          (UInterchangeStaticMeshActorFactory *this)

{
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// ApplyStaticMeshToComponent @ 14e70e780

void __thiscall
UInterchangeStaticMeshActorFactory::ApplyStaticMeshToComponent
          (UInterchangeStaticMeshActorFactory *this,UInterchangeFactoryBaseNode *param_1,
          UStaticMeshComponent *param_2,UInterchangeBaseNodeContainer *param_3,
          UInterchangeMeshActorFactoryNode *param_4)

{
  int iVar1;
  UStaticMesh *pUVar2;
  UStaticMesh *this_00;
  UClass *pUVar3;
  bool bVar4;
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  UInterchangeFactoryBaseNode::GetCustomReferenceObject(param_1,&local_28);
  this_00 = (UStaticMesh *)FSoftObjectPath::TryLoad(&local_28,(FUObjectSerializeContext *)0x0);
  if (this_00 == (UStaticMesh *)0x0) goto LAB_14e70e852;
  pUVar3 = Z_Construct_UClass_UStaticMesh_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_)) goto LAB_14e70e852;
  pUVar2 = (param_2->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UStaticMesh *)0x0) goto LAB_14e70e87a;
LAB_14e70e817:
    bVar4 = pUVar2 == this_00;
  }
  else {
    if (pUVar2 != (UStaticMesh *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      goto LAB_14e70e817;
    }
LAB_14e70e87a:
    bVar4 = this_00 == (UStaticMesh *)0x0;
  }
  if (!bVar4) {
    (**(code **)(param_2->_padding_ + 0xb28))(param_2,this_00);
  }
  UStaticMesh::CalculateExtendedBounds(this_00);
  if (param_4 != (UInterchangeMeshActorFactoryNode *)0x0) {
    UE::Interchange::ActorHelper::ApplySlotMaterialDependencies
              (param_3,param_4,(UMeshComponent *)param_2);
  }
LAB_14e70e852:
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// ExecuteResetObjectProperties @ 14e714370

void __thiscall
UInterchangeStaticMeshActorFactory::ExecuteResetObjectProperties
          (UInterchangeStaticMeshActorFactory *this,UInterchangeBaseNodeContainer *param_1,
          UInterchangeFactoryBaseNode *param_2,UObject *param_3)

{
  int iVar1;
  UMeshComponent *this_00;
  UObject *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UInterchangeFactoryBaseNode *this_01;
  UObject *pUVar5;
  FString local_48;
  FSoftObjectPath local_38;
  
  UInterchangeActorFactory::ExecuteResetObjectProperties
            ((UInterchangeActorFactory *)this,param_1,param_2,param_3);
  if (param_3 == (UObject *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_AStaticMeshActor_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(*(longlong *)&param_3->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return;
  }
  if (param_2 == (UInterchangeFactoryBaseNode *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_) {
    return;
  }
  this_00 = *(UMeshComponent **)&param_3[0x11].field_0x18;
  if (this_00 == (UMeshComponent *)0x0) {
    return;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar3 = UInterchangeMeshActorFactoryNode::GetCustomInstancedAssetFactoryNodeUid
                    ((UInterchangeMeshActorFactoryNode *)param_2,&local_48);
  if (!bVar3) goto LAB_14e71451d;
  this_01 = (UInterchangeFactoryBaseNode *)UInterchangeBaseNodeContainer::GetNode(param_1,&local_48)
  ;
  if (this_01 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e71446f:
    this_01 = (UInterchangeFactoryBaseNode *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14e71446f;
  }
  if (this_01 == (UInterchangeFactoryBaseNode *)0x0) goto LAB_14e71451d;
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_01,&local_38);
  pUVar5 = FSoftObjectPath::TryLoad(&local_38,(FUObjectSerializeContext *)0x0);
  if (pUVar5 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pUVar2 = (UObject *)this_00[1]._padding_;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar2 == (UObject *)0x0) goto LAB_14e71455d;
LAB_14e7144f0:
        bVar3 = pUVar2 == pUVar5;
      }
      else {
        if (pUVar2 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar2);
          goto LAB_14e7144f0;
        }
LAB_14e71455d:
        bVar3 = pUVar5 == (UObject *)0x0;
      }
      if (!bVar3) {
        (**(code **)(this_00->_padding_ + 0xb28))(this_00,pUVar5);
      }
    }
  }
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14e71451d:
  UMeshComponent::EmptyOverrideMaterials(this_00);
  UE::Interchange::ActorHelper::ApplySlotMaterialDependencies
            (param_1,(UInterchangeMeshActorFactoryNode *)param_2,this_00);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// GetFactoryClass @ 14e718460

UClass * __thiscall
UInterchangeStaticMeshActorFactory::GetFactoryClass(UInterchangeStaticMeshActorFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshActor",
               &Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton,
               AStaticMeshActor::StaticRegisterNativesAStaticMeshActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AStaticMeshActor>,
               InternalVTableHelperCtorCaller<AStaticMeshActor>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton;
}

// GetPrivateStaticClass @ 14e71a940

UClass * __cdecl UInterchangeStaticMeshActorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeStaticMeshActorFactory",
               &Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeStaticMeshActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeStaticMeshActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeStaticMeshActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.InnerSingleton;
}

// ProcessActor @ 14e725280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UInterchangeStaticMeshActorFactory::ProcessActor
          (UInterchangeStaticMeshActorFactory *this,AActor *param_1,
          UInterchangeActorFactoryNode *param_2,UInterchangeBaseNodeContainer *param_3,
          FImportSceneObjectsParams *param_4)

{
  undefined1 uVar1;
  UStaticMeshComponent *this_00;
  FName FVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  USceneComponent *pUVar6;
  AActor *pAVar7;
  FName *pFVar8;
  UStaticMeshComponent *this_01;
  UInterchangeFactoryBaseNode *pUVar9;
  longlong *plVar10;
  UInterchangeMeshActorFactoryNode *pUVar11;
  undefined1 auStackY_178 [32];
  FName local_138 [2];
  undefined1 local_128 [128];
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == (AActor *)0x0) {
    return (UObject *)0x0;
  }
  pUVar5 = Z_Construct_UClass_AStaticMeshActor_NoRegister();
  iVar4 = (int)pUVar5->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar4) {
    return (UObject *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar4 * 8)
      != &pUVar5->_padding_) {
    return (UObject *)0x0;
  }
  this_00 = (UStaticMeshComponent *)param_1[1]._padding_;
  if (this_00 == (UStaticMeshComponent *)0x0) {
    return (UObject *)0x0;
  }
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  if (param_2 != (UInterchangeActorFactoryNode *)0x0) {
    pUVar5 = Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar5->_padding_)) {
      bVar3 = UInterchangeMeshActorFactoryNode::GetCustomGeometricTransform
                        ((UInterchangeMeshActorFactoryNode *)param_2,&local_a8);
      pUVar11 = (UInterchangeMeshActorFactoryNode *)param_2;
      if (bVar3) {
        iVar4 = USceneComponent::GetNumChildrenComponents((USceneComponent *)this_00);
        if (0 < iVar4) {
          pUVar6 = USceneComponent::GetChildComponent((USceneComponent *)this_00,0);
          pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
          iVar4 = (int)pUVar5->_padding_;
          if (((iVar4 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
               &pUVar5->_padding_)) &&
             (pAVar7 = USceneComponent::GetAttachParentActor(pUVar6), pAVar7 == param_1)) {
            pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
            iVar4 = (int)pUVar5->_padding_;
            if (((iVar4 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
                 &pUVar5->_padding_)) && (pUVar6 != (USceneComponent *)0x0)) goto LAB_14e7255c6;
          }
        }
        (**(code **)(param_1->_padding_ + 0x5c8))(param_1,0);
        pFVar8 = ::FName::FName(local_138,L"GeometricTransform");
        pUVar6 = (param_1->RootComponent).field0_0x0.DebugPtr;
        FVar2 = *pFVar8;
        if (FVar2 == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)pUVar6,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_128,pUVar5);
        local_128._48_8_ = (FObjectInstancingGraph *)0x0;
        local_128._56_8_ = (UPackage *)0x0;
        local_128._24_4_ = RF_NoFlags;
        local_128._40_8_ = (UObject *)0x0;
        local_128[0x20] = false;
        local_128._8_8_ = pUVar6;
        local_128._16_8_ = FVar2;
        this_01 = (UStaticMeshComponent *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
        if (local_128._64_8_ != 0) {
          plVar10 = (longlong *)(local_128 + 0x50);
          if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_128._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        AActor::AddInstanceComponent(param_1,(UActorComponent *)this_01);
        pUVar9 = UE::Interchange::ActorHelper::FindAssetInstanceFactoryNode
                           (param_3,(UInterchangeFactoryBaseNode *)param_2);
        if (pUVar9 != (UInterchangeFactoryBaseNode *)0x0) {
          ApplyStaticMeshToComponent
                    (this,pUVar9,this_01,param_3,(UInterchangeMeshActorFactoryNode *)param_2);
        }
        USceneComponent::SetupAttachment
                  ((USceneComponent *)this_01,(USceneComponent *)this_00,(FName)0x0);
        (**(code **)(param_1->_padding_ + 0x5b0))(param_1);
        uVar1 = *(undefined1 *)((longlong)&this_00->_padding_ + 3);
        (**(code **)(this_01->_padding_ + 0x5f8))(this_01,2);
        USceneComponent::SetRelativeTransform
                  ((USceneComponent *)this_01,&local_a8,false,(FHitResult *)0x0,None);
        (**(code **)(this_01->_padding_ + 0x5f8))(this_01,uVar1);
        return (UObject *)this_00;
      }
      goto LAB_14e7255c6;
    }
  }
  pUVar11 = (UInterchangeMeshActorFactoryNode *)0x0;
LAB_14e7255c6:
  pUVar9 = UE::Interchange::ActorHelper::FindAssetInstanceFactoryNode
                     (param_3,(UInterchangeFactoryBaseNode *)param_2);
  if (pUVar9 != (UInterchangeFactoryBaseNode *)0x0) {
    UActorComponent::UnregisterComponent((UActorComponent *)this_00);
    ApplyStaticMeshToComponent(this,pUVar9,this_00,param_3,pUVar11);
    UActorComponent::RegisterComponent((UActorComponent *)this_00);
    return (UObject *)this_00;
  }
  return (UObject *)this_00;
}

// SetupObject_GameThread @ 14e728f20

void __thiscall
UInterchangeStaticMeshActorFactory::SetupObject_GameThread
          (UInterchangeStaticMeshActorFactory *this,FSetupObjectParams *param_1)

{
  UObject *pUVar1;
  UStaticMeshComponent *pUVar2;
  UInterchangeBaseNodeContainer *this_00;
  UStaticMesh *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UInterchangeStaticMeshFactoryNode *this_01;
  UInterchangeFactoryBaseNode *pUVar7;
  int iVar8;
  UInterchangeMeshActorFactoryNode *pUVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  pUVar1 = param_1->ImportedObject;
  if (pUVar1 == (UObject *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_AStaticMeshActor_NoRegister();
  iVar8 = (int)pUVar6->_padding_;
  if (*(int *)(*(longlong *)&pUVar1->field_0x10 + 0x38) < iVar8) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar1->field_0x10 + 0x30) + (longlong)iVar8 * 8)
      != &pUVar6->_padding_) {
    return;
  }
  pUVar2 = *(UStaticMeshComponent **)&pUVar1[0x11].field_0x18;
  if (pUVar2 == (UStaticMeshComponent *)0x0) {
    return;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  UInterchangeBaseNode::GetTargetNodeUids((UInterchangeBaseNode *)param_1->FactoryNode,&local_38);
  iVar8 = 0;
  if (local_38.ArrayNum == 0) goto LAB_14e729118;
  this_00 = param_1->NodeContainer;
  if ((local_38.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_01 = (UInterchangeStaticMeshFactoryNode *)
            UInterchangeBaseNodeContainer::GetFactoryNode
                      (this_00,(FString *)local_38.AllocatorInstance.Data);
  if (this_01 != (UInterchangeStaticMeshFactoryNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
    iVar8 = (int)pUVar6->_padding_;
    if ((iVar8 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar6->_padding_)) {
      pUVar9 = (UInterchangeMeshActorFactoryNode *)param_1->FactoryNode;
      if (pUVar9 == (UInterchangeMeshActorFactoryNode *)0x0) {
LAB_14e729057:
        pUVar9 = (UInterchangeMeshActorFactoryNode *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister();
        iVar8 = (int)pUVar6->_padding_;
        if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar6->_padding_)) goto LAB_14e729057;
      }
      ApplyStaticMeshToComponent
                (this,(UInterchangeFactoryBaseNode *)this_01,pUVar2,param_1->NodeContainer,pUVar9);
      pUVar3 = (pUVar2->StaticMesh).field0_0x0.DebugPtr;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 == (UStaticMesh *)0x0) goto LAB_14e72909f;
      }
      else if (pUVar3 == (UStaticMesh *)0x0) {
LAB_14e72909f:
        bVar5 = UInterchangeStaticMeshFactoryNode::GetCustomSubstituteUID(this_01,&local_28);
        if ((bVar5) &&
           (pUVar7 = UInterchangeBaseNodeContainer::GetFactoryNode(param_1->NodeContainer,&local_28)
           , pUVar7 != (UInterchangeFactoryBaseNode *)0x0)) {
          pUVar6 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
          iVar8 = (int)pUVar6->_padding_;
          if ((iVar8 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
              &pUVar6->_padding_)) {
            ApplyStaticMeshToComponent(this,pUVar7,pUVar2,param_1->NodeContainer,pUVar9);
          }
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar8 = local_38.ArrayNum;
LAB_14e729118:
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,iVar8);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUInterchangeStaticMeshActorFactory @ 14e72a5f0

void __cdecl
UInterchangeStaticMeshActorFactory::StaticRegisterNativesUInterchangeStaticMeshActorFactory(void)

{
  return;
}

