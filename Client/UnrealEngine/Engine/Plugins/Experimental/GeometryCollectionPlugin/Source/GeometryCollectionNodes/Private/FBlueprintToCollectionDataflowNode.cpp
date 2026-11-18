// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e870840

UScriptStruct * __cdecl FBlueprintToCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintToCollectionDataflowNode,
                         (UObject *)pUVar1,L"BlueprintToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e870cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
FBlueprintToCollectionDataflowNode::GetType(FBlueprintToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBlueprintToCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e870da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FBlueprintToCollectionDataflowNode::IsA(FBlueprintToCollectionDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FBlueprintToCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e870e08;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e870e08:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e870e26;
      }
    }
  }
  bVar5 = true;
LAB_14e870e26:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e870e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FStructOnScope * __thiscall
FBlueprintToCollectionDataflowNode::NewStructOnScope(FBlueprintToCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintToCollectionDataflowNode,
                           (UObject *)pUVar2,L"BlueprintToCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e870fd0

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
FBlueprintToCollectionDataflowNode::SerializeInternal
          (FBlueprintToCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintToCollectionDataflowNode,
                         (UObject *)pUVar1,L"BlueprintToCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e87104d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8710e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
FBlueprintToCollectionDataflowNode::GetDisplayName(FBlueprintToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BlueprintToCollection");
  return in_RDX;
}

// GetCategory @ 14e8711d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
FBlueprintToCollectionDataflowNode::GetCategory(FBlueprintToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Asset");
  return in_RDX;
}

// GetTags @ 14e8714a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
FBlueprintToCollectionDataflowNode::GetTags
          (FBlueprintToCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e871500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UScriptStruct * __thiscall
FBlueprintToCollectionDataflowNode::TypedScriptStruct(FBlueprintToCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintToCollectionDataflowNode,
                         (UObject *)pUVar1,L"BlueprintToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e871920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FBlueprintToCollectionDataflowNode::Evaluate
          (FBlueprintToCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  int iVar1;
  UWorld *this_00;
  UBlueprint *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  FPreviewScene *pFVar7;
  ConstructionValues *pCVar8;
  UClass *pUVar9;
  AActor *pAVar10;
  longlong *plVar11;
  undefined1 auStackY_248 [32];
  FSkeletalMeshToCollectionConversionParameters local_218 [8];
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> local_210;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_200;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> local_1f0;
  ConstructionValues local_1e0;
  ConstructionValues local_1a8;
  undefined1 local_168 [112];
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar6 != &this->Collection) {
    puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)puVar6 != &this->Materials) {
      puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar6 !=
          &this->MaterialInstances) {
        puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
        if ((TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)puVar6 !=
            &this->InstancedMeshes) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5163137966440186461>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionAssetNodes.cpp"
                             ,0x25d,
                             "Out->IsA(&Collection) || Out->IsA(&Materials) || Out->IsA(&MaterialInstances) || Out->IsA(&InstancedMeshes)"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
    }
  }
  FManagedArrayCollection::FManagedArrayCollection(&local_f8);
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.ArrayNum = 0;
  local_210.ArrayMax = 0;
  if ((this->Blueprint).field0_0x0.DebugPtr == (UBlueprint *)0x0) goto LAB_14e871b81;
  local_1e0.LightRotation.Pitch = ___xmm_c050e00000000000c044000000000000;
  local_1e0.LightRotation.Yaw = _UNK_1513b2f28;
  local_1e0.SkyBrightness = 1.0;
  local_1e0.bForceUseMovementComponentInNonGameWorld = 0;
  local_1e0.bEditor = 1;
  local_1e0.bTransactional = 1;
  local_1e0.bShouldSimulatePhysics = 0;
  local_1e0.bCreatePhysicsScene = 1;
  local_1e0.bForceMipsResident = 1;
  local_1e0.bAllowAudioPlayback = 0;
  local_1e0.bDefaultLighting = 1;
  local_1e0.LightRotation.Roll = 0.0;
  local_1e0.LightBrightness = 3.1415927;
  local_1e0.DefaultGameMode.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>_u_0)0x0;
  local_1e0.OwningGameInstance = (UGameInstance *)0x0;
  pFVar7 = ::operator_new(0x48);
  if (pFVar7 == (FPreviewScene *)0x0) goto LAB_14e871b81;
  pCVar8 = FPreviewScene::ConstructionValues::ConstructionValues(&local_1a8,&local_1e0);
  pFVar7 = FPreviewScene::FPreviewScene(pFVar7,pCVar8);
  if (pFVar7 == (FPreviewScene *)0x0) goto LAB_14e871b81;
  this_00 = (pFVar7->PreviewWorld).field0_0x0.DebugPtr;
  if (this_00 != (UWorld *)0x0) {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_168);
    local_168[0x32] = local_168[0x32] | 2;
    pUVar2 = (this->Blueprint).field0_0x0.DebugPtr;
    local_168[0x30] = AlwaysSpawn;
    local_168._52_4_ = RF_Transient;
    lVar3 = pUVar2->_padding_;
    if (lVar3 == 0) {
LAB_14e871afd:
      pUVar9 = (UClass *)0x0;
    }
    else {
      pUVar9 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar9 == (UClass *)0x0) goto LAB_14e871afd;
      iVar1 = (int)pUVar9->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14e871afd;
      pUVar9 = (UClass *)pUVar2->_padding_;
    }
    pAVar10 = UWorld::SpawnActor(this_00,pUVar9,(TTransform<double> *)0x0,
                                 (FActorSpawnParameters *)local_168);
    if (pAVar10 != (AActor *)0x0) {
      local_218[0].bParentAllBonesUnderNewRoot = true;
      FGeometryCollectionEngineConversion::ConvertActorToGeometryCollection
                (pAVar10,&local_f8,&local_200,&local_210,local_218,this->bSplitComponents);
    }
    if (local_168._64_8_ != 0) {
      plVar11 = (longlong *)(local_168 + 0x50);
      if ((longlong *)local_168._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_168._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  (**(code **)pFVar7->_padding_)(pFVar7,1);
LAB_14e871b81:
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ArrayNum = 0;
  local_1f0.ArrayMax = 0;
  FGeometryCollectionEngineConversion::GetMaterialsFromInstances(&local_200,&local_1f0);
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_f8,&this->Collection);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_1f0,&this->Materials);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_200,&this->MaterialInstances);
  FDataflowNode::
  SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_210,&this->InstancedMeshes);
  if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)local_210.AllocatorInstance.Data,
             local_210.ArrayNum);
  if ((FGeometryCollectionAutoInstanceMesh *)local_210.AllocatorInstance.Data !=
      (FGeometryCollectionAutoInstanceMesh *)0x0) {
    FMemory::Free(local_210.AllocatorInstance.Data);
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  return;
}

