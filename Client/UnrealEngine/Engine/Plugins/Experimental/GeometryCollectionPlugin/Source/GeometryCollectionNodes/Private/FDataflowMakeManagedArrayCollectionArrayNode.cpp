// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e86c3c0

UScriptStruct * __cdecl FDataflowMakeManagedArrayCollectionArrayNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode,
                         (UObject *)pUVar1,L"DataflowMakeManagedArrayCollectionArrayNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.
         OuterSingleton;
}

// GetType @ 14e86c610

FName __thiscall
FDataflowMakeManagedArrayCollectionArrayNode::GetType
          (FDataflowMakeManagedArrayCollectionArrayNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMakeManagedArrayCollectionArrayNode");
  return in_RDX;
}

// IsA @ 14e86c6c0

bool __thiscall
FDataflowMakeManagedArrayCollectionArrayNode::IsA
          (FDataflowMakeManagedArrayCollectionArrayNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMakeManagedArrayCollectionArrayNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e86c728;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e86c728:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e86c746;
      }
    }
  }
  bVar5 = true;
LAB_14e86c746:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e86c780

FStructOnScope * __thiscall
FDataflowMakeManagedArrayCollectionArrayNode::NewStructOnScope
          (FDataflowMakeManagedArrayCollectionArrayNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode,
                             (UObject *)pUVar2,L"DataflowMakeManagedArrayCollectionArrayNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e86caa0

void __thiscall
FDataflowMakeManagedArrayCollectionArrayNode::SerializeInternal
          (FDataflowMakeManagedArrayCollectionArrayNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode,
                         (UObject *)pUVar1,L"DataflowMakeManagedArrayCollectionArrayNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86cb1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e86cb30

FName __thiscall
FDataflowMakeManagedArrayCollectionArrayNode::GetDisplayName
          (FDataflowMakeManagedArrayCollectionArrayNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeManagedArrayCollectionArray");
  return in_RDX;
}

// GetCategory @ 14e86cb60

FName __thiscall
FDataflowMakeManagedArrayCollectionArrayNode::GetCategory
          (FDataflowMakeManagedArrayCollectionArrayNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e86cb90

FString * __thiscall
FDataflowMakeManagedArrayCollectionArrayNode::GetTags
          (FDataflowMakeManagedArrayCollectionArrayNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Make Managed Array Collection");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e86cbc0

UScriptStruct * __thiscall
FDataflowMakeManagedArrayCollectionArrayNode::TypedScriptStruct
          (FDataflowMakeManagedArrayCollectionArrayNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode,
                         (UObject *)pUVar1,L"DataflowMakeManagedArrayCollectionArrayNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMakeManagedArrayCollectionArrayNode.
         OuterSingleton;
}

// Evaluate @ 14e879560

void __thiscall
FDataflowMakeManagedArrayCollectionArrayNode::Evaluate
          (FDataflowMakeManagedArrayCollectionArrayNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  FDataflowInput *pFVar12;
  TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *pTVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  FManagedArrayCollection *pFVar16;
  FDataflowOutput *pFVar17;
  FTimestamp FVar18;
  FGuid *pFVar19;
  ulong64 uVar20;
  FDataflowOutput *pFVar21;
  FDataflowOutput *pFVar22;
  FDataflowOutput *local_res8;
  FConnectionReference local_78;
  FGuid local_60;
  FConnectionReference local_50;
  
  pTVar13 = &this->Array;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *)puVar11 == pTVar13) {
    local_50.Reference = &this->Element;
    local_50.ContainerReference = (void *)0x0;
    local_50.Index = -1;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_50);
    if (pFVar12->Connection == (FDataflowOutput *)0x0) {
      local_78.Index = -1;
      local_78.ContainerReference = (void *)0x0;
      local_78.Reference = pTVar13;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
      pvVar7 = local_78.Reference;
      local_50.Index = -1;
      local_50.ContainerReference = (void *)0x0;
      if (pFVar12->Connection == (FDataflowOutput *)0x0) {
        local_50.Reference = pTVar13;
        pFVar17 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_50);
        if (pFVar17 == (FDataflowOutput *)0x0) {
          `FDataflowNode::
          SetValue<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&,TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>'
          ::__l7::<lambda_1>::operator()(&local_res8);
        }
        else if (pFVar17->_padding_ != 0) {
          FVar18 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar17);
          uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar17);
          pFVar19 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)pFVar17,&local_60)
          ;
          pFVar1 = (FProperty *)pFVar17->_padding_;
          uVar20 = CityHash64((char *)&pFVar17->_padding_,0x10);
          UE::Dataflow::FContext::
          SetData<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
                    (param_1,(uint)uVar20,pFVar1,pvVar7,pFVar19,uVar10,(FTimestamp *)FVar18.Value);
        }
      }
      else {
        local_50.Reference = pTVar13;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_78,&local_50);
      }
    }
    else {
      local_50.Index = -1;
      local_50.ContainerReference = (void *)0x0;
      local_50.Reference = pTVar13;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_50);
      pTVar13 = local_50.Reference;
      pFVar17 = pFVar12->Connection;
      local_res8 = pFVar17;
      if (pFVar17 != (FDataflowOutput *)0x0) {
        bVar8 = FDataflowOutput::HasFrozenValue(pFVar17);
        if (bVar8) {
          pTVar13 = (TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *)
                    FDataflowOutput::GetFrozenPropertyValue(pFVar17,(uchar *)pTVar13);
        }
        else {
          bVar8 = FDataflowOutput::Evaluate(pFVar17,param_1);
          if (!bVar8) {
            FVar18 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar12);
            uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar12);
            pFVar19 = FDataflowConnection::GetOwningNodeGuid
                                ((FDataflowConnection *)pFVar12,&local_60);
            pFVar1 = (FProperty *)pFVar12->_padding_;
            uVar20 = CityHash64((char *)&local_res8->_padding_,0x10);
            UE::Dataflow::FContext::
            SetData<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
                      (param_1,(uint)uVar20,pFVar1,pTVar13,pFVar19,uVar10,(FTimestamp *)FVar18.Value
                      );
            pFVar17 = local_res8;
          }
          uVar20 = UE::Dataflow::FTimestamp::Invalid;
          uVar14 = CityHash64((char *)&pFVar17->_padding_,0x10);
          bVar8 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar14,(FTimestamp)uVar20);
          if (bVar8) {
            pFVar1 = (FProperty *)pFVar12->_padding_;
            uVar20 = CityHash64((char *)&pFVar17->_padding_,0x10);
            puVar15 = (undefined8 *)
                      (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar20 & 0xffffffff);
            if (puVar15 != (undefined8 *)0x0) {
              pTVar13 = UE::Dataflow::FContextCacheElementBase::
                        GetTypedData<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>
                                  ((FContextCacheElementBase *)*puVar15,
                                   (IContextCacheStore *)param_1,pFVar1,pTVar13);
            }
          }
        }
      }
      local_78.Reference = (FManagedArrayCollection *)0x0;
      iVar9 = pTVar13->ArrayNum;
      pFVar16 = (FManagedArrayCollection *)(pTVar13->AllocatorInstance).Data;
      local_78.Index = iVar9;
      if (iVar9 == 0) {
        local_78.Index = 0;
        local_78._12_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb0,8,iVar9,0,(ForAnyElementType *)&local_78,iVar9,(int *)&local_78.field_0xc);
        ConstructItems<FManagedArrayCollection,FManagedArrayCollection,int>
                  (local_78.Reference,pFVar16,iVar9);
      }
      pFVar16 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,&this->Element);
      iVar9 = local_78.Index;
      if (local_78.Index == local_78._12_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8b0,(ForAnyElementType *)&local_78,(int *)&local_78.field_0xc);
      }
      local_78.Index = iVar9 + 1;
      FManagedArrayCollection::FManagedArrayCollection
                ((FManagedArrayCollection *)((longlong)local_78.Reference + (longlong)iVar9 * 0xb0),
                 pFVar16);
      local_50.Reference = &this->Array;
      local_50.Index = -1;
      local_50.ContainerReference = (void *)0x0;
      pFVar17 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_50);
      if (pFVar17 == (FDataflowOutput *)0x0) {
        `FDataflowNode::
        SetValue<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>,TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>'
        ::__l7::<lambda_1>::operator()(&local_res8);
      }
      else if (pFVar17->_padding_ != 0) {
        FVar18 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar17);
        uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar17);
        pFVar19 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)pFVar17,&local_60);
        pFVar1 = (FProperty *)pFVar17->_padding_;
        uVar20 = CityHash64((char *)&pFVar17->_padding_,0x10);
        pFVar22 = (FDataflowOutput *)0x0;
        local_res8 = (FDataflowOutput *)0x0;
        pFVar21 = ::operator_new(0x48);
        pFVar17 = local_res8;
        if (pFVar21 != (FDataflowOutput *)0x0) {
          uVar2 = pFVar19->A;
          uVar3 = pFVar19->B;
          uVar4 = pFVar19->C;
          uVar5 = pFVar19->D;
          pFVar21->_padding_ = *(longlong *)FVar18.Value;
          pFVar21->_padding_ =
               (longlong)
               &
               ___7__TContextCacheElement_V__TArray_UFManagedArrayCollection__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
          ;
          *(undefined4 *)&pFVar21->_padding_ = 0;
          *(uint *)((longlong)&pFVar21->_padding_ + 4) = uVar2;
          *(uint *)&pFVar21->_padding_ = uVar3;
          *(uint *)((longlong)&pFVar21->_padding_ + 4) = uVar4;
          *(uint *)&pFVar21->_padding_ = uVar5;
          pFVar21->_padding_ = (longlong)pFVar1;
          *(uint *)&pFVar21->_padding_ = uVar10;
          pFVar21->_padding_ = (longlong)local_78.Reference;
          local_78.Reference = (FManagedArrayCollection *)0x0;
          *(int *)&pFVar21->_padding_ = local_78.Index;
          *(undefined4 *)((longlong)&pFVar21->_padding_ + 4) = local_78._12_4_;
          local_78.Index = 0;
          local_78._12_4_ = 0;
          pFVar22 = pFVar21;
        }
        if (local_res8 != (FDataflowOutput *)0x0) {
          plVar6 = &local_res8->_padding_;
          local_res8 = pFVar22;
          (**(code **)*plVar6)(pFVar17,1);
          pFVar22 = local_res8;
        }
        local_res8 = pFVar22;
        if (local_res8 == (FDataflowOutput *)0x0) {
          UE::Dataflow::FContext::SetNullData
                    (param_1,(uint)uVar20,pFVar1,pFVar19,uVar10,(FTimestamp *)FVar18.Value);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar20 & 0xffffffff,&local_res8);
        }
        if (local_res8 != (FDataflowOutput *)0x0) {
          (**(code **)local_res8->_padding_)(local_res8,1);
        }
      }
      DestructItems<FManagedArrayCollection,int>(local_78.Reference,local_78.Index);
      if (local_78.Reference != (FManagedArrayCollection *)0x0) {
        FMemory::Free(local_78.Reference);
      }
    }
  }
  return;
}

// FDataflowMakeManagedArrayCollectionArrayNode @ 14e91b5e0

FDataflowMakeManagedArrayCollectionArrayNode * __thiscall
FDataflowMakeManagedArrayCollectionArrayNode::FDataflowMakeManagedArrayCollectionArrayNode
          (FDataflowMakeManagedArrayCollectionArrayNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&___7FDataflowMakeManagedArrayCollectionArrayNode__6B_;
  pTVar1 = &this->Array;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Array).ArrayNum = 0;
  (this->Array).ArrayMax = 0;
  FManagedArrayCollection::FManagedArrayCollection(&this->Element);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ArrayElementDependencyGroup,"ArrayElement");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Element;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  local_38.Reference = pTVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

