// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e872a20

UScriptStruct * __cdecl FMeshAppendDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshAppendDataflowNode,(UObject *)pUVar1,
                         L"MeshAppendDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton;
}

// GetType @ 14e872bf0

FName __thiscall FMeshAppendDataflowNode::GetType(FMeshAppendDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMeshAppendDataflowNode");
  return in_RDX;
}

// IsA @ 14e872c60

bool __thiscall FMeshAppendDataflowNode::IsA(FMeshAppendDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMeshAppendDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e872cc8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e872cc8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e872ce6;
      }
    }
  }
  bVar5 = true;
LAB_14e872ce6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e872d20

FStructOnScope * __thiscall FMeshAppendDataflowNode::NewStructOnScope(FMeshAppendDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMeshAppendDataflowNode,(UObject *)pUVar2,
                           L"MeshAppendDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e872da0

void __thiscall
FMeshAppendDataflowNode::SerializeInternal(FMeshAppendDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshAppendDataflowNode,(UObject *)pUVar1,
                         L"MeshAppendDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e872e1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e872e70

FName __thiscall FMeshAppendDataflowNode::GetDisplayName(FMeshAppendDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MeshAppend");
  return in_RDX;
}

// GetCategory @ 14e873570

FName __thiscall FMeshAppendDataflowNode::GetCategory(FMeshAppendDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e8735d0

FString * __thiscall
FMeshAppendDataflowNode::GetTags(FMeshAppendDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e873600

UScriptStruct * __thiscall FMeshAppendDataflowNode::TypedScriptStruct(FMeshAppendDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshAppendDataflowNode,(UObject *)pUVar1,
                         L"MeshAppendDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshAppendDataflowNode.OuterSingleton;
}

// Evaluate @ 14e873b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshAppendDataflowNode::Evaluate
          (FMeshAppendDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UDynamicMesh> *pTVar1;
  TObjectPtr<UDynamicMesh> TVar2;
  TObjectPtr<UDynamicMesh> TVar3;
  FDynamicMesh3 *pFVar4;
  FDynamicMesh3 *pFVar5;
  undefined1 *puVar6;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar7;
  UObject *pUVar8;
  TObjectPtr<UDynamicMesh>_u_0 this_00;
  undefined1 auStackY_668 [32];
  TObjectPtr<UDynamicMesh>_u_0 local_638;
  FDynamicMeshEditor local_630;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_628;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_5f8;
  FMeshIndexMappings local_5c8;
  FMeshIndexMappings local_308;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_668;
  pTVar1 = &this->Mesh;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar6 == pTVar1) {
    pTVar7 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                        ((FDataflowNode *)this,param_1,&this->Mesh1)->field0_0x0;
    TVar2.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar7->DebugPtr;
    if (TVar2.field0_0x0 != (UDynamicMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      pTVar7 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                          ((FDataflowNode *)this,param_1,&this->Mesh2)->field0_0x0;
      TVar3.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar7->DebugPtr;
      if (TVar3.field0_0x0 != (UDynamicMesh *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
        }
        pFVar4 = *(FDynamicMesh3 **)((longlong)TVar2.field0_0x0 + 0xb8);
        pFVar5 = *(FDynamicMesh3 **)((longlong)TVar3.field0_0x0 + 0xb8);
        if ((0 < (pFVar4->VertexRefCounts).UsedCount) || (0 < (pFVar5->VertexRefCounts).UsedCount))
        {
          pUVar8 = GetTransientPackageAsObject();
          this_00.DebugPtr = NewObject<UDynamicMesh>(pUVar8);
          local_638.DebugPtr = this_00.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00.DebugPtr != (UDynamicMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
          }
          UDynamicMesh::Reset(this_00.DebugPtr);
          local_630.Mesh = ((this_00.DebugPtr)->Mesh).Ptr;
          UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_308);
          local_628._0_8_ = 0;
          local_628._40_8_ = 0;
          local_5f8._0_8_ = 0;
          local_5f8._40_8_ = 0;
          UE::Geometry::FDynamicMeshEditor::AppendMesh
                    (&local_630,pFVar4,&local_308,&local_5f8,&local_628,false);
          UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_5c8);
          local_5f8._0_8_ = 0;
          local_5f8._40_8_ = 0;
          local_628._0_8_ = 0;
          local_628._40_8_ = 0;
          UE::Geometry::FDynamicMeshEditor::AppendMesh
                    (&local_630,pFVar5,&local_5c8,&local_628,&local_5f8,false);
          FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
                    ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_638.ObjectPtr,
                     pTVar1);
          UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_5c8);
          UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_308);
          return;
        }
      }
    }
    pUVar8 = GetTransientPackageAsObject();
    local_638.DebugPtr = NewObject<UDynamicMesh>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_638.DebugPtr != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_638.DebugPtr);
    }
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_638.ObjectPtr,pTVar1
              );
  }
  return;
}

// FMeshAppendDataflowNode @ 14e925170

FMeshAppendDataflowNode * __thiscall
FMeshAppendDataflowNode::FMeshAppendDataflowNode
          (FMeshAppendDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
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
  this->_padding_ = (longlong)&___7FMeshAppendDataflowNode__6B_;
  local_58.Reference = &this->Mesh1;
  (this->Mesh2).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (((TObjectPtr<UDynamicMesh> *)local_58.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Mesh2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Mesh;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

