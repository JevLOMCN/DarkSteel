// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 20

// StaticClass @ 14e72f0c0

UClass * __cdecl UInterchangeGenericAssetsPipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericAssetsPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericAssetsPipeline,0x2c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericAssetsPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericAssetsPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.InnerSingleton;
}

// UInterchangeGenericAssetsPipeline @ 14e766ac0

UInterchangeGenericAssetsPipeline * __thiscall
UInterchangeGenericAssetsPipeline::UInterchangeGenericAssetsPipeline
          (UInterchangeGenericAssetsPipeline *this,FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->ReimportStrategy = ApplyNoProperties;
  this->bUseSourceNameForAsset = true;
  this->bSceneNameSubFolder = false;
  this->bAssetTypeSubFolders = false;
  this->_padding_ = (longlong)&___7UInterchangeGenericAssetsPipeline__6B_;
  this->ImportOffsetUniformScale = 1.0;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  (this->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetName).Data.ArrayNum = 0;
  (this->AssetName).Data.ArrayMax = 0;
  (this->CommonMeshesProperties).field0_0x0.DebugPtr =
       (UInterchangeGenericCommonMeshesProperties *)0x0;
  (this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr =
       (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0;
  (this->MeshPipeline).field0_0x0.DebugPtr = (UInterchangeGenericMeshPipeline *)0x0;
  (this->AnimationPipeline).field0_0x0.DebugPtr = (UInterchangeGenericAnimationPipeline *)0x0;
  (this->MaterialPipeline).field0_0x0.DebugPtr = (UInterchangeGenericMaterialPipeline *)0x0;
  (this->GroomPipeline).field0_0x0.DebugPtr = (UInterchangeGenericGroomPipeline *)0x0;
  (this->SceneNameFolderPrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SceneNameFolderPrefix).Data.ArrayNum = 0;
  (this->SceneNameFolderPrefix).Data.ArrayMax = 0;
  (this->ContentPathExistingSkeleton).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ContentPathExistingSkeleton).AssetPath.PackageName.Number = 0;
  (this->ContentPathExistingSkeleton).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ContentPathExistingSkeleton).AssetPath.AssetName.Number = 0;
  (this->ContentPathExistingSkeleton).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ContentPathExistingSkeleton).SubPathString.Data.ArrayNum = 0;
  (this->ContentPathExistingSkeleton).SubPathString.Data.ArrayMax = 0;
  this->bImportOnlyAnimationAdjusted = false;
  (this->MaterialConflictData).ConflictUniqueId.A = 0;
  (this->MaterialConflictData).ConflictUniqueId.B = 0;
  (this->MaterialConflictData).ConflictUniqueId.C = 0;
  (this->MaterialConflictData).ConflictUniqueId.D = 0;
  (this->MaterialConflictData).AssetMaterialNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialConflictData).AssetMaterialNames.ArrayNum = 0;
  (this->MaterialConflictData).AssetMaterialNames.ArrayMax = 0;
  (this->MaterialConflictData).ImportMaterialNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialConflictData).ImportMaterialNames.ArrayNum = 0;
  (this->MaterialConflictData).ImportMaterialNames.ArrayMax = 0;
  (this->MaterialConflictData).MatchMaterialIndexes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialConflictData).MatchMaterialIndexes.ArrayNum = 0;
  (this->MaterialConflictData).MatchMaterialIndexes.ArrayMax = 0;
  (this->MaterialConflictData).ReimportObject = (UObject *)0x0;
  FText::AsLocalizable_Advanced_LocText
            (&(this->MaterialConflictData).DialogTitle,L"UInterchangeGenericAssetsPipeline",
             L"GetConflictInfos_MaterialTitle",L"Material Conflicts");
  FSkeletonConflictData::FSkeletonConflictData(&this->SkeletonConflictData);
  this->bHasNotify_MetaDataAttributeKeyNameTooLong = false;
  return this;
}

// UInterchangeGenericAssetsPipeline @ 14e766bf0

UInterchangeGenericAssetsPipeline * __thiscall
UInterchangeGenericAssetsPipeline::UInterchangeGenericAssetsPipeline
          (UInterchangeGenericAssetsPipeline *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UInterchangeGenericMaterialPipeline *pUVar5;
  UInterchangeGenericCommonMeshesProperties *pUVar6;
  UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *pUVar7;
  UInterchangeGenericMeshPipeline *pUVar8;
  UInterchangeGenericGroomPipeline *pUVar9;
  UInterchangeGenericAnimationPipeline *pUVar10;
  FName local_res8;
  UInterchangeGenericCommonMeshesProperties *local_res10;
  
  pFVar2 = FObjectInitializer::Get();
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,pFVar2);
  this->ReimportStrategy = ApplyNoProperties;
  this->bUseSourceNameForAsset = true;
  this->bSceneNameSubFolder = false;
  this->bAssetTypeSubFolders = false;
  this->ImportOffsetUniformScale = 1.0;
  this->_padding_ = (longlong)&___7UInterchangeGenericAssetsPipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  (this->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetName).Data.ArrayNum = 0;
  (this->AssetName).Data.ArrayMax = 0;
  (this->CommonMeshesProperties).field0_0x0.DebugPtr =
       (UInterchangeGenericCommonMeshesProperties *)0x0;
  (this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr =
       (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0;
  (this->MeshPipeline).field0_0x0.DebugPtr = (UInterchangeGenericMeshPipeline *)0x0;
  (this->AnimationPipeline).field0_0x0.DebugPtr = (UInterchangeGenericAnimationPipeline *)0x0;
  (this->MaterialPipeline).field0_0x0.DebugPtr = (UInterchangeGenericMaterialPipeline *)0x0;
  (this->GroomPipeline).field0_0x0.DebugPtr = (UInterchangeGenericGroomPipeline *)0x0;
  (this->SceneNameFolderPrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SceneNameFolderPrefix).Data.ArrayNum = 0;
  (this->SceneNameFolderPrefix).Data.ArrayMax = 0;
  (this->ContentPathExistingSkeleton).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ContentPathExistingSkeleton).AssetPath.PackageName.Number = 0;
  (this->ContentPathExistingSkeleton).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ContentPathExistingSkeleton).AssetPath.AssetName.Number = 0;
  (this->ContentPathExistingSkeleton).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ContentPathExistingSkeleton).SubPathString.Data.ArrayNum = 0;
  (this->ContentPathExistingSkeleton).SubPathString.Data.ArrayMax = 0;
  (this->MaterialConflictData).ConflictUniqueId.A = 0;
  (this->MaterialConflictData).ConflictUniqueId.B = 0;
  (this->MaterialConflictData).ConflictUniqueId.C = 0;
  (this->MaterialConflictData).ConflictUniqueId.D = 0;
  (this->MaterialConflictData).AssetMaterialNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialConflictData).AssetMaterialNames.ArrayNum = 0;
  (this->MaterialConflictData).AssetMaterialNames.ArrayMax = 0;
  (this->MaterialConflictData).ImportMaterialNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialConflictData).ImportMaterialNames.ArrayNum = 0;
  (this->MaterialConflictData).ImportMaterialNames.ArrayMax = 0;
  (this->MaterialConflictData).MatchMaterialIndexes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialConflictData).MatchMaterialIndexes.ArrayNum = 0;
  (this->MaterialConflictData).MatchMaterialIndexes.ArrayMax = 0;
  (this->MaterialConflictData).ReimportObject = (UObject *)0x0;
  this->bImportOnlyAnimationAdjusted = false;
  FText::AsLocalizable_Advanced_LocText
            (&(this->MaterialConflictData).DialogTitle,L"UInterchangeGenericAssetsPipeline",
             L"GetConflictInfos_MaterialTitle",L"Material Conflicts");
  FSkeletonConflictData::FSkeletonConflictData(&this->SkeletonConflictData);
  this->bHasNotify_MetaDataAttributeKeyNameTooLong = false;
  pFVar3 = ::FName::FName(&local_res8,"MaterialPipeline");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericMaterialPipeline::StaticClass();
  pUVar5 = (UInterchangeGenericMaterialPipeline *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UInterchangeGenericMaterialPipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->MaterialPipeline).field0_0x0.DebugPtr = pUVar5;
  pFVar3 = ::FName::FName(&local_res8,"CommonMeshesProperties");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericCommonMeshesProperties::StaticClass();
  pUVar6 = (UInterchangeGenericCommonMeshesProperties *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UInterchangeGenericCommonMeshesProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->CommonMeshesProperties).field0_0x0.DebugPtr = pUVar6;
  pFVar3 = ::FName::FName(&local_res8,"CommonSkeletalMeshesAndAnimationsProperties");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass();
  pUVar7 = (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr = pUVar7;
  pFVar3 = ::FName::FName(&local_res8,"MeshPipeline");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericMeshPipeline::StaticClass();
  pUVar8 = (UInterchangeGenericMeshPipeline *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UInterchangeGenericMeshPipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->MeshPipeline).field0_0x0.DebugPtr = pUVar8;
  pUVar6 = (this->CommonMeshesProperties).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar6 != (UInterchangeGenericCommonMeshesProperties *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UInterchangeGenericCommonMeshesProperties *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UInterchangeGenericCommonMeshesProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
  (((this->MeshPipeline).field0_0x0.DebugPtr)->CommonMeshesProperties).WeakPtr =
       (FWeakObjectPtr)local_res8;
  pUVar7 = (this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar7 != (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = (UInterchangeGenericCommonMeshesProperties *)pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
  (((this->MeshPipeline).field0_0x0.DebugPtr)->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr
       = (FWeakObjectPtr)local_res8;
  pFVar3 = ::FName::FName(&local_res8,"GroomPipeline");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericGroomPipeline::StaticClass();
  pUVar9 = (UInterchangeGenericGroomPipeline *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UInterchangeGenericGroomPipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->GroomPipeline).field0_0x0.DebugPtr = pUVar9;
  pFVar3 = ::FName::FName(&local_res8,"AnimationPipeline");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericAnimationPipeline::StaticClass();
  pUVar10 = (UInterchangeGenericAnimationPipeline *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UInterchangeGenericAnimationPipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->AnimationPipeline).field0_0x0.DebugPtr = pUVar10;
  pUVar7 = (this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar7 != (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = (UInterchangeGenericCommonMeshesProperties *)pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
  (((this->AnimationPipeline).field0_0x0.DebugPtr)->CommonSkeletalMeshesAndAnimationsProperties).
  WeakPtr = (FWeakObjectPtr)local_res8;
  pUVar6 = (this->CommonMeshesProperties).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar6 != (UInterchangeGenericCommonMeshesProperties *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UInterchangeGenericCommonMeshesProperties *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UInterchangeGenericCommonMeshesProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
  (((this->AnimationPipeline).field0_0x0.DebugPtr)->CommonMeshesProperties).WeakPtr =
       (FWeakObjectPtr)local_res8;
  return this;
}

// ~UInterchangeGenericAssetsPipeline @ 14e76bf10

void __thiscall
UInterchangeGenericAssetsPipeline::~UInterchangeGenericAssetsPipeline
          (UInterchangeGenericAssetsPipeline *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericAssetsPipeline__6B_;
  pIVar1 = (this->SkeletonConflictData).DialogTitle.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  *(undefined4 *)&(this->SkeletonConflictData).Joints.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SkeletonConflictData).Joints.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SkeletonConflictData).Joints);
  FMaterialConflictData::~FMaterialConflictData(&this->MaterialConflictData);
  pFVar3 = (this->ContentPathExistingSkeleton).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SceneNameFolderPrefix).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// operator() @ 14e7713a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UInterchangeGenericAssetsPipeline::ShowConflictDialog'::__l26::<lambda_1>::operator()
          (void *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FString *pFVar4;
  FName *pFVar5;
  longlong *plVar6;
  UClass *pUVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FName *this_01;
  undefined1 auStack_9f8 [32];
  undefined1 local_9d8;
  undefined1 local_9c8 [8];
  FString local_9c0;
  FTopLevelAssetPath local_9a8;
  FString local_998;
  FSoftObjectPath local_988;
  FName local_968;
  FName local_960;
  FString local_958;
  FString local_948;
  FString local_938;
  FName local_928;
  FName local_920;
  FTopLevelAssetPath local_918;
  FString local_908;
  FString local_8f8;
  FAssetData local_8e8;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_9f8;
  this_01 = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this_01 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_9c8);
    }
    if (this_01 == pFVar1) break;
    ::FName::ToString(this_01,&local_998);
    pFVar4 = FPackageName::GetLongPackageAssetName(&local_908,&local_998);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar5 = ::FName::FName(&local_928,pwVar8);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_998.Data.ArrayNum != 0) {
      FVar9.Data = local_998.Data.AllocatorInstance.Data;
    }
    FVar3 = *pFVar5;
    pFVar5 = ::FName::FName(&local_920,(wchar_t *)FVar9.Data);
    local_9a8.PackageName.ComparisonIndex.Value = 0;
    local_9a8.PackageName.Number = 0;
    local_9a8.AssetName.ComparisonIndex.Value = 0;
    local_9a8.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&local_9a8,*pFVar5,FVar3);
    local_918.PackageName = local_9a8.PackageName;
    local_918.AssetName = local_9a8.AssetName;
    local_988.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_988.AssetPath.PackageName.Number = 0;
    local_988.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_988.AssetPath.AssetName.Number = 0;
    local_988.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_988.SubPathString.Data.ArrayNum = 0;
    local_988.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_988,&local_918);
    if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.Data.AllocatorInstance.Data);
    }
    plVar6 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x40))();
    local_9d8 = 1;
    (**(code **)(*plVar6 + 0x78))(plVar6,&local_8e8,&local_988,0);
    pUVar7 = FAssetData::GetClass(&local_8e8,No);
    if (pUVar7 != (UClass *)0x0) {
      local_878.Base = local_858;
      this_00 = *(TArray<FName,TSizedDefaultAllocator<32>_> **)this;
      local_878.CurPos = local_858;
      local_878.End = local_42;
      local_878.bIsDynamic = false;
      local_878.bIsExternal = false;
      if ((local_8e8.PackageName != (FName)0x0) && (local_8e8.AssetName != (FName)0x0)) {
        ::FName::AppendString(&local_8e8.PackageName,&local_878);
        if (local_878.End < local_878.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_878,1);
        }
        *local_878.CurPos = L'.';
        local_878.CurPos = local_878.CurPos + 1;
        ::FName::AppendString(&local_8e8.AssetName,&local_878);
      }
      local_9c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9c0.Data.ArrayNum = 0;
      local_9c0.Data.ArrayMax = 0;
      pFVar4 = ::FString::ConstructFromPtrSize
                         (&local_8f8,local_878.Base,
                          (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1));
      if (&local_9c0 != pFVar4) {
        if (local_9c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9c0.Data.AllocatorInstance.Data);
        }
        local_9c0.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_9c0.Data.ArrayNum = (pFVar4->Data).ArrayNum;
        local_9c0.Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
      pUVar7 = FAssetData::GetClass(&local_8e8,No);
      local_968 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_968,&local_938);
      ::FString::ConcatFC(&local_948,&local_938,L" ");
      ::FString::ConcatFF(&local_958,&local_948,&local_9c0);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_958.Data.ArrayNum != 0) {
        FVar9.Data = local_958.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_960,(wchar_t *)FVar9.Data);
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(this_00,&local_960);
      if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_958.Data.AllocatorInstance.Data);
      }
      if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_948.Data.AllocatorInstance.Data);
      }
      if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_938.Data.AllocatorInstance.Data);
      }
      if (local_9c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9c0.Data.AllocatorInstance.Data);
      }
    }
    if (local_8e8.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_8e8.ChunkIDs.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8e8.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_8e8.TagsAndValues);
    if (local_988.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.Data.AllocatorInstance.Data);
    }
    this_01 = this_01 + 1;
  }
  return;
}

