// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 11

// StaticClass @ 14e72f6c0

UClass * __cdecl UInterchangeGenericGroomPipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericGroomPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericGroomPipeline,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericGroomPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericGroomPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.InnerSingleton;
}

// UInterchangeGenericGroomPipeline @ 14e767320

UInterchangeGenericGroomPipeline * __thiscall
UInterchangeGenericGroomPipeline::UInterchangeGenericGroomPipeline
          (UInterchangeGenericGroomPipeline *this,FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bEnableGroomTypesImport = false;
  this->bImportGrooms = true;
  this->_padding_ = (longlong)&___7UInterchangeGenericGroomPipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  FHairGroupsInterpolation::FHairGroupsInterpolation(&this->GroupInterpolationSettings);
  this->bImportGroomCaches = true;
  (this->GroomAsset).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GroomAsset).AssetPath.PackageName.Number = 0;
  (this->GroomAsset).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GroomAsset).AssetPath.AssetName.Number = 0;
  (this->GroomAsset).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroomAsset).SubPathString.Data.ArrayNum = 0;
  (this->GroomAsset).SubPathString.Data.ArrayMax = 0;
  this->ImportGroomCacheType = All;
  this->bOverrideTimeRange = false;
  this->FrameStart = 0;
  this->FrameEnd = 1;
  return this;
}

// UInterchangeGenericGroomPipeline @ 14e7673c0

UInterchangeGenericGroomPipeline * __thiscall
UInterchangeGenericGroomPipeline::UInterchangeGenericGroomPipeline
          (UInterchangeGenericGroomPipeline *this,FObjectInitializer *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bEnableGroomTypesImport = false;
  this->bImportGrooms = true;
  this->_padding_ = (longlong)&___7UInterchangeGenericGroomPipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  FHairGroupsInterpolation::FHairGroupsInterpolation(&this->GroupInterpolationSettings);
  this->bImportGroomCaches = true;
  (this->GroomAsset).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GroomAsset).AssetPath.PackageName.Number = 0;
  (this->GroomAsset).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GroomAsset).AssetPath.AssetName.Number = 0;
  (this->GroomAsset).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroomAsset).SubPathString.Data.ArrayNum = 0;
  (this->GroomAsset).SubPathString.Data.ArrayMax = 0;
  this->ImportGroomCacheType = All;
  this->bOverrideTimeRange = false;
  this->FrameStart = 0;
  this->FrameEnd = 1;
  return this;
}

// ~UInterchangeGenericGroomPipeline @ 14e76c080

