// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8513e0

UScriptStruct * __cdecl FGetGeometryCollectionSourcesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode,
                         (UObject *)pUVar1,L"GetGeometryCollectionSourcesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.OuterSingleton;
}

// GetType @ 14e851700

FName __thiscall
FGetGeometryCollectionSourcesDataflowNode::GetType(FGetGeometryCollectionSourcesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetGeometryCollectionSourcesDataflowNode");
  return in_RDX;
}

// IsA @ 14e851c00

bool __thiscall
FGetGeometryCollectionSourcesDataflowNode::IsA
          (FGetGeometryCollectionSourcesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetGeometryCollectionSourcesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e851c68;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e851c68:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e851c86;
      }
    }
  }
  bVar5 = true;
LAB_14e851c86:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e851cc0

FStructOnScope * __thiscall
FGetGeometryCollectionSourcesDataflowNode::NewStructOnScope
          (FGetGeometryCollectionSourcesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode,
                           (UObject *)pUVar2,L"GetGeometryCollectionSourcesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e851d40

void __thiscall
FGetGeometryCollectionSourcesDataflowNode::SerializeInternal
          (FGetGeometryCollectionSourcesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode,
                         (UObject *)pUVar1,L"GetGeometryCollectionSourcesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e851dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e851dd0

FName __thiscall
FGetGeometryCollectionSourcesDataflowNode::GetDisplayName
          (FGetGeometryCollectionSourcesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetGeometryCollectionSources");
  return in_RDX;
}

// GetCategory @ 14e851ee0

FName __thiscall
FGetGeometryCollectionSourcesDataflowNode::GetCategory
          (FGetGeometryCollectionSourcesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Asset");
  return in_RDX;
}

// GetTags @ 14e851f70

FString * __thiscall
FGetGeometryCollectionSourcesDataflowNode::GetTags
          (FGetGeometryCollectionSourcesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e851fd0

UScriptStruct * __thiscall
FGetGeometryCollectionSourcesDataflowNode::TypedScriptStruct
          (FGetGeometryCollectionSourcesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode,
                         (UObject *)pUVar1,L"GetGeometryCollectionSourcesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode.OuterSingleton;
}

// Evaluate @ 14e852210

void __thiscall
FGetGeometryCollectionSourcesDataflowNode::Evaluate
          (FGetGeometryCollectionSourcesDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  FDataflowInput *this_00;
  TObjectPtr<UGeometryCollection>_u_0 *pTVar4;
  undefined1 local_res8 [8];
  TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> local_38;
  FConnectionReference local_28;
  
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))();
  if ((TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *)puVar3 != &this->Sources) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5163137966440186138>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionAssetNodes.cpp"
                       ,0x11a,"Out->IsA(&Sources)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.Index = -1;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Reference = &this->Asset;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28.ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  pTVar4 = &FDataflowInput::GetValue<TObjectPtr<UGeometryCollection>_>
                      (this_00,param_1,local_28.Reference)->field0_0x0;
  if (pTVar4->DebugPtr != (UGeometryCollection *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pTVar4->DebugPtr);
    }
    `FGetGeometryCollectionSourcesDataflowNode::Evaluate'::__l5::<lambda_1>::operator()(local_res8);
  }
  FDataflowNode::
  SetValue<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&,TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_38,&this->Sources);
  DestructItems<FGeometryCollectionSource,int>((FGeometryCollectionSource *)0x0,0);
  return;
}

// FGetGeometryCollectionSourcesDataflowNode @ 14e920a40

FGetGeometryCollectionSourcesDataflowNode * __thiscall
FGetGeometryCollectionSourcesDataflowNode::FGetGeometryCollectionSourcesDataflowNode
          (FGetGeometryCollectionSourcesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FGetGeometryCollectionSourcesDataflowNode__6B_;
  local_48.Reference = &this->Asset;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TObjectPtr<UGeometryCollection> *)local_48.Reference)->field0_0x0).DebugPtr =
       (UGeometryCollection *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  local_48.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Sources;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// operator() @ 15059a100

bool __thiscall
`FGetGeometryCollectionSourcesDataflowNode::Evaluate'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5163137966440186147>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5163137966440186147>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

