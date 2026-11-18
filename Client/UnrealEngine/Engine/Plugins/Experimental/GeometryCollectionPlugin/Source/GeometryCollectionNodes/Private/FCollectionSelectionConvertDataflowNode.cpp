// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e861c10

UScriptStruct * __cdecl FCollectionSelectionConvertDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionConvertDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.OuterSingleton;
}

// GetType @ 14e861ee0

FName __thiscall
FCollectionSelectionConvertDataflowNode::GetType(FCollectionSelectionConvertDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionSelectionConvertDataflowNode");
  return in_RDX;
}

// IsA @ 14e861f50

bool __thiscall
FCollectionSelectionConvertDataflowNode::IsA
          (FCollectionSelectionConvertDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionSelectionConvertDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e861fb8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e861fb8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e861fd6;
      }
    }
  }
  bVar5 = true;
LAB_14e861fd6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e862010

FStructOnScope * __thiscall
FCollectionSelectionConvertDataflowNode::NewStructOnScope
          (FCollectionSelectionConvertDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode,
                           (UObject *)pUVar2,L"CollectionSelectionConvertDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e862090

void __thiscall
FCollectionSelectionConvertDataflowNode::SerializeInternal
          (FCollectionSelectionConvertDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionConvertDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86210d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e862120

FName __thiscall
FCollectionSelectionConvertDataflowNode::GetDisplayName
          (FCollectionSelectionConvertDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionSelectionConvert");
  return in_RDX;
}

// GetCategory @ 14e862150

FName __thiscall
FCollectionSelectionConvertDataflowNode::GetCategory(FCollectionSelectionConvertDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection");
  return in_RDX;
}

// GetTags @ 14e862180

FString * __thiscall
FCollectionSelectionConvertDataflowNode::GetTags
          (FCollectionSelectionConvertDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8621b0

UScriptStruct * __thiscall
FCollectionSelectionConvertDataflowNode::TypedScriptStruct
          (FCollectionSelectionConvertDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionConvertDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectionConvertDataflowNode.OuterSingleton;
}

// Evaluate @ 14e862480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionSelectionConvertDataflowNode::Evaluate
          (FCollectionSelectionConvertDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowTransformSelection *pFVar1;
  FDataflowVertexSelection *pFVar2;
  FDataflowFaceSelection *pFVar3;
  FProperty *pFVar4;
  void *pvVar5;
  bool bVar6;
  uint uVar7;
  undefined1 *puVar8;
  FDataflowInput *pFVar9;
  FManagedArrayCollection *pFVar10;
  FDataflowSelection *pFVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  FDataflowOutput *pFVar13;
  FTimestamp FVar14;
  FGuid *pFVar15;
  ulong64 uVar16;
  undefined1 auStackY_378 [32];
  undefined1 local_338 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_330;
  FConnectionReference local_320;
  TArray<int,TSizedDefaultAllocator<32>_> local_308;
  FConnectionReference local_2f8;
  FCollectionTransformSelectionFacade local_2d8;
  undefined1 local_68 [24];
  ForElementType<unsigned_int> local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pFVar1 = &this->TransformSelection;
  pFVar2 = &this->VertexSelection;
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar8 == pFVar1) {
    local_320.ContainerReference = (void *)0x0;
    local_320.Index = -1;
    local_320.Reference = pFVar2;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_320);
    if (pFVar9->Connection == (FDataflowOutput *)0x0) {
      local_320.Index = -1;
      local_320.ContainerReference = (void *)0x0;
      local_320.Reference = &this->FaceSelection;
      pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_320);
      if (pFVar9->Connection == (FDataflowOutput *)0x0) {
        local_320.Index = -1;
        local_320.ContainerReference = (void *)0x0;
        local_320.Reference = pFVar1;
        pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_320);
        if (pFVar9->Connection != (FDataflowOutput *)0x0) {
          local_2f8.Index = -1;
          local_2f8.ContainerReference = (void *)0x0;
          local_2f8.Reference = pFVar1;
          FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_320,&local_2f8);
          return;
        }
        local_308.AllocatorInstance.Data = local_320.Reference;
        local_68._8_4_ = -1;
        local_68._16_8_ = (void *)0x0;
        local_68._0_8_ = pFVar1;
        pFVar13 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)local_68);
        if (pFVar13 != (FDataflowOutput *)0x0) {
          if (pFVar13->_padding_ == 0) {
            return;
          }
          FVar14 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar13);
          uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar13);
          pFVar15 = FDataflowConnection::GetOwningNodeGuid
                              ((FDataflowConnection *)pFVar13,(FGuid *)&local_2f8);
          pFVar4 = (FProperty *)pFVar13->_padding_;
          uVar16 = CityHash64((char *)&pFVar13->_padding_,0x10);
          UE::Dataflow::FContext::SetData<FDataflowTransformSelection_const_&>
                    (param_1,(uint)uVar16,pFVar4,
                     (FDataflowTransformSelection *)local_308.AllocatorInstance.Data,pFVar15,uVar7,
                     (FTimestamp *)FVar14.Value);
          return;
        }
        `FDataflowNode::SetValue<FDataflowTransformSelection_const_&,FDataflowTransformSelection>'::
        __l7::<lambda_1>::operator()(local_338);
        return;
      }
      pFVar10 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,&this->Collection);
      pFVar11 = (FDataflowSelection *)
                FDataflowNode::GetValue<FDataflowFaceSelection>
                          ((FDataflowNode *)this,param_1,&this->FaceSelection);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_2d8,pFVar10);
      bVar6 = this->bAllElementsMustBeSelected;
      pTVar12 = FDataflowSelection::AsArray(pFVar11,&local_308);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      ConvertFaceSelectionToTransformSelection(&local_2d8,&local_330,pTVar12,bVar6);
    }
    else {
      pFVar10 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,&this->Collection);
      pFVar11 = (FDataflowSelection *)
                FDataflowNode::GetValue<FDataflowVertexSelection>
                          ((FDataflowNode *)this,param_1,pFVar2);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_2d8,pFVar10);
      bVar6 = this->bAllElementsMustBeSelected;
      pTVar12 = FDataflowSelection::AsArray(pFVar11,&local_308);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      ConvertVertexSelectionToTransformSelection(&local_2d8,&local_330,pTVar12,bVar6);
    }
    if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.AllocatorInstance.Data);
    }
    local_68._0_4_ = FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
    local_68._4_4_ = FDataflowTransformSelection::TransformGroupName.Number;
    local_50 = (ForElementType<unsigned_int>)0x0;
    local_48 = 0;
    local_44 = 0x80;
    FDataflowSelection::InitializeFromCollection((FDataflowSelection *)local_68,pFVar10,false);
    FDataflowSelection::SetFromArray((FDataflowSelection *)local_68,&local_330);
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)local_68,pFVar1);
  }
  else {
    pFVar3 = &this->FaceSelection;
    puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FDataflowFaceSelection *)puVar8 == pFVar3) {
      local_68._16_8_ = (void *)0x0;
      local_68._8_4_ = -1;
      local_68._0_8_ = pFVar2;
      pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_68);
      if (pFVar9->Connection == (FDataflowOutput *)0x0) {
        local_68._8_4_ = -1;
        local_68._16_8_ = (void *)0x0;
        local_68._0_8_ = pFVar1;
        pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_68);
        if (pFVar9->Connection == (FDataflowOutput *)0x0) {
          local_320.Index = -1;
          local_320.ContainerReference = (void *)0x0;
          local_320.Reference = pFVar3;
          pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_320);
          pvVar5 = local_320.Reference;
          local_68._8_4_ = -1;
          local_68._16_8_ = (void *)0x0;
          local_68._0_8_ = pFVar3;
          if (pFVar9->Connection == (FDataflowOutput *)0x0) {
            pFVar13 = FDataflowNode::FindOutput
                                ((FDataflowNode *)this,(FConnectionReference *)local_68);
            if (pFVar13 == (FDataflowOutput *)0x0) {
              `FDataflowNode::SetValue<FDataflowFaceSelection_const_&,FDataflowFaceSelection>'::__l7
              ::<lambda_1>::operator()(local_338);
              return;
            }
            if (pFVar13->_padding_ == 0) {
              return;
            }
            FVar14 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar13);
            uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar13);
            pFVar15 = FDataflowConnection::GetOwningNodeGuid
                                ((FDataflowConnection *)pFVar13,(FGuid *)&local_2f8);
            pFVar4 = (FProperty *)pFVar13->_padding_;
            uVar16 = CityHash64((char *)&pFVar13->_padding_,0x10);
            UE::Dataflow::FContext::SetData<FDataflowFaceSelection_const_&>
                      (param_1,(uint)uVar16,pFVar4,pvVar5,pFVar15,uVar7,(FTimestamp *)FVar14.Value);
            return;
          }
