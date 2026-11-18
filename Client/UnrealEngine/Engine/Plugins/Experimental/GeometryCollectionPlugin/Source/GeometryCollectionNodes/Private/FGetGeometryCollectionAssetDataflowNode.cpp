// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e84b0e0

UScriptStruct * __cdecl FGetGeometryCollectionAssetDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode,
                         (UObject *)pUVar1,L"GetGeometryCollectionAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.OuterSingleton;
}

// GetType @ 14e84b5c0

FName __thiscall
FGetGeometryCollectionAssetDataflowNode::GetType(FGetGeometryCollectionAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetGeometryCollectionAssetDataflowNode");
  return in_RDX;
}

// IsA @ 14e84b710

bool __thiscall
FGetGeometryCollectionAssetDataflowNode::IsA
          (FGetGeometryCollectionAssetDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetGeometryCollectionAssetDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e84b778;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e84b778:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e84b796;
      }
    }
  }
  bVar5 = true;
LAB_14e84b796:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e84b8b0

FStructOnScope * __thiscall
FGetGeometryCollectionAssetDataflowNode::NewStructOnScope
          (FGetGeometryCollectionAssetDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode,
                           (UObject *)pUVar2,L"GetGeometryCollectionAssetDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e84b930

void __thiscall
FGetGeometryCollectionAssetDataflowNode::SerializeInternal
          (FGetGeometryCollectionAssetDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode,
                         (UObject *)pUVar1,L"GetGeometryCollectionAssetDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84b9ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e84b9c0

FName __thiscall
FGetGeometryCollectionAssetDataflowNode::GetDisplayName
          (FGetGeometryCollectionAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetGeometryCollectionAsset");
  return in_RDX;
}

// GetCategory @ 14e84ba60

FName __thiscall
FGetGeometryCollectionAssetDataflowNode::GetCategory(FGetGeometryCollectionAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Asset");
  return in_RDX;
}

// GetTags @ 14e84ba90

FString * __thiscall
FGetGeometryCollectionAssetDataflowNode::GetTags
          (FGetGeometryCollectionAssetDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e84bac0

UScriptStruct * __thiscall
FGetGeometryCollectionAssetDataflowNode::TypedScriptStruct
          (FGetGeometryCollectionAssetDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode,
                         (UObject *)pUVar1,L"GetGeometryCollectionAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetGeometryCollectionAssetDataflowNode.OuterSingleton;
}

// Evaluate @ 14e84bf80

void __thiscall
FGetGeometryCollectionAssetDataflowNode::Evaluate
          (FGetGeometryCollectionAssetDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FObjectPtr_u_0 *this_00;
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  UClass *pUVar12;
  FDataflowOutput *this_01;
  FTimestamp FVar13;
  FGuid *pFVar14;
  ulong64 uVar15;
  undefined8 *puVar16;
  FContext *pFVar17;
  FContext *pFVar18;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  FName local_res18 [2];
  FGuid local_78;
  FConnectionReference local_68;
  
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((TObjectPtr<UGeometryCollection> *)puVar11 != &this->Asset) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5163137966440186117>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionAssetNodes.cpp"
                         ,0x105,"Out->IsA(&Asset)"), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar18 = (FContext *)0x0;
  pcVar4 = *(code **)(param_1->_padding_ + 0x18);
  ::FName::FName(local_res18,"TEngineContext");
  cVar9 = (*pcVar4)(param_1,local_res18[0]);
  pFVar17 = param_1;
  if (cVar9 == '\0') {
    pFVar17 = pFVar18;
  }
  if (pFVar17 != (FContext *)0x0) {
    this_00 = (FObjectPtr_u_0 *)(pFVar17 + 1);
    if (this_00->Handle != (UObject *)0x0) {
      pUVar12 = Z_Construct_UClass_UGeometryCollection_NoRegister();
      bVar8 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar12);
      if (bVar8) {
        pFVar18 = (FContext *)this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pFVar18 != (FContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pFVar18);
    }
  }
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Asset;
  this_01 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_68);
  if (this_01 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<TObjectPtr<UGeometryCollection>_&,TObjectPtr<UGeometryCollection>_>'::
    __l7::<lambda_1>::operator()(local_res8);
  }
  else if (this_01->_padding_ != 0) {
    FVar13 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
    uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
    pFVar14 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_78);
    pFVar1 = (FProperty *)this_01->_padding_;
    uVar15 = CityHash64((char *)&this_01->_padding_,0x10);
    local_res10 = (undefined8 *)0x0;
    puVar16 = ::operator_new(0x50);
    if (puVar16 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      uVar2 = *(undefined8 *)FVar13.Value;
      uVar5 = *(undefined8 *)pFVar14;
      uVar6 = *(undefined8 *)&pFVar14->C;
      *puVar16 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
      puVar16[6] = uVar2;
      *(undefined8 *)((longlong)puVar16 + 0xc) = uVar5;
      *(undefined8 *)((longlong)puVar16 + 0x14) = uVar6;
      *(undefined4 *)(puVar16 + 1) = 3;
      puVar16[4] = pFVar1;
      *(uint *)(puVar16 + 5) = uVar10;
      puVar16[7] = &___7FGCObject__6B_;
      *(undefined2 *)(puVar16 + 8) = 0;
      FGCObject::RegisterGCObject((FGCObject *)(puVar16 + 7));
      *puVar16 = &UE::Dataflow::
                  TContextCacheElementUObject<TObjectPtr<UGeometryCollection>&___ptr64>::
                  _vftable__for__UE__Dataflow__FContextCacheElementBase__;
      puVar16[7] = &UE::Dataflow::
                    TContextCacheElementUObject<TObjectPtr<UGeometryCollection>&___ptr64>::
                    _vftable__for__FGCObject__;
      puVar16[9] = pFVar18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pFVar18 != (FContext *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pFVar18);
      }
    }
    puVar7 = local_res10;
    if (local_res10 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*local_res10;
      local_res10 = puVar16;
      (*(code *)*puVar3)(puVar7,1);
      puVar16 = local_res10;
    }
    local_res10 = puVar16;
    if (local_res10 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar15,pFVar1,pFVar14,uVar10,(FTimestamp *)FVar13.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar15 & 0xffffffff,&local_res10);
    }
    if (local_res10 != (undefined8 *)0x0) {
      (**(code **)*local_res10)(local_res10,1);
      return;
    }
  }
  return;
}

// FGetGeometryCollectionAssetDataflowNode @ 14e9209a0

FGetGeometryCollectionAssetDataflowNode * __thiscall
FGetGeometryCollectionAssetDataflowNode::FGetGeometryCollectionAssetDataflowNode
          (FGetGeometryCollectionAssetDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8 [4];
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  this->_padding_ = (longlong)&___7FGetGeometryCollectionAssetDataflowNode__6B_;
  local_28.Reference = &this->Asset;
  local_48.Reference = (void *)0x0;
  (((TObjectPtr<UGeometryCollection> *)local_28.Reference)->field0_0x0).DebugPtr =
       (UGeometryCollection *)0x0;
  local_48.ContainerReference = (void *)0x0;
  local_28.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

