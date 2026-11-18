// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// FVertexInterface @ 14ad9c480

FVertexInterface * __thiscall
Metasound::FVertexInterface::FVertexInterface(FVertexInterface *this,FVertexInterface *param_1)

{
  int *piVar1;
  FOutputVertexInterface *pFVar2;
  FEnvironmentVertexInterface *pFVar3;
  undefined1 *puVar4;
  int iVar5;
  FInputDataVertex *pFVar6;
  FSubInterfaceLayout *pFVar7;
  FOutputDataVertex *pFVar8;
  FEnvironmentVertex *pFVar9;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar10;
  
  piVar1 = (int *)((longlong)&(this->InputInterface)._padding_ + 4);
  (this->InputInterface)._padding_ = 0;
  iVar5 = (int)(param_1->InputInterface)._padding_;
  pFVar6 = (FInputDataVertex *)(param_1->InputInterface)._padding_;
  *(int *)&(this->InputInterface)._padding_ = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    ConstructItems<Metasound::FInputDataVertex,Metasound::FInputDataVertex,int>
              ((void *)(this->InputInterface)._padding_,pFVar6,iVar5);
  }
  pTVar10 = &(this->InputInterface).SubInterfaces;
  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->InputInterface).SubInterfaces.ArrayMax;
  iVar5 = (param_1->InputInterface).SubInterfaces.ArrayNum;
  pFVar7 = (FSubInterfaceLayout *)(param_1->InputInterface).SubInterfaces.AllocatorInstance.Data;
  (this->InputInterface).SubInterfaces.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar10->AllocatorInstance,iVar5,piVar1);
    ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((pTVar10->AllocatorInstance).Data,pFVar7,iVar5);
  }
  pFVar2 = &this->OutputInterface;
  pFVar2->_padding_ = 0;
  piVar1 = (int *)((longlong)&(this->OutputInterface)._padding_ + 4);
  iVar5 = (int)(param_1->OutputInterface)._padding_;
  pFVar8 = (FOutputDataVertex *)(param_1->OutputInterface)._padding_;
  *(int *)&(this->OutputInterface)._padding_ = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,0,(ForAnyElementType *)pFVar2,iVar5,piVar1);
    ConstructItems<Metasound::FOutputDataVertex,Metasound::FOutputDataVertex,int>
              ((void *)pFVar2->_padding_,pFVar8,iVar5);
  }
  pTVar10 = &(this->OutputInterface).SubInterfaces;
  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OutputInterface).SubInterfaces.ArrayMax;
  iVar5 = (param_1->OutputInterface).SubInterfaces.ArrayNum;
  pFVar7 = (FSubInterfaceLayout *)(param_1->OutputInterface).SubInterfaces.AllocatorInstance.Data;
  (this->OutputInterface).SubInterfaces.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar10->AllocatorInstance,iVar5,piVar1);
    ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((pTVar10->AllocatorInstance).Data,pFVar7,iVar5);
  }
  pFVar3 = &this->EnvironmentInterface;
  *(undefined8 *)pFVar3 = 0;
  puVar4 = &(this->EnvironmentInterface).field_0xc;
  iVar5 = *(int *)&(param_1->EnvironmentInterface).field_0x8;
  pFVar9 = *(FEnvironmentVertex **)&param_1->EnvironmentInterface;
  *(int *)&(this->EnvironmentInterface).field_0x8 = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)puVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,(ForAnyElementType *)pFVar3,iVar5,(int *)puVar4);
    ConstructItems<Metasound::FEnvironmentVertex,Metasound::FEnvironmentVertex,int>
              (*(void **)pFVar3,pFVar9,iVar5);
  }
  return this;
}