void __thiscall
UInterchangeGenericGroomPipeline::~UInterchangeGenericGroomPipeline
          (UInterchangeGenericGroomPipeline *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericGroomPipeline__6B_;
  pFVar1 = (this->GroomAsset).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// operator() @ 14e772190

void __thiscall
`UInterchangeGenericGroomPipeline::ExecutePipeline'::__l11::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UInterchangeBaseNode *local_18 [2];
  
  if (param_2 != (UInterchangeBaseNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangeGroomNode_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      pFVar2 = *(ForAnyElementType **)this;
      local_18[0] = param_2;
      if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
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
      *(UInterchangeBaseNode **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
      return;
    }
  }
  return;
}

// operator() @ 14e773db0

void __thiscall
`UInterchangeGenericGroomPipeline::ExecutePipeline'::__l35::<lambda_2>::operator()
          (void *this,EInterchangeGroomCacheImportType param_1)

{
  longlong lVar1;
  bool bVar2;
  UInterchangeGroomCacheFactoryNode *this_00;
  UClass *pUVar3;
  FString *pFVar4;
  int iVar5;
  int local_res10 [2];
  FString local_18;
  
  if (((*(EInterchangeGroomCacheImportType *)(*(longlong *)this + 0x188) & param_1) != None) &&
     (this_00 = (UInterchangeGroomCacheFactoryNode *)
                UE::InterchangeGroomPipeline::Private::CreateGroomFactoryNode
                          (*(UInterchangeBaseNodeContainer **)((longlong)this + 8),
                           *(UInterchangeGroomNode **)((longlong)this + 0x10),param_1),
     this_00 != (UInterchangeGroomCacheFactoryNode *)0x0)) {
    pUVar3 = Z_Construct_UClass_UInterchangeGroomCacheFactoryNode_NoRegister();
    iVar5 = (int)pUVar3->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar3->_padding_)) {
      if (*(UInterchangeBaseNode **)((longlong)this + 0x18) == (UInterchangeBaseNode *)0x0) {
        UInterchangeGroomCacheFactoryNode::SetCustomGroomAssetPath
                  (this_00,(FSoftObjectPath *)(*(longlong *)this + 0x168));
      }
      else {
        pFVar4 = UInterchangeBaseNode::GetUniqueID
                           (*(UInterchangeBaseNode **)((longlong)this + 0x18),&local_18);
        UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                  ((UInterchangeFactoryBaseNode *)this_00,pFVar4);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        lVar1 = *(longlong *)this;
        if ((*(char *)(lVar1 + 0x49) != '\0') && (*(longlong *)(lVar1 + 0x108) != 0)) {
          pUVar3 = Z_Construct_UClass_UGroomCache_NoRegister();
          bVar2 = FObjectPtr::IsA((FObjectPtr *)(lVar1 + 0x108),pUVar3);
          if ((bVar2) && (*(longlong *)(lVar1 + 0x108) != 0)) {
            UInterchangeBaseNode::SetEnabled
                      (*(UInterchangeBaseNode **)((longlong)this + 0x18),false);
          }
        }
      }
      if (*(char *)(*(longlong *)this + 0x189) != '\0') {
        UInterchangeGroomCacheFactoryNode::SetCustomStartFrame
                  (this_00,(int *)(*(longlong *)this + 0x18c));
        lVar1 = *(longlong *)this;
        iVar5 = *(int *)(lVar1 + 0x18c) + 1;
        if (iVar5 < *(int *)(lVar1 + 400)) {
          iVar5 = *(int *)(lVar1 + 400);
        }
        *(int *)(lVar1 + 400) = iVar5;
        UInterchangeGroomCacheFactoryNode::SetCustomEndFrame
                  (this_00,(int *)(*(longlong *)this + 400));
        local_res10[0] =
             (*(int *)(*(longlong *)this + 400) - *(int *)(*(longlong *)this + 0x18c)) + 1;
        UInterchangeGroomCacheFactoryNode::SetCustomNumFrames(this_00,local_res10);
      }
    }
  }
  return;
}

// ExecutePipeline @ 14e7a5170

