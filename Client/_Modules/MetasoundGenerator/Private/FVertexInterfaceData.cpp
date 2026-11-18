// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// FVertexInterfaceData @ 14b2a7470

FVertexInterfaceData * __thiscall
Metasound::FVertexInterfaceData::FVertexInterfaceData
          (FVertexInterfaceData *this,FVertexInterfaceData *param_1)

{
  TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FInputBinding *pFVar6;
  FSubInterfaceLayout *pFVar7;
  FOutputBinding *pFVar8;
  
  pTVar1 = &(this->InputVertexInterfaceData).Bindings;
  (this->InputVertexInterfaceData).bIsVertexInterfaceFrozen =
       (param_1->InputVertexInterfaceData).bIsVertexInterfaceFrozen;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InputVertexInterfaceData).Bindings.ArrayMax;
  iVar5 = (param_1->InputVertexInterfaceData).Bindings.ArrayNum;
  pFVar6 = (FInputBinding *)(param_1->InputVertexInterfaceData).Bindings.AllocatorInstance.Data;
  (this->InputVertexInterfaceData).Bindings.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<Metasound::VertexDataPrivate::FInputBinding,Metasound::VertexDataPrivate::FInputBinding,int>
              ((pTVar1->AllocatorInstance).Data,pFVar6,iVar5);
  }
  pTVar3 = &(this->InputVertexInterfaceData).SubInterfaces;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InputVertexInterfaceData).SubInterfaces.ArrayMax;
  iVar5 = (param_1->InputVertexInterfaceData).SubInterfaces.ArrayNum;
  pFVar7 = (FSubInterfaceLayout *)
           (param_1->InputVertexInterfaceData).SubInterfaces.AllocatorInstance.Data;
  (this->InputVertexInterfaceData).SubInterfaces.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
  }
  pTVar4 = &(this->OutputVertexInterfaceData).Bindings;
  (this->OutputVertexInterfaceData).bIsVertexInterfaceFrozen =
       (param_1->OutputVertexInterfaceData).bIsVertexInterfaceFrozen;
  piVar2 = &(this->OutputVertexInterfaceData).Bindings.ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->OutputVertexInterfaceData).Bindings.ArrayNum;
  pFVar8 = (FOutputBinding *)(param_1->OutputVertexInterfaceData).Bindings.AllocatorInstance.Data;
  (this->OutputVertexInterfaceData).Bindings.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    ConstructItems<Metasound::VertexDataPrivate::FOutputBinding,Metasound::VertexDataPrivate::FOutputBinding,int>
              ((pTVar4->AllocatorInstance).Data,pFVar8,iVar5);
  }
  pTVar3 = &(this->OutputVertexInterfaceData).SubInterfaces;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OutputVertexInterfaceData).SubInterfaces.ArrayMax;
  iVar5 = (param_1->OutputVertexInterfaceData).SubInterfaces.ArrayNum;
  pFVar7 = (FSubInterfaceLayout *)
           (param_1->OutputVertexInterfaceData).SubInterfaces.AllocatorInstance.Data;
  (this->OutputVertexInterfaceData).SubInterfaces.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
  }
  return this;
}

