// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e855870

UScriptStruct * __cdecl FMakeRectangleMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRectangleMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeRectangleMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e855af0

FName __thiscall FMakeRectangleMeshDataflowNode::GetType(FMakeRectangleMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeRectangleMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e855b20

bool __thiscall
FMakeRectangleMeshDataflowNode::IsA(FMakeRectangleMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeRectangleMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e855b88;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e855b88:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e855ba6;
      }
    }
  }
  bVar5 = true;
LAB_14e855ba6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e855c20

FStructOnScope * __thiscall
FMakeRectangleMeshDataflowNode::NewStructOnScope(FMakeRectangleMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeRectangleMeshDataflowNode,
                           (UObject *)pUVar2,L"MakeRectangleMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e855cf0

void __thiscall
FMakeRectangleMeshDataflowNode::SerializeInternal
          (FMakeRectangleMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRectangleMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeRectangleMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e855d6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e855d80

FName __thiscall
FMakeRectangleMeshDataflowNode::GetDisplayName(FMakeRectangleMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeRectangleMesh");
  return in_RDX;
}

// GetCategory @ 14e855e10

FName __thiscall FMakeRectangleMeshDataflowNode::GetCategory(FMakeRectangleMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Mesh");
  return in_RDX;
}

// GetTags @ 14e855e40

FString * __thiscall
FMakeRectangleMeshDataflowNode::GetTags
          (FMakeRectangleMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e855e70

UScriptStruct * __thiscall
FMakeRectangleMeshDataflowNode::TypedScriptStruct(FMakeRectangleMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRectangleMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeRectangleMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeRectangleMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8560a0

void __thiscall
FMakeRectangleMeshDataflowNode::Evaluate
          (FMakeRectangleMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined4 uVar1;
  double dVar2;
  undefined4 uVar3;
  FDynamicMesh3 *this_00;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 *puVar8;
  FDataflowInput *pFVar9;
  TVector<double> *pTVar10;
  UObject *pUVar11;
  TObjectPtr<UDynamicMesh>_u_0 this_01;
  TObjectPtr<UDynamicMesh>_u_0 local_res8;
  FConnectionReference local_158;
  undefined1 local_138 [216];
  int local_60;
  int local_5c;
  bool local_57;
  
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar8 == &this->Mesh) {
    local_158.Reference = &this->Origin;
    local_158.ContainerReference = (void *)0x0;
    local_158.Index = -1;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_158);
    pTVar10 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar9,param_1,local_158.Reference);
    dVar6 = (pTVar10->field0_0x0)._s_0.X;
    dVar7 = (pTVar10->field0_0x0)._s_0.Y;
    dVar2 = (pTVar10->field0_0x0)._s_0.Z;
    local_158.Reference = &this->Normal;
    local_158.Index = -1;
    local_158.ContainerReference = (void *)0x0;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_158);
    pTVar10 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar9,param_1,local_158.Reference);
    local_158.ContainerReference = (void *)(pTVar10->field0_0x0)._s_0.Z;
    dVar4 = (pTVar10->field0_0x0)._s_0.X;
    dVar5 = (pTVar10->field0_0x0)._s_0.Y;
    pUVar11 = GetTransientPackageAsObject();
    this_01.DebugPtr = NewObject<UDynamicMesh>(pUVar11);
    local_res8.DebugPtr = this_01.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01.DebugPtr != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
    }
    UDynamicMesh::Reset(this_01.DebugPtr);
    this_00 = ((this_01.DebugPtr)->Mesh).Ptr;
    UE::Geometry::FRectangleMeshGenerator::FRectangleMeshGenerator
              ((FRectangleMeshGenerator *)local_138);
    local_60 = this->WidthVertexCount;
    local_138._184_4_ = (undefined4)dVar4;
    local_5c = this->HeightVertexCount;
    local_57 = true;
    local_138._188_4_ = (undefined4)dVar5;
    local_138._192_4_ = (undefined4)(double)local_158.ContainerReference;
    uVar1 = this->Width;
    uVar3 = this->Height;
    local_138._208_4_ = SUB84((double)(float)uVar3,0);
    local_138._200_8_ = (double)(float)uVar1;
    local_138._212_4_ = (int)((ulonglong)(double)(float)uVar3 >> 0x20);
    local_138._160_8_ = dVar6;
    local_138._168_8_ = dVar7;
    local_138._176_8_ = dVar2;
    UE::Geometry::FRectangleMeshGenerator::Generate((FRectangleMeshGenerator *)local_138);
    UE::Geometry::FDynamicMesh3::Copy(this_00,(FMeshShapeGenerator *)local_138);
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res8.ObjectPtr,
               &this->Mesh);
    local_138._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_138._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._136_8_);
    }
    if ((FScriptContainerElement *)local_138._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._120_8_);
    }
    if ((FScriptContainerElement *)local_138._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._104_8_);
    }
    if ((FScriptContainerElement *)local_138._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._88_8_);
    }
    if ((FScriptContainerElement *)local_138._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._72_8_);
    }
    if ((FScriptContainerElement *)local_138._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._56_8_);
    }
    if ((FScriptContainerElement *)local_138._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._40_8_);
    }
    if ((FScriptContainerElement *)local_138._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._24_8_);
    }
    if ((FScriptContainerElement *)local_138._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._8_8_);
    }
  }
  return;
}

// FMakeRectangleMeshDataflowNode @ 14e923200

FMakeRectangleMeshDataflowNode * __thiscall
FMakeRectangleMeshDataflowNode::FMakeRectangleMeshDataflowNode
          (FMakeRectangleMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  FDataflowInput *pFVar3;
  FDataflowOutput *this_00;
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
  this->_padding_ = (longlong)&___7FMakeRectangleMeshDataflowNode__6B_;
  local_58.Reference = &this->Origin;
  local_58.ContainerReference = (void *)0x0;
  (((TVector<double> *)local_58.Reference)->field0_0x0)._s_0.X = 0.0;
  (this->Origin).field0_0x0._s_0.Y = 0.0;
  (this->Origin).field0_0x0._s_0.Z = 0.0;
  uVar2 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  (this->Normal).field0_0x0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  (this->Normal).field0_0x0._s_0.Y = (double)uVar2;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  this->Width = 5.0;
  this->Height = 5.0;
  this->WidthVertexCount = 3;
  this->HeightVertexCount = 3;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_58,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Normal;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_58,&local_res8);
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Mesh;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FMakeRectangleMeshDataflowNode @ 14e923350

FMakeRectangleMeshDataflowNode * __thiscall
FMakeRectangleMeshDataflowNode::FMakeRectangleMeshDataflowNode(FMakeRectangleMeshDataflowNode *this)

{
  undefined8 uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FMakeRectangleMeshDataflowNode__6B_;
  (this->Origin).field0_0x0._s_0.X = 0.0;
  (this->Origin).field0_0x0._s_0.Y = 0.0;
  (this->Origin).field0_0x0._s_0.Z = 0.0;
  uVar1 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  (this->Normal).field0_0x0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  (this->Normal).field0_0x0._s_0.Y = (double)uVar1;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  this->Width = 5.0;
  this->Height = 5.0;
  this->WidthVertexCount = 3;
  this->HeightVertexCount = 3;
  return this;
}