// AdjustSettingsForContext @ 14e780750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UInterchangeGenericAssetsPipeline::AdjustSettingsForContext
          (UInterchangeGenericAssetsPipeline *this,FInterchangePipelineContextParams *param_1)

{
  FUtf8String *pFVar1;
  int iVar2;
  FName FVar3;
  UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *pUVar4;
  FScriptContainerElement *pFVar5;
  UInterchangeGenericMaterialPipeline *pUVar6;
  UInterchangeGenericMeshPipeline *pUVar7;
  UInterchangeGenericGroomPipeline *pUVar8;
  UInterchangeGenericAnimationPipeline *pUVar9;
  code *pcVar10;
  bool bVar11;
  UClass *pUVar12;
  FName *pFVar13;
  FModuleManager *this_00;
  IModuleInterface *pIVar14;
  longlong *plVar15;
  UObject *pUVar16;
  FString *pFVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  undefined1 auStack_2b8 [32];
  FTopLevelAssetPath *local_298;
  FTopLevelAssetPath *local_290;
  longlong local_288;
  longlong local_280;
  undefined8 local_278;
  FTopLevelAssetPath local_268;
  undefined8 local_258;
  FSoftObjectPath local_250;
  FTopLevelAssetPath local_230;
  UObject *local_220;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_218;
  FName local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FARFilter local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  UInterchangePipelineBase::AdjustSettingsForContext((UInterchangePipelineBase *)this,param_1);
  if (param_1->ContextType == AssetImport) {
    bVar11 = FWeakObjectPtr::IsValid
                       (&(((this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr)
                         ->Skeleton).WeakPtr);
    if (!bVar11) {
      FARFilter::FARFilter(&local_188);
      pwVar19 = L"";
      if ((int)this->_padding_ == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)this->_padding_;
      }
      ::FName::FName(&local_268.PackageName,pwVar18);
      if ((local_188.PackagePaths.AllocatorInstance.Data <= &local_268) &&
         (&local_268 <
          (FTopLevelAssetPath *)
          (local_188.PackagePaths.AllocatorInstance.Data +
          (longlong)local_188.PackagePaths.ArrayMax * 8))) {
        local_280 = (longlong)local_188.PackagePaths.ArrayNum;
        local_278 = 8;
        local_298 = &local_268;
        local_290 = (FTopLevelAssetPath *)local_188.PackagePaths.AllocatorInstance.Data;
        local_288 = (longlong)local_188.PackagePaths.ArrayMax;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (local_188.PackagePaths.ArrayNum == local_188.PackagePaths.ArrayMax) {
        local_188.PackagePaths.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_188.PackagePaths.AllocatorInstance,
                        &local_188.PackagePaths.ArrayMax);
      }
      (&((FTopLevelAssetPath *)local_188.PackagePaths.AllocatorInstance.Data)->PackageName)
      [local_188.PackagePaths.ArrayNum] = local_268.PackageName;
      local_188.PackagePaths.ArrayNum = local_188.PackagePaths.ArrayNum + 1;
      pUVar12 = Z_Construct_UClass_USkeleton_NoRegister();
      UStruct::GetStructPathName((UStruct *)pUVar12,&local_230);
      if ((local_188.ClassPaths.AllocatorInstance.Data <= &local_230) &&
         (&local_230 <
          (FTopLevelAssetPath *)
          (local_188.ClassPaths.AllocatorInstance.Data +
          (longlong)local_188.ClassPaths.ArrayMax * 0x10))) {
        local_280 = (longlong)local_188.ClassPaths.ArrayNum;
        local_278 = 0x10;
        local_298 = &local_230;
        local_290 = (FTopLevelAssetPath *)local_188.ClassPaths.AllocatorInstance.Data;
        local_288 = (longlong)local_188.ClassPaths.ArrayMax;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (local_188.ClassPaths.ArrayNum == local_188.ClassPaths.ArrayMax) {
        local_188.ClassPaths.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&local_188.ClassPaths.AllocatorInstance,&local_188.ClassPaths.ArrayMax
                       );
      }
      ((FTopLevelAssetPath *)
      ((longlong)local_188.ClassPaths.AllocatorInstance.Data +
      (longlong)local_188.ClassPaths.ArrayNum * 0x10))->PackageName = local_230.PackageName;
      ((FTopLevelAssetPath *)
      ((longlong)local_188.ClassPaths.AllocatorInstance.Data +
      (longlong)local_188.ClassPaths.ArrayNum * 0x10))->AssetName = local_230.AssetName;
      local_188.ClassPaths.ArrayNum = local_188.ClassPaths.ArrayNum + 1;
      pFVar13 = ::FName::FName(&local_1c8,"AssetRegistry");
      FVar3 = *pFVar13;
      this_00 = FModuleManager::Get();
      pIVar14 = FModuleManager::LoadModuleChecked(this_00,FVar3);
      plVar15 = (longlong *)(**(code **)((longlong)*pIVar14 + 0x40))(pIVar14);
      local_268.AssetName.ComparisonIndex.Value = 0;
      local_268.AssetName.Number = 0;
      local_258 = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15,&local_188,&local_268.AssetName,1);
      if (0 < (int)local_258) {
        local_218.Hash.InlineData[0] = '\0';
        local_218.Hash.InlineData[1] = '\0';
        local_218.Hash.InlineData[2] = '\0';
        local_218.Hash.InlineData[3] = '\0';
        local_218.Hash._padding_ = 0;
        local_218.Elements._16_8_ = 0;
        local_218.Elements._24_8_ = 0;
        local_218.HashSize = 0;
        local_218._76_4_ = 0;
        local_218.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
        local_218.Elements._48_8_ = _UNK_150631d98;
        local_218.Elements._0_8_ = 0;
        local_218.Elements._8_8_ = 0;
        local_218.Elements._32_8_ = 0;
        local_218.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        pUVar16 = FAssetData::GetAsset((FAssetData *)local_268.AssetName,&local_218);
        if (pUVar16 == (UObject *)0x0) {
          pFVar17 = GetTypeName<USkeleton>(&local_1c0);
          if ((pFVar17->Data).ArrayNum != 0) {
            pwVar19 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar19);
        }
        pUVar12 = Z_Construct_UClass_USkeleton_NoRegister();
        iVar2 = (int)pUVar12->_padding_;
        if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar12->_padding_)) {
          pFVar17 = GetTypeName<USkeleton>(&local_1b0);
          if ((pFVar17->Data).ArrayNum == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
          }
          pFVar17 = GetFullNameForCastLogError<UObject>(&local_1a0,pUVar16);
          if ((pFVar17->Data).ArrayNum != 0) {
            pwVar19 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar19,pwVar18);
        }
        pUVar4 = (this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr;
        local_220 = pUVar16;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar16);
        }
        FWeakObjectPtr::operator=(&(pUVar4->Skeleton).WeakPtr,(FObjectPtr)&local_220);
        pUVar16 = FWeakObjectPtr::Get(&(((this->CommonSkeletalMeshesAndAnimationsProperties).
                                         field0_0x0.DebugPtr)->Skeleton).WeakPtr);
        local_250.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_250.AssetPath.PackageName.Number = 0;
        local_250.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_250.AssetPath.AssetName.Number = 0;
        local_250.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_250.SubPathString.Data.ArrayNum = 0;
        local_250.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_250,pUVar16);
        pFVar1 = &(this->ContentPathExistingSkeleton).SubPathString;
        (this->ContentPathExistingSkeleton).AssetPath.PackageName = local_250.AssetPath.PackageName;
        (this->ContentPathExistingSkeleton).AssetPath.AssetName = local_250.AssetPath.AssetName;
        if (pFVar1 != &local_250.SubPathString) {
          pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          (pFVar1->Data).AllocatorInstance.Data =
               local_250.SubPathString.Data.AllocatorInstance.Data;
          (this->ContentPathExistingSkeleton).SubPathString.Data.ArrayNum =
               local_250.SubPathString.Data.ArrayNum;
          (this->ContentPathExistingSkeleton).SubPathString.Data.ArrayMax =
               local_250.SubPathString.Data.ArrayMax;
          local_250.SubPathString.Data.ArrayNum = 0;
          local_250.SubPathString.Data.ArrayMax = 0;
          local_250.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_250.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.SubPathString.Data.AllocatorInstance.Data);
        }
      }
      DestructItems<FAssetData,int>((FAssetData *)local_268.AssetName,(int)local_258);
      if (local_268.AssetName != (FName)0x0) {
        FMemory::Free((void *)local_268.AssetName);
      }
      FARFilter::~FARFilter(&local_188);
    }
  }
  else if ((byte)(param_1->ContextType - AssetCustomMorphTargetImport) < 2) {
    this->bUseSourceNameForAsset = true;
  }
  pUVar6 = (this->MaterialPipeline).field0_0x0.DebugPtr;
  if (pUVar6 != (UInterchangeGenericMaterialPipeline *)0x0) {
    (**(code **)(pUVar6->_padding_ + 0x2c0))(pUVar6,param_1);
  }
  pUVar7 = (this->MeshPipeline).field0_0x0.DebugPtr;
  if (pUVar7 != (UInterchangeGenericMeshPipeline *)0x0) {
    (**(code **)(pUVar7->_padding_ + 0x2c0))(pUVar7,param_1);
  }
  pUVar8 = (this->GroomPipeline).field0_0x0.DebugPtr;
  if (pUVar8 != (UInterchangeGenericGroomPipeline *)0x0) {
    (**(code **)(pUVar8->_padding_ + 0x2c0))(pUVar8,param_1);
  }
  pUVar9 = (this->AnimationPipeline).field0_0x0.DebugPtr;
  if (pUVar9 != (UInterchangeGenericAnimationPipeline *)0x0) {
    (**(code **)(pUVar9->_padding_ + 0x2c0))(pUVar9,param_1);
  }
  this->bImportOnlyAnimationAdjusted =
       ((this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr)->
       bImportOnlyAnimations;
  return;
}