LAB_14e862961:
          local_68._16_8_ = (void *)0x0;
          local_68._8_4_ = -1;
          FDataflowNode::ForwardInput
                    ((FDataflowNode *)this,param_1,&local_320,(FConnectionReference *)local_68);
          return;
        }
        pFVar10 = FDataflowNode::GetValue<FManagedArrayCollection>
                            ((FDataflowNode *)this,param_1,&this->Collection);
        pFVar11 = (FDataflowSelection *)
                  FDataflowNode::GetValue<FDataflowTransformSelection>
                            ((FDataflowNode *)this,param_1,pFVar1);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        FCollectionTransformSelectionFacade(&local_2d8,pFVar10);
        pTVar12 = FDataflowSelection::AsArray(pFVar11,&local_308);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        ConvertTransformSelectionToFaceSelection(&local_2d8,&local_330,pTVar12);
        if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.AllocatorInstance.Data);
        }
      }
      else {
        pFVar10 = FDataflowNode::GetValue<FManagedArrayCollection>
                            ((FDataflowNode *)this,param_1,&this->Collection);
        pFVar11 = (FDataflowSelection *)
                  FDataflowNode::GetValue<FDataflowVertexSelection>
                            ((FDataflowNode *)this,param_1,pFVar2);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        FCollectionTransformSelectionFacade(&local_2d8,pFVar10);
        bVar6 = this->bAllElementsMustBeSelected;
        pTVar12 = FDataflowSelection::AsArray(pFVar11,&local_308);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        ConvertVertexSelectionToFaceSelection(&local_2d8,&local_330,pTVar12,bVar6);
        if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.AllocatorInstance.Data);
        }
      }
      local_68._0_4_ = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
      local_68._4_4_ = FDataflowFaceSelection::FacesGroupName.Number;
      local_44 = 0x80;
      local_48 = 0;
      local_50 = (ForElementType<unsigned_int>)0x0;
      FDataflowSelection::InitializeFromCollection((FDataflowSelection *)local_68,pFVar10,false);
      FDataflowSelection::SetFromArray((FDataflowSelection *)local_68,&local_330);
      FDataflowNode::SetValue<FDataflowFaceSelection,FDataflowFaceSelection>
                ((FDataflowNode *)this,param_1,(FDataflowFaceSelection *)local_68,pFVar3);
    }
    else {
      puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      if ((FDataflowVertexSelection *)puVar8 != pFVar2) {
        pFVar10 = &this->Collection;
        puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
        if ((FManagedArrayCollection *)puVar8 != pFVar10) {
          return;
        }
        local_68._16_8_ = (void *)0x0;
        local_68._8_4_ = -1;
        local_68._0_8_ = pFVar10;
        FDataflowNode::SafeForwardInput<FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FConnectionReference *)local_68,pFVar10);
        return;
      }
      local_68._16_8_ = (void *)0x0;
      local_68._8_4_ = -1;
      local_68._0_8_ = pFVar3;
      pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_68);
      if (pFVar9->Connection == (FDataflowOutput *)0x0) {
        bVar6 = FDataflowNode::IsConnected<FDataflowTransformSelection>
                          ((FDataflowNode *)this,pFVar1);
        if (!bVar6) {
          local_320.Index = -1;
          local_320.ContainerReference = (void *)0x0;
          local_320.Reference = pFVar2;
          pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_320);
          pvVar5 = local_320.Reference;
          local_68._8_4_ = -1;
          local_68._16_8_ = (void *)0x0;
          local_68._0_8_ = pFVar2;
          if (pFVar9->Connection == (FDataflowOutput *)0x0) {
            pFVar13 = FDataflowNode::FindOutput
                                ((FDataflowNode *)this,(FConnectionReference *)local_68);
            if (pFVar13 == (FDataflowOutput *)0x0) {
              `FDataflowNode::SetValue<FDataflowVertexSelection_const_&,FDataflowVertexSelection>'::
              __l7::<lambda_1>::operator()(local_338);
              return;
            }
            if (pFVar13->_padding_ == 0) {
              return;
            }
            FVar14 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar13);
            uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar13);
            pFVar15 = FDataflowConnection::GetOwningNodeGuid
                                ((FDataflowConnection *)pFVar13,(FGuid *)&local_2f8);
            pFVar4 = (FProperty *)pFVar13->_padding_;
            uVar16 = CityHash64((char *)&pFVar13->_padding_,0x10);
            UE::Dataflow::FContext::SetData<FDataflowVertexSelection_const_&>
                      (param_1,(uint)uVar16,pFVar4,pvVar5,pFVar15,uVar7,(FTimestamp *)FVar14.Value);
            return;
          }
          goto LAB_14e862961;
        }
        pFVar10 = FDataflowNode::GetValue<FManagedArrayCollection>
                            ((FDataflowNode *)this,param_1,&this->Collection);
        pFVar11 = (FDataflowSelection *)
                  FDataflowNode::GetValue<FDataflowTransformSelection>
                            ((FDataflowNode *)this,param_1,pFVar1);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        FCollectionTransformSelectionFacade(&local_2d8,pFVar10);
        pTVar12 = FDataflowSelection::AsArray(pFVar11,&local_308);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        ConvertTransformSelectionToVertexSelection(&local_2d8,&local_330,pTVar12);
        if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.AllocatorInstance.Data);
        }
      }
      else {
        pFVar10 = FDataflowNode::GetValue<FManagedArrayCollection>
                            ((FDataflowNode *)this,param_1,&this->Collection);
        pFVar11 = (FDataflowSelection *)
                  FDataflowNode::GetValue<FDataflowFaceSelection>
                            ((FDataflowNode *)this,param_1,pFVar3);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        FCollectionTransformSelectionFacade(&local_2d8,pFVar10);
        pTVar12 = FDataflowSelection::AsArray(pFVar11,&local_308);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        ConvertFaceSelectionToVertexSelection(&local_2d8,&local_330,pTVar12);
        if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.AllocatorInstance.Data);
        }
      }
      local_68._0_4_ = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
      local_68._4_4_ = FDataflowVertexSelection::VerticesGroupName.Number;
      local_44 = 0x80;
      local_48 = 0;
      local_50 = (ForElementType<unsigned_int>)0x0;
      FDataflowSelection::InitializeFromCollection((FDataflowSelection *)local_68,pFVar10,false);
      FDataflowSelection::SetFromArray((FDataflowSelection *)local_68,&local_330);
      FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
                ((FDataflowNode *)this,param_1,(FDataflowVertexSelection *)local_68,pFVar2);
    }
  }
  if (local_50 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_50);
  }
  if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.AllocatorInstance.Data);
  }
  return;
}

// FCollectionSelectionConvertDataflowNode @ 14e915980

FCollectionSelectionConvertDataflowNode * __thiscall
FCollectionSelectionConvertDataflowNode::FCollectionSelectionConvertDataflowNode
          (FCollectionSelectionConvertDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  FDataflowFaceSelection *pFVar2;
  FDataflowVertexSelection *pFVar3;
  uint uVar4;
  FDataflowOutput *pFVar5;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionSelectionConvertDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar4 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar4;
  pFVar2 = &this->FaceSelection;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  pFVar3 = &this->VertexSelection;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  uVar4 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&pFVar2->field_0x0 = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar4;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  uVar4 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar3->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar3->field_0x4 = uVar4;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  this->bAllElementsMustBeSelected = false;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar5,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  local_48.Reference = pFVar1;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FDataflowTransformSelection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar5,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar2;
  local_48.Reference = pFVar2;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FDataflowFaceSelection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar5,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar3;
  local_48.Reference = pFVar3;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FDataflowVertexSelection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar5,&local_68);
  }
  return this;
}

// FCollectionSelectionConvertDataflowNode @ 14e915bf0

FCollectionSelectionConvertDataflowNode * __thiscall
FCollectionSelectionConvertDataflowNode::FCollectionSelectionConvertDataflowNode
          (FCollectionSelectionConvertDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionSelectionConvertDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  uVar1 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&(this->FaceSelection).field_0x0 =
       FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FaceSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->VertexSelection).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->VertexSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  this->bAllElementsMustBeSelected = false;
  return this;
}