void __thiscall
UInterchangeGenericGroomPipeline::ExecutePipeline
          (UInterchangeGenericGroomPipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  int iVar1;
  UInterchangeGroomNode *this_00;
  int iVar2;
  UInterchangeGroomFactoryNode *pUVar3;
  UClass *pUVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 **local_res8;
  code *local_88;
  undefined8 ***local_80;
  undefined8 *local_78;
  ulonglong local_70;
  TOptional<FInterchangeGroomPayloadKey> local_68;
  UInterchangeGenericGroomPipeline *local_48;
  UInterchangeBaseNodeContainer *local_40;
  UInterchangeGroomNode *local_38;
  UInterchangeGroomFactoryNode *local_30;
  
  if ((this->bEnableGroomTypesImport != false) && (param_1 != (UInterchangeBaseNodeContainer *)0x0))
  {
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    if ((this->bImportGrooms != false) || (this->bImportGroomCaches != false)) {
      local_res8 = &local_78;
      local_80 = &local_res8;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UInterchangeGenericGroomPipeline::ExecutePipeline'::__l11::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
                 ::Call;
      UInterchangeBaseNodeContainer::IterateNodes
                (param_1,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)
                         &local_88);
      iVar2 = (int)local_70;
      uVar5 = (ulonglong)(int)local_70;
      pcVar6 = (code *)(local_78 + uVar5);
      puVar7 = local_78;
      local_88 = pcVar6;
      while( true ) {
        if ((int)uVar5 != iVar2) {
          `TCheckedPointerIterator<UInterchangeGroomNode_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if ((code *)puVar7 == pcVar6) break;
        this_00 = (UInterchangeGroomNode *)*puVar7;
        UInterchangeGroomNode::GetPayloadKey(this_00,&local_68);
        if (local_68.bIsSet != false) {
          if ((this->bImportGrooms == false) || (local_68.TypedValue.Type != STATIC)) {
            pUVar3 = (UInterchangeGroomFactoryNode *)0x0;
            if (this->bImportGrooms != false) {
              pUVar3 = (UInterchangeGroomFactoryNode *)
                       UE::InterchangeGroomPipeline::Private::CreateGroomFactoryNode
                                 (param_1,this_00,None);
              if (pUVar3 != (UInterchangeGroomFactoryNode *)0x0) {
                pUVar4 = Z_Construct_UClass_UInterchangeGroomFactoryNode_NoRegister();
                iVar1 = (int)pUVar4->_padding_;
                if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
                    == &pUVar4->_padding_)) {
                  UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings
                            (pUVar3,&this->GroupInterpolationSettings);
                  goto LAB_14e7a530e;
                }
              }
              pUVar3 = (UInterchangeGroomFactoryNode *)0x0;
            }
LAB_14e7a530e:
            if ((this->bImportGroomCaches != false) &&
               ((this->bImportGrooms != false ||
                ((this->GroomAsset).AssetPath.PackageName != (FName)0x0)))) {
              local_48 = this;
              local_40 = param_1;
              local_38 = this_00;
              local_30 = pUVar3;
              `UInterchangeGenericGroomPipeline::ExecutePipeline'::__l35::<lambda_2>::operator()
                        (&local_48,Strands);
              `UInterchangeGenericGroomPipeline::ExecutePipeline'::__l35::<lambda_2>::operator()
                        (&local_48,Guides);
            }
          }
          else {
            pUVar3 = (UInterchangeGroomFactoryNode *)
                     UE::InterchangeGroomPipeline::Private::CreateGroomFactoryNode
                               (param_1,this_00,None);
            if (pUVar3 != (UInterchangeGroomFactoryNode *)0x0) {
              pUVar4 = Z_Construct_UClass_UInterchangeGroomFactoryNode_NoRegister();
              iVar1 = (int)pUVar4->_padding_;
              if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                  &pUVar4->_padding_)) {
                UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings
                          (pUVar3,&this->GroupInterpolationSettings);
              }
            }
          }
          pcVar6 = local_88;
          if ((local_68.bIsSet != false) &&
             (local_68.TypedValue.UniqueId.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_68.TypedValue.UniqueId.Data.AllocatorInstance.Data);
            pcVar6 = local_88;
          }
        }
        uVar5 = local_70 & 0xffffffff;
        puVar7 = puVar7 + 1;
      }
    }
    if (local_78 != (undefined8 *)0x0) {
      FMemory::Free(local_78);
    }
  }
  return;
}

// GetPipelineCategory @ 14e7b91a0

FString * __cdecl
UInterchangeGenericGroomPipeline::GetPipelineCategory
          (FString *__return_storage_ptr__,UClass *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"Grooms");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7b98c0

UClass * __cdecl UInterchangeGenericGroomPipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericGroomPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericGroomPipeline,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericGroomPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericGroomPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.InnerSingleton;
}

// IsSettingsAreValid @ 14e7c78a0

bool __thiscall
UInterchangeGenericGroomPipeline::IsSettingsAreValid
          (UInterchangeGenericGroomPipeline *this,TOptional<FText> *param_1)

{
  FText *pFVar1;
  int local_res8 [4];
  int *local_res18 [2];
  undefined1 local_18 [16];
  
  if ((((this->bEnableGroomTypesImport != false) && (this->bImportGroomCaches != false)) &&
      (this->bImportGrooms == false)) && ((this->GroomAsset).AssetPath.PackageName == (FName)0x0)) {
    local_res18[0] = local_res8;
    local_18._8_8_ = local_res18;
    local_res8[0] = 0;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UInterchangeGenericGroomPipeline::IsSettingsAreValid'::__l5::<lambda_1>,bool,FString_const_&,UInterchangeGroomNode_*>
         ::Call;
    UInterchangeBaseNodeContainer::BreakableIterateNodesOfType<UInterchangeGroomNode>
              ((UInterchangeBaseNodeContainer *)this->_padding_,
               (TFunctionRef<bool___cdecl(FString_const_&,UInterchangeGroomNode_*)> *)local_18);
    if (local_res8[0] != 0) {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_18,L"UInterchangeGenericGroomPipeline",
                          L"GroomAssetMustBeSpecified",
                          L"When importing a groom cache without importing its associated groom asset, a previously imported and compatible groom asset must be specified."
                         );
      TOptional<FText>::operator=(param_1,pFVar1);
      if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
      }
      return false;
    }
  }
  return true;
}

// StaticRegisterNativesUInterchangeGenericGroomPipeline @ 14e7e4630

void __cdecl
UInterchangeGenericGroomPipeline::StaticRegisterNativesUInterchangeGenericGroomPipeline(void)

{
  return;
}

