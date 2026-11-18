// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e8df3c0

UScriptStruct * __cdecl FGetCollectionAttributeDataTypedDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode,
                         (UObject *)pUVar1,L"GetCollectionAttributeDataTypedDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8df6e0

FName __thiscall
FGetCollectionAttributeDataTypedDataflowNode::GetType
          (FGetCollectionAttributeDataTypedDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetCollectionAttributeDataTypedDataflowNode");
  return in_RDX;
}

// IsA @ 14e8df7a0

bool __thiscall
FGetCollectionAttributeDataTypedDataflowNode::IsA
          (FGetCollectionAttributeDataTypedDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetCollectionAttributeDataTypedDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8df808;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8df808:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8df826;
      }
    }
  }
  bVar5 = true;
LAB_14e8df826:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8df890

FStructOnScope * __thiscall
FGetCollectionAttributeDataTypedDataflowNode::NewStructOnScope
          (FGetCollectionAttributeDataTypedDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode,
                             (UObject *)pUVar2,L"GetCollectionAttributeDataTypedDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8df9c0

void __thiscall
FGetCollectionAttributeDataTypedDataflowNode::SerializeInternal
          (FGetCollectionAttributeDataTypedDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode,
                         (UObject *)pUVar1,L"GetCollectionAttributeDataTypedDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8dfa3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8dfae0

FName __thiscall
FGetCollectionAttributeDataTypedDataflowNode::GetDisplayName
          (FGetCollectionAttributeDataTypedDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetCollectionAttributeDataTyped");
  return in_RDX;
}

// GetCategory @ 14e8dfb10

FName __thiscall
FGetCollectionAttributeDataTypedDataflowNode::GetCategory
          (FGetCollectionAttributeDataTypedDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8dfc00

FString * __thiscall
FGetCollectionAttributeDataTypedDataflowNode::GetTags
          (FGetCollectionAttributeDataTypedDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8dfcb0

UScriptStruct * __thiscall
FGetCollectionAttributeDataTypedDataflowNode::TypedScriptStruct
          (FGetCollectionAttributeDataTypedDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode,
                         (UObject *)pUVar1,L"GetCollectionAttributeDataTypedDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8e0b90

void __thiscall
FGetCollectionAttributeDataTypedDataflowNode::Evaluate
          (FGetCollectionAttributeDataTypedDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  EStandardGroupNameEnum EVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  FManagedArrayCollection *this_00;
  FName FVar8;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  FString *pFVar12;
  FString *pFVar13;
  FDataflowInput *this_01;
  FCollectionAttributeKey *pFVar14;
  FName *pFVar15;
  FManagedBitArrayBase *this_02;
  TManagedArray<float> *pTVar16;
  FDataflowOutput *pFVar17;
  TManagedArray<double> *pTVar18;
  TManagedArray<int> *pTVar19;
  TManagedArray<FString> *pTVar20;
  TManagedArray<UE::Math::TVector<float>_> *pTVar21;
  TManagedArray<UE::Math::TVector<double>_> *pTVar22;
  TManagedArray<FLinearColor> *pTVar23;
  int iVar24;
  wchar_t *pwVar25;
  ForAnyElementType FVar26;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  TArray<double,TSizedDefaultAllocator<32>_> local_c8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_b8;
  FConnectionReference local_a8;
  FGuid local_90;
  FName local_80;
  FString local_78;
  FString local_68;
  FCollectionAttributeKey local_58;
  
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((((TArray<bool,TSizedDefaultAllocator<32>_> *)puVar7 == &this->BoolAttributeData) ||
        (puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
        (TArray<float,TSizedDefaultAllocator<32>_> *)puVar7 == &this->FloatAttributeData)) ||
       (puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<double,TSizedDefaultAllocator<32>_> *)puVar7 == &this->DoubleAttributeData)) ||
      ((puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<int,TSizedDefaultAllocator<32>_> *)puVar7 == &this->Int32AttributeData ||
       (puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<FString,TSizedDefaultAllocator<32>_> *)puVar7 == &this->StringAttributeData)))) ||
     ((puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar7 ==
      &this->Vector3fAttributeData ||
      (puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar7 ==
      &this->Vector3dAttributeData)))) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    EVar1 = this->GroupName;
    if (EVar1 == Dataflow_EStandardGroupNameEnum_Custom) {
      if ((this->CustomGroupName).Data.ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(this->CustomGroupName).Data.AllocatorInstance.Data;
      }
      pFVar15 = ::FName::FName(&local_res8,pwVar25);
      local_80 = *pFVar15;
    }
    else {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      local_80 = FTransformCollection::TransformGroup;
      if (((EVar1 != Dataflow_EStandardGroupNameEnum_Transform) &&
          (local_80 = FGeometryCollection::GeometryGroup,
          EVar1 != Dataflow_EStandardGroupNameEnum_Geometry)) &&
         ((local_80 = FGeometryCollection::FacesGroup,
          EVar1 != Dataflow_EStandardGroupNameEnum_Faces &&
          (((local_80 = FGeometryCollection::VerticesGroup,
            EVar1 != Dataflow_EStandardGroupNameEnum_Vertices &&
            (local_80 = FGeometryCollection::MaterialGroup,
            EVar1 != Dataflow_EStandardGroupNameEnum_Material)) &&
           (local_80.ComparisonIndex.Value = 0, local_80.Number = 0,
           EVar1 == Dataflow_EStandardGroupNameEnum_Breaking)))))) {
        local_80 = FGeometryCollection::BreakingGroup;
      }
    }
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    FDataflowNode::
    SetValue<TArray<bool,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_b8,&this->BoolAttributeData);
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    FDataflowNode::
    SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,(TArray<float,TSizedDefaultAllocator<32>_> *)&local_b8,
               &this->FloatAttributeData);
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    local_a8.Reference = &this->DoubleAttributeData;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    FVar26.Data = (FScriptContainerElement *)0x0;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Index = -1;
    local_a8.ContainerReference = (void *)0x0;
    FVar8 = (FName)FDataflowNode::FindOutput((FDataflowNode *)this,&local_a8);
    local_res8 = FVar8;
    if (FVar8 == (FName)0x0) {
      `FDataflowNode::
      SetValue<TArray<double,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>'
      ::__l7::<lambda_1>::operator()(&local_res8);
    }
    else {
      FVar26.Data = (FScriptContainerElement *)0x0;
      if (*(longlong *)((longlong)FVar8 + 0x10) != 0) {
        FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)FVar8);
        uVar5 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)FVar8);
        pFVar10 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)FVar8,&local_90);
        pFVar2 = *(FProperty **)((longlong)FVar8 + 0x10);
        uVar11 = CityHash64((char *)((longlong)local_res8 + 0x18),0x10);
        UE::Dataflow::FContext::SetData<TArray<double,TSizedDefaultAllocator<32>_>_>
                  (param_1,(uint)uVar11,pFVar2,&local_c8,pFVar10,uVar5,(FTimestamp *)FVar9.Value);
        FVar26.Data = local_c8.AllocatorInstance.Data;
      }
    }
    if (FVar26.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar26.Data);
    }
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_c8,
               &this->Int32AttributeData);
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    FDataflowNode::
    SetValue<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,
               (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_b8,&this->StringAttributeData);
    FVar26.Data = local_b8.AllocatorInstance.Data;
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if (FVar26.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar26.Data);
    }
    local_a8.Index = -1;
    FVar26.Data = (FScriptContainerElement *)0x0;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    local_a8.Reference = &this->Vector3fAttributeData;
    local_a8.ContainerReference = (void *)0x0;
    FVar8 = (FName)FDataflowNode::FindOutput((FDataflowNode *)this,&local_a8);
    local_res8 = FVar8;
    if (FVar8 == (FName)0x0) {
      `FDataflowNode::
      SetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>'
      ::__l7::<lambda_1>::operator()(&local_res8);
    }
    else {
      FVar26.Data = (FScriptContainerElement *)0x0;
      if (*(longlong *)((longlong)FVar8 + 0x10) != 0) {
        FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)FVar8);
        uVar5 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)FVar8);
        pFVar10 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)FVar8,&local_90);
        pFVar2 = *(FProperty **)((longlong)FVar8 + 0x10);
        uVar11 = CityHash64((char *)((longlong)local_res8 + 0x18),0x10);
        UE::Dataflow::FContext::
        SetData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                  (param_1,(uint)uVar11,pFVar2,
                   (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&local_c8,pFVar10
                   ,uVar5,(FTimestamp *)FVar9.Value);
        FVar26.Data = local_c8.AllocatorInstance.Data;
      }
    }
    if (FVar26.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar26.Data);
    }
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,
               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_c8,
               &this->Vector3dAttributeData);
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    pFVar12 = ::FName::ToString(&local_80,(FString *)&local_90);
    pFVar13 = ::FString::FString((FString *)&local_c8,&this->AttrName);
    ::FString::FString(&local_58.Attribute,pFVar13);
    ::FString::FString(&local_58.Group,pFVar12);
    pFVar3 = (pFVar13->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    local_a8.Reference = &this->AttributeKey;
    local_a8.Index = -1;
    local_a8.ContainerReference = (void *)0x0;
    this_01 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a8);
    pFVar14 = FDataflowInput::GetValue<FCollectionAttributeKey>(this_01,param_1,&local_58);
    ::FString::FString(&local_78,&pFVar14->Attribute);
    ::FString::FString(&local_68,&pFVar14->Group);
    iVar6 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    pFVar15 = ::FName::FName(&local_res8,iVar6,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                             FNAME_Add);
    local_res18 = *pFVar15;
    iVar6 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    pFVar15 = ::FName::FName(&local_res8,iVar6,(wchar_t *)local_78.Data.AllocatorInstance.Data,
                             FNAME_Add);
    local_res20 = *pFVar15;
    uVar5 = ::FName::GetStringLength(&local_res18);
    if ((uVar5 != 0) &&
       (uVar5 = ::FName::GetStringLength(&local_res20), FVar8 = local_res18, uVar5 != 0)) {
      uVar5 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
      if (*(int *)&(this_00->GroupInfo).field_0x8 != *(int *)&(this_00->GroupInfo).field_0x34) {
        puVar7 = *(undefined1 **)&(this_00->GroupInfo).field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(this_00->GroupInfo).field_0x38;
        }
        iVar6 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)&(this_00->GroupInfo).field_0x48 - 1U &
                                  FVar8.Number + uVar5) * 4);
        if (iVar6 != -1) {
          do {
            if (*(FName *)(*(longlong *)&this_00->GroupInfo + (longlong)iVar6 * 0x14) == FVar8) {
              bVar4 = FManagedArrayCollection::HasAttribute(this_00,local_res20,local_res18);
              if (bVar4) {
                FManagedArrayCollection::GetAttributeType(this_00,local_res20,local_res18);
                FVar8 = ::`anonymous_namespace'::GetArrayTypeString((EManagedArrayType)&local_res8);
                ::FName::ToString((FName *)FVar8,(FString *)&local_b8);
                pFVar12 = ::FString::FString((FString *)&local_c8,"Bool");
                iVar6 = (pFVar12->Data).ArrayNum;
                iVar24 = local_b8.ArrayNum;
                if (iVar24 == iVar6) {
                  if (iVar24 < 2) {
                    bVar4 = true;
                  }
                  else {
                    iVar6 = FGenericPlatformStricmp::Stricmp
                                      ((wchar_t *)local_b8.AllocatorInstance.Data,
                                       (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
                    bVar4 = iVar6 == 0;
                  }
                }
                else {
                  bVar4 = iVar6 + iVar24 == 1;
                }
                if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.AllocatorInstance.Data);
                }
                if (bVar4) {
                  this_02 = (FManagedBitArrayBase *)
                            FManagedArrayCollection::FindAttribute<bool>
                                      (this_00,local_res20,local_res18);
                  if (this_02 != (FManagedBitArrayBase *)0x0) {
                    FManagedBitArrayBase::GetAsBoolArray
                              (this_02,(TArray<bool,TSizedDefaultAllocator<32>_> *)&local_c8);
                    FDataflowNode::
                    SetValue<TArray<bool,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>
                              ((FDataflowNode *)this,param_1,
                               (TArray<bool,TSizedDefaultAllocator<32>_> *)&local_c8,
                               &this->BoolAttributeData);
                    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c8.AllocatorInstance.Data);
                    }
                  }
                }
                else {
                  pFVar12 = ::FString::FString((FString *)&local_c8,"Float");
                  iVar6 = (pFVar12->Data).ArrayNum;
                  iVar24 = local_b8.ArrayNum;
                  if (iVar24 == iVar6) {
                    if (iVar24 < 2) {
                      bVar4 = true;
                    }
                    else {
                      iVar6 = FGenericPlatformStricmp::Stricmp
                                        ((wchar_t *)local_b8.AllocatorInstance.Data,
                                         (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
                      bVar4 = iVar6 == 0;
                    }
                  }
                  else {
                    bVar4 = iVar6 + iVar24 == 1;
                  }
                  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_c8.AllocatorInstance.Data);
                  }
                  if (bVar4) {
                    pTVar16 = FManagedArrayCollection::FindAttribute<float>
                                        (this_00,local_res20,local_res18);
                    if (pTVar16 != (TManagedArray<float> *)0x0) {
                      local_a8.Reference = &this->FloatAttributeData;
                      local_a8.Index = -1;
                      local_a8.ContainerReference = (void *)0x0;
                      pFVar17 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_a8);
                      if (pFVar17 == (FDataflowOutput *)0x0) {
                        `FDataflowNode::
                        SetValue<TArray<float,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_>'
                        ::__l7::<lambda_1>::operator()(&local_res8);
                      }
                      else if (pFVar17->_padding_ != 0) {
                        FVar9 = FDataflowConnection::GetOwningNodeTimestamp
                                          ((FDataflowConnection *)pFVar17);
                        uVar5 = FDataflowConnection::GetOwningNodeValueHash
                                          ((FDataflowConnection *)pFVar17);
                        pFVar10 = FDataflowConnection::GetOwningNodeGuid
                                            ((FDataflowConnection *)pFVar17,&local_90);
                        pFVar2 = (FProperty *)pFVar17->_padding_;
                        uVar11 = CityHash64((char *)&pFVar17->_padding_,0x10);
                        UE::Dataflow::FContext::
                        SetData<TArray<float,TSizedDefaultAllocator<32>_>_const_&>
                                  (param_1,(uint)uVar11,pFVar2,
                                   (TArray<float,TSizedDefaultAllocator<32>_> *)&pTVar16->field_0x10
                                   ,pFVar10,uVar5,(FTimestamp *)FVar9.Value);
                      }
                    }
                  }
                  else {
                    pFVar12 = ::FString::FString((FString *)&local_c8,"Double");
                    iVar6 = (pFVar12->Data).ArrayNum;
                    iVar24 = local_b8.ArrayNum;
                    if (iVar24 == iVar6) {
                      if (iVar24 < 2) {
                        bVar4 = true;
                      }
                      else {
                        iVar6 = FGenericPlatformStricmp::Stricmp
                                          ((wchar_t *)local_b8.AllocatorInstance.Data,
                                           (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
                        bVar4 = iVar6 == 0;
                      }
                    }
                    else {
                      bVar4 = iVar6 + iVar24 == 1;
                    }
                    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c8.AllocatorInstance.Data);
                    }
                    if (bVar4) {
                      pTVar18 = FManagedArrayCollection::FindAttribute<double>
                                          (this_00,local_res20,local_res18);
                      if (pTVar18 != (TManagedArray<double> *)0x0) {
                        local_a8.Reference = &this->DoubleAttributeData;
                        local_a8.Index = -1;
                        local_a8.ContainerReference = (void *)0x0;
                        pFVar17 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_a8);
                        if (pFVar17 == (FDataflowOutput *)0x0) {
                          `FDataflowNode::
                          SetValue<TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<double,TSizedDefaultAllocator<32>_>_>'
                          ::__l7::<lambda_1>::operator()(&local_res8);
                        }
                        else if (pFVar17->_padding_ != 0) {
                          FVar9 = FDataflowConnection::GetOwningNodeTimestamp
                                            ((FDataflowConnection *)pFVar17);
                          uVar5 = FDataflowConnection::GetOwningNodeValueHash
                                            ((FDataflowConnection *)pFVar17);
                          pFVar10 = FDataflowConnection::GetOwningNodeGuid
                                              ((FDataflowConnection *)pFVar17,&local_90);
                          pFVar2 = (FProperty *)pFVar17->_padding_;
                          uVar11 = CityHash64((char *)&pFVar17->_padding_,0x10);
                          UE::Dataflow::FContext::
                          SetData<TArray<double,TSizedDefaultAllocator<32>_>_const_&>
                                    (param_1,(uint)uVar11,pFVar2,
                                     (TArray<double,TSizedDefaultAllocator<32>_> *)
                                     &pTVar18->field_0x10,pFVar10,uVar5,(FTimestamp *)FVar9.Value);
                        }
                      }
                    }
                    else {
                      pFVar12 = ::FString::FString((FString *)&local_c8,"Int32");
                      iVar6 = (pFVar12->Data).ArrayNum;
                      iVar24 = local_b8.ArrayNum;
                      if (iVar24 == iVar6) {
                        if (iVar24 < 2) {
                          bVar4 = true;
                        }
                        else {
                          iVar6 = FGenericPlatformStricmp::Stricmp
                                            ((wchar_t *)local_b8.AllocatorInstance.Data,
                                             (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
                          bVar4 = iVar6 == 0;
                        }
                      }
                      else {
                        bVar4 = iVar6 + iVar24 == 1;
                      }
                      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_c8.AllocatorInstance.Data);
                      }
                      if (bVar4) {
                        pTVar19 = FManagedArrayCollection::FindAttribute<int>
                                            (this_00,local_res20,local_res18);
                        if (pTVar19 != (TManagedArray<int> *)0x0) {
                          local_a8.Index = -1;
                          local_a8.ContainerReference = (void *)0x0;
                          local_a8.Reference = &this->Int32AttributeData;
                          pFVar17 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_a8);
                          if (pFVar17 == (FDataflowOutput *)0x0) {
                            `FDataflowNode::
                            SetValue<TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_>'
                            ::__l7::<lambda_1>::operator()(&local_res8);
                          }
                          else if (pFVar17->_padding_ != 0) {
                            FVar9 = FDataflowConnection::GetOwningNodeTimestamp
                                              ((FDataflowConnection *)pFVar17);
                            uVar5 = FDataflowConnection::GetOwningNodeValueHash
                                              ((FDataflowConnection *)pFVar17);
                            pFVar10 = FDataflowConnection::GetOwningNodeGuid
                                                ((FDataflowConnection *)pFVar17,&local_90);
                            pFVar2 = (FProperty *)pFVar17->_padding_;
                            uVar11 = CityHash64((char *)&pFVar17->_padding_,0x10);
                            UE::Dataflow::FContext::
                            SetData<TArray<int,TSizedDefaultAllocator<32>_>_const_&>
                                      (param_1,(uint)uVar11,pFVar2,
                                       (TArray<int,TSizedDefaultAllocator<32>_> *)
                                       &pTVar19->field_0x10,pFVar10,uVar5,(FTimestamp *)FVar9.Value)
                            ;
                          }
                        }
                      }
                      else {
                        pFVar12 = ::FString::FString((FString *)&local_c8,"String");
                        iVar6 = (pFVar12->Data).ArrayNum;
                        iVar24 = local_b8.ArrayNum;
                        if (iVar24 == iVar6) {
                          if (iVar24 < 2) {
                            bVar4 = true;
                          }
                          else {
                            iVar6 = FGenericPlatformStricmp::Stricmp
                                              ((wchar_t *)local_b8.AllocatorInstance.Data,
                                               (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
                            bVar4 = iVar6 == 0;
                          }
                        }
                        else {
                          bVar4 = iVar6 + iVar24 == 1;
                        }
                        if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_c8.AllocatorInstance.Data);
                        }
                        if (bVar4) {
                          pTVar20 = FManagedArrayCollection::FindAttribute<FString>
                                              (this_00,local_res20,local_res18);
                          if (pTVar20 != (TManagedArray<FString> *)0x0) {
                            local_a8.Index = -1;
                            local_a8.ContainerReference = (void *)0x0;
                            local_a8.Reference = &this->StringAttributeData;
                            pFVar17 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_a8);
                            if (pFVar17 == (FDataflowOutput *)0x0) {
                              `FDataflowNode::
                              SetValue<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_>'
                              ::__l7::<lambda_1>::operator()(&local_res8);
                            }
                            else if (pFVar17->_padding_ != 0) {
                              FVar9 = FDataflowConnection::GetOwningNodeTimestamp
                                                ((FDataflowConnection *)pFVar17);
                              uVar5 = FDataflowConnection::GetOwningNodeValueHash
                                                ((FDataflowConnection *)pFVar17);
                              pFVar10 = FDataflowConnection::GetOwningNodeGuid
                                                  ((FDataflowConnection *)pFVar17,&local_90);
                              pFVar2 = (FProperty *)pFVar17->_padding_;
                              uVar11 = CityHash64((char *)&pFVar17->_padding_,0x10);
                              UE::Dataflow::FContext::
                              SetData<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
                                        (param_1,(uint)uVar11,pFVar2,
                                         (TArray<FString,TSizedDefaultAllocator<32>_> *)
                                         &pTVar20->field_0x10,pFVar10,uVar5,
                                         (FTimestamp *)FVar9.Value);
                            }
                          }
                        }
                        else {
                          pFVar12 = ::FString::FString((FString *)&local_c8,"Vector");
                          iVar6 = (pFVar12->Data).ArrayNum;
                          iVar24 = local_b8.ArrayNum;
                          if (iVar24 == iVar6) {
                            if (iVar24 < 2) {
                              bVar4 = true;
                            }
                            else {
                              iVar6 = FGenericPlatformStricmp::Stricmp
                                                ((wchar_t *)local_b8.AllocatorInstance.Data,
                                                 (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
                              bVar4 = iVar6 == 0;
                            }
                          }
                          else {
                            bVar4 = iVar24 + iVar6 == 1;
                          }
                          if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_c8.AllocatorInstance.Data);
                          }
                          if (bVar4) {
                            pTVar21 = FManagedArrayCollection::
                                      FindAttribute<UE::Math::TVector<float>_>
                                                (this_00,local_res20,local_res18);
                            if (pTVar21 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
                              local_a8.Reference = &this->Vector3fAttributeData;
                              local_a8.Index = -1;
                              local_a8.ContainerReference = (void *)0x0;
                              pFVar17 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_a8);
                              if (pFVar17 == (FDataflowOutput *)0x0) {
                                `FDataflowNode::
                                SetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>'
                                ::__l7::<lambda_1>::operator()(&local_res8);
                              }
                              else if (pFVar17->_padding_ != 0) {
                                FVar9 = FDataflowConnection::GetOwningNodeTimestamp
                                                  ((FDataflowConnection *)pFVar17);
                                uVar5 = FDataflowConnection::GetOwningNodeValueHash
                                                  ((FDataflowConnection *)pFVar17);
                                pFVar10 = FDataflowConnection::GetOwningNodeGuid
                                                    ((FDataflowConnection *)pFVar17,&local_90);
                                pFVar2 = (FProperty *)pFVar17->_padding_;
                                uVar11 = CityHash64((char *)&pFVar17->_padding_,0x10);
                                UE::Dataflow::FContext::
                                SetData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
                                          (param_1,(uint)uVar11,pFVar2,
                                           (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
                                            *)&pTVar21->field_0x10,pFVar10,uVar5,
                                           (FTimestamp *)FVar9.Value);
                              }
                            }
                          }
                          else {
                            pFVar12 = ::FString::FString((FString *)&local_c8,"Vector3d");
                            iVar6 = (pFVar12->Data).ArrayNum;
                            iVar24 = local_b8.ArrayNum;
                            if (iVar24 == iVar6) {
                              if (iVar24 < 2) {
                                bVar4 = true;
                              }
                              else {
                                iVar6 = FGenericPlatformStricmp::Stricmp
                                                  ((wchar_t *)local_b8.AllocatorInstance.Data,
                                                   (wchar_t *)(pFVar12->Data).AllocatorInstance.Data
                                                  );
                                bVar4 = iVar6 == 0;
                              }
                            }
                            else {
                              bVar4 = iVar24 + iVar6 == 1;
                            }
                            if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_c8.AllocatorInstance.Data);
                            }
                            if (bVar4) {
                              pTVar22 = FManagedArrayCollection::
                                        FindAttribute<UE::Math::TVector<double>_>
                                                  (this_00,local_res20,local_res18);
                              if (pTVar22 != (TManagedArray<UE::Math::TVector<double>_> *)0x0) {
                                FDataflowNode::
                                SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                                          ((FDataflowNode *)this,param_1,
                                           (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
                                            *)&pTVar22->field_0x10,&this->Vector3dAttributeData);
                              }
                            }
                            else {
                              pFVar12 = ::FString::FString((FString *)&local_c8,"LinearColor");
                              iVar6 = (pFVar12->Data).ArrayNum;
                              iVar24 = local_b8.ArrayNum;
                              if (iVar24 == iVar6) {
                                if (iVar24 < 2) {
                                  bVar4 = true;
                                }
                                else {
                                  iVar6 = FGenericPlatformStricmp::Stricmp
                                                    ((wchar_t *)local_b8.AllocatorInstance.Data,
                                                     (wchar_t *)
                                                     (pFVar12->Data).AllocatorInstance.Data);
                                  bVar4 = iVar6 == 0;
                                }
                              }
                              else {
                                bVar4 = iVar24 + iVar6 == 1;
                              }
                              if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                              {
                                FMemory::Free(local_c8.AllocatorInstance.Data);
                              }
                              if ((bVar4) &&
                                 (pTVar23 = FManagedArrayCollection::FindAttribute<FLinearColor>
                                                      (this_00,local_res20,local_res18),
                                 pTVar23 != (TManagedArray<FLinearColor> *)0x0)) {
                                local_a8.Reference = &this->LinearColorAttributeData;
                                local_a8.Index = -1;
                                local_a8.ContainerReference = (void *)0x0;
                                pFVar17 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_a8)
                                ;
                                if (pFVar17 == (FDataflowOutput *)0x0) {
                                  `FDataflowNode::
                                  SetValue<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>'
                                  ::__l7::<lambda_1>::operator()(&local_res8);
                                }
                                else if (pFVar17->_padding_ != 0) {
                                  FVar9 = FDataflowConnection::GetOwningNodeTimestamp
                                                    ((FDataflowConnection *)pFVar17);
                                  uVar5 = FDataflowConnection::GetOwningNodeValueHash
                                                    ((FDataflowConnection *)pFVar17);
                                  pFVar10 = FDataflowConnection::GetOwningNodeGuid
                                                      ((FDataflowConnection *)pFVar17,&local_90);
                                  pFVar2 = (FProperty *)pFVar17->_padding_;
                                  uVar11 = CityHash64((char *)&pFVar17->_padding_,0x10);
                                  UE::Dataflow::FContext::
                                  SetData<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>
                                            (param_1,(uint)uVar11,pFVar2,
                                             (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)
                                             &pTVar23->field_0x10,pFVar10,uVar5,
                                             (FTimestamp *)FVar9.Value);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.AllocatorInstance.Data);
                }
              }
              break;
            }
            iVar6 = *(int *)(*(longlong *)&this_00->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
          } while (iVar6 != -1);
        }
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Group.Data.AllocatorInstance.Data);
    }
    if (local_58.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Attribute.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FGetCollectionAttributeDataTypedDataflowNode @ 14e91fe30

FGetCollectionAttributeDataTypedDataflowNode * __thiscall
FGetCollectionAttributeDataTypedDataflowNode::FGetCollectionAttributeDataTypedDataflowNode
          (FGetCollectionAttributeDataTypedDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->_padding_ = (longlong)&___7FGetCollectionAttributeDataTypedDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  ::FString::FString(&(this->AttributeKey).Attribute,"");
  ::FString::FString(&(this->AttributeKey).Group,"");
  this->GroupName = Dataflow_EStandardGroupNameEnum_Transform;
  ::FString::FString(&this->CustomGroupName,"");
  ::FString::FString(&this->AttrName,"");
  (this->StringAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolAttributeData).ArrayNum = 0;
  (this->BoolAttributeData).ArrayMax = 0;
  (this->FloatAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatAttributeData).ArrayNum = 0;
  (this->FloatAttributeData).ArrayMax = 0;
  (this->DoubleAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleAttributeData).ArrayNum = 0;
  (this->DoubleAttributeData).ArrayMax = 0;
  (this->Int32AttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Int32AttributeData).ArrayNum = 0;
  (this->Int32AttributeData).ArrayMax = 0;
  (this->StringAttributeData).ArrayNum = 0;
  (this->StringAttributeData).ArrayMax = 0;
  (this->Vector3fAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3fAttributeData).ArrayNum = 0;
  (this->Vector3fAttributeData).ArrayMax = 0;
  (this->Vector3dAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3dAttributeData).ArrayNum = 0;
  (this->Vector3dAttributeData).ArrayMax = 0;
  (this->LinearColorAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearColorAttributeData).ArrayNum = 0;
  (this->LinearColorAttributeData).ArrayMax = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->AttributeKey;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->BoolAttributeData;
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
  local_48.Reference = &this->FloatAttributeData;
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
  local_48.Reference = &this->DoubleAttributeData;
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
  local_48.Reference = &this->Int32AttributeData;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_48.Reference = &this->StringAttributeData;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_48.Reference = &this->Vector3fAttributeData;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_48.Reference = &this->Vector3dAttributeData;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_48.Reference = &this->LinearColorAttributeData;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// FGetCollectionAttributeDataTypedDataflowNode @ 14e9201f0

FGetCollectionAttributeDataTypedDataflowNode * __thiscall
FGetCollectionAttributeDataTypedDataflowNode::FGetCollectionAttributeDataTypedDataflowNode
          (FGetCollectionAttributeDataTypedDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGetCollectionAttributeDataTypedDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  ::FString::FString(&(this->AttributeKey).Attribute,"");
  ::FString::FString(&(this->AttributeKey).Group,"");
  this->GroupName = Dataflow_EStandardGroupNameEnum_Transform;
  ::FString::FString(&this->CustomGroupName,"");
  ::FString::FString(&this->AttrName,"");
  (this->BoolAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolAttributeData).ArrayNum = 0;
  (this->BoolAttributeData).ArrayMax = 0;
  (this->FloatAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatAttributeData).ArrayNum = 0;
  (this->FloatAttributeData).ArrayMax = 0;
  (this->DoubleAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleAttributeData).ArrayNum = 0;
  (this->DoubleAttributeData).ArrayMax = 0;
  (this->Int32AttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Int32AttributeData).ArrayNum = 0;
  (this->Int32AttributeData).ArrayMax = 0;
  (this->StringAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringAttributeData).ArrayNum = 0;
  (this->StringAttributeData).ArrayMax = 0;
  (this->Vector3fAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3fAttributeData).ArrayNum = 0;
  (this->Vector3fAttributeData).ArrayMax = 0;
  (this->Vector3dAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3dAttributeData).ArrayNum = 0;
  (this->Vector3dAttributeData).ArrayMax = 0;
  (this->LinearColorAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearColorAttributeData).ArrayNum = 0;
  (this->LinearColorAttributeData).ArrayMax = 0;
  return this;
}

// ~FGetCollectionAttributeDataTypedDataflowNode @ 14e933730

void __thiscall
FGetCollectionAttributeDataTypedDataflowNode::~FGetCollectionAttributeDataTypedDataflowNode
          (FGetCollectionAttributeDataTypedDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->LinearColorAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vector3dAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vector3fAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->StringAttributeData).AllocatorInstance.Data,
             (this->StringAttributeData).ArrayNum);
  pFVar1 = (this->StringAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Int32AttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DoubleAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FloatAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoolAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttrName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomGroupName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeKey).Group.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeKey).Attribute.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