// CanExecuteOnAnyThread @ 14e7826f0

bool __thiscall
UInterchangeGenericAssetsPipeline::CanExecuteOnAnyThread
          (UInterchangeGenericAssetsPipeline *this,EInterchangePipelineTask param_1)

{
  return false;
}

// ExecutePipeline @ 14e7a4a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInterchangeGenericAssetsPipeline::ExecutePipeline
          (UInterchangeGenericAssetsPipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  char cVar1;
  UInterchangeGenericMaterialPipeline *pUVar2;
  UObject *pUVar3;
  UInterchangeGenericMeshPipeline *pUVar4;
  UInterchangeGenericGroomPipeline *pUVar5;
  UInterchangeGenericAnimationPipeline *pUVar6;
  longlong lVar7;
  void *_Src;
  code *pcVar8;
  bool bVar9;
  UInterchangeResultError_Generic *pUVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  TQuat<double> *pTVar15;
  UInterchangeCommonPipelineDataFactoryNode *this_00;
  UInterchangeSourceNode *this_01;
  FString *pFVar16;
  UInterchangeManager *this_02;
  longlong lVar17;
  undefined4 uVar18;
  undefined1 auStackY_228 [32];
  FWeakObjectPtr local_1e8;
  FString local_1e0;
  undefined8 local_1d0;
  FNumberFormattingOptions local_1c8;
  TSharedPtr<FCulture,1> local_1b0;
  TSharedPtr<FCulture,1> local_1a0;
  UInterchangeSourceNode *local_190;
  EReimportStrategyFlags local_188;
  code *local_180;
  UInterchangeSourceNode **local_178;
  FText local_170;
  FText local_160;
  FString local_150;
  undefined1 local_140 [16];
  double local_130;
  FText local_128;
  FText local_118;
  FTextFormat local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  TQuat<double> local_d8;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr ==
      (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CommonSkeletalMeshesAndAnimationsProperties",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
                       ,0x4c5,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_1 == (UInterchangeBaseNodeContainer *)0x0) {
    if (2 < (byte)LogInterchangePipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
    }
  }
  else {
    if (this->_padding_ == 0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2674368391669611313>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
                         ,0x4cf,"Results");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pUVar2 = (this->MaterialPipeline).field0_0x0.DebugPtr;
    if (pUVar2 != (UInterchangeGenericMaterialPipeline *)0x0) {
      pUVar3 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      pUVar2->_padding_ = (longlong)pUVar3;
    }
    pUVar4 = (this->MeshPipeline).field0_0x0.DebugPtr;
    if (pUVar4 != (UInterchangeGenericMeshPipeline *)0x0) {
      pUVar3 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      pUVar4->_padding_ = (longlong)pUVar3;
    }
    pUVar5 = (this->GroomPipeline).field0_0x0.DebugPtr;
    if (pUVar5 != (UInterchangeGenericGroomPipeline *)0x0) {
      pUVar3 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      pUVar5->_padding_ = (longlong)pUVar3;
    }
    pUVar6 = (this->AnimationPipeline).field0_0x0.DebugPtr;
    if (pUVar6 != (UInterchangeGenericAnimationPipeline *)0x0) {
      pUVar3 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      pUVar6->_padding_ = (longlong)pUVar3;
    }
    if (((this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr)->
        bImportOnlyAnimations != false) {
      local_1e8.ObjectIndex = 0;
      local_1e8.ObjectSerialNumber = 0;
      local_1d0 = 0;
      ((this->AnimationPipeline).field0_0x0.DebugPtr)->bImportAnimations = true;
      ((this->MaterialPipeline).field0_0x0.DebugPtr)->bImportMaterials = false;
      ((this->MeshPipeline).field0_0x0.DebugPtr)->bImportStaticMeshes = false;
      ((this->MeshPipeline).field0_0x0.DebugPtr)->bCreatePhysicsAsset = false;
      FWeakObjectPtr::operator=(&local_1e8,(FObjectPtr)&local_1d0);
      (((this->MeshPipeline).field0_0x0.DebugPtr)->PhysicsAsset).WeakPtr = local_1e8;
      ((((this->MaterialPipeline).field0_0x0.DebugPtr)->TexturePipeline).field0_0x0.DebugPtr)->
      bImportTextures = false;
    }
    if (this->ImportOffsetUniformScale <= __real_322bcc77 &&
        __real_322bcc77 != this->ImportOffsetUniformScale) {
      FNumberFormattingOptions::FNumberFormattingOptions(&local_1c8);
      local_1c8.MaximumFractionalDigits = 6;
      local_1c8.MinimumFractionalDigits = 1;
      pUVar10 = UInterchangePipelineBase::AddMessage<UInterchangeResultError_Generic>
                          ((UInterchangePipelineBase *)this);
      local_1a0.Object = (FCulture *)0x0;
      local_1a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar11 = FText::AsNumber(&local_128,__real_3f800000,&local_1c8,&local_1a0);
      local_1b0.Object = (FCulture *)0x0;
      local_1b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar12 = FText::AsNumber(&local_118,this->ImportOffsetUniformScale,&local_1c8,&local_1b0);
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_160,L"UInterchangeGenericAssetsPipeline",
                           L"BadImportOffsetUniformScale",
                           L"Value [{0}] for ImportOffsetUniformScale setting is too small, we will use the default value [{1}]."
                          );
      pFVar14 = FTextFormat::FTextFormat(&local_108,pFVar13,Default);
      pFVar11 = FText::Format<FText,FText>(&local_170,pFVar14,pFVar12,pFVar11);
      FText::operator=(&pUVar10->Text,pFVar11);
      if (local_170.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
      }
      if (local_160.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.SharedReferenceCount.ReferenceController);
      this->ImportOffsetUniformScale = 1.0;
    }
    local_b8.Translation.XY.m128d_f64[0] = (this->ImportOffsetTranslation).field0_0x0._s_0.X;
    local_b8.Translation.XY.m128d_f64[1] = (this->ImportOffsetTranslation).field0_0x0._s_0.Y;
    local_b8.Translation.ZW.m128d_f64[0] = (this->ImportOffsetTranslation).field0_0x0._s_0.Z;
    local_b8.Translation.ZW.m128d_f64[1] = 0.0;
    pTVar15 = UE::Math::TRotator<double>::Quaternion(&this->ImportOffsetRotation,&local_d8);
    local_f8 = pTVar15->X;
    dStack_f0 = pTVar15->Y;
    local_e8 = pTVar15->Z;
    dStack_e0 = pTVar15->W;
    local_130 = (double)this->ImportOffsetUniformScale;
    uVar18 = (undefined4)((ulonglong)local_130 >> 0x20);
    local_140._8_4_ = SUB84(local_130,0);
    local_140._0_8_ = local_130;
    local_140._12_4_ = uVar18;
    local_b8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(local_130,0);
    local_b8.Scale3D.XY.m128d_f64[0] = local_130;
    local_b8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar18;
    local_b8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_b8.Rotation.XY.m128d_f64[0] = local_f8;
    local_b8.Rotation.XY.m128d_f64[1] = dStack_f0;
    local_b8.Rotation.ZW.m128d_f64[0] = local_e8;
    local_b8.Rotation.ZW.m128d_f64[1] = dStack_e0;
    local_b8.Scale3D.ZW.m128d_f64[0] = local_130;
    this_00 = UInterchangeCommonPipelineDataFactoryNode::FindOrCreateUniqueInstance(param_1);
    UInterchangeCommonPipelineDataFactoryNode::SetCustomGlobalOffsetTransform
              (this_00,param_1,&local_b8);
    UInterchangeCommonPipelineDataFactoryNode::SetBakeMeshes
              (this_00,&((this->CommonMeshesProperties).field0_0x0.DebugPtr)->bBakeMeshes);
    UInterchangeCommonPipelineDataFactoryNode::SetBakePivotMeshes
              (this_00,&((this->CommonMeshesProperties).field0_0x0.DebugPtr)->bBakePivotMeshes);
    pUVar2 = (this->MaterialPipeline).field0_0x0.DebugPtr;
    if (pUVar2 != (UInterchangeGenericMaterialPipeline *)0x0) {
      UInterchangePipelineBase::ScriptedExecutePipeline
                ((UInterchangePipelineBase *)pUVar2,param_1,param_2,param_3);
    }
    pUVar4 = (this->MeshPipeline).field0_0x0.DebugPtr;
    if (pUVar4 != (UInterchangeGenericMeshPipeline *)0x0) {
      UInterchangePipelineBase::ScriptedExecutePipeline
                ((UInterchangePipelineBase *)pUVar4,param_1,param_2,param_3);
    }
    pUVar5 = (this->GroomPipeline).field0_0x0.DebugPtr;
    if (pUVar5 != (UInterchangeGenericGroomPipeline *)0x0) {
      UInterchangePipelineBase::ScriptedExecutePipeline
                ((UInterchangePipelineBase *)pUVar5,param_1,param_2,param_3);
    }
    pUVar6 = (this->AnimationPipeline).field0_0x0.DebugPtr;
    if (pUVar6 != (UInterchangeGenericAnimationPipeline *)0x0) {
      UInterchangePipelineBase::ScriptedExecutePipeline
                ((UInterchangePipelineBase *)pUVar6,param_1,param_2,param_3);
    }
    ImplementUseSourceNameForAssetOption(this,param_1,param_2);
    this_01 = UInterchangeSourceNode::FindOrCreateUniqueInstance(param_1);
    UInterchangeSourceNode::SetCustomReimportStrategyFlags(this_01,this->ReimportStrategy);
    if (this->bAssetTypeSubFolders != false) {
      UInterchangeSourceNode::SetCustomUseAssetTypeSubPathSuffix
                (this_01,&this->bAssetTypeSubFolders);
    }
    if (this->bSceneNameSubFolder != false) {
      cVar1 = (char)this->_padding_;
      if ((cVar1 != '\x02') && (cVar1 != '\x04')) {
        if (param_2->ArrayNum < 1) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        lVar7 = *(longlong *)(param_2->AllocatorInstance).Data;
        local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e0.Data.ArrayNum = *(int *)(lVar7 + 0x30);
        lVar17 = (longlong)local_1e0.Data.ArrayNum;
        _Src = *(void **)(lVar7 + 0x28);
        if (local_1e0.Data.ArrayNum == 0) {
          local_1e0.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1e0.Data.ArrayNum,0,(ForAnyElementType *)&local_1e0,
                     local_1e0.Data.ArrayNum,&local_1e0.Data.ArrayMax);
          memcpy(local_1e0.Data.AllocatorInstance.Data,_Src,lVar17 * 2);
        }
        pFVar16 = FPaths::GetBaseFilename(&local_150,&local_1e0,true);
        ::FString::operator=(&this->SceneNameFolderPrefix,pFVar16);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        this_02 = UInterchangeManager::GetInterchangeManager();
        UInterchangeManager::SanitizeNameInline
                  (this_02,&this->SceneNameFolderPrefix,LongPackage|ObjectPath|ObjectName);
      }
      UInterchangeSourceNode::SetCustomSubPathPrefix(this_01,&this->SceneNameFolderPrefix);
    }
    local_188 = this->ReimportStrategy;
    local_178 = &local_190;
    local_180 = UE::Core::Private::Function::
                TFunctionRefCaller<`UInterchangeGenericAssetsPipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
                ::Call;
    local_190 = this_01;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeFactoryBaseNode>
              (param_1,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeFactoryBaseNode_*)> *)
                       &local_180);
  }
  return;
}

// ExecutePostFactoryPipeline @ 14e7a9690

void __thiscall
UInterchangeGenericAssetsPipeline::ExecutePostFactoryPipeline
          (UInterchangeGenericAssetsPipeline *this,UInterchangeBaseNodeContainer *param_1,
          FString *param_2,UObject *param_3,bool param_4)

{
  UInterchangeGenericMaterialPipeline *this_00;
  UInterchangeGenericMeshPipeline *this_01;
  UInterchangeGenericGroomPipeline *this_02;
  UInterchangeGenericAnimationPipeline *this_03;
  
  this_00 = (this->MaterialPipeline).field0_0x0.DebugPtr;
  if (this_00 != (UInterchangeGenericMaterialPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline
              ((UInterchangePipelineBase *)this_00,param_1,param_2,param_3,param_4);
  }
  this_01 = (this->MeshPipeline).field0_0x0.DebugPtr;
  if (this_01 != (UInterchangeGenericMeshPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline
              ((UInterchangePipelineBase *)this_01,param_1,param_2,param_3,param_4);
  }
  this_02 = (this->GroomPipeline).field0_0x0.DebugPtr;
  if (this_02 != (UInterchangeGenericGroomPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline
              ((UInterchangePipelineBase *)this_02,param_1,param_2,param_3,param_4);
  }
  this_03 = (this->AnimationPipeline).field0_0x0.DebugPtr;
  if (this_03 != (UInterchangeGenericAnimationPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline
              ((UInterchangePipelineBase *)this_03,param_1,param_2,param_3,param_4);
  }
  return;
}

// ExecutePostImportPipeline @ 14e7a9990

void __thiscall
UInterchangeGenericAssetsPipeline::ExecutePostImportPipeline
          (UInterchangeGenericAssetsPipeline *this,UInterchangeBaseNodeContainer *param_1,
          FString *param_2,UObject *param_3,bool param_4)

{
  UInterchangeGenericMaterialPipeline *this_00;
  UInterchangeGenericMeshPipeline *this_01;
  UInterchangeGenericGroomPipeline *this_02;
  UInterchangeGenericAnimationPipeline *this_03;
  UInterchangeBaseNode *pUVar1;
  
  this_00 = (this->MaterialPipeline).field0_0x0.DebugPtr;
  if (this_00 != (UInterchangeGenericMaterialPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostImportPipeline
              ((UInterchangePipelineBase *)this_00,param_1,param_2,param_3,param_4);
  }
  this_01 = (this->MeshPipeline).field0_0x0.DebugPtr;
  if (this_01 != (UInterchangeGenericMeshPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostImportPipeline
              ((UInterchangePipelineBase *)this_01,param_1,param_2,param_3,param_4);
  }
  this_02 = (this->GroomPipeline).field0_0x0.DebugPtr;
  if (this_02 != (UInterchangeGenericGroomPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostImportPipeline
              ((UInterchangePipelineBase *)this_02,param_1,param_2,param_3,param_4);
  }
  this_03 = (this->AnimationPipeline).field0_0x0.DebugPtr;
  if (this_03 != (UInterchangeGenericAnimationPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostImportPipeline
              ((UInterchangePipelineBase *)this_03,param_1,param_2,param_3,param_4);
  }
  pUVar1 = UInterchangeBaseNodeContainer::GetNode(param_1,param_2);
  AddMetaData(this,param_3,pUVar1);
  return;
}

// GetConflictInfos @ 14e7b6870

TArray<FInterchangeConflictInfo,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeGenericAssetsPipeline::GetConflictInfos
          (UInterchangeGenericAssetsPipeline *this,
          TArray<FInterchangeConflictInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UObject *param_1,UInterchangeBaseNodeContainer *param_2,UInterchangeSourceData *param_3)

{
  int *piVar1;
  int iVar2;
  FInterchangeConflictInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<FInterchangeConflictInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong *plVar7;
  
  bVar5 = IsInGameThread();
  if (bVar5) {
    plVar7 = &this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar2 = (int)this->_padding_;
    if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
      DestructItems<FInterchangeConflictInfo,int>((FInterchangeConflictInfo *)*plVar7,iVar2);
      *(undefined4 *)&this->_padding_ = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,0,(ForAnyElementType *)plVar7,0,piVar1);
      }
    }
    else {
      DestructItems<FInterchangeConflictInfo,int>((FInterchangeConflictInfo *)*plVar7,iVar2);
      *(undefined4 *)&this->_padding_ = 0;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar2 = (int)this->_padding_;
    pFVar3 = (FInterchangeConflictInfo *)*plVar7;
    __return_storage_ptr__->ArrayNum = iVar2;
    if (iVar2 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<FInterchangeConflictInfo,FInterchangeConflictInfo,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar2);
    }
    return __return_storage_ptr__;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2674368391669611492>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
                     ,0x41c,"IsInGameThread()");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TArray<FInterchangeConflictInfo,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar6;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7b95c0

UClass * __cdecl UInterchangeGenericAssetsPipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericAssetsPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericAssetsPipeline,0x2c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericAssetsPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericAssetsPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.InnerSingleton;
}

// ImplementUseSourceNameForAssetOption @ 14e7c5210

/* WARNING: Removing unreachable block (ram,0x00014e7c5765) */
/* WARNING: Removing unreachable block (ram,0x00014e7c5772) */

void __thiscall
UInterchangeGenericAssetsPipeline::ImplementUseSourceNameForAssetOption
          (UInterchangeGenericAssetsPipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  void *pvVar2;
  UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *pUVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  bool bVar8;
  UClass *pUVar9;
  UInterchangeGenericAssetsPipeline *pUVar10;
  UInterchangeFactoryBaseNode *pUVar11;
  FString *pFVar12;
  ForAnyElementType *pFVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  FString local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  pUVar9 = Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister();
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  UInterchangeBaseNodeContainer::GetNodes(param_1,pUVar9,&local_88);
  pUVar9 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  UInterchangeBaseNodeContainer::GetNodes(param_1,pUVar9,&local_f8);
  pUVar9 = Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister();
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  UInterchangeBaseNodeContainer::GetNodes(param_1,pUVar9,&local_d8);
  iVar17 = local_f8.ArrayNum + local_88.ArrayNum;
  pUVar10 = (UInterchangeGenericAssetsPipeline *)
            UInterchangePipelineBase::GetMostPipelineOuter((UInterchangePipelineBase *)this);
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (this == pUVar10) {
    iVar16 = (int)this->_padding_;
    bVar7 = false;
    bVar8 = true;
    pvVar2 = (void *)this->_padding_;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = iVar16;
    if (iVar16 == 0) {
      pFVar13 = &local_e8;
      iStack_dc = 0;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar16,0,&local_e8,iVar16,&iStack_dc);
      memcpy(local_e8.Data,pvVar2,(longlong)iVar16 * 2);
      pFVar13 = &local_e8;
      local_108.Data.AllocatorInstance.Data = local_e8.Data;
    }
  }
  else {
    bVar7 = true;
    bVar8 = false;
    local_50 = 0;
    pFVar13 = &local_58;
  }
  pFVar13->Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = *(int *)&pFVar13[1].Data;
  local_108.Data.ArrayMax = *(int *)((longlong)&pFVar13[1].Data + 4);
  pFVar13[1].Data = (FScriptContainerElement *)0x0;
  if ((bVar7) && (local_58.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data);
  }
  if ((bVar8) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data);
  }
  bVar5 = false;
  bVar7 = false;
  bVar8 = false;
  if ((local_108.Data.ArrayNum < 2) &&
     (pUVar10 = (UInterchangeGenericAssetsPipeline *)
                UInterchangePipelineBase::GetMostPipelineOuter((UInterchangePipelineBase *)this),
     this == pUVar10)) {
    iVar1 = (this->AssetName).Data.ArrayNum;
    iVar16 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar16 = 0;
    }
    ::FString::AssignRange
              (&local_108,(wchar_t *)(this->AssetName).Data.AllocatorInstance.Data,iVar16);
  }
  UInterchangeGenericMeshPipeline::ImplementUseSourceNameForAssetOptionSkeletalMesh
            ((this->MeshPipeline).field0_0x0.DebugPtr,iVar17,this->bUseSourceNameForAsset,&local_108
            );
  UInterchangeGenericAnimationPipeline::ImplementUseSourceNameForAssetOptionAnimSequence
            ((this->AnimationPipeline).field0_0x0.DebugPtr,this->bUseSourceNameForAsset,&local_108);
  if ((this->bUseSourceNameForAsset == false) && (local_108.Data.ArrayNum < 2)) goto LAB_14e7c57e5;
  if ((iVar17 == 1) && (0 < local_f8.ArrayNum)) {
    pUVar11 = UInterchangeBaseNodeContainer::GetFactoryNode
                        (param_1,(FString *)local_f8.AllocatorInstance.Data);
    if (pUVar11 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e7c5451:
      pUVar11 = (UInterchangeFactoryBaseNode *)0x0;
    }
    else {
      pUVar9 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
      iVar17 = (int)pUVar9->_padding_;
      if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar17) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
          &pUVar9->_padding_)) goto LAB_14e7c5451;
    }
    FVar6.Data = local_108.Data.AllocatorInstance.Data;
    lVar14 = (longlong)local_108.Data.ArrayNum;
    if (local_108.Data.ArrayNum < 2) {
      if ((param_2->ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = true;
      bVar7 = true;
      lVar14 = *(longlong *)(param_2->AllocatorInstance).Data;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = *(int *)(lVar14 + 0x30);
      lVar15 = (longlong)local_b8.Data.ArrayNum;
      pvVar2 = *(void **)(lVar14 + 0x28);
      if (local_b8.Data.ArrayNum == 0) {
        local_b8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                   local_b8.Data.ArrayNum,&local_b8.Data.ArrayMax);
        memcpy(local_b8.Data.AllocatorInstance.Data,pvVar2,lVar15 * 2);
      }
      pFVar12 = FPaths::GetBaseFilename(&local_48,&local_b8,true);
    }
    else {
      bVar8 = true;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = local_108.Data.ArrayNum;
      if (local_108.Data.ArrayNum == 0) {
        local_c8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,
                   local_108.Data.ArrayNum,&local_c8.Data.ArrayMax);
        memcpy(local_c8.Data.AllocatorInstance.Data,FVar6.Data,lVar14 * 2);
      }
      pFVar12 = &local_c8;
    }
    local_68.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pFVar12->Data).ArrayNum;
    local_68.Data.ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
    if ((bVar8) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if ((bVar7) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar5) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)pUVar11,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = false;
  bVar8 = false;
  if (local_d8.ArrayNum != 1) goto LAB_14e7c57e5;
  pUVar11 = UInterchangeBaseNodeContainer::GetFactoryNode
                      (param_1,(FString *)local_d8.AllocatorInstance.Data);
  if (pUVar11 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e7c5625:
    pUVar11 = (UInterchangeFactoryBaseNode *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister();
    iVar17 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar9->_padding_)) goto LAB_14e7c5625;
  }
  FVar6.Data = local_108.Data.AllocatorInstance.Data;
  lVar14 = (longlong)local_108.Data.ArrayNum;
  if (local_108.Data.ArrayNum < 2) {
    if ((param_2->ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar7 = true;
    bVar8 = true;
    lVar14 = *(longlong *)(param_2->AllocatorInstance).Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = *(int *)(lVar14 + 0x30);
    lVar15 = (longlong)local_98.Data.ArrayNum;
    pvVar2 = *(void **)(lVar14 + 0x28);
    if (local_98.Data.ArrayNum == 0) {
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_98.Data.ArrayNum,
                 &local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,pvVar2,lVar15 * 2);
    }
    pFVar12 = FPaths::GetBaseFilename(&local_38,&local_98,true);
  }
  else {
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = local_108.Data.ArrayNum;
    if (local_108.Data.ArrayNum == 0) {
      local_a8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,
                 local_108.Data.ArrayNum,&local_a8.Data.ArrayMax);
      memcpy(local_a8.Data.AllocatorInstance.Data,FVar6.Data,lVar14 * 2);
    }
    pFVar12 = &local_a8;
  }
  local_78.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = (pFVar12->Data).ArrayNum;
  local_78.Data.ArrayMax = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  if ((bVar8) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar7) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pUVar3 = (this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr;
  if ((pUVar3 == (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0) ||
     (pUVar3->bImportOnlyAnimations == false)) {
    ::FString::AppendChars(&local_78,L"_Anim",5);
  }
  UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)pUVar11,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_14e7c57e5:
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// IsScripted @ 14e7c74e0

bool __thiscall
UInterchangeGenericAssetsPipeline::IsScripted(UInterchangeGenericAssetsPipeline *this)

{
  return false;
}

// IsSettingsAreValid @ 14e7c7730

bool __thiscall
UInterchangeGenericAssetsPipeline::IsSettingsAreValid
          (UInterchangeGenericAssetsPipeline *this,TOptional<FText> *param_1)

{
  UInterchangeGenericMaterialPipeline *pUVar1;
  UInterchangeGenericCommonMeshesProperties *pUVar2;
  UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *pUVar3;
  UInterchangeGenericMeshPipeline *pUVar4;
  UInterchangeGenericGroomPipeline *pUVar5;
  UInterchangeGenericAnimationPipeline *pUVar6;
  char cVar7;
  
  pUVar1 = (this->MaterialPipeline).field0_0x0.DebugPtr;
  if ((pUVar1 != (UInterchangeGenericMaterialPipeline *)0x0) &&
     (cVar7 = (**(code **)(pUVar1->_padding_ + 0x2d8))(), cVar7 == '\0')) {
    return false;
  }
  pUVar2 = (this->CommonMeshesProperties).field0_0x0.DebugPtr;
  if ((pUVar2 != (UInterchangeGenericCommonMeshesProperties *)0x0) &&
     (cVar7 = (**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2,param_1), cVar7 == '\0')) {
    return false;
  }
  pUVar3 = (this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr;
  if ((pUVar3 != (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0) &&
     (cVar7 = (**(code **)(pUVar3->_padding_ + 0x2d8))(pUVar3,param_1), cVar7 == '\0')) {
    return false;
  }
  pUVar4 = (this->MeshPipeline).field0_0x0.DebugPtr;
  if ((pUVar4 != (UInterchangeGenericMeshPipeline *)0x0) &&
     (cVar7 = (**(code **)(pUVar4->_padding_ + 0x2d8))(pUVar4,param_1), cVar7 == '\0')) {
    return false;
  }
  pUVar5 = (this->GroomPipeline).field0_0x0.DebugPtr;
  if ((pUVar5 != (UInterchangeGenericGroomPipeline *)0x0) &&
     (cVar7 = (**(code **)(pUVar5->_padding_ + 0x2d8))(pUVar5,param_1), cVar7 == '\0')) {
    return false;
  }
  pUVar6 = (this->AnimationPipeline).field0_0x0.DebugPtr;
  if (pUVar6 == (UInterchangeGenericAnimationPipeline *)0x0) {
    return true;
  }
  cVar7 = (**(code **)(pUVar6->_padding_ + 0x2d8))(pUVar6,param_1);
  return cVar7 != '\0';
}

// PreDialogCleanup @ 14e7d3980

void __thiscall
UInterchangeGenericAssetsPipeline::PreDialogCleanup
          (UInterchangeGenericAssetsPipeline *this,FName param_1)

{
  int iVar1;
  UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *pUVar2;
  UInterchangeGenericMaterialPipeline *pUVar3;
  UInterchangeGenericMeshPipeline *pUVar4;
  UInterchangeGenericGroomPipeline *pUVar5;
  UInterchangeGenericAnimationPipeline *pUVar6;
  code *pcVar7;
  bool bVar8;
  UClass *pUVar9;
  UInterchangeGenericAssetsPipeline *pUVar10;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  UObject *local_res20;
  
  if (((this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr ==
       (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonSkeletalMeshesAndAnimationsProperties",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
                         ,0x58,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') goto LAB_14e7d3a7d;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  (((this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr)->Skeleton).WeakPtr =
       local_res8;
  if ((this->ContentPathExistingSkeleton).AssetPath.PackageName == (FName)0x0) goto LAB_14e7d3a7d;
  local_res20 = FSoftObjectPath::TryLoad
                          (&this->ContentPathExistingSkeleton,(FUObjectSerializeContext *)0x0);
  if (local_res20 == (UObject *)0x0) {
LAB_14e7d3a3d:
    local_res20 = (UObject *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_USkeleton_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&local_res20->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res20->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) goto LAB_14e7d3a3d;
  }
  pUVar2 = (this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=(&(pUVar2->Skeleton).WeakPtr,(FObjectPtr)&local_res20);
LAB_14e7d3a7d:
  ((this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr)->bImportOnlyAnimations =
       this->bImportOnlyAnimationAdjusted;
  pUVar3 = (this->MaterialPipeline).field0_0x0.DebugPtr;
  if (pUVar3 != (UInterchangeGenericMaterialPipeline *)0x0) {
    (**(code **)(pUVar3->_padding_ + 0x2d0))(pUVar3,param_1);
  }
  pUVar4 = (this->MeshPipeline).field0_0x0.DebugPtr;
  if (pUVar4 != (UInterchangeGenericMeshPipeline *)0x0) {
    (**(code **)(pUVar4->_padding_ + 0x2d0))(pUVar4,param_1);
  }
  pUVar5 = (this->GroomPipeline).field0_0x0.DebugPtr;
  if (pUVar5 != (UInterchangeGenericGroomPipeline *)0x0) {
    (**(code **)(pUVar5->_padding_ + 0x2d0))(pUVar5,param_1);
  }
  pUVar6 = (this->AnimationPipeline).field0_0x0.DebugPtr;
  if (pUVar6 != (UInterchangeGenericAnimationPipeline *)0x0) {
    (**(code **)(pUVar6->_padding_ + 0x2d0))(pUVar6,param_1);
  }
  pUVar10 = (UInterchangeGenericAssetsPipeline *)
            UInterchangePipelineBase::GetMostPipelineOuter((UInterchangePipelineBase *)this);
  if (this != pUVar10) {
    return;
  }
  UInterchangePipelineBase::SaveSettings((UInterchangePipelineBase *)this,param_1);
  return;
}

// SetReimportSourceIndex @ 14e7df760

void __thiscall
UInterchangeGenericAssetsPipeline::SetReimportSourceIndex
          (UInterchangeGenericAssetsPipeline *this,UClass *param_1,int param_2)

{
  UInterchangeGenericMaterialPipeline *this_00;
  UInterchangeGenericMeshPipeline *this_01;
  UInterchangeGenericGroomPipeline *this_02;
  UInterchangeGenericAnimationPipeline *this_03;
  
  this_00 = (this->MaterialPipeline).field0_0x0.DebugPtr;
  if (this_00 != (UInterchangeGenericMaterialPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedSetReimportSourceIndex
              ((UInterchangePipelineBase *)this_00,param_1,param_2);
  }
  this_01 = (this->MeshPipeline).field0_0x0.DebugPtr;
  if (this_01 != (UInterchangeGenericMeshPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedSetReimportSourceIndex
              ((UInterchangePipelineBase *)this_01,param_1,param_2);
  }
  this_02 = (this->GroomPipeline).field0_0x0.DebugPtr;
  if (this_02 != (UInterchangeGenericGroomPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedSetReimportSourceIndex
              ((UInterchangePipelineBase *)this_02,param_1,param_2);
  }
  this_03 = (this->AnimationPipeline).field0_0x0.DebugPtr;
  if (this_03 != (UInterchangeGenericAnimationPipeline *)0x0) {
    UInterchangePipelineBase::ScriptedSetReimportSourceIndex
              ((UInterchangePipelineBase *)this_03,param_1,param_2);
  }
  return;
}

// ShowConflictDialog @ 14e7e2770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */
/* WARNING: Enum "EDependencyQuery": Some values do not have unique names */

void __thiscall
UInterchangeGenericAssetsPipeline::ShowConflictDialog
          (UInterchangeGenericAssetsPipeline *this,FGuid *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  TMap<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  UObjectBaseUtility *this_00;
  FName FVar5;
  code *pcVar6;
  SInterchangeGenericAssetMaterialConflictWidget *pSVar7;
  FSharedReferencer<1> FVar8;
  SInterchangeGenericAssetSkeletonConflictWidget *pSVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  TMap<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>_>
  *pTVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FArguments *pFVar16;
  UClass *pUVar17;
  UObject *pUVar18;
  UPackage *pUVar19;
  UPackage *pUVar20;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar21;
  UClass *pUVar22;
  FString *pFVar23;
  FName *pFVar24;
  FModuleManager *this_01;
  IModuleInterface *pIVar25;
  longlong *plVar26;
  FArguments *pFVar27;
  byte bVar28;
  ulonglong uVar29;
  wchar_t *pwVar30;
  uint *puVar31;
  UObject *pUVar32;
  ForAnyElementType FVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  uint uVar38;
  bool bVar40;
  undefined1 auStackY_878 [32];
  undefined1 local_828;
  undefined1 local_827;
  undefined1 local_826;
  undefined1 local_825;
  undefined1 local_824 [4];
  ForAnyElementType local_820;
  undefined8 local_818;
  ForAnyElementType local_810;
  undefined8 local_808;
  ForAnyElementType local_800;
  undefined8 local_7f8;
  T0RequiredArgs local_7f0;
  T0RequiredArgs local_7ef [7];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_7e8;
  ForAnyElementType local_7d8;
  uint local_7d0;
  int local_7cc;
  FLLMScope local_7c8;
  FLLMScope local_7c4;
  FName local_7c0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_7b8;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> local_7a8;
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  local_798;
  TArray<FString,TSizedDefaultAllocator<32>_> local_788;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_778;
  uint local_768;
  TSharedPtr<FString,1> local_760;
  TArray<int,TSizedDefaultAllocator<32>_> local_750;
  TMap<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>_>
  *local_740;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_738;
  undefined8 local_718;
  TArray<FName,TSizedDefaultAllocator<32>_> local_710;
  TArray<FName,TSizedDefaultAllocator<32>_> local_700;
  UObject *local_6f0;
  FString local_6e8;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> local_6d8;
  TSlateDecl<SInterchangeGenericAssetMaterialConflictWidget,RequiredArgs::T0RequiredArgs> local_6c8;
  TSlateDecl<SInterchangeGenericAssetSkeletonConflictWidget,RequiredArgs::T0RequiredArgs> local_6b0;
  TMap<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>_>
  *local_698;
  undefined8 uStack_690;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_688;
  uint uStack_680;
  uint uStack_67c;
  uint uStack_678;
  undefined4 uStack_674;
  int local_670;
  undefined4 uStack_66c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_668;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_648;
  undefined8 local_628;
  int local_620;
  FName local_61c;
  TRawPtrProxy<FString> local_610;
  UObjectBaseUtility *local_608;
  FMemScope local_600;
  FMemScope local_5f8;
  ForAnyElementType *local_5f0;
  IModuleInterface *local_5e8;
  FName local_5e0;
  TMap<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>_>
  *local_5d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5d0;
  undefined8 uStack_5b0;
  TSharedRef<SInterchangeBaseConflictWidget,1> local_5a8;
  TSharedRef<SInterchangeBaseConflictWidget,1> local_598;
  FName local_588;
  TVector2<double>_u_0 local_580;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_570;
  FString local_560;
  TVector2<double>_u_0 local_550 [2];
  undefined4 local_524;
  FArguments local_520;
  FArguments local_2f0;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  FDependencyQuery local_78;
  FDependencyQuery local_58;
  ulonglong local_38;
  UObject *pUVar39;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_878;
  lVar34 = this->_padding_;
  iVar14 = (int)this->_padding_;
  puVar31 = (uint *)(lVar34 + 0x28);
  lVar37 = (longlong)iVar14 * 0x88 + lVar34;
  while( true ) {
    if ((int)this->_padding_ != iVar14) {
      local_828 = 0;
      `TCheckedPointerIterator<FInterchangeConflictInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_828);
    }
    if (lVar34 == lVar37) {
      return;
    }
    uVar38 = param_1->B;
    uVar35 = param_1->A;
    uVar15 = param_1->D;
    uVar36 = param_1->C;
    if (((uVar35 == puVar31[-2] && uVar38 == puVar31[-1]) && uVar15 == puVar31[1]) &&
        uVar36 == *puVar31) break;
    lVar34 = lVar34 + 0x88;
    puVar31 = puVar31 + 0x22;
  }
  if (*(UInterchangeGenericAssetsPipeline **)(lVar34 + 0x30) ==
      (UInterchangeGenericAssetsPipeline *)0x0) {
    bVar40 = this == (UInterchangeGenericAssetsPipeline *)0x0;
  }
  else {
    bVar40 = *(UInterchangeGenericAssetsPipeline **)(lVar34 + 0x30) == this;
  }
  if (!bVar40) {
    bVar40 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2674368391669611445>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
                        ,1099,"ConflictInfo.Pipeline == this");
    if (!bVar40) {
      return;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((uVar15 == (this->MaterialConflictData).ConflictUniqueId.D &&
       uVar36 == (this->MaterialConflictData).ConflictUniqueId.C) &&
      uVar38 == (this->MaterialConflictData).ConflictUniqueId.B) &&
      uVar35 == (this->MaterialConflictData).ConflictUniqueId.A) {
    pFVar16 = SInterchangeGenericAssetMaterialConflictWidget::FArguments::FArguments(&local_520);
    iVar14 = (this->MaterialConflictData).AssetMaterialNames.ArrayNum;
    pFVar4 = (this->MaterialConflictData).AssetMaterialNames.AllocatorInstance.Data;
    local_7b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7b8.ArrayNum = iVar14;
    if (iVar14 == 0) {
      local_7b8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar14,0,&local_7b8.AllocatorInstance,iVar14,&local_7b8.ArrayMax);
      ConstructItems<FString,FString,int>(local_7b8.AllocatorInstance.Data,(FString *)pFVar4,iVar14)
      ;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&pFVar16->_AssetMaterialNames,&local_7b8)
    ;
    DestructItems<FString,int>((FString *)local_7b8.AllocatorInstance.Data,local_7b8.ArrayNum);
    if (local_7b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.AllocatorInstance.Data);
    }
    iVar14 = (this->MaterialConflictData).ImportMaterialNames.ArrayNum;
    pFVar4 = (this->MaterialConflictData).ImportMaterialNames.AllocatorInstance.Data;
    local_788.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_788.ArrayNum = iVar14;
    if (iVar14 == 0) {
      local_788.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar14,0,&local_788.AllocatorInstance,iVar14,&local_788.ArrayMax);
      ConstructItems<FString,FString,int>(local_788.AllocatorInstance.Data,(FString *)pFVar4,iVar14)
      ;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar16->_ImportMaterialNames,&local_788);
    DestructItems<FString,int>((FString *)local_788.AllocatorInstance.Data,local_788.ArrayNum);
    if (local_788.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.AllocatorInstance.Data);
    }
    local_750.ArrayNum = (this->MaterialConflictData).MatchMaterialIndexes.ArrayNum;
    lVar34 = (longlong)local_750.ArrayNum;
    pFVar4 = (this->MaterialConflictData).MatchMaterialIndexes.AllocatorInstance.Data;
    local_750.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_750.ArrayNum == 0) {
      local_750.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_750.ArrayNum,0,&local_750.AllocatorInstance,local_750.ArrayNum,
                 &local_750.ArrayMax);
      memcpy(local_750.AllocatorInstance.Data,pFVar4,lVar34 << 2);
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&pFVar16->_MatchMaterialIndexes,&local_750);
    if (local_750.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_750.AllocatorInstance.Data);
    }
    pFVar16->_ReimportObject = (this->MaterialConflictData).ReimportObject;
    FLLMScope::FLLMScope(&local_7c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_61c = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_600,&local_61c,true);
    TSlateDecl<SInterchangeGenericAssetMaterialConflictWidget,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SInterchangeGenericAssetMaterialConflictWidget,RequiredArgs::T0RequiredArgs>
              (&local_6c8,"SInterchangeGenericAssetMaterialConflictWidget",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
               ,0x450,&local_7f0);
    FMemScope::~FMemScope(&local_600);
    FLLMScope::~FLLMScope(&local_7c8);
    pSVar7 = local_6c8._Widget.Object;
    if ((local_6c8._Widget.Object == (SInterchangeGenericAssetMaterialConflictWidget *)0x0) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar40)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SWidget::SWidgetConstruct((SWidget *)local_6c8._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
    SInterchangeGenericAssetMaterialConflictWidget::Construct(local_6c8._Widget.Object,pFVar16);
    if ((local_6c8._Widget.Object == (SInterchangeGenericAssetMaterialConflictWidget *)0x0) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar40)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((local_6c8._Widget.Object)->_padding_ & 0x10) == 0) {
      cVar12 = (**(code **)((local_6c8._Widget.Object)->_padding_ + 0x228))
                         (local_6c8._Widget.Object);
      bVar28 = 0;
      if (cVar12 == '\0') goto LAB_14e7e2b5b;
    }
    bVar28 = 0x20;
