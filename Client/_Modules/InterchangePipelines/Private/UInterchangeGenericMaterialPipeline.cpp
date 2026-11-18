// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 89

// StaticClass @ 14e72f8e0

UClass * __cdecl UInterchangeGenericMaterialPipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericMaterialPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericMaterialPipeline,0x1c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericMaterialPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericMaterialPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.InnerSingleton;
}

// UInterchangeGenericMaterialPipeline @ 14e767540

UInterchangeGenericMaterialPipeline * __thiscall
UInterchangeGenericMaterialPipeline::UInterchangeGenericMaterialPipeline
          (UInterchangeGenericMaterialPipeline *this,FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportMaterials = true;
  this->SearchLocation = Local;
  this->_padding_ = (longlong)&___7UInterchangeGenericMaterialPipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  (this->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetName).Data.ArrayNum = 0;
  (this->AssetName).Data.ArrayMax = 0;
  this->MaterialImport = ImportAsMaterials;
  this->bIdentifyDuplicateMaterials = false;
  this->bCreateMaterialInstanceForParent = false;
  (this->ParentMaterial).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ParentMaterial).AssetPath.PackageName.Number = 0;
  (this->ParentMaterial).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ParentMaterial).AssetPath.AssetName.Number = 0;
  (this->ParentMaterial).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentMaterial).SubPathString.Data.ArrayNum = 0;
  (this->ParentMaterial).SubPathString.Data.ArrayMax = 0;
  (this->TexturePipeline).field0_0x0.DebugPtr = (UInterchangeGenericTexturePipeline *)0x0;
  (this->SparseVolumeTexturePipeline).field0_0x0.DebugPtr =
       (UInterchangeSparseVolumeTexturePipeline *)0x0;
  this->bOverrideDisplacement = false;
  (this->BaseNodeContainer).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  (this->SourceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDatas).ArrayNum = 0;
  (this->SourceDatas).ArrayMax = 0;
  (this->MaterialExpressionCreationContextStack).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialExpressionCreationContextStack).ArrayNum = 0;
  (this->MaterialExpressionCreationContextStack).ArrayMax = 0;
  this->AttributeStorageNode = (UInterchangeBaseNode *)0x0;
  this->OverrideDisplacementCenter = 0.5;
  (this->MaterialCreationContext).InputTypeBeingProcessed = Color;
  return this;
}

// UInterchangeGenericMaterialPipeline @ 14e767610

UInterchangeGenericMaterialPipeline * __thiscall
UInterchangeGenericMaterialPipeline::UInterchangeGenericMaterialPipeline
          (UInterchangeGenericMaterialPipeline *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UInterchangeGenericTexturePipeline *pUVar5;
  UInterchangeSparseVolumeTexturePipeline *pUVar6;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,pFVar2);
  this->bImportMaterials = true;
  this->SearchLocation = Local;
  this->_padding_ = (longlong)&___7UInterchangeGenericMaterialPipeline__6B_;
  this->OverrideDisplacementCenter = 0.5;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  (this->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetName).Data.ArrayNum = 0;
  (this->AssetName).Data.ArrayMax = 0;
  this->MaterialImport = ImportAsMaterials;
  this->bIdentifyDuplicateMaterials = false;
  this->bCreateMaterialInstanceForParent = false;
  (this->ParentMaterial).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ParentMaterial).AssetPath.PackageName.Number = 0;
  (this->ParentMaterial).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ParentMaterial).AssetPath.AssetName.Number = 0;
  (this->ParentMaterial).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentMaterial).SubPathString.Data.ArrayNum = 0;
  (this->ParentMaterial).SubPathString.Data.ArrayMax = 0;
  (this->TexturePipeline).field0_0x0.DebugPtr = (UInterchangeGenericTexturePipeline *)0x0;
  (this->SparseVolumeTexturePipeline).field0_0x0.DebugPtr =
       (UInterchangeSparseVolumeTexturePipeline *)0x0;
  this->bOverrideDisplacement = false;
  (this->BaseNodeContainer).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  (this->SourceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDatas).ArrayNum = 0;
  (this->SourceDatas).ArrayMax = 0;
  (this->MaterialExpressionCreationContextStack).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialExpressionCreationContextStack).ArrayNum = 0;
  (this->MaterialExpressionCreationContextStack).ArrayMax = 0;
  this->AttributeStorageNode = (UInterchangeBaseNode *)0x0;
  (this->MaterialCreationContext).InputTypeBeingProcessed = Color;
  pFVar3 = ::FName::FName(&local_res8,"TexturePipeline");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericTexturePipeline::StaticClass();
  pUVar5 = (UInterchangeGenericTexturePipeline *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UInterchangeGenericTexturePipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->TexturePipeline).field0_0x0.DebugPtr = pUVar5;
  pFVar3 = ::FName::FName(&local_res8,"SparseVolumeTexturePipeline");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeSparseVolumeTexturePipeline::StaticClass();
  pUVar6 = (UInterchangeSparseVolumeTexturePipeline *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UInterchangeSparseVolumeTexturePipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->SparseVolumeTexturePipeline).field0_0x0.DebugPtr = pUVar6;
  return this;
}

// ~UInterchangeGenericMaterialPipeline @ 14e76c150

void __thiscall
UInterchangeGenericMaterialPipeline::~UInterchangeGenericMaterialPipeline
          (UInterchangeGenericMaterialPipeline *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericMaterialPipeline__6B_;
  DestructItems<UInterchangeGenericMaterialPipeline::FMaterialExpressionCreationContext,int>
            ((FMaterialExpressionCreationContext *)
             (this->MaterialExpressionCreationContextStack).AllocatorInstance.Data,
             (this->MaterialExpressionCreationContextStack).ArrayNum);
  pFVar1 = (this->MaterialExpressionCreationContextStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentMaterial).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
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

// operator() @ 14e76e090

void __thiscall
`UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode'::__l2::<lambda_1>::
operator()(void *this,FString *param_1)

{
  UInterchangeBaseNode *pUVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pUVar1 = *(UInterchangeBaseNode **)((longlong)this + 0x10);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    (pUVar1,&UE::Interchange::Materials::ThinTranslucent::Parameters::
                             TransmissionColor);
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    (pUVar1,&UE::Interchange::Materials::ThinTranslucent::Parameters::
                             SurfaceCoverage);
  if ((bVar2) || (bVar3)) {
    pwVar4 = L"ThinTranslucentMaterial_";
  }
  else {
    bVar2 = UInterchangeShaderPortsAPI::HasInput
                      (*(UInterchangeBaseNode **)((longlong)this + 0x10),
                       &UE::Interchange::Materials::ClearCoat::Parameters::ClearCoat);
    if (bVar2) {
      pwVar4 = L"ClearCoatMaterial_";
    }
    else {
      bVar2 = UInterchangeShaderPortsAPI::HasInput
                        (*(UInterchangeBaseNode **)((longlong)this + 0x10),
                         &UE::Interchange::Materials::Sheen::Parameters::SheenColor);
      if (bVar2) {
        pwVar4 = L"SheenMaterial_";
      }
      else {
        bVar2 = UInterchangeShaderPortsAPI::HasInput
                          (*(UInterchangeBaseNode **)((longlong)this + 0x10),
                           &UE::Interchange::Materials::Subsurface::Parameters::SubsurfaceColor);
        pwVar4 = L"SubsurfaceMaterial_";
        if (!bVar2) {
          pwVar4 = L"PBRSurfaceMaterial_";
        }
      }
    }
  }
  ::FString::operator=(&local_68,pwVar4);
  ::FString::ConcatCF(&local_28,L"/InterchangeAssets/Materials/",&local_68);
  ::FString::ConcatFF(&local_38,&local_28,param_1);
  ::FString::ConcatFC(&local_48,&local_38,L".");
  ::FString::ConcatFF(&local_58,&local_48,&local_68);
  ::FString::ConcatFF(&local_18,&local_58,param_1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  UInterchangeMaterialInstanceFactoryNode::SetCustomParent
            (*(UInterchangeMaterialInstanceFactoryNode **)((longlong)this + 8),&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14e76e860

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UInterchangeGenericMaterialPipeline::ExecutePipeline'::__l2::<lambda_1>::operator()
          (void *this,UInterchangeBaseNode *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  UInterchangeBaseNode::GetDisplayLabel(param_1,&local_38);
  bVar1 = false;
  iVar4 = 0;
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = iVar4;
  }
  if (iVar3 < 7) {
    if (1 < local_38.Data.ArrayNum) goto LAB_14e76e9cc;
    ::FString::operator=(&local_38,L"UnnamedMaterial");
  }
  else {
    iVar3 = ::FString::Find(&local_38,L"_SKIN",5,IgnoreCase,FromEnd,-1);
    if (iVar3 == -1) goto LAB_14e76e9cc;
    iVar7 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    iVar6 = (iVar7 - iVar3) + -1;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar5 = iVar7;
    if (iVar6 < iVar7) {
      iVar5 = iVar6;
    }
    iVar6 = iVar4;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    ::FString::FString(&local_28,(wchar_t *)(FVar8.Data + ((longlong)iVar7 - (longlong)iVar6) * 2));
    ::FString::RemoveAt(&local_28,0,4,No);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_18.Data.ArrayNum = local_28.Data.ArrayNum;
    local_18.Data.ArrayMax = local_28.Data.ArrayMax;
    bVar2 = ::FString::IsNumeric(&local_18);
    if (bVar2) {
      iVar7 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar7 = iVar4;
      }
      iVar4 = iVar7;
      if (iVar3 < iVar7) {
        iVar4 = iVar3;
      }
      iVar6 = 0;
      if (0 < iVar4) {
        iVar6 = iVar4;
      }
      ::FString::RemoveAt(&local_38,iVar6,iVar7 - iVar3,No);
      bVar1 = true;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_14e76e9cc;
  }
  UInterchangeBaseNode::SetDisplayLabel(param_1,&local_38);
LAB_14e76e9cc:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14e771080

void __thiscall
`UInterchangeGenericMaterialPipeline::HandlePhongModel'::__l6::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  FString *pFVar1;
  FString local_38;
  UInterchangeBaseNode *local_28;
  FString local_20;
  
  UInterchangeGenericMaterialPipeline::CreateMaterialExpressionForInput
            (*(UInterchangeGenericMaterialPipeline **)this,
             (TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_28,
             (UInterchangeBaseMaterialFactoryNode *)**(undefined8 **)((longlong)this + 8),
             (UInterchangeShaderNode *)**(undefined8 **)((longlong)this + 0x10),param_1,
             *(FString **)((longlong)this + 0x18));
  if (local_28 != (UInterchangeBaseNode *)0x0) {
    pFVar1 = UInterchangeBaseNode::GetUniqueID(local_28,&local_38);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)**(undefined8 **)((longlong)this + 0x20),param_1,pFVar1,
               &local_20);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14e7733b0

void __thiscall
`UInterchangeGenericMaterialPipeline::ExecutePipeline'::__l2::<lambda_2>::operator()
          (void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  int iVar1;
  longlong lVar2;
  EInterchangeNodeContainerType EVar3;
  UClass *pUVar4;
  UInterchangeBaseMaterialFactoryNode *local_res20;
  UInterchangeBaseNode *local_18 [2];
  
  EVar3 = UInterchangeBaseNode::GetNodeContainerType(param_2);
  if (EVar3 == TranslatedAsset) {
    if (param_2 == (UInterchangeBaseNode *)0x0) {
      return;
    }
    pUVar4 = Z_Construct_UClass_UInterchangeShaderGraphNode_NoRegister();
    lVar2 = param_2->_padding_;
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      if (param_2 == (UInterchangeBaseNode *)0x0) {
        return;
      }
      pUVar4 = Z_Construct_UClass_UInterchangeMaterialInstanceNode_NoRegister();
      lVar2 = param_2->_padding_;
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        if (param_2 == (UInterchangeBaseNode *)0x0) {
          return;
        }
        pUVar4 = Z_Construct_UClass_UInterchangeMaterialReferenceNode_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          local_18[0] = param_2;
          __l2::<lambda_1>::operator()(*(void **)((longlong)this + 0x20),param_2);
          TSet<UInterchangeMaterialReferenceNode_*,DefaultKeyFuncs<UInterchangeMaterialReferenceNode_*,0>,FDefaultSetAllocator>
          ::Emplace<UInterchangeMaterialReferenceNode_*_const_&>
                    (*(TSet<UInterchangeMaterialReferenceNode_*,DefaultKeyFuncs<UInterchangeMaterialReferenceNode_*,0>,FDefaultSetAllocator>
                       **)((longlong)this + 0x10),(UInterchangeMaterialReferenceNode **)&local_res20
                     ,(bool *)local_18);
        }
      }
      else {
        local_18[0] = param_2;
        __l2::<lambda_1>::operator()(*(void **)((longlong)this + 0x20),param_2);
        TSet<UInterchangeMaterialInstanceNode_*,DefaultKeyFuncs<UInterchangeMaterialInstanceNode_*,0>,FDefaultSetAllocator>
        ::Emplace<UInterchangeMaterialInstanceNode_*_const_&>
                  (*(TSet<UInterchangeMaterialInstanceNode_*,DefaultKeyFuncs<UInterchangeMaterialInstanceNode_*,0>,FDefaultSetAllocator>
                     **)((longlong)this + 8),(UInterchangeMaterialInstanceNode **)&local_res20,
                   (bool *)local_18);
      }
    }
    else {
      local_18[0] = param_2;
      __l2::<lambda_1>::operator()(*(void **)((longlong)this + 0x20),param_2);
      TSet<UInterchangeShaderGraphNode_*,DefaultKeyFuncs<UInterchangeShaderGraphNode_*,0>,FDefaultSetAllocator>
      ::Emplace<UInterchangeShaderGraphNode_*_const_&>
                (*(TSet<UInterchangeShaderGraphNode_*,DefaultKeyFuncs<UInterchangeShaderGraphNode_*,0>,FDefaultSetAllocator>
                   **)this,(UInterchangeShaderGraphNode **)&local_res20,(bool *)local_18);
    }
  }
  else {
    if (EVar3 != FactoryData) {
      return;
    }
    if (param_2 == (UInterchangeBaseNode *)0x0) {
      return;
    }
  }
  pUVar4 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar4->_padding_)) {
    local_18[0] = param_2;
    __l2::<lambda_1>::operator()(*(void **)((longlong)this + 0x20),param_2);
    TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
    ::Emplace<UInterchangeBaseMaterialFactoryNode_*_const_&>
              (*(TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x18),&local_res20,(bool *)local_18);
  }
  return;
}

// operator() @ 14e775160

void __thiscall
`UInterchangeGenericMaterialPipeline::ExecutePipeline'::__l2::<lambda_3>::operator()
          (void *this,FString *param_1,UInterchangeSpecularProfileNode *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UInterchangeSpecularProfileNode *local_res18 [2];
  
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
  *(UInterchangeSpecularProfileNode **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res18[0];
  return;
}

// AdjustSettingsForContext @ 14e780c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeGenericMaterialPipeline::AdjustSettingsForContext
          (UInterchangeGenericMaterialPipeline *this,FInterchangePipelineContextParams *param_1)

{
  UInterchangeGenericTexturePipeline *pUVar1;
  UInterchangeSparseVolumeTexturePipeline *pUVar2;
  bool bVar3;
  
  UInterchangePipelineBase::AdjustSettingsForContext((UInterchangePipelineBase *)this,param_1);
  pUVar1 = (this->TexturePipeline).field0_0x0.DebugPtr;
  if (pUVar1 != (UInterchangeGenericTexturePipeline *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,param_1);
  }
  pUVar2 = (this->SparseVolumeTexturePipeline).field0_0x0.DebugPtr;
  if (pUVar2 != (UInterchangeSparseVolumeTexturePipeline *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,param_1);
  }
  bVar3 = UE::Interchange::InterchangeGenericMaterialPipeline::Private::AreRequiredPackagesLoaded();
  if ((!bVar3) && (2 < (byte)LogInterchangePipeline._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
  }
  return;
}

// CreateBaseMaterialFactoryNode @ 14e792e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeBaseMaterialFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateBaseMaterialFactoryNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeBaseNode *param_1,
          TSubclassOf<UInterchangeBaseMaterialFactoryNode> param_2,bool param_3)

{
  longlong lVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UInterchangeBaseMaterialFactoryNode *pUVar8;
  longlong *plVar9;
  UClass *pUVar10;
  int iVar11;
  undefined1 auStackY_178 [32];
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  ::FString::FString(&local_128,L"_MI");
  UInterchangeBaseNode::GetDisplayLabel(param_1,&local_108);
  pFVar5 = UInterchangeBaseNode::GetUniqueID(param_1,&local_f8);
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_138,pFVar5);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  pUVar10 = (UClass *)0x0;
  if (param_3) {
    iVar11 = local_128.Data.ArrayNum + -1;
    if (local_128.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars(&local_138,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar11);
  }
  bVar4 = UInterchangeBaseNodeContainer::IsNodeUidValid
                    ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_138);
  if (bVar4) {
    pUVar6 = (UClass *)
             UInterchangeBaseNodeContainer::GetFactoryNode
                       ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_138);
    if (pUVar6 != (UClass *)0x0) {
      pUVar7 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
      iVar11 = (int)pUVar7->_padding_;
      if ((iVar11 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
          &pUVar7->_padding_)) goto LAB_14e79314b;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5102957597653203753>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                       ,0x4d7,"MaterialFactoryNode");
    pUVar6 = pUVar10;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UInterchangeBaseMaterialFactoryNode *)(*pcVar3)();
      return pUVar8;
    }
  }
  else {
    lVar1 = *(longlong *)param_2.Class.field0_0x0;
    pUVar6 = pUVar10;
    if ((lVar1 != 0) &&
       (pUVar7 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister(),
       pUVar7 != (UClass *)0x0)) {
      iVar11 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar1 + 0x38) < iVar11) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar6 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    pUVar2 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
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
    pUVar6 = (UClass *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar9 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (pUVar6 == (UClass *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5102957597653203745>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                         ,0x4df,"MaterialFactoryNode");
      pUVar6 = pUVar10;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UInterchangeBaseMaterialFactoryNode *)(*pcVar3)();
        return pUVar8;
      }
    }
    else {
      pUVar2 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
      ::FString::FString(&local_118,L"");
      UInterchangeBaseNodeContainer::SetupNode
                (pUVar2,(UInterchangeBaseNode *)pUVar6,&local_138,&local_108,FactoryData,&local_118)
      ;
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      pFVar5 = UInterchangeBaseNode::GetUniqueID(param_1,&local_e8);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)pUVar6,pFVar5);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar6,&local_d8);
      UInterchangeBaseNode::AddTargetNodeUid(param_1,pFVar5);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14e79314b:
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return (UInterchangeBaseMaterialFactoryNode *)pUVar6;
}

// CreateConstant3VectorExpression @ 14e793690

UInterchangeMaterialExpressionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateConstant3VectorExpression
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          FString *param_2,FString *param_3)

{
  FName FVar1;
  bool bVar2;
  UClass *pUVar3;
  UInterchangeMaterialExpressionFactoryNode *this_00;
  FString *pFVar4;
  FName *pFVar5;
  FName local_38;
  FString local_30;
  FLinearColor local_20;
  
  pUVar3 = Z_Construct_UClass_UMaterialExpressionConstant3Vector_NoRegister();
  this_00 = CreateExpressionNode(this,param_2,param_3,pUVar3);
  pFVar4 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_30,param_2);
  bVar2 = UInterchangeBaseNode::GetLinearColorAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,&local_20);
  if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar5 = ::FName::FName((FName *)&local_30,8,L"Constant",FNAME_Add);
    local_38 = *pFVar5;
    pFVar4 = ::FName::ToString(&local_38,&local_30);
    UInterchangeBaseNode::AddLinearColorAttribute((UInterchangeBaseNode *)this_00,pFVar4,&local_20);
    if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    FVar1 = local_38;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionConstant3Vector_NoRegister();
    pFVar4 = ::FName::ToString(&local_38,&local_30);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FLinearColor>
              ((UInterchangeFactoryBaseNode *)this_00,pFVar4,pUVar3,FVar1);
    if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return this_00;
}

// CreateConstantExpression @ 14e7937c0

UInterchangeMaterialExpressionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateConstantExpression
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          FString *param_2,FString *param_3)

{
  FName FVar1;
  bool bVar2;
  UClass *pUVar3;
  UInterchangeMaterialExpressionFactoryNode *this_00;
  FString *pFVar4;
  FName *pFVar5;
  float local_28 [2];
  FName local_20;
  FString local_18;
  
  pUVar3 = Z_Construct_UClass_UMaterialExpressionConstant_NoRegister();
  this_00 = CreateExpressionNode(this,param_2,param_3,pUVar3);
  pFVar4 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_18,param_2);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute((UInterchangeBaseNode *)param_1,pFVar4,local_28);
  if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar5 = ::FName::FName((FName *)&local_18,1,L"R",FNAME_Add);
    local_20 = *pFVar5;
    pFVar4 = ::FName::ToString(&local_20,&local_18);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)this_00,pFVar4,local_28);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar1 = local_20;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionConstant_NoRegister();
    pFVar4 = ::FName::ToString(&local_20,&local_18);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)this_00,pFVar4,pUVar3,FVar1);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this_00;
}

// CreateExpressionNode @ 14e796090

UInterchangeMaterialExpressionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateExpressionNode
          (UInterchangeGenericMaterialPipeline *this,FString *param_1,FString *param_2,
          UClass *param_3)

{
  UInterchangeMaterialExpressionFactoryNode *this_00;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  ::FString::ConcatFC(&local_38,param_2,L"\\");
  ::FString::ConcatFF(&local_28,&local_38,param_1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this_00 = NewObject<UInterchangeMaterialExpressionFactoryNode>
                      ((UObject *)(this->BaseNodeContainer).field0_0x0.DebugPtr);
  local_res8 = (FName)param_3->_padding_;
  ::FName::ToString(&local_res8,&local_38);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(this_00,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  UInterchangeBaseNodeContainer::SetupNode
            ((this->BaseNodeContainer).field0_0x0.DebugPtr,(UInterchangeBaseNode *)this_00,&local_28
             ,param_1,FactoryData,param_2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this_00;
}

// CreateFunctionCallExpression @ 14e796490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeMaterialExpressionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateFunctionCallExpression
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          FString *param_2,UInterchangeBaseMaterialFactoryNode *param_3)

{
  UInterchangeBaseNodeContainer *pUVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UInterchangeMaterialFunctionCallExpressionFactoryNode *this_00;
  UInterchangeBaseNode *pUVar5;
  FString *pFVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  UInterchangeMaterialFunctionCallExpressionFactoryNode *pUVar10;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  FString local_140;
  TStringView<wchar_t> local_128;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  undefined1 local_f8 [8];
  FString local_f0;
  UInterchangeBaseMaterialFactoryNode *local_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 != (UInterchangeShaderNode *)0x0) {
    local_e0 = param_3;
    pUVar4 = Z_Construct_UClass_UInterchangeFunctionCallShaderNode_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar4->_padding_)) {
      pUVar1 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_NoRegister()
      ;
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_d8,pUVar4);
      local_d8._8_8_ = pUVar1;
      this_00 = (UInterchangeMaterialFunctionCallExpressionFactoryNode *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
      if (local_d8._64_8_ != 0) {
        plVar7 = (longlong *)(local_d8 + 0x50);
        if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_d8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (this_00 != (UInterchangeMaterialFunctionCallExpressionFactoryNode *)0x0) {
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        bVar2 = UInterchangeFunctionCallShaderNode::GetCustomMaterialFunction
                          ((UInterchangeFunctionCallShaderNode *)param_1,&local_140);
        iVar3 = 0;
        if ((bVar2) &&
           (pUVar5 = UInterchangeBaseNodeContainer::GetNode
                               ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_140),
           pUVar5 == (UInterchangeBaseNode *)0x0)) {
          local_108.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
          local_108.Data.ArrayNum = iVar3;
          if (local_140.Data.ArrayNum != 0) {
            local_108.Data.ArrayNum = local_140.Data.ArrayNum + -1;
          }
          local_128._12_4_ = local_108.Data.ArrayMax;
          local_128.Size = local_108.Data.ArrayNum;
          local_128.DataPtr = (wchar_t *)local_140.Data.AllocatorInstance.Data;
          bVar2 = FPackageName::IsValidObjectPath(&local_128,(FText *)0x0);
          if (!bVar2) {
            ::FString::Empty(&local_140);
          }
        }
        pUVar10 = (UInterchangeMaterialFunctionCallExpressionFactoryNode *)0x0;
        if (1 < local_140.Data.ArrayNum) {
          pUVar1 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
          ::FString::FString(&local_108,L"");
          pFVar6 = UInterchangeBaseNode::GetDisplayLabel
                             ((UInterchangeBaseNode *)param_1,(FString *)&local_128);
          UInterchangeBaseNodeContainer::SetupNode
                    (pUVar1,(UInterchangeBaseNode *)this_00,param_2,pFVar6,FactoryData,&local_108);
          if ((FName)local_128.DataPtr != (FName)0x0) {
            FMemory::Free(local_128.DataPtr);
          }
          if ((FName)local_108.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          pUVar5 = UInterchangeBaseNodeContainer::GetNode
                             ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_140);
          if (pUVar5 == (UInterchangeBaseNode *)0x0) {
            if (local_140.Data.ArrayNum != 0) {
              iVar3 = local_140.Data.ArrayNum + -1;
            }
            local_128.Size = iVar3;
            local_128.DataPtr = (wchar_t *)local_140.Data.AllocatorInstance.Data;
            bVar2 = FPackageName::IsValidObjectPath(&local_128,(FText *)0x0);
            if (bVar2) {
              UInterchangeMaterialFunctionCallExpressionFactoryNode::
              SetCustomMaterialFunctionDependency(this_00,&local_140);
              UE::Interchange::InterchangeGenericMaterialPipeline::Private::
              UpdateFunctionCallExpression
                        ((UInterchangeMaterialExpressionFactoryNode *)this_00,&local_140);
            }
          }
          else {
            UInterchangeFactoryBaseNode::BuildFactoryNodeUid((FString *)&local_128,&local_140);
            UInterchangeMaterialFunctionCallExpressionFactoryNode::
            SetCustomMaterialFunctionDependency(this_00,(FString *)&local_128);
            pUVar4 = Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
            local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar4->_padding_;
            ::FName::ToString((FName *)&local_108,(FString *)local_f8);
            UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName
                      ((UInterchangeMaterialExpressionFactoryNode *)this_00,(FString *)local_f8);
            if (local_f8 != (undefined1  [8])0x0) {
              FMemory::Free((void *)local_f8);
            }
            if ((FName)local_128.DataPtr != (FName)0x0) {
              FMemory::Free(local_128.DataPtr);
            }
          }
          local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.ArrayNum = 0;
          local_118.ArrayMax = 0;
          UInterchangeShaderPortsAPI::GatherInputs((UInterchangeBaseNode *)param_1,&local_118);
          iVar3 = local_118.ArrayNum;
          pFVar9 = local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 0x10;
          FVar8.Data = local_118.AllocatorInstance.Data;
          while( true ) {
            if (local_118.ArrayNum != iVar3) {
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_148);
            }
            if (FVar8.Data == pFVar9) break;
            CreateMaterialExpressionForInput
                      (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)local_f8,
                       local_e0,param_1,(FString *)FVar8.Data,param_2);
            if (local_f8 != (undefined1  [8])0x0) {
              pFVar6 = UInterchangeBaseNode::GetUniqueID
                                 ((UInterchangeBaseNode *)local_f8,(FString *)&local_128);
              UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                        ((UInterchangeBaseNode *)this_00,(FString *)FVar8.Data,pFVar6,&local_f0);
              if ((FName)local_128.DataPtr != (FName)0x0) {
                FMemory::Free(local_128.DataPtr);
              }
            }
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            FVar8.Data = FVar8.Data + 0x10;
          }
          DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum)
          ;
          pUVar10 = this_00;
          if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.AllocatorInstance.Data);
          }
        }
        if ((FName)local_140.Data.AllocatorInstance.Data == (FName)0x0) {
          return (UInterchangeMaterialExpressionFactoryNode *)pUVar10;
        }
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
        return (UInterchangeMaterialExpressionFactoryNode *)pUVar10;
      }
    }
  }
  return (UInterchangeMaterialExpressionFactoryNode *)0x0;
}

// CreateInputKey @ 14e7974d0

FString * __thiscall
UInterchangeGenericMaterialPipeline::CreateInputKey
          (UInterchangeGenericMaterialPipeline *this,FString *__return_storage_ptr__,
          FString *param_1,bool param_2)

{
  if (param_2) {
    UInterchangeShaderPortsAPI::MakeInputParameterKey(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  UInterchangeShaderPortsAPI::MakeInputValueKey(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMaterialExpressionForInput @ 14e7981a0

TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> * __thiscall
UInterchangeGenericMaterialPipeline::CreateMaterialExpressionForInput
          (UInterchangeGenericMaterialPipeline *this,
          TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *__return_storage_ptr__,
          UInterchangeBaseMaterialFactoryNode *param_1,UInterchangeShaderNode *param_2,
          FString *param_3,FString *param_4)

{
  int *piVar1;
  TArray<UInterchangeGenericMaterialPipeline::FMaterialExpressionCreationContext,TSizedDefaultAllocator<32>_>
  *pTVar2;
  UInterchangeBaseNode *this_00;
  void *pvVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  EAttributeTypes EVar10;
  int iVar11;
  TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *pTVar12;
  UInterchangeShaderNode *pUVar13;
  UClass *pUVar14;
  UInterchangeMaterialExpressionFactoryNode *this_01;
  FName *pFVar15;
  FString *pFVar16;
  FString *pFVar17;
  longlong lVar18;
  int iVar19;
  wchar_t *pwVar20;
  FScriptContainerElement *pFVar21;
  FName local_c8;
  UInterchangeMaterialExpressionFactoryNode *local_c0;
  FString local_b8;
  longlong local_a8;
  FString local_a0;
  FString local_90;
  FName local_80;
  FName local_78;
  longlong local_70;
  FName local_68;
  FName local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar17 = param_3;
  if ((param_3->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_80,pwVar20);
  bVar6 = UInterchangeShaderPortsAPI::HasInput((UInterchangeBaseNode *)param_1,&local_80);
  if (bVar6) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    return __return_storage_ptr__;
  }
  pTVar2 = &this->MaterialExpressionCreationContextStack;
  uVar8 = (this->MaterialExpressionCreationContextStack).ArrayNum;
  if (uVar8 == (this->MaterialExpressionCreationContextStack).ArrayMax) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,
                       &(this->MaterialExpressionCreationContextStack).ArrayMax);
  }
  local_70 = (longlong)(int)uVar8;
  (this->MaterialExpressionCreationContextStack).ArrayNum = uVar8 + 1;
  local_a8 = local_70 * 0x10;
  DefaultConstructItems<UInterchangeGenericMaterialPipeline::FMaterialExpressionCreationContext,int>
            ((pTVar2->AllocatorInstance).Data + local_a8,1);
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  uVar9 = 0;
  if ((int)uVar8 < (this->MaterialExpressionCreationContextStack).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)(*pcVar4)();
    return pTVar12;
  }
  bVar6 = UInterchangeShaderPortsAPI::GetInputConnection
                    ((UInterchangeBaseNode *)param_2,pFVar17,&local_90,
                     (FString *)((pTVar2->AllocatorInstance).Data + local_a8));
  if (bVar6) {
    pUVar13 = (UInterchangeShaderNode *)
              UInterchangeBaseNodeContainer::GetNode
                        ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_90);
    this_01 = (UInterchangeMaterialExpressionFactoryNode *)0x0;
    if (pUVar13 != (UInterchangeShaderNode *)0x0) {
      pUVar14 = Z_Construct_UClass_UInterchangeShaderNode_NoRegister();
      iVar11 = (int)pUVar14->_padding_;
      if ((iVar11 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
         (this_01 = (UInterchangeMaterialExpressionFactoryNode *)0x0,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
         &pUVar14->_padding_)) {
        this_01 = CreateMaterialExpressionForShaderNode(this,param_1,pUVar13,param_4);
      }
    }
    goto LAB_14e798537;
  }
  iVar11 = (pFVar17->Data).ArrayNum;
  iVar19 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar19 = 0;
  }
  pFVar15 = ::FName::FName(&local_68,iVar19,(wchar_t *)(pFVar17->Data).AllocatorInstance.Data,
                           FNAME_Add);
  local_78 = *pFVar15;
  bVar6 = UInterchangeShaderPortsAPI::HasParameter((UInterchangeBaseNode *)param_2,&local_78);
  EVar10 = UInterchangeShaderPortsAPI::GetInputType((UInterchangeBaseNode *)param_2,pFVar17,bVar6);
  if (EVar10 == Bool) {
    pUVar14 = Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister();
    this_01 = CreateExpressionNode(this,pFVar17,param_4,pUVar14);
    bVar6 = UInterchangeBaseNode::GetBooleanAttribute
                      ((UInterchangeBaseNode *)param_2,pFVar17,(bool *)&param_3);
    if (bVar6) {
      pFVar15 = ::FName::FName(&local_60,0xc,L"DefaultValue",FNAME_Add);
      local_c8 = *pFVar15;
      pFVar16 = ::FName::ToString(&local_c8,&local_58);
      UInterchangeBaseNode::AddBooleanAttribute
                ((UInterchangeBaseNode *)this_01,pFVar16,(bool *)&param_3);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      FVar5 = local_c8;
      pUVar14 = Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister();
      pFVar16 = ::FName::ToString(&local_c8,&local_48);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
                ((UInterchangeFactoryBaseNode *)this_01,pFVar16,pUVar14,FVar5);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this_01,pFVar17);
  }
  else if (EVar10 == Float) {
    this_01 = HandleFloatInput(this,param_2,pFVar17,param_4,bVar6);
  }
  else if (EVar10 == LinearColor) {
    this_01 = HandleLinearColorInput(this,param_2,pFVar17,param_4,bVar6);
  }
  else {
    this_01 = (UInterchangeMaterialExpressionFactoryNode *)0x0;
    if (EVar10 != Vector2f) goto LAB_14e798537;
    this_01 = CreateVector2ParameterExpression(this,param_2,pFVar17,param_4);
  }
  if (this_01 == (UInterchangeMaterialExpressionFactoryNode *)0x0) goto LAB_14e798537;
  this_00 = this->AttributeStorageNode;
  bVar6 = false;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  if (this_00 == (UInterchangeBaseNode *)0x0) {
LAB_14e798503:
    bVar7 = false;
  }
  else {
    bVar6 = true;
    pFVar17 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_38);
    bVar7 = UInterchangeBaseNode::GetStringAttribute(this_00,pFVar17,&local_a0);
    if (!bVar7) goto LAB_14e798503;
    bVar7 = true;
  }
  if ((bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this_01,&local_a0);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
LAB_14e798537:
  uVar9 = 0;
  if ((int)uVar8 < (this->MaterialExpressionCreationContextStack).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)(*pcVar4)();
    return pTVar12;
  }
  local_c0 = this_01;
  ::FString::FString(&local_b8,(FString *)((pTVar2->AllocatorInstance).Data + local_a8));
  if (((this->MaterialExpressionCreationContextStack).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)(*pcVar4)();
    return pTVar12;
  }
  pFVar21 = (pTVar2->AllocatorInstance).Data;
  lVar18 = (longlong)(this->MaterialExpressionCreationContextStack).ArrayNum;
  pvVar3 = *(void **)(pFVar21 + lVar18 * 0x10 + -0x10);
  *(undefined8 *)(pFVar21 + lVar18 * 0x10 + -0x10) = 0;
  *(undefined8 *)(pFVar21 + lVar18 * 0x10 + -8) = 0;
  iVar11 = (this->MaterialExpressionCreationContextStack).ArrayNum;
  pFVar21 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
  if (*(void **)(pFVar21 + -0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar21 + -0x10));
  }
  iVar11 = ((this->MaterialExpressionCreationContextStack).ArrayNum - (iVar11 + -1)) + -1;
  if (iVar11 != 0) {
    memmove(pFVar21 + -0x10,pFVar21,(longlong)iVar11 << 4);
  }
  piVar1 = &(this->MaterialExpressionCreationContextStack).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&pTVar2->AllocatorInstance,
             (this->MaterialExpressionCreationContextStack).ArrayNum,
             &(this->MaterialExpressionCreationContextStack).ArrayMax);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(UInterchangeMaterialExpressionFactoryNode **)__return_storage_ptr__ = local_c0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x8 =
       local_b8.Data.AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x10 = local_b8.Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x14 = local_b8.Data.ArrayMax;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateMaterialExpressionForShaderNode @ 14e7986c0

UInterchangeMaterialExpressionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateMaterialExpressionForShaderNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeBaseMaterialFactoryNode *param_1,
          UInterchangeShaderNode *param_2,FString *param_3)

{
  int iVar1;
  UInterchangeBaseNodeContainer *this_00;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  UInterchangeMaterialExpressionFactoryNode *pUVar7;
  UClass *pUVar8;
  FName *pFVar9;
  UInterchangeBaseNode *this_01;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  bool local_res8 [8];
  FString local_2d8;
  undefined1 local_2c8 [8];
  UInterchangeMaterialExpressionFactoryNode *local_2c0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_298;
  float local_288 [2];
  FName local_280;
  FName local_278;
  FName local_270;
  FString local_268;
  FString local_258;
  FString local_248;
  FName local_238;
  FName local_230;
  FString local_228;
  FString local_218;
  FName local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  UInterchangeBaseNode *local_190;
  FString local_188;
  FName local_178;
  FName local_170;
  FName local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FLinearColor local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar6 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_160);
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_248,pFVar6);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  pUVar7 = (UInterchangeMaterialExpressionFactoryNode *)
           UInterchangeBaseNodeContainer::GetFactoryNode
                     ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_248);
  if (pUVar7 != (UInterchangeMaterialExpressionFactoryNode *)0x0) {
    pUVar8 = Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((iVar5 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar8->_padding_)) goto LAB_14e79948d;
  }
  pUVar7 = CreateFunctionCallExpression(this,param_2,&local_248,param_1);
  if (pUVar7 != (UInterchangeMaterialExpressionFactoryNode *)0x0) goto LAB_14e79948d;
  pUVar7 = NewObject<UInterchangeMaterialExpressionFactoryNode>
                     ((UObject *)(this->BaseNodeContainer).field0_0x0.DebugPtr);
  local_2c0 = pUVar7;
  if (pUVar7 == (UInterchangeMaterialExpressionFactoryNode *)0x0) {
    pUVar7 = (UInterchangeMaterialExpressionFactoryNode *)0x0;
    goto LAB_14e79948d;
  }
  local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Data.ArrayNum = 0;
  local_2d8.Data.ArrayMax = 0;
  UInterchangeShaderNode::GetCustomShaderType(param_2,&local_2d8);
  this_00 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
  pFVar6 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_2,&local_150);
  UInterchangeBaseNodeContainer::SetupNode
            (this_00,(UInterchangeBaseNode *)pUVar7,&local_248,pFVar6,FactoryData,param_3);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_2d8.Data.ArrayNum != 0) {
    FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
  }
  bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::FlattenNormal::Name,
                          (wchar_t *)FVar10.Data);
  if (bVar4) {
    HandleFlattenNormalNode(this,param_2,param_1,pUVar7);
  }
  else {
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_2d8.Data.ArrayNum != 0) {
      FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
    }
    bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::MakeFloat3::Name,
                            (wchar_t *)FVar10.Data);
    if (bVar4) {
      HandleMakeFloat3Node(this,param_2,param_1,pUVar7);
    }
    else {
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_2d8.Data.ArrayNum != 0) {
        FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
      }
      bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::Lerp::Name,
                              (wchar_t *)FVar10.Data);
      if (bVar4) {
        HandleLerpNode(this,param_2,param_1,pUVar7);
      }
      else {
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_2d8.Data.ArrayNum != 0) {
          FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
        }
        bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::Mask::Name,
                                (wchar_t *)FVar10.Data);
        if (bVar4) {
          HandleMaskNode(this,param_2,param_1,pUVar7);
        }
        else {
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_2d8.Data.ArrayNum != 0) {
            FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
          }
          bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::Noise::Name,
                                  (wchar_t *)FVar10.Data);
          if (bVar4) {
            HandleNoiseNode(this,param_2,param_1,pUVar7);
          }
          else {
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_2d8.Data.ArrayNum != 0) {
              FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
            }
            bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap
                                    ::Name,(wchar_t *)FVar10.Data);
            if (bVar4) {
              HandleNormalFromHeightMapNode(this,param_2,param_1,pUVar7);
            }
            else {
              FVar10.Data = (FScriptContainerElement *)L"";
              if (local_2d8.Data.ArrayNum != 0) {
                FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
              }
              bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::
                                      Name,(wchar_t *)FVar10.Data);
              if (bVar4) {
                HandleRotateAboutAxisNode(this,param_2,param_1,pUVar7);
              }
              else {
                FVar10.Data = (FScriptContainerElement *)L"";
                if (local_2d8.Data.ArrayNum != 0) {
                  FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                }
                bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::Rotator::Name,
                                        (wchar_t *)FVar10.Data);
                if (bVar4) {
                  HandleRotatorNode(this,param_2,param_1,pUVar7);
                }
                else {
                  FVar10.Data = (FScriptContainerElement *)L"";
                  if (local_2d8.Data.ArrayNum != 0) {
                    FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                  }
                  bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::Switch::Name,
                                          (wchar_t *)FVar10.Data);
                  if (bVar4) {
                    HandleSwitchNode(this,param_2,param_1,pUVar7);
                  }
                  else {
                    FVar10.Data = (FScriptContainerElement *)L"";
                    if (local_2d8.Data.ArrayNum != 0) {
                      FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                    }
                    bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::
                                            TextureCoordinate::Name,(wchar_t *)FVar10.Data);
                    if (bVar4) {
                      HandleTextureCoordinateNode(this,param_2,param_1,&local_2c0);
                      pUVar7 = local_2c0;
                    }
                    else {
                      FVar10.Data = (FScriptContainerElement *)L"";
                      if (local_2d8.Data.ArrayNum != 0) {
                        FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                      }
                      bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::
                                              TextureObject::Name,(wchar_t *)FVar10.Data);
                      if (bVar4) {
                        HandleTextureObjectNode(this,param_2,param_1,pUVar7);
                      }
                      else {
                        FVar10.Data = (FScriptContainerElement *)L"";
                        if (local_2d8.Data.ArrayNum != 0) {
                          FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                        }
                        bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::
                                                TextureSample::Name,(wchar_t *)FVar10.Data);
                        if (bVar4) {
                          HandleTextureSampleNode(this,param_2,param_1,pUVar7);
                        }
                        else {
                          FVar10.Data = (FScriptContainerElement *)L"";
                          if (local_2d8.Data.ArrayNum != 0) {
                            FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                          }
                          bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::Time
                                                  ::Name,(wchar_t *)FVar10.Data);
                          if (bVar4) {
                            HandleTimeNode(this,param_2,param_1,pUVar7);
                          }
                          else {
                            FVar10.Data = (FScriptContainerElement *)L"";
                            if (local_2d8.Data.ArrayNum != 0) {
                              FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                            }
                            bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::
                                                    TransformPosition::Name,(wchar_t *)FVar10.Data);
                            if (bVar4) {
                              HandleTransformPositionNode(this,param_2,param_1,pUVar7);
                            }
                            else {
                              FVar10.Data = (FScriptContainerElement *)L"";
                              if (local_2d8.Data.ArrayNum != 0) {
                                FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                              }
                              bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::
                                                      TransformVector::Name,(wchar_t *)FVar10.Data);
                              if (bVar4) {
                                HandleTransformVectorNode(this,param_2,param_1,pUVar7);
                              }
                              else {
                                FVar10.Data = (FScriptContainerElement *)L"";
                                if (local_2d8.Data.ArrayNum != 0) {
                                  FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                                }
                                bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes
                                                        ::VectorNoise::Name,(wchar_t *)FVar10.Data);
                                if (bVar4) {
                                  HandleVectorNoiseNode(this,param_2,param_1,pUVar7);
                                }
                                else {
                                  FVar10.Data = (FScriptContainerElement *)L"";
                                  if (local_2d8.Data.ArrayNum != 0) {
                                    FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                                  }
                                  bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::
                                                          Nodes::SlabBSDF::Name,
                                                          (wchar_t *)FVar10.Data);
                                  if (bVar4) {
                                    HandleSlabBSDFNode(this,param_2,param_1,pUVar7);
                                  }
                                  else {
                                    FVar10.Data = (FScriptContainerElement *)L"";
                                    if (local_2d8.Data.ArrayNum != 0) {
                                      FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                                    }
                                    bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::
                                                            Nodes::Cosine::Name,
                                                            (wchar_t *)FVar10.Data);
                                    if (bVar4) {
                                      pUVar8 = Z_Construct_UClass_UMaterialExpressionCosine_NoRegister
                                                         ();
                                    }
                                    else {
                                      FVar10.Data = (FScriptContainerElement *)L"";
                                      if (local_2d8.Data.ArrayNum != 0) {
                                        FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                                      }
                                      bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::
                                                              Nodes::Sine::Name,
                                                              (wchar_t *)FVar10.Data);
                                      if (bVar4) {
                                        pUVar8 = Z_Construct_UClass_UMaterialExpressionSine_NoRegister
                                                           ();
                                      }
                                      else {
                                        FVar10.Data = (FScriptContainerElement *)L"";
                                        if (local_2d8.Data.ArrayNum != 0) {
                                          FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                                        }
                                        bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard
                                                                ::Nodes::Tangent::Name,
                                                                (wchar_t *)FVar10.Data);
                                        if (!bVar4) {
                                          FVar10.Data = (FScriptContainerElement *)L"";
                                          if (local_2d8.Data.ArrayNum != 0) {
                                            FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                                          }
                                          bVar4 = ::FName::Equals(UE::Interchange::Materials::
                                                                  Standard::Nodes::ScalarParameter::
                                                                  Name,(wchar_t *)FVar10.Data);
                                          if (bVar4) {
                                            pFVar6 = ::FName::ToString(&UE::Interchange::Materials::
                                                                        Standard::Nodes::
                                                                        ScalarParameter::Attributes
                                                                        ::DefaultValue,&local_140);
                                            UInterchangeShaderPortsAPI::MakeInputParameterKey
                                                      (&local_1c0,pFVar6);
                                            if (local_140.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_140.Data.AllocatorInstance.Data);
                                            }
                                            bVar4 = UInterchangeBaseNode::GetFloatAttribute
                                                              ((UInterchangeBaseNode *)param_2,
                                                               &local_1c0,local_288);
                                            if (bVar4) {
                                              pUVar8 = 
                                                  Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister
                                                            ();
                                              local_208 = (FName)pUVar8->_padding_;
                                              ::FName::ToString(&local_208,&local_1d0);
                                              UInterchangeMaterialExpressionFactoryNode::
                                              SetCustomExpressionClassName(pUVar7,&local_1d0);
                                              if (local_1d0.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_1d0.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                              pFVar9 = ::FName::FName(&local_178,0xc,L"DefaultValue"
                                                                      ,FNAME_Add);
                                              local_280 = *pFVar9;
                                              pFVar6 = ::FName::ToString(&local_280,&local_130);
                                              UInterchangeBaseNode::AddFloatAttribute
                                                        ((UInterchangeBaseNode *)pUVar7,pFVar6,
                                                         local_288);
                                              if (local_130.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_130.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                              FVar3 = local_280;
                                              pUVar8 = 
                                                  Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister
                                                            ();
                                              pFVar6 = ::FName::ToString(&local_280,&local_120);
                                              UInterchangeFactoryBaseNode::
                                              AddApplyAndFillDelegates<float>
                                                        ((UInterchangeFactoryBaseNode *)pUVar7,
                                                         pFVar6,pUVar8,FVar3);
                                              if (local_120.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_120.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                            }
                                            pFVar6 = UInterchangeBaseNode::GetDisplayLabel
                                                               ((UInterchangeBaseNode *)param_2,
                                                                &local_110);
                                            UInterchangeBaseNode::SetDisplayLabel
                                                      ((UInterchangeBaseNode *)pUVar7,pFVar6);
                                            local_1e0.Data.AllocatorInstance.Data =
                                                 local_1c0.Data.AllocatorInstance.Data;
                                            if (local_110.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_110.Data.AllocatorInstance.Data);
                                              local_1e0.Data.AllocatorInstance.Data =
                                                   local_1c0.Data.AllocatorInstance.Data;
                                            }
                                          }
                                          else {
                                            FVar10.Data = (FScriptContainerElement *)L"";
                                            if (local_2d8.Data.ArrayNum != 0) {
                                              FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                                            }
                                            bVar4 = ::FName::Equals(UE::Interchange::Materials::
                                                                    Standard::Nodes::VectorParameter
                                                                    ::Name,(wchar_t *)FVar10.Data);
                                            if (bVar4) {
                                              pFVar6 = ::FName::ToString(&UE::Interchange::Materials
                                                                          ::Standard::Nodes::
                                                                          VectorParameter::
                                                                          Attributes::DefaultValue,
                                                                         &local_100);
                                              UInterchangeShaderPortsAPI::MakeInputParameterKey
                                                        (&local_1a0,pFVar6);
                                              if (local_100.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_100.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                              bVar4 = UInterchangeBaseNode::GetLinearColorAttribute
                                                                ((UInterchangeBaseNode *)param_2,
                                                                 &local_1a0,&local_a0);
                                              if (bVar4) {
                                                pUVar8 = 
                                                  Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister
                                                            ();
                                                local_238 = (FName)pUVar8->_padding_;
                                                ::FName::ToString(&local_238,&local_1b0);
                                                UInterchangeMaterialExpressionFactoryNode::
                                                SetCustomExpressionClassName(pUVar7,&local_1b0);
                                                if (local_1b0.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_1b0.Data.AllocatorInstance.
                                                                Data);
                                                }
                                                pFVar9 = ::FName::FName(&local_170,0xc,
                                                                        L"DefaultValue",FNAME_Add);
                                                local_278 = *pFVar9;
                                                pFVar6 = ::FName::ToString(&local_278,&local_f0);
                                                UInterchangeBaseNode::AddLinearColorAttribute
                                                          ((UInterchangeBaseNode *)pUVar7,pFVar6,
                                                           &local_a0);
                                                if (local_f0.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_f0.Data.AllocatorInstance.Data
                                                               );
                                                }
                                                FVar3 = local_278;
                                                pUVar8 = 
                                                  Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister
                                                            ();
                                                pFVar6 = ::FName::ToString(&local_278,&local_e0);
                                                UInterchangeFactoryBaseNode::
                                                AddApplyAndFillDelegates<FLinearColor>
                                                          ((UInterchangeFactoryBaseNode *)pUVar7,
                                                           pFVar6,pUVar8,FVar3);
                                                if (local_e0.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_e0.Data.AllocatorInstance.Data
                                                               );
                                                }
                                              }
                                              pFVar6 = UInterchangeBaseNode::GetDisplayLabel
                                                                 ((UInterchangeBaseNode *)param_2,
                                                                  &local_d0);
                                              UInterchangeBaseNode::SetDisplayLabel
                                                        ((UInterchangeBaseNode *)pUVar7,pFVar6);
                                              local_1e0.Data.AllocatorInstance.Data =
                                                   local_1a0.Data.AllocatorInstance.Data;
                                              if (local_d0.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                                                local_1e0.Data.AllocatorInstance.Data =
                                                     local_1a0.Data.AllocatorInstance.Data;
                                              }
                                            }
                                            else {
                                              FVar10.Data = (FScriptContainerElement *)L"";
                                              if (local_2d8.Data.ArrayNum != 0) {
                                                FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
                                              }
                                              bVar4 = ::FName::Equals(UE::Interchange::Materials::
                                                                      Standard::Nodes::
                                                                      StaticBoolParameter::Name,
                                                                      (wchar_t *)FVar10.Data);
                                              if (bVar4) {
                                                pFVar6 = ::FName::ToString(&UE::Interchange::
                                                                            Materials::Standard::
                                                                            Nodes::
                                                  StaticBoolParameter::Attributes::DefaultValue,
                                                  &local_c0);
                                                UInterchangeShaderPortsAPI::MakeInputParameterKey
                                                          (&local_1f0,pFVar6);
                                                if (local_c0.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_c0.Data.AllocatorInstance.Data
                                                               );
                                                }
                                                bVar4 = UInterchangeBaseNode::GetBooleanAttribute
                                                                  ((UInterchangeBaseNode *)param_2,
                                                                   &local_1f0,local_res8);
                                                if (bVar4) {
                                                  pUVar8 = 
                                                  Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister
                                                            ();
                                                  local_230 = (FName)pUVar8->_padding_;
                                                  ::FName::ToString(&local_230,&local_200);
                                                  UInterchangeMaterialExpressionFactoryNode::
                                                  SetCustomExpressionClassName(pUVar7,&local_200);
                                                  if (local_200.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_200.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  pFVar9 = ::FName::FName(&local_168,0xc,
                                                                          L"DefaultValue",FNAME_Add)
                                                  ;
                                                  local_270 = *pFVar9;
                                                  pFVar6 = ::FName::ToString(&local_270,&local_b0);
                                                  UInterchangeBaseNode::AddBooleanAttribute
                                                            ((UInterchangeBaseNode *)pUVar7,pFVar6,
                                                             local_res8);
                                                  if (local_b0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_b0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  FVar3 = local_270;
                                                  pUVar8 = 
                                                  Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister
                                                            ();
                                                  pFVar6 = ::FName::ToString(&local_270,&local_40);
                                                  UInterchangeFactoryBaseNode::
                                                  AddApplyAndFillDelegates<bool>
                                                            ((UInterchangeFactoryBaseNode *)pUVar7,
                                                             pFVar6,pUVar8,FVar3);
                                                  if (local_40.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_40.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                }
                                                pFVar6 = UInterchangeBaseNode::GetDisplayLabel
                                                                   ((UInterchangeBaseNode *)param_2,
                                                                    &local_90);
                                                UInterchangeBaseNode::SetDisplayLabel
                                                          ((UInterchangeBaseNode *)pUVar7,pFVar6);
                                                local_1e0.Data.AllocatorInstance.Data =
                                                     local_1f0.Data.AllocatorInstance.Data;
                                                if (local_90.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_90.Data.AllocatorInstance.Data
                                                               );
                                                  local_1e0.Data.AllocatorInstance.Data =
                                                       local_1f0.Data.AllocatorInstance.Data;
                                                }
                                              }
                                              else {
                                                if (local_2d8.Data.ArrayNum < 2) {
                                                  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                                                    (&
                                                  bGEnsureHasExecuted<_5102957597653201741>,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                                                  ,0xcb3,"!ShaderType.IsEmpty()");
                                                  if (bVar4) {
                                                    pcVar2 = (code *)swi(3);
                                                    pUVar7 = (
                                                  UInterchangeMaterialExpressionFactoryNode *)
                                                  (*pcVar2)();
                                                  return pUVar7;
                                                  }
                                                  goto LAB_14e799198;
                                                }
                                                ::FString::ConcatCF(&local_1e0,L"MaterialExpression"
                                                                    ,&local_2d8);
                                                UInterchangeMaterialExpressionFactoryNode::
                                                SetCustomExpressionClassName(pUVar7,&local_1e0);
                                                local_2b8.AllocatorInstance.Data =
                                                     (FScriptContainerElement *)0x0;
                                                local_2b8.ArrayNum = 0;
                                                local_2b8.ArrayMax = 0;
                                                UInterchangeShaderPortsAPI::GatherInputs
                                                          ((UInterchangeBaseNode *)param_2,
                                                           &local_2b8);
                                                iVar5 = local_2b8.ArrayNum;
                                                pFVar11 = local_2b8.AllocatorInstance.Data +
                                                          (longlong)local_2b8.ArrayNum * 0x10;
                                                FVar10.Data = local_2b8.AllocatorInstance.Data;
                                                while( true ) {
                                                  if (local_2b8.ArrayNum != iVar5) {
                                                    local_2c8[0] = 0;
                                                    `TCheckedPointerIterator<FString,int,0>::
                                                    operator!='::__l2::<lambda_1>::operator()
                                                              (local_2c8);
                                                  }
                                                  if (FVar10.Data == pFVar11) break;
                                                  CreateMaterialExpressionForInput
                                                            (this,(
                                                  TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString>
                                                  *)&local_190,param_1,param_2,
                                                  (FString *)FVar10.Data,&local_248);
                                                  if (local_190 != (UInterchangeBaseNode *)0x0) {
                                                    pFVar6 = UInterchangeBaseNode::GetUniqueID
                                                                       (local_190,&local_80);
                                                    UInterchangeShaderPortsAPI::
                                                    ConnectOuputToInputByName
                                                              ((UInterchangeBaseNode *)pUVar7,
                                                               (FString *)FVar10.Data,pFVar6,
                                                               &local_188);
                                                    if (local_80.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_80.Data.AllocatorInstance.
                                                                    Data);
                                                    }
                                                  }
                                                  if (local_188.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_188.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  FVar10.Data = FVar10.Data + 0x10;
                                                }
                                                DestructItems<FString,int>
                                                          ((FString *)
                                                           local_2b8.AllocatorInstance.Data,
                                                           local_2b8.ArrayNum);
                                                if (local_2b8.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_2b8.AllocatorInstance.Data);
                                                }
                                              }
                                            }
                                          }
                                          if (local_1e0.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                                          }
                                          goto LAB_14e799198;
                                        }
                                        pUVar8 = Z_Construct_UClass_UMaterialExpressionTangent_NoRegister
                                                           ();
                                      }
                                    }
                                    HandleTrigonometryNode(this,param_2,pUVar8,param_1,pUVar7);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14e799198:
  pFVar6 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_70);
  UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)pUVar7,pFVar6);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_2d8.Data.ArrayNum != 0) {
    FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
  }
  bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::TextureSample::Name,
                          (wchar_t *)FVar10.Data);
  if (bVar4) {
LAB_14e799203:
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_2d8.Data.ArrayNum != 0) {
      FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
    }
    local_258.Data.ArrayNum = 0;
    local_258.Data.ArrayMax = 0;
    bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::TextureSample::Name,
                            (wchar_t *)FVar10.Data);
    if (bVar4) {
      bVar4 = UInterchangeShaderPortsAPI::HasParameter
                        ((UInterchangeBaseNode *)param_2,
                         &UE::Interchange::Materials::Standard::Nodes::TextureSample::Inputs::
                          Texture);
      pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureSample::Inputs
                                  ::Texture,&local_60);
      if (bVar4) {
        UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_228,pFVar6);
      }
      else {
        UInterchangeShaderPortsAPI::MakeInputValueKey(&local_228,pFVar6);
      }
      UInterchangeBaseNode::GetStringAttribute
                ((UInterchangeBaseNode *)param_2,&local_228,&local_258);
      local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
        local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
      }
LAB_14e79930e:
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    else {
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_2d8.Data.ArrayNum != 0) {
        FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
      }
      bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::TextureObject::Name,
                              (wchar_t *)FVar10.Data);
      if (bVar4) {
        bVar4 = UInterchangeShaderPortsAPI::HasParameter
                          ((UInterchangeBaseNode *)param_2,
                           &UE::Interchange::Materials::Standard::Nodes::TextureObject::Inputs::
                            Texture);
        pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureObject::
                                    Inputs::Texture,&local_50);
        if (bVar4) {
          UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_218,pFVar6);
        }
        else {
          UInterchangeShaderPortsAPI::MakeInputValueKey(&local_218,pFVar6);
        }
        UInterchangeBaseNode::GetStringAttribute
                  ((UInterchangeBaseNode *)param_2,&local_218,&local_258);
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        goto LAB_14e79930e;
      }
    }
    this_01 = UInterchangeBaseNodeContainer::GetNode
                        ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_258);
    if (this_01 != (UInterchangeBaseNode *)0x0) {
      pUVar8 = Z_Construct_UClass_UInterchangeTextureNode_NoRegister();
      iVar5 = (int)pUVar8->_padding_;
      if ((iVar5 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar8->_padding_)) {
        local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2a8.ArrayNum = 0;
        local_2a8.ArrayMax = 0;
        UInterchangeBaseNode::GetTargetNodeUids(this_01,&local_2a8);
        if (0 < local_2a8.ArrayNum) {
          ::FString::FString(&local_268,(FString *)local_2a8.AllocatorInstance.Data);
          bVar4 = UInterchangeBaseNodeContainer::IsNodeUidValid
                            ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_268);
          if (bVar4) {
            local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_298.ArrayNum = 0;
            local_298.ArrayMax = 0;
            UInterchangeFactoryBaseNode::GetFactoryDependencies
                      ((UInterchangeFactoryBaseNode *)param_1,&local_298);
            pFVar11 = local_298.AllocatorInstance.Data + (longlong)local_298.ArrayNum * 0x10;
            iVar5 = local_268.Data.ArrayNum;
            for (FVar10.Data = local_298.AllocatorInstance.Data; FVar10.Data != pFVar11;
                FVar10.Data = FVar10.Data + 0x10) {
              iVar1 = *(int *)(FVar10.Data + 8);
              if (iVar1 == iVar5) {
                if (iVar1 < 2) goto LAB_14e799420;
                iVar5 = FGenericPlatformStricmp::Stricmp
                                  (*(wchar_t **)FVar10.Data,
                                   (wchar_t *)local_268.Data.AllocatorInstance.Data);
                bVar4 = iVar5 == 0;
                iVar5 = local_268.Data.ArrayNum;
              }
              else {
                bVar4 = iVar1 + iVar5 == 1;
              }
              if (bVar4) goto LAB_14e799420;
            }
            UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                      ((UInterchangeFactoryBaseNode *)param_1,&local_268);
LAB_14e799420:
            DestructItems<FString,int>
                      ((FString *)local_298.AllocatorInstance.Data,local_298.ArrayNum);
            if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.AllocatorInstance.Data);
            }
          }
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
        }
        DestructItems<FString,int>((FString *)local_2a8.AllocatorInstance.Data,local_2a8.ArrayNum);
        if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.AllocatorInstance.Data);
        }
      }
    }
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  else {
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_2d8.Data.ArrayNum != 0) {
      FVar10.Data = local_2d8.Data.AllocatorInstance.Data;
    }
    bVar4 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::TextureObject::Name,
                            (wchar_t *)FVar10.Data);
    if (bVar4) goto LAB_14e799203;
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
LAB_14e79948d:
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  return pUVar7;
}

// CreateMaterialFactoryNode @ 14e799550

UInterchangeMaterialFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateMaterialFactoryNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  int iVar1;
  bool bVar2;
  UInterchangeMaterialFactoryNode *this_00;
  UClass *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  UClass *local_res8;
  FString local_58;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  
  local_res8 = Z_Construct_UClass_UInterchangeMaterialFactoryNode_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  this_00 = (UInterchangeMaterialFactoryNode *)
            CreateBaseMaterialFactoryNode
                      (this,(UInterchangeBaseNode *)param_1,
                       (TSubclassOf<UInterchangeBaseMaterialFactoryNode>)&local_res8,false);
  if (this_00 != (UInterchangeMaterialFactoryNode *)0x0) {
    pUVar3 = Z_Construct_UClass_UInterchangeMaterialFactoryNode_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14e7995c4;
  }
  this_00 = (UInterchangeMaterialFactoryNode *)0x0;
LAB_14e7995c4:
  UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
            ((UInterchangeBaseNode *)param_1,(UInterchangeBaseNode *)this_00,false);
  if (this->bOverrideDisplacement != false) {
    UInterchangeMaterialFactoryNode::SetCustomDisplacementCenter
              (this_00,this->OverrideDisplacementCenter);
  }
  bVar2 = HandleSubstrate(this,param_1,this_00);
  if (!bVar2) {
    bVar2 = HandleBxDFInput(this,param_1,this_00);
    if (!bVar2) {
      bVar2 = HandleUnlitModel(this,param_1,this_00);
      if (!bVar2) {
        bVar2 = HandleMetalRoughnessModel(this,param_1,this_00);
        if (!bVar2) {
          bVar2 = HandleSpecGlossModel(this,param_1,this_00);
          if (!bVar2) {
            bVar2 = HandlePhongModel(this,param_1,this_00);
            if (!bVar2) {
              bVar2 = UInterchangeShaderPortsAPI::HasInput
                                ((UInterchangeBaseNode *)param_1,
                                 &UE::Interchange::Materials::Lambert::Parameters::DiffuseColor);
              if (bVar2) {
                pFVar4 = UInterchangeBaseNode::GetUniqueID
                                   ((UInterchangeBaseNode *)this_00,&local_48);
                pFVar5 = ::FName::ToString(&UE::Interchange::Materials::Lambert::Parameters::
                                            DiffuseColor,&local_58);
                CreateMaterialExpressionForInput
                          (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)
                                &local_38,(UInterchangeBaseMaterialFactoryNode *)this_00,
                           (UInterchangeShaderNode *)param_1,pFVar5,pFVar4);
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.Data.AllocatorInstance.Data);
                }
                if (local_38 != (UInterchangeBaseNode *)0x0) {
                  pFVar4 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
                  UInterchangeMaterialFactoryNode::ConnectOutputToBaseColor
                            (this_00,pFVar4,&local_30);
                  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_48.Data.AllocatorInstance.Data);
                  }
                }
                if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_30.Data.AllocatorInstance.Data);
                }
              }
            }
          }
        }
        bVar2 = HandleThinTranslucent(this,param_1,this_00);
        if (!bVar2) {
          bVar2 = HandleClearCoat(this,param_1,this_00);
          if (!bVar2) {
            bVar2 = HandleSheen(this,param_1,this_00);
            if (!bVar2) {
              bVar2 = UInterchangeShaderPortsAPI::HasInput
                                ((UInterchangeBaseNode *)param_1,
                                 &UE::Interchange::Materials::Subsurface::Parameters::
                                  SubsurfaceColor);
              if (bVar2) {
                pFVar4 = UInterchangeBaseNode::GetUniqueID
                                   ((UInterchangeBaseNode *)this_00,&local_58);
                pFVar5 = ::FName::ToString(&UE::Interchange::Materials::Subsurface::Parameters::
                                            SubsurfaceColor,&local_48);
                CreateMaterialExpressionForInput
                          (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)
                                &local_38,(UInterchangeBaseMaterialFactoryNode *)this_00,
                           (UInterchangeShaderNode *)param_1,pFVar5,pFVar4);
                if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.Data.AllocatorInstance.Data);
                }
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                if (local_38 != (UInterchangeBaseNode *)0x0) {
                  pFVar4 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
                  UInterchangeMaterialFactoryNode::ConnectOutputToSubsurface
                            (this_00,pFVar4,&local_30);
                  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_48.Data.AllocatorInstance.Data);
                  }
                }
                if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_30.Data.AllocatorInstance.Data);
                }
                local_res8._0_1_ = '\x02';
                UInterchangeMaterialFactoryNode::SetCustomShadingModel
                          (this_00,(TEnumAsByte<EMaterialShadingModel> *)&local_res8,true);
                local_res8 = (UClass *)((ulonglong)local_res8._1_7_ << 8);
                UInterchangeMaterialFactoryNode::SetCustomBlendMode
                          (this_00,(TEnumAsByte<EBlendMode> *)&local_res8,true);
              }
            }
          }
        }
        HandleCommonParameters(this,param_1,this_00);
      }
    }
  }
  return this_00;
}

// CreateMaterialFunctionFactoryNode @ 14e799870

UInterchangeMaterialFunctionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateMaterialFunctionFactoryNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  int iVar1;
  UInterchangeBaseMaterialFactoryNode *this_00;
  UClass *pUVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  UClass *local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  
  local_res18 = Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  this_00 = CreateBaseMaterialFactoryNode
                      (this,(UInterchangeBaseNode *)param_1,
                       (TSubclassOf<UInterchangeBaseMaterialFactoryNode>)&local_res18,false);
  if (this_00 != (UInterchangeBaseMaterialFactoryNode *)0x0) {
    pUVar2 = Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14e7998fa;
  }
  this_00 = (UInterchangeBaseMaterialFactoryNode *)0x0;
LAB_14e7998fa:
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  UInterchangeShaderPortsAPI::GatherInputs((UInterchangeBaseNode *)param_1,&local_68);
  iVar1 = local_68.ArrayNum;
  pFVar5 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x10;
  FVar4.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if (local_68.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (FVar4.Data == pFVar5) break;
    pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_58);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,this_00
               ,(UInterchangeShaderNode *)param_1,(FString *)FVar4.Data,pFVar3);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar3 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)this_00,(FString *)FVar4.Data,pFVar3,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return (UInterchangeMaterialFunctionFactoryNode *)this_00;
}

// CreateMaterialInstanceFactoryNode @ 14e799ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UInterchangeMaterialInstanceFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  UInterchangeMaterialInstanceFactoryNode *this_00;
  UClass *pUVar5;
  UObject *this_01;
  FString *pFVar6;
  void *this_02;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined1 auVar9 [8];
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  UInterchangeShaderGraphNode *local_d8;
  undefined1 local_d0 [8];
  code *local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_e8 = (undefined1  [8])
             Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (undefined1  [8])0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e8);
  }
  this_00 = (UInterchangeMaterialInstanceFactoryNode *)
            CreateBaseMaterialFactoryNode
                      (this,(UInterchangeBaseNode *)param_1,
                       (TSubclassOf<UInterchangeBaseMaterialFactoryNode>)local_e8,false);
  if (this_00 == (UInterchangeMaterialInstanceFactoryNode *)0x0) {
LAB_14e799f51:
    this_00 = (UInterchangeMaterialInstanceFactoryNode *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14e799f51;
  }
  UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
            ((UInterchangeBaseNode *)param_1,(UInterchangeBaseNode *)this_00,false);
  local_c8 = (code *)0x0;
  local_e8 = (undefined1  [8])this;
  uStack_e0 = this_00;
  local_d8 = param_1;
  local_a0 = FMemory::Malloc(0x20,8);
  *local_a0 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_a0[1] = (longlong)local_e8;
  local_a0[2] = (longlong)uStack_e0;
  local_a0[3] = (longlong)local_d8;
  if (local_a0 + 1 != (longlong *)0x0) {
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode'::__l2::<lambda_1>,void,FString_const_&>
               ::Call;
  }
  this_01 = FSoftObjectPath::TryLoad(&this->ParentMaterial,(FUObjectSerializeContext *)0x0);
  if (this_01 == (UObject *)0x0) {
LAB_14e79a00b:
    bVar3 = UInterchangeShaderPortsAPI::HasInput
                      ((UInterchangeBaseNode *)param_1,
                       &UE::Interchange::Materials::PBRSG::Parameters::SpecularColor);
    bVar4 = UInterchangeShaderPortsAPI::HasInput
                      ((UInterchangeBaseNode *)param_1,
                       &UE::Interchange::Materials::PBRSG::Parameters::Glossiness);
    if ((bVar3) && (bVar4)) {
      pwVar8 = L"SG";
    }
    else {
      bVar3 = UInterchangeShaderPortsAPI::HasInput
                        ((UInterchangeBaseNode *)param_1,
                         &UE::Interchange::Materials::PBRMR::Parameters::BaseColor);
      if (!bVar3) {
        bVar3 = IsPhongModel(this,param_1);
        if (bVar3) {
          pwVar8 = L"/InterchangeAssets/Materials/PhongSurfaceMaterial.PhongSurfaceMaterial";
        }
        else {
          bVar3 = UInterchangeShaderPortsAPI::HasInput
                            ((UInterchangeBaseNode *)param_1,
                             &UE::Interchange::Materials::Lambert::Parameters::DiffuseColor);
          if (bVar3) {
            pwVar8 = L"/InterchangeAssets/Materials/LambertSurfaceMaterial.LambertSurfaceMaterial";
          }
          else {
            bVar3 = UInterchangeShaderPortsAPI::HasInput
                              ((UInterchangeBaseNode *)param_1,
                               &UE::Interchange::Materials::Unlit::Parameters::UnlitColor);
            pwVar8 = L"/InterchangeAssets/Materials/UnlitMaterial.UnlitMaterial";
            if (!bVar3) {
              pwVar8 = L"/InterchangeAssets/Materials/PBRSurfaceMaterial.PBRSurfaceMaterial";
            }
          }
        }
        ::FString::FString((FString *)local_e8,pwVar8);
        pFVar6 = (FString *)local_e8;
        goto LAB_14e79a105;
      }
      pwVar8 = L"MR";
    }
    ::FString::FString((FString *)local_e8,pwVar8);
    UE::Core::Private::Function::CheckCallable(local_c8);
    pcVar2 = local_c8;
    plVar7 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar7 = local_a0;
    }
    this_02 = (void *)(**(code **)(*plVar7 + 8))();
    if (pcVar2 == UE::Core::Private::Function::
                  TFunctionRefCaller<`UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode'::__l2::<lambda_1>,void,FString_const_&>
                  ::Call) {
      `UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode'::__l2::<lambda_1>::
      operator()(this_02,(FString *)local_e8);
    }
    else {
      (*pcVar2)();
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14e79a00b;
    pFVar6 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this_01,(FString *)local_e8,(UObject *)0x0);
LAB_14e79a105:
    UInterchangeMaterialInstanceFactoryNode::SetCustomParent(this_00,pFVar6);
  }
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  pUVar5 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
  pFVar6 = UObjectBaseUtility::GetPathName
                     ((UObjectBaseUtility *)pUVar5,(FString *)local_e8,(UObject *)0x0);
  UInterchangeMaterialInstanceFactoryNode::SetCustomInstanceClassName(this_00,pFVar6);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  local_e8 = (undefined1  [8])0x0;
  uStack_e0._0_4_ = 0;
  uStack_e0._4_4_ = 0;
  UInterchangeShaderPortsAPI::GatherInputs
            ((UInterchangeBaseNode *)param_1,(TArray<FString,TSizedDefaultAllocator<32>_> *)local_e8
            );
  iVar1 = (int)uStack_e0;
  pFVar10 = (FScriptContainerElement *)((longlong)local_e8 + (longlong)(int)uStack_e0 * 0x10);
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  auVar9 = local_e8;
  while( true ) {
    if ((int)uStack_e0 != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d0);
    }
    if (auVar9 == (undefined1  [8])pFVar10) break;
    VisitShaderInput(this,(UInterchangeShaderNode *)param_1,this_00,(FString *)auVar9,
                     (TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
                      *)local_98);
    auVar9 = (undefined1  [8])((longlong)auVar9 + 0x10);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  DestructItems<FString,int>((FString *)local_e8,(int)uStack_e0);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  UE::Interchange::InterchangeGenericMaterialPipeline::Private::AddSpecularProfileToFactoryNode
            ((UInterchangeBaseNode *)param_1,(UInterchangeFactoryBaseNode *)this_00,
             (this->BaseNodeContainer).field0_0x0.DebugPtr);
  if (local_c8 != (code *)0x0) {
    plVar7 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar7 = local_a0;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return this_00;
}

// CreateScalarParameterExpression @ 14e79a5d0

UInterchangeMaterialExpressionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateScalarParameterExpression
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          FString *param_2,FString *param_3)

{
  FName FVar1;
  bool bVar2;
  UClass *pUVar3;
  UInterchangeMaterialExpressionFactoryNode *this_00;
  FString *pFVar4;
  FName *pFVar5;
  float local_28 [2];
  FName local_20;
  FString local_18;
  
  pUVar3 = Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister();
  this_00 = CreateExpressionNode(this,param_2,param_3,pUVar3);
  pFVar4 = UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_18,param_2);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute((UInterchangeBaseNode *)param_1,pFVar4,local_28);
  if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar5 = ::FName::FName((FName *)&local_18,0xc,L"DefaultValue",FNAME_Add);
    local_20 = *pFVar5;
    pFVar4 = ::FName::ToString(&local_20,&local_18);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)this_00,pFVar4,local_28);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar1 = local_20;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister();
    pFVar4 = ::FName::ToString(&local_20,&local_18);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)this_00,pFVar4,pUVar3,FVar1);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_18);
  pFVar4 = &local_18;
  if (local_18.Data.ArrayNum < 2) {
    pFVar4 = param_2;
  }
  UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this_00,pFVar4);
  if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this_00;
}

// CreateSpecularProfileFactoryNode @ 14e79c200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UInterchangeGenericMaterialPipeline::CreateSpecularProfileFactoryNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeSpecularProfileNode *param_1)

{
  UInterchangeBaseNodeContainer *pUVar1;
  bool bVar2;
  FString *pFVar3;
  UClass *pUVar4;
  UInterchangeSpecularProfileFactoryNode *this_00;
  UInterchangeBaseNode *pUVar5;
  longlong *plVar6;
  undefined1 auStackY_128 [32];
  ESpecularProfileFormat local_f8 [8];
  FString local_f0;
  FString local_e0;
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_f0);
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_d0,pFVar3);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  pUVar1 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UInterchangeSpecularProfileFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar1;
  this_00 = (UInterchangeSpecularProfileFactoryNode *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  pUVar1 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
  ::FString::FString(&local_f0,L"");
  pFVar3 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_e0);
  UInterchangeBaseNodeContainer::SetupNode
            (pUVar1,(UInterchangeBaseNode *)this_00,&local_d0,pFVar3,FactoryData,&local_f0);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)this_00,true);
  bVar2 = UInterchangeSpecularProfileNode::GetCustomFormat(param_1,local_f8);
  if (bVar2) {
    UInterchangeSpecularProfileFactoryNode::SetCustomFormat(this_00,local_f8[0]);
  }
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  bVar2 = UInterchangeSpecularProfileNode::GetCustomTexture(param_1,&local_f0);
  if ((bVar2) &&
     (pUVar5 = UInterchangeBaseNodeContainer::GetNode
                         ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_f0),
     pUVar5 != (UInterchangeBaseNode *)0x0)) {
    UInterchangeSpecularProfileFactoryNode::SetCustomTexture(this_00,&local_f0);
    pFVar3 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_e0,&local_f0);
    UInterchangeFactoryBaseNode::AddFactoryDependencyUid
              ((UInterchangeFactoryBaseNode *)this_00,pFVar3);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_e0);
  UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_00,pFVar3);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_e0);
  UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)param_1,pFVar3);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateStaticBooleanParameterExpression @ 14e79c460

UInterchangeMaterialExpressionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateStaticBooleanParameterExpression
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          FString *param_2,FString *param_3)

{
  FName FVar1;
  bool bVar2;
  UClass *pUVar3;
  UInterchangeMaterialExpressionFactoryNode *this_00;
  FName *pFVar4;
  FString *pFVar5;
  bool local_28 [8];
  FName local_20;
  FString local_18;
  
  pUVar3 = Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister();
  this_00 = CreateExpressionNode(this,param_2,param_3,pUVar3);
  bVar2 = UInterchangeBaseNode::GetBooleanAttribute
                    ((UInterchangeBaseNode *)param_1,param_2,local_28);
  if (bVar2) {
    pFVar4 = ::FName::FName((FName *)&local_18,0xc,L"DefaultValue",FNAME_Add);
    local_20 = *pFVar4;
    pFVar5 = ::FName::ToString(&local_20,&local_18);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)this_00,pFVar5,local_28);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar1 = local_20;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister();
    pFVar5 = ::FName::ToString(&local_20,&local_18);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
              ((UInterchangeFactoryBaseNode *)this_00,pFVar5,pUVar3,FVar1);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this_00,param_2);
  return this_00;
}

// CreateVector2ParameterExpression @ 14e79dbf0

UInterchangeMaterialExpressionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateVector2ParameterExpression
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          FString *param_2,FString *param_3)

{
  FName FVar1;
  bool bVar2;
  FString *pFVar3;
  UClass *pUVar4;
  UInterchangeMaterialExpressionFactoryNode *this_00;
  FName *pFVar5;
  UInterchangeMaterialExpressionFactoryNode *pUVar6;
  FString *pFVar7;
  FName local_78;
  TVector2<float>_u_0 local_70;
  FName local_68;
  FLinearColor_u_0 local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  pFVar3 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_50,param_2);
  bVar2 = UInterchangeBaseNode::GetAttribute<UE::Math::TVector2<float>_>
                    ((UInterchangeBaseNode *)param_1,pFVar3,(TVector2<float> *)&local_70._s_0);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pUVar4 = Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister();
    this_00 = CreateExpressionNode(this,param_2,param_3,pUVar4);
    pFVar5 = ::FName::FName(&local_68,0xc,L"DefaultValue",FNAME_Add);
    local_60._s_0.R = local_70._s_0.X;
    local_78 = *pFVar5;
    local_60._s_0.G = local_70._s_0.Y;
    local_60._s_0.B = 0.0;
    local_60._s_0.A = 1.0;
    pFVar3 = ::FName::ToString(&local_78,&local_50);
    UInterchangeBaseNode::AddLinearColorAttribute
              ((UInterchangeBaseNode *)this_00,pFVar3,(FLinearColor *)&local_60._s_0);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    FVar1 = local_78;
    pUVar4 = Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister();
    pFVar3 = ::FName::ToString(&local_78,&local_50);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FLinearColor>
              ((UInterchangeFactoryBaseNode *)this_00,pFVar3,pUVar4,FVar1);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    pUVar4 = Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister();
    ::FString::ConcatFC(&local_50,param_2,L"_Mask");
    pUVar6 = CreateExpressionNode(this,&local_50,param_3,pUVar4);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_30);
    pFVar5 = ::FName::FName((FName *)&local_60._s_0,5,L"Input",FNAME_Add);
    local_68 = *pFVar5;
    pFVar7 = ::FName::ToString(&local_68,&local_40);
    UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput
              ((UInterchangeBaseNode *)pUVar6,pFVar7,pFVar3);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  else {
    pUVar6 = (UInterchangeMaterialExpressionFactoryNode *)0x0;
  }
  return pUVar6;
}

// CreateVectorParameterExpression @ 14e79de00

UInterchangeMaterialExpressionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::CreateVectorParameterExpression
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          FString *param_2,FString *param_3)

{
  FName FVar1;
  bool bVar2;
  UClass *pUVar3;
  UInterchangeMaterialExpressionFactoryNode *this_00;
  FString *pFVar4;
  FName *pFVar5;
  FName local_38;
  FString local_30;
  FLinearColor local_20;
  
  pUVar3 = Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister();
  this_00 = CreateExpressionNode(this,param_2,param_3,pUVar3);
  pFVar4 = UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_30,param_2);
  bVar2 = UInterchangeBaseNode::GetLinearColorAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,&local_20);
  if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar5 = ::FName::FName((FName *)&local_30,0xc,L"DefaultValue",FNAME_Add);
    local_38 = *pFVar5;
    pFVar4 = ::FName::ToString(&local_38,&local_30);
    UInterchangeBaseNode::AddLinearColorAttribute((UInterchangeBaseNode *)this_00,pFVar4,&local_20);
    if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    FVar1 = local_38;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister();
    pFVar4 = ::FName::ToString(&local_38,&local_30);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FLinearColor>
              ((UInterchangeFactoryBaseNode *)this_00,pFVar4,pUVar3,FVar1);
    if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_30);
  pFVar4 = &local_30;
  if (local_30.Data.ArrayNum < 2) {
    pFVar4 = param_2;
  }
  UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this_00,pFVar4);
  if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return this_00;
}

// ExecutePipeline @ 14e7a5ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UInterchangeGenericMaterialPipeline::ExecutePipeline
          (UInterchangeGenericMaterialPipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  int *piVar1;
  TArray<UInterchangeSourceData_const_*,TSizedDefaultAllocator<32>_> *this_00;
  undefined8 *puVar2;
  UInterchangeGenericTexturePipeline *pUVar3;
  UObject *pUVar4;
  UInterchangeSparseVolumeTexturePipeline *pUVar5;
  FScriptContainerElement *pFVar6;
  UInterchangeShaderGraphNode *this_01;
  UInterchangeMaterialInstanceNode *this_02;
  UInterchangeBaseNodeContainer *pUVar7;
  UInterchangeMaterialReferenceNode *this_03;
  void *_Src;
  UInterchangeBaseMaterialFactoryNode *pUVar8;
  UInterchangeBaseNode *this_04;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 this_05 [8];
  bool bVar12;
  char cVar13;
  bool bVar14;
  int iVar15;
  EAttributeTypes EVar16;
  UInterchangeSourceNode *this_06;
  UInterchangeManager *this_07;
  UInterchangeEditorUtilitiesBase *pUVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar18;
  UInterchangeMaterialFactoryNode *this_08;
  UClass *pUVar19;
  FString *pFVar20;
  UInterchangeBaseMaterialFactoryNode **ppUVar21;
  UInterchangeMaterialInstanceFactoryNode *pUVar22;
  FName *pFVar23;
  UInterchangeFactoryBaseNode *this_09;
  UInterchangeGenericMaterialPipeline *pUVar24;
  UMaterialInterface *pUVar25;
  byte bVar26;
  longlong *plVar27;
  ForAnyElementType *pFVar28;
  int iVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  FScriptContainerElement *pFVar36;
  ulonglong uVar37;
  ForAnyElementType FVar38;
  ForElementType<FSetElementId> FVar39;
  uint *puVar40;
  undefined1 *puVar41;
  FScriptContainerElement *pFVar42;
  undefined1 auStackY_978 [32];
  bool local_928;
  bool local_927;
  bool local_926 [3];
  undefined1 local_923;
  undefined1 local_922;
  undefined1 local_921;
  undefined1 local_920 [4];
  uint local_91c;
  undefined1 local_918;
  undefined1 local_917;
  undefined1 local_916 [6];
  FString local_910;
  longlong *local_900;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8f8;
  int local_8d8;
  undefined4 uStack_8d4;
  int local_8d0;
  float local_8cc;
  uint local_8c8 [2];
  ulonglong local_8c0;
  longlong *local_8b8;
  undefined8 uStack_8b0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  int local_890;
  undefined4 uStack_88c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_888;
  undefined8 local_878;
  TArray<FString,TSizedDefaultAllocator<32>_> local_870;
  FString local_860;
  FString local_850;
  ForAnyElementType local_840;
  int local_838;
  int iStack_834;
  TEnumAsByte<EBlendMode> local_830 [8];
  undefined8 *local_828;
  ulonglong local_820;
  UInterchangeMaterialFactoryNode *local_818;
  FString *local_810;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  UInterchangeEditorUtilitiesBase *local_7d8;
  FString local_7d0;
  FSoftObjectPath local_7c0;
  FSoftObjectPath local_7a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_780;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_760;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_740;
  int local_720;
  undefined8 local_71c;
  UClass *local_710;
  UClass *local_708;
  UInterchangeMaterialFactoryNode *local_700;
  UInterchangeMaterialInstanceFactoryNode *local_6f8;
  UInterchangeMaterialInstanceFactoryNode *local_6f0;
  FName local_6e8;
  UInterchangeGenericMaterialPipeline *local_6e0;
  UInterchangeFactoryBaseNode *local_6d8;
  undefined8 **local_6d0;
  FString local_6c8;
  ForAnyElementType local_6b8;
  undefined8 local_6b0;
  TPairInitializer<int_&,UInterchangeBaseMaterialFactoryNode_*_&> local_6a8;
  undefined8 local_698;
  undefined1 local_690 [12];
  uint uStack_684;
  TBitArray<FDefaultBitArrayAllocator> *local_680;
  undefined8 uStack_678;
  longlong local_670;
  int iStack_668;
  undefined4 uStack_664;
  undefined1 local_660 [12];
  uint uStack_654;
  TBitArray<FDefaultBitArrayAllocator> *local_650;
  undefined8 uStack_648;
  longlong local_640;
  int iStack_638;
  undefined4 uStack_634;
  longlong *local_630;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_628;
  undefined8 uStack_608;
  longlong *local_600;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5f8;
  undefined8 uStack_5d8;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  code *local_590;
  undefined8 ***local_588;
  FString local_580;
  uint *local_570;
  UInterchangeMaterialFactoryNode **local_568;
  code *local_560;
  undefined8 **local_558;
  FLinearColor_u_0 local_550;
  FString local_540;
  FScriptContainerElement *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  UInterchangeBaseNode *local_518;
  FString local_510;
  undefined8 *local_500;
  undefined1 *local_4f8;
  undefined1 *local_4f0;
  undefined1 *local_4e8;
  undefined1 *local_4e0;
  FString local_4d8;
  FString local_4c8;
  TStringView<wchar_t> local_4b8;
  FString local_4a8;
  FName local_498;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  void *local_410 [2];
  TRangedForIterator local_400;
  TRangedForIterator local_3d0;
  TIterator local_3a0;
  undefined4 local_354;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_350;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_330;
  undefined4 local_2f4;
  undefined1 local_2e8 [128];
  undefined1 local_268 [32];
  uint *local_248;
  uint local_240;
  undefined4 local_23c;
  undefined4 local_238;
  int local_234;
  ForElementType<FSetElementId> local_228;
  int local_220;
  undefined1 local_218 [32];
  undefined8 local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  int local_1e4;
  void *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8 [32];
  uint *local_1a8;
  uint local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  int local_194;
  void *local_188;
  undefined4 local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  void *local_138;
  undefined4 local_130;
  undefined1 local_128 [8];
  TSet<TTuple<int,UInterchangeBaseMaterialFactoryNode_*>,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
  local_120;
  UInterchangeBaseNode *local_d0;
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_c8;
  TSparseArray<TSparseSetElement<UInterchangeShaderNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_b8;
  ForElementType<FSetElementId> local_78;
  int local_70;
  int local_68;
  uint uStack_64;
  bool local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_978;
  local_8c8[0] = 0;
  local_78 = (ForElementType<FSetElementId>)0x0;
  local_60 = false;
  local_120.Elements._0_8_ = 0;
  local_120.Elements._8_8_ = 0;
  local_120.Elements._32_8_ = 0;
  local_120.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_120.Elements._48_8_ = _UNK_150631d98;
  local_120.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_120.HashSize = 0;
  local_d0 = (UInterchangeBaseNode *)0x0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_b8._32_8_ = 0;
  local_b8._40_4_ = 0;
  local_b8._44_4_ = 0x80;
  local_b8._48_4_ = 0xffffffff;
  local_b8._52_4_ = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_64 = 0;
  local_810 = param_3;
  local_6e0 = this;
  local_128 = (undefined1  [8])this;
  if (param_1 != (UInterchangeBaseNodeContainer *)0x0) {
    if ((this->_padding_ == 0) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5102957597653204193>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                            ,799,"Results"), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pUVar3 = (this->TexturePipeline).field0_0x0.DebugPtr;
    if (pUVar3 != (UInterchangeGenericTexturePipeline *)0x0) {
      pUVar4 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      pUVar3->_padding_ = (longlong)pUVar4;
    }
    pUVar5 = (this->SparseVolumeTexturePipeline).field0_0x0.DebugPtr;
    if (pUVar5 != (UInterchangeSparseVolumeTexturePipeline *)0x0) {
      pUVar4 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      pUVar5->_padding_ = (longlong)pUVar4;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->BaseNodeContainer).field0_0x0.DebugPtr = param_1;
    this_00 = &this->SourceDatas;
    TArray<UInterchangeSourceData_const_*,TSizedDefaultAllocator<32>_>::Empty
              (this_00,param_2->ArrayNum);
    pFVar36 = (param_2->AllocatorInstance).Data;
    iVar29 = param_2->ArrayNum;
    pFVar42 = pFVar36 + (longlong)iVar29 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar29) {
        local_926[1] = false;
        `TCheckedPointerIterator<UInterchangeSourceData_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_926 + 1);
      }
      pFVar20 = local_810;
      if (pFVar36 == pFVar42) break;
      local_878 = *(undefined8 *)pFVar36;
      pFVar6 = (this_00->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_878) &&
          ((FScriptContainerElement *)&local_878 <
           pFVar6 + (longlong)(this->SourceDatas).ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar15 = (this->SourceDatas).ArrayNum;
      piVar1 = &(this->SourceDatas).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&this_00->AllocatorInstance,piVar1);
      }
      pFVar36 = pFVar36 + 8;
      (this->SourceDatas).ArrayNum = iVar15 + 1;
      *(undefined8 *)((this_00->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_878;
    }
    pUVar3 = (this->TexturePipeline).field0_0x0.DebugPtr;
    if (pUVar3 != (UInterchangeGenericTexturePipeline *)0x0) {
      UInterchangePipelineBase::ScriptedExecutePipeline
                ((UInterchangePipelineBase *)pUVar3,param_1,param_2,local_810);
    }
    pUVar5 = (this->SparseVolumeTexturePipeline).field0_0x0.DebugPtr;
    if (pUVar5 != (UInterchangeSparseVolumeTexturePipeline *)0x0) {
      UInterchangePipelineBase::ScriptedExecutePipeline
                ((UInterchangePipelineBase *)pUVar5,param_1,param_2,pFVar20);
    }
    local_500 = (undefined8 *)local_218;
    local_4f8 = local_178;
    local_218._0_8_ = 0;
    local_4f0 = local_1c8;
    local_218._8_8_ = 0;
    local_4e8 = local_268;
    local_4e0 = &local_918;
    local_558 = &local_500;
    local_560 = UE::Core::Private::Function::
                TFunctionRefCaller<`UInterchangeGenericMaterialPipeline::ExecutePipeline'::__l2::<lambda_2>,void,FString_const_&,UInterchangeBaseNode_*>
                ::Call;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 0x80;
    local_1e8 = 0xffffffff;
    local_1e4 = 0;
    local_1d8 = (void *)0x0;
    local_1d0 = 0;
    local_178._0_8_ = 0;
    local_178._8_8_ = 0;
    local_158 = (undefined1 *)0x0;
    local_150 = 0;
    local_14c = 0x80;
    local_148 = 0xffffffff;
    local_144 = 0;
    local_138 = (void *)0x0;
    local_130 = 0;
    local_1c8._0_8_ = 0;
    local_1c8._8_8_ = 0;
    local_1a8 = (uint *)0x0;
    local_1a0 = 0;
    local_19c = 0x80;
    local_198 = 0xffffffff;
    local_194 = 0;
    local_188 = (void *)0x0;
    local_180 = 0;
    local_268._0_8_ = 0;
    local_268._8_8_ = 0;
    local_248 = (uint *)0x0;
    local_240 = 0;
    local_23c = 0x80;
    local_238 = 0xffffffff;
    local_234 = 0;
    local_228 = (ForElementType<FSetElementId>)0x0;
    local_220 = 0;
    UInterchangeBaseNodeContainer::IterateNodes
              ((this->BaseNodeContainer).field0_0x0.DebugPtr,
               (TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_560);
    local_928 = this->bImportMaterials;
    this_06 = UInterchangeSourceNode::GetUniqueInstance
                        ((this->BaseNodeContainer).field0_0x0.DebugPtr);
    if (this_06 != (UInterchangeSourceNode *)0x0) {
      UInterchangeSourceNode::GetCustomImportUnusedMaterial(this_06,&local_928);
      local_928 = (bool)(local_928 | this->bImportMaterials);
    }
    this_07 = UInterchangeManager::GetInterchangeManager();
    pUVar17 = UInterchangeManager::GetEditorUtilities(this_07);
    local_7d8 = pUVar17;
    if (((pUVar17 != (UInterchangeEditorUtilitiesBase *)0x0) &&
        (cVar13 = (**(code **)(*(longlong *)pUVar17 + 0x2b8))(pUVar17), cVar13 != '\0')) &&
       (this->MaterialImport == ImportAsMaterials)) {
      this->MaterialImport = ImportAsMaterialInstances;
    }
    uVar37 = 1;
    local_8c0 = 1;
    if (this->MaterialImport == ImportAsMaterials) {
      local_780.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_218 + 0x10);
      local_780._padding_._0_4_ = 0;
      local_780._padding_._4_4_ = 1;
      local_780.UnvisitedBitMask = 0xffffffff;
      local_780.CurrentBitIndex = 0;
      local_780.BaseBitIndex = 0;
      if (local_1f0 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_780);
      }
      TStack_8f8._padding_ = CONCAT44(local_780._padding_._4_4_,(undefined4)local_780._padding_);
      local_900 = (longlong *)local_218;
      TStack_8f8._16_8_ = CONCAT44(local_780.CurrentBitIndex,local_780.UnvisitedBitMask);
      TStack_8f8._24_8_ = CONCAT44(local_780._28_4_,local_780.BaseBitIndex);
      TStack_8f8.Array = local_780.Array;
      local_8d8 = local_218._8_4_ - local_1e4;
      local_680 = local_780.Array;
      iStack_668 = local_218._8_4_ - local_1e4;
      uStack_664 = uStack_8d4;
      local_690._0_8_ = local_900;
      unique0x10002821 = TStack_8f8._padding_;
      uStack_678 = TStack_8f8._16_8_;
      local_670 = TStack_8f8._24_8_;
      pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_350,(TBitArray<FDefaultBitArrayAllocator> *)(local_218 + 0x10),
                           local_1f0);
      local_900 = (longlong *)local_218;
      TStack_8f8._padding_ = pTVar18->_padding_;
      TStack_8f8.Array = pTVar18->Array;
      TStack_8f8.UnvisitedBitMask = pTVar18->UnvisitedBitMask;
      TStack_8f8.CurrentBitIndex = pTVar18->CurrentBitIndex;
      TStack_8f8._24_8_ = *(undefined8 *)&pTVar18->BaseBitIndex;
      local_8d8 = local_218._8_4_ - local_1e4;
      local_400.InitialNum = local_218._8_4_ - local_1e4;
      local_400._44_4_ = uStack_8d4;
      local_400._padding_ = (longlong)local_900;
      local_400._padding_ = TStack_8f8._padding_;
      local_400._padding_ = (longlong)TStack_8f8.Array;
      local_400._padding_ = TStack_8f8._16_8_;
      local_400._padding_ = TStack_8f8._24_8_;
      bVar12 = TSparseArray<TSparseSetElement<UInterchangeShaderGraphNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_690,&local_400);
      if (bVar12) {
        do {
          this_01 = *(UInterchangeShaderGraphNode **)
                     (*(longlong *)local_690._0_8_ + (longlong)uStack_678._4_4_ * 0x10);
          bVar12 = UInterchangeShaderGraphNode::GetCustomIsAShaderFunction(this_01,local_926 + 2);
          if ((bVar12) && (local_926[2] != false)) {
            local_710 = Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_NoRegister();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_710 != (UClass *)0x0)
               ) {
              UE::GC::MarkAsReachable((UObject *)local_710);
            }
            this_08 = (UInterchangeMaterialFactoryNode *)
                      CreateBaseMaterialFactoryNode
                                (this,(UInterchangeBaseNode *)this_01,
                                 (TSubclassOf<UInterchangeBaseMaterialFactoryNode>)&local_710,false)
            ;
            if (this_08 == (UInterchangeMaterialFactoryNode *)0x0) {
LAB_14e7a658a:
              this_08 = (UInterchangeMaterialFactoryNode *)0x0;
            }
            else {
              pUVar19 = Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_NoRegister();
              iVar29 = (int)pUVar19->_padding_;
              if ((*(int *)(this_08->_padding_ + 0x38) < iVar29) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_08->_padding_ + 0x30) + (longlong)iVar29 * 8)
                  != &pUVar19->_padding_)) goto LAB_14e7a658a;
            }
            local_888.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_888.ArrayNum = 0;
            local_888.ArrayMax = 0;
            UInterchangeShaderPortsAPI::GatherInputs((UInterchangeBaseNode *)this_01,&local_888);
            iVar29 = local_888.ArrayNum;
            pFVar42 = local_888.AllocatorInstance.Data + (longlong)local_888.ArrayNum * 0x10;
            FVar38.Data = local_888.AllocatorInstance.Data;
            while( true ) {
              if (local_888.ArrayNum != iVar29) {
                local_923 = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_923);
              }
              if (FVar38.Data == pFVar42) break;
              pFVar20 = UInterchangeBaseNode::GetUniqueID
                                  ((UInterchangeBaseNode *)this_08,&local_490);
              CreateMaterialExpressionForInput
                        (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)
                              &local_518,(UInterchangeBaseMaterialFactoryNode *)this_08,
                         (UInterchangeShaderNode *)this_01,(FString *)FVar38.Data,pFVar20);
              if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_490.Data.AllocatorInstance.Data);
              }
              if (local_518 != (UInterchangeBaseNode *)0x0) {
                pFVar20 = UInterchangeBaseNode::GetUniqueID(local_518,&local_480);
                UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                          ((UInterchangeBaseNode *)this_08,(FString *)FVar38.Data,pFVar20,&local_510
                          );
                if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_480.Data.AllocatorInstance.Data);
                }
              }
              if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_510.Data.AllocatorInstance.Data);
              }
              FVar38.Data = FVar38.Data + 0x10;
            }
            DestructItems<FString,int>
                      ((FString *)local_888.AllocatorInstance.Data,local_888.ArrayNum);
            if (local_888.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_888.AllocatorInstance.Data);
            }
          }
          else if (this->bIdentifyDuplicateMaterials == false) {
            this_08 = CreateMaterialFactoryNode(this,this_01);
          }
          else {
            UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::ResetHashData
                      ((FDuplicateMaterialHelper *)local_128);
            uStack_64 = UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::
                        ComputeShaderGraphNodeHash((FDuplicateMaterialHelper *)local_128,this_01);
            bVar12 = local_928;
            if (local_120.Elements._8_4_ != local_120.Elements._52_4_) {
              FVar39 = (ForElementType<FSetElementId>)(local_128 + 0x40);
              if (local_120.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar39 = local_120.Hash.SecondaryData;
              }
              for (iVar29 = *(int *)((longlong)FVar39 +
                                    (ulonglong)(local_120.HashSize - 1U & uStack_64) * 4);
                  iVar29 != -1;
                  iVar29 = *(int *)(local_120.Elements._0_8_ + 0x10 + (longlong)iVar29 * 0x18)) {
                if (*(uint *)(local_120.Elements._0_8_ + (longlong)iVar29 * 0x18) == uStack_64) {
                  local_60 = true;
                  break;
                }
              }
            }
            bVar14 = this->bCreateMaterialInstanceForParent;
            this->AttributeStorageNode = local_d0;
            if (local_60 == false) {
              local_818 = CreateMaterialFactoryNode
                                    ((UInterchangeGenericMaterialPipeline *)local_128,this_01);
              local_570 = &uStack_64;
              local_568 = &local_818;
              TSet<TTuple<int,UInterchangeBaseMaterialFactoryNode_*>,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<int_&,UInterchangeBaseMaterialFactoryNode_*_&>_>
                        ((TSet<TTuple<int,UInterchangeBaseMaterialFactoryNode_*>,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
                          *)(local_128 + 8),&local_6a8,(bool *)&local_570);
              UInterchangeBaseNode::CopyStorageAttributes
                        (local_d0,(UInterchangeBaseNode *)local_818,&local_c8);
              this_08 = local_818;
              UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)local_818,bVar12);
              if (bVar14 != false) {
                ppUVar21 = TMapBase<int,UInterchangeBaseMaterialFactoryNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>_>
                           ::FindChecked((TMapBase<int,UInterchangeBaseMaterialFactoryNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>_>
                                          *)(local_128 + 8),uStack_64);
                this_05 = local_128;
                pUVar8 = *ppUVar21;
                local_708 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_708 != (UClass *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_708);
                }
                this_08 = (UInterchangeMaterialFactoryNode *)
                          CreateBaseMaterialFactoryNode
                                    ((UInterchangeGenericMaterialPipeline *)this_05,
                                     (UInterchangeBaseNode *)this_01,
                                     (TSubclassOf<UInterchangeBaseMaterialFactoryNode>)&local_708,
                                     true);
                if ((this_08 == (UInterchangeMaterialFactoryNode *)0x0) ||
                   (bVar12 = UObjectBaseUtility::IsA<UInterchangeMaterialInstanceFactoryNode>
                                       ((UObjectBaseUtility *)this_08), !bVar12)) {
                  this_08 = (UInterchangeMaterialFactoryNode *)0x0;
                }
                if (pUVar8 != (UInterchangeBaseMaterialFactoryNode *)0x0) {
                  pFVar20 = UInterchangeBaseNode::GetUniqueID
                                      ((UInterchangeBaseNode *)pUVar8,&local_470);
                  UInterchangeMaterialInstanceFactoryNode::SetCustomParent
                            ((UInterchangeMaterialInstanceFactoryNode *)this_08,pFVar20);
                  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_470.Data.AllocatorInstance.Data);
                  }
                  pFVar20 = UInterchangeBaseNode::GetUniqueID
                                      ((UInterchangeBaseNode *)pUVar8,&local_460);
                  UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                            ((UInterchangeFactoryBaseNode *)this_08,pFVar20);
                  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_460.Data.AllocatorInstance.Data);
                  }
                }
              }
            }
            else {
              this_08 = (UInterchangeMaterialFactoryNode *)
                        UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::
                        CreateMaterialInstanceFactoryFromReference
                                  ((FDuplicateMaterialHelper *)local_128,this_01);
            }
            this->AttributeStorageNode = (UInterchangeBaseNode *)0x0;
          }
          local_700 = this_08;
          if (this_08 != (UInterchangeMaterialFactoryNode *)0x0) {
            TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
            ::Emplace<UInterchangeBaseMaterialFactoryNode_*_const_&>
                      ((TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
                        *)local_268,
                       (UInterchangeBaseMaterialFactoryNode **)((longlong)&local_6a8.Key + 4),
                       (bool *)&local_700);
          }
          uStack_678 = CONCAT44(uStack_678._4_4_,(uint)uStack_678 & ~uStack_684);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_690 + 8));
          bVar12 = TSparseArray<TSparseSetElement<UInterchangeShaderGraphNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_690,&local_400);
          uVar37 = local_8c0;
          pUVar17 = local_7d8;
        } while (bVar12);
      }
    }
    else if (this->MaterialImport == ImportAsMaterialInstances) {
      local_760.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_218 + 0x10);
      local_760._padding_._0_4_ = 0;
      local_760._padding_._4_4_ = 1;
      local_760.UnvisitedBitMask = 0xffffffff;
      local_760.CurrentBitIndex = 0;
      local_760.BaseBitIndex = 0;
      if (local_1f0 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_760);
      }
      TStack_8f8._padding_ = CONCAT44(local_760._padding_._4_4_,(undefined4)local_760._padding_);
      local_900 = (longlong *)local_218;
      TStack_8f8._16_8_ = CONCAT44(local_760.CurrentBitIndex,local_760.UnvisitedBitMask);
      TStack_8f8._24_8_ = CONCAT44(local_760._28_4_,local_760.BaseBitIndex);
      TStack_8f8.Array = local_760.Array;
      local_8d8 = local_218._8_4_ - local_1e4;
      local_650 = local_760.Array;
      iStack_638 = local_218._8_4_ - local_1e4;
      uStack_634 = uStack_8d4;
      local_660._0_8_ = local_900;
      unique0x10002841 = TStack_8f8._padding_;
      uStack_648 = TStack_8f8._16_8_;
      local_640 = TStack_8f8._24_8_;
      pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_330,(TBitArray<FDefaultBitArrayAllocator> *)(local_218 + 0x10),
                           local_1f0);
      local_900 = (longlong *)local_218;
      TStack_8f8._padding_ = pTVar18->_padding_;
      TStack_8f8.Array = pTVar18->Array;
      TStack_8f8.UnvisitedBitMask = pTVar18->UnvisitedBitMask;
      TStack_8f8.CurrentBitIndex = pTVar18->CurrentBitIndex;
      TStack_8f8._24_8_ = *(undefined8 *)&pTVar18->BaseBitIndex;
      local_8d8 = local_218._8_4_ - local_1e4;
      local_3d0.InitialNum = local_218._8_4_ - local_1e4;
      local_3d0._44_4_ = uStack_8d4;
      local_3d0._padding_ = (longlong)local_900;
      local_3d0._padding_ = TStack_8f8._padding_;
      local_3d0._padding_ = (longlong)TStack_8f8.Array;
      local_3d0._padding_ = TStack_8f8._16_8_;
      local_3d0._padding_ = TStack_8f8._24_8_;
      bVar12 = TSparseArray<TSparseSetElement<UInterchangeShaderGraphNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_660,&local_3d0);
      if (bVar12) {
        do {
          pUVar22 = CreateMaterialInstanceFactoryNode
                              (this,*(UInterchangeShaderGraphNode **)
                                     (*(longlong *)local_660._0_8_ +
                                     (longlong)uStack_648._4_4_ * 0x10));
          if (pUVar22 != (UInterchangeMaterialInstanceFactoryNode *)0x0) {
            local_6f8 = pUVar22;
            TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
            ::Emplace<UInterchangeBaseMaterialFactoryNode_*>
                      ((TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
                        *)local_268,(UInterchangeBaseMaterialFactoryNode **)&local_6a8.Value,
                       (bool *)&local_6f8);
            UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)pUVar22,local_928);
          }
          uStack_648 = CONCAT44(uStack_648._4_4_,(uint)uStack_648 & ~uStack_654);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_660 + 8));
          bVar12 = TSparseArray<TSparseSetElement<UInterchangeShaderGraphNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_660,&local_3d0);
        } while (bVar12);
      }
    }
    local_740.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
    local_740._padding_._0_4_ = 0;
    local_740._padding_._4_4_ = (int)uVar37;
    local_740.UnvisitedBitMask = 0xffffffff;
    local_740.CurrentBitIndex = 0;
    local_740.BaseBitIndex = 0;
    if (local_150 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_740);
    }
    uVar34 = local_150;
    TStack_8f8._padding_ = CONCAT44(local_740._padding_._4_4_,(undefined4)local_740._padding_);
    local_900 = (longlong *)local_178;
    TStack_8f8._16_8_ = CONCAT44(local_740.CurrentBitIndex,local_740.UnvisitedBitMask);
    TStack_8f8._24_8_ = CONCAT44(local_740._28_4_,local_740.BaseBitIndex);
    local_890 = local_178._8_4_ - local_144;
    pTStack_8a8 = local_740.Array;
    uVar32 = local_150 & 0xffffffe0;
    iVar29 = (int)local_150 >> 5;
    bVar26 = (byte)local_150;
    local_91c = local_150;
    uStack_8d4 = uStack_88c;
    local_8d8 = local_890;
    TStack_8f8.Array = local_740.Array;
    local_8b8 = local_900;
    uStack_8b0 = TStack_8f8._padding_;
    uStack_8a0 = TStack_8f8._16_8_;
    uStack_898 = TStack_8f8._24_8_;
    if (((int)local_150 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (uVar34 != local_150) {
      puVar41 = local_178 + 0x10;
      if (local_158 != (undefined1 *)0x0) {
        puVar41 = local_158;
      }
      uVar34 = -1 << (bVar26 & 0x1f) & *(uint *)(puVar41 + (longlong)iVar29 * 4);
      while (uVar34 == 0) {
        iVar29 = iVar29 + 1;
        uVar32 = uVar32 + 0x20;
        if ((int)(((int)(local_150 - 1) >> 0x1f & 0x1fU) + (local_150 - 1)) >> 5 < iVar29) {
          local_91c = local_150;
          uVar34 = local_150;
          goto LAB_14e7a6c30;
        }
        uVar34 = *(uint *)(puVar41 + (longlong)iVar29 * 4);
      }
      uVar37 = (ulonglong)(~(uVar34 - 1) & uVar34) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_6a8.Value._4_4_ = (int)lVar9;
      local_91c = (uVar32 - 1) + local_6a8.Value._4_4_;
      uVar34 = local_91c;
      if ((int)local_150 < (int)local_91c) {
        local_91c = local_150;
        uVar34 = local_150;
      }
    }
LAB_14e7a6c30:
    do {
      plVar27 = local_900;
      if ((int)local_900[1] - *(int *)((longlong)local_900 + 0x34) != local_8d8) {
        local_922 = 0;
        `TSparseArray<TSparseSetElement<UInterchangeMaterialInstanceNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_922);
      }
      uVar32 = local_1a0;
      if (((TStack_8f8.CurrentBitIndex == uVar34) &&
          (TStack_8f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
         (plVar27 == (longlong *)local_178)) goto LAB_14e7a71cc;
      this_02 = *(UInterchangeMaterialInstanceNode **)
                 (*plVar27 + (longlong)TStack_8f8.CurrentBitIndex * 0x10);
      local_860.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_860.Data.ArrayNum = 0;
      local_860.Data.ArrayMax = 0;
      bVar12 = UInterchangeMaterialInstanceNode::GetCustomParent(this_02,&local_860);
      if ((bVar12) && (1 < local_860.Data.ArrayNum)) {
        UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)this_02,&local_7d0);
        pFVar20 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_02,&local_440);
        UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_808,pFVar20);
        if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_440.Data.AllocatorInstance.Data);
        }
        bVar12 = UInterchangeBaseNodeContainer::IsNodeUidValid
                           ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_808);
        pUVar7 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
        if (bVar12) {
          pUVar22 = (UInterchangeMaterialInstanceFactoryNode *)
                    UInterchangeBaseNodeContainer::GetFactoryNode(pUVar7,&local_808);
          if ((pUVar22 == (UInterchangeMaterialInstanceFactoryNode *)0x0) ||
             (bVar12 = UObjectBaseUtility::IsA<UInterchangeMaterialInstanceFactoryNode>
                                 ((UObjectBaseUtility *)pUVar22), !bVar12)) goto LAB_14e7a6d21;
        }
        else {
          pUVar22 = NewObject<UInterchangeMaterialInstanceFactoryNode>((UObject *)pUVar7);
          if (pUVar22 == (UInterchangeMaterialInstanceFactoryNode *)0x0) {
            bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5102957597653203998>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                                ,0x3e2,"MaterialFactoryNode");
            if (bVar12) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
LAB_14e7a6d21:
            if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_808.Data.AllocatorInstance.Data);
            }
            if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7a6d40;
          }
          pUVar7 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
          ::FString::FString(&local_580,L"");
          UInterchangeBaseNodeContainer::SetupNode
                    (pUVar7,(UInterchangeBaseNode *)pUVar22,&local_808,&local_7d0,FactoryData,
                     &local_580);
          if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_580.Data.AllocatorInstance.Data);
          }
          pFVar20 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_02,&local_430);
          UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)pUVar22,pFVar20);
          if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_430.Data.AllocatorInstance.Data);
          }
          pFVar20 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar22,&local_420);
          UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_02,pFVar20);
          if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_420.Data.AllocatorInstance.Data);
          }
        }
        local_6f0 = pUVar22;
        TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
        ::Emplace<UInterchangeBaseMaterialFactoryNode_*>
                  ((TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
                    *)local_268,(UInterchangeBaseMaterialFactoryNode **)&local_698,
                   (bool *)&local_6f0);
        pFVar20 = (FString *)(**(code **)(this_02->_padding_ + 0x2d8))(this_02,local_410);
        UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)pUVar22,pFVar20);
        if (local_410[0] != (void *)0x0) {
          FMemory::Free(local_410[0]);
        }
        UInterchangeMaterialInstanceFactoryNode::SetCustomParent(pUVar22,&local_860);
        if ((pUVar17 == (UInterchangeEditorUtilitiesBase *)0x0) ||
           (cVar13 = (**(code **)(*(longlong *)pUVar17 + 0x2b8))(pUVar17), cVar13 == '\0')) {
          pUVar19 = Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
        }
        else {
          pUVar19 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
        }
        pFVar20 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pUVar19,&local_4d8,(UObject *)0x0);
        UInterchangeMaterialInstanceFactoryNode::SetCustomInstanceClassName(pUVar22,pFVar20);
        if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
        }
        bVar12 = UInterchangeMaterialInstanceNode::GetCustomBlendMode(this_02,(int *)local_830);
        if (bVar12) {
          UInterchangeMaterialInstanceFactoryNode::SetCustomBlendMode(pUVar22,local_830[0],true);
        }
        UE::Interchange::InterchangeGenericMaterialPipeline::Private::
        AddSpecularProfileToFactoryNode
                  ((UInterchangeBaseNode *)this_02,(UInterchangeFactoryBaseNode *)pUVar22,
                   (this->BaseNodeContainer).field0_0x0.DebugPtr);
        local_870.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_870.ArrayNum = 0;
        local_870.ArrayMax = 0;
        UInterchangeShaderPortsAPI::GatherInputs((UInterchangeBaseNode *)this_02,&local_870);
        uVar37 = local_8c0;
        iVar29 = local_870.ArrayNum;
        pFVar42 = local_870.AllocatorInstance.Data + (longlong)local_870.ArrayNum * 0x10;
        FVar38.Data = local_870.AllocatorInstance.Data;
        while( true ) {
          if (local_870.ArrayNum != iVar29) {
            local_921 = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_921);
          }
          if (FVar38.Data == pFVar42) break;
          iVar15 = *(int *)(FVar38.Data + 8) + -1;
          if (*(int *)(FVar38.Data + 8) == 0) {
            iVar15 = 0;
          }
          pFVar23 = ::FName::FName(&local_498,iVar15,*(wchar_t **)FVar38.Data,(EFindName)uVar37);
          local_6e8 = *pFVar23;
          bVar12 = UInterchangeShaderPortsAPI::HasParameter
                             ((UInterchangeBaseNode *)this_02,&local_6e8);
          if (bVar12) {
            UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_910,(FString *)FVar38.Data);
          }
          else {
            UInterchangeShaderPortsAPI::MakeInputValueKey(&local_910,(FString *)FVar38.Data);
          }
          EVar16 = UInterchangeShaderPortsAPI::GetInputType
                             ((UInterchangeBaseNode *)this_02,(FString *)FVar38.Data,bVar12);
          if (EVar16 == Bool) {
            local_926[0] = false;
            UInterchangeBaseNode::GetBooleanAttribute
                      ((UInterchangeBaseNode *)this_02,&local_910,local_926);
            UInterchangeBaseNode::AddBooleanAttribute
                      ((UInterchangeBaseNode *)pUVar22,&local_910,local_926);
          }
          else if (EVar16 == Float) {
            local_8cc = 0.0;
            UInterchangeBaseNode::GetFloatAttribute
                      ((UInterchangeBaseNode *)this_02,&local_910,&local_8cc);
            UInterchangeBaseNode::AddFloatAttribute
                      ((UInterchangeBaseNode *)pUVar22,&local_910,&local_8cc);
          }
          else if (EVar16 == Int32) {
            local_8d0 = 0;
            UInterchangeBaseNode::GetInt32Attribute
                      ((UInterchangeBaseNode *)this_02,&local_910,&local_8d0);
            UInterchangeBaseNode::AddInt32Attribute
                      ((UInterchangeBaseNode *)pUVar22,&local_910,&local_8d0);
          }
          else if (EVar16 == LinearColor) {
            local_550 = FLinearColor::White.field0_0x0;
            UInterchangeBaseNode::GetLinearColorAttribute
                      ((UInterchangeBaseNode *)this_02,&local_910,(FLinearColor *)&local_550._s_0);
            UInterchangeBaseNode::AddLinearColorAttribute
                      ((UInterchangeBaseNode *)pUVar22,&local_910,(FLinearColor *)&local_550._s_0);
          }
          else if (EVar16 == String) {
            local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_7e8.Data.ArrayNum = 0;
            local_7e8.Data.ArrayMax = 0;
            UInterchangeBaseNode::GetStringAttribute
                      ((UInterchangeBaseNode *)this_02,&local_910,&local_7e8);
            UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_6c8,&local_7e8);
            UInterchangeBaseNode::AddStringAttribute
                      ((UInterchangeBaseNode *)pUVar22,&local_910,&local_6c8);
            UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                      ((UInterchangeFactoryBaseNode *)pUVar22,&local_6c8);
            if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
            }
            if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
            }
          }
          if (local_910.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_910.Data.AllocatorInstance.Data);
          }
          FVar38.Data = FVar38.Data + 0x10;
        }
        DestructItems<FString,int>((FString *)local_870.AllocatorInstance.Data,local_870.ArrayNum);
        this = local_6e0;
        if (local_870.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_870.AllocatorInstance.Data);
        }
        if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_808.Data.AllocatorInstance.Data);
        }
        if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
        }
        uVar34 = local_91c;
        if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_860.Data.AllocatorInstance.Data);
          uVar34 = local_91c;
        }
      }
      else {
LAB_14e7a6d40:
        if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_860.Data.AllocatorInstance.Data);
        }
      }
      TStack_8f8.UnvisitedBitMask = TStack_8f8.UnvisitedBitMask & ~TStack_8f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8f8);
      pUVar17 = local_7d8;
    } while( true );
  }
  if (2 < (byte)LogInterchangePipeline._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
  }
