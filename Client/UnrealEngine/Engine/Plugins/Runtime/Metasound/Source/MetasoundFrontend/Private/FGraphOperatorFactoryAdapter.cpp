// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// FGraphOperatorFactoryAdapter @ 14af3b690

FGraphOperatorFactoryAdapter * __thiscall
Metasound::Frontend::FGraphNode::FGraphOperatorFactoryAdapter::FGraphOperatorFactoryAdapter
          (FGraphOperatorFactoryAdapter *this,IGraph *param_1)

{
  this->Graph = param_1;
  this->_padding_ = (longlong)&___7FGraphOperatorFactoryAdapter_FGraphNode_Frontend_Metasound__6B_;
  (**(code **)((longlong)*param_1 + 0x48))(param_1,&this->GraphFactory);
  return this;
}

// ~FGraphOperatorFactoryAdapter @ 14af42d00

void __thiscall
Metasound::Frontend::FGraphNode::FGraphOperatorFactoryAdapter::~FGraphOperatorFactoryAdapter
          (FGraphOperatorFactoryAdapter *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GraphFactory).SharedReferenceCount.ReferenceController);
  return;
}

// CreateOperator @ 14af761b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::Frontend::FGraphNode::FGraphOperatorFactoryAdapter::CreateOperator
          (FGraphOperatorFactoryAdapter *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  FInputBinding *pFVar3;
  FSubInterfaceLayout *pFVar4;
  IOperatorFactory *pIVar5;
  FInputVertexInterfaceData local_88;
  IGraph *local_60;
  undefined8 local_58;
  FInputVertexInterfaceData *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = *(undefined1 **)&param_2->InternalDataReferences;
  local_88.bIsVertexInterfaceFrozen = (bool)*puVar2;
  local_88.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(puVar2 + 0x10);
  pFVar3 = *(FInputBinding **)(puVar2 + 8);
  local_88.Bindings.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_88.Bindings.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar1,0,&local_88.Bindings.AllocatorInstance,iVar1,&local_88.Bindings.ArrayMax
              );
    ConstructItems<Metasound::VertexDataPrivate::FInputBinding,Metasound::VertexDataPrivate::FInputBinding,int>
              (local_88.Bindings.AllocatorInstance.Data,pFVar3,iVar1);
  }
  local_88.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(puVar2 + 0x20);
  pFVar4 = *(FSubInterfaceLayout **)(puVar2 + 0x18);
  local_88.SubInterfaces.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_88.SubInterfaces.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar1,0,&local_88.SubInterfaces.AllocatorInstance,iVar1,
               &local_88.SubInterfaces.ArrayMax);
    ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
              (local_88.SubInterfaces.AllocatorInstance.Data,pFVar4,iVar1);
  }
  CreateDefaultsIfNotBound(*(FOperatorSettings **)&(param_2->Errors).ArrayNum,&local_88);
  local_60 = this->Graph;
  pIVar5 = (this->GraphFactory).Object;
  local_58._0_4_ = (param_2->Errors).ArrayNum;
  local_58._4_4_ = (param_2->Errors).ArrayMax;
  local_50 = &local_88;
  local_48 = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
  local_40 = *(undefined8 *)&(param_2->InternalDataReferences).field_0x10;
  local_38 = *(undefined8 *)&(param_2->InternalDataReferences).field_0x18;
  (**(code **)((longlong)*pIVar5 + 8))(pIVar5,param_1,&local_60);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_88.SubInterfaces.AllocatorInstance.Data,
             local_88.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_88.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_88.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)local_88.Bindings.AllocatorInstance.Data,local_88.Bindings.ArrayNum);
  if ((FInputBinding *)local_88.Bindings.AllocatorInstance.Data != (FInputBinding *)0x0) {
    FMemory::Free(local_88.Bindings.AllocatorInstance.Data);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

