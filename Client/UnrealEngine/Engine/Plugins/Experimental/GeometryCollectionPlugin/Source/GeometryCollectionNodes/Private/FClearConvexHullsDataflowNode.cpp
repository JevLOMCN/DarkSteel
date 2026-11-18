// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8bba40

UScriptStruct * __cdecl FClearConvexHullsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode,(UObject *)pUVar1,
                         L"ClearConvexHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton;
}

// GetType @ 14e8bbfb0

FName __thiscall FClearConvexHullsDataflowNode::GetType(FClearConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FClearConvexHullsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8bbfe0

bool __thiscall
FClearConvexHullsDataflowNode::IsA(FClearConvexHullsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FClearConvexHullsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8bc048;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8bc048:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8bc066;
      }
    }
  }
  bVar5 = true;
LAB_14e8bc066:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8bc0f0

FStructOnScope * __thiscall
FClearConvexHullsDataflowNode::NewStructOnScope(FClearConvexHullsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode,(UObject *)pUVar2
                           ,L"ClearConvexHullsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8bc170

void __thiscall
FClearConvexHullsDataflowNode::SerializeInternal
          (FClearConvexHullsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode,(UObject *)pUVar1,
                         L"ClearConvexHullsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8bc1ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8bc200

FName __thiscall FClearConvexHullsDataflowNode::GetDisplayName(FClearConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ClearConvexHulls");
  return in_RDX;
}

// GetCategory @ 14e8bc230

FName __thiscall FClearConvexHullsDataflowNode::GetCategory(FClearConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8bc260

FString * __thiscall
FClearConvexHullsDataflowNode::GetTags
          (FClearConvexHullsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8bc2c0

UScriptStruct * __thiscall
FClearConvexHullsDataflowNode::TypedScriptStruct(FClearConvexHullsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode,(UObject *)pUVar1,
                         L"ClearConvexHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClearConvexHullsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8bc360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FClearConvexHullsDataflowNode::Evaluate
          (FClearConvexHullsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  bool bVar2;
  undefined1 *puVar3;
  FManagedArrayCollection *pFVar4;
  FDataflowInput *pFVar5;
  FDataflowSelection *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined1 auStack_3a8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_388;
  FConnectionReference local_378;
  FCollectionTransformSelectionFacade local_358;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  pFVar1 = &this->Collection;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar3 == pFVar1) {
    pFVar4 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
    FManagedArrayCollection::FManagedArrayCollection(&local_e8,pFVar4);
    local_378.ContainerReference = (void *)0x0;
    local_378.Index = -1;
    local_378.Reference = pFVar1;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_378);
    if ((pFVar5->Connection == (FDataflowOutput *)0x0) ||
       (bVar2 = FGeometryCollectionConvexUtility::HasConvexHullData(&local_e8), !bVar2)) {
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_e8,pFVar1);
    }
    else {
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_358,&local_e8);
      local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.ArrayNum = 0;
      local_388.ArrayMax = 0;
      local_378.Index = -1;
      local_378.ContainerReference = (void *)0x0;
      local_378.Reference = &this->TransformSelection;
      pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_378);
      if (pFVar5->Connection == (FDataflowOutput *)0x0) {
        pTVar6 = GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
                           (&local_358,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_378);
        if (&local_388 != pTVar6) {
          if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.AllocatorInstance.Data);
          }
          local_388.AllocatorInstance.Data = (pTVar6->AllocatorInstance).Data;
          (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_388.ArrayNum = pTVar6->ArrayNum;
          local_388.ArrayMax = pTVar6->ArrayMax;
          pTVar6->ArrayNum = 0;
          pTVar6->ArrayMax = 0;
        }
        if (local_378.Reference != (FManagedArrayCollection *)0x0) {
          FMemory::Free(local_378.Reference);
        }
      }
      else {
        this_00 = (FDataflowSelection *)
                  FDataflowNode::GetValue<FDataflowTransformSelection>
                            ((FDataflowNode *)this,param_1,&this->TransformSelection);
        pTVar6 = FDataflowSelection::AsArray
                           (this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_378);
        if (&local_388 != pTVar6) {
          if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.AllocatorInstance.Data);
          }
          local_388.AllocatorInstance.Data = (pTVar6->AllocatorInstance).Data;
          (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_388.ArrayNum = pTVar6->ArrayNum;
          local_388.ArrayMax = pTVar6->ArrayMax;
          pTVar6->ArrayNum = 0;
          pTVar6->ArrayMax = 0;
        }
        if (local_378.Reference != (FManagedArrayCollection *)0x0) {
          FMemory::Free(local_378.Reference);
        }
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
                  (&local_358,&local_388,false);
      }
      FGeometryCollectionConvexUtility::RemoveConvexHulls(&local_e8,&local_388);
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_e8,pFVar1);
      if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.AllocatorInstance.Data);
      }
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
    return;
  }
  return;
}

// FClearConvexHullsDataflowNode @ 14e9141b0

FClearConvexHullsDataflowNode * __thiscall
FClearConvexHullsDataflowNode::FClearConvexHullsDataflowNode
          (FClearConvexHullsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FClearConvexHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_58);
  }
  return this;
}

