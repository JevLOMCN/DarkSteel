// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8500d0

UScriptStruct * __cdecl FApplyMeshProcessorToMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode,
                         (UObject *)pUVar1,L"ApplyMeshProcessorToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e850290

FName __thiscall
FApplyMeshProcessorToMeshDataflowNode::GetType(FApplyMeshProcessorToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FApplyMeshProcessorToMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e8502e0

bool __thiscall
FApplyMeshProcessorToMeshDataflowNode::IsA
          (FApplyMeshProcessorToMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FApplyMeshProcessorToMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e850348;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e850348:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e850366;
      }
    }
  }
  bVar5 = true;
LAB_14e850366:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8503a0

FStructOnScope * __thiscall
FApplyMeshProcessorToMeshDataflowNode::NewStructOnScope(FApplyMeshProcessorToMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode,
                           (UObject *)pUVar2,L"ApplyMeshProcessorToMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e850420

void __thiscall
FApplyMeshProcessorToMeshDataflowNode::SerializeInternal
          (FApplyMeshProcessorToMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode,
                         (UObject *)pUVar1,L"ApplyMeshProcessorToMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  return;
}

// GetDisplayName @ 14e8504d0

FName __thiscall
FApplyMeshProcessorToMeshDataflowNode::GetDisplayName(FApplyMeshProcessorToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ApplyGeometryScriptToMesh");
  return in_RDX;
}

// GetCategory @ 14e850500

FName __thiscall
FApplyMeshProcessorToMeshDataflowNode::GetCategory(FApplyMeshProcessorToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e850580

FString * __thiscall
FApplyMeshProcessorToMeshDataflowNode::GetTags
          (FApplyMeshProcessorToMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8505b0

UScriptStruct * __thiscall
FApplyMeshProcessorToMeshDataflowNode::TypedScriptStruct
          (FApplyMeshProcessorToMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode,
                         (UObject *)pUVar1,L"ApplyMeshProcessorToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e850b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FApplyMeshProcessorToMeshDataflowNode::Evaluate
          (FApplyMeshProcessorToMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UDynamicMesh> *pTVar1;
  TObjectPtr<UDynamicMesh> TVar2;
  FProperty *pFVar3;
  void *pvVar4;
  uint uVar5;
  undefined1 *puVar6;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar7;
  FDataflowInput *pFVar8;
  FDataflowOutput *this_00;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  UObject *pUVar12;
  TObjectPtr<UDynamicMesh>_u_0 this_01;
  TObjectPtr<UDynamicMesh>_u_0 local_res8;
  TObjectPtr<UDynamicMesh>_u_0 local_res18;
  FConnectionReference local_78;
  FConnectionReference local_60;
  FConnectionReference local_48;
  
  pTVar1 = &this->Mesh;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar6 == pTVar1) {
    pTVar7 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                        ((FDataflowNode *)this,param_1,pTVar1)->field0_0x0;
    TVar2.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar7->DebugPtr;
    if (TVar2.field0_0x0 == (UDynamicMesh *)0x0) {
      pUVar12 = GetTransientPackageAsObject();
      local_res8.DebugPtr = NewObject<UDynamicMesh>(pUVar12);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UDynamicMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>_>
                ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res8.ObjectPtr,
                 pTVar1);
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      if (this->_padding_ == 0) {
        local_60.ContainerReference = (void *)0x0;
        local_60.Index = -1;
        local_60.Reference = pTVar1;
        pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_60);
        pvVar4 = local_60.Reference;
        if (pFVar8->Connection == (FDataflowOutput *)0x0) {
          local_48.Index = -1;
          local_48.ContainerReference = (void *)0x0;
          local_48.Reference = pTVar1;
          this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_48);
          if (this_00 == (FDataflowOutput *)0x0) {
            `FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_const_&,TObjectPtr<UDynamicMesh>_>'::
            __l7::<lambda_1>::operator()(&local_res18);
          }
          else if (this_00->_padding_ != 0) {
            FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
            uVar5 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
            pFVar10 = FDataflowConnection::GetOwningNodeGuid
                                ((FDataflowConnection *)this_00,(FGuid *)&local_78);
            pFVar3 = (FProperty *)this_00->_padding_;
            uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
            UE::Dataflow::FContext::SetData<TObjectPtr<UDynamicMesh>_const_&>
                      (param_1,(uint)uVar11,pFVar3,pvVar4,pFVar10,uVar5,(FTimestamp *)FVar9.Value);
          }
        }
        else {
          local_78.Index = -1;
          local_78.ContainerReference = (void *)0x0;
          local_78.Reference = pTVar1;
          FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_60,&local_78);
        }
      }
      else {
        pUVar12 = GetTransientPackageAsObject();
        this_01.DebugPtr = NewObject<UDynamicMesh>(pUVar12);
        local_res18.DebugPtr = this_01.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01.DebugPtr != (UDynamicMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
        }
        UDynamicMesh::SetMesh
                  (this_01.DebugPtr,*(FDynamicMesh3 **)((longlong)TVar2.field0_0x0 + 0xb8));
        if (1 < (byte)LogGeometryCollectionMeshNodes._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionMeshNodes);
        }
        local_res8.DebugPtr = local_res8.DebugPtr & 0xffffffffffffff00;
        UDynamicMeshProcessorBlueprint::ProcessDynamicMesh
                  ((UDynamicMeshProcessorBlueprint *)this->_padding_,this_01.DebugPtr,
                   (bool *)&local_res8);
        FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
                  ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res18.ObjectPtr,
                   pTVar1);
      }
    }
  }
  return;
}

