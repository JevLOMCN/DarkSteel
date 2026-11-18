// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 10

// StaticStruct @ 14dabf210

UScriptStruct * __cdecl FGetPhysicsAssetFromSkeletalMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode,
                         (UObject *)pUVar1,L"GetPhysicsAssetFromSkeletalMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.
         OuterSingleton;
}

// GetType @ 14dabf250

FName __thiscall
FGetPhysicsAssetFromSkeletalMeshDataflowNode::GetType
          (FGetPhysicsAssetFromSkeletalMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetPhysicsAssetFromSkeletalMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14dabf2c0

bool __thiscall
FGetPhysicsAssetFromSkeletalMeshDataflowNode::IsA
          (FGetPhysicsAssetFromSkeletalMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetPhysicsAssetFromSkeletalMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dabf328;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dabf328:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dabf346;
      }
    }
  }
  bVar5 = true;
LAB_14dabf346:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dabf380

FStructOnScope * __thiscall
FGetPhysicsAssetFromSkeletalMeshDataflowNode::NewStructOnScope
          (FGetPhysicsAssetFromSkeletalMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode,
                             (UObject *)pUVar2,L"GetPhysicsAssetFromSkeletalMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dabf400

void __thiscall
FGetPhysicsAssetFromSkeletalMeshDataflowNode::SerializeInternal
          (FGetPhysicsAssetFromSkeletalMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode,
                         (UObject *)pUVar1,L"GetPhysicsAssetFromSkeletalMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dabf47d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dabf490

FName __thiscall
FGetPhysicsAssetFromSkeletalMeshDataflowNode::GetDisplayName
          (FGetPhysicsAssetFromSkeletalMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetPhysicsAssetFromSkeletalMesh");
  return in_RDX;
}

// GetCategory @ 14dabf4c0

FName __thiscall
FGetPhysicsAssetFromSkeletalMeshDataflowNode::GetCategory
          (FGetPhysicsAssetFromSkeletalMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"General");
  return in_RDX;
}

// GetTags @ 14dabf4f0

FString * __thiscall
FGetPhysicsAssetFromSkeletalMeshDataflowNode::GetTags
          (FGetPhysicsAssetFromSkeletalMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Get Physics Asset Skeletal Mesh");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dabf520

UScriptStruct * __thiscall
FGetPhysicsAssetFromSkeletalMeshDataflowNode::TypedScriptStruct
          (FGetPhysicsAssetFromSkeletalMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode,
                         (UObject *)pUVar1,L"GetPhysicsAssetFromSkeletalMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14dabf560

void __thiscall
FGetPhysicsAssetFromSkeletalMeshDataflowNode::Evaluate
          (FGetPhysicsAssetFromSkeletalMeshDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  TObjectPtr<USkeletalMesh_const_> TVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  TObjectPtr<USkeletalMesh_const_>_u_0 *pTVar10;
  UObject *pUVar11;
  FDataflowOutput *this_00;
  FTimestamp FVar12;
  FGuid *pFVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  undefined8 *local_res8;
  FGuid local_68;
  FConnectionReference local_58;
  
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UPhysicsAsset_const_> *)puVar9 == &this->PhysicsAsset) {
    pTVar10 = &FDataflowNode::GetValue<TObjectPtr<USkeletalMesh_const_>_>
                         ((FDataflowNode *)this,param_1,&this->SkeletalMesh)->field0_0x0;
    TVar1.field0_0x0 = (TObjectPtr<USkeletalMesh_const_>_u_0)pTVar10->DebugPtr;
    if (TVar1.field0_0x0 == (USkeletalMesh *)0x0) {
      pUVar11 = (UObject *)0x0;
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      pUVar11 = (UObject *)(**(code **)(*(longlong *)TVar1.field0_0x0 + 0x3b8))(TVar1.field0_0x0);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = &this->PhysicsAsset;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_58);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<TObjectPtr<UPhysicsAsset_const_>,TObjectPtr<UPhysicsAsset_const_>_>'
      ::__l7::<lambda_1>::operator()(&local_res8);
    }
    else if (this_00->_padding_ != 0) {
      FVar12 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      pFVar13 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_68);
      pFVar2 = (FProperty *)this_00->_padding_;
      uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (undefined8 *)0x0;
      puVar15 = ::operator_new(0x50);
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        uVar3 = *(undefined8 *)FVar12.Value;
        uVar5 = *(undefined8 *)pFVar13;
        uVar6 = *(undefined8 *)&pFVar13->C;
        *puVar15 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
        puVar15[6] = uVar3;
        *(undefined8 *)((longlong)puVar15 + 0xc) = uVar5;
        *(undefined8 *)((longlong)puVar15 + 0x14) = uVar6;
        *(undefined4 *)(puVar15 + 1) = 3;
        puVar15[4] = pFVar2;
        *(uint *)(puVar15 + 5) = uVar8;
        puVar15[7] = &___7FGCObject__6B_;
        *(undefined2 *)(puVar15 + 8) = 0;
        FGCObject::RegisterGCObject((FGCObject *)(puVar15 + 7));
        *puVar15 = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar15[7] = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::
                      _vftable__for__FGCObject__;
        puVar15[9] = pUVar11;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar11);
        }
      }
      puVar7 = local_res8;
      if (local_res8 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*local_res8;
        local_res8 = puVar15;
        (*(code *)*puVar4)(puVar7,1);
        puVar15 = local_res8;
      }
      local_res8 = puVar15;
      if (local_res8 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar14,pFVar2,pFVar13,uVar8,(FTimestamp *)FVar12.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar14 & 0xffffffff,&local_res8);
      }
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  return;
}