LAB_14e7a7d2f:
  local_70 = 0;
  if (local_78 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78);
  }
  TSparseArray<TSparseSetElement<UInterchangeShaderNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UInterchangeShaderNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8);
  DestructItems<UE::Interchange::FAttributeKey,int>
            ((FAttributeKey *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  local_120.HashSize = 0;
  if (local_120.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_120.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UInterchangeBaseMaterialFactoryNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UInterchangeBaseMaterialFactoryNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UInterchangeBaseMaterialFactoryNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_128 + 8));
  return;
LAB_14e7a71cc:
  iVar29 = 0;
  uStack_898._0_4_ = 0;
  uVar34 = (uint)local_8c0;
  uStack_8a0._4_4_ = 0;
  if (local_1a0 != 0) {
    puVar40 = (uint *)(local_1c8 + 0x10);
    if (local_1a8 != (uint *)0x0) {
      puVar40 = local_1a8;
    }
    uVar33 = *puVar40;
    while (uVar33 == 0) {
      iVar29 = iVar29 + 1;
      uStack_898._0_4_ = (uint)uStack_898 + 0x20;
      uStack_8a0._4_4_ = local_1a0;
      if ((int)((local_1a0 - 1) + ((int)(local_1a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_14e7a7253;
      uVar33 = puVar40[iVar29];
    }
    uVar34 = ~(uVar33 - 1) & uVar33;
    uVar37 = (ulonglong)uVar34 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_698._4_4_ = (int)lVar9;
    uStack_8a0._4_4_ = local_698._4_4_ + -1 + (uint)uStack_898;
    if ((int)local_1a0 < (int)uStack_8a0._4_4_) {
      uStack_8a0._4_4_ = local_1a0;
    }
  }
LAB_14e7a7253:
  local_8b8 = (longlong *)local_1c8;
  pTStack_8a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1c8 + 0x10);
  local_890 = local_1c8._8_4_ - local_194;
  uVar33 = local_1a0 & 0xffffffe0;
  uStack_8b0 = CONCAT44(uVar34,iVar29);
  uStack_8a0._0_4_ = 0xffffffff;
  uStack_898._4_4_ = local_2f4;
  TStack_628._padding_ = uStack_8b0;
  iVar29 = (int)local_1a0 >> 5;
  uStack_608 = CONCAT44(uStack_88c,local_890);
  bVar26 = (byte)local_1a0;
  TStack_628.UnvisitedBitMask = 0xffffffff;
  TStack_628.CurrentBitIndex = uStack_8a0._4_4_;
  TStack_628.BaseBitIndex = (uint)uStack_898;
  TStack_628._28_4_ = local_2f4;
  local_630 = local_8b8;
  TStack_628.Array = pTStack_8a8;
  if (((int)local_1a0 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (uVar32 != local_1a0) {
    puVar40 = (uint *)(local_1c8 + 0x10);
    if (local_1a8 != (uint *)0x0) {
      puVar40 = local_1a8;
    }
    uVar32 = -1 << (bVar26 & 0x1f) & puVar40[iVar29];
    while (uVar32 == 0) {
      iVar29 = iVar29 + 1;
      uVar33 = uVar33 + 0x20;
      uVar32 = local_1a0;
      if ((int)(((int)(local_1a0 - 1) >> 0x1f & 0x1fU) + (local_1a0 - 1)) >> 5 < iVar29)
      goto LAB_14e7a7380;
      uVar32 = puVar40[iVar29];
    }
    uVar37 = (ulonglong)(~(uVar32 - 1) & uVar32) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_720 = (int)lVar9;
    uVar32 = local_720 + -1 + uVar33;
    if ((int)local_1a0 < (int)uVar32) {
      uVar32 = local_1a0;
    }
  }
LAB_14e7a7380:
  while( true ) {
    plVar27 = local_630;
    if ((int)local_630[1] - *(int *)((longlong)local_630 + 0x34) != (int)uStack_608) {
      local_920[0] = 0;
      `TSparseArray<TSparseSetElement<UInterchangeMaterialReferenceNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_920);
    }
    if (((TStack_628.CurrentBitIndex == uVar32) &&
        (TStack_628.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1c8 + 0x10))) &&
       (plVar27 == (longlong *)local_1c8)) break;
    local_7f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7f8.Data.ArrayNum = 0;
    local_7f8.Data.ArrayMax = 0;
    this_03 = *(UInterchangeMaterialReferenceNode **)
               (*plVar27 + (longlong)TStack_628.CurrentBitIndex * 0x10);
    bVar12 = UInterchangeMaterialReferenceNode::GetCustomContentPath(this_03,&local_7f8);
    if (bVar12) {
      pUVar7 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar7,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar19 = Z_Construct_UClass_UInterchangeMaterialReferenceFactoryNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_2e8,pUVar19);
      local_2e8._8_8_ = pUVar7;
      this_09 = (UInterchangeFactoryBaseNode *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2e8);
      if (local_2e8._64_8_ != 0) {
        plVar27 = (longlong *)(local_2e8 + 0x50);
        if ((longlong *)local_2e8._104_8_ != (longlong *)0x0) {
          plVar27 = (longlong *)local_2e8._104_8_;
        }
        (**(code **)(*plVar27 + 0x10))();
      }
      UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)this_03,&local_5c0);
      pFVar20 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_03,&local_4c8);
      UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_5d0,pFVar20);
      if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
      }
      pUVar7 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
      ::FString::FString(&local_540,L"");
      UInterchangeBaseNodeContainer::SetupNode
                (pUVar7,(UInterchangeBaseNode *)this_09,&local_5d0,&local_5c0,FactoryData,&local_540
                );
      if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_540.Data.AllocatorInstance.Data);
      }
      local_528 = local_7f8.Data.AllocatorInstance.Data;
      local_7c0.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_7c0.AssetPath.PackageName.Number = 0;
      local_7c0.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_7c0.AssetPath.AssetName.Number = 0;
      local_7c0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7c0.SubPathString.Data.ArrayNum = 0;
      local_7c0.SubPathString.Data.ArrayMax = 0;
      if (local_7f8.Data.ArrayNum == 0) {
        iStack_520 = 0;
      }
      else {
        iStack_520 = local_7f8.Data.ArrayNum + -1;
      }
      local_4b8._12_4_ = uStack_51c;
      local_4b8.Size = iStack_520;
      local_4b8.DataPtr = (wchar_t *)local_7f8.Data.AllocatorInstance.Data;
      FSoftObjectPath::SetPath(&local_7c0,&local_4b8);
      UInterchangeFactoryBaseNode::SetCustomReferenceObject(this_09,&local_7c0);
      if (local_7c0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c0.SubPathString.Data.AllocatorInstance.Data);
      }
      local_6d8 = this_09;
      TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
      ::Emplace<UInterchangeBaseMaterialFactoryNode_*>
                ((TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
                  *)local_268,(UInterchangeBaseMaterialFactoryNode **)&local_71c,(bool *)&local_6d8)
      ;
      pFVar20 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_03,&local_4a8);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_09,pFVar20);
      if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
      }
      pFVar20 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_09,&local_450);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_03,pFVar20);
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
      if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
      }
      if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
      }
    }
    if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
    }
    TStack_628.UnvisitedBitMask = TStack_628.UnvisitedBitMask & ~TStack_628._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_628);
  }
  pUVar24 = (UInterchangeGenericMaterialPipeline *)
            UInterchangePipelineBase::GetMostPipelineOuter((UInterchangePipelineBase *)this);
  uVar37 = local_8c0;
  if (this == pUVar24) {
    iVar29 = (int)this->_padding_;
    _Src = (void *)this->_padding_;
    uVar30 = local_8c0 & 0xffffffff;
    local_840.Data = (FScriptContainerElement *)0x0;
    local_838 = iVar29;
    if (iVar29 == 0) {
      iStack_834 = 0;
      pFVar28 = &local_840;
      local_850.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar29,0,&local_840,iVar29,&iStack_834);
      memcpy(local_840.Data,_Src,(longlong)iVar29 * 2);
      pFVar28 = &local_840;
      local_850.Data.AllocatorInstance.Data = local_840.Data;
    }
  }
  else {
    local_6b0 = 0;
    pFVar28 = &local_6b8;
    local_850.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar30 = 2;
  }
  uVar32 = (uint)uVar37;
  pFVar28->Data = (FScriptContainerElement *)0x0;
  local_850.Data.ArrayNum = *(int *)&pFVar28[1].Data;
  local_850.Data.ArrayMax = *(int *)((longlong)&pFVar28[1].Data + 4);
  pFVar28[1].Data = (FScriptContainerElement *)0x0;
  if (((uVar30 & 2) != 0) &&
     (uVar30 = (ulonglong)((uint)uVar30 & 0xfffffffd),
     local_6b8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_6b8.Data);
  }
  if (((uVar30 & 1) != 0) && (local_840.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_840.Data);
  }
  uVar34 = 0;
  if ((local_850.Data.ArrayNum < 2) &&
     (pUVar24 = (UInterchangeGenericMaterialPipeline *)
                UInterchangePipelineBase::GetMostPipelineOuter((UInterchangePipelineBase *)this),
     this == pUVar24)) {
    iVar29 = (this->AssetName).Data.ArrayNum;
    uVar33 = iVar29 - 1;
    if (iVar29 == 0) {
      uVar33 = uVar34;
    }
    ::FString::AssignRange
              (&local_850,(wchar_t *)(this->AssetName).Data.AllocatorInstance.Data,uVar33);
  }
  uVar33 = local_240;
  if ((this->bImportMaterials == false) && (local_928 == false)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  uStack_898._0_4_ = 0;
  uStack_8a0._4_4_ = (uint)uStack_898;
  if (local_240 != 0) {
    puVar40 = (uint *)(local_268 + 0x10);
    if (local_248 != (uint *)0x0) {
      puVar40 = local_248;
    }
    uVar35 = *puVar40;
    uVar34 = 0;
    uStack_898._0_4_ = 0;
    while (uVar35 == 0) {
      uVar34 = uVar34 + 1;
      uStack_898._0_4_ = (uint)uStack_898 + 0x20;
      uStack_8a0._4_4_ = local_240;
      if ((int)((local_240 - 1) + ((int)(local_240 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar34)
      goto LAB_14e7a7804;
      uVar35 = puVar40[(int)uVar34];
    }
    uVar32 = ~(uVar35 - 1) & uVar35;
    uVar37 = (ulonglong)uVar32 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_71c._4_4_ = (int)lVar9;
    uStack_8a0._4_4_ = (int)lVar9 + -1 + (uint)uStack_898;
    if ((int)local_240 < (int)uStack_8a0._4_4_) {
      uStack_8a0._4_4_ = local_240;
    }
  }
LAB_14e7a7804:
  local_8b8 = (longlong *)local_268;
  pTStack_8a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_268 + 0x10);
  uVar35 = local_240 & 0xffffffe0;
  local_890 = local_268._8_4_ - local_234;
  uStack_8a0._0_4_ = 0xffffffff;
  uStack_8b0 = CONCAT44(uVar32,uVar34);
  uStack_898._4_4_ = local_354;
  TStack_5f8._padding_ = uStack_8b0;
  iVar29 = (int)local_240 >> 5;
  uStack_5d8 = CONCAT44(uStack_88c,local_890);
  bVar26 = (byte)local_240;
  TStack_5f8.UnvisitedBitMask = 0xffffffff;
  TStack_5f8.CurrentBitIndex = uStack_8a0._4_4_;
  TStack_5f8.BaseBitIndex = (uint)uStack_898;
  TStack_5f8._28_4_ = local_354;
  local_600 = local_8b8;
  TStack_5f8.Array = pTStack_8a8;
  if (((int)local_240 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar20 = local_810;
  if (uVar33 != local_240) {
    puVar40 = (uint *)(local_268 + 0x10);
    if (local_248 != (uint *)0x0) {
      puVar40 = local_248;
    }
    uVar32 = -1 << (bVar26 & 0x1f) & puVar40[iVar29];
    while (uVar32 == 0) {
      iVar29 = iVar29 + 1;
      uVar35 = uVar35 + 0x20;
      uVar33 = local_240;
      if ((int)(((int)(local_240 - 1) >> 0x1f & 0x1fU) + (local_240 - 1)) >> 5 < iVar29)
      goto LAB_14e7a7930;
      uVar32 = puVar40[iVar29];
    }
    uVar37 = (ulonglong)(~(uVar32 - 1) & uVar32) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar33 = (uVar35 - 1) + (int)lVar9;
    if ((int)local_240 < (int)uVar33) {
      uVar33 = local_240;
    }
  }
LAB_14e7a7930:
  do {
    plVar27 = local_600;
    if ((int)local_600[1] - *(int *)((longlong)local_600 + 0x34) != (int)uStack_5d8) {
      `TSparseArray<TSparseSetElement<UInterchangeBaseMaterialFactoryNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_917);
    }
    if (((TStack_5f8.CurrentBitIndex == uVar33) &&
        (TStack_5f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_268 + 0x10))) &&
       (plVar27 == (longlong *)local_268)) break;
    pUVar8 = *(UInterchangeBaseMaterialFactoryNode **)
              (*plVar27 + (longlong)TStack_5f8.CurrentBitIndex * 0x10);
    local_927 = bVar12;
    UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)pUVar8,&local_5a0);
    pUVar25 = UE::Interchange::InterchangeGenericMaterialPipeline::Private::
              FindExistingMaterialFromSearchLocation(&local_5a0,pFVar20,this->SearchLocation);
    if (pUVar25 != (UMaterialInterface *)0x0) {
      local_8c8[0] = (uint)this->SearchLocation;
      ::FString::FString(&local_5b0,L"SearchLocation");
      UInterchangeBaseNode::AddInt32Attribute
                ((UInterchangeBaseNode *)pUVar8,&local_5b0,(int *)local_8c8);
      if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
      }
      local_7a0.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_7a0.AssetPath.PackageName.Number = 0;
      local_7a0.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_7a0.AssetPath.AssetName.Number = 0;
      local_7a0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7a0.SubPathString.Data.ArrayNum = 0;
      local_7a0.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_7a0,(UObject *)pUVar25);
      UInterchangeFactoryBaseNode::SetCustomReferenceObject
                ((UInterchangeFactoryBaseNode *)pUVar8,&local_7a0);
      if (local_7a0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a0.SubPathString.Data.AllocatorInstance.Data);
      }
      if (((UMaterialInterface *)this->_padding_ == (UMaterialInterface *)0x0) ||
         ((UMaterialInterface *)this->_padding_ != pUVar25)) {
        local_927 = false;
      }
      else {
        pUVar19 = Z_Construct_UClass_UInterchangeMaterialFactoryNode_NoRegister();
        iVar29 = (int)pUVar19->_padding_;
        if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar29) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
            &pUVar19->_padding_)) {
LAB_14e7a7ac2:
          bVar14 = false;
        }
        else {
          pUVar19 = Z_Construct_UClass_UMaterial_NoRegister();
          iVar29 = (int)pUVar19->_padding_;
          if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar29) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
              &pUVar19->_padding_)) goto LAB_14e7a7ac2;
          bVar14 = true;
        }
        pUVar19 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
        iVar29 = (int)pUVar19->_padding_;
        if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar29) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
            &pUVar19->_padding_)) {
LAB_14e7a7b0f:
          bVar11 = false;
        }
        else {
          pUVar19 = Z_Construct_UClass_UMaterialInstance_NoRegister();
          iVar29 = (int)pUVar19->_padding_;
          if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar29) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
              &pUVar19->_padding_)) goto LAB_14e7a7b0f;
          bVar11 = true;
        }
        if ((bVar14) || (!bVar11)) {
          local_927 = false;
        }
        else {
          local_927 = true;
        }
      }
    }
    UInterchangeBaseMaterialFactoryNode::SetCustomIsMaterialImportEnabled(pUVar8,&local_927);
    UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)pUVar8,local_927);
    if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
    }
    TStack_5f8.UnvisitedBitMask = TStack_5f8.UnvisitedBitMask & ~TStack_5f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5f8);
  } while( true );
  pUVar24 = (UInterchangeGenericMaterialPipeline *)
            UInterchangePipelineBase::GetMostPipelineOuter((UInterchangePipelineBase *)this);
  if (((this == pUVar24) && (1 < local_850.Data.ArrayNum)) && (local_268._8_4_ - local_234 == 1)) {
    TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              (&local_3a0,
               (TSet<UInterchangeBaseMaterialFactoryNode_*,DefaultKeyFuncs<UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
                *)local_268);
    this_04 = *(UInterchangeBaseNode **)
               (*(longlong *)local_3a0._padding_ + (longlong)local_3a0._padding_._4_4_ * 0x10);
    if (this_04 != (UInterchangeBaseNode *)0x0) {
      (**(code **)(this_04->_padding_ + 0x2e0))(this_04,&local_850);
      UInterchangeBaseNode::SetDisplayLabel(this_04,&local_850);
    }
  }
  local_6d0 = &local_828;
  local_588 = &local_6d0;
  local_590 = UE::Core::Private::Function::
              TFunctionRefCaller<`UInterchangeGenericMaterialPipeline::ExecutePipeline'::__l2::<lambda_3>,void,FString_const_&,UInterchangeSpecularProfileNode_*>
              ::Call;
  local_828 = (undefined8 *)0x0;
  local_820 = 0;
  UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeSpecularProfileNode>
            ((this->BaseNodeContainer).field0_0x0.DebugPtr,
             (TFunctionRef<void___cdecl(FString_const_&,UInterchangeSpecularProfileNode_*)> *)
             &local_590);
  iVar29 = (int)local_820;
  uVar37 = (ulonglong)(int)local_820;
  puVar2 = local_828 + uVar37;
  puVar31 = local_828;
  while( true ) {
    if ((int)uVar37 != iVar29) {
      `TCheckedPointerIterator<UInterchangeSpecularProfileNode_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_916);
    }
    if (puVar31 == puVar2) break;
    CreateSpecularProfileFactoryNode(this,(UInterchangeSpecularProfileNode *)*puVar31);
    uVar37 = local_820 & 0xffffffff;
    puVar31 = puVar31 + 1;
  }
  if (local_828 != (undefined8 *)0x0) {
    FMemory::Free(local_828);
  }
  if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_850.Data.AllocatorInstance.Data);
  }
  local_220 = 0;
  if (local_228 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_228);
  }
  TSparseArray<TSparseSetElement<UInterchangeBaseMaterialFactoryNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UInterchangeBaseMaterialFactoryNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UInterchangeBaseMaterialFactoryNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_268);
  local_180 = 0;
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  TSparseArray<TSparseSetElement<UInterchangeMaterialReferenceNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UInterchangeMaterialReferenceNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UInterchangeMaterialReferenceNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1c8);
  local_130 = 0;
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  TSparseArray<TSparseSetElement<UInterchangeMaterialInstanceNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UInterchangeMaterialInstanceNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UInterchangeMaterialInstanceNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_178);
  local_1d0 = 0;
  if (local_1d8 != (void *)0x0) {
    FMemory::Free(local_1d8);
  }
  TSparseArray<TSparseSetElement<UInterchangeShaderGraphNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UInterchangeShaderGraphNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UInterchangeShaderGraphNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_218);
  goto LAB_14e7a7d2f;
}

