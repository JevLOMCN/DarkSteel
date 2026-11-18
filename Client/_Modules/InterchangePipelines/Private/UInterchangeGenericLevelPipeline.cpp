// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 26

// StaticClass @ 14e72e010

UClass * __cdecl UInterchangeGenericLevelPipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericLevelPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericLevelPipeline,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericLevelPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericLevelPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.InnerSingleton;
}

// UInterchangeGenericLevelPipeline @ 14e767460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInterchangeGenericLevelPipeline * __thiscall
UInterchangeGenericLevelPipeline::UInterchangeGenericLevelPipeline
          (UInterchangeGenericLevelPipeline *this,FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bForceReimportDeletedAssets = false;
  this->bDeleteMissingAssets = false;
  this->bUseHierarchicalISMComponents = false;
  this->bUsePhysicalInsteadOfStandardPerspectiveCamera = true;
  this->_padding_ = (longlong)&___7UInterchangeGenericLevelPipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  this->ReimportPropertyStrategy = ApplyNoProperties;
  this->SceneHierarchyType = CreateLevelActors;
  this->bDeleteMissingActors = false;
  this->bForceReimportDeletedActors = false;
  this->BaseNodeContainer = (UInterchangeBaseNodeContainer *)0x0;
  (this->Cached_ActiveJointUids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cached_ActiveJointUids).ArrayNum = 0;
  (this->Cached_ActiveJointUids).ArrayMax = 0;
  this->PreviewScene = (FPreviewScene *)0x0;
  return this;
}

// UInterchangeGenericLevelPipeline @ 14e7674d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInterchangeGenericLevelPipeline * __thiscall
UInterchangeGenericLevelPipeline::UInterchangeGenericLevelPipeline
          (UInterchangeGenericLevelPipeline *this,FObjectInitializer *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bForceReimportDeletedAssets = false;
  this->bDeleteMissingAssets = false;
  this->bUseHierarchicalISMComponents = false;
  this->bUsePhysicalInsteadOfStandardPerspectiveCamera = true;
  this->_padding_ = (longlong)&___7UInterchangeGenericLevelPipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  this->ReimportPropertyStrategy = ApplyNoProperties;
  this->SceneHierarchyType = CreateLevelActors;
  this->bDeleteMissingActors = false;
  this->bForceReimportDeletedActors = false;
  this->BaseNodeContainer = (UInterchangeBaseNodeContainer *)0x0;
  (this->Cached_ActiveJointUids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cached_ActiveJointUids).ArrayNum = 0;
  (this->Cached_ActiveJointUids).ArrayMax = 0;
  this->PreviewScene = (FPreviewScene *)0x0;
  return this;
}

// ~UInterchangeGenericLevelPipeline @ 14e76c0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::~UInterchangeGenericLevelPipeline
          (UInterchangeGenericLevelPipeline *this)