LAB_14e7e2b5b:
    FVar8.ReferenceController = local_6c8._Widget.SharedReferenceCount.ReferenceController;
    *(byte *)&(local_6c8._Widget.Object)->_padding_ =
         (byte)(local_6c8._Widget.Object)->_padding_ & 0xdf;
    *(byte *)&(local_6c8._Widget.Object)->_padding_ =
         (byte)(local_6c8._Widget.Object)->_padding_ | bVar28;
    pbVar1 = (byte *)((longlong)&(local_6c8._Widget.Object)->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    local_6c8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_6c8._Widget.Object = (SInterchangeGenericAssetMaterialConflictWidget *)0x0;
    if ((pSVar7 == (SInterchangeGenericAssetMaterialConflictWidget *)0x0) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar40)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_520._MatchMaterialIndexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520._MatchMaterialIndexes.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_520._ImportMaterialNames.AllocatorInstance.Data,
               local_520._ImportMaterialNames.ArrayNum);
    if (local_520._ImportMaterialNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520._ImportMaterialNames.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_520._AssetMaterialNames.AllocatorInstance.Data,
               local_520._AssetMaterialNames.ArrayNum);
    if (local_520._AssetMaterialNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520._AssetMaterialNames.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_520);
    local_5a8.Object = (SInterchangeBaseConflictWidget *)pSVar7;
    local_5a8.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
    local_580._s_0.X = ___xmm_4069000000000000407c200000000000;
    local_580._s_0.Y = _UNK_152f5d948;
    if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::Interchange::PipelineHelper::ShowModalDialog
              (&local_5a8,&(this->MaterialConflictData).DialogTitle,
               (TVector2<double> *)&local_580._s_0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    return;
  }
  if (((uVar15 != (this->SkeletonConflictData).ConflictUniqueId.D ||
       uVar36 != (this->SkeletonConflictData).ConflictUniqueId.C) ||
      uVar38 != (this->SkeletonConflictData).ConflictUniqueId.B) ||
      uVar35 != (this->SkeletonConflictData).ConflictUniqueId.A) {
    return;
  }
  uVar38 = 0;
  pUVar39 = (UObject *)0x0;
  pTVar3 = &(this->SkeletonConflictData).Joints;
  uVar35 = *(int *)&(this->SkeletonConflictData).Joints.field_0x8 -
           *(int *)&(this->SkeletonConflictData).Joints.field_0x34;
  local_820.Data = (FScriptContainerElement *)0x0;
  local_818 = 0;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  if (0 < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar35,&local_820,0,(int *)((longlong)&local_818 + 4));
  }
  puVar2 = &(this->SkeletonConflictData).Joints.field_0x10;
  local_648._padding_._0_4_ = 0;
  local_648._padding_._4_4_ = 1;
  local_648.UnvisitedBitMask = 0xffffffff;
  local_648.CurrentBitIndex = 0;
  local_648.BaseBitIndex = 0;
  local_648.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (*(int *)&(this->SkeletonConflictData).Joints.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_648);
  }
  uVar35 = *(uint *)&(this->SkeletonConflictData).Joints.field_0x28;
  TStack_738._padding_ = CONCAT44(local_648._padding_._4_4_,(undefined4)local_648._padding_);
  bVar28 = (byte)uVar35 & 0x1f;
  TStack_738.CurrentBitIndex = local_648.CurrentBitIndex;
  TStack_738.UnvisitedBitMask = local_648.UnvisitedBitMask;
  TStack_738._28_4_ = local_648._28_4_;
  TStack_738.BaseBitIndex = local_648.BaseBitIndex;
  local_718 = CONCAT44(local_718._4_4_,
                       *(int *)&(this->SkeletonConflictData).Joints.field_0x8 -
                       *(int *)&(this->SkeletonConflictData).Joints.field_0x34);
  local_668._padding_._0_4_ = (int)uVar35 >> 5;
  local_668._padding_._4_4_ = 1 << bVar28;
  local_668.UnvisitedBitMask = -1 << bVar28;
  TStack_738.Array = local_648.Array;
  local_668.BaseBitIndex = uVar35 & 0xffffffe0;
  TStack_5d0.Array = local_648.Array;
  uStack_5b0 = local_718;
  local_740 = pTVar3;
  local_668.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  local_668.CurrentBitIndex = uVar35;
  local_5d8 = pTVar3;
  TStack_5d0._padding_ = TStack_738._padding_;
  TStack_5d0._16_8_ = TStack_738._16_8_;
  TStack_5d0._24_8_ = TStack_738._24_8_;
  if (((int)uVar35 < 0) ||
     (uVar15 = *(uint *)&(this->SkeletonConflictData).Joints.field_0x28, (int)uVar15 < (int)uVar35))
  {
    bVar40 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar40) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar15 = *(uint *)&(this->SkeletonConflictData).Joints.field_0x28;
  }
  if (uVar35 != uVar15) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_668);
  }
  iVar14 = local_668.CurrentBitIndex;
  pTVar10 = local_668.Array;
  uStack_690 = CONCAT44(local_668._padding_._4_4_,(int)local_668._padding_);
  uStack_67c = local_668.CurrentBitIndex;
  uStack_680 = local_668.UnvisitedBitMask;
  uStack_674 = local_668._28_4_;
  uStack_678 = local_668.BaseBitIndex;
  pTStack_688 = local_668.Array;
  while( true ) {
    pTVar11 = local_5d8;
    if (*(int *)&local_5d8->field_0x8 - *(int *)&local_5d8->field_0x34 != (int)uStack_5b0) {
      local_827 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_827);
    }
    if (((TStack_5d0.CurrentBitIndex == iVar14) && (TStack_5d0.Array == pTVar10)) &&
       (pTVar11 == pTVar3)) break;
    pFVar23 = (FString *)(*(longlong *)pTVar11 + (longlong)TStack_5d0.CurrentBitIndex * 0x28);
    ::FString::FString(&local_6e8,pFVar23);
    local_6d8.Object = (FSkeletonJoint *)pFVar23[1].Data.AllocatorInstance.Data;
    local_6d8.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&pFVar23[1].Data.ArrayNum;
    if (local_6d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((local_820.Data <= &local_6d8) &&
        (&local_6d8 <
         (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
         (local_820.Data + (longlong)local_818._4_4_ * 0x10))) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar40)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar13 = (int)local_818;
    if ((int)local_818 == local_818._4_4_) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_820,(int *)((longlong)&local_818 + 4));
    }
    local_818 = CONCAT44(local_818._4_4_,iVar13 + 1);
    *(FSkeletonJoint **)&local_820.Data[(longlong)iVar13 * 0x10].field_0x0 = local_6d8.Object;
    *(TReferenceControllerBase<1> **)(local_820.Data + (longlong)iVar13 * 0x10 + 8) =
         local_6d8.SharedReferenceCount.ReferenceController;
    if (local_6d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6d8.SharedReferenceCount.ReferenceController);
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
    TStack_5d0.UnvisitedBitMask = TStack_5d0.UnvisitedBitMask & ~TStack_5d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5d0);
  }
  pUVar18 = (this->SkeletonConflictData).ReimportObject;
  local_800.Data = (FScriptContainerElement *)0x0;
  local_7f8 = 0;
  if (pUVar18 == (UObject *)0x0) {
LAB_14e7e2fd8:
    pUVar18 = pUVar39;
  }
  else {
    pUVar17 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar14 = (int)pUVar17->_padding_;
    if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar17->_padding_)) goto LAB_14e7e2fd8;
  }
  bVar40 = FWeakObjectPtr::IsValid
                     (&(((this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.DebugPtr)->
                       Skeleton).WeakPtr);
  if (bVar40) {
    pUVar18 = FWeakObjectPtr::Get(&(((this->CommonSkeletalMeshesAndAnimationsProperties).field0_0x0.
                                    DebugPtr)->Skeleton).WeakPtr);
LAB_14e7e3024:
    local_6f0 = pUVar18;
    if (pUVar18 != (UObject *)0x0) {
      local_810.Data = (FScriptContainerElement *)0x0;
      local_808 = 0;
      local_778.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_778.ArrayNum = 0;
      local_778.ArrayMax = 0;
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_778.AllocatorInstance,&local_778.ArrayMax);
      local_778.ArrayNum = iVar14 + 1;
      *(UObject **)(local_778.AllocatorInstance.Data + (longlong)iVar14 * 8) = pUVar18;
      local_c8._0_8_ = 0;
      local_c8._8_8_ = 0;
      local_a8 = (uint *)0x0;
      local_a0 = 0;
      local_9c = 0x80;
      local_98 = 0xffffffff;
      local_94 = 0;
      local_88 = (ForElementType<FSetElementId>)0x0;
      local_80 = 0;
      FReferencerFinder::GetAllReferencers
                (&local_7e8,&local_778,
                 (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)0x0,None);
      do {
        iVar14 = local_7e8.ArrayNum;
        uVar29 = (ulonglong)local_7e8.ArrayNum;
        local_768 = local_c8._8_4_ - local_94;
        pFVar4 = local_7e8.AllocatorInstance.Data + uVar29 * 8;
        FVar33.Data = local_7e8.AllocatorInstance.Data;
        while( true ) {
          if ((uint)uVar29 != iVar14) {
            local_826 = 0;
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_826);
          }
          if (FVar33.Data == pFVar4) break;
          local_608 = *(UObjectBaseUtility **)FVar33.Data;
          lVar34 = *(longlong *)&local_608->field_0x10;
          pUVar19 = UObjectBaseUtility::GetOutermost(local_608);
          pUVar20 = GetTransientPackage();
          if (pUVar19 != pUVar20) {
            pUVar17 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
            if (pUVar17 != (UClass *)0x0) {
              iVar13 = (int)pUVar17->_padding_;
              if ((*(int *)(lVar34 + 0x38) < iVar13) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar34 + 0x30) + (longlong)iVar13 * 8)
                  != &pUVar17->_padding_)) {
                bVar40 = false;
              }
              else {
                bVar40 = true;
              }
              if (bVar40) goto LAB_14e7e31d4;
            }
            pUVar17 = Z_Construct_UClass_UInterchangeBlueprintPipelineBase_NoRegister();
            if (pUVar17 != (UClass *)0x0) {
              iVar13 = (int)pUVar17->_padding_;
              if ((*(int *)(lVar34 + 0x38) < iVar13) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar34 + 0x30) + (longlong)iVar13 * 8)
                  != &pUVar17->_padding_)) {
                bVar40 = false;
              }
              else {
                bVar40 = true;
              }
              if (bVar40) goto LAB_14e7e31d4;
            }
            pUVar17 = Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister();
            if (pUVar17 != (UClass *)0x0) {
              iVar13 = (int)pUVar17->_padding_;
              if ((*(int *)(lVar34 + 0x38) < iVar13) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar34 + 0x30) + (longlong)iVar13 * 8)
                  != &pUVar17->_padding_)) {
                bVar40 = false;
              }
              else {
                bVar40 = true;
              }
              if (bVar40) goto LAB_14e7e31d4;
            }
            TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
            Emplace<UObject_*_const_&>
                      ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_c8
                       ,(UObject **)&local_628,(bool *)&local_608);
          }
