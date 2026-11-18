// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e872c20

UScriptStruct * __cdecl FBlueprintToCollectionDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintToCollectionDataflowNode_v2,
                         (UObject *)pUVar1,L"BlueprintToCollectionDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton;
}

// GetType @ 14e8735a0

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
FBlueprintToCollectionDataflowNode_v2::GetType(FBlueprintToCollectionDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBlueprintToCollectionDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e873640

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
FBlueprintToCollectionDataflowNode_v2::IsA
          (FBlueprintToCollectionDataflowNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FBlueprintToCollectionDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8736a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8736a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8736c6;
      }
    }
  }
  bVar5 = true;
LAB_14e8736c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e873700

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
FBlueprintToCollectionDataflowNode_v2::NewStructOnScope(FBlueprintToCollectionDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintToCollectionDataflowNode_v2,
                           (UObject *)pUVar2,L"BlueprintToCollectionDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e873780

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
FBlueprintToCollectionDataflowNode_v2::SerializeInternal
          (FBlueprintToCollectionDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintToCollectionDataflowNode_v2,
                         (UObject *)pUVar1,L"BlueprintToCollectionDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8737fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e873880

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
FBlueprintToCollectionDataflowNode_v2::GetDisplayName(FBlueprintToCollectionDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BlueprintToCollection");
  return in_RDX;
}

// GetCategory @ 14e8738c0

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
FBlueprintToCollectionDataflowNode_v2::GetCategory(FBlueprintToCollectionDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Asset");
  return in_RDX;
}

// GetTags @ 14e8739b0

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
FBlueprintToCollectionDataflowNode_v2::GetTags
          (FBlueprintToCollectionDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e873a60

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
FBlueprintToCollectionDataflowNode_v2::TypedScriptStruct
          (FBlueprintToCollectionDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintToCollectionDataflowNode_v2,
                         (UObject *)pUVar1,L"BlueprintToCollectionDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintToCollectionDataflowNode_v2.OuterSingleton;
}

// Evaluate @ 14e874040

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
FBlueprintToCollectionDataflowNode_v2::Evaluate
          (FBlueprintToCollectionDataflowNode_v2 *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  UWorld *this_00;
  UBlueprint *pUVar3;
  USceneComponent *pUVar4;
  longlong *plVar5;
  TObjectPtr<UStaticMesh>_u_0 TVar6;
  UMaterialInterface **ppUVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  ForAnyElementType FVar19;
  ForAnyElementType FVar20;
  bool bVar21;
  int iVar22;
  undefined1 *puVar23;
  FPreviewScene *pFVar24;
  ConstructionValues *pCVar25;
  UClass *pUVar26;
  AActor *this_01;
  TTransform<double> *pTVar27;
  UClass *pUVar28;
  UClass *pUVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  longlong *plVar32;
  longlong lVar33;
  FScriptContainerElement *pFVar34;
  FManagedArrayCollection *pFVar35;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 uVar37;
  undefined1 auVar36 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStackY_528 [32];
  FSkeletalMeshToCollectionConversionParameters local_4d8;
  undefined1 local_4d7 [7];
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> local_4d0;
  longlong *local_4c0;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> local_4b8;
  FPreviewScene *local_4a8;
  FContext *local_4a0;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_498;
  UClass *local_488;
  UClass *local_480;
  FBlueprintToCollectionDataflowNode_v2 *local_478;
  ConstructionValues local_470;
  void *local_438 [2];
  double local_428;
  double dStack_420;
  double local_418;
  undefined1 local_410 [16];
  double local_400;
  undefined1 local_3f8 [16];
  double local_3e8;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  ConstructionValues local_378;
  TObjectPtr<UStaticMesh>_u_0 local_338 [2];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  ForAnyElementType local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [112];
  longlong local_248 [24];
  longlong *local_188;
  int local_180;
  undefined4 local_17c;
  FManagedArrayCollection local_178;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_528;
  pFVar35 = &this->Collection;
  local_4a0 = param_1;
  local_478 = this;
  puVar23 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((FManagedArrayCollection *)puVar23 != pFVar35) &&
       (puVar23 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar23 !=
       &this->Materials)) &&
      (puVar23 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)puVar23 !=
      &this->InstancedMeshes)) &&
     ((puVar23 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)puVar23 !=
      &this->RootProxyMeshes &&
      (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5163137966440186510>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionAssetNodes.cpp"
                           ,0x28e,
                           "Out->IsA(&Collection) || Out->IsA(&Materials) || Out->IsA(&InstancedMeshes) || Out->IsA(&RootProxyMeshes)"
                          ), bVar21)))) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FManagedArrayCollection::FManagedArrayCollection(&local_178);
  pUVar29 = (UClass *)0x0;
  local_498.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_498.ArrayNum = 0;
  local_498.ArrayMax = 0;
  local_4b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4b8.ArrayNum = 0;
  local_4b8.ArrayMax = 0;
  local_4d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4d0.ArrayNum = 0;
  local_4d0.ArrayMax = 0;
  if ((this->Blueprint).field0_0x0.DebugPtr == (UBlueprint *)0x0) goto LAB_14e87487c;
  local_470.LightRotation.Pitch = ___xmm_c050e00000000000c044000000000000;
  local_470.LightRotation.Yaw = _UNK_1513b2f28;
  local_470.SkyBrightness = 1.0;
  local_470.bForceUseMovementComponentInNonGameWorld = 0;
  local_470.bEditor = 1;
  local_470.bTransactional = 1;
  local_470.bShouldSimulatePhysics = 0;
  local_470.bCreatePhysicsScene = 1;
  local_470.bForceMipsResident = 1;
  local_470.bAllowAudioPlayback = 0;
  local_470.bDefaultLighting = 1;
  local_470.LightRotation.Roll = 0.0;
  local_470.LightBrightness = 3.1415927;
  local_470.DefaultGameMode.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>_u_0)0x0;
  local_470.OwningGameInstance = (UGameInstance *)0x0;
  pFVar24 = ::operator_new(0x48);
  if (pFVar24 == (FPreviewScene *)0x0) goto LAB_14e87487c;
  pCVar25 = FPreviewScene::ConstructionValues::ConstructionValues(&local_378,&local_470);
  pFVar24 = FPreviewScene::FPreviewScene(pFVar24,pCVar25);
  if (pFVar24 == (FPreviewScene *)0x0) goto LAB_14e87487c;
  this_00 = (pFVar24->PreviewWorld).field0_0x0.DebugPtr;
  if (this_00 != (UWorld *)0x0) {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_2b8);
    local_2b8[0x32] = local_2b8[0x32] | 2;
    pUVar3 = (this->Blueprint).field0_0x0.DebugPtr;
    local_2b8[0x30] = AlwaysSpawn;
    local_2b8._52_4_ = RF_Transient;
    lVar33 = pUVar3->_padding_;
    pUVar28 = pUVar29;
    if ((lVar33 != 0) &&
       (pUVar26 = Z_Construct_UClass_UObject_NoRegister(), pUVar26 != (UClass *)0x0)) {
      iVar2 = (int)pUVar26->_padding_;
      if ((*(int *)(lVar33 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar33 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar26->_padding_)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if (bVar21) {
        pUVar28 = (UClass *)pUVar3->_padding_;
      }
    }
    this_01 = UWorld::SpawnActor(this_00,pUVar28,(TTransform<double> *)0x0,
                                 (FActorSpawnParameters *)local_2b8);
    if (this_01 != (AActor *)0x0) {
      local_4d8.bParentAllBonesUnderNewRoot = true;
      FGeometryCollectionEngineConversion::ConvertActorToGeometryCollection
                (this_01,&local_178,&local_498,&local_4b8,&local_4d8,this->bSplitComponents);
      pUVar4 = (this_01->RootComponent).field0_0x0.DebugPtr;
      if (pUVar4 == (USceneComponent *)0x0) {
        pTVar27 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar27 = &pUVar4->ComponentToWorld;
      }
      local_3d8 = (pTVar27->Rotation).XY.m128d_f64[0];
      dStack_3d0 = (pTVar27->Rotation).XY.m128d_f64[1];
      local_3c8 = (pTVar27->Rotation).ZW.m128d_f64[0];
      dStack_3c0 = (pTVar27->Rotation).ZW.m128d_f64[1];
      auVar1 = *(undefined1 (*) [16])(pTVar27->Translation).XY.m128d_f64;
      dVar12 = (pTVar27->Translation).ZW.m128d_f64[0];
      local_398 = (pTVar27->Scale3D).XY.m128d_f64[0];
      dStack_390 = (pTVar27->Scale3D).XY.m128d_f64[1];
      local_388 = (pTVar27->Scale3D).ZW.m128d_f64[0];
      dStack_380 = (pTVar27->Scale3D).ZW.m128d_f64[1];
      local_188 = (longlong *)0x0;
      local_17c = 0x18;
      local_180 = 0;
      pUVar28 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar28 != (UClass *)0x0) goto LAB_14e87432b;
LAB_14e87435c:
        pUVar26 = pUVar29;
      }
      else {
        if (pUVar28 == (UClass *)0x0) goto LAB_14e87435c;
        UE::GC::MarkAsReachable((UObject *)pUVar28);
LAB_14e87432b:
        pUVar26 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar26 == (UClass *)0x0) goto LAB_14e87435c;
        iVar2 = (int)pUVar26->_padding_;
        if (((int)pUVar28->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar28->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar26->_padding_)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        pUVar26 = pUVar28;
        if (!bVar21) goto LAB_14e87435c;
      }
      pUVar29 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar26 == pUVar29) {
        local_488 = pUVar28;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar28 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar28);
        }
        AActor::
        ForEachComponent_Internal<UStaticMeshComponent,1,0,_AActor::GetComponents<UStaticMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_488,
                   (TArray<UStaticMeshComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)local_248);
        uVar37 = extraout_XMM0_Qb;
      }
      else {
        local_480 = pUVar28;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar28 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar28);
        }
        AActor::
        ForEachComponent_Internal<UStaticMeshComponent,0,0,_AActor::GetComponents<UStaticMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_480,
                   (TArray<UStaticMeshComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)local_248);
        uVar37 = extraout_XMM0_Qb_00;
      }
      iVar2 = local_180;
      plVar31 = local_248;
      if (local_188 != (longlong *)0x0) {
        plVar31 = local_188;
      }
      plVar32 = plVar31 + local_180;
      local_4c0 = plVar32;
      local_4a8 = pFVar24;
      while( true ) {
        if (local_180 != iVar2) {
          local_4d7[0] = 0;
          `TCheckedPointerIterator<UStaticMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_4d7);
          uVar37 = extraout_XMM0_Qb_01;
        }
        this = local_478;
        if (plVar31 == plVar32) break;
        plVar5 = (longlong *)*plVar31;
        if (plVar5 != (longlong *)0x0) {
          TVar6 = (TObjectPtr<UStaticMesh>_u_0)
                  ((TObjectPtr<UStaticMesh>_u_0 *)(plVar5 + 0xb4))->DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            plVar32 = local_4c0;
            if (TVar6.DebugPtr == (UStaticMesh *)0x0) goto LAB_14e8747c7;
            UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
            uVar37 = extraout_XMM0_Qb_02;
          }
          plVar32 = local_4c0;
          if (TVar6.DebugPtr != (UStaticMesh *)0x0) {
            auVar11._4_8_ = uVar37;
            auVar11._0_4_ = auVar1._4_4_;
            auVar36._0_8_ = auVar11._0_8_ << 0x20;
            auVar36._8_4_ = auVar1._8_4_;
            auVar36._12_4_ = auVar1._12_4_;
            local_428 = (double)plVar5[0x42];
            dStack_420 = (double)plVar5[0x43];
            local_418 = (double)plVar5[0x44];
            dVar10 = local_428 - auVar1._0_8_;
            lVar33 = plVar5[0x3e];
            lVar13 = plVar5[0x3f];
            lVar14 = plVar5[0x40];
            lVar15 = plVar5[0x41];
            auVar18 = *(undefined1 (*) [16])(plVar5 + 0x46);
            lVar16 = plVar5[0x48];
            lVar17 = plVar5[0x49];
            local_338[0].DebugPtr = (UStaticMesh *)0x0;
            dVar9 = dStack_420 - auVar36._8_8_;
            local_328 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
            dStack_320 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_2c8.Data = (FScriptContainerElement *)0x0;
            local_2c0 = 0;
            dVar38 = local_418 - dVar12;
            local_318 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
            dStack_310 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
            uVar39 = SUB84(dVar9,0);
            uVar40 = (undefined4)((ulonglong)dVar9 >> 0x20);
            local_2f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            dStack_2f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_308._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_308._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_308._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_2d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
            dStack_2d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
            local_3f8._8_4_ = uVar39;
            local_3f8._0_8_ = dVar10;
            local_3f8._12_4_ = uVar40;
            local_2e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_2e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_2e8._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_410 = auVar1;
            local_400 = dVar12;
            local_3e8 = dVar38;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
            }
            local_308._8_4_ = uVar39;
            local_308._0_8_ = dVar10;
            local_308._12_4_ = uVar40;
            dStack_2f0 = 0.0;
            local_338[0] = TVar6;
            local_328 = (double)lVar33;
            dStack_320 = (double)lVar13;
            local_318 = (double)lVar14;
            dStack_310 = (double)lVar15;
            local_2f8 = dVar38;
            local_2e8 = auVar18;
            local_2d8 = (double)lVar16;
            dStack_2d0 = (double)lVar17;
            puVar30 = (undefined8 *)(**(code **)(*plVar5 + 0xa90))(plVar5,local_438);
            iVar22 = *(int *)(puVar30 + 1);
            ppUVar7 = (UMaterialInterface **)*puVar30;
            local_2c0 = CONCAT44(local_2c0._4_4_,iVar22);
            if ((iVar22 == 0) && (local_2c0._4_4_ == 0)) {
              local_2c0 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar22,local_2c0._4_4_,&local_2c8,iVar22,
                         (int *)((longlong)&local_2c0 + 4));
              ConstructItems<TObjectPtr<UMaterialInterface>,UMaterialInterface_*,int>
                        (local_2c8.Data,ppUVar7,iVar22);
            }
            if (local_438[0] != (void *)0x0) {
              FMemory::Free(local_438[0]);
            }
            if (((local_4d0.AllocatorInstance.Data <= local_338) &&
                (local_338 <
                 (TObjectPtr<UStaticMesh>_u_0 *)
                 (local_4d0.AllocatorInstance.Data + (longlong)local_4d0.ArrayMax * 0x80))) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar22 = local_4d0.ArrayNum;
            if (local_4d0.ArrayNum == local_4d0.ArrayMax) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1080,&local_4d0.AllocatorInstance,&local_4d0.ArrayMax);
            }
            FVar19.Data = local_4d0.AllocatorInstance.Data;
            lVar33 = (longlong)iVar22 * 0x80;
            local_4d0.ArrayNum = iVar22 + 1;
            ((TObjectPtr<UStaticMesh>_u_0 *)(local_4d0.AllocatorInstance.Data + lVar33))->DebugPtr =
                 (UStaticMesh *)local_338[0];
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_338[0].DebugPtr != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_338[0].DebugPtr);
            }
            FVar20.Data = local_2c8.Data;
            *(double *)(FVar19.Data + lVar33 + 0x10) = local_328;
            *(double *)(FVar19.Data + lVar33 + 0x10 + 8) = dStack_320;
            pFVar34 = FVar19.Data + lVar33 + 0x70;
            *(double *)(FVar19.Data + lVar33 + 0x20) = local_318;
            *(double *)(FVar19.Data + lVar33 + 0x20 + 8) = dStack_310;
            *(undefined8 *)(FVar19.Data + lVar33 + 0x30) = local_308._0_8_;
            *(undefined8 *)(FVar19.Data + lVar33 + 0x30 + 8) = local_308._8_8_;
            *(double *)(FVar19.Data + lVar33 + 0x40) = local_2f8;
            *(double *)(FVar19.Data + lVar33 + 0x40 + 8) = dStack_2f0;
            *(undefined8 *)(FVar19.Data + lVar33 + 0x50) = local_2e8._0_8_;
            *(undefined8 *)(FVar19.Data + lVar33 + 0x50 + 8) = local_2e8._8_8_;
            *(double *)(FVar19.Data + lVar33 + 0x60) = local_2d8;
            *(double *)(FVar19.Data + lVar33 + 0x60 + 8) = dStack_2d0;
            *(FScriptContainerElement **)pFVar34 = (FScriptContainerElement *)0x0;
            iVar22 = (int)local_2c0;
            *(int *)(pFVar34 + 8) = (int)local_2c0;
            if ((int)local_2c0 == 0) {
              *(int *)(FVar19.Data + lVar33 + 0x7c) = 0;
              uVar37 = local_2e8._8_8_;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(int)local_2c0,0,(ForAnyElementType *)pFVar34,(int)local_2c0,
                         (int *)(FVar19.Data + lVar33 + 0x7c));
                    /* WARNING: Load size is inaccurate */
              ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                        (*pFVar34,(TObjectPtr<UMaterialInterface> *)FVar20.Data,iVar22);
              uVar37 = extraout_XMM0_Qb_03;
            }
            plVar32 = local_4c0;
            if (local_2c8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.Data);
              plVar32 = local_4c0;
              uVar37 = extraout_XMM0_Qb_04;
            }
          }
        }
LAB_14e8747c7:
        plVar31 = plVar31 + 1;
      }
      if (local_188 != (longlong *)0x0) {
        FMemory::Free(local_188);
      }
      pFVar35 = &this->Collection;
      pFVar24 = local_4a8;
    }
    param_1 = local_4a0;
    if (local_2b8._64_8_ != 0) {
      plVar31 = (longlong *)(local_2b8 + 0x50);
      if ((longlong *)local_2b8._104_8_ != (longlong *)0x0) {
        plVar31 = (longlong *)local_2b8._104_8_;
      }
      (**(code **)(*plVar31 + 0x10))();
      param_1 = local_4a0;
    }
  }
  (**(code **)pFVar24->_padding_)(pFVar24,1);
LAB_14e87487c:
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_178,pFVar35);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_498,&this->Materials);
  FDataflowNode::
  SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_4b8,&this->InstancedMeshes);
  FDataflowNode::
  SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_4d0,&this->RootProxyMeshes);
  DestructItems<FDataflowRootProxyMesh,int>
            ((FDataflowRootProxyMesh *)local_4d0.AllocatorInstance.Data,local_4d0.ArrayNum);
  if ((TObjectPtr<UStaticMesh>_u_0 *)local_4d0.AllocatorInstance.Data !=
      (TObjectPtr<UStaticMesh>_u_0 *)0x0) {
    FMemory::Free(local_4d0.AllocatorInstance.Data);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)local_4b8.AllocatorInstance.Data,
             local_4b8.ArrayNum);
  if ((FGeometryCollectionAutoInstanceMesh *)local_4b8.AllocatorInstance.Data !=
      (FGeometryCollectionAutoInstanceMesh *)0x0) {
    FMemory::Free(local_4b8.AllocatorInstance.Data);
  }
  if (local_498.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.AllocatorInstance.Data);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_178);
  return;
}

// FBlueprintToCollectionDataflowNode_v2 @ 14e911e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBlueprintToCollectionDataflowNode_v2 * __thiscall
FBlueprintToCollectionDataflowNode_v2::FBlueprintToCollectionDataflowNode_v2
          (FBlueprintToCollectionDataflowNode_v2 *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->_padding_ = (longlong)&___7FBlueprintToCollectionDataflowNode_v2__6B_;
  (this->Blueprint).field0_0x0.DebugPtr = (UBlueprint *)0x0;
  this->bSplitComponents = false;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  (this->RootProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
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
  local_48.Reference = &this->InstancedMeshes;
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
  local_48.Reference = &this->RootProxyMeshes;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// FBlueprintToCollectionDataflowNode_v2 @ 14e912010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBlueprintToCollectionDataflowNode_v2 * __thiscall
FBlueprintToCollectionDataflowNode_v2::FBlueprintToCollectionDataflowNode_v2
          (FBlueprintToCollectionDataflowNode_v2 *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FBlueprintToCollectionDataflowNode_v2__6B_;
  (this->Blueprint).field0_0x0.DebugPtr = (UBlueprint *)0x0;
  this->bSplitComponents = false;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  (this->RootProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
  return this;
}

// ~FBlueprintToCollectionDataflowNode_v2 @ 14e932ff0

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
FBlueprintToCollectionDataflowNode_v2::~FBlueprintToCollectionDataflowNode_v2
          (FBlueprintToCollectionDataflowNode_v2 *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FDataflowRootProxyMesh,int>
            ((FDataflowRootProxyMesh *)(this->RootProxyMeshes).AllocatorInstance.Data,
             (this->RootProxyMeshes).ArrayNum);
  pFVar1 = (this->RootProxyMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)(this->InstancedMeshes).AllocatorInstance.Data,
             (this->InstancedMeshes).ArrayNum);
  pFVar1 = (this->InstancedMeshes).AllocatorInstance.Data;
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