{
  FPreviewScene *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericLevelPipeline__6B_;
  pFVar1 = this->PreviewScene;
  if (pFVar1 != (FPreviewScene *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->PreviewScene = (FPreviewScene *)0x0;
  }
  DestructItems<FString,int>
            ((FString *)(this->Cached_ActiveJointUids).AllocatorInstance.Data,
             (this->Cached_ActiveJointUids).ArrayNum);
  pFVar2 = (this->Cached_ActiveJointUids).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// operator() @ 14e76da60

void __thiscall
`UInterchangeGenericLevelPipeline::CacheActiveJointUids'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeSkeletonFactoryNode *param_2)

{
  FAttributeKey *pFVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  EAttributeStorageResult EVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  longlong local_res18;
  FString local_98;
  FString local_88;
  code *local_78;
  longlong *local_70;
  void *local_68 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<FString,void> local_38;
  
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  pFVar5 = (FString *)(**(code **)(param_2->_padding_ + 0x2b0))(param_2,local_68);
  ::FString::ConcatFC(&local_88,pFVar5,L".GetRootJointID");
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (param_2->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = &param_2->Macro_CustomRootJointIDKey;
  this_00 = (FAttributeStorage *)param_2->_padding_;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar3) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>(this_00,&local_38,pFVar1);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_38);
    if (bVar3) {
      EVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get
                        (&local_38,&local_98);
      if ((EVar6 & Operation_Success) != None) {
        if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
        goto LAB_14e76db87;
      }
      ::FString::FString(&local_58,&pFVar1->Key);
      pFVar5 = ::FString::FString(&local_48,&local_88);
      UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar5,(FAttributeKey *)&local_58);
    }
    if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
LAB_14e76db87:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    lVar9 = *(longlong *)this;
    pFVar7 = (ForAnyElementType *)(lVar9 + 0x148);
    if ((pFVar7->Data <= (FScriptContainerElement *)&local_98) &&
       ((FScriptContainerElement *)&local_98 <
        pFVar7->Data + (longlong)*(int *)(lVar9 + 0x154) * 0x10)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)(lVar9 + 0x150);
    if (iVar4 == *(int *)(lVar9 + 0x154)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar7,(int *)(lVar9 + 0x154));
    }
    _Src.Data = local_98.Data.AllocatorInstance.Data;
    *(int *)(lVar9 + 0x150) = iVar4 + 1;
    pFVar8 = pFVar7->Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    lVar9 = (longlong)local_98.Data.ArrayNum;
    *(int *)(pFVar8 + 8) = local_98.Data.ArrayNum;
    if (local_98.Data.ArrayNum == 0) {
      *(int *)(pFVar8 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)pFVar8,local_98.Data.ArrayNum,
                 (int *)(pFVar8 + 0xc));
      memcpy(*(void **)pFVar8,_Src.Data,lVar9 * 2);
    }
    local_res18 = *(longlong *)this;
    local_70 = &local_res18;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<``UInterchangeGenericLevelPipeline::CacheActiveJointUids'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,UInterchangeBaseNode_const_*>
               ::Call;
    UInterchangeBaseNodeContainer::IterateNodeChildren
              (*(UInterchangeBaseNodeContainer **)(local_res18 + 0x140),&local_98,
               (TFunctionRef<void___cdecl(UInterchangeBaseNode_const_*)> *)&local_78);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14e76dd80

FString * __thiscall
`UInterchangeGenericLevelPipeline::CreateComponentFactoryNode'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString *pFVar2;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = UInterchangeBaseNode::GetParentUid
                     ((UInterchangeBaseNode *)**(undefined8 **)this,&local_18);
  bVar1 = 1 < (pFVar2->Data).ArrayNum;
  if (bVar1) {
    pFVar2 = UInterchangeBaseNode::GetParentUid
                       ((UInterchangeBaseNode *)**(undefined8 **)this,&local_38);
    pFVar2 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_48,pFVar2);
  }
  else {
    pFVar2 = ::FString::FString(&local_28,L"");
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar1) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (bVar1) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14e76feb0

void __thiscall
`UInterchangeGenericLevelPipeline::PopulateSceneNodesPreImport'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  UInterchangeBaseNodeContainer *this_00;
  void *pvVar3;
  code *pcVar4;
  EInterchangeNodeContainerType EVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  UInterchangeStaticMeshLodDataNode *this_01;
  FString *pFVar10;
  UInterchangeBaseNode *this_02;
  UInterchangeSkeletalMeshLodDataNode *this_03;
  longlong lVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res20 [8];
  UInterchangeBaseNode *local_f8;
  UInterchangeBaseNode *local_f0;
  FString local_e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  longlong local_98;
  longlong local_90;
  FString local_88;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  UInterchangeBaseNode *local_58;
  undefined1 local_50 [8];
  FString *local_48;
  UInterchangeBaseNode **local_40;
  FString local_38;
  
  EVar5 = UInterchangeBaseNode::GetNodeContainerType(param_2);
  uVar15 = 0;
  if (EVar5 == TranslatedScene) {
    if (param_2 == (UInterchangeBaseNode *)0x0) {
LAB_14e76ffd1:
      local_f8 = (UInterchangeBaseNode *)0x0;
      if (param_2 != (UInterchangeBaseNode *)0x0) {
        pUVar9 = Z_Construct_UClass_UInterchangeSceneComponentNode_NoRegister();
        iVar7 = (int)pUVar9->_padding_;
        if ((iVar7 <= *(int *)(param_2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar9->_padding_)) {
          pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
          local_f0 = param_2;
          if ((pFVar2->Data <= (FScriptContainerElement *)&local_f0) &&
             (((FScriptContainerElement *)&local_f0 <
               pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8 &&
              (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)))) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = *(int *)&pFVar2[1].Data;
          piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,pFVar2,piVar1);
          }
          *(int *)&pFVar2[1].Data = iVar7 + 1;
          *(UInterchangeBaseNode **)(pFVar2->Data + (longlong)iVar7 * 8) = local_f0;
          goto LAB_14e7700bd;
        }
      }
      local_f0 = (UInterchangeBaseNode *)0x0;
      goto LAB_14e7700b4;
    }
    pUVar9 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(param_2->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar9->_padding_)) goto LAB_14e76ffd1;
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    local_f8 = param_2;
    if (((pFVar2->Data <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 <
         pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    *(UInterchangeBaseNode **)(pFVar2->Data + (longlong)iVar7 * 8) = local_f8;
LAB_14e7700bd:
    pUVar9 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
    iVar7 = (int)pUVar9->_padding_;
    if ((iVar7 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar9->_padding_)) {
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      local_58 = param_2;
      UInterchangeMeshFactoryNode::GetLodDataUniqueIds
                ((UInterchangeMeshFactoryNode *)param_2,&local_c8);
      iVar7 = 0;
      if (local_c8.ArrayNum != 0) {
        this_00 = *(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x140);
        if ((local_c8.ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = (UInterchangeStaticMeshLodDataNode *)
                  UInterchangeBaseNodeContainer::GetFactoryNode
                            (this_00,(FString *)local_c8.AllocatorInstance.Data);
        if (this_01 != (UInterchangeStaticMeshLodDataNode *)0x0) {
          pUVar9 = Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister();
          iVar7 = (int)pUVar9->_padding_;
          if ((iVar7 <= *(int *)(this_01->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
              &pUVar9->_padding_)) {
            local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.ArrayNum = 0;
            local_d8.ArrayMax = 0;
            UInterchangeStaticMeshLodDataNode::GetMeshUids(this_01,&local_d8);
            iVar7 = 0;
            if (local_d8.ArrayNum != 0) {
              if ((local_d8.ArrayNum < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              ::FString::FString(&local_e8,(FString *)local_d8.AllocatorInstance.Data);
              while( true ) {
                pFVar10 = UInterchangeBaseNode::InvalidNodeUid(&local_38);
                iVar7 = (pFVar10->Data).ArrayNum;
                if (local_e8.Data.ArrayNum == iVar7) {
                  if (local_e8.Data.ArrayNum < 2) {
                    bVar6 = false;
                  }
                  else {
                    iVar7 = FGenericPlatformStricmp::Stricmp
                                      ((wchar_t *)local_e8.Data.AllocatorInstance.Data,
                                       (wchar_t *)(pFVar10->Data).AllocatorInstance.Data);
                    bVar6 = iVar7 != 0;
                  }
                }
                else {
                  bVar6 = local_e8.Data.ArrayNum + iVar7 != 1;
                }
                if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_38.Data.AllocatorInstance.Data);
                }
                if ((!bVar6) ||
                   (this_02 = UInterchangeBaseNodeContainer::GetNode
                                        (*(UInterchangeBaseNodeContainer **)
                                          (*(longlong *)this + 0x140),&local_e8),
                   this_02 == (UInterchangeBaseNode *)0x0)) goto LAB_14e770321;
                UInterchangeBaseNode::GetParentUid(this_02,&local_88);
                if (local_88.Data.ArrayNum < 2) break;
                local_48 = &local_88;
                local_40 = &local_58;
                TSet<TTuple<FString,UInterchangeStaticMeshFactoryNode_const_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeStaticMeshFactoryNode_const_*,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<FString_const_&,UInterchangeStaticMeshFactoryNode_const_*_const_&>_>
                          (*(TSet<TTuple<FString,UInterchangeStaticMeshFactoryNode_const_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeStaticMeshFactoryNode_const_*,0>,FDefaultSetAllocator>
                             **)((longlong)this + 0x18),
                           (TPairInitializer<FString_const_&,UInterchangeStaticMeshFactoryNode_const_*_const_&>
                            *)local_50,(bool *)&local_48);
                iVar7 = local_88.Data.ArrayNum;
                FVar12.Data = local_88.Data.AllocatorInstance.Data;
                lVar14 = (longlong)local_88.Data.ArrayNum;
                local_e8.Data.ArrayNum = local_88.Data.ArrayNum;
                if ((local_88.Data.ArrayNum == 0) && (local_e8.Data.ArrayMax == 0)) {
                  local_e8.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_88.Data.ArrayNum,local_e8.Data.ArrayMax,
                             (ForAnyElementType *)&local_e8,local_88.Data.ArrayNum,
                             &local_e8.Data.ArrayMax);
                  if (iVar7 != 0) {
                    memcpy(local_e8.Data.AllocatorInstance.Data,FVar12.Data,lVar14 * 2);
                  }
                }
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
LAB_14e770321:
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              iVar7 = local_d8.ArrayNum;
            }
            DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,iVar7);
            if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.AllocatorInstance.Data);
            }
          }
        }
        iVar7 = local_c8.ArrayNum;
      }
      DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,iVar7);
      FVar12.Data = local_c8.AllocatorInstance.Data;
      goto LAB_14e77061b;
    }
  }
  else {
    if (EVar5 != FactoryData) {
      return;
    }
LAB_14e7700b4:
    if (param_2 != (UInterchangeBaseNode *)0x0) goto LAB_14e7700bd;
  }
  local_58 = (UInterchangeBaseNode *)0x0;
  if (param_2 == (UInterchangeBaseNode *)0x0) {
    return;
  }
  pUVar9 = Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister();
  iVar7 = (int)pUVar9->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar7) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar7 * 8)
      != &pUVar9->_padding_) {
    return;
  }
  iVar7 = UInterchangeMeshFactoryNode::GetLodDataCount((UInterchangeMeshFactoryNode *)param_2);
  lVar14 = (longlong)iVar7;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  UInterchangeMeshFactoryNode::GetLodDataUniqueIds((UInterchangeMeshFactoryNode *)param_2,&local_a8)
  ;
  local_90 = lVar14;
  if (0 < iVar7) {
    local_98 = 0;
    do {
      lVar13 = local_98;
      uVar8 = 0;
      if ((int)uVar15 < local_a8.ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      local_90 = lVar14;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = *(int *)(local_a8.AllocatorInstance.Data + lVar13 + 8);
      lVar11 = (longlong)local_68.Data.ArrayNum;
      pvVar3 = *(void **)(local_a8.AllocatorInstance.Data + lVar13);
      if (local_68.Data.ArrayNum == 0) {
        local_68.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                   local_68.Data.ArrayNum,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,pvVar3,lVar11 * 2);
      }
      this_03 = (UInterchangeSkeletalMeshLodDataNode *)
                UInterchangeBaseNodeContainer::GetNode
                          (*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x140),&local_68)
      ;
      if (this_03 != (UInterchangeSkeletalMeshLodDataNode *)0x0) {
        pUVar9 = Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister();
        iVar7 = (int)pUVar9->_padding_;
        if ((iVar7 <= *(int *)(this_03->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar9->_padding_)) {
          local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.ArrayNum = 0;
          local_b8.ArrayMax = 0;
          UInterchangeSkeletalMeshLodDataNode::GetMeshUids(this_03,&local_b8);
          iVar7 = local_b8.ArrayNum;
          pFVar16 = local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 0x10;
          FVar12.Data = local_b8.AllocatorInstance.Data;
          while( true ) {
            if (local_b8.ArrayNum != iVar7) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res20);
            }
            if (FVar12.Data == pFVar16) break;
            local_70 = *(int *)(FVar12.Data + 8);
            lVar14 = (longlong)local_70;
            pvVar3 = *(void **)FVar12.Data;
            local_78.Data = (FScriptContainerElement *)0x0;
            if (local_70 == 0) {
              local_6c = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_70,0,&local_78,local_70,&local_6c);
              memcpy(local_78.Data,pvVar3,lVar14 * 2);
            }
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
                        ((longlong)this + 0x20),(FString *)(local_50 + 4),(bool *)&local_78);
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data);
            }
            FVar12.Data = FVar12.Data + 0x10;
          }
          DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
          lVar13 = local_98;
          lVar14 = local_90;
          if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
            lVar13 = local_98;
            lVar14 = local_90;
          }
        }
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_98 = lVar13 + 0x10;
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    local_90 = 0;
  }
  DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  FVar12.Data = local_a8.AllocatorInstance.Data;
LAB_14e77061b:
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return;
}

// operator() @ 14e773f20

void __thiscall
`UInterchangeGenericLevelPipeline::ExecutePipeline'::__l46::<lambda_2>::operator()
          (void *this,UInterchangeBaseNode *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UInterchangeBaseNode *local_18 [2];
  
  if (param_1 != (UInterchangeBaseNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if (((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
         &pUVar6->_padding_)) &&
       ((UInterchangeBaseNode *)**(longlong **)((longlong)this + 8) != param_1)) {
      pFVar2 = *(ForAnyElementType **)this;
      local_18[0] = param_1;
      if (((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(UInterchangeBaseNode **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
      return;
    }
  }
  return;
}

// operator() @ 14e774ea0

UInterchangeSceneNode * __thiscall
`UInterchangeGenericLevelPipeline::ExecutePipeline'::__l2::<lambda_3>::operator()
          (void *this,UInterchangeSceneNode *param_1)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  void *_Src;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  UInterchangeSceneNode *pUVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  longlong *local_a0;
  int iStack_98;
  uint uStack_94;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  plVar5 = *(longlong **)this;
  iStack_98 = 0;
  iVar3 = (int)plVar5[5];
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar5 + 2);
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar3 != 0) {
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar5[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar5[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar14 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14e774f3d;
      uVar14 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uStack_94 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_84 = (int)lVar11 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_14e774f3d:
  uVar14 = *(uint *)(plVar5 + 5);
  uVar16 = uVar14 & 0xffffffe0;
  iStack_78 = (int)plVar5[1] - *(int *)((longlong)plVar5 + 0x34);
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = plVar5;
  local_90 = pTVar2;
  iStack_7c = iStack_84;
  local_70 = plVar5;
  TStack_68.Array = pTVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pUVar9 = (UInterchangeSceneNode *)(*pcVar6)();
    return pUVar9;
  }
  uVar4 = *(uint *)(plVar5 + 5);
  if (uVar14 != uVar4) {
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar5[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar5[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e775040;
      uVar14 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14e775040:
  while( true ) {
    plVar7 = local_70;
    if ((int)local_70[1] - *(int *)((longlong)local_70 + 0x34) != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<UInterchangeSceneNode_const_*,TArray<UInterchangeSceneNode_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar14) && (TStack_68.Array == pTVar2)) && (plVar7 == plVar5)
       ) break;
    puVar12 = (undefined8 *)((longlong)TStack_68.CurrentBitIndex * 0x20 + *plVar7);
    pUVar9 = (UInterchangeSceneNode *)*puVar12;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = *(int *)(puVar12 + 2);
    lVar11 = (longlong)local_a8;
    _Src = (void *)puVar12[1];
    if (local_a8 == 0) {
      local_a4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_a8,0,&local_b0,local_a8,&local_a4);
      memcpy(local_b0.Data,_Src,lVar11 << 3);
    }
    for (FVar10.Data = local_b0.Data; FVar10.Data != local_b0.Data + (longlong)local_a8 * 8;
        FVar10.Data = FVar10.Data + 8) {
      if (*(UInterchangeSceneNode **)FVar10.Data == param_1) {
        if (local_b0.Data == (FScriptContainerElement *)0x0) {
          return pUVar9;
        }
        FMemory::Free(local_b0.Data);
        return pUVar9;
      }
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return (UInterchangeSceneNode *)0x0;
}

// operator() @ 14e776160

void __thiscall
`UInterchangeGenericLevelPipeline::ExecutePipeline'::__l2::<lambda_4>::operator()
          (void *this,FString *param_1,UInterchangeSceneVariantSetsNode *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UInterchangeSceneVariantSetsNode *local_res18 [2];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res18[0] = param_2;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UInterchangeSceneVariantSetsNode **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res18[0];
  return;
}

// AdjustSettingsForContext @ 14e780c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::AdjustSettingsForContext
          (UInterchangeGenericLevelPipeline *this,FInterchangePipelineContextParams *param_1)

{
  byte *pbVar1;
  
  UInterchangePipelineBase::AdjustSettingsForContext((UInterchangePipelineBase *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | (param_1->ReimportAsset).field0_0x0.DebugPtr != (UObject *)0x0;
  return;
}

// CacheActiveJointUids @ 14e782210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::CacheActiveJointUids(UInterchangeGenericLevelPipeline *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UInterchangeGenericLevelPipeline *local_res8;
  code *local_18;
  UInterchangeGenericLevelPipeline **local_10;
  
  piVar1 = &(this->Cached_ActiveJointUids).ArrayMax;
  pFVar3 = (this->Cached_ActiveJointUids).AllocatorInstance.Data;
  iVar2 = (this->Cached_ActiveJointUids).ArrayNum;
  if ((this->Cached_ActiveJointUids).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->Cached_ActiveJointUids).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Cached_ActiveJointUids).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->Cached_ActiveJointUids).ArrayNum = 0;
  }
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UInterchangeGenericLevelPipeline::CacheActiveJointUids'::__l2::<lambda_1>,void,FString_const_&,UInterchangeSkeletonFactoryNode_*>
             ::Call;
  local_res8 = this;
  UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeSkeletonFactoryNode>
            (this->BaseNodeContainer,
             (TFunctionRef<void___cdecl(FString_const_&,UInterchangeSkeletonFactoryNode_*)> *)
             &local_18);
  return;
}

// CanExecuteOnAnyThread @ 14e782710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UInterchangeGenericLevelPipeline::CanExecuteOnAnyThread
          (UInterchangeGenericLevelPipeline *this,EInterchangePipelineTask param_1)

{
  return true;
}

// CreateActorFactoryNode @ 14e7905e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeActorFactoryNode * __thiscall
UInterchangeGenericLevelPipeline::CreateActorFactoryNode
          (UInterchangeGenericLevelPipeline *this,UInterchangeSceneNode *param_1,
          UInterchangeBaseNode *param_2)

{
  int iVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  code *pcVar3;
  bool bVar4;
  UInterchangeActorFactoryNode *pUVar5;
  UClass *pUVar6;
  UInterchangePhysicalCameraFactoryNode *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_628 [32];
  EInterchangeCameraProjectionType local_5e8 [8];
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined1 local_528 [128];
  undefined1 local_4a8 [128];
  undefined1 local_428 [128];
  undefined1 local_3a8 [128];
  undefined1 local_328 [128];
  undefined1 local_2a8 [128];
  undefined1 local_228 [128];
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_628;
  if (this->BaseNodeContainer == (UInterchangeBaseNodeContainer *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<336199233793164122>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericScenesPipeline.cpp"
                       ,0x35a,"BaseNodeContainer");
    if (!bVar4) {
      return (UInterchangeActorFactoryNode *)0x0;
    }
    pcVar3 = (code *)swi(3);
    pUVar5 = (UInterchangeActorFactoryNode *)(*pcVar3)();
    return pUVar5;
  }
  if (param_2 != (UInterchangeBaseNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangePhysicalCameraNode_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      local_5e0 = 0;
      pUVar7 = NewObject<UInterchangePhysicalCameraFactoryNode>
                         ((UObject *)this->BaseNodeContainer,(FName)0x0,RF_NoFlags,(UObject *)0x0,
                          false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      return (UInterchangeActorFactoryNode *)pUVar7;
    }
    pUVar6 = Z_Construct_UClass_UInterchangeStandardCameraNode_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      if (this->bUsePhysicalInsteadOfStandardPerspectiveCamera != false) {
        pUVar6 = Z_Construct_UClass_UInterchangeStandardCameraNode_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar6->_padding_)) {
          local_5e8[0] = Perspective;
          bVar4 = UInterchangeStandardCameraNode::GetCustomProjectionMode
                            ((UInterchangeStandardCameraNode *)param_2,local_5e8);
          if ((bVar4) && (local_5e8[0] == Perspective)) {
            local_5d8 = 0;
            pUVar7 = NewObject<UInterchangePhysicalCameraFactoryNode>
                               ((UObject *)this->BaseNodeContainer,(FName)0x0,RF_NoFlags,
                                (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
            return (UInterchangeActorFactoryNode *)pUVar7;
          }
        }
      }
      pUVar2 = this->BaseNodeContainer;
      local_5d0 = 0;
      local_5c8 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_528,pUVar6);
      local_528._48_8_ = (FObjectInstancingGraph *)0x0;
      local_528._56_8_ = (UPackage *)0x0;
      local_528._16_4_ = 0;
      local_528._20_4_ = 0;
      local_528._24_4_ = RF_NoFlags;
      local_528._40_8_ = (UObject *)0x0;
      local_528[0x20] = false;
      local_528._8_8_ = pUVar2;
      pUVar5 = (UInterchangeActorFactoryNode *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_528);
      if (local_528._64_8_ == 0) {
        return pUVar5;
      }
      plVar8 = (longlong *)(local_528 + 0x50);
      goto LAB_14e790daa;
    }
    pUVar6 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      pUVar2 = this->BaseNodeContainer;
      local_5c0 = 0;
      local_5b8 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_4a8,pUVar6);
      local_4a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_4a8._56_8_ = (UPackage *)0x0;
      local_4a8._16_4_ = 0;
      local_4a8._20_4_ = 0;
      local_4a8._24_4_ = RF_NoFlags;
      local_4a8._40_8_ = (UObject *)0x0;
      local_4a8[0x20] = false;
      local_4a8._8_8_ = pUVar2;
      pUVar5 = (UInterchangeActorFactoryNode *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_4a8);
      if (local_4a8._64_8_ == 0) {
        return pUVar5;
      }
      plVar8 = (longlong *)(local_4a8 + 0x50);
      local_528._104_8_ = local_4a8._104_8_;
      goto LAB_14e790daa;
    }
    bVar4 = UObjectBaseUtility::IsA<UInterchangeSpotLightNode>((UObjectBaseUtility *)param_2);
    if (bVar4) {
      pUVar2 = this->BaseNodeContainer;
      local_5b0 = 0;
      local_5a8 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UInterchangeSpotLightFactoryNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_428,pUVar6);
      local_428._48_8_ = (FObjectInstancingGraph *)0x0;
      local_428._56_8_ = (UPackage *)0x0;
      local_428._16_4_ = 0;
      local_428._20_4_ = 0;
      local_428._24_4_ = RF_NoFlags;
      local_428._40_8_ = (UObject *)0x0;
      local_428[0x20] = false;
      local_428._8_8_ = pUVar2;
      pUVar5 = (UInterchangeActorFactoryNode *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_428);
      if (local_428._64_8_ == 0) {
        return pUVar5;
      }
      plVar8 = (longlong *)(local_428 + 0x50);
      local_528._104_8_ = local_428._104_8_;
      goto LAB_14e790daa;
    }
    bVar4 = UObjectBaseUtility::IsA<UInterchangePointLightNode>((UObjectBaseUtility *)param_2);
    if (bVar4) {
      pUVar2 = this->BaseNodeContainer;
      local_5a0 = 0;
      local_598 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UInterchangePointLightFactoryNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_3a8,pUVar6);
      local_3a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_3a8._56_8_ = (UPackage *)0x0;
      local_3a8._16_4_ = 0;
      local_3a8._20_4_ = 0;
      local_3a8._24_4_ = RF_NoFlags;
      local_3a8._40_8_ = (UObject *)0x0;
      local_3a8[0x20] = false;
      local_3a8._8_8_ = pUVar2;
      pUVar5 = (UInterchangeActorFactoryNode *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3a8);
      if (local_3a8._64_8_ == 0) {
        return pUVar5;
      }
      plVar8 = (longlong *)(local_3a8 + 0x50);
      local_528._104_8_ = local_3a8._104_8_;
      goto LAB_14e790daa;
    }
    bVar4 = UObjectBaseUtility::IsA<UInterchangeRectLightNode>((UObjectBaseUtility *)param_2);
    if (bVar4) {
      pUVar2 = this->BaseNodeContainer;
      local_590 = 0;
      local_588 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UInterchangeRectLightFactoryNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_328,pUVar6);
      local_328._48_8_ = (FObjectInstancingGraph *)0x0;
      local_328._56_8_ = (UPackage *)0x0;
      local_328._16_4_ = 0;
      local_328._20_4_ = 0;
      local_328._24_4_ = RF_NoFlags;
      local_328._40_8_ = (UObject *)0x0;
      local_328[0x20] = false;
      local_328._8_8_ = pUVar2;
      pUVar5 = (UInterchangeActorFactoryNode *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_328);
      if (local_328._64_8_ == 0) {
        return pUVar5;
      }
      plVar8 = (longlong *)(local_328 + 0x50);
      local_528._104_8_ = local_328._104_8_;
      goto LAB_14e790daa;
    }
    bVar4 = UObjectBaseUtility::IsA<UInterchangeDirectionalLightNode>((UObjectBaseUtility *)param_2)
    ;
    if (bVar4) {
      pUVar2 = this->BaseNodeContainer;
      local_580 = 0;
      local_578 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_2a8,pUVar6);
      local_2a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_2a8._56_8_ = (UPackage *)0x0;
      local_2a8._16_4_ = 0;
      local_2a8._20_4_ = 0;
      local_2a8._24_4_ = RF_NoFlags;
      local_2a8._40_8_ = (UObject *)0x0;
      local_2a8[0x20] = false;
      local_2a8._8_8_ = pUVar2;
      pUVar5 = (UInterchangeActorFactoryNode *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2a8);
      if (local_2a8._64_8_ == 0) {
        return pUVar5;
      }
      plVar8 = (longlong *)(local_2a8 + 0x50);
      local_528._104_8_ = local_2a8._104_8_;
      goto LAB_14e790daa;
    }
    bVar4 = UObjectBaseUtility::IsA<UInterchangeSkyLightNode>((UObjectBaseUtility *)param_2);
    if (bVar4) {
      pUVar2 = this->BaseNodeContainer;
      local_570 = 0;
      local_568 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UInterchangeSkyLightFactoryNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_228,pUVar6);
      local_228._48_8_ = (FObjectInstancingGraph *)0x0;
      local_228._56_8_ = (UPackage *)0x0;
      local_228._16_4_ = 0;
      local_228._20_4_ = 0;
      local_228._24_4_ = RF_NoFlags;
      local_228._40_8_ = (UObject *)0x0;
      local_228[0x20] = false;
      local_228._8_8_ = pUVar2;
      pUVar5 = (UInterchangeActorFactoryNode *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_228);
      if (local_228._64_8_ == 0) {
        return pUVar5;
      }
      plVar8 = (longlong *)(local_228 + 0x50);
      local_528._104_8_ = local_228._104_8_;
      goto LAB_14e790daa;
    }
    bVar4 = UObjectBaseUtility::IsA<UInterchangeDecalNode>((UObjectBaseUtility *)param_2);
    if (bVar4) {
      pUVar2 = this->BaseNodeContainer;
      local_560 = 0;
      local_558 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UInterchangeDecalActorFactoryNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1a8,pUVar6);
      local_1a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_1a8._56_8_ = (UPackage *)0x0;
      local_1a8._16_4_ = 0;
      local_1a8._20_4_ = 0;
      local_1a8._24_4_ = RF_NoFlags;
      local_1a8._40_8_ = (UObject *)0x0;
      local_1a8[0x20] = false;
      local_1a8._8_8_ = pUVar2;
      pUVar5 = (UInterchangeActorFactoryNode *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
      if (local_1a8._64_8_ == 0) {
        return pUVar5;
      }
      plVar8 = (longlong *)(local_1a8 + 0x50);
      local_528._104_8_ = local_1a8._104_8_;
      goto LAB_14e790daa;
    }
    bVar4 = UObjectBaseUtility::IsA<UInterchangeVolumeNode>((UObjectBaseUtility *)param_2);
    if (bVar4) {
      pUVar2 = this->BaseNodeContainer;
      local_550 = 0;
      local_548 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UInterchangeHeterogeneousVolumeActorFactoryNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_128,pUVar6);
      local_128._48_8_ = (FObjectInstancingGraph *)0x0;
      local_128._56_8_ = (UPackage *)0x0;
      local_128._16_4_ = 0;
      local_128._20_4_ = 0;
      local_128._24_4_ = RF_NoFlags;
      local_128._40_8_ = (UObject *)0x0;
      local_128[0x20] = false;
      local_128._8_8_ = pUVar2;
      pUVar5 = (UInterchangeActorFactoryNode *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
      if (local_128._64_8_ == 0) {
        return pUVar5;
      }
      plVar8 = (longlong *)(local_128 + 0x50);
      local_528._104_8_ = local_128._104_8_;
      goto LAB_14e790daa;
    }
  }
  pUVar2 = this->BaseNodeContainer;
  local_540 = 0;
  local_538 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UInterchangeActorFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar2;
  pUVar5 = (UInterchangeActorFactoryNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ == 0) {
    return pUVar5;
  }
  plVar8 = (longlong *)(local_a8 + 0x50);
  local_528._104_8_ = local_a8._104_8_;
