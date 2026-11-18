// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8bf430

UScriptStruct * __cdecl FCopyConvexHullsFromRootDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCopyConvexHullsFromRootDataflowNode,
                         (UObject *)pUVar1,L"CopyConvexHullsFromRootDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton;
}

// GetType @ 14e8bf520

FName __thiscall
FCopyConvexHullsFromRootDataflowNode::GetType(FCopyConvexHullsFromRootDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCopyConvexHullsFromRootDataflowNode");
  return in_RDX;
}

// IsA @ 14e8bf550

bool __thiscall
FCopyConvexHullsFromRootDataflowNode::IsA(FCopyConvexHullsFromRootDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCopyConvexHullsFromRootDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8bf5b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8bf5b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8bf5d6;
      }
    }
  }
  bVar5 = true;
LAB_14e8bf5d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8bf640

FStructOnScope * __thiscall
FCopyConvexHullsFromRootDataflowNode::NewStructOnScope(FCopyConvexHullsFromRootDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCopyConvexHullsFromRootDataflowNode,
                           (UObject *)pUVar2,L"CopyConvexHullsFromRootDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8bf7a0

void __thiscall
FCopyConvexHullsFromRootDataflowNode::SerializeInternal
          (FCopyConvexHullsFromRootDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCopyConvexHullsFromRootDataflowNode,
                         (UObject *)pUVar1,L"CopyConvexHullsFromRootDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8bf81d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8bf8f0

FName __thiscall
FCopyConvexHullsFromRootDataflowNode::GetDisplayName(FCopyConvexHullsFromRootDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CopyConvexHullsFromRoot");
  return in_RDX;
}

// GetCategory @ 14e8bf960

FName __thiscall
FCopyConvexHullsFromRootDataflowNode::GetCategory(FCopyConvexHullsFromRootDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8bfa50

FString * __thiscall
FCopyConvexHullsFromRootDataflowNode::GetTags
          (FCopyConvexHullsFromRootDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8bfb10

UScriptStruct * __thiscall
FCopyConvexHullsFromRootDataflowNode::TypedScriptStruct(FCopyConvexHullsFromRootDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCopyConvexHullsFromRootDataflowNode,
                         (UObject *)pUVar1,L"CopyConvexHullsFromRootDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCopyConvexHullsFromRootDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8bfdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCopyConvexHullsFromRootDataflowNode::Evaluate
          (FCopyConvexHullsFromRootDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  bool bVar2;
  bool bVar3;
  undefined1 *puVar4;
  FManagedArrayCollection *pFVar5;
  FDataflowInput *pFVar6;
  bool *pbVar7;
  undefined1 auStack_628 [32];
  FConnectionReference local_5f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_5e0;
  FCollectionTransformSelectionFacade local_5c8;
  FCollectionTransformSelectionFacade local_358;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_628;
  pFVar1 = &this->Collection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar4 != pFVar1) {
    return;
  }
  pFVar5 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
  FManagedArrayCollection::FManagedArrayCollection(&local_e8,pFVar5);
  local_5f8.Index = -1;
  local_5f8.ContainerReference = (void *)0x0;
  local_5f8.Reference = pFVar1;
  pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5f8);
  if (pFVar6->Connection != (FDataflowOutput *)0x0) {
    local_5f8.Index = -1;
    local_5f8.ContainerReference = (void *)0x0;
    local_5f8.Reference = &this->FromCollection;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5f8);
    if (pFVar6->Connection != (FDataflowOutput *)0x0) {
      pFVar5 = FDataflowNode::GetValue<FManagedArrayCollection>
                         ((FDataflowNode *)this,param_1,&this->FromCollection);
      local_5f8.Reference = &this->bSkipIfEmpty;
      local_5f8.Index = -1;
      local_5f8.ContainerReference = (void *)0x0;
      pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5f8);
      pbVar7 = FDataflowInput::GetValue<bool>(pFVar6,param_1,local_5f8.Reference);
      bVar2 = *pbVar7;
      bVar3 = FGeometryCollectionConvexUtility::HasConvexHullData(pFVar5);
      if (bVar3) {
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        FCollectionTransformSelectionFacade(&local_358,&local_e8);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectRootBones
                  (&local_358,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_5f8);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        FCollectionTransformSelectionFacade(&local_5c8,pFVar5);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectRootBones
                  (&local_5c8,&local_5e0);
        if (local_5f8.Index == local_5e0.ArrayNum) {
          FGeometryCollectionConvexUtility::CopyConvexHulls
                    (&local_e8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_5f8,pFVar5,
                     &local_5e0,bVar2);
        }
        else if (2 < (byte)LogChaosDataflow._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
        }
        if (local_5e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5e0.AllocatorInstance.Data);
        }
      }
      else {
        if (bVar2 != false) goto LAB_14e8c0014;
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        FCollectionTransformSelectionFacade(&local_5c8,&local_e8);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectRootBones
                  (&local_5c8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_5f8);
        FGeometryCollectionConvexUtility::RemoveConvexHulls
                  (&local_e8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_5f8);
      }
      if (local_5f8.Reference != (FManagedArrayCollection *)0x0) {
        FMemory::Free(local_5f8.Reference);
      }
    }
  }
LAB_14e8c0014:
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_e8,pFVar1);
  FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
  return;
}

// FCopyConvexHullsFromRootDataflowNode @ 14e91a000

FCopyConvexHullsFromRootDataflowNode * __thiscall
FCopyConvexHullsFromRootDataflowNode::FCopyConvexHullsFromRootDataflowNode
          (FCopyConvexHullsFromRootDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FLinearColor FVar2;
  FDataflowInput *pFVar3;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCopyConvexHullsFromRootDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  FManagedArrayCollection::FManagedArrayCollection(&this->FromCollection);
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  this->bSkipIfEmpty = true;
  FVar2 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->bRandomizeColor = true;
  this->ColorRandomSeed = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->FromCollection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->bSkipIfEmpty;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_58,&local_res8);
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_58);
  }
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 2.0;
  return this;
}

// FCopyConvexHullsFromRootDataflowNode @ 14e91a190

FCopyConvexHullsFromRootDataflowNode * __thiscall
FCopyConvexHullsFromRootDataflowNode::FCopyConvexHullsFromRootDataflowNode
          (FCopyConvexHullsFromRootDataflowNode *this)

{
  FLinearColor FVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCopyConvexHullsFromRootDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  FManagedArrayCollection::FManagedArrayCollection(&this->FromCollection);
  this->bSkipIfEmpty = true;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  FVar1 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->bRandomizeColor = true;
  this->ColorRandomSeed = 0;
  return this;
}

