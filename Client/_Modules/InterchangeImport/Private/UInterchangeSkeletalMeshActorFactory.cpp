// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 10

// StaticClass @ 14e700c00

UClass * __cdecl UInterchangeSkeletalMeshActorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkeletalMeshActorFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSkeletalMeshActorFactory",
               &Z_Registration_Info_UClass_UInterchangeSkeletalMeshActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSkeletalMeshActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkeletalMeshActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSkeletalMeshActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkeletalMeshActorFactory.InnerSingleton;
}

// UInterchangeSkeletalMeshActorFactory @ 14e708af0

UInterchangeSkeletalMeshActorFactory * __thiscall
UInterchangeSkeletalMeshActorFactory::UInterchangeSkeletalMeshActorFactory
          (UInterchangeSkeletalMeshActorFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSkeletalMeshActorFactory__6B_;
  return this;
}

// UInterchangeSkeletalMeshActorFactory @ 14e708b20

UInterchangeSkeletalMeshActorFactory * __thiscall
UInterchangeSkeletalMeshActorFactory::UInterchangeSkeletalMeshActorFactory
          (UInterchangeSkeletalMeshActorFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSkeletalMeshActorFactory__6B_;
  return this;
}

// ~UInterchangeSkeletalMeshActorFactory @ 14e709a50

void __thiscall
UInterchangeSkeletalMeshActorFactory::~UInterchangeSkeletalMeshActorFactory
          (UInterchangeSkeletalMeshActorFactory *this)

{
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// ExecuteResetObjectProperties @ 14e714180

void __thiscall
UInterchangeSkeletalMeshActorFactory::ExecuteResetObjectProperties
          (UInterchangeSkeletalMeshActorFactory *this,UInterchangeBaseNodeContainer *param_1,
          UInterchangeFactoryBaseNode *param_2,UObject *param_3)

{
  int iVar1;
  USkeletalMeshComponent *this_00;
  bool bVar2;
  UClass *pUVar3;
  UInterchangeFactoryBaseNode *this_01;
  USkeletalMesh *pUVar4;
  USkeletalMesh *pUVar5;
  FString local_48;
  FSoftObjectPath local_38;
  
  UInterchangeActorFactory::ExecuteResetObjectProperties
            ((UInterchangeActorFactory *)this,param_1,param_2,param_3);
  if (param_3 == (UObject *)0x0) {
    return;
  }
  pUVar3 = Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(*(longlong *)&param_3->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_) {
    return;
  }
  if (param_2 == (UInterchangeFactoryBaseNode *)0x0) {
    return;
  }
  pUVar3 = Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_) {
    return;
  }
  this_00 = *(USkeletalMeshComponent **)&param_3[0x11].field_0x20;
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar2 = UInterchangeMeshActorFactoryNode::GetCustomInstancedAssetFactoryNodeUid
                    ((UInterchangeMeshActorFactoryNode *)param_2,&local_48);
  if (!bVar2) goto LAB_14e714324;
  this_01 = (UInterchangeFactoryBaseNode *)UInterchangeBaseNodeContainer::GetNode(param_1,&local_48)
  ;
  if (this_01 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e71428a:
    this_01 = (UInterchangeFactoryBaseNode *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) goto LAB_14e71428a;
  }
  if (this_01 != (UInterchangeFactoryBaseNode *)0x0) {
    local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_38.AssetPath.PackageName.Number = 0;
    local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_38.AssetPath.AssetName.Number = 0;
    local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.SubPathString.Data.ArrayNum = 0;
    local_38.SubPathString.Data.ArrayMax = 0;
    UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_01,&local_38);
    pUVar4 = (USkeletalMesh *)FSoftObjectPath::TryLoad(&local_38,(FUObjectSerializeContext *)0x0);
    if (pUVar4 != (USkeletalMesh *)0x0) {
      pUVar3 = Z_Construct_UClass_USkeletalMesh_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if (((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar3->_padding_)) &&
         (pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00), pUVar4 != pUVar5)) {
        (**(code **)(this_00->_padding_ + 0xb48))(this_00,pUVar4,0);
      }
    }
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
  }
LAB_14e714324:
  UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)this_00);
  UE::Interchange::ActorHelper::ApplySlotMaterialDependencies
            (param_1,(UInterchangeMeshActorFactoryNode *)param_2,(UMeshComponent *)this_00);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// GetFactoryClass @ 14e718410

UClass * __thiscall
UInterchangeSkeletalMeshActorFactory::GetFactoryClass(UInterchangeSkeletalMeshActorFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshActor",
               &Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton,
               ASkeletalMeshActor::StaticRegisterNativesASkeletalMeshActor,0x340,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ASkeletalMeshActor>,
               InternalVTableHelperCtorCaller<ASkeletalMeshActor>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton;
}

// GetPrivateStaticClass @ 14e71a580

UClass * __cdecl UInterchangeSkeletalMeshActorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkeletalMeshActorFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSkeletalMeshActorFactory",
               &Z_Registration_Info_UClass_UInterchangeSkeletalMeshActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSkeletalMeshActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkeletalMeshActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSkeletalMeshActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkeletalMeshActorFactory.InnerSingleton;
}

// ProcessActor @ 14e7251c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UInterchangeSkeletalMeshActorFactory::ProcessActor
          (UInterchangeSkeletalMeshActorFactory *this,AActor *param_1,
          UInterchangeActorFactoryNode *param_2,UInterchangeBaseNodeContainer *param_3,
          FImportSceneObjectsParams *param_4)