LAB_14e7e31d4:
          uVar29 = (ulonglong)(uint)local_7e8.ArrayNum;
          FVar33.Data = FVar33.Data + 8;
        }
        pTVar21 = FReferencerFinder::GetAllReferencers
                            (&local_570,&local_7e8,
                             (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)
                             0x0,SkipInnerReferences);
        if (&local_7e8 != pTVar21) {
          if (local_7e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7e8.AllocatorInstance.Data);
          }
          local_7e8.AllocatorInstance.Data = (pTVar21->AllocatorInstance).Data;
          (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_7e8.ArrayNum = pTVar21->ArrayNum;
          local_7e8.ArrayMax = pTVar21->ArrayMax;
          pTVar21->ArrayNum = 0;
          pTVar21->ArrayMax = 0;
        }
        if (local_570.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_570.AllocatorInstance.Data);
        }
        uVar35 = local_c8._8_4_ - local_94;
      } while (local_768 != uVar35);
      if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
      }
      if (local_808._4_4_ < (int)uVar35) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar35,&local_810,(uint)local_808,(int *)((longlong)&local_808 + 4));
      }
      uVar35 = local_a0;
      uVar15 = 1;
      pUVar18 = pUVar39;
      uStack_67c = uVar38;
      if (local_a0 != 0) {
        puVar31 = (uint *)(local_c8 + 0x10);
        if (local_a8 != (uint *)0x0) {
          puVar31 = local_a8;
        }
        pUVar32 = pUVar39;
        uVar38 = 0;
        for (uVar36 = *puVar31; uVar36 == 0; uVar36 = puVar31[(int)uVar36]) {
          uVar36 = (int)pUVar18 + 1;
          pUVar18 = (UObject *)(ulonglong)uVar36;
          uVar38 = (int)pUVar32 + 0x20;
          pUVar32 = (UObject *)(ulonglong)uVar38;
          uStack_67c = local_a0;
          if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar36)
          goto LAB_14e7e331f;
        }
        uVar15 = -uVar36 & uVar36;
        uVar29 = (ulonglong)uVar15 * 2 + 1;
        lVar34 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar34 == 0; lVar34 = lVar34 + -1) {
          }
        }
        local_628._4_4_ = (int)lVar34;
        uStack_67c = local_628._4_4_ + -1 + uVar38;
        if ((int)local_a0 < (int)uStack_67c) {
          uStack_67c = local_a0;
        }
      }