LAB_14e790daa:
  if ((longlong *)local_528._104_8_ != (longlong *)0x0) {
    plVar8 = (longlong *)local_528._104_8_;
  }
  (**(code **)(*plVar8 + 0x10))();
  return pUVar5;
}

// CreateComponentFactoryNode @ 14e7931c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::CreateComponentFactoryNode
          (UInterchangeGenericLevelPipeline *this,UInterchangeSceneComponentNode *param_1)

{
  int iVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  UInterchangeInstancedStaticMeshComponentNode *this_00;
  bool bVar3;
  FString *pFVar4;
  UClass *pUVar5;
  UInterchangeInstancedStaticMeshComponentFactoryNode *this_01;
  FString *pFVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_238 [32];
  bool local_208 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_200;
  UInterchangeInstancedStaticMeshComponentNode *local_1f0;
  undefined1 local_1e8 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  undefined1 local_198 [128];
  undefined1 local_118 [128];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)&local_1f0;
  local_1f0 = (UInterchangeInstancedStaticMeshComponentNode *)param_1;
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,(FString *)&local_1e0);
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_1b0,pFVar4);
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  this_00 = local_1f0;
  if (local_1f0 != (UInterchangeInstancedStaticMeshComponentNode *)0x0) {
    pUVar5 = Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pUVar2 = this->BaseNodeContainer;
      local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_198,pUVar5);
      local_198._48_8_ = (FObjectInstancingGraph *)0x0;
      local_198._56_8_ = (UPackage *)0x0;
      local_198._16_4_ = 0;
      local_198._20_4_ = 0;
      local_198._24_4_ = RF_NoFlags;
      local_198._40_8_ = (UObject *)0x0;
      local_198[0x20] = false;
      local_198._8_8_ = pUVar2;
      this_01 = (UInterchangeInstancedStaticMeshComponentFactoryNode *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_198);
      if (local_198._64_8_ != 0) {
        plVar8 = (longlong *)(local_198 + 0x50);
        if ((longlong *)local_198._104_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_198._104_8_;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      pUVar2 = this->BaseNodeContainer;
      pFVar4 = `UInterchangeGenericLevelPipeline::CreateComponentFactoryNode'::__l2::<lambda_1>::
               operator()(&local_200,&local_1c0);
      pFVar6 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)local_1f0,&local_1d0);
      UInterchangeBaseNodeContainer::SetupNode
                (pUVar2,(UInterchangeBaseNode *)this_01,&local_1b0,pFVar6,FactoryData,pFVar4);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                ((UInterchangeBaseNode *)this_00,(UInterchangeBaseNode *)this_01,false);
      local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.ArrayNum = 0;
      local_200.ArrayMax = 0;
      bVar3 = UInterchangeInstancedStaticMeshComponentNode::GetCustomInstancedAssetUid
                        (this_00,(FString *)&local_200);
      if (bVar3) {
        pFVar4 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_1c0,(FString *)&local_200);
        UInterchangeInstancedStaticMeshComponentFactoryNode::SetCustomInstancedAssetUid
                  (this_01,pFVar4);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
      }
      if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.AllocatorInstance.Data);
      }
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.ArrayNum = 0;
      local_1e0.ArrayMax = 0;
      UInterchangeInstancedStaticMeshComponentNode::GetInstanceTransforms(this_00,&local_1e0);
      UInterchangeInstancedStaticMeshComponentFactoryNode::AddInstanceTransforms(this_01,&local_1e0)
      ;
      UInterchangeInstancedStaticMeshComponentFactoryNode::SetCustomHierarchicalISM
                (this_01,&this->bUseHierarchicalISMComponents);
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      goto LAB_14e7934f0;
    }
  }
  pUVar2 = this->BaseNodeContainer;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UInterchangeSceneComponentFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar5);
  local_118._48_8_ = (FObjectInstancingGraph *)0x0;
  local_118._56_8_ = (UPackage *)0x0;
  local_118._16_4_ = 0;
  local_118._20_4_ = 0;
  local_118._24_4_ = RF_NoFlags;
  local_118._40_8_ = (UObject *)0x0;
  local_118[0x20] = false;
  local_118._8_8_ = pUVar2;
  this_01 = (UInterchangeInstancedStaticMeshComponentFactoryNode *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar8 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pUVar2 = this->BaseNodeContainer;
  pFVar4 = `UInterchangeGenericLevelPipeline::CreateComponentFactoryNode'::__l2::<lambda_1>::
           operator()(&local_200,(FString *)&local_1e0);
  pFVar6 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)local_1f0,&local_1c0);
  UInterchangeBaseNodeContainer::SetupNode
            (pUVar2,(UInterchangeBaseNode *)this_01,&local_1b0,pFVar6,FactoryData,pFVar4);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
            ((UInterchangeBaseNode *)local_1f0,(UInterchangeBaseNode *)this_01,false);
LAB_14e7934f0:
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_98.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_98.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  bVar3 = UInterchangeSceneComponentNode::GetCustomLocalTransform
                    ((UInterchangeSceneComponentNode *)local_1f0,&local_98);
  if (bVar3) {
    UInterchangeSceneComponentFactoryNode::SetCustomLocalTransform
              ((UInterchangeSceneComponentFactoryNode *)this_01,&local_98);
  }
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  UInterchangeSceneComponentNode::GetComponentUids
            ((UInterchangeSceneComponentNode *)local_1f0,&local_200);
  iVar1 = local_200.ArrayNum;
  uVar7 = (ulonglong)local_200.ArrayNum;
  pFVar10 = local_200.AllocatorInstance.Data + uVar7 * 0x10;
  FVar9.Data = local_200.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1e8);
    }
    if (FVar9.Data == pFVar10) break;
    UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_1d0,(FString *)FVar9.Data);
    UInterchangeSceneComponentFactoryNode::AddComponentUid
              ((UInterchangeSceneComponentFactoryNode *)this_01,&local_1d0);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    uVar7 = local_200._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
  }
  local_208[0] = true;
  bVar3 = UInterchangeSceneComponentNode::GetCustomComponentVisibility
                    ((UInterchangeSceneComponentNode *)local_1f0,local_208);
  if (bVar3) {
    UInterchangeSceneComponentFactoryNode::SetCustomComponentVisibility
              ((UInterchangeSceneComponentFactoryNode *)this_01,local_208);
  }
  DestructItems<FString,int>((FString *)local_200.AllocatorInstance.Data,local_200.ArrayNum);
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  return;
}

