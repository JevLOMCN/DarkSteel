// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 11

// StaticStruct @ 1462eab10

UScriptStruct * __cdecl FGetSimulationTimeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode,(UObject *)pUVar1,
                         L"GetSimulationTimeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton;
}

// GetType @ 1462eab50

FName __thiscall FGetSimulationTimeDataflowNode::GetType(FGetSimulationTimeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetSimulationTimeDataflowNode");
  return in_RDX;
}

// IsA @ 1462eab80

bool __thiscall
FGetSimulationTimeDataflowNode::IsA(FGetSimulationTimeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetSimulationTimeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462eabe8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462eabe8:
    if (!bVar5) {
      bVar5 = FDataflowInvalidNode::IsA((FDataflowInvalidNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462eac06;
      }
    }
  }
  bVar5 = true;
LAB_1462eac06:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462eac40

FStructOnScope * __thiscall
FGetSimulationTimeDataflowNode::NewStructOnScope(FGetSimulationTimeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowSimulation();
      Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode,
                           (UObject *)pUVar2,L"GetSimulationTimeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462eacc0

void __thiscall
FGetSimulationTimeDataflowNode::SerializeInternal
          (FGetSimulationTimeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode,(UObject *)pUVar1,
                         L"GetSimulationTimeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462ead3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462ead50

FName __thiscall
FGetSimulationTimeDataflowNode::GetDisplayName(FGetSimulationTimeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetSimulationTime");
  return in_RDX;
}

// GetCategory @ 1462ead80

FName __thiscall FGetSimulationTimeDataflowNode::GetCategory(FGetSimulationTimeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Physics|Common");
  return in_RDX;
}

// GetTags @ 1462eadb0

FString * __thiscall
FGetSimulationTimeDataflowNode::GetTags
          (FGetSimulationTimeDataflowNode *this,FString *__return_storage_ptr__)

{
  StaticTags(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462eadd0

UScriptStruct * __thiscall
FGetSimulationTimeDataflowNode::TypedScriptStruct(FGetSimulationTimeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode,(UObject *)pUVar1,
                         L"GetSimulationTimeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton;
}

// EvaluateSimulation @ 1462eae10

void __thiscall
FGetSimulationTimeDataflowNode::EvaluateSimulation
          (FGetSimulationTimeDataflowNode *this,
          TSimulationContext<UE::Dataflow::FContextSingle> *param_1,FDataflowOutput *param_2)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  FContextCacheElementUStruct *pFVar7;
  FContextCacheElementUStruct *pFVar8;
  FContextCacheElementUStruct *local_res8 [2];
  FDataflowSimulationTime local_68;
  FConnectionReference local_58;
  FGuid local_38;
  
  local_68.DeltaTime = param_1->DeltaTime;
  local_58.Reference = &this->SimulationTime;
  local_68.CurrentTime = param_1->SimulationTime;
  pFVar8 = (FContextCacheElementUStruct *)0x0;
  local_58.ContainerReference = (void *)0x0;
  local_68.TimeOffset = 0.0;
  local_58.Index = -1;
  this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowSimulationTime,FDataflowSimulationTime>'::__l7::<lambda_1>::
    operator()(local_res8);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res8[0] = (FContextCacheElementUStruct *)0x0;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pFVar8 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<FDataflowSimulationTime>
                         (pFVar7,(FGuid *)&local_58,pFVar1,&local_68,uVar3,(FTimestamp)*FVar4.Value)
      ;
    }
    pFVar7 = local_res8[0];
    if (local_res8[0] != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res8[0]->_padding_;
      local_res8[0] = pFVar8;
      (**(code **)*plVar2)(pFVar7,1);
      pFVar8 = local_res8[0];
    }
    local_res8[0] = pFVar8;
    if (local_res8[0] == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                ((FContext *)param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,local_res8);
    }
    if (local_res8[0] != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res8[0]->_padding_)(local_res8[0],1);
      return;
    }
  }
  return;
}

// StaticTags @ 1462fe0f0

FString * __cdecl FGetSimulationTimeDataflowNode::StaticTags(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = UDataflow::SimulationTag.Data.ArrayNum;
  _Src = UDataflow::SimulationTag.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  lVar3 = (longlong)UDataflow::SimulationTag.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = UDataflow::SimulationTag.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