LAB_14e7e331f:
      local_740 = (TMap<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>_>
                   *)local_c8;
      TStack_738.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
      local_670 = local_c8._8_4_ - local_94;
      uStack_680 = 0xffffffff;
      uStack_690 = CONCAT44(uVar15,(int)pUVar18);
      uVar15 = local_a0 & 0xffffffe0;
      uStack_674 = local_524;
      uStack_678 = uVar38;
      TStack_738._padding_ = uStack_690;
      iVar14 = (int)local_a0 >> 5;
      local_718 = CONCAT44(uStack_66c,local_670);
      bVar28 = (byte)local_a0;
      TStack_738.UnvisitedBitMask = 0xffffffff;
      TStack_738.CurrentBitIndex = uStack_67c;
      TStack_738.BaseBitIndex = uVar38;
      TStack_738._28_4_ = local_524;
      local_698 = local_740;
      pTStack_688 = TStack_738.Array;
      if (((int)local_a0 < 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar40)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar18 = local_6f0;
      if (uVar35 != local_a0) {
        puVar31 = (uint *)(local_c8 + 0x10);
        if (local_a8 != (uint *)0x0) {
          puVar31 = local_a8;
        }
        uVar38 = -1 << (bVar28 & 0x1f) & puVar31[iVar14];
        while (uVar38 == 0) {
          iVar14 = iVar14 + 1;
          uVar15 = uVar15 + 0x20;
          uVar35 = local_a0;
          if ((int)(((int)(local_a0 - 1) >> 0x1f & 0x1fU) + (local_a0 - 1)) >> 5 < iVar14)
          goto LAB_14e7e3460;
          uVar38 = puVar31[iVar14];
        }
        uVar29 = (ulonglong)(-uVar38 & uVar38) * 2 + 1;
        lVar34 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar34 == 0; lVar34 = lVar34 + -1) {
          }
        }
        local_620 = (int)lVar34;
        uVar35 = local_620 + -1 + uVar15;
        if ((int)local_a0 < (int)uVar35) {
          uVar35 = local_a0;
        }
      }