// ExecutePipeline @ 14e7a53c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::ExecutePipeline
          (UInterchangeGenericLevelPipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  int iVar4;
  UInterchangeBaseNodeContainer *this_00;
  UInterchangeSceneNode *this_01;
  code *pcVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UInterchangeManager *this_02;
  UInterchangeEditorUtilitiesBase *pUVar10;
  UInterchangeCommonPipelineDataFactoryNode *this_03;
  FString *pFVar11;
  longlong lVar12;
  UInterchangeBaseNode *pUVar13;
  UClass *pUVar14;
  UInterchangeSceneNode *pUVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ForElementType<FSetElementId> FVar20;
  wchar_t *pwVar21;
  undefined8 *puVar22;
  ForAnyElementType FVar23;
  longlong *plVar24;
  UInterchangeGenericLevelPipeline *pUVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  UInterchangeBaseNode *pUVar28;
  longlong lVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  undefined1 auStackY_348 [32];
  undefined1 local_318;
  undefined1 local_317 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_310;
  UInterchangeGenericLevelPipeline *local_300;
  undefined1 local_2f8;
  undefined1 local_2f7 [7];
  UInterchangeBaseNode *local_2f0;
  undefined8 local_2e8;
  UInterchangeSceneNode *local_2e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2d8;
  int local_2c8 [2];
  UInterchangeBaseNode *local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  undefined8 *local_2a8;
  ulonglong local_2a0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_298;
  UInterchangeGenericLevelPipeline *local_288;
  UInterchangeGenericLevelPipeline *local_280;
  UInterchangeSceneNode **local_278;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_270;
  TSet<TTuple<UInterchangeSceneNode_const_*,TArray<UInterchangeSceneNode_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UInterchangeSceneNode_const_*,TArray<UInterchangeSceneNode_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_268;
  longlong **local_260;
  UInterchangeBaseNodeContainer *local_258;
  longlong local_250;
  UInterchangeSceneNode **local_248;
  code *local_240;
  UInterchangeGenericLevelPipeline **local_238;
  code *local_230;
  UInterchangeGenericLevelPipeline **local_228;
  code *local_220;
  longlong *local_218;
  FString local_210;
  code *local_200;
  longlong ***local_1f8;
  UInterchangeSceneNode *local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  TSet<TTuple<UInterchangeSceneNode_const_*,TArray<UInterchangeSceneNode_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UInterchangeSceneNode_const_*,TArray<UInterchangeSceneNode_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_198;
  TSet<TTuple<FString,UInterchangeStaticMeshFactoryNode_const_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeStaticMeshFactoryNode_const_*,0>,FDefaultSetAllocator>
  local_148;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_f8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_300 = this;
  local_258 = param_1;
  if (param_1 == (UInterchangeBaseNodeContainer *)0x0) {
    if (2 < (byte)LogInterchangePipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
    }
  }
  else {
    this_02 = UInterchangeManager::GetInterchangeManager();
    pUVar10 = UInterchangeManager::GetEditorUtilities(this_02);
    if (pUVar10 != (UInterchangeEditorUtilitiesBase *)0x0) {
      (**(code **)(*(longlong *)pUVar10 + 0x2c0))(pUVar10);
    }
    local_238 = &local_288;
    this->BaseNodeContainer = param_1;
    local_240 = UE::Core::Private::Function::
                TFunctionRefCaller<`UInterchangeGenericLevelPipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
                ::Call;
    local_288 = this;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeFactoryBaseNode>
              (param_1,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeFactoryBaseNode_*)> *)
                       &local_240);
    local_a8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_a8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_a8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_a8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    this_03 = UInterchangeCommonPipelineDataFactoryNode::GetUniqueInstance(this->BaseNodeContainer);
    if (this_03 != (UInterchangeCommonPipelineDataFactoryNode *)0x0) {
      UInterchangeCommonPipelineDataFactoryNode::GetCustomGlobalOffsetTransform(this_03,&local_a8);
    }
    local_148.Elements._44_4_ = 0x80;
    local_2f0 = (UInterchangeBaseNode *)0x0;
    local_2e8 = 0;
    local_2a8 = (undefined8 *)0x0;
    local_2a0 = 0;
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    local_f8.Elements._0_8_ = 0;
    local_f8.Elements._8_8_ = 0;
    local_f8.Elements._32_8_ = 0;
    local_f8.Elements._40_4_ = 0;
    local_f8.Elements._52_4_ = 0;
    local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_f8.HashSize = 0;
    local_148.Elements._48_4_ = 0xffffffff;
    local_f8.Elements._44_4_ = 0x80;
    local_f8.Elements._48_4_ = 0xffffffff;
    (**(code **)(this->_padding_ + 0x358))(this,&local_2f0,&local_2a8,&local_148);
    iVar4 = (int)local_2a0;
    uVar18 = (ulonglong)(int)local_2a0;
    puVar3 = local_2a8 + uVar18;
    puVar22 = local_2a8;
    while( true ) {
      if ((int)uVar18 != iVar4) {
        local_318 = 0;
        `TCheckedPointerIterator<UInterchangeSceneComponentNode_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_318);
      }
      if (puVar22 == puVar3) break;
      (**(code **)(this->_padding_ + 0x348))(this,*puVar22);
      uVar18 = local_2a0 & 0xffffffff;
      puVar22 = puVar22 + 1;
    }
    pTVar2 = &this->Cached_ActiveJointUids;
    piVar1 = &(this->Cached_ActiveJointUids).ArrayMax;
    pFVar26 = (pTVar2->AllocatorInstance).Data;
    iVar4 = (this->Cached_ActiveJointUids).ArrayNum;
    local_270 = pTVar2;
    if ((this->Cached_ActiveJointUids).ArrayMax < 0) {
      DestructItems<FString,int>((FString *)pFVar26,iVar4);
      (this->Cached_ActiveJointUids).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar26,iVar4);
      (this->Cached_ActiveJointUids).ArrayNum = 0;
    }
    local_228 = &local_280;
    local_230 = UE::Core::Private::Function::
                TFunctionRefCaller<`UInterchangeGenericLevelPipeline::CacheActiveJointUids'::__l2::<lambda_1>,void,FString_const_&,UInterchangeSkeletonFactoryNode_*>
                ::Call;
    local_280 = this;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeSkeletonFactoryNode>
              (this->BaseNodeContainer,
               (TFunctionRef<void___cdecl(FString_const_&,UInterchangeSkeletonFactoryNode_*)> *)
               &local_230);
    iVar4 = (int)local_2e8;
    lVar29 = (longlong)(int)local_2e8;
    local_198.Elements._0_8_ = 0;
    local_198.Elements._8_8_ = 0;
    local_198.Elements._32_8_ = 0;
    plVar6 = &local_2f0->_padding_;
    local_198.Elements._40_4_ = 0;
    local_198.Elements._44_4_ = 0x80;
    local_198.Elements._48_4_ = 0xffffffff;
    local_198.Elements._52_4_ = 0;
    local_198.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_198.HashSize = 0;
    pUVar28 = local_2f0;
LAB_14e7a56d4:
    if ((int)local_2e8 != iVar4) {
      local_317[0] = 0;
      `TCheckedPointerIterator<UInterchangeSceneNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_317);
    }
    if (pUVar28 != (UInterchangeBaseNode *)(plVar6 + lVar29)) {
      local_2e0 = (UInterchangeSceneNode *)pUVar28->_padding_;
      if (local_2e0 != (UInterchangeSceneNode *)0x0) {
        local_2d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d8.ArrayNum = 0;
        local_2d8.ArrayMax = 0;
        UInterchangeSceneNode::GetSpecializedTypes(local_2e0,&local_2d8);
        if (0 < local_2d8.ArrayNum) {
          pFVar11 = UE::Interchange::FSceneNodeStaticData::GetLodGroupSpecializeTypeString();
          pFVar26 = local_2d8.AllocatorInstance.Data + (longlong)local_2d8.ArrayNum * 0x10;
          for (FVar23.Data = local_2d8.AllocatorInstance.Data; FVar23.Data != pFVar26;
              FVar23.Data = FVar23.Data + 0x10) {
            iVar7 = *(int *)(FVar23.Data + 8);
            iVar17 = (pFVar11->Data).ArrayNum;
            if (iVar7 == iVar17) {
              if (1 < iVar7) {
                iVar7 = FGenericPlatformStricmp::Stricmp
                                  (*(wchar_t **)FVar23.Data,
                                   (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
                bVar30 = iVar7 == 0;
                goto LAB_14e7a5764;
              }
LAB_14e7a579c:
              uVar16 = ((uint)((ulonglong)local_2e0 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_2e0 >> 4)) * -0x7a143595;
              uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
              uVar16 = uVar16 >> 0x10 ^ uVar16;
              if (local_198.Elements._8_4_ == local_198.Elements._52_4_) goto LAB_14e7a582c;
              FVar20 = (ForElementType<FSetElementId>)&local_198.Hash;
              if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar20 = local_198.Hash.SecondaryData;
              }
              iVar7 = *(int *)((longlong)FVar20 + (ulonglong)(local_198.HashSize - 1U & uVar16) * 4)
              ;
              if (iVar7 == -1) goto LAB_14e7a582c;
              goto LAB_14e7a5810;
            }
            bVar30 = iVar17 + iVar7 == 1;
LAB_14e7a5764:
            if (bVar30) goto LAB_14e7a579c;
          }
        }
        goto LAB_14e7a5776;
      }
      goto LAB_14e7a5793;
    }
    local_268 = &local_198;
    iVar4 = (int)local_2e8;
    local_2c0 = (UInterchangeBaseNode *)(&local_2f0->_padding_ + (int)local_2e8);
    pUVar28 = local_2f0;
LAB_14e7a59c5:
    pUVar13 = local_2c0;
    if ((int)local_2e8 != iVar4) {
      `TCheckedPointerIterator<UInterchangeSceneNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2f8);
    }
    if (pUVar28 != pUVar13) {
      this_01 = (UInterchangeSceneNode *)pUVar28->_padding_;
      if (this_01 != (UInterchangeSceneNode *)0x0) {
        local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_310.ArrayNum = 0;
        local_310.ArrayMax = 0;
        UInterchangeSceneNode::GetSpecializedTypes(this_01,&local_310);
        pUVar25 = local_300;
        if (local_310.ArrayNum < 1) goto LAB_14e7a5c43;
        pFVar11 = UE::Interchange::FSceneNodeStaticData::GetTransformSpecializeTypeString();
        pFVar26 = local_310.AllocatorInstance.Data + (longlong)local_310.ArrayNum * 0x10;
        pUVar25 = local_300;
        for (FVar23.Data = local_310.AllocatorInstance.Data; local_300 = pUVar25,
            FVar23.Data != pFVar26; FVar23.Data = FVar23.Data + 0x10) {
          iVar7 = *(int *)(FVar23.Data + 8);
          iVar17 = (pFVar11->Data).ArrayNum;
          if (iVar7 == iVar17) {
            if (iVar7 < 2) goto LAB_14e7a5c43;
            iVar7 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar23.Data,
                               (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
            bVar30 = iVar7 == 0;
          }
          else {
            bVar30 = iVar17 + iVar7 == 1;
          }
          pUVar25 = local_300;
          if (bVar30) goto LAB_14e7a5c43;
        }
        bVar30 = true;
        pFVar11 = UE::Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString();
        pFVar26 = local_310.AllocatorInstance.Data + (longlong)local_310.ArrayNum * 0x10;
        for (FVar23.Data = local_310.AllocatorInstance.Data; FVar23.Data != pFVar26;
            FVar23.Data = FVar23.Data + 0x10) {
          iVar7 = *(int *)(FVar23.Data + 8);
          iVar17 = (pFVar11->Data).ArrayNum;
          if (iVar7 == iVar17) {
            if (1 < iVar7) {
              iVar7 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)FVar23.Data,
                                 (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
              bVar31 = iVar7 == 0;
              goto LAB_14e7a5ab3;
            }
LAB_14e7a5b08:
            pFVar11 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_1c8);
            pFVar26 = (local_270->AllocatorInstance).Data;
            pFVar27 = pFVar26 + (longlong)local_270->ArrayNum * 0x10;
            bVar31 = true;
            goto joined_r0x00014e7a5b2f;
          }
          bVar31 = iVar17 + iVar7 == 1;
LAB_14e7a5ab3:
          if (bVar31) goto LAB_14e7a5b08;
        }
        pFVar11 = UE::Interchange::FSceneNodeStaticData::GetLodGroupSpecializeTypeString();
        pFVar26 = local_310.AllocatorInstance.Data + (longlong)local_310.ArrayNum * 0x10;
        for (FVar23.Data = local_310.AllocatorInstance.Data; FVar23.Data != pFVar26;
            FVar23.Data = FVar23.Data + 0x10) {
          iVar7 = *(int *)(FVar23.Data + 8);
          iVar17 = (pFVar11->Data).ArrayNum;
          if (iVar7 == iVar17) {
            pUVar25 = local_300;
            if (iVar7 < 2) goto LAB_14e7a5c43;
            iVar7 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar23.Data,
                               (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
            bVar30 = iVar7 == 0;
          }
          else {
            bVar30 = iVar17 + iVar7 == 1;
          }
          pUVar25 = local_300;
          if (bVar30) goto LAB_14e7a5c43;
        }
        goto LAB_14e7a5d45;
      }
      goto LAB_14e7a5d64;
    }
    local_260 = &local_2b8;
    local_1f8 = &local_260;
    local_2b8 = (longlong *)0x0;
    local_200 = UE::Core::Private::Function::
                TFunctionRefCaller<`UInterchangeGenericLevelPipeline::ExecutePipeline'::__l2::<lambda_4>,void,FString_const_&,UInterchangeSceneVariantSetsNode_*>
                ::Call;
    local_2b0 = 0;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeSceneVariantSetsNode>
              (local_258,
               (TFunctionRef<void___cdecl(FString_const_&,UInterchangeSceneVariantSetsNode_*)> *)
               &local_200);
    pUVar25 = local_300;
    iVar4 = (int)local_2b0;
    plVar6 = local_2b8 + (int)local_2b0;
    plVar24 = local_2b8;
    while( true ) {
      if ((int)local_2b0 != iVar4) {
        `TCheckedPointerIterator<UInterchangeSceneVariantSetsNode_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2f7);
      }
      if (plVar24 == plVar6) break;
      if (*plVar24 != 0) {
        (**(code **)(pUVar25->_padding_ + 0x338))(pUVar25);
      }
      plVar24 = plVar24 + 1;
    }
    if (local_2b8 != (longlong *)0x0) {
      FMemory::Free(local_2b8);
    }
    local_198.HashSize = 0;
    if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UInterchangeSceneNode_const_*,TArray<UInterchangeSceneNode_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UInterchangeSceneNode_const_*,TArray<UInterchangeSceneNode_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_198.Elements);
    local_f8.HashSize = 0;
    if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_f8.Elements);
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeStaticMeshFactoryNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeStaticMeshFactoryNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
    if (local_2a8 != (undefined8 *)0x0) {
      FMemory::Free(local_2a8);
    }
    if (local_2f0 != (UInterchangeBaseNode *)0x0) {
      FMemory::Free(local_2f0);
    }
  }
  return;
  while (iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + local_198.Elements._0_8_), iVar7 != -1) {
LAB_14e7a5810:
    if (*(UInterchangeSceneNode **)((longlong)iVar7 * 0x20 + local_198.Elements._0_8_) == local_2e0)
    {
      if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + local_198.Elements._0_8_, lVar12 != 0)
         ) goto LAB_14e7a5867;
      break;
    }
  }
LAB_14e7a582c:
  local_278 = &local_2e0;
  TSet<TTuple<UInterchangeSceneNode_const_*,TArray<UInterchangeSceneNode_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UInterchangeSceneNode_const_*,TArray<UInterchangeSceneNode_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UInterchangeSceneNode_const_*_const_&>_>
            (&local_198,(uint)local_2c8,
             (TKeyInitializer<UInterchangeSceneNode_const_*_const_&> *)(ulonglong)uVar16,
             (bool *)&local_278);
  lVar12 = (longlong)local_2c8[0] * 0x20 + local_198.Elements._0_8_;
LAB_14e7a5867:
  uVar16 = 0;
  this_00 = this->BaseNodeContainer;
  local_250 = lVar12 + 8;
  local_248 = &local_2e0;
  pFVar11 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_2e0,&local_1d8);
  pUVar13 = UInterchangeBaseNodeContainer::GetNode(this_00,pFVar11);
  if (pUVar13 != (UInterchangeBaseNode *)0x0) {
    local_2c0 = pUVar13;
    UE::Core::Private::Function::
    TFunctionRefCaller<`UInterchangeGenericLevelPipeline::ExecutePipeline'::__l46::<lambda_2>,void,UInterchangeBaseNode_const_*>
    ::Call(&local_250,&local_2c0);
    UInterchangeBaseNodeContainer::GetNodeChildrenUids(this_00,&local_298,pFVar11);
    if (0 < local_298.ArrayNum) {
      do {
        local_218 = &local_250;
        local_220 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UInterchangeGenericLevelPipeline::ExecutePipeline'::__l46::<lambda_2>,void,UInterchangeBaseNode_const_*>
                    ::Call;
        uVar8 = 0;
        if ((int)uVar16 < local_298.ArrayNum) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UInterchangeBaseNodeContainer::IterateNodeChildren
                  (this_00,(FString *)
                           (local_298.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10),
                   (TFunctionRef<void___cdecl(UInterchangeBaseNode_const_*)> *)&local_220);
        uVar16 = uVar16 + 1;
        this = local_300;
      } while ((int)uVar16 < local_298.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_298.AllocatorInstance.Data,local_298.ArrayNum);
    if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.AllocatorInstance.Data);
    }
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
LAB_14e7a5776:
  DestructItems<FString,int>((FString *)local_2d8.AllocatorInstance.Data,local_2d8.ArrayNum);
  if (local_2d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.AllocatorInstance.Data);
  }
LAB_14e7a5793:
  pUVar28 = (UInterchangeBaseNode *)&pUVar28->_padding_;
  goto LAB_14e7a56d4;
joined_r0x00014e7a5b2f:
  if (pFVar26 == pFVar27) goto LAB_14e7a5b70;
  iVar7 = *(int *)(pFVar26 + 8);
  iVar17 = (pFVar11->Data).ArrayNum;
  if (iVar7 == iVar17) {
    if (1 < iVar7) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar26,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
      bVar32 = iVar7 == 0;
      goto LAB_14e7a5b58;
    }
LAB_14e7a5c0c:
    bVar31 = false;
    goto LAB_14e7a5b70;
  }
  bVar32 = iVar17 + iVar7 == 1;
LAB_14e7a5b58:
  if (bVar32) goto LAB_14e7a5c0c;
  pFVar26 = pFVar26 + 0x10;
  goto joined_r0x00014e7a5b2f;
LAB_14e7a5b70:
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pUVar25 = local_300;
  if (!bVar31) {
    UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)this_01,&local_210);
    pUVar25 = local_300;
    pUVar15 = (UInterchangeSceneNode *)
              UInterchangeBaseNodeContainer::GetNode(local_300->BaseNodeContainer,&local_210);
    if (pUVar15 != (UInterchangeSceneNode *)0x0) {
      pUVar14 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
      iVar7 = (int)pUVar14->_padding_;
      if ((iVar7 <= *(int *)(pUVar15->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar14->_padding_)) {
        pFVar11 = UE::Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString();
        bVar31 = UInterchangeSceneNode::IsSpecializedTypeContains(pUVar15,pFVar11);
        bVar30 = true;
        if (!bVar31) {
          bVar30 = false;
        }
      }
    }
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if (bVar30) goto LAB_14e7a5d45;
  }