// ExecutePostFactoryPipeline @ 14e7a9750

void __thiscall
UInterchangeGenericMaterialPipeline::ExecutePostFactoryPipeline
          (UInterchangeGenericMaterialPipeline *this,UInterchangeBaseNodeContainer *param_1,
          FString *param_2,UObject *param_3,bool param_4)

{
  UInterchangeGenericTexturePipeline *this_00;
  UInterchangeSparseVolumeTexturePipeline *this_01;
  
  this_00 = (this->TexturePipeline).field0_0x0.DebugPtr;
  if (this_00 != (UInterchangeGenericTexturePipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline
              ((UInterchangePipelineBase *)this_00,param_1,param_2,param_3,param_4);
  }
  this_01 = (this->SparseVolumeTexturePipeline).field0_0x0.DebugPtr;
  if (this_01 != (UInterchangeSparseVolumeTexturePipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline
              ((UInterchangePipelineBase *)this_01,param_1,param_2,param_3,param_4);
  }
  return;
}

// ExecutePostImportPipeline @ 14e7a9a80

void __thiscall
UInterchangeGenericMaterialPipeline::ExecutePostImportPipeline
          (UInterchangeGenericMaterialPipeline *this,UInterchangeBaseNodeContainer *param_1,
          FString *param_2,UObject *param_3,bool param_4)

{
  UInterchangeGenericTexturePipeline *this_00;
  UInterchangeSparseVolumeTexturePipeline *this_01;
  
  this_00 = (this->TexturePipeline).field0_0x0.DebugPtr;
  if (this_00 != (UInterchangeGenericTexturePipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostImportPipeline
              ((UInterchangePipelineBase *)this_00,param_1,param_2,param_3,param_4);
  }
  this_01 = (this->SparseVolumeTexturePipeline).field0_0x0.DebugPtr;
  if (this_01 != (UInterchangeSparseVolumeTexturePipeline *)0x0) {
    UInterchangePipelineBase::ScriptedExecutePostImportPipeline
              ((UInterchangePipelineBase *)this_01,param_1,param_2,param_3,param_4);
  }
  return;
}

// GetPipelineCategory @ 14e7b91d0

FString * __cdecl
UInterchangeGenericMaterialPipeline::GetPipelineCategory
          (FString *__return_storage_ptr__,UClass *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"Materials");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7b9a40

UClass * __cdecl UInterchangeGenericMaterialPipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericMaterialPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericMaterialPipeline,0x1c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericMaterialPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericMaterialPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.InnerSingleton;
}

// GetTextureUidAttributeFromShaderNode @ 14e7bb180

FString * __thiscall
UInterchangeGenericMaterialPipeline::GetTextureUidAttributeFromShaderNode
          (UInterchangeGenericMaterialPipeline *this,FString *__return_storage_ptr__,
          UInterchangeShaderNode *param_1,FName param_2,bool *param_3)

{
  bool bVar1;
  FString *pFVar2;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  local_res20 = param_2;
  bVar1 = UInterchangeShaderPortsAPI::HasParameter((UInterchangeBaseNode *)param_1,&local_res20);
  *param_3 = bVar1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar1 = *param_3;
  pFVar2 = ::FName::ToString(&local_res20,&local_18);
  if (bVar1 == false) {
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_28,pFVar2);
  }
  else {
    UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_28,pFVar2);
  }
  UInterchangeBaseNode::GetStringAttribute
            ((UInterchangeBaseNode *)param_1,&local_28,__return_storage_ptr__);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HandleBxDFInput @ 14e7bb880

bool __thiscall
UInterchangeGenericMaterialPipeline::HandleBxDFInput
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  FString *pFVar6;
  UClass *pUVar7;
  FName *pFVar8;
  bool local_res10 [16];
  FName local_res20;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  
  if (param_1 == (UInterchangeShaderGraphNode *)0x0) {
    return false;
  }
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Common::Parameters::BxDF);
  if (!bVar3) {
    return false;
  }
  pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_88);
  pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::BxDF,&local_98);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,
             (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,pFVar6
             ,pFVar5);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_38 == (UInterchangeBaseNode *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5102957597653201121>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                       ,0xf1f,"ExpressionFactoryNode.Get<0>()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (local_38 == (UInterchangeBaseNode *)0x0) goto LAB_14e7bb9b4;
  }
  pFVar5 = UInterchangeBaseNode::GetUniqueID(local_38,&local_68);
  pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::BxDF,&local_78);
  UInterchangeShaderPortsAPI::ConnectOuputToInputByName
            ((UInterchangeBaseNode *)param_2,pFVar6,pFVar5,&local_30);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14e7bb9b4:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar8 = ::FName::FName(&local_res20,0x16,L"bUseMaterialAttributes",FNAME_Add);
    UseMaterialAttributesMemberName = *pFVar8;
    _Init_thread_footer(&::_TSS0);
  }
  local_res10[0] = true;
  pFVar5 = ::FName::ToString(&UseMaterialAttributesMemberName,&local_58);
  UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)param_2,pFVar5,local_res10);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar2 = UseMaterialAttributesMemberName;
  pUVar7 = Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
  pFVar5 = ::FName::ToString(&UseMaterialAttributesMemberName,&local_48);
  UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FString>
            ((UInterchangeFactoryBaseNode *)param_2,pFVar5,pUVar7,FVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return true;
}