LAB_14e7e3460:
      while( true ) {
        pTVar3 = local_740;
        if (*(int *)&local_740->field_0x8 - *(int *)&local_740->field_0x34 != (int)local_718) {
          local_825 = 0;
          `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_825);
        }
        if (((TStack_738.CurrentBitIndex == uVar35) &&
            (TStack_738.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
           (pTVar3 == (TMap<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>_>
                       *)local_c8)) break;
        this_00 = *(UObjectBaseUtility **)
                   (*(longlong *)pTVar3 + (longlong)TStack_738.CurrentBitIndex * 0x10);
        pUVar17 = *(UClass **)(*(longlong *)&this_00->field_0x20 + 0x10);
        pUVar22 = Z_Construct_UClass_UPackage_NoRegister();
        if ((pUVar17 == pUVar22) && (this_00 != (UObjectBaseUtility *)pUVar18)) {
          pFVar23 = UObjectBaseUtility::GetFullName(this_00,&local_560,(UObject *)0x0,None);
          if ((pFVar23->Data).ArrayNum == 0) {
            pwVar30 = L"";
          }
          else {
            pwVar30 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
          }
          ::FName::FName(&local_7c0,pwVar30);
          if (((local_810.Data <= &local_7c0) &&
              (&local_7c0 < (FName *)(local_810.Data + (longlong)local_808._4_4_ * 8))) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar40)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = (uint)local_808;
          if ((uint)local_808 == local_808._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_810,(int *)((longlong)&local_808 + 4));
          }
          local_808 = CONCAT44(local_808._4_4_,iVar14 + 1);
          *(FName *)(local_810.Data + (longlong)iVar14 * 8) = local_7c0;
          if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_560.Data.AllocatorInstance.Data);
          }
        }
        TStack_738.UnvisitedBitMask = TStack_738.UnvisitedBitMask & ~TStack_738._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_738);
      }
      if (local_7e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e8.AllocatorInstance.Data);
      }
      local_80 = 0;
      if (local_88 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88);
      }
      TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_c8);
      if (local_778.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_778.AllocatorInstance.Data);
      }
      pFVar24 = ::FName::FName(&local_588,L"AssetRegistry");
      FVar5 = *pFVar24;
      this_01 = FModuleManager::Get();
      pIVar25 = FModuleManager::LoadModuleChecked(this_01,FVar5);
      pUVar19 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar18);
      lVar34 = pUVar19->_padding_;
      local_710.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_710.ArrayNum = 0;
      local_710.ArrayMax = 0;
      plVar26 = (longlong *)(**(code **)((longlong)*pIVar25 + 0x40))(pIVar25);
      pcVar6 = *(code **)(*plVar26 + 0xf0);
      UE::AssetRegistry::FDependencyQuery::FDependencyQuery(&local_78,Hard);
      (*pcVar6)(plVar26,lVar34,&local_710,1);
      if (local_78.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_78.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      local_700.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_700.ArrayNum = 0;
      local_700.ArrayMax = 0;
      plVar26 = (longlong *)(**(code **)((longlong)*pIVar25 + 0x40))(pIVar25);
      pcVar6 = *(code **)(*plVar26 + 0xf0);
      UE::AssetRegistry::FDependencyQuery::FDependencyQuery(&local_58,NotHard);
      (*pcVar6)(plVar26,lVar34);
      if (local_58.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_58.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      FVar33.Data = local_810.Data;
      lVar34 = (longlong)(int)(uint)local_808;
      local_7d8.Data = (FScriptContainerElement *)0x0;
      local_7d0 = (uint)local_808;
      if ((uint)local_808 == 0) {
        local_7cc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(uint)local_808,0,&local_7d8,(uint)local_808,&local_7cc);
        memcpy(local_7d8.Data,FVar33.Data,lVar34 << 3);
      }
      local_5f0 = &local_7d8;
      local_5e8 = pIVar25;
      `UInterchangeGenericAssetsPipeline::ShowConflictDialog'::__l26::<lambda_1>::operator()
                (&local_5f0,&local_710);
      `UInterchangeGenericAssetsPipeline::ShowConflictDialog'::__l26::<lambda_1>::operator()
                (&local_5f0,&local_700);
      uVar38 = local_7d0;
      uVar29 = (ulonglong)(int)local_7d0;
      pFVar24 = (FName *)(local_7d8.Data + uVar29 * 8);
      FVar33.Data = local_7d8.Data;
      while( true ) {
        if ((uint)uVar29 != uVar38) {
          local_824[0] = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_824);
        }
        if ((FName *)FVar33.Data == pFVar24) break;
        pFVar23 = ::operator_new(0x10);
        pUVar18 = pUVar39;
        if (pFVar23 != (FString *)0x0) {
          pUVar18 = (UObject *)::FName::ToString((FName *)FVar33.Data,pFVar23);
        }
        local_610.Object = (FString *)pUVar18;
        TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>(&local_760,&local_610);
        if (((local_800.Data <= &local_760) &&
            (&local_760 <
             (TSharedPtr<FString,1> *)(local_800.Data + (longlong)local_7f8._4_4_ * 0x10))) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar40)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar14 = (int)local_7f8;
        if ((int)local_7f8 == local_7f8._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_800,(int *)((longlong)&local_7f8 + 4));
        }
        local_7f8 = CONCAT44(local_7f8._4_4_,iVar14 + 1);
        *(FString **)&local_800.Data[(longlong)iVar14 * 0x10].field_0x0 = local_760.Object;
        *(TReferenceControllerBase<1> **)(local_800.Data + (longlong)iVar14 * 0x10 + 8) =
             local_760.SharedReferenceCount.ReferenceController;
        if (local_760.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_760.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_760.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_760.SharedReferenceCount.ReferenceController);
        uVar29 = (ulonglong)local_7d0;
        FVar33.Data = FVar33.Data + 8;
      }
      if ((FName *)local_7d8.Data != (FName *)0x0) {
        FMemory::Free(local_7d8.Data);
      }
      if (local_700.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_700.AllocatorInstance.Data);
      }
      if (local_710.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_710.AllocatorInstance.Data);
      }
      if ((FName *)local_810.Data != (FName *)0x0) {
        FMemory::Free(local_810.Data);
      }
    }
  }
  else if (pUVar18 != (UObject *)0x0) {
    pUVar18 = (UObject *)(**(code **)(*(longlong *)pUVar18 + 0x408))(pUVar18);
    goto LAB_14e7e3024;
  }
  pFVar27 = SInterchangeGenericAssetSkeletonConflictWidget::FArguments::FArguments(&local_2f0);
  FVar33.Data = local_820.Data;
  iVar14 = (int)local_818;
  local_798.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_798.ArrayNum = (int)local_818;
  if ((int)local_818 == 0) {
    local_798.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_818,0,&local_798.AllocatorInstance,(int)local_818,
               &local_798.ArrayMax);
    ConstructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
              (local_798.AllocatorInstance.Data,
               (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)FVar33.Data,iVar14
              );
  }
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  ::operator=(&pFVar27->_Joints,&local_798);
  DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
            ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
             local_798.AllocatorInstance.Data,local_798.ArrayNum);
  if ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
      local_798.AllocatorInstance.Data !=
      (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)0x0) {
    FMemory::Free(local_798.AllocatorInstance.Data);
  }
  FVar33.Data = local_800.Data;
  pFVar27->_ReimportObject = (this->SkeletonConflictData).ReimportObject;
  iVar14 = (int)local_7f8;
  local_7a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7a8.ArrayNum = (int)local_7f8;
  if ((int)local_7f8 == 0) {
    local_7a8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_7f8,0,&local_7a8.AllocatorInstance,(int)local_7f8,
               &local_7a8.ArrayMax);
    ConstructItems<TSharedPtr<FString,1>,TSharedPtr<FString,1>,int>
              (local_7a8.AllocatorInstance.Data,(TSharedPtr<FString,1> *)FVar33.Data,iVar14);
  }
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar27->_AssetReferencingSkeleton,&local_7a8);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)local_7a8.AllocatorInstance.Data,local_7a8.ArrayNum);
  if ((TSharedPtr<FString,1> *)local_7a8.AllocatorInstance.Data != (TSharedPtr<FString,1> *)0x0) {
    FMemory::Free(local_7a8.AllocatorInstance.Data);
  }
  FLLMScope::FLLMScope(&local_7c4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5f8,&local_5e0,true);
  TSlateDecl<SInterchangeGenericAssetSkeletonConflictWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SInterchangeGenericAssetSkeletonConflictWidget,RequiredArgs::T0RequiredArgs>
            (&local_6b0,"SInterchangeGenericAssetSkeletonConflictWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x4b6,local_7ef);
  FMemScope::~FMemScope(&local_5f8);
  FLLMScope::~FLLMScope(&local_7c4);
  pSVar9 = local_6b0._Widget.Object;
  if ((local_6b0._Widget.Object == (SInterchangeGenericAssetSkeletonConflictWidget *)0x0) &&
     (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar40)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_6b0._Widget.Object,(FSlateBaseNamedArgs *)pFVar27);
  SInterchangeGenericAssetSkeletonConflictWidget::Construct(local_6b0._Widget.Object,pFVar27);
  if ((local_6b0._Widget.Object == (SInterchangeGenericAssetSkeletonConflictWidget *)0x0) &&
     (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar40)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((local_6b0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)((local_6b0._Widget.Object)->_padding_ + 0x228))(local_6b0._Widget.Object);
    bVar28 = 0;
    if (cVar12 == '\0') goto LAB_14e7e3b3a;
  }
  bVar28 = 0x20;
LAB_14e7e3b3a:
  FVar8.ReferenceController = local_6b0._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_6b0._Widget.Object)->_padding_ =
       (byte)(local_6b0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_6b0._Widget.Object)->_padding_ =
       (byte)(local_6b0._Widget.Object)->_padding_ | bVar28;
  pbVar1 = (byte *)((longlong)&(local_6b0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_6b0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_6b0._Widget.Object = (SInterchangeGenericAssetSkeletonConflictWidget *)0x0;
  if ((pSVar9 == (SInterchangeGenericAssetSkeletonConflictWidget *)0x0) &&
     (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar40)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
            ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
             local_2f0._Joints.AllocatorInstance.Data,local_2f0._Joints.ArrayNum);
  if ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
      local_2f0._Joints.AllocatorInstance.Data !=
      (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)0x0) {
    FMemory::Free(local_2f0._Joints.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)local_2f0._AssetReferencingSkeleton.AllocatorInstance.Data,
             local_2f0._AssetReferencingSkeleton.ArrayNum);
  if ((TSharedPtr<FString,1> *)local_2f0._AssetReferencingSkeleton.AllocatorInstance.Data !=
      (TSharedPtr<FString,1> *)0x0) {
    FMemory::Free(local_2f0._AssetReferencingSkeleton.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2f0);
  local_598.Object = (SInterchangeBaseConflictWidget *)pSVar9;
  local_598.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
  local_550[0]._s_0.X = ___xmm_4082c000000000004084500000000000;
  local_550[0]._s_0.Y = _UNK_152f5d958;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::Interchange::PipelineHelper::ShowModalDialog
            (&local_598,&(this->SkeletonConflictData).DialogTitle,
             (TVector2<double> *)&local_550[0]._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  DestructItems<TSharedPtr<FString,1>,int>((TSharedPtr<FString,1> *)local_800.Data,(int)local_7f8);
  if ((TSharedPtr<FString,1> *)local_800.Data != (TSharedPtr<FString,1> *)0x0) {
    FMemory::Free(local_800.Data);
  }
  DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
            ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)local_820.Data,
             (int)local_818);
  if ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)local_820.Data ==
      (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)0x0) {
    return;
  }
  FMemory::Free(local_820.Data);
  return;
}

// StaticRegisterNativesUInterchangeGenericAssetsPipeline @ 14e7e45c0

void __cdecl
UInterchangeGenericAssetsPipeline::StaticRegisterNativesUInterchangeGenericAssetsPipeline(void)

{
  return;
}

// operator() @ 150599c50

bool __thiscall
`UInterchangeGenericAssetsPipeline::AddMetaData'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2674368391669610761>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2674368391669610761>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

