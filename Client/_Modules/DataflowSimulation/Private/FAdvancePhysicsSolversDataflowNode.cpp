// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 12

// StaticStruct @ 1462eb830

UScriptStruct * __cdecl FAdvancePhysicsSolversDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode,
                         (UObject *)pUVar1,L"AdvancePhysicsSolversDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton;
}

// GetType @ 1462eb870

FName __thiscall
FAdvancePhysicsSolversDataflowNode::GetType(FAdvancePhysicsSolversDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAdvancePhysicsSolversDataflowNode");
  return in_RDX;
}

// IsA @ 1462eb8a0

bool __thiscall
FAdvancePhysicsSolversDataflowNode::IsA(FAdvancePhysicsSolversDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAdvancePhysicsSolversDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462eb908;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462eb908:
    if (!bVar5) {
      bVar5 = FDataflowSimulationNode::IsA((FDataflowSimulationNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462eb926;
      }
    }
  }
  bVar5 = true;
LAB_1462eb926:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462eb960

FStructOnScope * __thiscall
FAdvancePhysicsSolversDataflowNode::NewStructOnScope(FAdvancePhysicsSolversDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowSimulation();
      Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode,
                           (UObject *)pUVar2,L"AdvancePhysicsSolversDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462eb9e0

void __thiscall
FAdvancePhysicsSolversDataflowNode::SerializeInternal
          (FAdvancePhysicsSolversDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode,
                         (UObject *)pUVar1,L"AdvancePhysicsSolversDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462eba5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462eba70

FName __thiscall
FAdvancePhysicsSolversDataflowNode::GetDisplayName(FAdvancePhysicsSolversDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AdvancePhysicsSolvers");
  return in_RDX;
}

// GetCategory @ 1462ebaa0

FName __thiscall
FAdvancePhysicsSolversDataflowNode::GetCategory(FAdvancePhysicsSolversDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Physics|Solver");
  return in_RDX;
}

// GetTags @ 1462ebad0

FString * __thiscall
FAdvancePhysicsSolversDataflowNode::GetTags
          (FAdvancePhysicsSolversDataflowNode *this,FString *__return_storage_ptr__)

{
  StaticTags(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462ebaf0

UScriptStruct * __thiscall
FAdvancePhysicsSolversDataflowNode::TypedScriptStruct(FAdvancePhysicsSolversDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode,
                         (UObject *)pUVar1,L"AdvancePhysicsSolversDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton;
}

// EvaluateSimulation @ 1462ebb30

void __thiscall
FAdvancePhysicsSolversDataflowNode::EvaluateSimulation
          (FAdvancePhysicsSolversDataflowNode *this,
          TSimulationContext<UE::Dataflow::FContextSingle> *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  FProperty *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar9;
  FDataflowInput *this_00;
  FDataflowSimulationTime *pFVar10;
  UPackage *pUVar11;
  FDataflowOutput *this_01;
  FTimestamp FVar12;
  FGuid *pFVar13;
  ulong64 uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  undefined1 local_res8 [8];
  TSimulationContext<UE::Dataflow::FContextSingle> *local_res10;
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> local_88;
  FConnectionReference local_78;
  FConnectionReference local_60;
  
  local_res10 = param_1;
  pTVar9 = FDataflowNode::GetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
                     ((FDataflowNode *)this,(FContext *)param_1,&this->PhysicsSolvers);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = pTVar9->ArrayNum;
  lVar15 = (longlong)local_88.ArrayNum;
  pFVar3 = (pTVar9->AllocatorInstance).Data;
  if (local_88.ArrayNum == 0) {
    local_88.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_88.ArrayNum,0,&local_88.AllocatorInstance,local_88.ArrayNum,
               &local_88.ArrayMax);
    memcpy(local_88.AllocatorInstance.Data,pFVar3,lVar15 << 3);
  }
  local_78.Reference = &this->SimulationTime;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
  pFVar10 = FDataflowInput::GetValue<FDataflowSimulationTime>
                      (this_00,(FContext *)param_1,local_78.Reference);
  iVar7 = local_88.ArrayNum;
  fVar1 = pFVar10->DeltaTime;
  if (local_88.ArrayNum != 0) {
    pFVar3 = local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 8;
    FVar16.Data = local_88.AllocatorInstance.Data;
    while( true ) {
      if (local_88.ArrayNum != iVar7) {
        `TCheckedPointerIterator<FDataflowSimulationProperty_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar16.Data == pFVar3) break;
      plVar4 = *(longlong **)FVar16.Data;
      if (plVar4 != (longlong *)0x0) {
        lVar15 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (lVar15 != 0) {
          if (Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar11 = Z_Construct_UPackage__Script_DataflowSimulation();
            Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy,
                                 (UObject *)pUVar11,L"DataflowPhysicsSolverProxy");
            if (Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton ==
                (UScriptStruct *)0x0) goto LAB_1462ebca4;
          }
          iVar2 = (int)(Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton
                       )->_padding_;
          if ((*(int *)(lVar15 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar2 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton)->
               _padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            (**(code **)(*plVar4 + 0x20))(plVar4,fVar1);
          }
        }
      }
LAB_1462ebca4:
      FVar16.Data = FVar16.Data + 8;
    }
  }
  local_60.Index = -1;
  local_60.ContainerReference = (void *)0x0;
  local_60.Reference = &this->PhysicsSolvers;
  this_01 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_60);
  if (this_01 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&,TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(local_res8);
  }
  else if (this_01->_padding_ != 0) {
    FVar12 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
    uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
    pFVar13 = FDataflowConnection::GetOwningNodeGuid
                        ((FDataflowConnection *)this_01,(FGuid *)&local_78);
    pFVar5 = (FProperty *)this_01->_padding_;
    uVar14 = CityHash64((char *)&this_01->_padding_,0x10);
    UE::Dataflow::FContext::
    SetData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
              ((FContext *)local_res10,(uint)uVar14,pFVar5,&local_88,pFVar13,uVar8,
               (FTimestamp *)FVar12.Value);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// FAdvancePhysicsSolversDataflowNode @ 1462f2080

FAdvancePhysicsSolversDataflowNode * __thiscall
FAdvancePhysicsSolversDataflowNode::FAdvancePhysicsSolversDataflowNode
          (FAdvancePhysicsSolversDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar1;
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
  this->_padding_ = (longlong)&___7FAdvancePhysicsSolversDataflowNode__6B_;
  pTVar1 = &this->PhysicsSolvers;
  local_48.Reference = &this->SimulationTime;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  ((FDataflowSimulationTime *)local_48.Reference)->DeltaTime = 0.0;
  ((FDataflowSimulationTime *)local_48.Reference)->CurrentTime = 0.0;
  (this->SimulationTime).TimeOffset = 0.0;
  (this->PhysicsSolvers).ArrayNum = 0;
  (this->PhysicsSolvers).ArrayMax = 0;
  local_48.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_48.Reference = pTVar1;
  local_28.Reference = pTVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)0x0)
  {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// StaticTags @ 1462fdf40

FString * __cdecl FAdvancePhysicsSolversDataflowNode::StaticTags(FString *__return_storage_ptr__)

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