// HandleClearCoat @ 14e7bbaf0

bool __thiscall
UInterchangeGenericMaterialPipeline::HandleClearCoat
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  EMaterialInputType EVar1;
  bool bVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FMaterialCreationContext *pFVar6;
  TEnumAsByte<EMaterialShadingModel> local_res20 [8];
  FString local_68;
  FString local_58;
  UInterchangeBaseNode *local_48;
  FString local_40;
  
  pFVar6 = &this->MaterialCreationContext;
  bVar5 = false;
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::ClearCoat::Parameters::ClearCoat);
  if (bVar2) {
    EVar1 = pFVar6->InputTypeBeingProcessed;
    pFVar6->InputTypeBeingProcessed = Scalar;
    pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_58);
    pFVar4 = ::FName::ToString(&UE::Interchange::Materials::ClearCoat::Parameters::ClearCoat,
                               &local_68);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_48,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar4,pFVar3);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48 != (UInterchangeBaseNode *)0x0) {
      pFVar3 = UInterchangeBaseNode::GetUniqueID(local_48,&local_58);
      UInterchangeMaterialFactoryNode::ConnectOutputToClearCoat(param_2,pFVar3,&local_40);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = true;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    pFVar6->InputTypeBeingProcessed = EVar1;
  }
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::ClearCoat::Parameters::ClearCoatRoughness);
  if (bVar2) {
    EVar1 = pFVar6->InputTypeBeingProcessed;
    pFVar6->InputTypeBeingProcessed = Scalar;
    pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_68);
    pFVar4 = ::FName::ToString(&UE::Interchange::Materials::ClearCoat::Parameters::
                                ClearCoatRoughness,&local_58);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_48,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar4,pFVar3);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48 != (UInterchangeBaseNode *)0x0) {
      pFVar3 = UInterchangeBaseNode::GetUniqueID(local_48,&local_58);
      UInterchangeMaterialFactoryNode::ConnectOutputToClearCoatRoughness(param_2,pFVar3,&local_40);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = true;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    pFVar6->InputTypeBeingProcessed = EVar1;
  }
  pFVar6 = &this->MaterialCreationContext;
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::ClearCoat::Parameters::ClearCoatNormal);
  if (bVar2) {
    EVar1 = pFVar6->InputTypeBeingProcessed;
    pFVar6->InputTypeBeingProcessed = Vector;
    pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_68);
    pFVar4 = ::FName::ToString(&UE::Interchange::Materials::ClearCoat::Parameters::ClearCoatNormal,
                               &local_58);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_48,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar4,pFVar3);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48 != (UInterchangeBaseNode *)0x0) {
      pFVar3 = UInterchangeBaseNode::GetUniqueID(local_48,&local_58);
      UInterchangeMaterialFactoryNode::ConnectOutputToClearCoatNormal(param_2,pFVar3,&local_40);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = true;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    pFVar6->InputTypeBeingProcessed = EVar1;
  }
  else if (bVar5 == false) {
    return false;
  }
  local_res20[0].Value = '\x04';
  UInterchangeMaterialFactoryNode::SetCustomShadingModel(param_2,local_res20,true);
  return bVar5;
}

// HandleCommonParameters @ 14e7bbd90

void __thiscall
UInterchangeGenericMaterialPipeline::HandleCommonParameters
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  FMaterialCreationContext *pFVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  FString *pFVar6;
  UClass *pUVar7;
  UInterchangeMaterialExpressionFactoryNode *this_00;
  UInterchangeMaterialExpressionFactoryNode *this_01;
  FName *pFVar8;
  EMaterialInputType EVar9;
  bool local_res8 [8];
  float local_res20 [2];
  TEnumAsByte<ERefractionMode> local_d8 [8];
  FString local_d0;
  FString local_c0;
  UInterchangeBaseNode *local_b0;
  FString local_a8;
  float local_98;
  FName local_94;
  undefined1 local_88 [8];
  FString local_80;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar3 = UInterchangeShaderGraphNode::GetCustomScreenSpaceReflections(param_1,(bool *)local_res20);
  if (bVar3) {
    UInterchangeMaterialFactoryNode::SetCustomScreenSpaceReflections(param_2,(bool *)local_res20);
  }
  local_res8[0] = false;
  UInterchangeShaderGraphNode::GetCustomTwoSidedTransmission(param_1,local_res8);
  if (local_res8[0] == false) {
    bVar3 = UInterchangeShaderPortsAPI::HasInput
                      ((UInterchangeBaseNode *)param_1,
                       &UE::Interchange::Materials::ThinTranslucent::Parameters::TransmissionColor);
    bVar4 = UInterchangeShaderPortsAPI::HasInput
                      ((UInterchangeBaseNode *)param_1,
                       &UE::Interchange::Materials::ThinTranslucent::Parameters::SurfaceCoverage);
    if ((!bVar3) && (!bVar4)) goto LAB_14e7bbe1c;
  }
  else {
LAB_14e7bbe1c:
    local_res20[0] = (float)((uint)local_res20[0] & 0xffffff00);
    UInterchangeShaderGraphNode::GetCustomTwoSided(param_1,(bool *)local_res20);
    UInterchangeMaterialFactoryNode::SetCustomTwoSided(param_2,(bool *)local_res20,true);
  }
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Common::Parameters::Anisotropy);
  if (bVar3) {
    EVar9 = (this->MaterialCreationContext).InputTypeBeingProcessed;
    (this->MaterialCreationContext).InputTypeBeingProcessed = Scalar;
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_c0);
    pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::Anisotropy,&local_d0
                              );
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_b0,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar6,pFVar5);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_b0 != (UInterchangeBaseNode *)0x0) {
      pFVar5 = UInterchangeBaseNode::GetUniqueID(local_b0,&local_d0);
      UInterchangeMaterialFactoryNode::ConnectOutputToAnisotropy(param_2,pFVar5,&local_a8);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    (this->MaterialCreationContext).InputTypeBeingProcessed = EVar9;
  }
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Common::Parameters::EmissiveColor);
  if (bVar3) {
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_c0);
    pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::EmissiveColor,
                               &local_d0);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_b0,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar6,pFVar5);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_b0 != (UInterchangeBaseNode *)0x0) {
      pFVar5 = UInterchangeBaseNode::GetUniqueID(local_b0,&local_d0);
      UInterchangeMaterialFactoryNode::ConnectOutputToEmissiveColor(param_2,pFVar5,&local_a8);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Common::Parameters::Normal);
  if (bVar3) {
    EVar9 = (this->MaterialCreationContext).InputTypeBeingProcessed;
    (this->MaterialCreationContext).InputTypeBeingProcessed = Vector;
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_c0);
    pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::Normal,&local_d0);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_b0,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar6,pFVar5);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_b0 != (UInterchangeBaseNode *)0x0) {
      pFVar5 = UInterchangeBaseNode::GetUniqueID(local_b0,&local_d0);
      UInterchangeMaterialFactoryNode::ConnectOutputToNormal(param_2,pFVar5,&local_a8);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    (this->MaterialCreationContext).InputTypeBeingProcessed = EVar9;
  }
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Common::Parameters::Tangent);
  if (bVar3) {
    EVar9 = (this->MaterialCreationContext).InputTypeBeingProcessed;
    (this->MaterialCreationContext).InputTypeBeingProcessed = Vector;
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_c0);
    pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::Tangent,&local_d0);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_b0,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar6,pFVar5);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_b0 != (UInterchangeBaseNode *)0x0) {
      pFVar5 = UInterchangeBaseNode::GetUniqueID(local_b0,&local_d0);
      UInterchangeMaterialFactoryNode::ConnectOutputToTangent(param_2,pFVar5,&local_a8);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    (this->MaterialCreationContext).InputTypeBeingProcessed = EVar9;
  }
  EVar9 = (this->MaterialCreationContext).InputTypeBeingProcessed;
  local_res20[0] = (float)CONCAT31(local_res20[0]._1_3_,EVar9);
  (this->MaterialCreationContext).InputTypeBeingProcessed = Scalar;
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Common::Parameters::OpacityMask);
  if (bVar3) {
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_c0);
    pFVar8 = &UE::Interchange::Materials::Common::Parameters::OpacityMask;
  }
  else {
    bVar3 = UInterchangeShaderPortsAPI::HasInput
                      ((UInterchangeBaseNode *)param_1,
                       &UE::Interchange::Materials::Common::Parameters::Opacity);
    if (!bVar3) goto LAB_14e7bc2ac;
    pFVar5 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::Opacity,&local_c0);
    pFVar5 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_d0,pFVar5);
    bVar3 = UInterchangeBaseNode::GetFloatAttribute
                      ((UInterchangeBaseNode *)param_1,pFVar5,&local_98);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if ((bVar3) &&
       ((float)((uint)(local_98 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77)) goto LAB_14e7bc2ac;
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_c0);
    pFVar8 = &UE::Interchange::Materials::Common::Parameters::Opacity;
  }
  pFVar6 = ::FName::ToString(pFVar8,&local_d0);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_b0,
             (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,pFVar6
             ,pFVar5);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_b0 != (UInterchangeBaseNode *)0x0) {
    pFVar5 = UInterchangeBaseNode::GetUniqueID(local_b0,&local_d0);
    UInterchangeMaterialFactoryNode::ConnectOutputToOpacity(param_2,pFVar5,&local_a8);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  UE::Interchange::InterchangeGenericMaterialPipeline::Private::
  UpdateBlendModeBasedOnOpacityAttributes(param_1,param_2);
LAB_14e7bc2ac:
  pFVar1 = &this->MaterialCreationContext;
  pFVar1->InputTypeBeingProcessed = EVar9;
  pFVar1->InputTypeBeingProcessed = Scalar;
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Common::Parameters::Occlusion);
  if (bVar3) {
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_c0);
    pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::Occlusion,&local_d0)
    ;
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_b0,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar6,pFVar5);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_b0 != (UInterchangeBaseNode *)0x0) {
      pFVar5 = UInterchangeBaseNode::GetUniqueID(local_b0,&local_d0);
      UInterchangeMaterialFactoryNode::ConnectOutputToOcclusion(param_2,pFVar5,&local_a8);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar1->InputTypeBeingProcessed = EVar9;
  (this->MaterialCreationContext).InputTypeBeingProcessed = Scalar;
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Common::Parameters::Refraction);
  if (bVar3) {
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_c0);
    pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::Refraction,&local_d0
                              );
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)local_88,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar6,pFVar5);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_88 != (undefined1  [8])0x0) {
      local_d8[0].Value = '\0';
      UInterchangeMaterialFactoryNode::SetCustomRefractionMethod(param_2,local_d8,true);
      pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_88,&local_d0);
      UInterchangeMaterialFactoryNode::ConnectOutputToRefraction(param_2,pFVar5,&local_80);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  (this->MaterialCreationContext).InputTypeBeingProcessed = EVar9;
  (this->MaterialCreationContext).InputTypeBeingProcessed = Scalar;
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Common::Parameters::IndexOfRefraction);
  if (bVar3) {
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_c0);
    pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::IndexOfRefraction,
                               &local_d0);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_b0,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar6,pFVar5);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_b0 != (UInterchangeBaseNode *)0x0) {
      local_d8[0].Value = '\0';
      UInterchangeMaterialFactoryNode::SetCustomRefractionMethod(param_2,local_d8,true);
      pUVar7 = Z_Construct_UClass_UMaterialExpressionLinearInterpolate_NoRegister();
      pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_48);
      ::FString::FString(&local_d0,L"IORLerp");
      this_00 = CreateExpressionNode(this,&local_d0,pFVar5,pUVar7);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_98 = 1.0;
      pFVar8 = ::FName::FName(&local_94,6,L"ConstA",FNAME_Add);
      local_70 = *pFVar8;
      pFVar5 = ::FName::ToString(&local_70,&local_c0);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)this_00,pFVar5,&local_98);
      if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      FVar2 = local_70;
      pUVar7 = Z_Construct_UClass_UMaterialExpressionLinearInterpolate_NoRegister();
      pFVar5 = ::FName::ToString(&local_70,&local_c0);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)this_00,pFVar5,pUVar7,FVar2);
      if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      pFVar5 = UInterchangeBaseNode::GetUniqueID(local_b0,&local_68);
      pFVar8 = ::FName::FName((FName *)&local_c0,1,L"B",FNAME_Add);
      local_94 = *pFVar8;
      pFVar6 = ::FName::ToString(&local_94,&local_58);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)this_00,pFVar6,pFVar5,&local_a8);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pUVar7 = Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister();
      pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_68);
      ::FString::FString(&local_c0,L"IORFresnel");
      this_01 = CreateExpressionNode(this,&local_c0,pFVar5,pUVar7);
      if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar5 = UInterchangeBaseNode::GetUniqueID
                         ((UInterchangeBaseNode *)this_01,(FString *)local_88);
      pFVar8 = ::FName::FName((FName *)&local_c0,5,L"Alpha",FNAME_Add);
      local_94 = *pFVar8;
      pFVar6 = ::FName::ToString(&local_94,&local_58);
      UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput
                ((UInterchangeBaseNode *)this_00,pFVar6,pFVar5);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_88 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_88);
      }
      pFVar5 = UInterchangeBaseNode::GetUniqueID
                         ((UInterchangeBaseNode *)this_00,(FString *)local_88);
      UInterchangeMaterialFactoryNode::ConnectToRefraction(param_2,pFVar5);
      if (local_88 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_88);
      }
      EVar9 = local_res20[0]._0_1_;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  (this->MaterialCreationContext).InputTypeBeingProcessed = EVar9;
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Common::Parameters::Displacement);
  if (bVar3) {
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_68);
    pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::Displacement,
                               (FString *)local_88);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_b0,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar6,pFVar5);
    if (local_88 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_88);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_b0 != (UInterchangeBaseNode *)0x0) {
      pFVar5 = UInterchangeBaseNode::GetUniqueID(local_b0,(FString *)local_88);
      UInterchangeMaterialFactoryNode::ConnectOutputToDisplacement(param_2,pFVar5,&local_a8);
      if (local_88 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_88);
      }
    }
    if (this->bOverrideDisplacement == false) {
      bVar3 = UInterchangeShaderGraphNode::GetCustomDisplacementCenterMode(param_1,local_res20);
      if (bVar3) {
        UInterchangeMaterialFactoryNode::SetCustomDisplacementCenter(param_2,local_res20[0]);
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleFlattenNormalNode @ 14e7bd0b0

void __thiscall
UInterchangeGenericMaterialPipeline::HandleFlattenNormalNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  FString *pFVar1;
  FString *pFVar2;
  FString local_68;
  FString local_58;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  
  if (param_3 != (UInterchangeMaterialExpressionFactoryNode *)0x0) {
    ::FString::FString(&local_58,
                       L"/Engine/Functions/Engine_MaterialFunctions01/Texturing/FlattenNormal.FlattenNormal"
                      );
    UE::Interchange::InterchangeGenericMaterialPipeline::Private::UpdateFunctionCallExpression
              (param_3,&local_58);
    pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_48);
    pFVar2 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::FlattenNormal::Inputs::
                                Normal,&local_68);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2
               ,param_1,pFVar2,pFVar1);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar1 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      ::FString::FString(&local_68,L"Normal");
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_3,&local_68,pFVar1,&local_30);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_68);
    pFVar2 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::FlattenNormal::Inputs::
                                Flatness,&local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2
               ,param_1,pFVar2,pFVar1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar1 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      ::FString::FString(&local_68,L"Flatness");
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_3,&local_68,pFVar1,&local_30);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleFloatInput @ 14e7bd2b0

UInterchangeMaterialExpressionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::HandleFloatInput
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          FString *param_2,FString *param_3,bool param_4)

{
  FName FVar1;
  bool bVar2;
  UClass *pUVar3;
  UInterchangeMaterialExpressionFactoryNode *this_00;
  FString *pFVar4;
  FName *pFVar5;
  FName local_38;
  FString local_30;
  
  if (param_4) {
    pUVar3 = Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister();
    this_00 = CreateExpressionNode(this,param_2,param_3,pUVar3);
    pFVar4 = UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_30,param_2);
    bVar2 = UInterchangeBaseNode::GetFloatAttribute
                      ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&param_4);
    if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pFVar5 = ::FName::FName((FName *)&local_30,0xc,L"DefaultValue",FNAME_Add);
      local_38 = *pFVar5;
      pFVar4 = ::FName::ToString(&local_38,&local_30);
      UInterchangeBaseNode::AddFloatAttribute
                ((UInterchangeBaseNode *)this_00,pFVar4,(float *)&param_4);
      if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      FVar1 = local_38;
      pUVar3 = Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister();
      pFVar4 = ::FName::ToString(&local_38,&local_30);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)this_00,pFVar4,pUVar3,FVar1);
      if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_30);
    pFVar4 = &local_30;
    if (local_30.Data.ArrayNum < 2) {
      pFVar4 = param_2;
    }
    UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this_00,pFVar4);
  }
  else {
    pUVar3 = Z_Construct_UClass_UMaterialExpressionConstant_NoRegister();
    this_00 = CreateExpressionNode(this,param_2,param_3,pUVar3);
    pFVar4 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_30,param_2);
    bVar2 = UInterchangeBaseNode::GetFloatAttribute
                      ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&param_4);
    if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (!bVar2) {
      return this_00;
    }
    pFVar5 = ::FName::FName((FName *)&local_30,1,L"R",FNAME_Add);
    local_38 = *pFVar5;
    pFVar4 = ::FName::ToString(&local_38,&local_30);
    UInterchangeBaseNode::AddFloatAttribute
              ((UInterchangeBaseNode *)this_00,pFVar4,(float *)&param_4);
    if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    FVar1 = local_38;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionConstant_NoRegister();
    pFVar4 = ::FName::ToString(&local_38,&local_30);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)this_00,pFVar4,pUVar3,FVar1);
  }
  if ((FName)local_30.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return this_00;
}

// HandleLambertModel @ 14e7bd4d0

bool __thiscall
UInterchangeGenericMaterialPipeline::HandleLambertModel
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString local_48;
  FString local_38;
  UInterchangeBaseNode *local_28;
  FString local_20;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Lambert::Parameters::DiffuseColor);
  if (bVar1) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_38);
    pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Lambert::Parameters::DiffuseColor,
                               &local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_28,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar3,pFVar2);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28 != (UInterchangeBaseNode *)0x0) {
      pFVar2 = UInterchangeBaseNode::GetUniqueID(local_28,&local_38);
      UInterchangeMaterialFactoryNode::ConnectOutputToBaseColor(param_2,pFVar2,&local_20);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// HandleLerpNode @ 14e7bd5e0

void __thiscall
UInterchangeGenericMaterialPipeline::HandleLerpNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  UClass *pUVar1;
  FString *pFVar2;
  FString *pFVar3;
  FName *pFVar4;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  
  pUVar1 = Z_Construct_UClass_UMaterialExpressionLinearInterpolate_NoRegister();
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar1->_padding_;
  ::FName::ToString((FName *)&local_78,&local_68);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_68);
  if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_78);
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Lerp::Inputs::A,&local_68
                            );
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2,
             param_1,pFVar3,pFVar2);
  if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((FName)local_78.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_38 != (UInterchangeBaseNode *)0x0) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
    pFVar4 = ::FName::FName((FName *)&local_68,1,L"A",FNAME_Add);
    local_78.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar4;
    pFVar3 = ::FName::ToString((FName *)&local_78,&local_58);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar3,pFVar2,&local_30);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_58);
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Lerp::Inputs::B,&local_48
                            );
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2,
             param_1,pFVar3,pFVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38 != (UInterchangeBaseNode *)0x0) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID(local_38,&local_58);
    pFVar4 = ::FName::FName((FName *)&local_68,1,L"B",FNAME_Add);
    local_78.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar4;
    pFVar3 = ::FName::ToString((FName *)&local_78,&local_48);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar3,pFVar2,&local_30);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_58);
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Lerp::Inputs::Factor,
                             &local_48);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2,
             param_1,pFVar3,pFVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38 != (UInterchangeBaseNode *)0x0) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID(local_38,&local_58);
    pFVar4 = ::FName::FName((FName *)&local_68,5,L"Alpha",FNAME_Add);
    local_78.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar4;
    pFVar3 = ::FName::ToString((FName *)&local_78,&local_48);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar3,pFVar2,&local_30);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleLinearColorInput @ 14e7bd8f0

UInterchangeMaterialExpressionFactoryNode * __thiscall
UInterchangeGenericMaterialPipeline::HandleLinearColorInput
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          FString *param_2,FString *param_3,bool param_4)

{
  FName FVar1;
  bool bVar2;
  UClass *pUVar3;
  UInterchangeMaterialExpressionFactoryNode *this_00;
  FString *pFVar4;
  FName *pFVar5;
  FName local_58;
  FString local_50;
  FLinearColor_u_0 local_40;
  FLinearColor local_30;
  
  if (param_4) {
    pUVar3 = Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister();
    this_00 = CreateExpressionNode(this,param_2,param_3,pUVar3);
    pFVar4 = UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_50,param_2);
    bVar2 = UInterchangeBaseNode::GetLinearColorAttribute
                      ((UInterchangeBaseNode *)param_1,pFVar4,(FLinearColor *)&local_40._s_0);
    if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pFVar5 = ::FName::FName((FName *)&local_50,0xc,L"DefaultValue",FNAME_Add);
      local_58 = *pFVar5;
      pFVar4 = ::FName::ToString(&local_58,&local_50);
      UInterchangeBaseNode::AddLinearColorAttribute
                ((UInterchangeBaseNode *)this_00,pFVar4,(FLinearColor *)&local_40._s_0);
      if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      FVar1 = local_58;
      pUVar3 = Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister();
      pFVar4 = ::FName::ToString(&local_58,&local_50);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FLinearColor>
                ((UInterchangeFactoryBaseNode *)this_00,pFVar4,pUVar3,FVar1);
      if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_50);
    pFVar4 = &local_50;
    if (local_50.Data.ArrayNum < 2) {
      pFVar4 = param_2;
    }
    UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this_00,pFVar4);
  }
  else {
    pUVar3 = Z_Construct_UClass_UMaterialExpressionConstant3Vector_NoRegister();
    this_00 = CreateExpressionNode(this,param_2,param_3,pUVar3);
    pFVar4 = UInterchangeShaderPortsAPI::MakeInputValueKey((FString *)&local_40._s_0,param_2);
    bVar2 = UInterchangeBaseNode::GetLinearColorAttribute
                      ((UInterchangeBaseNode *)param_1,pFVar4,&local_30);
    if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_40._0_8_);
    }
    if (!bVar2) {
      return this_00;
    }
    pFVar5 = ::FName::FName((FName *)&local_50,8,L"Constant",FNAME_Add);
    local_58 = *pFVar5;
    pFVar4 = ::FName::ToString(&local_58,(FString *)&local_40._s_0);
    UInterchangeBaseNode::AddLinearColorAttribute((UInterchangeBaseNode *)this_00,pFVar4,&local_30);
    if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_40._0_8_);
    }
    FVar1 = local_58;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionConstant3Vector_NoRegister();
    pFVar4 = ::FName::ToString(&local_58,(FString *)&local_40._s_0);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FLinearColor>
              ((UInterchangeFactoryBaseNode *)this_00,pFVar4,pUVar3,FVar1);
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_40._0_8_;
  }
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return this_00;
}

// HandleMakeFloat3Node @ 14e7bdb10

void __thiscall
UInterchangeGenericMaterialPipeline::HandleMakeFloat3Node
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  FString *pFVar1;
  FString *pFVar2;
  FString local_98;
  FString local_88;
  FString local_78;
  UInterchangeBaseNode *local_68;
  FString local_60;
  UInterchangeBaseNode *local_50;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  
  if (param_3 != (UInterchangeMaterialExpressionFactoryNode *)0x0) {
    ::FString::FString(&local_78,
                       L"/Engine/Functions/Engine_MaterialFunctions02/Utility/MakeFloat3.MakeFloat3"
                      );
    UE::Interchange::InterchangeGenericMaterialPipeline::Private::UpdateFunctionCallExpression
              (param_3,&local_78);
    pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_88);
    pFVar2 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::MakeFloat3::Inputs::X,
                               &local_98);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2
               ,param_1,pFVar2,pFVar1);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar1 = UInterchangeBaseNode::GetUniqueID(local_38,&local_88);
      ::FString::FString(&local_98,L"X");
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_3,&local_98,pFVar1,&local_30);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_98);
    pFVar2 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::MakeFloat3::Inputs::Y,
                               &local_88);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_50,param_2
               ,param_1,pFVar2,pFVar1);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_50 != (UInterchangeBaseNode *)0x0) {
      pFVar1 = UInterchangeBaseNode::GetUniqueID(local_50,&local_88);
      ::FString::FString(&local_98,L"Y");
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_3,&local_98,pFVar1,&local_48);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_98);
    pFVar2 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::MakeFloat3::Inputs::Z,
                               &local_88);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_68,param_2
               ,param_1,pFVar2,pFVar1);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68 != (UInterchangeBaseNode *)0x0) {
      pFVar1 = UInterchangeBaseNode::GetUniqueID(local_68,&local_88);
      ::FString::FString(&local_98,L"Z");
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_3,&local_98,pFVar1,&local_60);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleMaskNode @ 14e7bddc0

