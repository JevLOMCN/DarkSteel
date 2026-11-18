// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e85b720

UScriptStruct * __cdecl FAppendMeshesToCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppendMeshesToCollectionDataflowNode,
                         (UObject *)pUVar1,L"AppendMeshesToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e85b760

FName __thiscall
FAppendMeshesToCollectionDataflowNode::GetType(FAppendMeshesToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAppendMeshesToCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e85b790

bool __thiscall
FAppendMeshesToCollectionDataflowNode::IsA
          (FAppendMeshesToCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAppendMeshesToCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e85b7f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e85b7f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e85b816;
      }
    }
  }
  bVar5 = true;
LAB_14e85b816:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e85b850

FStructOnScope * __thiscall
FAppendMeshesToCollectionDataflowNode::NewStructOnScope(FAppendMeshesToCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAppendMeshesToCollectionDataflowNode,
                           (UObject *)pUVar2,L"AppendMeshesToCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e85b8d0

void __thiscall
FAppendMeshesToCollectionDataflowNode::SerializeInternal
          (FAppendMeshesToCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppendMeshesToCollectionDataflowNode,
                         (UObject *)pUVar1,L"AppendMeshesToCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e85b94d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e85b960

FName __thiscall
FAppendMeshesToCollectionDataflowNode::GetDisplayName(FAppendMeshesToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AppendMeshesToCollection");
  return in_RDX;
}

// GetCategory @ 14e85b9e0

FName __thiscall
FAppendMeshesToCollectionDataflowNode::GetCategory(FAppendMeshesToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e85ba10

FString * __thiscall
FAppendMeshesToCollectionDataflowNode::GetTags
          (FAppendMeshesToCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e85ba40

UScriptStruct * __thiscall
FAppendMeshesToCollectionDataflowNode::TypedScriptStruct
          (FAppendMeshesToCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppendMeshesToCollectionDataflowNode,
                         (UObject *)pUVar1,L"AppendMeshesToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAppendMeshesToCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e85be60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAppendMeshesToCollectionDataflowNode::Evaluate
          (FAppendMeshesToCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  FDataflowInput *pFVar6;
  int *piVar7;
  FManagedArrayCollection *pFVar8;
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForElementType<unsigned_int> FVar10;
  int iVar11;
  int iVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_1a8 [32];
  char local_168 [4];
  int local_164;
  FGeometryCollection *local_160;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  FConnectionReference local_148;
  FConnectionReference local_130;
  FConnectionReference local_118;
  FConnectionReference local_100;
  code *local_e8;
  FGeometryCollection ***local_e0;
  FConnectionReference local_d8;
  FConnectionReference local_c0;
  FConnectionReference local_a8;
  FGeometryCollection **local_90;
  char *local_88;
  int local_80;
  int *local_78;
  FDataflowSelection local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar8 = &this->Collection;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FManagedArrayCollection *)puVar5 != pFVar8) &&
     (puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowTransformSelection *)puVar5 != &this->AddedSelection)) {
    return;
  }
  local_d8.ContainerReference = (void *)0x0;
  local_d8.Index = -1;
  local_d8.Reference = pFVar8;
  pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_d8);
  if (pFVar6->Connection == (FDataflowOutput *)0x0) {
    local_148.Index = -1;
    local_148.ContainerReference = (void *)0x0;
    local_148.Reference = pFVar8;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
    if (pFVar6->Connection != (FDataflowOutput *)0x0) {
      local_c0.Index = -1;
      local_c0.ContainerReference = (void *)0x0;
      local_c0.Reference = pFVar8;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_148,&local_c0);
      return;
    }
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,local_148.Reference,pFVar8);
    return;
  }
  local_118.Reference = &this->ParentIndex;
  local_118.Index = -1;
  local_118.ContainerReference = (void *)0x0;
  pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_118);
  piVar7 = FDataflowInput::GetValue<int>(pFVar6,param_1,local_118.Reference);
  iVar11 = *piVar7;
  pFVar8 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar8);
  local_100.Reference = &this->Meshes;
  local_100.Index = -1;
  local_100.ContainerReference = (void *)0x0;
  pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_100);
  pTVar9 = FDataflowInput::GetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
                     (pFVar6,param_1,local_100.Reference);
  local_158.Data = (FScriptContainerElement *)0x0;
  iVar12 = pTVar9->ArrayNum;
  pFVar2 = (pTVar9->AllocatorInstance).Data;
  local_150 = iVar12;
  if (iVar12 == 0) {
    local_14c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar12,0,&local_158,iVar12,&local_14c);
    ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
              (local_158.Data,(TObjectPtr<UDynamicMesh> *)pFVar2,iVar12);
  }
  local_70.GroupName = FDataflowTransformSelection::TransformGroupName;
  local_70.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70.SelectionArray.NumBits = 0;
  local_70.SelectionArray.MaxBits = 0x80;
  local_160 = FManagedArrayCollection::NewCopy<FGeometryCollection>(pFVar8);
  iVar12 = local_150;
  if (local_160 != (FGeometryCollection *)0x0) {
    local_168[0] = '\0';
    local_164 = -1;
    pFVar2 = local_158.Data + (longlong)local_150 * 8;
    FVar13.Data = local_158.Data;
    while( true ) {
      if (local_150 != iVar12) {
        local_168[1] = 0;
        `TCheckedPointerIterator<TObjectPtr<UDynamicMesh>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_168 + 1);
      }
      if (FVar13.Data == pFVar2) break;
      if (*(UDynamicMesh **)FVar13.Data != (UDynamicMesh *)0x0) {
        local_90 = &local_160;
        local_88 = local_168;
        local_e8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FAppendMeshesToCollectionDataflowNode::Evaluate'::__l18::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                   ::Call;
        local_78 = &local_164;
        local_e0 = &local_90;
        local_80 = iVar11;
        UDynamicMesh::ProcessMesh
                  (*(UDynamicMesh **)FVar13.Data,
                   (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_e8);
      }
      FVar13.Data = FVar13.Data + 8;
    }
    if (local_168[0] != '\0') {
      FDataflowSelection::InitializeFromCollection
                (&local_70,(FManagedArrayCollection *)local_160,false);
      iVar11 = local_164;
      if (local_164 < local_70.SelectionArray.NumBits) {
        do {
          if (((iVar11 < 0) || (local_70.SelectionArray.NumBits <= iVar11)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar10 = (ForElementType<unsigned_int>)&local_70.SelectionArray;
          if (local_70.SelectionArray.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar10 = local_70.SelectionArray.AllocatorInstance.SecondaryData;
          }
          iVar12 = iVar11;
          if (iVar11 < 0) {
            iVar12 = iVar11 + 0x1f;
          }
          puVar1 = (uint *)((longlong)FVar10 + (longlong)(iVar12 >> 5) * 4);
          iVar12 = iVar11 + 1;
          *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
          iVar11 = iVar12;
        } while (iVar12 < local_70.SelectionArray.NumBits);
      }
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)local_160,
                 &this->Collection);
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_70,
                 &this->AddedSelection);
      if (local_160 != (FGeometryCollection *)0x0) {
        (**(code **)local_160->_padding_)(local_160,1);
      }
      goto LAB_14e85c232;
    }
    if (local_160 != (FGeometryCollection *)0x0) {
      (**(code **)local_160->_padding_)(local_160,1);
    }
  }
  pFVar8 = &this->Collection;
  local_130.Index = -1;
  local_130.ContainerReference = (void *)0x0;
  local_130.Reference = pFVar8;
  pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_130);
  if (pFVar6->Connection == (FDataflowOutput *)0x0) {
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,local_130.Reference,pFVar8);
  }
  else {
    local_a8.Index = -1;
    local_a8.ContainerReference = (void *)0x0;
    local_a8.Reference = pFVar8;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_130,&local_a8);
  }
  FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
            ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_70,
             &this->AddedSelection);
LAB_14e85c232:
  if (local_70.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_70.SelectionArray.AllocatorInstance.SecondaryData);
  }
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  return;
}

// FAppendMeshesToCollectionDataflowNode @ 14e9107f0

FAppendMeshesToCollectionDataflowNode * __thiscall
FAppendMeshesToCollectionDataflowNode::FAppendMeshesToCollectionDataflowNode
          (FAppendMeshesToCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FAppendMeshesToCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->AddedSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->AddedSelection).field_0x18 = 0;
  *(undefined4 *)&(this->AddedSelection).field_0x20 = 0;
  *(undefined4 *)&(this->AddedSelection).field_0x24 = 0x80;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  this->ParentIndex = -1;
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
  local_68.Reference = &this->Meshes;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->ParentIndex;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar1;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  return this;
}

// FAppendMeshesToCollectionDataflowNode @ 14e910990

FAppendMeshesToCollectionDataflowNode * __thiscall
FAppendMeshesToCollectionDataflowNode::FAppendMeshesToCollectionDataflowNode
          (FAppendMeshesToCollectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FAppendMeshesToCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->AddedSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->AddedSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->AddedSelection).field_0x18 = 0;
  *(undefined4 *)&(this->AddedSelection).field_0x20 = 0;
  *(undefined4 *)&(this->AddedSelection).field_0x24 = 0x80;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  this->ParentIndex = -1;
  return this;
}