// FBlueprintToCollectionDataflowNode @ 14e911c10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBlueprintToCollectionDataflowNode * __thiscall
FBlueprintToCollectionDataflowNode::FBlueprintToCollectionDataflowNode
          (FBlueprintToCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->_padding_ = (longlong)&___7FBlueprintToCollectionDataflowNode__6B_;
  (this->Blueprint).field0_0x0.DebugPtr = (UBlueprint *)0x0;
  this->bSplitComponents = false;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->MaterialInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstances).ArrayNum = 0;
  (this->MaterialInstances).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Collection;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Materials;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->MaterialInstances;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->InstancedMeshes;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// FBlueprintToCollectionDataflowNode @ 14e911dd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBlueprintToCollectionDataflowNode * __thiscall
FBlueprintToCollectionDataflowNode::FBlueprintToCollectionDataflowNode
          (FBlueprintToCollectionDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FBlueprintToCollectionDataflowNode__6B_;
  (this->Blueprint).field0_0x0.DebugPtr = (UBlueprint *)0x0;
  this->bSplitComponents = false;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->MaterialInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstances).ArrayNum = 0;
  (this->MaterialInstances).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  return this;
}

// ~FBlueprintToCollectionDataflowNode @ 14e932f80

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
FBlueprintToCollectionDataflowNode::~FBlueprintToCollectionDataflowNode
          (FBlueprintToCollectionDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)(this->InstancedMeshes).AllocatorInstance.Data,
             (this->InstancedMeshes).ArrayNum);
  pFVar1 = (this->InstancedMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