void __thiscall
UInterchangeGenericMaterialPipeline::HandleMaskNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  ForAnyElementType FVar1;
  UClass *pUVar2;
  FString *pFVar3;
  FName *pFVar4;
  FString *pFVar5;
  bool local_78;
  bool local_77;
  bool local_76;
  bool local_75 [5];
  FString local_70;
  FString local_60;
  UInterchangeBaseNode *local_50;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pUVar2 = Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister();
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar2->_padding_;
  ::FName::ToString((FName *)&local_60,&local_70);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_70);
  if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  local_78 = false;
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Mask::Attributes::R,
                             &local_70);
  UInterchangeBaseNode::GetBooleanAttribute((UInterchangeBaseNode *)param_1,pFVar3,&local_78);
  if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  local_77 = false;
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Mask::Attributes::G,
                             &local_70);
  UInterchangeBaseNode::GetBooleanAttribute((UInterchangeBaseNode *)param_1,pFVar3,&local_77);
  if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  local_76 = false;
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Mask::Attributes::B,
                             &local_70);
  UInterchangeBaseNode::GetBooleanAttribute((UInterchangeBaseNode *)param_1,pFVar3,&local_76);
  if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  local_75[0] = false;
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Mask::Attributes::A,
                             &local_70);
  UInterchangeBaseNode::GetBooleanAttribute((UInterchangeBaseNode *)param_1,pFVar3,local_75);
  if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((((local_78 != false) || (local_77 != false)) || (local_76 != false)) ||
     (local_75[0] != false)) {
    pFVar4 = ::FName::FName((FName *)&local_70,1,L"R",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar4;
    pFVar3 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)param_3,pFVar3,&local_78);
    if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar2 = Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister();
    pFVar3 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar3,pUVar2,(FName)FVar1.Data);
    if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    pFVar4 = ::FName::FName((FName *)&local_70,1,L"G",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar4;
    pFVar3 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)param_3,pFVar3,&local_77);
    if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar2 = Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister();
    pFVar3 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar3,pUVar2,(FName)FVar1.Data);
    if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    pFVar4 = ::FName::FName((FName *)&local_70,1,L"B",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar4;
    pFVar3 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)param_3,pFVar3,&local_76);
    if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar2 = Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister();
    pFVar3 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar3,pUVar2,(FName)FVar1.Data);
    if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    pFVar4 = ::FName::FName((FName *)&local_70,1,L"A",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar4;
    pFVar3 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)param_3,pFVar3,local_75);
    if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar2 = Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister();
    pFVar3 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar3,pUVar2,(FName)FVar1.Data);
    if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_60);
  pFVar5 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Mask::Inputs::Input,
                             &local_70);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_50,param_2,
             param_1,pFVar5,pFVar3);
  if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((FName)local_60.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_50 != (UInterchangeBaseNode *)0x0) {
    pFVar3 = UInterchangeBaseNode::GetUniqueID(local_50,&local_28);
    pFVar4 = ::FName::FName((FName *)&local_70,5,L"Input",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar4;
    pFVar5 = ::FName::ToString((FName *)&local_60,&local_38);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar5,pFVar3,&local_48);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleMetalRoughnessModel @ 14e7be230

bool __thiscall
UInterchangeGenericMaterialPipeline::HandleMetalRoughnessModel
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  EMaterialInputType EVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_58;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  
  bVar3 = false;
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::PBRMR::Parameters::BaseColor);
  if (bVar2) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_48);
    pFVar5 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::BaseColor,&local_58);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar5,pFVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar4 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeMaterialFactoryNode::ConnectOutputToBaseColor(param_2,pFVar4,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = true;
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::PBRMR::Parameters::Metallic);
  if (bVar2) {
    EVar1 = (this->MaterialCreationContext).InputTypeBeingProcessed;
    (this->MaterialCreationContext).InputTypeBeingProcessed = Scalar;
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_58);
    pFVar5 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::Metallic,&local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar5,pFVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar4 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeMaterialFactoryNode::ConnectOutputToMetallic(param_2,pFVar4,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = true;
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    (this->MaterialCreationContext).InputTypeBeingProcessed = EVar1;
  }
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::PBRMR::Parameters::Specular);
  if (bVar2) {
    EVar1 = (this->MaterialCreationContext).InputTypeBeingProcessed;
    (this->MaterialCreationContext).InputTypeBeingProcessed = Scalar;
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_58);
    pFVar5 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::Specular,&local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar5,pFVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar4 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeMaterialFactoryNode::ConnectOutputToSpecular(param_2,pFVar4,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = true;
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    (this->MaterialCreationContext).InputTypeBeingProcessed = EVar1;
  }
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::PBRMR::Parameters::Roughness);
  if (bVar2) {
    EVar1 = (this->MaterialCreationContext).InputTypeBeingProcessed;
    (this->MaterialCreationContext).InputTypeBeingProcessed = Scalar;
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_58);
    pFVar5 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::Roughness,&local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar5,pFVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar4 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeMaterialFactoryNode::ConnectOutputToRoughness(param_2,pFVar4,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    (this->MaterialCreationContext).InputTypeBeingProcessed = EVar1;
    bVar3 = true;
  }
  return bVar3;
}

// HandleNoiseNode @ 14e7be580

void __thiscall
UInterchangeGenericMaterialPipeline::HandleNoiseNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  ForAnyElementType FVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FName *pFVar6;
  FString local_78;
  bool local_68 [8];
  FString local_60;
  FName local_50;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  
  pUVar3 = Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar3->_padding_;
  ::FName::ToString((FName *)&local_60,&local_48);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_48);
  if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_60);
  pFVar5 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Inputs::Position,
                             &local_48);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2,
             param_1,pFVar5,pFVar4);
  if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((FName)local_60.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_38 != (UInterchangeBaseNode *)0x0) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_38,&local_78);
    pFVar6 = ::FName::FName(&local_50,8,L"Position",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar5 = ::FName::ToString((FName *)&local_60,&local_48);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar5,pFVar4,&local_30);
    if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_48);
  pFVar5 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Inputs::
                              FilterWidth,&local_78);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2,
             param_1,pFVar5,pFVar4);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38 != (UInterchangeBaseNode *)0x0) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
    pFVar6 = ::FName::FName(&local_50,0xb,L"FilterWidth",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar5 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar5,pFVar4,&local_30);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::Scale,
                             &local_78);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&local_50);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,5,L"Scale",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeBaseNode::AddFloatAttribute
              ((UInterchangeBaseNode *)param_3,pFVar4,(float *)&local_50);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
                              Quality,&local_78);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_50);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,7,L"Quality",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar4,(int *)&local_50)
    ;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
                              Function,&local_78);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_50);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,0xd,L"NoiseFunction",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar4,(int *)&local_50)
    ;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
                              Turbulence,&local_78);
  bVar2 = UInterchangeBaseNode::GetBooleanAttribute((UInterchangeBaseNode *)param_1,pFVar4,local_68)
  ;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,0xb,L"bTurbulence",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)param_3,pFVar4,local_68);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::Levels
                             ,&local_78);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_50);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,6,L"Levels",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar4,(int *)&local_50)
    ;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
                              OutputMin,&local_78);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&local_50);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,9,L"OutputMin",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeBaseNode::AddFloatAttribute
              ((UInterchangeBaseNode *)param_3,pFVar4,(float *)&local_50);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
                              OutputMax,&local_78);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&local_50);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,9,L"OutputMax",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeBaseNode::AddFloatAttribute
              ((UInterchangeBaseNode *)param_3,pFVar4,(float *)&local_50);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
                              LevelScale,&local_78);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&local_50);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,10,L"LevelScale",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeBaseNode::AddFloatAttribute
              ((UInterchangeBaseNode *)param_3,pFVar4,(float *)&local_50);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::Tiling
                             ,&local_78);
  bVar2 = UInterchangeBaseNode::GetBooleanAttribute((UInterchangeBaseNode *)param_1,pFVar4,local_68)
  ;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,7,L"bTiling",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)param_3,pFVar4,local_68);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
                              RepeatSize,&local_78);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_50);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,10,L"RepeatSize",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar4,(int *)&local_50)
    ;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_78);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleNormalFromHeightMapNode @ 14e7bef10

void __thiscall
UInterchangeGenericMaterialPipeline::HandleNormalFromHeightMapNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  FString *pFVar1;
  FString local_68;
  FString local_58;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  
  if (param_3 != (UInterchangeMaterialExpressionFactoryNode *)0x0) {
    ::FString::FString(&local_58,
                       L"/Engine/Functions/Engine_MaterialFunctions03/Procedurals/NormalFromHeightmap.NormalFromHeightmap"
                      );
    UE::Interchange::InterchangeGenericMaterialPipeline::Private::UpdateFunctionCallExpression
              (param_3,&local_58);
    ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap::Inputs::
                       HeightMap,&local_68);
    pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2
               ,param_1,&local_68,pFVar1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar1 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_3,&local_68,pFVar1,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap::Inputs::
                       Intensity,&local_68);
    pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2
               ,param_1,&local_68,pFVar1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar1 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_3,&local_68,pFVar1,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap::Inputs::
                       Offset,&local_68);
    pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2
               ,param_1,&local_68,pFVar1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar1 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_3,&local_68,pFVar1,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap::Inputs::
                       Coordinates,&local_68);
    pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2
               ,param_1,&local_68,pFVar1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar1 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_3,&local_68,pFVar1,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap::Inputs::
                       Channel,&local_68);
    pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2
               ,param_1,&local_68,pFVar1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar1 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_3,&local_68,pFVar1,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandlePhongModel @ 14e7bf290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeGenericMaterialPipeline::HandlePhongModel
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  FString *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_108 [32];
  UInterchangeMaterialFactoryNode *local_e8;
  FString local_e0;
  UInterchangeMaterialExpressionFactoryNode *local_d0;
  FString local_c8;
  FString local_b8;
  UInterchangeShaderGraphNode *local_a8;
  FString local_a0;
  code *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8 = param_2;
  local_a8 = param_1;
  bVar5 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Lambert::Parameters::DiffuseColor);
  bVar6 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Phong::Parameters::SpecularColor);
  if ((bVar5) && (bVar6)) {
    ::FString::FString(&local_a0,
                       L"MaterialFunction\'/InterchangeAssets/Functions/MF_PhongToMetalRoughness.MF_PhongToMetalRoughness\'"
                      );
    ::FString::FString(&local_e0,L"DiffSpecFunc");
    local_d0 = UE::Interchange::InterchangeGenericMaterialPipeline::Private::
               CreateExpressionWithMaterialFunction
                         ((this->BaseNodeContainer).field0_0x0.DebugPtr,local_e8,&local_e0,&local_a0
                         );
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_d0,&local_b8);
    pFVar7 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::BaseColor,&local_e0);
    UInterchangeMaterialFactoryNode::ConnectOutputToBaseColor(local_e8,&local_b8,pFVar7);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    pFVar7 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::Metallic,&local_e0);
    UInterchangeMaterialFactoryNode::ConnectOutputToMetallic(local_e8,&local_b8,pFVar7);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    pFVar7 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::Specular,&local_e0);
    UInterchangeMaterialFactoryNode::ConnectOutputToSpecular(local_e8,&local_b8,pFVar7);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    pFVar7 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::Roughness,&local_e0);
    UInterchangeMaterialFactoryNode::ConnectOutputToRoughness(local_e8,&local_b8,pFVar7);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_d0,&local_e0);
    local_88 = (code *)0x0;
    plStack_60 = (longlong *)0x0;
    local_58 = (code *)0x0;
    plVar8 = FMemory::Malloc(0x30,8);
    plStack_30 = plStack_60;
    uVar4 = uStack_6c;
    uVar3 = uStack_70;
    uVar2 = uStack_74;
    uVar1 = local_78;
    uVar10 = uStack_80;
    *plVar8 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::HandlePhongModel'::`6'::<lambda_1>,0,1>
               ::_vftable_;
    plVar8[1] = (longlong)this;
    plVar8[2] = (longlong)&local_e8;
    plVar8[3] = (longlong)&local_a8;
    plVar8[4] = (longlong)&local_e0;
    plVar8[5] = (longlong)&local_d0;
    pcVar9 = local_58;
    if (plVar8 + 1 != (longlong *)0x0) {
      pcVar9 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGenericMaterialPipeline::HandlePhongModel'::__l6::<lambda_1>,void,FString_const_&>
               ::Call;
    }
    uStack_80 = uStack_50;
    local_68 = local_38;
    uStack_64 = uStack_34;
    plStack_60 = plVar8;
    local_78 = local_48;
    uStack_74 = uStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    local_58 = local_88;
    uStack_50 = uVar10;
    local_48 = uVar1;
    uStack_44 = uVar2;
    uStack_40 = uVar3;
    uStack_3c = uVar4;
    bVar5 = local_88 != (code *)0x0;
    local_88 = pcVar9;
    if (bVar5) {
      plVar8 = (longlong *)&local_48;
      if (plStack_30 != (longlong *)0x0) {
        plVar8 = plStack_30;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    pFVar7 = ::FName::ToString(&UE::Interchange::Materials::Phong::Parameters::AmbientColor,
                               &local_c8);
    UE::Core::Private::Function::CheckCallable(local_88);
    pcVar9 = local_88;
    plVar8 = (longlong *)&local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar8 = plStack_60;
    }
    uVar10 = (**(code **)(*plVar8 + 8))(plVar8);
    (*pcVar9)(uVar10,pFVar7);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    pFVar7 = ::FName::ToString(&UE::Interchange::Materials::Lambert::Parameters::DiffuseColor,
                               &local_c8);
    UE::Core::Private::Function::CheckCallable(local_88);
    pcVar9 = local_88;
    plVar8 = (longlong *)&local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar8 = plStack_60;
    }
    uVar10 = (**(code **)(*plVar8 + 8))();
    (*pcVar9)(uVar10,pFVar7);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    pFVar7 = ::FName::ToString(&UE::Interchange::Materials::Phong::Parameters::Shininess,&local_c8);
    UE::Core::Private::Function::CheckCallable(local_88);
    pcVar9 = local_88;
    plVar8 = (longlong *)&local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar8 = plStack_60;
    }
    uVar10 = (**(code **)(*plVar8 + 8))();
    (*pcVar9)(uVar10,pFVar7);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    pFVar7 = ::FName::ToString(&UE::Interchange::Materials::Phong::Parameters::SpecularColor,
                               &local_c8);
    UE::Core::Private::Function::CheckCallable(local_88);
    pcVar9 = local_88;
    plVar8 = (longlong *)&local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar8 = plStack_60;
    }
    uVar10 = (**(code **)(*plVar8 + 8))();
    (*pcVar9)(uVar10,pFVar7);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_88 != (code *)0x0) {
      plVar8 = (longlong *)&local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar8 = plStack_60;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// HandleRotateAboutAxisNode @ 14e7bf690

void __thiscall
UInterchangeGenericMaterialPipeline::HandleRotateAboutAxisNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  ForAnyElementType FVar1;
  UClass *pUVar2;
  FString *pFVar3;
  FString *pFVar4;
  FName *pFVar5;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  UInterchangeBaseNode *local_30;
  FString local_28;
  
  pUVar2 = Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_NoRegister();
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar2->_padding_;
  ::FName::ToString((FName *)&local_60,&local_50);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_50);
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_60);
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::Inputs::
                              NormalizedRotationAxis,&local_50);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_30,param_2,
             param_1,pFVar4,pFVar3);
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((FName)local_60.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_30 != (UInterchangeBaseNode *)0x0) {
    pFVar3 = UInterchangeBaseNode::GetUniqueID(local_30,&local_40);
    pFVar5 = ::FName::FName(&local_68,0x16,L"NormalizedRotationAxis",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar5;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_50);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar4,pFVar3,&local_28);
    if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_50);
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::Inputs::
                              PivotPoint,&local_40);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_30,param_2,
             param_1,pFVar4,pFVar3);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_30 != (UInterchangeBaseNode *)0x0) {
    pFVar3 = UInterchangeBaseNode::GetUniqueID(local_30,&local_50);
    pFVar5 = ::FName::FName(&local_68,10,L"PivotPoint",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar5;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar4,pFVar3,&local_28);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_50);
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::Inputs::
                              Position,&local_40);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_30,param_2,
             param_1,pFVar4,pFVar3);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_30 != (UInterchangeBaseNode *)0x0) {
    pFVar3 = UInterchangeBaseNode::GetUniqueID(local_30,&local_50);
    pFVar5 = ::FName::FName(&local_68,8,L"Position",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar5;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar4,pFVar3,&local_28);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_50);
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::Inputs::
                              RotationAngle,&local_40);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_30,param_2,
             param_1,pFVar4,pFVar3);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_30 != (UInterchangeBaseNode *)0x0) {
    pFVar3 = UInterchangeBaseNode::GetUniqueID(local_30,&local_50);
    pFVar5 = ::FName::FName(&local_68,0xd,L"RotationAngle",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar5;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar4,pFVar3,&local_28);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_68.ComparisonIndex.Value = 0x40c90fdb;
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::
                              Attributes::Period,&local_40);
  UInterchangeBaseNode::GetFloatAttribute((UInterchangeBaseNode *)param_1,pFVar3,(float *)&local_68)
  ;
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FName::FName((FName *)&local_50,6,L"Period",FNAME_Add);
  local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar5;
  pFVar3 = ::FName::ToString((FName *)&local_60,&local_40);
  UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)param_3,pFVar3,(float *)&local_68)
  ;
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  FVar1.Data = local_60.Data.AllocatorInstance.Data;
  pUVar2 = Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_NoRegister();
  pFVar3 = ::FName::ToString((FName *)&local_60,&local_40);
  UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
            ((UInterchangeFactoryBaseNode *)param_3,pFVar3,pUVar2,(FName)FVar1.Data);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleRotatorNode @ 14e7bfb30

void __thiscall
UInterchangeGenericMaterialPipeline::HandleRotatorNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  ForAnyElementType FVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FName *pFVar6;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  UInterchangeBaseNode *local_30;
  FString local_28;
  
  pUVar3 = Z_Construct_UClass_UMaterialExpressionRotator_NoRegister();
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar3->_padding_;
  ::FName::ToString((FName *)&local_60,&local_50);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_50);
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_60);
  pFVar5 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Rotator::Inputs::
                              Coordinate,&local_50);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_30,param_2,
             param_1,pFVar5,pFVar4);
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((FName)local_60.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_30 != (UInterchangeBaseNode *)0x0) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_30,&local_40);
    pFVar6 = ::FName::FName(&local_68,10,L"Coordinate",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar5 = ::FName::ToString((FName *)&local_60,&local_50);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar5,pFVar4,&local_28);
    if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_50);
  pFVar5 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Rotator::Inputs::Time,
                             &local_40);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_30,param_2,
             param_1,pFVar5,pFVar4);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_30 != (UInterchangeBaseNode *)0x0) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_30,&local_50);
    pFVar6 = ::FName::FName(&local_68,4,L"Time",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar5 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar5,pFVar4,&local_28);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Rotator::Attributes::
                              CenterX,&local_40);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&local_68);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_50,7,L"CenterX",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeBaseNode::AddFloatAttribute
              ((UInterchangeBaseNode *)param_3,pFVar4,(float *)&local_68);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionRotator_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Rotator::Attributes::
                              CenterY,&local_40);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&local_68);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_50,7,L"CenterY",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeBaseNode::AddFloatAttribute
              ((UInterchangeBaseNode *)param_3,pFVar4,(float *)&local_68);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionRotator_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Rotator::Attributes::
                              Speed,&local_40);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&local_68);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_50,5,L"Speed",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeBaseNode::AddFloatAttribute
              ((UInterchangeBaseNode *)param_3,pFVar4,(float *)&local_68);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionRotator_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleScalarParameterNode @ 14e7bffa0

void __thiscall
UInterchangeGenericMaterialPipeline::HandleScalarParameterNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeMaterialExpressionFactoryNode *param_2)

{
  FName FVar1;
  bool bVar2;
  FString *pFVar3;
  UClass *pUVar4;
  FName *pFVar5;
  float local_res20 [2];
  FName local_38;
  FName local_30;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::ScalarParameter::
                              Attributes::DefaultValue,&local_28);
  UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_18,pFVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,&local_18,local_res20);
  if (bVar2) {
    pUVar4 = Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister();
    local_30 = (FName)pUVar4->_padding_;
    ::FName::ToString(&local_30,&local_28);
    UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_2,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar5 = ::FName::FName(&local_30,0xc,L"DefaultValue",FNAME_Add);
    local_38 = *pFVar5;
    pFVar3 = ::FName::ToString(&local_38,&local_28);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)param_2,pFVar3,local_res20);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    FVar1 = local_38;
    pUVar4 = Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister();
    pFVar3 = ::FName::ToString(&local_38,&local_28);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)param_2,pFVar3,pUVar4,FVar1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_28);
  UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)param_2,pFVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleSheen @ 14e7c0130

bool __thiscall
UInterchangeGenericMaterialPipeline::HandleSheen
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  bool bVar4;
  TEnumAsByte<EMaterialShadingModel> local_res20 [8];
  FString local_48;
  FString local_38;
  UInterchangeBaseNode *local_28;
  FString local_20;
  
  bVar4 = false;
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Sheen::Parameters::SheenColor);
  if (bVar1) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_38);
    pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Sheen::Parameters::SheenColor,&local_48)
    ;
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_28,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar3,pFVar2);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28 != (UInterchangeBaseNode *)0x0) {
      pFVar2 = UInterchangeBaseNode::GetUniqueID(local_28,&local_38);
      UInterchangeMaterialFactoryNode::ConnectOutputToFuzzColor(param_2,pFVar2,&local_20);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = true;
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Sheen::Parameters::SheenRoughness);
  if (bVar1) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_48);
    pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Sheen::Parameters::SheenRoughness,
                               &local_38);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_28,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar3,pFVar2);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_28 != (UInterchangeBaseNode *)0x0) {
      pFVar2 = UInterchangeBaseNode::GetUniqueID(local_28,&local_38);
      UInterchangeMaterialFactoryNode::ConnectOutputToCloth(param_2,pFVar2,&local_20);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = true;
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  else if (bVar4 == false) {
    return false;
  }
  local_res20[0].Value = '\b';
  UInterchangeMaterialFactoryNode::SetCustomShadingModel(param_2,local_res20,true);
  return bVar4;
}

// HandleSlabBSDFNode @ 14e7c0300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeGenericMaterialPipeline::HandleSlabBSDFNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  ForElementType<FSetElementId> FVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  UClass *pUVar5;
  ulonglong uVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_340;
  initializer_list<FString> local_328;
  FString local_318;
  UInterchangeBaseNode *local_308;
  FString local_300;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
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
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pUVar5 = Z_Construct_UClass_UMaterialExpressionSubstrateSlabBSDF_NoRegister();
  local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar5->_padding_;
  ::FName::ToString((FName *)&local_318,(FString *)&local_328);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName
            (param_3,(FString *)&local_328);
  if (local_328._First != (FString *)0x0) {
    FMemory::Free(local_328._First);
  }
  ::FString::FString(&local_2e8,L"Anisotropy");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::Anisotropy,
                    &local_2d8);
  ::FString::FString(&local_2c8,L"DiffuseAlbedo");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::DiffuseAlbedo,
                    &local_2b8);
  ::FString::FString(&local_2a8,L"EmissiveColor");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::EmissiveColor,
                    &local_298);
  ::FString::FString(&local_288,L"F0");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::F0,&local_278);
  ::FString::FString(&local_268,L"F90");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::F90,&local_258);
  ::FString::FString(&local_248,L"FuzzAmount");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::FuzzAmount,
                    &local_238);
  ::FString::FString(&local_228,L"FuzzColor");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::FuzzColor,
                    &local_218);
  ::FString::FString(&local_208,L"FuzzRoughness");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::FuzzRoughness,
                    &local_1f8);
  ::FString::FString(&local_1e8,L"GlintUV");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::GlintUV,
                    &local_1d8);
  ::FString::FString(&local_1c8,L"GlintValue");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::GlintValue,
                    &local_1b8);
  ::FString::FString(&local_1a8,L"Normal");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::Normal,
                    &local_198);
  ::FString::FString(&local_188,L"Roughness");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::Roughness,
                    &local_178);
  ::FString::FString(&local_168,L"SecondRoughness");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::SecondRoughness,
                    &local_158);
  ::FString::FString(&local_148,L"SecondRoughnessWeight");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
                     SecondRoughnessWeight,&local_138);
  ::FString::FString(&local_128,L"SSSMFP");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::SSSMFP,
                    &local_118);
  ::FString::FString(&local_108,L"SSSMFPScale");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::SSSMFPScale,
                    &local_f8);
  ::FString::FString(&local_e8,L"SSSPhaseAnisotropy");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
                     SSSPhaseAnisotropy,&local_d8);
  ::FString::FString(&local_c8,L"Tangent");
  ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::Tangent,
                    &local_b8);
  local_328._First = &local_2e8;
  local_328._Last = (FString *)&local_a8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>(&local_a8,&local_328);
  pTVar11 = &local_a8;
  lVar9 = 0x24;
  do {
    FVar1 = pTVar11[-1].Hash.SecondaryData;
    pTVar11 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
              &pTVar11[-1].Hash.SecondaryData;
    lVar9 = lVar9 + -1;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
  } while (lVar9 != 0);
  local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340.ArrayNum = 0;
  local_340.ArrayMax = 0;
  UInterchangeShaderPortsAPI::GatherInputs((UInterchangeBaseNode *)param_1,&local_340);
  iVar2 = local_340.ArrayNum;
  uVar6 = (ulonglong)local_340.ArrayNum;
  pFVar12 = local_340.AllocatorInstance.Data + uVar6 * 0x10;
  FVar10.Data = local_340.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_348);
    }
    if (FVar10.Data == pFVar12) break;
    iVar4 = *(int *)(FVar10.Data + 8) + -1;
    if (*(int *)(FVar10.Data + 8) == 0) {
      pwVar8 = L"";
      iVar4 = 0;
    }
    else {
      pwVar8 = *(wchar_t **)FVar10.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar8);
    iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&local_a8,uVar3,(FString *)FVar10.Data);
    if (iVar4 != -1) {
      pFVar7 = UInterchangeBaseNode::GetUniqueID
                         ((UInterchangeBaseNode *)param_3,(FString *)&local_328);
      CreateMaterialExpressionForInput
                (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_308,
                 param_2,param_1,(FString *)FVar10.Data,pFVar7);
      if (local_328._First != (FString *)0x0) {
        FMemory::Free(local_328._First);
      }
      if (local_308 != (UInterchangeBaseNode *)0x0) {
        pFVar7 = UInterchangeBaseNode::GetUniqueID(local_308,&local_318);
        UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                  ((UInterchangeBaseNode *)param_3,(FString *)FVar10.Data,pFVar7,&local_300);
        if ((FName)local_318.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
      }
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
    }
    uVar6 = local_340._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 0x10;
  }
  UE::Interchange::InterchangeGenericMaterialPipeline::Private::AddSpecularProfileToFactoryNode
            ((UInterchangeBaseNode *)param_1,(UInterchangeFactoryBaseNode *)param_3,
             (this->BaseNodeContainer).field0_0x0.DebugPtr);
  DestructItems<FString,int>((FString *)local_340.AllocatorInstance.Data,local_340.ArrayNum);
  if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.AllocatorInstance.Data);
  }
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  return;
}

// HandleSpecGlossModel @ 14e7c07e0

bool __thiscall
UInterchangeGenericMaterialPipeline::HandleSpecGlossModel
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  bool bVar1;
  bool bVar2;
  UInterchangeMaterialExpressionFactoryNode *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName local_res20;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [8];
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::PBRSG::Parameters::SpecularColor);
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::PBRSG::Parameters::Glossiness);
  if ((bVar1) && (bVar2)) {
    ::FString::FString(&local_40,
                       L"MaterialFunction\'/Engine/Functions/Engine_MaterialFunctions01/Shading/ConvertFromDiffSpec.ConvertFromDiffSpec\'"
                      );
    ::FString::FString(&local_98,L"DiffSpecFunc");
    pUVar3 = UE::Interchange::InterchangeGenericMaterialPipeline::Private::
             CreateExpressionWithMaterialFunction
                       ((this->BaseNodeContainer).field0_0x0.DebugPtr,param_2,&local_98,&local_40);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar3,&local_60);
    pFVar4 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::BaseColor,&local_a8);
    UInterchangeMaterialFactoryNode::ConnectOutputToBaseColor(param_2,&local_60,pFVar4);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pFVar4 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::Metallic,&local_a8);
    UInterchangeMaterialFactoryNode::ConnectOutputToMetallic(param_2,&local_60,pFVar4);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pFVar4 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::Specular,&local_a8);
    UInterchangeMaterialFactoryNode::ConnectOutputToSpecular(param_2,&local_60,pFVar4);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pFVar4 = ::FName::ToString(&UE::Interchange::Materials::PBRSG::Parameters::DiffuseColor,
                               &local_a8);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)local_88,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar4,&local_60);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_88 != (undefined1  [8])0x0) {
      pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_88,&local_70);
      pFVar5 = ::FName::ToString(&UE::Interchange::Materials::PBRSG::Parameters::DiffuseColor,
                                 &local_a8);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)pUVar3,pFVar5,pFVar4,&local_80);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    pFVar4 = ::FName::ToString(&UE::Interchange::Materials::PBRSG::Parameters::SpecularColor,
                               &local_a8);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)local_88,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar4,&local_60);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_88 != (undefined1  [8])0x0) {
      pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_88,&local_70);
      pFVar5 = ::FName::ToString(&UE::Interchange::Materials::PBRSG::Parameters::SpecularColor,
                                 &local_a8);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)pUVar3,pFVar5,pFVar4,&local_80);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_70);
    pFVar5 = ::FName::ToString(&UE::Interchange::Materials::PBRSG::Parameters::Glossiness,&local_a8)
    ;
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)local_88,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar5,pFVar4);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_88 != (undefined1  [8])0x0) {
      pUVar6 = Z_Construct_UClass_UMaterialExpressionOneMinus_NoRegister();
      pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_30);
      ::FString::FString(&local_70,L"InverseGlossiness");
      pUVar3 = CreateExpressionNode(this,&local_70,pFVar4,pUVar6);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      pFVar7 = ::FName::FName((FName *)&local_50,5,L"Input",FNAME_Add);
      local_res20 = *pFVar7;
      ::FName::ToString(&local_res20,&local_a8);
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_80.Data.ArrayNum == 0) {
        local_98.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_80.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                   local_80.Data.ArrayNum,&local_98.Data.ArrayMax);
        memcpy(local_98.Data.AllocatorInstance.Data,local_80.Data.AllocatorInstance.Data,
               (longlong)local_80.Data.ArrayNum * 2);
      }
      pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_88,&local_50);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)pUVar3,&local_a8,pFVar4,&local_98);
      if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      pFVar4 = ::FName::ToString(&UE::Interchange::Materials::PBRMR::Parameters::Roughness,
                                 (FString *)local_88);
      pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar3,&local_50);
      UInterchangeMaterialFactoryNode::ConnectOutputToRoughness(param_2,pFVar5,pFVar4);
      if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_88 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_88);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// HandleStaticBooleanParameterNode @ 14e7c0c80

void __thiscall
UInterchangeGenericMaterialPipeline::HandleStaticBooleanParameterNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeMaterialExpressionFactoryNode *param_2)

{
  FName FVar1;
  bool bVar2;
  FString *pFVar3;
  UClass *pUVar4;
  FName *pFVar5;
  bool local_res20 [8];
  FName local_38;
  FName local_30;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::StaticBoolParameter::
                              Attributes::DefaultValue,&local_28);
  UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_18,pFVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar2 = UInterchangeBaseNode::GetBooleanAttribute
                    ((UInterchangeBaseNode *)param_1,&local_18,local_res20);
  if (bVar2) {
    pUVar4 = Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister();
    local_30 = (FName)pUVar4->_padding_;
    ::FName::ToString(&local_30,&local_28);
    UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_2,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar5 = ::FName::FName(&local_30,0xc,L"DefaultValue",FNAME_Add);
    local_38 = *pFVar5;
    pFVar3 = ::FName::ToString(&local_38,&local_28);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)param_2,pFVar3,local_res20);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    FVar1 = local_38;
    pUVar4 = Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister();
    pFVar3 = ::FName::ToString(&local_38,&local_28);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
              ((UInterchangeFactoryBaseNode *)param_2,pFVar3,pUVar4,FVar1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_28);
  UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)param_2,pFVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleSubstrate @ 14e7c0e10

bool __thiscall
UInterchangeGenericMaterialPipeline::HandleSubstrate
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString *pFVar5;
  TEnumAsByte<EBlendMode> local_res20 [8];
  TEnumAsByte<ETranslucencyLightingMode> local_188;
  TEnumAsByte<ERefractionMode> local_187 [3];
  int local_184;
  float local_180 [2];
  UInterchangeBaseNode *local_178;
  FString local_170;
  UInterchangeBaseNode *local_160;
  FString local_158;
  UInterchangeBaseNode *local_148;
  FString local_140;
  UInterchangeBaseNode *local_130;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::SubstrateMaterial::Parameters::FrontMaterial);
  if (!bVar2) {
    return false;
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_108);
  pFVar5 = ::FName::ToString(&UE::Interchange::Materials::SubstrateMaterial::Parameters::
                              FrontMaterial,&local_118);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_130,
             (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,pFVar5
             ,pFVar4);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_130 == (UInterchangeBaseNode *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5102957597653201014>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                       ,0xf8a,"FrontMaterialFactoryNode.Get<0>()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (local_130 != (UInterchangeBaseNode *)0x0) goto LAB_14e7c0ee6;
  }
  else {
LAB_14e7c0ee6:
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_130,&local_e8);
    pFVar5 = ::FName::ToString(&UE::Interchange::Materials::SubstrateMaterial::Parameters::
                                FrontMaterial,&local_f8);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_2,pFVar5,pFVar4,&local_128);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::SubstrateMaterial::Parameters::OpacityMask);
  if (bVar2) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_c8);
    pFVar5 = ::FName::ToString(&UE::Interchange::Materials::SubstrateMaterial::Parameters::
                                OpacityMask,&local_d8);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_178,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar5,pFVar4);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_178 == (UInterchangeBaseNode *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5102957597653201003>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                         ,0xf95,"OpacityMaskFactoryNode.Get<0>()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (local_178 != (UInterchangeBaseNode *)0x0) goto LAB_14e7c0fe0;
    }
    else {
LAB_14e7c0fe0:
      pFVar4 = UInterchangeBaseNode::GetUniqueID(local_178,&local_a8);
      pFVar5 = ::FName::ToString(&UE::Interchange::Materials::SubstrateMaterial::Parameters::
                                  OpacityMask,&local_b8);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_2,pFVar5,pFVar4,&local_170);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
  }
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::SubstrateMaterial::Parameters::Displacement);
  if (bVar2) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_88);
    pFVar5 = ::FName::ToString(&UE::Interchange::Materials::SubstrateMaterial::Parameters::
                                Displacement,&local_98);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_160,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar5,pFVar4);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_160 == (UInterchangeBaseNode *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5102957597653200991>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                         ,0xfa1,"DisplacementFactoryNode.Get<0>()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (local_160 != (UInterchangeBaseNode *)0x0) goto LAB_14e7c10ea;
    }
    else {
LAB_14e7c10ea:
      pFVar4 = UInterchangeBaseNode::GetUniqueID(local_160,&local_68);
      pFVar5 = ::FName::ToString(&UE::Interchange::Materials::SubstrateMaterial::Parameters::
                                  Displacement,&local_78);
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)param_2,pFVar5,pFVar4,&local_158);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if ((this->bOverrideDisplacement == false) &&
       (bVar2 = UInterchangeShaderGraphNode::GetCustomDisplacementCenterMode(param_1,local_180),
       bVar2)) {
      UInterchangeMaterialFactoryNode::SetCustomDisplacementCenter(param_2,local_180[0]);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::SubstrateMaterial::Parameters::Occlusion);
  if (!bVar2) goto LAB_14e7c1283;
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_48);
  pFVar5 = ::FName::ToString(&UE::Interchange::Materials::SubstrateMaterial::Parameters::Occlusion,
                             &local_58);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_148,
             (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,pFVar5
             ,pFVar4);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_148 == (UInterchangeBaseNode *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5102957597653200974>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                       ,0xfb2,"OcclusionFactoryNode.Get<0>()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (local_148 != (UInterchangeBaseNode *)0x0) goto LAB_14e7c121d;
  }
  else {
LAB_14e7c121d:
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_148,&local_28);
    pFVar5 = ::FName::ToString(&UE::Interchange::Materials::SubstrateMaterial::Parameters::Occlusion
                               ,&local_38);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_2,pFVar5,pFVar4,&local_140);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
