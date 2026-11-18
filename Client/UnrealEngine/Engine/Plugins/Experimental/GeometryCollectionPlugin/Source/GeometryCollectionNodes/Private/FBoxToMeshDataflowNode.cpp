// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e85e170

UScriptStruct * __cdecl FBoxToMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode,(UObject *)pUVar1,
                         L"BoxToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e85e2f0

FName __thiscall FBoxToMeshDataflowNode::GetType(FBoxToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBoxToMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e85e390

bool __thiscall FBoxToMeshDataflowNode::IsA(FBoxToMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBoxToMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e85e3f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e85e3f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e85e416;
      }
    }
  }
  bVar5 = true;
LAB_14e85e416:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e85e490

FStructOnScope * __thiscall FBoxToMeshDataflowNode::NewStructOnScope(FBoxToMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode,(UObject *)pUVar2,
                           L"BoxToMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e85e520

void __thiscall
FBoxToMeshDataflowNode::SerializeInternal(FBoxToMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode,(UObject *)pUVar1,
                         L"BoxToMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e85e59d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e85e5b0

FName __thiscall FBoxToMeshDataflowNode::GetDisplayName(FBoxToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BoxToMesh");
  return in_RDX;
}

// GetCategory @ 14e85e620

FName __thiscall FBoxToMeshDataflowNode::GetCategory(FBoxToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e85e650

FString * __thiscall
FBoxToMeshDataflowNode::GetTags(FBoxToMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e85e680

UScriptStruct * __thiscall FBoxToMeshDataflowNode::TypedScriptStruct(FBoxToMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode,(UObject *)pUVar1,
                         L"BoxToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoxToMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e85ee50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBoxToMeshDataflowNode::Evaluate
          (FBoxToMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDynamicMesh3 *pFVar1;
  int iVar2;
  undefined1 *puVar3;
  UObject *pUVar4;
  TObjectPtr<UDynamicMesh>_u_0 this_00;
  TBox<double> *pTVar5;
  undefined1 auStack_b8 [32];
  TObjectPtr<UDynamicMesh>_u_0 local_98;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_90;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_80;
  TVector<double>_u_0 local_70;
  double dStack_58;
  double local_50;
  double dStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((TObjectPtr<UDynamicMesh> *)puVar3 != &this->Mesh) &&
     (puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar3 != &this->TriangleCount)) {
    return;
  }
  pUVar4 = GetTransientPackageAsObject();
  this_00.DebugPtr = NewObject<UDynamicMesh>(pUVar4);
  local_98.DebugPtr = this_00.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00.DebugPtr != (UDynamicMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
  }
  UDynamicMesh::Reset(this_00.DebugPtr);
  pFVar1 = ((this_00.DebugPtr)->Mesh).Ptr;
  pTVar5 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                     ((FDataflowNode *)this,param_1,&this->Box);
  local_70._s_0.X = (pTVar5->Min).field0_0x0._s_0.X;
  local_70._s_0.Y = (pTVar5->Min).field0_0x0._s_0.Y;
  local_70._s_0.Z = (pTVar5->Min).field0_0x0._s_0.Z;
  dStack_58 = (pTVar5->Max).field0_0x0._s_0.X;
  local_50 = (pTVar5->Max).field0_0x0._s_0.Y;
  dStack_48 = (pTVar5->Max).field0_0x0._s_0.Z;
  local_40._0_1_ = pTVar5->IsValid;
  local_40._1_1_ = pTVar5->Pad[0];
  local_40._2_1_ = pTVar5->Pad[1];
  local_40._3_1_ = pTVar5->Pad[2];
  local_40._4_1_ = pTVar5->Pad[3];
  local_40._5_1_ = pTVar5->Pad[4];
  local_40._6_1_ = pTVar5->Pad[5];
  local_40._7_1_ = pTVar5->Pad[6];
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  FFractureEngineUtility::ConvertBoxToVertexAndTriangleData
            ((TBox<double> *)&local_70._s_0,&local_80,&local_90);
  FFractureEngineUtility::ConstructMesh(pFVar1,&local_80,&local_90);
  FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
            ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_98.ObjectPtr,
             &this->Mesh);
  iVar2 = UDynamicMesh::GetTriangleCount(this_00.DebugPtr);
  local_98._0_4_ = iVar2;
  FDataflowNode::SetValue<int,int>
            ((FDataflowNode *)this,param_1,(int *)&local_98,&this->TriangleCount);
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// FBoxToMeshDataflowNode @ 14e912e90

FBoxToMeshDataflowNode * __thiscall
FBoxToMeshDataflowNode::FBoxToMeshDataflowNode
          (FBoxToMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  local_58.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FBoxToMeshDataflowNode__6B_;
  local_58.Reference = &this->Box;
  (((TBox<double> *)local_58.Reference)->Min).field0_0x0._s_0.X = 0.0;
  (this->Box).Min.field0_0x0._s_0.Y = 0.0;
  (this->Box).Min.field0_0x0._s_0.Z = 0.0;
  (this->Box).Max.field0_0x0._s_0.X = 0.0;
  (this->Box).Max.field0_0x0._s_0.Y = 0.0;
  (this->Box).Max.field0_0x0._s_0.Z = 0.0;
  (this->Box).IsValid = '\0';
  (this->Box).Pad[0] = '\0';
  (this->Box).Pad[1] = '\0';
  (this->Box).Pad[2] = '\0';
  (this->Box).Pad[3] = '\0';
  (this->Box).Pad[4] = '\0';
  (this->Box).Pad[5] = '\0';
  (this->Box).Pad[6] = '\0';
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  this->TriangleCount = 0;
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

// FBoxToMeshDataflowNode @ 14e912fe0

FBoxToMeshDataflowNode * __thiscall
FBoxToMeshDataflowNode::FBoxToMeshDataflowNode(FBoxToMeshDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FBoxToMeshDataflowNode__6B_;
  (this->Box).Min.field0_0x0._s_0.X = 0.0;
  (this->Box).Min.field0_0x0._s_0.Y = 0.0;
  (this->Box).Min.field0_0x0._s_0.Z = 0.0;
  (this->Box).Max.field0_0x0._s_0.X = 0.0;
  (this->Box).Max.field0_0x0._s_0.Y = 0.0;
  (this->Box).Max.field0_0x0._s_0.Z = 0.0;
  (this->Box).IsValid = '\0';
  (this->Box).Pad[0] = '\0';
  (this->Box).Pad[1] = '\0';
  (this->Box).Pad[2] = '\0';
  (this->Box).Pad[3] = '\0';
  (this->Box).Pad[4] = '\0';
  (this->Box).Pad[5] = '\0';
  (this->Box).Pad[6] = '\0';
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  this->TriangleCount = 0;
  return this;
}

