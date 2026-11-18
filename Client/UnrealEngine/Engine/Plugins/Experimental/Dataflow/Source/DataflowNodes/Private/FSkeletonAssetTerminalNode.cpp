// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 12

// StaticStruct @ 14dabd430

UScriptStruct * __cdecl FSkeletonAssetTerminalNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonAssetTerminalNode,(UObject *)pUVar1,
                         L"SkeletonAssetTerminalNode");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton;
}

// GetType @ 14dabd470

FName __thiscall FSkeletonAssetTerminalNode::GetType(FSkeletonAssetTerminalNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSkeletonAssetTerminalNode");
  return in_RDX;
}

// IsA @ 14dabd4a0

bool __thiscall FSkeletonAssetTerminalNode::IsA(FSkeletonAssetTerminalNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  bool bVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_20);
  ::FName::FName(&local_res20,"FSkeletonAssetTerminalNode");
  pFVar4 = ::FName::ToString(&local_res20,&local_30);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar6 = iVar2 == 0;
      goto LAB_14dabd511;
    }
  }
  else {
    bVar6 = iVar1 + iVar2 == 1;
LAB_14dabd511:
    if (!bVar6) {
      local_res18 = local_res10;
      pFVar3 = ::FName::ToString(&local_res18,&local_40);
      ::FName::FName(&local_58,"FDataflowTerminalNode");
      pFVar4 = ::FName::ToString(&local_58,&local_50);
      iVar2 = (pFVar3->Data).ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar2 == iVar1) {
        if (1 < iVar2) {
          iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar6 = iVar2 == 0;
          goto LAB_14dabd585;
        }
LAB_14dabd5a4:
        bVar6 = true;
      }
      else {
        bVar6 = iVar1 + iVar2 == 1;
LAB_14dabd585:
        if (bVar6) goto LAB_14dabd5a4;
        bVar6 = FDataflowNode::IsA((FDataflowNode *)this,local_res18);
        if (bVar6) goto LAB_14dabd5a4;
        bVar6 = false;
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      bVar5 = false;
      if (!bVar6) goto LAB_14dabd5ca;
    }
  }
  bVar5 = true;
LAB_14dabd5ca:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dabd600