LAB_14e7c1283:
  bVar2 = UInterchangeShaderGraphNode::GetCustomBlendMode(param_1,&local_184);
  if (bVar2) {
    local_res20[0].Value = (uchar)local_184;
    UInterchangeMaterialFactoryNode::SetCustomBlendMode(param_2,local_res20,true);
    if (local_184 == 7) {
      local_188.Value = '\x05';
      UInterchangeMaterialFactoryNode::SetCustomTranslucencyLightingMode(param_2,&local_188,true);
      local_187[0].Value = '\0';
      UInterchangeMaterialFactoryNode::SetCustomRefractionMethod(param_2,local_187,true);
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return true;
}

// HandleSubsurface @ 14e7c1320

bool __thiscall
UInterchangeGenericMaterialPipeline::HandleSubsurface
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  TEnumAsByte<EMaterialShadingModel> local_res20 [8];
  FString local_48;
  FString local_38;
  UInterchangeBaseNode *local_28;
  FString local_20;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Subsurface::Parameters::SubsurfaceColor);
  if (bVar1) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_38);
    pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Subsurface::Parameters::SubsurfaceColor,
                               &local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_28,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar3,pFVar2);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28 != (UInterchangeBaseNode *)0x0) {
      pFVar2 = UInterchangeBaseNode::GetUniqueID(local_28,&local_38);
      UInterchangeMaterialFactoryNode::ConnectOutputToSubsurface(param_2,pFVar2,&local_20);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    local_res20[0].Value = '\x02';
    UInterchangeMaterialFactoryNode::SetCustomShadingModel(param_2,local_res20,true);
    local_res20[0].Value = '\0';
    UInterchangeMaterialFactoryNode::SetCustomBlendMode
              (param_2,(TEnumAsByte<EBlendMode> *)local_res20,true);
    return true;
  }
  return false;
}

// HandleSwitchNode @ 14e7c1470

void __thiscall
UInterchangeGenericMaterialPipeline::HandleSwitchNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  FString *pFVar4;
  FName *pFVar5;
  int iVar6;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  undefined1 local_a0 [8];
  FString local_98;
  FString local_88;
  UInterchangeBaseNode *local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  iVar6 = 0;
  pUVar2 = Z_Construct_UClass_UMaterialExpressionSwitch_NoRegister();
  local_e8 = (FName)pUVar2->_padding_;
  ::FName::ToString(&local_e8,&local_b0);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_b0);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_d0);
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Switch::Inputs::Value,
                             &local_e0);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)local_a0,param_2,
             param_1,pFVar4,pFVar3);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_a0 != (undefined1  [8])0x0) {
    pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_a0,&local_d0);
    pFVar5 = ::FName::FName((FName *)&local_c0,0xb,L"SwitchValue",FNAME_Add);
    local_e8 = *pFVar5;
    pFVar4 = ::FName::ToString(&local_e8,&local_e0);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar4,pFVar3,&local_98);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_d0);
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Switch::Inputs::Default,
                             &local_e0);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)local_a0,param_2,
             param_1,pFVar4,pFVar3);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_a0 != (undefined1  [8])0x0) {
    pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_a0,&local_d0);
    pFVar5 = ::FName::FName((FName *)&local_c0,7,L"Default",FNAME_Add);
    local_e8 = *pFVar5;
    pFVar4 = ::FName::ToString(&local_e8,&local_e0);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar4,pFVar3,&local_98);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Switch::Attributes::
                              InputCount,&local_e0);
  bVar1 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar3,(int *)&local_e8);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Switch::Attributes::
                                InputCount,&local_e0);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar3,(int *)&local_e8)
    ;
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (0 < (int)local_e8.ComparisonIndex.Value) {
      do {
        local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.Data.ArrayNum = 0;
        local_c0.Data.ArrayMax = 0;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_88,iVar6);
        pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Switch::Inputs::
                                    InputName,&local_60);
        ::FString::ConcatFF(&local_d0,pFVar3,&local_88);
        bVar1 = UInterchangeBaseNode::GetStringAttribute
                          ((UInterchangeBaseNode *)param_1,&local_d0,&local_c0);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (bVar1) {
          local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b0.Data.ArrayNum = 0;
          local_b0.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_b0,iVar6);
          pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Switch::Inputs::
                                      InputName,&local_50);
          ::FString::ConcatFF(&local_e0,pFVar3,&local_b0);
          UInterchangeBaseNode::AddStringAttribute
                    ((UInterchangeBaseNode *)param_3,&local_e0,&local_c0);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_40);
          CreateMaterialExpressionForInput
                    (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_78,
                     param_2,param_1,&local_c0,pFVar3);
          if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_40.Data.AllocatorInstance.Data);
          }
          if (local_78 != (UInterchangeBaseNode *)0x0) {
            pFVar3 = UInterchangeBaseNode::GetUniqueID(local_78,(FString *)local_a0);
            UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                      ((UInterchangeBaseNode *)param_3,&local_c0,pFVar3,&local_70);
            if (local_a0 != (undefined1  [8])0x0) {
              FMemory::Free((void *)local_a0);
            }
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        if ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_e8.ComparisonIndex.Value);
    }
  }
  return;
}

// HandleTextureCoordinateNode @ 14e7c18d0

void __thiscall
UInterchangeGenericMaterialPipeline::HandleTextureCoordinateNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode **param_3)

{
  ForAnyElementType FVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FName *pFVar5;
  FString *pFVar6;
  UInterchangeMaterialExpressionFactoryNode *pUVar7;
  FName local_res20;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  UInterchangeBaseNode *local_58;
  FString local_50;
  UInterchangeBaseNode *local_40;
  FString local_38;
  
  pUVar7 = *param_3;
  pUVar3 = Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister();
  local_res20 = (FName)pUVar3->_padding_;
  ::FName::ToString(&local_res20,&local_98);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(pUVar7,&local_98);
  if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs
                              ::Index,&local_98);
  pFVar4 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_a8,pFVar4);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_res20);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar5 = ::FName::FName((FName *)&local_98,0xf,L"CoordinateIndex",FNAME_Add);
    pUVar7 = *param_3;
    local_b8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar5;
    pFVar4 = ::FName::ToString((FName *)&local_b8,&local_a8);
    UInterchangeBaseNode::AddInt32Attribute
              ((UInterchangeBaseNode *)pUVar7,pFVar4,(int *)&local_res20);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_b8.Data.AllocatorInstance.Data;
    pUVar7 = *param_3;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_b8,&local_a8);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)pUVar7,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs
                              ::UTiling,&local_98);
  pFVar4 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_a8,pFVar4);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&local_res20);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar5 = ::FName::FName((FName *)&local_98,7,L"UTiling",FNAME_Add);
    pUVar7 = *param_3;
    local_b8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar5;
    pFVar4 = ::FName::ToString((FName *)&local_b8,&local_a8);
    UInterchangeBaseNode::AddFloatAttribute
              ((UInterchangeBaseNode *)pUVar7,pFVar4,(float *)&local_res20);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_b8.Data.AllocatorInstance.Data;
    pUVar7 = *param_3;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_b8,&local_a8);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)pUVar7,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs
                              ::UTiling,&local_98);
  pFVar4 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_a8,pFVar4);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&local_res20);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar5 = ::FName::FName((FName *)&local_98,7,L"VTiling",FNAME_Add);
    pUVar7 = *param_3;
    local_b8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar5;
    pFVar4 = ::FName::ToString((FName *)&local_b8,&local_a8);
    UInterchangeBaseNode::AddFloatAttribute
              ((UInterchangeBaseNode *)pUVar7,pFVar4,(float *)&local_res20);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_b8.Data.AllocatorInstance.Data;
    pUVar7 = *param_3;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_b8,&local_a8);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)pUVar7,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*param_3,&local_98);
  pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs
                              ::Scale,&local_a8);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_58,param_2,
             param_1,pFVar6,pFVar4);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_58 != (UInterchangeBaseNode *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialExpressionMultiply_NoRegister();
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*param_3,&local_88);
    pFVar6 = UInterchangeBaseNode::GetDisplayLabel(local_58,&local_a8);
    ::FString::ConcatFC(&local_b8,pFVar6,L"_Multiply");
    pUVar7 = CreateExpressionNode(this,&local_b8,pFVar4,pUVar3);
    if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*param_3,&local_68);
    pFVar5 = ::FName::FName((FName *)&local_98,1,L"A",FNAME_Add);
    local_res20 = *pFVar5;
    pFVar6 = ::FName::ToString(&local_res20,&local_78);
    UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput
              ((UInterchangeBaseNode *)pUVar7,pFVar6,pFVar4);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_58,&local_78);
    pFVar5 = ::FName::FName((FName *)&local_98,1,L"B",FNAME_Add);
    local_res20 = *pFVar5;
    pFVar6 = ::FName::ToString(&local_res20,&local_68);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)pUVar7,pFVar6,pFVar4,&local_50);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    *param_3 = pUVar7;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*param_3,&local_78);
  pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs
                              ::Rotate,&local_68);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_58,param_2,
             param_1,pFVar6,pFVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58 != (UInterchangeBaseNode *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*param_3,&local_78);
    pFVar6 = UInterchangeBaseNode::GetDisplayLabel(local_58,&local_68);
    ::FString::ConcatFC(&local_98,pFVar6,L"_Rotator");
    pUVar7 = CreateExpressionNode(this,&local_98,pFVar4,pUVar3);
    if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_a8,
                       L"/Engine/Functions/Engine_MaterialFunctions02/Texturing/CustomRotator.CustomRotator"
                      );
    UE::Interchange::InterchangeGenericMaterialPipeline::Private::UpdateFunctionCallExpression
              (pUVar7,&local_a8);
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*param_3,&local_88);
    ::FString::FString(&local_b8,L"UVs");
    UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput
              ((UInterchangeBaseNode *)pUVar7,&local_b8,pFVar4);
    if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_58,&local_88);
    ::FString::FString(&local_b8,L"Rotation Angle (0-1)");
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)pUVar7,&local_b8,pFVar4,&local_50);
    if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*param_3,&local_b8);
    pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::
                                Inputs::RotationCenter,&local_88);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_40,param_2
               ,param_1,pFVar6,pFVar4);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_40 != (UInterchangeBaseNode *)0x0) {
      pFVar4 = UInterchangeBaseNode::GetUniqueID(local_40,&local_88);
      ::FString::FString(&local_b8,L"Rotation Center");
      UInterchangeShaderPortsAPI::ConnectOuputToInputByName
                ((UInterchangeBaseNode *)pUVar7,&local_b8,pFVar4,&local_38);
      if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    *param_3 = pUVar7;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*param_3,&local_78);
  pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs
                              ::Offset,&local_68);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_58,param_2,
             param_1,pFVar6,pFVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58 != (UInterchangeBaseNode *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialExpressionAdd_NoRegister();
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*param_3,&local_78);
    pFVar6 = UInterchangeBaseNode::GetDisplayLabel(local_58,&local_68);
    ::FString::ConcatFC(&local_a8,pFVar6,L"_Add");
    pUVar7 = CreateExpressionNode(this,&local_a8,pFVar4,pUVar3);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*param_3,&local_b8);
    pFVar5 = ::FName::FName((FName *)&local_98,1,L"A",FNAME_Add);
    local_res20 = *pFVar5;
    pFVar6 = ::FName::ToString(&local_res20,&local_88);
    UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput
              ((UInterchangeBaseNode *)pUVar7,pFVar6,pFVar4);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_58,&local_b8);
    pFVar5 = ::FName::FName((FName *)&local_98,1,L"B",FNAME_Add);
    local_res20 = *pFVar5;
    pFVar6 = ::FName::ToString(&local_res20,&local_88);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)pUVar7,pFVar6,pFVar4,&local_50);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    *param_3 = pUVar7;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleTextureNode @ 14e7c2200

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UInterchangeGenericMaterialPipeline::HandleTextureNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeTextureNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3,FString *param_4,bool param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FAttributeStorage *this_00;
  ForAnyElementType FVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  UInterchangeTextureFactoryNode *this_01;
  UClass *pUVar10;
  TAttributeHandle<unsigned_char,void> *pTVar11;
  EAttributeStorageResult EVar12;
  UInterchangeResultWarning_Generic *pUVar13;
  UObject *pUVar14;
  FText *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  EMaterialInputType local_res8 [8];
  EMaterialInputType local_278;
  uchar local_277 [2];
  bool local_275;
  bool local_274;
  bool local_273;
  bool local_272 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_270;
  ForAnyElementType local_260;
  int local_258;
  int local_254;
  FAttributeKey local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FName local_1e0;
  FName local_1d8;
  FString local_1d0;
  TAttributeHandle<bool,void> local_1c0;
  TAttributeHandle<unsigned_char,void> local_1a8;
  FString local_190;
  FString local_180;
  void *local_170 [2];
  FString local_160;
  void *local_150 [2];
  FString local_140;
  void *local_130 [2];
  FText local_120;
  FText local_110;
  void *local_100 [2];
  FString local_f0;
  FString local_e0;
  void *local_d0 [2];
  FString local_c0;
  FString local_b0;
  FString local_a0;
  TAttributeHandle<unsigned_char,void> local_90;
  FTextFormat local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220.Data.ArrayNum = 0;
  local_220.Data.ArrayMax = 0;
  local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.ArrayNum = 0;
  local_270.ArrayMax = 0;
  UInterchangeBaseNode::GetTargetNodeUids((UInterchangeBaseNode *)param_1,&local_270);
  if (0 < local_270.ArrayNum) {
    uVar21 = *(int *)(local_270.AllocatorInstance.Data + 8) - 1;
    if (*(int *)(local_270.AllocatorInstance.Data + 8) == 0) {
      uVar21 = 0;
    }
    ::FString::AssignRange(&local_220,*(wchar_t **)local_270.AllocatorInstance.Data,uVar21);
  }
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,param_4);
  pFVar9 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureSample::Inputs::
                              Texture,&local_b0);
  if (param_5) {
    UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_1d0,pFVar9);
  }
  else {
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_1d0,pFVar9);
  }
  UInterchangeBaseNode::AddStringAttribute((UInterchangeBaseNode *)param_3,&local_1d0,&local_220);
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  this_01 = (UInterchangeTextureFactoryNode *)
            UInterchangeBaseNodeContainer::GetFactoryNode
                      ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_220);
  if (this_01 == (UInterchangeTextureFactoryNode *)0x0) goto LAB_14e7c2b95;
  pUVar10 = Z_Construct_UClass_UInterchangeTextureFactoryNode_NoRegister();
  iVar8 = (int)pUVar10->_padding_;
  if ((*(int *)(this_01->_padding_ + 0x38) < iVar8) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar8 * 8)
      != &pUVar10->_padding_)) goto LAB_14e7c2b95;
  local_res8[0] = Unknown;
  ::FString::FString(&local_210,L"TextureUsage");
  FVar5.Data = local_210.Data.AllocatorInstance.Data;
  lVar20 = (longlong)local_210.Data.ArrayNum;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_254 = 0;
  pcVar3 = *(code **)(this_01->_padding_ + 0x2c0);
  local_258 = local_210.Data.ArrayNum;
  if (local_210.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_210.Data.ArrayNum,0,&local_260,local_210.Data.ArrayNum,&local_254);
    memcpy(local_260.Data,FVar5.Data,lVar20 * 2);
  }
  cVar6 = (*pcVar3)(this_01,&local_260);
  if (local_260.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data);
  }
  FVar5.Data = local_210.Data.AllocatorInstance.Data;
  if (cVar6 != '\0') {
    local_250.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.Key.Data.ArrayMax = 0;
    local_250.Key.Data.ArrayNum = local_210.Data.ArrayNum;
    if (local_210.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_210.Data.ArrayNum,0,(ForAnyElementType *)&local_250,
                 local_210.Data.ArrayNum,&local_250.Key.Data.ArrayMax);
      memcpy(local_250.Key.Data.AllocatorInstance.Data,FVar5.Data,
             (longlong)local_210.Data.ArrayNum * 2);
    }
    if ((this_01->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar11 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                        ((FAttributeStorage *)this_01->_padding_,&local_90,&local_250);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_1a8,&pTVar11->Key,pTVar11->AttributeStorage);
    if (local_90.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Key.Key.Data.AllocatorInstance.Data);
    }
    if (local_250.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Key.Data.AllocatorInstance.Data);
    }
    bVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&local_1a8);
    if (bVar7) {
      UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                (&local_1a8,local_res8);
    }
    if (local_1a8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  iVar8 = (this->MaterialExpressionCreationContextStack).ArrayNum;
  uVar22 = iVar8 - 1;
  uVar21 = 0;
  if ((int)uVar22 < iVar8) {
    uVar21 = ~uVar22 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = (this->MaterialExpressionCreationContextStack).ArrayNum;
  pFVar4 = (this->MaterialExpressionCreationContextStack).AllocatorInstance.Data;
  pFVar9 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureSample::Outputs::A
                             ,&local_a0);
  iVar1 = *(int *)(pFVar4 + (longlong)iVar8 * 0x10 + -8);
  iVar2 = (pFVar9->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      bVar7 = true;
    }
    else {
      iVar8 = wcscmp(*(wchar_t **)(pFVar4 + (longlong)iVar8 * 0x10 + -0x10),
                     (wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
      bVar7 = iVar8 == 0;
    }
  }
  else {
    bVar7 = iVar2 + iVar1 == 1;
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  local_278 = (this->MaterialCreationContext).InputTypeBeingProcessed;
  if ((local_278 == Scalar) && (bVar7)) {
    local_278 = Unknown;
  }
  if (local_res8[0] == Unknown) {
    if (local_278 == Vector) {
      local_277[0] = '\x01';
      pFVar9 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_170);
      ::FString::ConcatFC(&local_200,pFVar9,L".SetCompressionSettings");
      if (local_170[0] != (void *)0x0) {
        FMemory::Free(local_170[0]);
      }
      if ((this_01->_padding_ == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar12 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                         ((FAttributeStorage *)this_01->_padding_,
                          &this_01->Macro_CustomCompressionSettingsKey,local_277,None);
      if ((EVar12 & Operation_Success) == None) {
        ::FString::FString(&local_160,&(this_01->Macro_CustomCompressionSettingsKey).Key);
        FVar5.Data = local_200.Data.AllocatorInstance.Data;
        local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_240.Data.ArrayNum = local_200.Data.ArrayNum;
        if (local_200.Data.ArrayNum == 0) {
          local_240.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_200.Data.ArrayNum,0,(ForAnyElementType *)&local_240,
                     local_200.Data.ArrayNum,&local_240.Data.ArrayMax);
          memcpy(local_240.Data.AllocatorInstance.Data,FVar5.Data,
                 (longlong)local_200.Data.ArrayNum * 2);
        }
        UE::Interchange::LogAttributeStorageErrors(EVar12,&local_240,(FAttributeKey *)&local_160);
      }
      else {
        ::FName::FName(&local_1e0,L"CompressionSettings");
        UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                  ((TArrayAttributeHelper<FString> *)&this_01->_padding_,
                   &(this_01->Macro_CustomCompressionSettingsKey).Key);
        pUVar10 = Z_Construct_UClass_UTexture_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned_char>
                  ((UInterchangeFactoryBaseNode *)this_01,
                   &(this_01->Macro_CustomCompressionSettingsKey).Key,pUVar10,local_1e0);
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      local_277[1] = 1;
      pFVar9 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_150);
      ::FString::ConcatFC(&local_1f0,pFVar9,L".SetLODGroup");
      if (local_150[0] != (void *)0x0) {
        FMemory::Free(local_150[0]);
      }
      if ((this_01->_padding_ == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar12 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                         ((FAttributeStorage *)this_01->_padding_,&this_01->Macro_CustomLODGroupKey,
                          local_277 + 1,None);
      if ((EVar12 & Operation_Success) == None) {
        ::FString::FString(&local_140,&(this_01->Macro_CustomLODGroupKey).Key);
        FVar5.Data = local_1f0.Data.AllocatorInstance.Data;
        local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_230.Data.ArrayNum = local_1f0.Data.ArrayNum;
        if (local_1f0.Data.ArrayNum == 0) {
          local_230.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1f0.Data.ArrayNum,0,(ForAnyElementType *)&local_230,
                     local_1f0.Data.ArrayNum,&local_230.Data.ArrayMax);
          memcpy(local_230.Data.AllocatorInstance.Data,FVar5.Data,
                 (longlong)local_1f0.Data.ArrayNum * 2);
        }
        UE::Interchange::LogAttributeStorageErrors(EVar12,&local_230,(FAttributeKey *)&local_140);
      }
      else {
        ::FName::FName(&local_1d8,L"LODGroup");
        UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                  ((TArrayAttributeHelper<FString> *)&this_01->_padding_,
                   &(this_01->Macro_CustomLODGroupKey).Key);
        pUVar10 = Z_Construct_UClass_UTexture_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned_char>
                  ((UInterchangeFactoryBaseNode *)this_01,&(this_01->Macro_CustomLODGroupKey).Key,
                   pUVar10,local_1d8);
      }
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
    }
    else if ((local_278 == Scalar) &&
            (bVar7 = UInterchangeTextureNode::GetCustomSRGB(param_1,&local_273), !bVar7)) {
      local_275 = false;
      UInterchangeTextureFactoryNode::SetCustomSRGB(this_01,&local_275,true);
    }
    ::FString::FString(&local_190,L"TextureUsage");
    UInterchangeBaseNode::SetAttribute<enum_UInterchangeGenericMaterialPipeline::EMaterialInputType>
              ((UInterchangeBaseNode *)this_01,&local_190,&local_278);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    goto LAB_14e7c2b95;
  }
  if ((local_res8[0] == local_278) || (local_278 == Unknown)) goto LAB_14e7c2b95;
  pUVar13 = UInterchangePipelineBase::AddMessage<UInterchangeResultWarning_Generic>
                      ((UInterchangePipelineBase *)this);
  pFVar9 = (FString *)(**(code **)(this_01->_padding_ + 0x2d8))(this_01,local_130);
  ::FString::operator=((FString *)&pUVar13->_padding_,pFVar9);
  if (local_130[0] != (void *)0x0) {
    FMemory::Free(local_130[0]);
  }
  pUVar14 = (UObject *)(**(code **)(this_01->_padding_ + 0x2f8))(this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  pUVar13->_padding_ = (longlong)pUVar14;
  pFVar9 = ::LexToString(&local_e0,local_278);
  pFVar15 = FText::FromString(&local_58,pFVar9);
  pFVar9 = ::LexToString(&local_f0,local_res8[0]);
  pFVar16 = FText::FromString(&local_48,pFVar9);
  pFVar9 = (FString *)(**(code **)(this_01->_padding_ + 0x2d8))(this_01,local_100);
  pFVar17 = FText::FromString(&local_38,pFVar9);
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_110,L"InterchangeGenericMaterialPipeline",L"TextureUsageMismatch",
                       L"{0} is being used as both {1} and {2} which aren\'t compatible.");
  pFVar19 = FTextFormat::FTextFormat(&local_78,pFVar18,Default);
  pFVar15 = FText::Format<FText,FText,FText>(&local_120,pFVar19,pFVar17,pFVar16,pFVar15);
  FText::operator=(&pUVar13->Text,pFVar15);
  if (local_120.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
  }
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  if (local_100[0] != (void *)0x0) {
    FMemory::Free(local_100[0]);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pFVar9 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_d0);
  ::FString::ConcatFC(&local_180,pFVar9,L".GetbFlipGreenChannel");
  if (local_d0[0] != (void *)0x0) {
    FMemory::Free(local_d0[0]);
  }
  if ((this_01->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FAttributeStorage *)this_01->_padding_;
  bVar7 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (this_00,&this_01->Macro_CustombFlipGreenChannelKey);
  if (bVar7) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (this_00,&local_1c0,&this_01->Macro_CustombFlipGreenChannelKey);
    bVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_1c0);
    if (bVar7) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_1c0,local_272);
      if ((EVar12 & Operation_Success) != None) {
        if (local_1c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar7 = true;
        goto LAB_14e7c2b5e;
      }
      ::FString::FString(&local_c0,&(this_01->Macro_CustombFlipGreenChannelKey).Key);
      pFVar9 = ::FString::FString(&local_68,&local_180);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar9,(FAttributeKey *)&local_c0);
    }
    if (local_1c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar7 = false;
  }
  else {
    bVar7 = false;
  }
LAB_14e7c2b5e:
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    local_274 = false;
    UInterchangeTextureFactoryNode::SetCustombFlipGreenChannel(this_01,&local_274,true);
  }
LAB_14e7c2b95:
  DestructItems<FString,int>((FString *)local_270.AllocatorInstance.Data,local_270.ArrayNum);
  if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.AllocatorInstance.Data);
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleTextureObjectNode @ 14e7c2c00

void __thiscall
UInterchangeGenericMaterialPipeline::HandleTextureObjectNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  UInterchangeTextureNode *pUVar4;
  UClass *pUVar5;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res8 = UE::Interchange::Materials::Standard::Nodes::TextureObject::Inputs::Texture;
  bVar2 = UInterchangeShaderPortsAPI::HasParameter((UInterchangeBaseNode *)param_1,&local_res8);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar3 = ::FName::ToString(&local_res8,&local_38);
  if (bVar2) {
    UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_48,pFVar3);
  }
  else {
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_48,pFVar3);
  }
  UInterchangeBaseNode::GetStringAttribute((UInterchangeBaseNode *)param_1,&local_48,&local_68);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pUVar4 = (UInterchangeTextureNode *)
           UInterchangeBaseNodeContainer::GetNode
                     ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_68);
  if (pUVar4 != (UInterchangeTextureNode *)0x0) {
    pUVar5 = Z_Construct_UClass_UInterchangeTextureNode_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pUVar5 = Z_Construct_UClass_UMaterialExpressionTextureObject_NoRegister();
      local_res8 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      HandleTextureNode(this,pUVar4,param_2,param_3,&local_48,bVar2);
      local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      goto LAB_14e7c2d9b;
    }
  }
  pUVar5 = Z_Construct_UClass_UMaterialExpressionTextureObject_NoRegister();
  local_res8 = (FName)pUVar5->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureObject::Inputs::
                              Texture,&local_38);
  if (bVar2) {
    UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_48,pFVar3);
  }
  else {
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_48,pFVar3);
  }
  UInterchangeBaseNode::AddStringAttribute((UInterchangeBaseNode *)param_3,&local_48,&local_58);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14e7c2d9b:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleTextureSampleBlurNode @ 14e7c2de0

void __thiscall
UInterchangeGenericMaterialPipeline::HandleTextureSampleBlurNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  FName FVar1;
  bool bVar2;
  FString *pFVar3;
  FName *pFVar4;
  UClass *pUVar5;
  float local_28 [2];
  FName local_20;
  FString local_18;
  
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureSampleBlur::
                              Attributes::KernelSize,&local_18);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar3,(int *)local_28);
  if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar4 = ::FName::FName((FName *)&local_18,10,L"KernelSize",FNAME_Add);
    local_20 = *pFVar4;
    pFVar3 = ::FName::ToString(&local_20,&local_18);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar3,(int *)local_28);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar1 = local_20;
    pUVar5 = Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_NoRegister();
    pFVar3 = ::FName::ToString(&local_20,&local_18);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar3,pUVar5,FVar1);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureSampleBlur::
                              Attributes::FilterSize,&local_18);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute((UInterchangeBaseNode *)param_1,pFVar3,local_28);
  if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar4 = ::FName::FName((FName *)&local_18,10,L"FilterSize",FNAME_Add);
    local_20 = *pFVar4;
    pFVar3 = ::FName::ToString(&local_20,&local_18);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)param_3,pFVar3,local_28);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar1 = local_20;
    pUVar5 = Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_NoRegister();
    pFVar3 = ::FName::ToString(&local_20,&local_18);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar3,pUVar5,FVar1);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureSampleBlur::
                              Attributes::FilterOffset,&local_18);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute((UInterchangeBaseNode *)param_1,pFVar3,local_28);
  if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar4 = ::FName::FName((FName *)&local_18,0xc,L"FilterOffset",FNAME_Add);
    local_20 = *pFVar4;
    pFVar3 = ::FName::ToString(&local_20,&local_18);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)param_3,pFVar3,local_28);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar1 = local_20;
    pUVar5 = Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_NoRegister();
    pFVar3 = ::FName::ToString(&local_20,&local_18);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar3,pUVar5,FVar1);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureSampleBlur::
                              Attributes::Filter,&local_18);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar3,(int *)local_28);
  if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar4 = ::FName::FName((FName *)&local_18,6,L"Filter",FNAME_Add);
    local_20 = *pFVar4;
    pFVar3 = ::FName::ToString(&local_20,&local_18);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar3,(int *)local_28);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar1 = local_20;
    pUVar5 = Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_NoRegister();
    pFVar3 = ::FName::ToString(&local_20,&local_18);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar3,pUVar5,FVar1);
    if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleTextureSampleNode @ 14e7c3120

void __thiscall
UInterchangeGenericMaterialPipeline::HandleTextureSampleNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  UInterchangeTextureNode *this_00;
  UClass *pUVar5;
  FString *pFVar6;
  FName *pFVar7;
  FName local_res8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  UInterchangeBaseNode *local_58;
  FString local_50;
  FString local_40;
  
  local_res8 = UE::Interchange::Materials::Standard::Nodes::TextureSample::Inputs::Texture;
  bVar1 = UInterchangeShaderPortsAPI::HasParameter((UInterchangeBaseNode *)param_1,&local_res8);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pFVar4 = ::FName::ToString(&local_res8,&local_88);
  if (bVar1) {
    UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_a8,pFVar4);
  }
  else {
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_a8,pFVar4);
  }
  UInterchangeBaseNode::GetStringAttribute((UInterchangeBaseNode *)param_1,&local_a8,&local_78);
  if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  this_00 = (UInterchangeTextureNode *)
            UInterchangeBaseNodeContainer::GetNode
                      ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_78);
  if (this_00 != (UInterchangeTextureNode *)0x0) {
    pUVar5 = Z_Construct_UClass_UInterchangeTextureNode_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar5->_padding_)) {
      pUVar5 = Z_Construct_UClass_UInterchangeTextureCubeNode_NoRegister();
      iVar3 = (int)pUVar5->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar5->_padding_)) {
        pUVar5 = Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister();
        iVar3 = (int)pUVar5->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar5->_padding_)) {
          pUVar5 = Z_Construct_UClass_UInterchangeTextureBlurNode_NoRegister();
          iVar3 = (int)pUVar5->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar5->_padding_)) {
            bVar2 = UObjectBaseUtility::IsA<UInterchangeTexture2DNode>
                              ((UObjectBaseUtility *)this_00);
            if (!bVar2) {
              pUVar5 = Z_Construct_UClass_UInterchangeVolumeTextureNode_NoRegister();
              iVar3 = (int)pUVar5->_padding_;
              if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
                  == &pUVar5->_padding_)) {
                pUVar5 = Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_NoRegister
                                   ();
                goto LAB_14e7c32e4;
              }
            }
            pUVar5 = Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_NoRegister();
          }
          else {
            pUVar5 = Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_NoRegister
                               ();
          }
        }
        else {
          pUVar5 = Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2DArray_NoRegister();
        }
      }
      else {
        pUVar5 = Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_NoRegister();
      }