{
  int iVar1;
  USkeletalMeshComponent *this_00;
  UClass *pUVar2;
  
  if (param_1 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       (this_00 = (USkeletalMeshComponent *)param_1[1]._padding_,
       this_00 != (USkeletalMeshComponent *)0x0)) {
      USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
      UActorComponent::UnregisterComponent((UActorComponent *)this_00);
      return (UObject *)this_00;
    }
  }
  return (UObject *)0x0;
}

// SetupObject_GameThread @ 14e728730

void __thiscall
UInterchangeSkeletalMeshActorFactory::SetupObject_GameThread
          (UInterchangeSkeletalMeshActorFactory *this,FSetupObjectParams *param_1)

{
  undefined1 *puVar1;
  USkeletalMeshComponent *this_00;
  UInterchangeBaseNodeContainer *this_01;
  UInterchangeMeshActorFactoryNode *this_02;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UInterchangeFactoryBaseNode *pUVar5;
  UObject *pUVar6;
  UAnimationAsset *pUVar7;
  int iVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FSoftObjectPath local_48;
  FSoftObjectPath local_28;
  
  pUVar6 = param_1->ImportedObject;
  if (pUVar6 == (UObject *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
  iVar8 = (int)pUVar4->_padding_;
  if (*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar8) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar8 * 8)
      != &pUVar4->_padding_) {
    return;
  }
  this_00 = *(USkeletalMeshComponent **)&pUVar6[0x11].field_0x20;
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  UInterchangeBaseNode::GetTargetNodeUids((UInterchangeBaseNode *)param_1->FactoryNode,&local_78);
  iVar8 = 0;
  if (local_78.ArrayNum == 0) goto LAB_14e728a3d;
  this_01 = param_1->NodeContainer;
  if ((local_78.ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar5 = UInterchangeBaseNodeContainer::GetFactoryNode
                     (this_01,(FString *)local_78.AllocatorInstance.Data);
  if (pUVar5 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e728833:
    pUVar5 = (UInterchangeFactoryBaseNode *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister();
    iVar8 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar8 * 8)
        != &pUVar4->_padding_)) goto LAB_14e728833;
  }
  if (pUVar5 != (UInterchangeFactoryBaseNode *)0x0) {
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    UInterchangeFactoryBaseNode::GetCustomReferenceObject(pUVar5,&local_28);
    pUVar6 = FSoftObjectPath::TryLoad(&local_28,(FUObjectSerializeContext *)0x0);
    if (pUVar6 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_USkeletalMesh_NoRegister();
      iVar8 = (int)pUVar4->_padding_;
      if ((iVar8 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar4->_padding_)) {
        (**(code **)(this_00->_padding_ + 0xb48))(this_00,pUVar6,0);
        this_02 = (UInterchangeMeshActorFactoryNode *)param_1->FactoryNode;
        if (this_02 != (UInterchangeMeshActorFactoryNode *)0x0) {
          pUVar4 = Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister();
          iVar8 = (int)pUVar4->_padding_;
          if ((iVar8 <= *(int *)(this_02->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
              &pUVar4->_padding_)) {
            UE::Interchange::ActorHelper::ApplySlotMaterialDependencies
                      (param_1->NodeContainer,this_02,(UMeshComponent *)this_00);
            local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_68.Data.ArrayNum = 0;
            local_68.Data.ArrayMax = 0;
            bVar3 = UInterchangeMeshActorFactoryNode::GetCustomAnimationAssetUidToPlay
                              (this_02,&local_68);
            if (bVar3) {
              ::FString::ConcatCF(&local_58,L"\\AnimSequence",&local_68);
              pUVar5 = UInterchangeBaseNodeContainer::GetFactoryNode
                                 (param_1->NodeContainer,&local_58);
              if (pUVar5 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e72895e:
                pUVar5 = (UInterchangeFactoryBaseNode *)0x0;
              }
              else {
                pUVar4 = Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister();
                iVar8 = (int)pUVar4->_padding_;
                if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar8) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar8 * 8)
                    != &pUVar4->_padding_)) goto LAB_14e72895e;
              }
              if (pUVar5 != (UInterchangeFactoryBaseNode *)0x0) {
                local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
                local_48.AssetPath.PackageName.Number = 0;
                local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
                local_48.AssetPath.AssetName.Number = 0;
                local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_48.SubPathString.Data.ArrayNum = 0;
                local_48.SubPathString.Data.ArrayMax = 0;
                bVar3 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(pUVar5,&local_48);
                if ((bVar3) &&
                   (pUVar7 = (UAnimationAsset *)
                             FSoftObjectPath::TryLoad(&local_48,(FUObjectSerializeContext *)0x0),
                   pUVar7 != (UAnimationAsset *)0x0)) {
                  pUVar4 = Z_Construct_UClass_UAnimSequence_NoRegister();
                  iVar8 = (int)pUVar4->_padding_;
                  if ((iVar8 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
                      &pUVar4->_padding_)) {
                    USkeletalMeshComponent::SetAnimationMode(this_00,AnimationSingleNode,true);
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)pUVar7);
                    }
                    (this_00->AnimationData).AnimToPlay.field0_0x0.DebugPtr = pUVar7;
                    (this_00->AnimationData).bSavedLooping = 0;
                    (this_00->AnimationData).bSavedPlaying = 0;
                    USkeletalMeshComponent::SetAnimation(this_00,pUVar7);
                  }
                }
                if (local_48.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
                }
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  iVar8 = local_78.ArrayNum;
LAB_14e728a3d:
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,iVar8);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUInterchangeSkeletalMeshActorFactory @ 14e72a5a0

void __cdecl
UInterchangeSkeletalMeshActorFactory::StaticRegisterNativesUInterchangeSkeletalMeshActorFactory
          (void)

{
  return;
}