FStructOnScope * __thiscall
FSkeletonAssetTerminalNode::NewStructOnScope(FSkeletonAssetTerminalNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonAssetTerminalNode,(UObject *)pUVar2,
                           L"SkeletonAssetTerminalNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dabd680

void __thiscall
FSkeletonAssetTerminalNode::SerializeInternal(FSkeletonAssetTerminalNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonAssetTerminalNode,(UObject *)pUVar1,
                         L"SkeletonAssetTerminalNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dabd6fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dabd710

FName __thiscall FSkeletonAssetTerminalNode::GetDisplayName(FSkeletonAssetTerminalNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SkeletonAssetTerminal");
  return in_RDX;
}

// GetCategory @ 14dabd740

FName __thiscall FSkeletonAssetTerminalNode::GetCategory(FSkeletonAssetTerminalNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Terminal");
  return in_RDX;
}

// GetTags @ 14dabd770

FString * __thiscall
FSkeletonAssetTerminalNode::GetTags
          (FSkeletonAssetTerminalNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dabd7a0

UScriptStruct * __thiscall
FSkeletonAssetTerminalNode::TypedScriptStruct(FSkeletonAssetTerminalNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonAssetTerminalNode,(UObject *)pUVar1,
                         L"SkeletonAssetTerminalNode");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton;
}

// Evaluate @ 14dabd7e0

void __thiscall
FSkeletonAssetTerminalNode::Evaluate(FSkeletonAssetTerminalNode *this,FContext *param_1)

{
  return;
}

// SetAssetValue @ 14dabd830

void __thiscall
FSkeletonAssetTerminalNode::SetAssetValue
          (FSkeletonAssetTerminalNode *this,TObjectPtr<UObject> param_1,FContext *param_2)

{
  int iVar1;
  FDataflowOutput *this_00;
  FProperty *pFVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  FDataflowInput *pFVar6;
  TObjectPtr<USkeleton> *pTVar7;
  TObjectPtr<USkeleton_const_>_u_0 *pTVar8;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  USkeleton *pUVar14;
  FConnectionReference local_68;
  FConnectionReference local_50;
  
  pUVar14 = *(USkeleton **)param_1.field0_0x0;
  if (pUVar14 != (USkeleton *)0x0) {
    pUVar5 = Z_Construct_UClass_USkeleton_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14dabd874;
  }
  pUVar14 = (USkeleton *)0x0;
LAB_14dabd874:
  if (pUVar14 == (USkeleton *)0x0) {
    local_68.Reference = &this->SkeletonAsset;
    local_68.Index = -1;
    local_68.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68);
    pTVar7 = FDataflowInput::GetValue<TObjectPtr<USkeleton>_>(pFVar6,param_2,local_68.Reference);
    pUVar14 = (pTVar7->field0_0x0).DebugPtr;
    if (pUVar14 == (USkeleton *)0x0) {
      return;
    }
  }
  local_50.Reference = &this->SourceSkeleton;
  local_50.Index = -1;
  local_50.ContainerReference = (void *)0x0;
  pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_50);
  pTVar8 = local_50.Reference;
  this_00 = pFVar6->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar3 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar3) {
      pTVar8 = (TObjectPtr<USkeleton_const_>_u_0 *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar8);
    }
    else {
      bVar3 = FDataflowOutput::Evaluate(this_00,param_2);
      if (!bVar3) {
        FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar6);
        uVar4 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar6);
        pFVar10 = FDataflowConnection::GetOwningNodeGuid
                            ((FDataflowConnection *)pFVar6,(FGuid *)&local_68);
        pFVar2 = (FProperty *)pFVar6->_padding_;
        uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
        UE::Dataflow::FContext::SetData<TObjectPtr<USkeleton_const_>_const_&>
                  (param_2,(uint)uVar11,pFVar2,&pTVar8->ObjectPtr,pFVar10,uVar4,
                   (FTimestamp *)FVar9.Value);
      }
      uVar11 = UE::Dataflow::FTimestamp::Invalid;
      uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
      bVar3 = UE::Dataflow::FContext::HasData(param_2,(uint)uVar12,(FTimestamp)uVar11);
      if (bVar3) {
        pFVar2 = (FProperty *)pFVar6->_padding_;
        uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
        puVar13 = (undefined8 *)
                  (**(code **)(param_2->_padding_ + 0x30))(param_2,uVar11 & 0xffffffff);
        if (puVar13 != (undefined8 *)0x0) {
          pTVar8 = &UE::Dataflow::FContextCacheElementBase::
                    GetTypedData<TObjectPtr<USkeleton_const_>_>
                              ((FContextCacheElementBase *)*puVar13,(IContextCacheStore *)param_2,
                               pFVar2,&pTVar8->ObjectPtr)->field0_0x0;
        }
      }
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pTVar8->DebugPtr != (USkeleton *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pTVar8->DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (USkeleton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
  }
  return;
}

// FSkeletonAssetTerminalNode @ 14dacdfe0

FSkeletonAssetTerminalNode * __thiscall
FSkeletonAssetTerminalNode::FSkeletonAssetTerminalNode
          (FSkeletonAssetTerminalNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FName local_res8;
  FConnectionReference local_28;
  
  local_28.Reference = *(void **)param_2;
  local_28.Index = param_2->C;
  local_28._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_28);
  local_28.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FSkeletonAssetTerminalNode__6B_;
  local_28.Reference = &this->SourceSkeleton;
  (this->SkeletonAsset).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (((TObjectPtr<USkeleton_const_> *)local_28.Reference)->field0_0x0).DebugPtr = (USkeleton *)0x0;
  local_28.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_28,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->SkeletonAsset;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_28,&local_res8);
  return this;
}