LAB_14e7c32e4:
      local_res8 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_res8,&local_a8);
      if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      local_98.Data.ArrayMax = local_a8.Data.ArrayMax;
      local_98.Data.ArrayNum = local_a8.Data.ArrayNum;
      HandleTextureNode(this,this_00,param_2,param_3,&local_98,bVar1);
      goto LAB_14e7c33cf;
    }
  }
  pUVar5 = Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_NoRegister();
  local_res8 = (FName)pUVar5->_padding_;
  ::FName::ToString(&local_res8,&local_a8);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_a8);
  if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureSample::Inputs::
                              Texture,&local_88);
  if (bVar1) {
    UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_a8,pFVar4);
  }
  else {
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_a8,pFVar4);
  }
  UInterchangeBaseNode::AddStringAttribute((UInterchangeBaseNode *)param_3,&local_a8,&local_68);
  if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_14e7c33cf:
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_a8);
  pFVar6 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureSample::Inputs::
                              Coordinates,&local_88);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_58,param_2,
             param_1,pFVar6,pFVar4);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_58 != (UInterchangeBaseNode *)0x0) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_58,&local_40);
    pFVar7 = ::FName::FName((FName *)&local_a8,0xb,L"Coordinates",FNAME_Add);
    local_res8 = *pFVar7;
    pFVar6 = ::FName::ToString(&local_res8,&local_88);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar6,pFVar4,&local_50);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  pUVar5 = Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_NoRegister();
  local_res8 = (FName)pUVar5->_padding_;
  ::FName::ToString(&local_res8,&local_a8);
  if (local_98.Data.ArrayNum == local_a8.Data.ArrayNum) {
    if (local_98.Data.ArrayNum < 2) {
      bVar1 = true;
    }
    else {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_98.Data.AllocatorInstance.Data,
                         (wchar_t *)local_a8.Data.AllocatorInstance.Data);
      bVar1 = iVar3 == 0;
    }
  }
  else {
    bVar1 = local_98.Data.ArrayNum + local_a8.Data.ArrayNum == 1;
  }
  if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    HandleTextureSampleBlurNode(this,param_1,param_2,param_3);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleThinTranslucent @ 14e7c3580

bool __thiscall
UInterchangeGenericMaterialPipeline::HandleThinTranslucent
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  bool bVar4;
  TEnumAsByte<EBlendMode> local_res20 [8];
  FString local_58;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  
  bVar4 = false;
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::ThinTranslucent::Parameters::TransmissionColor);
  if (bVar1) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_48);
    pFVar3 = ::FName::ToString(&UE::Interchange::Materials::ThinTranslucent::Parameters::
                                TransmissionColor,&local_58);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar3,pFVar2);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar2 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeMaterialFactoryNode::ConnectOutputToTransmissionColor(param_2,pFVar2,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = true;
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::ThinTranslucent::Parameters::SurfaceCoverage);
  if (bVar1) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_58);
    pFVar3 = ::FName::ToString(&UE::Interchange::Materials::ThinTranslucent::Parameters::
                                SurfaceCoverage,&local_48);
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar3,pFVar2);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38 != (UInterchangeBaseNode *)0x0) {
      pFVar2 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
      UInterchangeMaterialFactoryNode::ConnectOutputToSurfaceCoverage(param_2,pFVar2,&local_30);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = true;
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  else if (bVar4 == false) {
    return false;
  }
  local_res20[0].Value = '\x02';
  UInterchangeMaterialFactoryNode::SetCustomBlendMode(param_2,local_res20,true);
  local_res20[0].Value = '\v';
  UInterchangeMaterialFactoryNode::SetCustomShadingModel
            (param_2,(TEnumAsByte<EMaterialShadingModel> *)local_res20,true);
  local_res20[0].Value = '\x05';
  UInterchangeMaterialFactoryNode::SetCustomTranslucencyLightingMode
            (param_2,(TEnumAsByte<ETranslucencyLightingMode> *)local_res20,true);
  return bVar4;
}

// HandleTimeNode @ 14e7c3760

void __thiscall
UInterchangeGenericMaterialPipeline::HandleTimeNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  FName FVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FName *pFVar5;
  bool local_38 [8];
  FName local_30;
  FName local_28;
  FString local_20;
  
  pUVar3 = Z_Construct_UClass_UMaterialExpressionTime_NoRegister();
  local_28 = (FName)pUVar3->_padding_;
  ::FName::ToString(&local_28,&local_20);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_20);
  if ((FName)local_20.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Time::Attributes::
                              IgnorePause,&local_20);
  bVar2 = UInterchangeBaseNode::GetBooleanAttribute((UInterchangeBaseNode *)param_1,pFVar4,local_38)
  ;
  if ((FName)local_20.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar5 = ::FName::FName(&local_28,0xc,L"bIgnorePause",FNAME_Add);
    local_30 = *pFVar5;
    pFVar4 = ::FName::ToString(&local_30,&local_20);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)param_3,pFVar4,local_38);
    if ((FName)local_20.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    FVar1 = local_30;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionTime_NoRegister();
    pFVar4 = ::FName::ToString(&local_30,&local_20);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,FVar1);
    if ((FName)local_20.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Time::Attributes::
                              OverridePeriod,&local_20);
  bVar2 = UInterchangeBaseNode::GetBooleanAttribute((UInterchangeBaseNode *)param_1,pFVar4,local_38)
  ;
  if ((FName)local_20.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar5 = ::FName::FName(&local_28,0x10,L"bOverride_Period",FNAME_Add);
    local_30 = *pFVar5;
    pFVar4 = ::FName::ToString(&local_30,&local_20);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)param_3,pFVar4,local_38);
    if ((FName)local_20.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    FVar1 = local_30;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionTime_NoRegister();
    pFVar4 = ::FName::ToString(&local_30,&local_20);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,FVar1);
    if ((FName)local_20.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Time::Attributes::Period,
                             &local_20);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(float *)&local_30);
  if ((FName)local_20.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar5 = ::FName::FName((FName *)&local_20,6,L"Period",FNAME_Add);
    local_28 = *pFVar5;
    pFVar4 = ::FName::ToString(&local_28,&local_20);
    UInterchangeBaseNode::AddFloatAttribute
              ((UInterchangeBaseNode *)param_3,pFVar4,(float *)&local_30);
    if ((FName)local_20.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    FVar1 = local_28;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionTime_NoRegister();
    pFVar4 = ::FName::ToString(&local_28,&local_20);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,FVar1);
    if ((FName)local_20.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleTransformPositionNode @ 14e7c3a10

void __thiscall
UInterchangeGenericMaterialPipeline::HandleTransformPositionNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  ForAnyElementType FVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FName *pFVar6;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  UInterchangeBaseNode *local_30;
  FString local_28;
  
  pUVar3 = Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister();
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar3->_padding_;
  ::FName::ToString((FName *)&local_60,&local_50);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_50);
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_60);
  pFVar5 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TransformPosition::Inputs
                              ::Input,&local_50);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_30,param_2,
             param_1,pFVar5,pFVar4);
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((FName)local_60.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_30 != (UInterchangeBaseNode *)0x0) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_30,&local_40);
    pFVar6 = ::FName::FName(&local_68,5,L"Input",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar5 = ::FName::ToString((FName *)&local_60,&local_50);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar5,pFVar4,&local_28);
    if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TransformPosition::
                              Attributes::TransformSourceType,&local_40);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_68);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_50,0x13,L"TransformSourceType",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar4,(int *)&local_68)
    ;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TransformPosition::
                              Attributes::TransformType,&local_40);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_68);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_50,0xd,L"TransformType",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar4,(int *)&local_68)
    ;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleTransformVectorNode @ 14e7c3ce0

void __thiscall
UInterchangeGenericMaterialPipeline::HandleTransformVectorNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  ForAnyElementType FVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FName *pFVar6;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  UInterchangeBaseNode *local_30;
  FString local_28;
  
  pUVar3 = Z_Construct_UClass_UMaterialExpressionTransform_NoRegister();
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar3->_padding_;
  ::FName::ToString((FName *)&local_60,&local_50);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_50);
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_60);
  pFVar5 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TransformVector::Inputs::
                              Input,&local_50);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_30,param_2,
             param_1,pFVar5,pFVar4);
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((FName)local_60.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_30 != (UInterchangeBaseNode *)0x0) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_30,&local_40);
    pFVar6 = ::FName::FName(&local_68,5,L"Input",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar5 = ::FName::ToString((FName *)&local_60,&local_50);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar5,pFVar4,&local_28);
    if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TransformVector::
                              Attributes::TransformSourceType,&local_40);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_68);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_50,0x13,L"TransformSourceType",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar4,(int *)&local_68)
    ;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionTransform_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TransformVector::
                              Attributes::TransformType,&local_40);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_68);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_50,0xd,L"TransformType",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar4,(int *)&local_68)
    ;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionTransform_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_40);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleTrigonometryNode @ 14e7c3fb0

void __thiscall
UInterchangeGenericMaterialPipeline::HandleTrigonometryNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,UClass *param_2
          ,UInterchangeBaseMaterialFactoryNode *param_3,
          UInterchangeMaterialExpressionFactoryNode *param_4)

{
  ForAnyElementType FVar1;
  FString *pFVar2;
  FString *pFVar3;
  FName *pFVar4;
  FName local_res18 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  UInterchangeBaseNode *local_48;
  FString local_40;
  
  local_res18[0] = (FName)param_2->_padding_;
  ::FName::ToString(local_res18,&local_68);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_4,&local_68);
  if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_4,&local_78);
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Trigonometry::Inputs::
                              Input,&local_68);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_48,param_3,
             param_1,pFVar3,pFVar2);
  if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((FName)local_78.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_48 != (UInterchangeBaseNode *)0x0) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID(local_48,&local_58);
    pFVar4 = ::FName::FName((FName *)&local_78,5,L"Input",FNAME_Add);
    local_res18[0] = *pFVar4;
    pFVar3 = ::FName::ToString(local_res18,&local_68);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_4,pFVar3,pFVar2,&local_40);
    if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  local_res18[0].ComparisonIndex.Value = 0x40c90fdb;
  pFVar2 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::Trigonometry::Attributes
                              ::Period,&local_58);
  UInterchangeBaseNode::GetFloatAttribute
            ((UInterchangeBaseNode *)param_1,pFVar2,(float *)local_res18);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar4 = ::FName::FName((FName *)&local_68,6,L"Period",FNAME_Add);
  local_78.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar4;
  pFVar2 = ::FName::ToString((FName *)&local_78,&local_58);
  UInterchangeBaseNode::AddFloatAttribute
            ((UInterchangeBaseNode *)param_4,pFVar2,(float *)local_res18);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar1.Data = local_78.Data.AllocatorInstance.Data;
  pFVar2 = ::FName::ToString((FName *)&local_78,&local_58);
  UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
            ((UInterchangeFactoryBaseNode *)param_4,pFVar2,param_2,(FName)FVar1.Data);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleUnlitModel @ 14e7c41c0

bool __thiscall
UInterchangeGenericMaterialPipeline::HandleUnlitModel
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialFactoryNode *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  TEnumAsByte<EMaterialShadingModel> local_res20 [8];
  FString local_58;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  UInterchangeBaseNode *local_20;
  FString local_18;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Unlit::Parameters::UnlitColor);
  if (bVar1) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_48);
    pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Unlit::Parameters::UnlitColor,&local_58)
    ;
    CreateMaterialExpressionForInput
              (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_20,
               (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
               pFVar3,pFVar2);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_20 != (UInterchangeBaseNode *)0x0) {
      pFVar2 = UInterchangeBaseNode::GetUniqueID(local_20,&local_48);
      UInterchangeMaterialFactoryNode::ConnectOutputToEmissiveColor(param_2,pFVar2,&local_18);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    bVar1 = UInterchangeShaderPortsAPI::HasInput
                      ((UInterchangeBaseNode *)param_1,
                       &UE::Interchange::Materials::Common::Parameters::Opacity);
    if (bVar1) {
      pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_58);
      pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::Opacity,&local_48)
      ;
      CreateMaterialExpressionForInput
                (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,
                 (UInterchangeBaseMaterialFactoryNode *)param_2,(UInterchangeShaderNode *)param_1,
                 pFVar3,pFVar2);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38 != (UInterchangeBaseNode *)0x0) {
        pFVar2 = UInterchangeBaseNode::GetUniqueID(local_38,&local_48);
        UInterchangeMaterialFactoryNode::ConnectOutputToOpacity(param_2,pFVar2,&local_30);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      UE::Interchange::InterchangeGenericMaterialPipeline::Private::
      UpdateBlendModeBasedOnOpacityAttributes(param_1,param_2);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    local_res20[0].Value = '\0';
    UInterchangeMaterialFactoryNode::SetCustomShadingModel(param_2,local_res20,true);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// HandleVectorNoiseNode @ 14e7c43a0

void __thiscall
UInterchangeGenericMaterialPipeline::HandleVectorNoiseNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeBaseMaterialFactoryNode *param_2,
          UInterchangeMaterialExpressionFactoryNode *param_3)

{
  ForAnyElementType FVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FName *pFVar6;
  bool local_78 [8];
  FString local_70;
  FString local_60;
  FName local_50;
  FString local_48;
  UInterchangeBaseNode *local_38;
  FString local_30;
  
  pUVar3 = Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister();
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar3->_padding_;
  ::FName::ToString((FName *)&local_60,&local_48);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_3,&local_48);
  if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_3,&local_60);
  pFVar5 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::VectorNoise::Inputs::
                              Position,&local_48);
  CreateMaterialExpressionForInput
            (this,(TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&local_38,param_2,
             param_1,pFVar5,pFVar4);
  if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((FName)local_60.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_38 != (UInterchangeBaseNode *)0x0) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID(local_38,&local_70);
    pFVar6 = ::FName::FName(&local_50,8,L"Position",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar5 = ::FName::ToString((FName *)&local_60,&local_48);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)param_3,pFVar5,pFVar4,&local_30);
    if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::VectorNoise::Attributes::
                              Function,&local_70);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_50);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,0xd,L"NoiseFunction",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar4,(int *)&local_50)
    ;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::VectorNoise::Attributes::
                              Quality,&local_70);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_50);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,7,L"Quality",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar4,(int *)&local_50)
    ;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::VectorNoise::Attributes::
                              Tiling,&local_70);
  bVar2 = UInterchangeBaseNode::GetBooleanAttribute((UInterchangeBaseNode *)param_1,pFVar4,local_78)
  ;
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,7,L"bTiling",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)param_3,pFVar4,local_78);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::VectorNoise::Attributes::
                              Function,&local_70);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute
                    ((UInterchangeBaseNode *)param_1,pFVar4,(int *)&local_50);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar6 = ::FName::FName((FName *)&local_48,8,L"TileSize",FNAME_Add);
    local_60.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeBaseNode::AddInt32Attribute((UInterchangeBaseNode *)param_3,pFVar4,(int *)&local_50)
    ;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    FVar1.Data = local_60.Data.AllocatorInstance.Data;
    pUVar3 = Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister();
    pFVar4 = ::FName::ToString((FName *)&local_60,&local_70);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
              ((UInterchangeFactoryBaseNode *)param_3,pFVar4,pUVar3,(FName)FVar1.Data);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleVectorParameterNode @ 14e7c47f0

void __thiscall
UInterchangeGenericMaterialPipeline::HandleVectorParameterNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeMaterialExpressionFactoryNode *param_2)

{
  FName FVar1;
  bool bVar2;
  FString *pFVar3;
  UClass *pUVar4;
  FName *pFVar5;
  FName local_res20;
  FName local_48;
  FString local_40;
  FString local_30;
  FLinearColor local_20;
  
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::VectorParameter::
                              Attributes::DefaultValue,&local_40);
  UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_30,pFVar3);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  bVar2 = UInterchangeBaseNode::GetLinearColorAttribute
                    ((UInterchangeBaseNode *)param_1,&local_30,&local_20);
  if (bVar2) {
    pUVar4 = Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister();
    local_48 = (FName)pUVar4->_padding_;
    ::FName::ToString(&local_48,&local_40);
    UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName(param_2,&local_40);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    pFVar5 = ::FName::FName(&local_48,0xc,L"DefaultValue",FNAME_Add);
    local_res20 = *pFVar5;
    pFVar3 = ::FName::ToString(&local_res20,&local_40);
    UInterchangeBaseNode::AddLinearColorAttribute((UInterchangeBaseNode *)param_2,pFVar3,&local_20);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    FVar1 = local_res20;
    pUVar4 = Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister();
    pFVar3 = ::FName::ToString(&local_res20,&local_40);
    UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FLinearColor>
              ((UInterchangeFactoryBaseNode *)param_2,pFVar3,pUVar4,FVar1);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_40);
  UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)param_2,pFVar3);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// HasClearCoat @ 14e7c49b0

bool __thiscall
UInterchangeGenericMaterialPipeline::HasClearCoat
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::ClearCoat::Parameters::ClearCoat);
  return bVar1;
}

// HasSheen @ 14e7c5040

bool __thiscall
UInterchangeGenericMaterialPipeline::HasSheen
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Sheen::Parameters::SheenColor);
  return bVar1;
}

// HasSubsurface @ 14e7c5060

bool __thiscall
UInterchangeGenericMaterialPipeline::HasSubsurface
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Subsurface::Parameters::SubsurfaceColor);
  return bVar1;
}

// HasThinTranslucency @ 14e7c5080

bool __thiscall
UInterchangeGenericMaterialPipeline::HasThinTranslucency
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::ThinTranslucent::Parameters::TransmissionColor);
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::ThinTranslucent::Parameters::SurfaceCoverage);
  if ((!bVar1) && (!bVar2)) {
    return false;
  }
  return true;
}

// IsLambertModel @ 14e7c6a40

bool __thiscall
UInterchangeGenericMaterialPipeline::IsLambertModel
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Lambert::Parameters::DiffuseColor);
  return bVar1;
}

// IsMetalRoughModel @ 14e7c6bc0

bool __thiscall
UInterchangeGenericMaterialPipeline::IsMetalRoughModel
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::PBRMR::Parameters::BaseColor);
  return bVar1;
}

// IsPhongModel @ 14e7c6dc0

bool __thiscall
UInterchangeGenericMaterialPipeline::IsPhongModel
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Lambert::Parameters::DiffuseColor);
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Phong::Parameters::SpecularColor);
  if ((bVar1) && (bVar2)) {
    return true;
  }
  return false;
}

// IsSettingsAreValid @ 14e7c7970

bool __thiscall
UInterchangeGenericMaterialPipeline::IsSettingsAreValid
          (UInterchangeGenericMaterialPipeline *this,TOptional<FText> *param_1)

{
  UInterchangeGenericTexturePipeline *pUVar1;
  UInterchangeSparseVolumeTexturePipeline *pUVar2;
  char cVar3;
  
  pUVar1 = (this->TexturePipeline).field0_0x0.DebugPtr;
  if (pUVar1 != (UInterchangeGenericTexturePipeline *)0x0) {
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x2d8))();
    if (cVar3 == '\0') {
      return false;
    }
  }
  pUVar2 = (this->SparseVolumeTexturePipeline).field0_0x0.DebugPtr;
  if (pUVar2 != (UInterchangeSparseVolumeTexturePipeline *)0x0) {
    cVar3 = (**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2,param_1);
    return cVar3 != '\0';
  }
  return true;
}

// IsSpecGlossModel @ 14e7c7bf0

bool __thiscall
UInterchangeGenericMaterialPipeline::IsSpecGlossModel
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::PBRSG::Parameters::SpecularColor);
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::PBRSG::Parameters::Glossiness);
  if ((bVar1) && (bVar2)) {
    return true;
  }
  return false;
}

// IsSurfaceUnlitModel @ 14e7c7d20

bool __thiscall
UInterchangeGenericMaterialPipeline::IsSurfaceUnlitModel
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  int iVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  UInterchangeShaderNode::GetCustomShaderType((UInterchangeShaderNode *)param_1,&local_28);
  pFVar2 = ::FName::ToString(&UE::Interchange::Materials::SurfaceUnlit::Name,&local_18);
  iVar1 = (pFVar2->Data).ArrayNum;
  if (local_28.Data.ArrayNum == iVar1) {
    if (local_28.Data.ArrayNum < 2) {
      bVar3 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_28.Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar2->Data).AllocatorInstance.Data);
      bVar3 = iVar1 == 0;
    }
  }
  else {
    bVar3 = local_28.Data.ArrayNum + iVar1 == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// IsUnlitModel @ 14e7c7e80

bool __thiscall
UInterchangeGenericMaterialPipeline::IsUnlitModel
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Unlit::Parameters::UnlitColor);
  return bVar1;
}

// PreDialogCleanup @ 14e7d3b20

void __thiscall
UInterchangeGenericMaterialPipeline::PreDialogCleanup
          (UInterchangeGenericMaterialPipeline *this,FName param_1)

{
  UInterchangeGenericTexturePipeline *pUVar1;
  UInterchangeSparseVolumeTexturePipeline *pUVar2;
  UInterchangeGenericMaterialPipeline *pUVar3;
  
  pUVar1 = (this->TexturePipeline).field0_0x0.DebugPtr;
  if (pUVar1 != (UInterchangeGenericTexturePipeline *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2d0))();
  }
  pUVar2 = (this->SparseVolumeTexturePipeline).field0_0x0.DebugPtr;
  if (pUVar2 != (UInterchangeSparseVolumeTexturePipeline *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2d0))(pUVar2,param_1);
  }
  pUVar3 = (UInterchangeGenericMaterialPipeline *)
           UInterchangePipelineBase::GetMostPipelineOuter((UInterchangePipelineBase *)this);
  if (this == pUVar3) {
    UInterchangePipelineBase::SaveSettings((UInterchangePipelineBase *)this,param_1);
  }
  return;
}

// SetReimportSourceIndex @ 14e7df7f0

void __thiscall
UInterchangeGenericMaterialPipeline::SetReimportSourceIndex
          (UInterchangeGenericMaterialPipeline *this,UClass *param_1,int param_2)

{
  UInterchangeGenericTexturePipeline *this_00;
  UInterchangeSparseVolumeTexturePipeline *this_01;
  
  this_00 = (this->TexturePipeline).field0_0x0.DebugPtr;
  if (this_00 != (UInterchangeGenericTexturePipeline *)0x0) {
    UInterchangePipelineBase::ScriptedSetReimportSourceIndex
              ((UInterchangePipelineBase *)this_00,param_1,param_2);
  }
  this_01 = (this->SparseVolumeTexturePipeline).field0_0x0.DebugPtr;
  if (this_01 != (UInterchangeSparseVolumeTexturePipeline *)0x0) {
    UInterchangePipelineBase::ScriptedSetReimportSourceIndex
              ((UInterchangePipelineBase *)this_01,param_1,param_2);
  }
  return;
}

// StaticRegisterNativesUInterchangeGenericMaterialPipeline @ 14e7e4650

void __cdecl
UInterchangeGenericMaterialPipeline::StaticRegisterNativesUInterchangeGenericMaterialPipeline(void)

{
  return;
}

// VisitScalarParameterNode @ 14e7e8d70

void __thiscall
UInterchangeGenericMaterialPipeline::VisitScalarParameterNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeMaterialInstanceFactoryNode *param_2)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  float local_res20 [2];
  FString local_28;
  FString local_18;
  
  bVar1 = UInterchangeShaderPortsAPI::HasParameter
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Standard::Nodes::ScalarParameter::Attributes::
                      DefaultValue);
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::ScalarParameter::
                              Attributes::DefaultValue,&local_18);
  if (bVar1) {
    UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_28,pFVar3);
  }
  else {
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_28,pFVar3);
  }
  bVar2 = UInterchangeBaseNode::GetFloatAttribute
                    ((UInterchangeBaseNode *)param_1,&local_28,local_res20);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pFVar3 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_18);
    if (bVar1) {
      UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_28,pFVar3);
    }
    else {
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_28,pFVar3);
    }
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)param_2,&local_28,local_res20);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// VisitShaderGraphNode @ 14e7e8e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeGenericMaterialPipeline::VisitShaderGraphNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderGraphNode *param_1,
          UInterchangeMaterialInstanceFactoryNode *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_b0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  UInterchangeShaderPortsAPI::GatherInputs((UInterchangeBaseNode *)param_1,&local_b0);
  iVar1 = local_b0.ArrayNum;
  pFVar3 = local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayNum * 0x10;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  FVar2.Data = local_b0.AllocatorInstance.Data;
  while( true ) {
    if (local_b0.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (FVar2.Data == pFVar3) break;
    VisitShaderInput(this,(UInterchangeShaderNode *)param_1,param_2,(FString *)FVar2.Data,
                     (TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
                      *)local_98);
    FVar2.Data = FVar2.Data + 0x10;
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  DestructItems<FString,int>((FString *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum);
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return;
}

// VisitShaderInput @ 14e7e9000

void __thiscall
UInterchangeGenericMaterialPipeline::VisitShaderInput
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeMaterialInstanceFactoryNode *param_2,FString *param_3,
          TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
          *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  UInterchangeShaderNode **ppUVar5;
  FName *pFVar6;
  FName FVar7;
  UClass *pUVar8;
  int iVar9;
  FLinearColor_u_0 local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ppUVar5 = TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
            ::Find(param_4,param_1);
  if (ppUVar5 != (UInterchangeShaderNode **)0x0) {
    return;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  pFVar6 = ::FName::FName((FName *)&local_58,iVar9,(wchar_t *)(param_3->Data).AllocatorInstance.Data
                          ,FNAME_Add);
  local_68._0_8_ = *pFVar6;
  bVar2 = UInterchangeShaderPortsAPI::HasParameter
                    ((UInterchangeBaseNode *)param_1,(FName *)&local_68._s_0);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar3 = UInterchangeShaderPortsAPI::GetInputConnection
                    ((UInterchangeBaseNode *)param_1,param_3,&local_48,&local_38);
  if (bVar3) {
    FVar7 = (FName)UInterchangeBaseNodeContainer::GetNode
                             ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_48);
    if (FVar7 != (FName)0x0) {
      pUVar8 = Z_Construct_UClass_UInterchangeShaderNode_NoRegister();
      iVar9 = (int)pUVar8->_padding_;
      if (((iVar9 <= *(int *)(*(longlong *)((longlong)FVar7 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)((longlong)FVar7 + 0x10) + 0x30) + (longlong)iVar9 * 8) ==
           &pUVar8->_padding_)) &&
         (local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar7,
         ppUVar5 = TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
                   ::Find(param_4,(UInterchangeShaderNode *)FVar7),
         ppUVar5 == (UInterchangeShaderNode **)0x0)) {
        VisitShaderNode(this,(UInterchangeShaderNode *)FVar7,param_2,param_4);
        TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
        ::Emplace<UInterchangeShaderNode_const_*_&>
                  (param_4,(UInterchangeShaderNode **)&local_68,(bool *)&local_58);
      }
    }
    goto LAB_14e7e9234;
  }
  EVar4 = UInterchangeShaderPortsAPI::GetInputType((UInterchangeBaseNode *)param_1,param_3,bVar2);
  if (EVar4 == Float) {
    if (bVar2) {
      UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_58,param_3);
    }
    else {
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_58,param_3);
    }
    bVar3 = UInterchangeBaseNode::GetFloatAttribute
                      ((UInterchangeBaseNode *)param_1,&local_58,local_68.RGBA);
    if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_14e7e9234;
    if (bVar2) {
      UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_58,param_3);
    }
    else {
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_58,param_3);
    }
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)param_2,&local_58,local_68.RGBA)
    ;
  }
  else {
    if (EVar4 != LinearColor) goto LAB_14e7e9234;
    if (bVar2) {
      UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_58,param_3);
    }
    else {
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_58,param_3);
    }
    bVar3 = UInterchangeBaseNode::GetLinearColorAttribute
                      ((UInterchangeBaseNode *)param_1,&local_58,(FLinearColor *)&local_68._s_0);
    if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_14e7e9234;
    if (bVar2) {
      UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_58,param_3);
    }
    else {
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_58,param_3);
    }
    UInterchangeBaseNode::AddLinearColorAttribute
              ((UInterchangeBaseNode *)param_2,&local_58,(FLinearColor *)&local_68._s_0);
  }
  if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14e7e9234:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitShaderNode @ 14e7e9280

void __thiscall
UInterchangeGenericMaterialPipeline::VisitShaderNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeMaterialInstanceFactoryNode *param_2,
          TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
          *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_78 [4];
  float local_74;
  TArray<FString,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  FString local_50;
  FLinearColor local_40;
  
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  bVar2 = UInterchangeShaderNode::GetCustomShaderType(param_1,(FString *)&local_70);
  if (bVar2) {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_70.ArrayNum != 0) {
      FVar5.Data = local_70.AllocatorInstance.Data;
    }
    bVar2 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::ScalarParameter::Name,
                            (wchar_t *)FVar5.Data);
    if (bVar2) {
      bVar2 = UInterchangeShaderPortsAPI::HasParameter
                        ((UInterchangeBaseNode *)param_1,
                         &UE::Interchange::Materials::Standard::Nodes::ScalarParameter::Attributes::
                          DefaultValue);
      pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::ScalarParameter::
                                  Attributes::DefaultValue,&local_50);
      if (bVar2) {
        UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_60,pFVar4);
      }
      else {
        UInterchangeShaderPortsAPI::MakeInputValueKey(&local_60,pFVar4);
      }
      bVar3 = UInterchangeBaseNode::GetFloatAttribute
                        ((UInterchangeBaseNode *)param_1,&local_60,&local_74);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (!bVar3) goto LAB_14e7e9524;
      pFVar4 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_50);
      if (bVar2) {
        UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_60,pFVar4);
      }
      else {
        UInterchangeShaderPortsAPI::MakeInputValueKey(&local_60,pFVar4);
      }
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)param_2,&local_60,&local_74);
    }
    else {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_70.ArrayNum != 0) {
        FVar5.Data = local_70.AllocatorInstance.Data;
      }
      bVar2 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::TextureSample::Name,
                              (wchar_t *)FVar5.Data);
      if (bVar2) {
        VisitTextureSampleNode(this,param_1,param_2);
        goto LAB_14e7e9524;
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_70.ArrayNum != 0) {
        FVar5.Data = local_70.AllocatorInstance.Data;
      }
      bVar2 = ::FName::Equals(UE::Interchange::Materials::Standard::Nodes::VectorParameter::Name,
                              (wchar_t *)FVar5.Data);
      if (!bVar2) goto LAB_14e7e94a0;
      bVar2 = UInterchangeShaderPortsAPI::HasParameter
                        ((UInterchangeBaseNode *)param_1,
                         &UE::Interchange::Materials::Standard::Nodes::VectorParameter::Attributes::
                          DefaultValue);
      pFVar4 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::VectorParameter::
                                  Attributes::DefaultValue,&local_50);
      if (bVar2) {
        UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_60,pFVar4);
      }
      else {
        UInterchangeShaderPortsAPI::MakeInputValueKey(&local_60,pFVar4);
      }
      bVar2 = UInterchangeBaseNode::GetLinearColorAttribute
                        ((UInterchangeBaseNode *)param_1,&local_60,&local_40);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (!bVar2) goto LAB_14e7e9524;
      pFVar4 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_50);
      UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_60,pFVar4);
      UInterchangeBaseNode::AddLinearColorAttribute
                ((UInterchangeBaseNode *)param_2,&local_60,&local_40);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  else {
LAB_14e7e94a0:
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    UInterchangeShaderPortsAPI::GatherInputs((UInterchangeBaseNode *)param_1,&local_70);
    iVar1 = local_70.ArrayNum;
    pFVar6 = local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 0x10;
    FVar5.Data = local_70.AllocatorInstance.Data;
    while( true ) {
      if (local_70.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_78)
        ;
      }
      if (FVar5.Data == pFVar6) break;
      VisitShaderInput(this,param_1,param_2,(FString *)FVar5.Data,param_3);
      FVar5.Data = FVar5.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
  }
LAB_14e7e9524:
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// VisitTextureSampleNode @ 14e7e9560

void __thiscall
UInterchangeGenericMaterialPipeline::VisitTextureSampleNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeMaterialInstanceFactoryNode *param_2)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  UInterchangeBaseNode *this_00;
  UClass *pUVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar1 = UInterchangeShaderPortsAPI::HasParameter
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Standard::Nodes::TextureSample::Inputs::Texture);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar3 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::TextureSample::Inputs::
                              Texture,&local_38);
  if (bVar1) {
    UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_58,pFVar3);
  }
  else {
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_58,pFVar3);
  }
  bVar2 = UInterchangeBaseNode::GetStringAttribute
                    ((UInterchangeBaseNode *)param_1,&local_58,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (1 < local_68.Data.ArrayNum)) {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    this_00 = UInterchangeBaseNodeContainer::GetNode
                        ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_68);
    if (this_00 != (UInterchangeBaseNode *)0x0) {
      pUVar4 = Z_Construct_UClass_UInterchangeTextureNode_NoRegister();
      iVar5 = (int)pUVar4->_padding_;
      if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar4->_padding_)) {
        local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.ArrayNum = 0;
        local_88.ArrayMax = 0;
        UInterchangeBaseNode::GetTargetNodeUids(this_00,&local_88);
        if (0 < local_88.ArrayNum) {
          iVar5 = *(int *)(local_88.AllocatorInstance.Data + 8) + -1;
          if (*(int *)(local_88.AllocatorInstance.Data + 8) == 0) {
            iVar5 = 0;
          }
          ::FString::AssignRange(&local_78,*(wchar_t **)local_88.AllocatorInstance.Data,iVar5);
          pFVar3 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_28);
          if (bVar1) {
            UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_48,pFVar3);
          }
          else {
            UInterchangeShaderPortsAPI::MakeInputValueKey(&local_48,pFVar3);
          }
          UInterchangeBaseNode::AddStringAttribute
                    ((UInterchangeBaseNode *)param_2,&local_48,&local_78);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                    ((UInterchangeFactoryBaseNode *)param_2,&local_78);
        }
        DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitVectorParameterNode @ 14e7e9760

void __thiscall
UInterchangeGenericMaterialPipeline::VisitVectorParameterNode
          (UInterchangeGenericMaterialPipeline *this,UInterchangeShaderNode *param_1,
          UInterchangeMaterialInstanceFactoryNode *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString local_38;
  FString local_28;
  FLinearColor local_18;
  
  bVar1 = UInterchangeShaderPortsAPI::HasParameter
                    ((UInterchangeBaseNode *)param_1,
                     &UE::Interchange::Materials::Standard::Nodes::VectorParameter::Attributes::
                      DefaultValue);
  pFVar2 = ::FName::ToString(&UE::Interchange::Materials::Standard::Nodes::VectorParameter::
                              Attributes::DefaultValue,&local_28);
  if (bVar1) {
    UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_38,pFVar2);
  }
  else {
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_38,pFVar2);
  }
  bVar1 = UInterchangeBaseNode::GetLinearColorAttribute
                    ((UInterchangeBaseNode *)param_1,&local_38,&local_18);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    pFVar2 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_28);
    UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_38,pFVar2);
    UInterchangeBaseNode::AddLinearColorAttribute
              ((UInterchangeBaseNode *)param_2,&local_38,&local_18);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

