// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e843600

UScriptStruct * __cdecl FPointsToMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode,(UObject *)pUVar1,
                         L"PointsToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e843a80

FName __thiscall FPointsToMeshDataflowNode::GetType(FPointsToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FPointsToMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e843ab0

bool __thiscall FPointsToMeshDataflowNode::IsA(FPointsToMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FPointsToMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e843b18;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e843b18:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e843b36;
      }
    }
  }
  bVar5 = true;
LAB_14e843b36:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e843b70

FStructOnScope * __thiscall
FPointsToMeshDataflowNode::NewStructOnScope(FPointsToMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode,(UObject *)pUVar2,
                           L"PointsToMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e843bf0

void __thiscall
FPointsToMeshDataflowNode::SerializeInternal(FPointsToMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode,(UObject *)pUVar1,
                         L"PointsToMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e843c6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e843df0

FName __thiscall FPointsToMeshDataflowNode::GetDisplayName(FPointsToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"PointsToMesh");
  return in_RDX;
}

// GetCategory @ 14e843e60

FName __thiscall FPointsToMeshDataflowNode::GetCategory(FPointsToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e844850

FString * __thiscall
FPointsToMeshDataflowNode::GetTags(FPointsToMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e844980

UScriptStruct * __thiscall
FPointsToMeshDataflowNode::TypedScriptStruct(FPointsToMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode,(UObject *)pUVar1,
                         L"PointsToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPointsToMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e845460

void __thiscall
FPointsToMeshDataflowNode::Evaluate
          (FPointsToMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDynamicMesh3 *this_00;
  undefined1 *puVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  UObject *pUVar5;
  TObjectPtr<UDynamicMesh>_u_0 this_01;
  FScriptContainerElement *pFVar6;
  TObjectPtr<UDynamicMesh>_u_0 local_res8;
  TObjectPtr<UDynamicMesh>_u_0 local_res18 [2];
  TVector<double>_u_0 local_78;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  TVector2<float>_u_0 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((TObjectPtr<UDynamicMesh> *)puVar3 == &this->Mesh) ||
     (puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar3 == &this->TriangleCount)) {
    pTVar4 = FDataflowNode::GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->Points);
    if (pTVar4->ArrayNum < 1) {
      pUVar5 = GetTransientPackageAsObject();
      local_res8.DebugPtr = NewObject<UDynamicMesh>(pUVar5);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UDynamicMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>_>
                ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res8.ObjectPtr,
                 &this->Mesh);
      local_res8.DebugPtr = local_res8.DebugPtr & 0xffffffff00000000;
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,(int *)&local_res8,&this->TriangleCount);
    }
    else {
      pUVar5 = GetTransientPackageAsObject();
      this_01.DebugPtr = NewObject<UDynamicMesh>(pUVar5);
      local_res18[0].DebugPtr = this_01.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01.DebugPtr != (UDynamicMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
      }
      UDynamicMesh::Reset(this_01.DebugPtr);
      iVar2 = pTVar4->ArrayNum;
      pFVar6 = (pTVar4->AllocatorInstance).Data;
      this_00 = ((this_01.DebugPtr)->Mesh).Ptr;
      pFVar1 = pFVar6 + (longlong)iVar2 * 0x18;
      while( true ) {
        if (pTVar4->ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (pFVar6 == pFVar1) break;
        local_78._s_0.X = (double)*(undefined8 *)pFVar6;
        local_78._s_0.Y = (double)*(undefined8 *)(pFVar6 + 8);
        local_58 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_78._s_0.Z = (double)*(undefined8 *)(pFVar6 + 0x10);
        local_4c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_60 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_54 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_48 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_40 = 0;
        local_3e = 0;
        UE::Geometry::FDynamicMesh3::AppendVertex(this_00,(FVertexInfo *)&local_78._s_0);
        pFVar6 = pFVar6 + 0x18;
      }
      FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
                ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res18[0].ObjectPtr
                 ,&this->Mesh);
      local_res8._0_4_ = UDynamicMesh::GetTriangleCount(this_01.DebugPtr);
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,(int *)&local_res8,&this->TriangleCount);
    }
  }
  return;
}

// FPointsToMeshDataflowNode @ 14e928170

FPointsToMeshDataflowNode * __thiscall
FPointsToMeshDataflowNode::FPointsToMeshDataflowNode
          (FPointsToMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FPointsToMeshDataflowNode__6B_;
  local_58.Reference = &this->Points;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_58.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  this->TriangleCount = 0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Mesh;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->TriangleCount;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