LAB_14e7a5c43:
  pUVar15 = `UInterchangeGenericLevelPipeline::ExecutePipeline'::__l2::<lambda_3>::operator()
                      (&local_268,this_01);
  if (pUVar15 == (UInterchangeSceneNode *)0x0) {
    pFVar11 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_1a8);
    uVar19 = 0;
    iVar7 = (pFVar11->Data).ArrayNum;
    iVar17 = 0;
    if (iVar7 == 0) {
      pwVar21 = L"";
      iVar7 = iVar17;
    }
    else {
      pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      iVar7 = iVar7 + -1;
    }
    uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar21);
    iVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&local_f8,uVar16,pFVar11);
    pFVar11 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_1b8);
    iVar7 = (pFVar11->Data).ArrayNum;
    if (iVar7 == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      iVar17 = iVar7 + -1;
    }
    uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar21);
    iVar7 = TSet<TTuple<FString,UInterchangeStaticMeshFactoryNode_const_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeStaticMeshFactoryNode_const_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(&local_148,uVar16,pFVar11);
    if ((iVar7 != -1) && (lVar29 = (longlong)iVar7 * 0x20 + local_148.Elements._0_8_, lVar29 != 0))
    {
      uVar19 = *(undefined8 *)(lVar29 + 0x10);
    }
    local_1f0 = this_01;
    local_1e8 = uVar19;
    local_1e0 = iVar9 != -1;
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    (**(code **)(pUVar25->_padding_ + 0x330))(pUVar25,&local_a8,&local_1f0);
  }
LAB_14e7a5d45:
  DestructItems<FString,int>((FString *)local_310.AllocatorInstance.Data,local_310.ArrayNum);
  if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.AllocatorInstance.Data);
  }
LAB_14e7a5d64:
  pUVar28 = (UInterchangeBaseNode *)&pUVar28->_padding_;
  goto LAB_14e7a59c5;
}

// ExecutePostBroadcastPipeline @ 14e7a9640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::ExecutePostBroadcastPipeline
          (UInterchangeGenericLevelPipeline *this,UInterchangeBaseNodeContainer *param_1,
          FString *param_2,UObject *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3 != (UObject *)0x0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<336199233793164836>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericScenesPipeline.cpp"
                         ,0x624,"IsInGameThread()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ExecutePostImportPipeline @ 14e7a9a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::ExecutePostImportPipeline
          (UInterchangeGenericLevelPipeline *this,UInterchangeBaseNodeContainer *param_1,
          FString *param_2,UObject *param_3,bool param_4)

{
  return;
}

// ExecuteSceneNodePreImport @ 14e7abc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::ExecuteSceneNodePreImport
          (UInterchangeGenericLevelPipeline *this,TTransform<double> *param_1,
          FSceneNodePreImportData *param_2)

{
  int iVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  code *pcVar3;
  TTransform<double> *pTVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  UInterchangeSkeletonFactoryNode *this_00;
  UClass *pUVar9;
  UInterchangeFactoryBaseNode *pUVar10;
  UInterchangeMeshNode *this_01;
  UInterchangeStaticMeshLodDataNode *this_02;
  UInterchangeSceneNode *pUVar11;
  UInterchangeActorFactoryNode *this_03;
  undefined8 uVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  wchar_t *pwVar15;
  UInterchangeStaticMeshFactoryNode *this_04;
  UInterchangeMeshNode *pUVar16;
  UInterchangeMeshNode *pUVar17;
  undefined1 auStackY_398 [32];
  bool local_368 [8];
  UInterchangeSceneNode *local_360;
  uchar local_358 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_350;
  FString local_340;
  TArray<FString,TSizedDefaultAllocator<32>_> local_330;
  TArray<FString,TSizedDefaultAllocator<32>_> local_320;
  TArray<FString,TSizedDefaultAllocator<32>_> local_310;
  TArray<FString,TSizedDefaultAllocator<32>_> local_300;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2f0;
  FString local_2e0;
  FString local_2d0;
  TTransform<double> *local_2c0;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  void *local_1d8 [2];
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_360 = param_2->SceneNode;
  if (this->BaseNodeContainer == (UInterchangeBaseNodeContainer *)0x0) {
    return;
  }
  if (local_360 == (UInterchangeSceneNode *)0x0) {
    return;
  }
  this_01 = (UInterchangeMeshNode *)0x0;
  bVar6 = false;
  pUVar16 = (UInterchangeMeshNode *)0x0;
  local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.Data.ArrayNum = 0;
  local_2d0.Data.ArrayMax = 0;
  local_2c0 = param_1;
  pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_360,&local_258);
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_268,pFVar8);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  this_00 = (UInterchangeSkeletonFactoryNode *)
            UInterchangeBaseNodeContainer::GetFactoryNode(this->BaseNodeContainer,&local_268);
  pUVar17 = this_01;
  if (this_00 == (UInterchangeSkeletonFactoryNode *)0x0) {
LAB_14e7abd5b:
    local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e0.Data.ArrayNum = 0;
    local_2e0.Data.ArrayMax = 0;
    bVar5 = UInterchangeSceneNode::GetCustomAssetInstanceUid(local_360,&local_2e0);
    this_01 = pUVar17;
    if (bVar5) {
      this_01 = (UInterchangeMeshNode *)
                UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,&local_2e0);
    }
    if (this_01 != (UInterchangeMeshNode *)0x0) {
      pUVar9 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
      iVar7 = (int)pUVar9->_padding_;
      if ((iVar7 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar9->_padding_)) {
        if ((param_2->bIsSkinnedMesh == false) &&
           (bVar5 = UInterchangeMeshNode::IsSkinnedMesh(this_01), !bVar5)) {
          pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_248);
          UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_298,pFVar8);
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          pUVar10 = UInterchangeBaseNodeContainer::GetFactoryNode
                              (this->BaseNodeContainer,&local_298);
          if (pUVar10 != (UInterchangeFactoryBaseNode *)0x0) {
            pUVar9 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
            iVar7 = (int)pUVar9->_padding_;
            if ((iVar7 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
                &pUVar9->_padding_)) {
              if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_298.Data.AllocatorInstance.Data);
              }
              goto LAB_14e7abe4a;
            }
          }
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
        }
        if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7ac99b;
      }
    }
LAB_14e7abe4a:
    if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
    }
  }
  else {
    pUVar9 = Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister();
    iVar7 = (int)pUVar9->_padding_;
    pUVar17 = pUVar16;
    if ((((*(int *)(this_00->_padding_ + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar9->_padding_)) ||
        (bVar5 = UInterchangeSkeletonFactoryNode::GetCustomSkeletalMeshFactoryNodeUid
                           (this_00,&local_2d0), !bVar5)) ||
       (pUVar10 = UInterchangeBaseNodeContainer::GetFactoryNode(this->BaseNodeContainer,&local_2d0),
       pUVar10 == (UInterchangeFactoryBaseNode *)0x0)) goto LAB_14e7abd5b;
    local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_320.ArrayNum = 0;
    local_320.ArrayMax = 0;
    UInterchangeBaseNode::GetTargetNodeUids((UInterchangeBaseNode *)pUVar10,&local_320);
    bVar6 = 0 < local_320.ArrayNum;
    if (bVar6) {
      this_01 = (UInterchangeMeshNode *)
                UInterchangeBaseNodeContainer::GetNode
                          (this->BaseNodeContainer,(FString *)local_320.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_320.AllocatorInstance.Data,local_320.ArrayNum);
    if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.AllocatorInstance.Data);
    }
    pUVar17 = this_01;
    if (!bVar6) goto LAB_14e7abd5b;
  }
  local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_310.ArrayNum = 0;
  local_310.ArrayMax = 0;
  UInterchangeSceneNode::GetSpecializedTypes(local_360,&local_310);
  pFVar8 = UE::Interchange::FSceneNodeStaticData::GetLodGroupSpecializeTypeString();
  pFVar14 = local_310.AllocatorInstance.Data + (longlong)local_310.ArrayNum * 0x10;
  for (FVar13.Data = local_310.AllocatorInstance.Data; FVar13.Data != pFVar14;
      FVar13.Data = FVar13.Data + 0x10) {
    iVar7 = *(int *)(FVar13.Data + 8);
    iVar1 = (pFVar8->Data).ArrayNum;
    if (iVar7 == iVar1) {
      if (1 < iVar7) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar13.Data,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data
                          );
        bVar5 = iVar7 == 0;
        goto LAB_14e7abedf;
      }
LAB_14e7ac11b:
      bVar5 = true;
      goto LAB_14e7abef5;
    }
    bVar5 = iVar1 + iVar7 == 1;
LAB_14e7abedf:
    if (bVar5) goto LAB_14e7ac11b;
  }
  bVar5 = false;
LAB_14e7abef5:
  DestructItems<FString,int>((FString *)local_310.AllocatorInstance.Data,local_310.ArrayNum);
  if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.AllocatorInstance.Data);
  }
  this_04 = (UInterchangeStaticMeshFactoryNode *)0x0;
  if (bVar5) {
    this_04 = param_2->LodGroupFactoryNode;
    if (this_04 == (UInterchangeStaticMeshFactoryNode *)0x0) goto LAB_14e7ac99b;
    local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_330.ArrayNum = 0;
    local_330.ArrayMax = 0;
    UInterchangeMeshFactoryNode::GetLodDataUniqueIds
              ((UInterchangeMeshFactoryNode *)this_04,&local_330);
    iVar7 = 0;
    if (local_330.ArrayNum != 0) {
      pUVar2 = this->BaseNodeContainer;
      if ((local_330.ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_02 = (UInterchangeStaticMeshLodDataNode *)
                UInterchangeBaseNodeContainer::GetFactoryNode
                          (pUVar2,(FString *)local_330.AllocatorInstance.Data);
      if (this_02 != (UInterchangeStaticMeshLodDataNode *)0x0) {
        pUVar9 = Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister();
        iVar7 = (int)pUVar9->_padding_;
        if ((iVar7 <= *(int *)(this_02->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar9->_padding_)) {
          local_350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_350.ArrayNum = 0;
          local_350.ArrayMax = 0;
          UInterchangeStaticMeshLodDataNode::GetMeshUids(this_02,&local_350);
          if (local_350.ArrayNum != 0) {
            pUVar2 = this->BaseNodeContainer;
            pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_360,&local_238)
            ;
            if ((local_350.ArrayNum < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            bVar5 = UInterchangeBaseNodeContainer::GetIsAncestor
                              (pUVar2,(FString *)local_350.AllocatorInstance.Data,pFVar8);
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              pUVar2 = this->BaseNodeContainer;
              if ((local_350.ArrayNum < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pUVar11 = (UInterchangeSceneNode *)
                        UInterchangeBaseNodeContainer::GetNode
                                  (pUVar2,(FString *)local_350.AllocatorInstance.Data);
              if (pUVar11 != (UInterchangeSceneNode *)0x0) {
                pUVar9 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                iVar7 = (int)pUVar9->_padding_;
                if ((iVar7 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar7 * 8)
                    == &pUVar9->_padding_)) {
                  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_2b8.Data.ArrayNum = 0;
                  local_2b8.Data.ArrayMax = 0;
                  bVar5 = UInterchangeSceneNode::GetCustomAssetInstanceUid(pUVar11,&local_2b8);
                  if (bVar5) {
                    this_01 = (UInterchangeMeshNode *)
                              UInterchangeBaseNodeContainer::GetNode
                                        (this->BaseNodeContainer,&local_2b8);
                  }
                  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                  }
                  goto LAB_14e7ac172;
                }
              }
              pUVar2 = this->BaseNodeContainer;
              if ((local_350.ArrayNum < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              this_01 = (UInterchangeMeshNode *)
                        UInterchangeBaseNodeContainer::GetNode
                                  (pUVar2,(FString *)local_350.AllocatorInstance.Data);
            }
          }
LAB_14e7ac172:
          DestructItems<FString,int>((FString *)local_350.AllocatorInstance.Data,local_350.ArrayNum)
          ;
          if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_350.AllocatorInstance.Data);
          }
        }
      }
      iVar7 = local_330.ArrayNum;
    }
    DestructItems<FString,int>((FString *)local_330.AllocatorInstance.Data,iVar7);
    if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.AllocatorInstance.Data);
    }
    if (this_01 == (UInterchangeMeshNode *)0x0) goto LAB_14e7ac99b;
  }
  this_03 = (UInterchangeActorFactoryNode *)(**(code **)(this->_padding_ + 0x340))(this);
  if (this_03 == (UInterchangeActorFactoryNode *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<336199233793163970>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericScenesPipeline.cpp"
                       ,0x2c2,"ActorFactoryNode");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    goto LAB_14e7ac99b;
  }
  UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
            ((UInterchangeBaseNode *)local_360,(UInterchangeBaseNode *)this_03,false);
  local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax = 0;
  UInterchangeSceneNode::GetLayerNames(local_360,&local_2f0);
  UInterchangeActorFactoryNode::AddLayerNames(this_03,&local_2f0);
  local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.ArrayNum = 0;
  local_300.ArrayMax = 0;
  UInterchangeSceneNode::GetTags(local_360,&local_300);
  UInterchangeActorFactoryNode::AddTags(this_03,&local_300);
  pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_360,&local_228);
  pwVar15 = L"";
  if (bVar6) {
    pwVar15 = L"_SkeletonNode";
  }
  ::FString::ConcatFC(&local_278,pFVar8,pwVar15);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_288,&local_278);
  local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340.Data.ArrayNum = 0;
  local_340.Data.ArrayMax = 0;
  pFVar8 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)local_360,&local_218);
  iVar7 = (pFVar8->Data).ArrayNum;
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (1 < iVar7) {
    UE::Interchange::Private::FindFactoryParentSceneNodeUid
              (&local_2a8,this->BaseNodeContainer,&this->Cached_ActiveJointUids,local_360);
    pFVar8 = UInterchangeBaseNode::InvalidNodeUid(&local_208);
    iVar7 = (pFVar8->Data).ArrayNum;
    if (local_2a8.Data.ArrayNum == iVar7) {
      if (local_2a8.Data.ArrayNum < 2) {
        bVar5 = false;
      }
      else {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_2a8.Data.AllocatorInstance.Data,
                           (wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
        bVar5 = iVar7 != 0;
      }
    }
    else {
      bVar5 = iVar7 + local_2a8.Data.ArrayNum != 1;
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pFVar8 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_1f8,&local_2a8);
      if (&local_340 != pFVar8) {
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
        local_340.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_340.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_340.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
    }
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  pUVar2 = this->BaseNodeContainer;
  pFVar8 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)local_360,&local_1e8);
  UInterchangeBaseNodeContainer::SetupNode
            (pUVar2,(UInterchangeBaseNode *)this_03,&local_288,pFVar8,FactoryData,&local_340);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(this_03->_padding_ + 0x2e0);
  uVar12 = (**(code **)(local_360->_padding_ + 0x2d8))(local_360,local_1d8);
  (*pcVar3)(this_03,uVar12);
  if (local_1d8[0] != (void *)0x0) {
    FMemory::Free(local_1d8[0]);
  }
  if ((local_340.Data.ArrayNum != 0) && (local_340.Data.ArrayNum != 1)) {
    UInterchangeFactoryBaseNode::AddFactoryDependencyUid
              ((UInterchangeFactoryBaseNode *)this_03,&local_340);
  }
  if (bVar6) {
    UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_03,&local_2d0);
  }
  else {
    if (this_04 == (UInterchangeStaticMeshFactoryNode *)0x0) {
      pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_360,&local_1b8);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_03,pFVar8);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_03,&local_1a8);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)local_360,pFVar8);
      local_1c8.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    else {
      pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_04,&local_1c8);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_03,pFVar8);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  local_168.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_168.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_168.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_168.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_168.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  bVar5 = UInterchangeSceneNode::GetCustomLocalTransform(local_360,&local_168);
  pTVar4 = local_2c0;
  if (bVar5) {
    if (bVar6) {
      local_168.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_168.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_168.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_168.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_168.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_168.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    pFVar8 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)local_360,&local_198);
    iVar7 = (pFVar8->Data).ArrayNum;
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (iVar7 < 2) {
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
      UE::Math::TTransform<double>::Multiply(&local_a8,&local_168,local_2c0);
      local_168.Rotation.XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
      local_168.Rotation.XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
      local_168.Rotation.ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
      local_168.Rotation.ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
      local_168.Translation.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
      local_168.Translation.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
      local_168.Translation.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
      local_168.Translation.ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
      local_168.Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
      local_168.Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
      local_168.Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
      local_168.Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
    }
    UInterchangeActorFactoryNode::SetCustomLocalTransform(this_03,&local_168,true);
  }
  else {
    local_108.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_108.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar5 = UInterchangeSceneNode::GetCustomGlobalTransform
                      (local_360,this->BaseNodeContainer,local_2c0,&local_108,false);
    if (bVar5) {
      if (bVar6) {
        local_108.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_108.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_108.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_108.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_108.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_108.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        pFVar8 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)local_360,&local_188);
        iVar7 = (pFVar8->Data).ArrayNum;
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (1 < iVar7) {
          pUVar2 = this->BaseNodeContainer;
          pFVar8 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)local_360,&local_178);
          pUVar11 = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(pUVar2,pFVar8);
          if (pUVar11 == (UInterchangeSceneNode *)0x0) {
LAB_14e7ac82f:
            pUVar11 = (UInterchangeSceneNode *)0x0;
          }
          else {
            pUVar9 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
            iVar7 = (int)pUVar9->_padding_;
            if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar7) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
                &pUVar9->_padding_)) goto LAB_14e7ac82f;
          }
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          if (pUVar11 != (UInterchangeSceneNode *)0x0) {
            UInterchangeSceneNode::GetCustomGlobalTransform
                      (pUVar11,this->BaseNodeContainer,pTVar4,&local_108,false);
          }
        }
      }
      UInterchangeActorFactoryNode::SetCustomGlobalTransform(this_03,&local_108,true);
    }
  }
  bVar5 = UInterchangeSceneNode::GetCustomComponentVisibility(local_360,local_368);
  bVar6 = local_368[0];
  if (!bVar5) {
    bVar6 = true;
  }
  UInterchangeActorFactoryNode::SetCustomComponentVisibility(this_03,bVar6,true);
  bVar6 = UInterchangeSceneNode::GetCustomActorVisibility(local_360,local_368);
  if (!bVar6) {
    local_368[0] = true;
  }
  UInterchangeActorFactoryNode::SetCustomActorVisibility(this_03,local_368[0],true);
  local_358[0] = '\0';
  UInterchangeActorFactoryNode::SetCustomMobility(this_03,local_358,true);
  if (this_01 != (UInterchangeMeshNode *)0x0) {
    (**(code **)(this->_padding_ + 0x350))(this,this_03,local_360,this_01);
  }
  (**(code **)(this->_padding_ + 0x360))(this,this_03,local_360);
  if (((char)this->_padding_ == '\x04') &&
     (UInterchangeFactoryBaseNode::SetReimportStrategyFlags
                ((UInterchangeFactoryBaseNode *)this_03,&this->ReimportPropertyStrategy),
     this->bForceReimportDeletedActors != false)) {
    UInterchangeFactoryBaseNode::SetForceNodeReimport((UInterchangeFactoryBaseNode *)this_03);
  }
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_300.AllocatorInstance.Data,local_300.ArrayNum);
  if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_2f0.AllocatorInstance.Data,local_2f0.ArrayNum);
  if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.AllocatorInstance.Data);
  }
LAB_14e7ac99b:
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  return;
}

// ExecuteSceneVariantSetNodePreImport @ 14e7aca00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::ExecuteSceneVariantSetNodePreImport
          (UInterchangeGenericLevelPipeline *this,UInterchangeSceneVariantSetsNode *param_1)

{
  int iVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  UClass *pUVar6;
  UInterchangeSceneVariantSetsFactoryNode *this_00;
  UInterchangeSourceNode *this_01;
  ulonglong uVar7;
  UInterchangeVariantSetNode *this_02;
  UInterchangeFactoryBaseNode *this_03;
  longlong *plVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_1a8 [32];
  EReimportStrategyFlags local_178;
  undefined1 local_177;
  undefined1 local_176 [6];
  ulonglong local_170;
  FScriptContainerElement *local_168;
  TArray<FString,TSizedDefaultAllocator<32>_> local_160;
  TArray<FString,TSizedDefaultAllocator<32>_> local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (this->BaseNodeContainer == (UInterchangeBaseNodeContainer *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<336199233793164600>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericScenesPipeline.cpp"
                       ,0x538,"BaseNodeContainer");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_100);
    UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_110,pFVar5);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    pUVar2 = this->BaseNodeContainer;
    local_170 = 0;
    local_168 = (FScriptContainerElement *)0x0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar6);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar2;
    this_00 = (UInterchangeSceneVariantSetsFactoryNode *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar8 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    pUVar2 = this->BaseNodeContainer;
    ::FString::FString(&local_120,L"");
    pFVar5 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_f0);
    UInterchangeBaseNodeContainer::SetupNode
              (pUVar2,(UInterchangeBaseNode *)this_00,&local_110,pFVar5,FactoryData,&local_120);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)this_00,bEnableSceneVariantSet);
    this_01 = UInterchangeSourceNode::FindOrCreateUniqueInstance(this->BaseNodeContainer);
    UE::Interchange::PipelineHelper::FillSubPathFromSourceNode
              ((UInterchangeFactoryBaseNode *)this_00,this_01);
    bVar4 = UInterchangeSourceNode::GetCustomReimportStrategyFlags(this_01,&local_178);
    if (bVar4) {
      UInterchangeFactoryBaseNode::SetReimportStrategyFlags
                ((UInterchangeFactoryBaseNode *)this_00,&local_178);
    }
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0;
    UInterchangeSceneVariantSetsNode::GetCustomVariantSetUids(param_1,&local_150);
    uVar7 = (ulonglong)local_150.ArrayNum;
    local_168 = local_150.AllocatorInstance.Data + uVar7 * 0x10;
    local_170 = CONCAT44(local_170._4_4_,local_150.ArrayNum);
    uVar9 = uVar7;
    FVar12.Data = local_150.AllocatorInstance.Data;
    while( true ) {
      pFVar11 = local_168;
      if ((int)uVar7 != (int)uVar9) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_177);
      }
      FVar10.Data = local_140.Data.AllocatorInstance.Data;
      if (FVar12.Data == pFVar11) break;
      UInterchangeSceneVariantSetsFactoryNode::AddCustomVariantSetUid
                (this_00,(FString *)FVar12.Data);
      this_02 = (UInterchangeVariantSetNode *)
                UInterchangeBaseNodeContainer::GetNode
                          (this->BaseNodeContainer,(FString *)FVar12.Data);
      if (this_02 != (UInterchangeVariantSetNode *)0x0) {
        pUVar6 = Z_Construct_UClass_UInterchangeVariantSetNode_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((iVar1 <= *(int *)(this_02->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar6->_padding_)) {
          local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_160.ArrayNum = 0;
          local_160.ArrayMax = 0;
          UInterchangeVariantSetNode::GetCustomDependencyUids(this_02,&local_160);
          iVar1 = local_160.ArrayNum;
          pFVar11 = local_160.AllocatorInstance.Data + (longlong)local_160.ArrayNum * 0x10;
          FVar10.Data = local_160.AllocatorInstance.Data;
          while( true ) {
            if (local_160.ArrayNum != iVar1) {
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_176);
            }
            if (FVar10.Data == pFVar11) break;
            UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_130,(FString *)FVar10.Data);
            UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                      ((UInterchangeFactoryBaseNode *)this_00,&local_130);
            this_03 = UInterchangeBaseNodeContainer::GetFactoryNode
                                (this->BaseNodeContainer,&local_130);
            if (((this_03 != (UInterchangeFactoryBaseNode *)0x0) &&
                (bEnableSceneVariantSet != false)) &&
               (bVar4 = UInterchangeBaseNode::IsEnabled((UInterchangeBaseNode *)this_03), !bVar4)) {
              UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)this_03,true);
            }
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            FVar10.Data = FVar10.Data + 0x10;
          }
          DestructItems<FString,int>((FString *)local_160.AllocatorInstance.Data,local_160.ArrayNum)
          ;
          if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.AllocatorInstance.Data);
          }
        }
      }
      uVar7 = local_150._8_8_ & 0xffffffff;
      FVar12.Data = FVar12.Data + 0x10;
      uVar9 = local_170 & 0xffffffff;
    }
    UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
              ((UInterchangeBaseNode *)local_140.Data.AllocatorInstance.Data,
               (UInterchangeBaseNode *)this_00,false);
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)FVar10.Data,&local_140);
    UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_00,pFVar5);
    if ((UInterchangeSceneVariantSetsNode *)local_140.Data.AllocatorInstance.Data !=
        (UInterchangeSceneVariantSetsNode *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_e0);
    UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)FVar10.Data,pFVar5);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
    if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14e7b9980

UClass * __cdecl UInterchangeGenericLevelPipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericLevelPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericLevelPipeline,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericLevelPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericLevelPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.InnerSingleton;
}

// PopulateSceneNodesPreImport @ 14e7d36b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::PopulateSceneNodesPreImport
          (UInterchangeGenericLevelPipeline *this,
          TArray<UInterchangeSceneNode_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UInterchangeSceneComponentNode_*,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,UInterchangeStaticMeshFactoryNode_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UInterchangeStaticMeshFactoryNode_const_*,0>_>
          *param_3,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4)

{
  code *local_48;
  UInterchangeGenericLevelPipeline **local_40;
  UInterchangeGenericLevelPipeline *local_38;
  TArray<UInterchangeSceneNode_*,TSizedDefaultAllocator<32>_> *local_30;
  TArray<UInterchangeSceneComponentNode_*,TSizedDefaultAllocator<32>_> *local_28;
  TMap<FString,UInterchangeStaticMeshFactoryNode_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UInterchangeStaticMeshFactoryNode_const_*,0>_>
  *local_20;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_18;
  
  local_18 = param_4;
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UInterchangeGenericLevelPipeline::PopulateSceneNodesPreImport'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
             ::Call;
  local_38 = this;
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_3;
  UInterchangeBaseNodeContainer::IterateNodes
            (this->BaseNodeContainer,
             (TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_48);
  return;
}

// SetUpComponentDependencies @ 14e7dfab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::SetUpComponentDependencies
          (UInterchangeGenericLevelPipeline *this,UInterchangeActorFactoryNode *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UInterchangeInstancedStaticMeshComponentNode *this_00;
  UClass *pUVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  iVar1 = param_2->ArrayNum;
  pFVar7 = (param_2->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar7 == pFVar6) break;
    this_00 = (UInterchangeInstancedStaticMeshComponentNode *)
              UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,(FString *)pFVar7);
    if (this_00 != (UInterchangeInstancedStaticMeshComponentNode *)0x0) {
      pUVar4 = Z_Construct_UClass_UInterchangeSceneComponentNode_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        pUVar4 = Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_NoRegister();
        iVar2 = (int)pUVar4->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar4->_padding_)) {
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          bVar3 = UInterchangeInstancedStaticMeshComponentNode::GetCustomInstancedAssetUid
                            (this_00,&local_48);
          if (bVar3) {
            pFVar5 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_38,&local_48);
            UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                      ((UInterchangeFactoryBaseNode *)param_1,pFVar5);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.ArrayNum = 0;
        local_58.ArrayMax = 0;
        UInterchangeSceneComponentNode::GetComponentUids
                  ((UInterchangeSceneComponentNode *)this_00,&local_58);
        (**(code **)(this->_padding_ + 0x368))(this,param_1,&local_58);
        DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
    }
    pFVar7 = pFVar7 + 0x10;
  }
  return;
}

// SetUpComponents @ 14e7dfc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::SetUpComponents
          (UInterchangeGenericLevelPipeline *this,UInterchangeActorFactoryNode *param_1,
          UInterchangeSceneNode *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  UInterchangeSceneNode::GetComponentUids(param_2,&local_28);
  (**(code **)(this->_padding_ + 0x368))(this,param_1,&local_28);
  iVar1 = local_28.ArrayNum;
  pFVar3 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10;
  FVar2.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar2.Data == pFVar3) break;
    UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_18,(FString *)FVar2.Data);
    UInterchangeActorFactoryNode::AddComponentUid(param_1,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2.Data = FVar2.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// SetUpFactoryNode @ 14e7dfd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeGenericLevelPipeline::SetUpFactoryNode
          (UInterchangeGenericLevelPipeline *this,UInterchangeActorFactoryNode *param_1,
          UInterchangeSceneNode *param_2,UInterchangeBaseNode *param_3)

{
  FSharedReferencer<1> *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  UClass *pUVar7;
  UInterchangeFactoryBaseNode *pUVar8;
  FString *pFVar9;
  UInterchangeBaseNode *pUVar10;
  EAttributeStorageResult EVar11;
  UInterchangePhysicalCameraFactoryNode *this_00;
  FAttributeStorage *pFVar12;
  UInterchangeVolumeNode *pUVar13;
  TTuple<FString,FString> *pTVar14;
  int iVar15;
  undefined1 auStackY_668 [32];
  EInterchangeCameraProjectionType local_638;
  uchar local_637;
  bool local_636;
  bool local_635;
  EInterchangeLightUnits local_634;
  bool local_633;
  EInterchangeSkyLightSourceType local_632;
  uchar local_631;
  bool local_630;
  ECameraFocusMethod local_62f;
  uchar local_62e;
  ECameraFocusMethod local_62d;
  uchar local_62c;
  TEnumAsByte<ECameraProjectionMode::Type> local_62b [3];
  float local_628;
  float local_624;
  float local_620 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_618;
  FString local_608;
  int local_5f8 [2];
  FString local_5f0;
  float local_5e0;
  float local_5dc;
  float local_5d8;
  float local_5d4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  float local_5b4;
  float local_5b0;
  float local_5ac;
  float local_5a8 [2];
  longlong *local_5a0;
  FColor local_598;
  float local_594;
  float local_590;
  float local_58c;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  TAttributeHandle<float,void> local_538;
  TAttributeHandle<float,void> local_520;
  TAttributeHandle<float,void> local_508;
  TAttributeHandle<bool,void> local_4f0;
  TAttributeHandle<UE::Math::TVector<double>,void> local_4d8;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FScriptContainerElement *local_468;
  int iStack_460;
  undefined4 uStack_45c;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FLinearColor local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  void *local_368 [2];
  FString local_358;
  void *local_348 [2];
  FString local_338;
  void *local_328 [2];
  FString local_318;
  void *local_308 [2];
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  void *local_2c8 [2];
  void *local_2b8 [2];
  void *local_2a8 [2];
  void *local_298 [2];
  FString local_288;
  void *local_278 [2];
  void *local_268 [2];
  TStringView<wchar_t> local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  TRotator<double> local_1e8;
  TVector<double> local_1d0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  undefined1 local_158 [32];
  void *local_138;
  undefined4 local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 local_124;
  void *local_118;
  undefined4 local_110;
  undefined1 local_108 [32];
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_668;
  if ((((this->BaseNodeContainer == (UInterchangeBaseNodeContainer *)0x0) ||
       (param_1 == (UInterchangeActorFactoryNode *)0x0)) ||
      (param_2 == (UInterchangeSceneNode *)0x0)) || (param_3 == (UInterchangeBaseNode *)0x0)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<336199233793164243>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericScenesPipeline.cpp"
                       ,0x3d3,
                       "BaseNodeContainer && ActorFactoryNode && SceneNode && TranslatedAssetNode");
    if (!bVar6) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar7 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
  iVar15 = (int)pUVar7->_padding_;
  if ((*(int *)(param_3->_padding_ + 0x38) < iVar15) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar15 * 8)
      != &pUVar7->_padding_)) {
    pUVar7 = Z_Construct_UClass_UInterchangeBaseLightNode_NoRegister();
    iVar15 = (int)pUVar7->_padding_;
    if ((iVar15 <= *(int *)(param_3->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
        &pUVar7->_padding_)) {
      pUVar7 = Z_Construct_UClass_UInterchangeBaseLightFactoryNode_NoRegister();
      iVar15 = (int)pUVar7->_padding_;
      if ((iVar15 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
          &pUVar7->_padding_)) {
        bVar6 = UInterchangeBaseLightNode::GetCustomLightColor
                          ((UInterchangeBaseLightNode *)param_3,&local_3f8);
        if (bVar6) {
          FLinearColor::ToFColorSRGB(&local_3f8);
          UInterchangeBaseLightFactoryNode::SetCustomLightColor
                    ((UInterchangeBaseLightFactoryNode *)param_1,&local_598,true);
        }
        bVar6 = UInterchangeBaseLightNode::GetCustomIntensity
                          ((UInterchangeBaseLightNode *)param_3,&local_594);
        if (bVar6) {
          UInterchangeBaseLightFactoryNode::SetCustomIntensity
                    ((UInterchangeBaseLightFactoryNode *)param_1,local_594,true);
        }
        bVar6 = UInterchangeBaseLightNode::GetCustomUseTemperature
                          ((UInterchangeBaseLightNode *)param_3,&local_636);
        if (bVar6) {
          UInterchangeBaseLightFactoryNode::SetCustomUseTemperature
                    ((UInterchangeBaseLightFactoryNode *)param_1,local_636,true);
          bVar6 = UInterchangeBaseLightNode::GetCustomTemperature
                            ((UInterchangeBaseLightNode *)param_3,&local_590);
          if (bVar6) {
            UInterchangeBaseLightFactoryNode::SetCustomTemperature
                      ((UInterchangeBaseLightFactoryNode *)param_1,local_590,true);
          }
        }
        pUVar7 = Z_Construct_UClass_UInterchangeLightNode_NoRegister();
        local_5a0 = &param_3->_padding_;
        iVar15 = (int)pUVar7->_padding_;
        if ((iVar15 <= *(int *)(param_3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
            &pUVar7->_padding_)) {
          pUVar7 = Z_Construct_UClass_UInterchangeLightFactoryNode_NoRegister();
          iVar15 = (int)pUVar7->_padding_;
          if ((iVar15 <= *(int *)(param_1->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
              &pUVar7->_padding_)) {
            local_588.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_588.Data.ArrayNum = 0;
            local_588.Data.ArrayMax = 0;
            bVar6 = UInterchangeLightNode::GetCustomIESTexture
                              ((UInterchangeLightNode *)param_3,&local_588);
            if ((bVar6) &&
               (pUVar10 = UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,&local_588)
               , pUVar10 != (UInterchangeBaseNode *)0x0)) {
              UInterchangeLightFactoryNode::SetCustomIESTexture
                        ((UInterchangeLightFactoryNode *)param_1,&local_588);
              pFVar9 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_3e8,&local_588);
              UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                        ((UInterchangeFactoryBaseNode *)param_1,pFVar9);
              if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
              }
              bVar6 = UInterchangeLightNode::GetCustomUseIESBrightness
                                ((UInterchangeLightNode *)param_3,&local_635);
              if (bVar6) {
                UInterchangeLightFactoryNode::SetCustomUseIESBrightness
                          ((UInterchangeLightFactoryNode *)param_1,&local_635,true);
              }
              bVar6 = UInterchangeLightNode::GetCustomIESBrightnessScale
                                ((UInterchangeLightNode *)param_3,&local_58c);
              if (bVar6) {
                UInterchangeLightFactoryNode::SetCustomIESBrightnessScale
                          ((UInterchangeLightFactoryNode *)param_1,&local_58c,true);
              }
              bVar6 = UInterchangeLightNode::GetCustomRotation
                                ((UInterchangeLightNode *)param_3,&local_1e8);
              if (bVar6) {
                UInterchangeLightFactoryNode::SetCustomRotation
                          ((UInterchangeLightFactoryNode *)param_1,&local_1e8,true);
              }
            }
            if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_588.Data.AllocatorInstance.Data);
            }
            bVar6 = UInterchangeLightNode::GetCustomIntensityUnits
                              ((UInterchangeLightNode *)param_3,&local_634);
            if (bVar6) {
              UInterchangeLightFactoryNode::SetCustomIntensityUnits
                        ((UInterchangeLightFactoryNode *)param_1,local_634,true);
            }
            bVar6 = UInterchangeLightNode::GetCustomAttenuationRadius
                              ((UInterchangeLightNode *)param_3,&local_5e0);
            if (bVar6) {
              UInterchangeLightFactoryNode::SetCustomAttenuationRadius
                        ((UInterchangeLightFactoryNode *)param_1,local_5e0,true);
            }
            bVar6 = UObjectBaseUtility::IsA<UInterchangeRectLightNode>
                              ((UObjectBaseUtility *)param_3);
            if (bVar6) {
              pUVar7 = Z_Construct_UClass_UInterchangeRectLightFactoryNode_NoRegister();
              iVar15 = (int)pUVar7->_padding_;
              if ((iVar15 <= *(int *)(param_1->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8)
                  == &pUVar7->_padding_)) {
                bVar6 = UInterchangeRectLightNode::GetCustomSourceWidth
                                  ((UInterchangeRectLightNode *)param_3,&local_5dc);
                if (bVar6) {
                  UInterchangeRectLightFactoryNode::SetCustomSourceWidth
                            ((UInterchangeRectLightFactoryNode *)param_1,local_5dc,true);
                }
                bVar6 = UInterchangeRectLightNode::GetCustomSourceHeight
                                  ((UInterchangeRectLightNode *)param_3,&local_5d8);
                if (bVar6) {
                  UInterchangeRectLightFactoryNode::SetCustomSourceHeight
                            ((UInterchangeRectLightFactoryNode *)param_1,local_5d8,true);
                }
              }
            }
            bVar6 = UObjectBaseUtility::IsA<UInterchangePointLightNode>
                              ((UObjectBaseUtility *)param_3);
            if (bVar6) {
              pUVar7 = Z_Construct_UClass_UInterchangePointLightFactoryNode_NoRegister();
              iVar15 = (int)pUVar7->_padding_;
              if ((iVar15 <= *(int *)(param_1->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8)
                  == &pUVar7->_padding_)) {
                bVar6 = UInterchangePointLightNode::GetCustomUseInverseSquaredFalloff
                                  ((UInterchangePointLightNode *)param_3,&local_633);
                if (bVar6) {
                  UInterchangePointLightFactoryNode::SetCustomUseInverseSquaredFalloff
                            ((UInterchangePointLightFactoryNode *)param_1,local_633,true);
                  bVar6 = UInterchangePointLightNode::GetCustomLightFalloffExponent
                                    ((UInterchangePointLightNode *)param_3,&local_5d4);
                  if (bVar6) {
                    UInterchangePointLightFactoryNode::SetCustomLightFalloffExponent
                              ((UInterchangePointLightFactoryNode *)param_1,local_5d4,true);
                  }
                }
                bVar6 = UObjectBaseUtility::IsA<UInterchangeSpotLightNode>
                                  ((UObjectBaseUtility *)param_3);
                if (bVar6) {
                  pUVar7 = Z_Construct_UClass_UInterchangeSpotLightFactoryNode_NoRegister();
                  iVar15 = (int)pUVar7->_padding_;
                  if ((iVar15 <= *(int *)(param_1->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
                      &pUVar7->_padding_)) {
                    bVar6 = UInterchangeSpotLightNode::GetCustomInnerConeAngle
                                      ((UInterchangeSpotLightNode *)param_3,&local_5d0);
                    if (bVar6) {
                      UInterchangeSpotLightFactoryNode::SetCustomInnerConeAngle
                                ((UInterchangeSpotLightFactoryNode *)param_1,local_5d0,true);
                    }
                    bVar6 = UInterchangeSpotLightNode::GetCustomOuterConeAngle
                                      ((UInterchangeSpotLightNode *)param_3,&local_5cc);
                    if (bVar6) {
                      UInterchangeSpotLightFactoryNode::SetCustomOuterConeAngle
                                ((UInterchangeSpotLightFactoryNode *)param_1,local_5cc,true);
                    }
                  }
                }
              }
            }
          }
        }
        pUVar7 = Z_Construct_UClass_UInterchangeSkyLightNode_NoRegister();
        iVar15 = (int)pUVar7->_padding_;
        if ((iVar15 <= *(int *)(*local_5a0 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(*local_5a0 + 0x30) + (longlong)iVar15 * 8) ==
            &pUVar7->_padding_)) {
          pUVar7 = Z_Construct_UClass_UInterchangeSkyLightFactoryNode_NoRegister();
          iVar15 = (int)pUVar7->_padding_;
          if ((iVar15 <= *(int *)(param_1->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
              &pUVar7->_padding_)) {
            local_578.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_578.Data.ArrayNum = 0;
            local_578.Data.ArrayMax = 0;
            bVar6 = UInterchangeSkyLightNode::GetCustomCubemapDependency
                              ((UInterchangeSkyLightNode *)param_3,&local_578);
            if ((bVar6) && (1 < local_578.Data.ArrayNum)) {
              UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_558,&local_578);
              UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                        ((UInterchangeFactoryBaseNode *)param_1,&local_558);
              pFVar9 = ::FString::FString(&local_1b8,&local_558);
              UInterchangeSkyLightFactoryNode::SetCustomCubemapDependency
                        ((UInterchangeSkyLightFactoryNode *)param_1,pFVar9);
              if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_558.Data.AllocatorInstance.Data);
              }
            }
            if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_578.Data.AllocatorInstance.Data);
            }
            bVar6 = UInterchangeSkyLightNode::GetCustomSourceType
                              ((UInterchangeSkyLightNode *)param_3,&local_632);
            if (bVar6) {
              UInterchangeSkyLightFactoryNode::SetCustomSourceType
                        ((UInterchangeSkyLightFactoryNode *)param_1,local_632);
            }
          }
        }
      }
      pUVar7 = Z_Construct_UClass_UInterchangeSpotLightNode_NoRegister();
      iVar15 = (int)pUVar7->_padding_;
      if ((*(int *)(param_3->_padding_ + 0x38) < iVar15) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar7->_padding_)) {
        pUVar7 = Z_Construct_UClass_UInterchangePointLightNode_NoRegister();
        iVar15 = (int)pUVar7->_padding_;
        if ((*(int *)(param_3->_padding_ + 0x38) < iVar15) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
            &pUVar7->_padding_)) {
          pUVar7 = Z_Construct_UClass_UInterchangeRectLightNode_NoRegister();
          iVar15 = (int)pUVar7->_padding_;
          if ((*(int *)(param_3->_padding_ + 0x38) < iVar15) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
              &pUVar7->_padding_)) {
            bVar6 = UObjectBaseUtility::IsA<UInterchangeDirectionalLightNode>
                              ((UObjectBaseUtility *)param_3);
            if (bVar6) {
              pUVar7 = Z_Construct_UClass_ADirectionalLight_NoRegister();
              pFVar9 = UObjectBaseUtility::GetPathName
                                 ((UObjectBaseUtility *)pUVar7,&local_3a8,(UObject *)0x0);
              UInterchangeActorFactoryNode::SetCustomActorClassName(param_1,pFVar9);
              local_388.Data.AllocatorInstance.Data = local_3a8.Data.AllocatorInstance.Data;
            }
            else {
              bVar6 = UObjectBaseUtility::IsA<UInterchangeSkyLightNode>
                                ((UObjectBaseUtility *)param_3);
              if (bVar6) {
                pUVar7 = Z_Construct_UClass_ASkyLight_NoRegister();
                pFVar9 = UObjectBaseUtility::GetPathName
                                   ((UObjectBaseUtility *)pUVar7,&local_398,(UObject *)0x0);
                UInterchangeActorFactoryNode::SetCustomActorClassName(param_1,pFVar9);
                local_388.Data.AllocatorInstance.Data = local_398.Data.AllocatorInstance.Data;
              }
              else {
                pUVar7 = Z_Construct_UClass_APointLight_NoRegister();
                pFVar9 = UObjectBaseUtility::GetPathName
                                   ((UObjectBaseUtility *)pUVar7,&local_388,(UObject *)0x0);
                UInterchangeActorFactoryNode::SetCustomActorClassName(param_1,pFVar9);
              }
            }
          }
          else {
            pUVar7 = Z_Construct_UClass_ARectLight_NoRegister();
            pFVar9 = UObjectBaseUtility::GetPathName
                               ((UObjectBaseUtility *)pUVar7,&local_3b8,(UObject *)0x0);
            UInterchangeActorFactoryNode::SetCustomActorClassName(param_1,pFVar9);
            local_388.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
          }
        }
        else {
          pUVar7 = Z_Construct_UClass_APointLight_NoRegister();
          pFVar9 = UObjectBaseUtility::GetPathName
                             ((UObjectBaseUtility *)pUVar7,&local_3c8,(UObject *)0x0);
          UInterchangeActorFactoryNode::SetCustomActorClassName(param_1,pFVar9);
          local_388.Data.AllocatorInstance.Data = local_3c8.Data.AllocatorInstance.Data;
        }
      }
      else {
        pUVar7 = Z_Construct_UClass_ASpotLight_NoRegister();
        pFVar9 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)pUVar7,&local_3d8,(UObject *)0x0);
        UInterchangeActorFactoryNode::SetCustomActorClassName(param_1,pFVar9);
        local_388.Data.AllocatorInstance.Data = local_3d8.Data.AllocatorInstance.Data;
      }
      goto LAB_14e7e01bd;
    }
    pUVar7 = Z_Construct_UClass_UInterchangePhysicalCameraNode_NoRegister();
    iVar15 = (int)pUVar7->_padding_;
    if ((*(int *)(param_3->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar7->_padding_)) {
      pUVar7 = Z_Construct_UClass_UInterchangeStandardCameraNode_NoRegister();
      iVar15 = (int)pUVar7->_padding_;
      if ((iVar15 <= *(int *)(param_3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
          &pUVar7->_padding_)) {
        local_638 = Perspective;
        bVar6 = UInterchangeStandardCameraNode::GetCustomProjectionMode
                          ((UInterchangeStandardCameraNode *)param_3,&local_638);
        if ((bVar6) &&
           ((this->bUsePhysicalInsteadOfStandardPerspectiveCamera != false &&
            (local_638 == Perspective)))) {
          local_628 = 1.0;
          UInterchangeStandardCameraNode::GetCustomAspectRatio
                    ((UInterchangeStandardCameraNode *)param_3,&local_628);
          local_620[0] = __real_42100000 / local_628;
          local_5b8 = 36.0;
          local_624 = 90.0;
          UInterchangeStandardCameraNode::GetCustomFieldOfView
                    ((UInterchangeStandardCameraNode *)param_3,&local_624);
          dVar4 = tan((double)(local_624 * __real_3c8efa35 * __real_3f000000));
          local_5bc = (float)((__real_3fe0000000000000 / dVar4) * (double)local_620[0]);
          pUVar7 = Z_Construct_UClass_ACineCameraActor_NoRegister();
          pFVar9 = UObjectBaseUtility::GetPathName
                             ((UObjectBaseUtility *)pUVar7,&local_2e8,(UObject *)0x0);
          UInterchangeActorFactoryNode::SetCustomActorClassName(param_1,pFVar9);
          if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
          }
          local_62e = '\x02';
          UInterchangeActorFactoryNode::SetCustomMobility(param_1,&local_62e,true);
          this_00 = Cast<UInterchangePhysicalCameraFactoryNode,UInterchangeActorFactoryNode>
                              (param_1);
          if (this_00 == (UInterchangePhysicalCameraFactoryNode *)0x0) {
            return;
          }
          UInterchangePhysicalCameraFactoryNode::SetCustomFocalLength(this_00,&local_5bc,true);
          UInterchangePhysicalCameraFactoryNode::SetCustomSensorHeight(this_00,local_620,true);
          UInterchangePhysicalCameraFactoryNode::SetCustomSensorWidth(this_00,&local_5b8,true);
          local_62d = DoNotOverride;
          UInterchangePhysicalCameraFactoryNode::SetCustomFocusMethod(this_00,&local_62d,true);
          return;
        }
        pUVar7 = Z_Construct_UClass_ACameraActor_NoRegister();
        pFVar9 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)pUVar7,&local_2d8,(UObject *)0x0);
        UInterchangeActorFactoryNode::SetCustomActorClassName(param_1,pFVar9);
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        local_62c = '\x02';
        UInterchangeActorFactoryNode::SetCustomMobility(param_1,&local_62c,true);
        pUVar7 = Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_NoRegister();
        iVar15 = (int)pUVar7->_padding_;
        if (*(int *)(param_1->_padding_ + 0x38) < iVar15) {
          return;
        }
        if ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
            &pUVar7->_padding_) {
          return;
        }
        bVar6 = UInterchangeStandardCameraNode::GetCustomProjectionMode
                          ((UInterchangeStandardCameraNode *)param_3,&local_638);
        if (bVar6) {
          local_62b[0].Value = local_638;
          UInterchangeStandardCameraFactoryNode::SetCustomProjectionMode
                    ((UInterchangeStandardCameraFactoryNode *)param_1,local_62b,true);
        }
        pFVar9 = (FString *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,local_2c8);
        ::FString::ConcatFC(&local_418,pFVar9,L".GetWidth");
        if (local_2c8[0] != (void *)0x0) {
          FMemory::Free(local_2c8[0]);
        }
        pFVar12 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                  operator*<UE::Interchange::FAttributeStorage>(&param_3->Attributes);
        bVar6 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                          (pFVar12,(FAttributeKey *)&param_3[1]._padding_,&local_418,&local_5b4);
        if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_418.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          UInterchangeStandardCameraFactoryNode::SetCustomWidth
                    ((UInterchangeStandardCameraFactoryNode *)param_1,&local_5b4,true);
        }
        pFVar9 = (FString *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,local_2b8);
        ::FString::ConcatFC(&local_4c0,pFVar9,L".GetNearClipPlane");
        if (local_2b8[0] != (void *)0x0) {
          FMemory::Free(local_2b8[0]);
        }
        pFVar12 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                  operator*<UE::Interchange::FAttributeStorage>(&param_3->Attributes);
        bVar6 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                          (pFVar12,(FAttributeKey *)&param_3[1]._padding_,&local_4c0,&local_5b0);
        if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          UInterchangeStandardCameraFactoryNode::SetCustomNearClipPlane
                    ((UInterchangeStandardCameraFactoryNode *)param_1,&local_5b0,true);
        }
        pFVar9 = (FString *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,local_2a8);
        ::FString::ConcatFC(&local_4b0,pFVar9,L".GetFarClipPlane");
        if (local_2a8[0] != (void *)0x0) {
          FMemory::Free(local_2a8[0]);
        }
        pFVar12 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                  operator*<UE::Interchange::FAttributeStorage>(&param_3->Attributes);
        bVar6 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                          (pFVar12,(FAttributeKey *)&param_3[1].Attributes.SharedReferenceCount,
                           &local_4b0,&local_5ac);
        if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          UInterchangeStandardCameraFactoryNode::SetCustomFarClipPlane
                    ((UInterchangeStandardCameraFactoryNode *)param_1,&local_5ac,true);
        }
        bVar6 = UInterchangeStandardCameraNode::GetCustomAspectRatio
                          ((UInterchangeStandardCameraNode *)param_3,local_5a8);
        if (bVar6) {
          UInterchangeStandardCameraFactoryNode::SetCustomAspectRatio
                    ((UInterchangeStandardCameraFactoryNode *)param_1,local_5a8,true);
        }
        bVar6 = UInterchangeStandardCameraNode::GetCustomFieldOfView
                          ((UInterchangeStandardCameraNode *)param_3,(float *)&local_5a0);
        if (!bVar6) {
          return;
        }
        UInterchangeStandardCameraFactoryNode::SetCustomFieldOfView
                  ((UInterchangeStandardCameraFactoryNode *)param_1,(float *)&local_5a0,true);
        return;
      }
      pUVar7 = Z_Construct_UClass_UInterchangeDecalNode_NoRegister();
      iVar15 = (int)pUVar7->_padding_;
      if ((*(int *)(param_3->_padding_ + 0x38) < iVar15) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar7->_padding_)) {
        pUVar13 = Cast<UInterchangeVolumeNode,UInterchangeBaseNode_const_>(param_3);
        if (pUVar13 == (UInterchangeVolumeNode *)0x0) {
          return;
        }
        pUVar7 = Z_Construct_UClass_UInterchangeHeterogeneousVolumeActorFactoryNode_NoRegister();
        iVar15 = (int)pUVar7->_padding_;
        if (((*(int *)(param_1->_padding_ + 0x38) < iVar15) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
             &pUVar7->_padding_)) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<336199233793164577>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericScenesPipeline.cpp"
                               ,0x521,"FactoryNode"),
           param_1 = (UInterchangeActorFactoryNode *)
                     (UInterchangeHeterogeneousVolumeActorFactoryNode *)0x0, bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_108._0_8_ = (FScriptContainerElement *)0x0;
        local_108._8_8_ = 0;
        local_e8 = (void *)0x0;
        local_e0 = 0;
        local_dc = 0x80;
        local_d8 = 0xffffffff;
        local_d4 = 0;
        local_c8 = (ForElementType<FSetElementId>)0x0;
        local_c0 = 0;
        UInterchangeSceneNode::GetSlotMaterialDependencies
                  (param_2,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                            *)local_108);
        local_608.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_608.Data.ArrayNum = 0;
        local_608.Data.ArrayMax = 0;
        pTVar14 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)local_108,&UE::Interchange::Volume::VolumetricMaterial);
        if ((pTVar14 != (TTuple<FString,FString> *)0x0) &&
           (&pTVar14->field_0x10 != (undefined1 *)0x0)) {
          pFVar9 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid
                             (&local_248,(FString *)&pTVar14->field_0x10);
          if (&local_608 != pFVar9) {
            if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_608.Data.AllocatorInstance.Data);
            }
            local_608.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
            (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_608.Data.ArrayNum = (pFVar9->Data).ArrayNum;
            local_608.Data.ArrayMax = (pFVar9->Data).ArrayMax;
            (pFVar9->Data).ArrayNum = 0;
            (pFVar9->Data).ArrayMax = 0;
          }
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          if (1 < local_608.Data.ArrayNum) {
            UInterchangeHeterogeneousVolumeActorFactoryNode::SetCustomVolumetricMaterialUid
                      ((UInterchangeHeterogeneousVolumeActorFactoryNode *)param_1,&local_608);
          }
        }
        if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_608.Data.AllocatorInstance.Data);
        }
        local_c0 = 0;
        if (local_c8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_c8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_108,0,local_108._8_4_);
        iVar15 = SUB84(local_108._8_8_,4);
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
        if (iVar15 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
        }
        local_d8 = 0xffffffff;
        local_d4 = 0;
        local_e0 = 0;
        if (0x80 < local_dc) {
          local_dc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
        }
        local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_108._0_8_;
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
          local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_108._0_8_;
        }
        goto LAB_14e7e01bd;
      }
      pUVar7 = Z_Construct_UClass_UInterchangeDecalActorFactoryNode_NoRegister();
      iVar15 = 0;
      iVar2 = (int)pUVar7->_padding_;
      if (((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
           &pUVar7->_padding_)) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<336199233793164546>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericScenesPipeline.cpp"
                             ,0x502,"DecalActorFactory"),
         param_1 = (UInterchangeActorFactoryNode *)(UInterchangeDecalActorFactoryNode *)0x0, bVar6))
      {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (FString *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,local_298);
      ::FString::ConcatFC(&local_4a0,pFVar9,L".GetDecalSize");
      if (local_298[0] != (void *)0x0) {
        FMemory::Free(local_298[0]);
      }
      pFVar12 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                operator*<UE::Interchange::FAttributeStorage>(&param_3->Attributes);
      bVar6 = UE::Interchange::FAttributeStorage::ContainAttribute
                        (pFVar12,(FAttributeKey *)&param_3[1]._padding_);
      if (bVar6) {
        UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TVector<double>,void>
                  (pFVar12,&local_4d8,(FAttributeKey *)&param_3[1]._padding_);
        bVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<double>,void>
                ::IsValid(&local_4d8);
        if (bVar6) {
          EVar11 = UE::Interchange::FAttributeStorage::
                   TAttributeHandle<UE::Math::TVector<double>,void>::Get(&local_4d8,&local_1d0);
          if ((EVar11 & Operation_Success) != None) {
            if (local_4d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4d8.Key.Key.Data.AllocatorInstance.Data);
            }
            bVar6 = true;
            goto LAB_14e7e1349;
          }
          ::FString::FString(&local_288,(FString *)&param_3[1]._padding_);
          pFVar9 = ::FString::FString(&local_168,&local_4a0);
          UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar9,(FAttributeKey *)&local_288);
        }
        if (local_4d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar6 = false;
      }
      else {
        bVar6 = false;
      }
LAB_14e7e1349:
      if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        UInterchangeDecalActorFactoryNode::SetCustomDecalSize
                  ((UInterchangeDecalActorFactoryNode *)param_1,&local_1d0,true);
      }
      pFVar9 = (FString *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,local_278);
      ::FString::ConcatFC(&local_490,pFVar9,L".GetSortOrder");
      if (local_278[0] != (void *)0x0) {
        FMemory::Free(local_278[0]);
      }
      pFVar12 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                operator*<UE::Interchange::FAttributeStorage>(&param_3->Attributes);
      bVar6 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                        (pFVar12,(FAttributeKey *)(param_3 + 1),&local_490,local_5f8);
      if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_490.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        UInterchangeDecalActorFactoryNode::SetCustomSortOrder
                  ((UInterchangeDecalActorFactoryNode *)param_1,local_5f8,true);
      }
      local_5f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5f0.Data.ArrayNum = 0;
      local_5f0.Data.ArrayMax = 0;
      pFVar9 = (FString *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,local_268);
      ::FString::ConcatFC(&local_480,pFVar9,L".GetDecalMaterialPathName");
      if (local_268[0] != (void *)0x0) {
        FMemory::Free(local_268[0]);
      }
      pFVar12 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                operator*<UE::Interchange::FAttributeStorage>(&param_3->Attributes);
      bVar6 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                        (pFVar12,(FAttributeKey *)&param_3[1]._padding_,&local_480,&local_5f0);
      if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_480.Data.AllocatorInstance.Data);
      }
      local_388.Data.AllocatorInstance.Data = local_5f0.Data.AllocatorInstance.Data;
      if (bVar6) {
        UInterchangeDecalActorFactoryNode::SetCustomDecalMaterialPathName
                  ((UInterchangeDecalActorFactoryNode *)param_1,&local_5f0);
        local_468 = local_5f0.Data.AllocatorInstance.Data;
        if (local_5f0.Data.ArrayNum != 0) {
          iVar15 = local_5f0.Data.ArrayNum + -1;
        }
        local_258._12_4_ = uStack_45c;
        local_258.Size = iVar15;
        local_258.DataPtr = (wchar_t *)local_5f0.Data.AllocatorInstance.Data;
        iStack_460 = iVar15;
        bVar6 = FPackageName::IsValidObjectPath(&local_258,(FText *)0x0);
        local_388.Data.AllocatorInstance.Data = local_5f0.Data.AllocatorInstance.Data;
        if (!bVar6) {
          UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_548,&local_5f0);
          UInterchangeDecalActorFactoryNode::SetCustomDecalMaterialPathName
                    ((UInterchangeDecalActorFactoryNode *)param_1,&local_548);
          UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                    ((UInterchangeFactoryBaseNode *)param_1,&local_548);
          local_388.Data.AllocatorInstance.Data = local_5f0.Data.AllocatorInstance.Data;
          if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_548.Data.AllocatorInstance.Data);
            local_388.Data.AllocatorInstance.Data = local_5f0.Data.AllocatorInstance.Data;
          }
        }
      }
      goto LAB_14e7e01bd;
    }
    pUVar7 = Z_Construct_UClass_ACineCameraActor_NoRegister();
    pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_378,(UObject *)0x0)
    ;
    UInterchangeActorFactoryNode::SetCustomActorClassName(param_1,pFVar9);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    local_631 = '\x02';
    UInterchangeActorFactoryNode::SetCustomMobility(param_1,&local_631,true);
    pUVar7 = Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_NoRegister();
    iVar15 = (int)pUVar7->_padding_;
    if (*(int *)(param_1->_padding_ + 0x38) < iVar15) {
      return;
    }
    if ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar7->_padding_) {
      return;
    }
    pFVar9 = (FString *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,local_368);
    ::FString::ConcatFC(&local_458,pFVar9,L".GetFocalLength");
    if (local_368[0] != (void *)0x0) {
      FMemory::Free(local_368[0]);
    }
    if (((param_3->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar12 = (param_3->Attributes).Object;
    bVar6 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (pFVar12,(FAttributeKey *)(param_3 + 1));
    if (bVar6) {
      UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
                (pFVar12,&local_538,(FAttributeKey *)(param_3 + 1));
      bVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_538);
      if (bVar6) {
        EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                           (&local_538,&local_5c8);
        if ((EVar11 & Operation_Success) != None) {
          if (local_538.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_538.Key.Key.Data.AllocatorInstance.Data);
          }
          bVar6 = true;
          goto LAB_14e7e09ff;
        }
        ::FString::FString(&local_358,(FString *)(param_3 + 1));
        pFVar9 = ::FString::FString(&local_1a8,&local_458);
        UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar9,(FAttributeKey *)&local_358);
      }
      if (local_538.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_538.Key.Key.Data.AllocatorInstance.Data);
      }
      bVar6 = false;
    }
    else {
      bVar6 = false;
    }
LAB_14e7e09ff:
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      UInterchangePhysicalCameraFactoryNode::SetCustomFocalLength
                ((UInterchangePhysicalCameraFactoryNode *)param_1,&local_5c8,true);
    }
    pFVar9 = (FString *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,local_348);
    ::FString::ConcatFC(&local_448,pFVar9,L".GetSensorHeight");
    if (local_348[0] != (void *)0x0) {
      FMemory::Free(local_348[0]);
    }
    if (((param_3->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar12 = (param_3->Attributes).Object;
    bVar6 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (pFVar12,(FAttributeKey *)&param_3[1]._padding_);
    if (bVar6) {
      UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
                (pFVar12,&local_520,(FAttributeKey *)&param_3[1]._padding_);
      bVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_520);
      if (bVar6) {
        EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                           (&local_520,&local_5c4);
        if ((EVar11 & Operation_Success) != None) {
          if (local_520.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_520.Key.Key.Data.AllocatorInstance.Data);
          }
          bVar6 = true;
          goto LAB_14e7e0b38;
        }
        ::FString::FString(&local_338,(FString *)&param_3[1]._padding_);
        pFVar9 = ::FString::FString(&local_198,&local_448);
        UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar9,(FAttributeKey *)&local_338);
      }
      if (local_520.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_520.Key.Key.Data.AllocatorInstance.Data);
      }
      bVar6 = false;
    }
    else {
      bVar6 = false;
    }
LAB_14e7e0b38:
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      UInterchangePhysicalCameraFactoryNode::SetCustomSensorHeight
                ((UInterchangePhysicalCameraFactoryNode *)param_1,&local_5c4,true);
    }
    pFVar9 = (FString *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,local_328);
    ::FString::ConcatFC(&local_438,pFVar9,L".GetSensorWidth");
    if (local_328[0] != (void *)0x0) {
      FMemory::Free(local_328[0]);
    }
    if (((param_3->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar12 = (param_3->Attributes).Object;
    bVar6 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (pFVar12,(FAttributeKey *)&param_3[1]._padding_);
    if (bVar6) {
      UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
                (pFVar12,&local_508,(FAttributeKey *)&param_3[1]._padding_);
      bVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_508);
      if (bVar6) {
        EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                           (&local_508,&local_5c0);
        if ((EVar11 & Operation_Success) != None) {
          if (local_508.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_508.Key.Key.Data.AllocatorInstance.Data);
          }
          bVar6 = true;
          goto LAB_14e7e0c68;
        }
        ::FString::FString(&local_318,(FString *)&param_3[1]._padding_);
        pFVar9 = ::FString::FString(&local_188,&local_438);
        UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar9,(FAttributeKey *)&local_318);
      }
      if (local_508.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.Key.Key.Data.AllocatorInstance.Data);
      }
      bVar6 = false;
    }
    else {
      bVar6 = false;
    }
LAB_14e7e0c68:
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      UInterchangePhysicalCameraFactoryNode::SetCustomSensorWidth
                ((UInterchangePhysicalCameraFactoryNode *)param_1,&local_5c0,true);
    }
    pFVar9 = (FString *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,local_308);
    ::FString::ConcatFC(&local_428,pFVar9,L".GetEnableDepthOfField");
    if (local_308[0] != (void *)0x0) {
      FMemory::Free(local_308[0]);
    }
    if (((param_3->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = &param_3[1].Attributes.SharedReferenceCount;
    pFVar12 = (param_3->Attributes).Object;
    bVar6 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar12,(FAttributeKey *)pFVar1);
    if (bVar6) {
      UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
                (pFVar12,&local_4f0,(FAttributeKey *)pFVar1);
      bVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_4f0);
      if (bVar6) {
        EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                           (&local_4f0,&local_630);
        if ((EVar11 & Operation_Success) != None) {
          if (local_4f0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4f0.Key.Key.Data.AllocatorInstance.Data);
          }
          bVar6 = true;
          goto LAB_14e7e0da3;
        }
        ::FString::FString(&local_2f8,(FString *)pFVar1);
        pFVar9 = ::FString::FString(&local_178,&local_428);
        UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar9,(FAttributeKey *)&local_2f8);
      }
      if (local_4f0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f0.Key.Key.Data.AllocatorInstance.Data);
      }
      bVar6 = false;
    }
    else {
      bVar6 = false;
    }
LAB_14e7e0da3:
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      return;
    }
    local_62f = local_630 != false;
    UInterchangePhysicalCameraFactoryNode::SetCustomFocusMethod
              ((UInterchangePhysicalCameraFactoryNode *)param_1,&local_62f,true);
    return;
  }
  local_618.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_618.ArrayNum = 0;
  local_618.ArrayMax = 0;
  UInterchangeBaseNode::GetTargetNodeUids((UInterchangeBaseNode *)param_1,&local_618);
  if ((local_618.ArrayNum < 1) ||
     (pUVar8 = UInterchangeBaseNodeContainer::GetFactoryNode
                         (this->BaseNodeContainer,(FString *)local_618.AllocatorInstance.Data),
     pUVar8 == (UInterchangeFactoryBaseNode *)0x0)) {
LAB_14e7dfe85:
    bVar6 = false;
    pUVar7 = Z_Construct_UClass_AStaticMeshActor_NoRegister();
    pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_218,(UObject *)0x0)
    ;
    UInterchangeActorFactoryNode::SetCustomActorClassName(param_1,pFVar9);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
  else {
    pUVar7 = Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister();
    iVar15 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar15) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar15 * 8)
        != &pUVar7->_padding_)) goto LAB_14e7dfe85;
    bVar6 = true;
    pUVar7 = Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
    pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_228,(UObject *)0x0)
    ;
    UInterchangeActorFactoryNode::SetCustomActorClassName(param_1,pFVar9);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    local_637 = '\x02';
    UInterchangeActorFactoryNode::SetCustomMobility(param_1,&local_637,true);
  }
  pUVar7 = Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister();
  iVar15 = (int)pUVar7->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar15) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8)
      != &pUVar7->_padding_)) {
    param_1 = (UInterchangeActorFactoryNode *)(UInterchangeMeshActorFactoryNode *)0x0;
  }
  if ((UInterchangeMeshActorFactoryNode *)param_1 != (UInterchangeMeshActorFactoryNode *)0x0) {
    local_158._0_8_ = (FScriptContainerElement *)0x0;
    local_158._8_8_ = 0;
    local_138 = (void *)0x0;
    local_130 = 0;
    local_12c = 0x80;
    local_128 = 0xffffffff;
    local_124 = 0;
    local_118 = (void *)0x0;
    local_110 = 0;
    UInterchangeSceneNode::GetSlotMaterialDependencies
              (param_2,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)local_158);
    UE::Interchange::MeshesUtilities::
    ApplySlotMaterialDependencies<UInterchangeMeshActorFactoryNode>
              ((UInterchangeMeshActorFactoryNode *)param_1,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_158,this->BaseNodeContainer,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)0x0);
    local_568.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.Data.ArrayNum = 0;
    local_568.Data.ArrayMax = 0;
    bVar5 = UInterchangeSceneNode::GetCustomAnimationAssetUidToPlay(param_2,&local_568);
    if (bVar5) {
      UInterchangeMeshActorFactoryNode::SetCustomAnimationAssetUidToPlay
                ((UInterchangeMeshActorFactoryNode *)param_1,&local_568);
    }
    pFVar9 = UInterchangeBaseNode::GetUniqueID(param_3,&local_1f8);
    pFVar9 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_208,pFVar9);
    UInterchangeFactoryBaseNode::AddFactoryDependencyUid
              ((UInterchangeFactoryBaseNode *)param_1,pFVar9);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      if ((local_618.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UInterchangeMeshActorFactoryNode::SetCustomInstancedAssetFactoryNodeUid
                ((UInterchangeMeshActorFactoryNode *)param_1,
                 (FString *)local_618.AllocatorInstance.Data);
    }
    else {
      pFVar9 = UInterchangeBaseNode::GetUniqueID(param_3,&local_408);
      pFVar9 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_238,pFVar9);
      UInterchangeMeshActorFactoryNode::SetCustomInstancedAssetFactoryNodeUid
                ((UInterchangeMeshActorFactoryNode *)param_1,pFVar9);
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
    }
    local_b8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_b8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_b8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_b8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_b8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_b8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar6 = UInterchangeSceneNode::GetCustomGeometricTransform(param_2,&local_b8);
    if (bVar6) {
      UInterchangeMeshActorFactoryNode::SetCustomGeometricTransform
                ((UInterchangeMeshActorFactoryNode *)param_1,&local_b8);
    }
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
    local_110 = 0;
    if (local_118 != (void *)0x0) {
      FMemory::Free(local_118);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_158,0,local_158._8_4_);
    iVar15 = SUB84(local_158._8_8_,4);
    local_158._8_8_ = local_158._8_8_ & 0xffffffff00000000;
    if (iVar15 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_158,0,(int *)(local_158 + 0xc));
    }
    local_128 = 0xffffffff;
    local_124 = 0;
    local_130 = 0;
    if (0x80 < local_12c) {
      local_12c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),0);
    }
    if (local_138 != (void *)0x0) {
      FMemory::Free(local_138);
    }
    if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_158._0_8_);
    }
  }
  DestructItems<FString,int>((FString *)local_618.AllocatorInstance.Data,local_618.ArrayNum);
  local_388.Data.AllocatorInstance.Data = local_618.AllocatorInstance.Data;
LAB_14e7e01bd:
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUInterchangeGenericLevelPipeline @ 14e7e4640

void __cdecl
UInterchangeGenericLevelPipeline::StaticRegisterNativesUInterchangeGenericLevelPipeline(void)

{
  return;
}

