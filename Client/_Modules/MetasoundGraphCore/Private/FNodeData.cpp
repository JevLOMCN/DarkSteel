// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 5

// FNodeData @ 14ad3b6c0

FNodeData * __thiscall Metasound::FNodeData::FNodeData(FNodeData *this,FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this->Name = param_1->Name;
  uVar2 = (param_1->ID).B;
  uVar3 = (param_1->ID).C;
  uVar4 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar2;
  (this->ID).C = uVar3;
  (this->ID).D = uVar4;
  FInputVertexInterface::FInputVertexInterface
            (&(this->Interface).InputInterface,&(param_1->Interface).InputInterface);
  FOutputVertexInterface::FOutputVertexInterface
            (&(this->Interface).OutputInterface,&(param_1->Interface).OutputInterface);
  FEnvironmentVertexInterface::FEnvironmentVertexInterface
            (&(this->Interface).EnvironmentInterface,&(param_1->Interface).EnvironmentInterface);
  (this->OperatorData).Object = (param_1->OperatorData).Object;
  pTVar1 = (param_1->OperatorData).SharedReferenceCount.ReferenceController;
  (this->OperatorData).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// FNodeData @ 14ad3b750

FNodeData * __thiscall
Metasound::FNodeData::FNodeData
          (FNodeData *this,FName *param_1,FGuid *param_2,FVertexInterface *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FVertexInterface local_58;
  
  FInputVertexInterface::FInputVertexInterface(&local_58.InputInterface,&param_3->InputInterface);
  FOutputVertexInterface::FOutputVertexInterface
            (&local_58.OutputInterface,&param_3->OutputInterface);
  FEnvironmentVertexInterface::FEnvironmentVertexInterface
            (&local_58.EnvironmentInterface,&param_3->EnvironmentInterface);
  this->Name = *param_1;
  uVar1 = param_2->B;
  uVar2 = param_2->C;
  uVar3 = param_2->D;
  (this->ID).A = param_2->A;
  (this->ID).B = uVar1;
  (this->ID).C = uVar2;
  (this->ID).D = uVar3;
  FInputVertexInterface::FInputVertexInterface
            (&(this->Interface).InputInterface,&local_58.InputInterface);
  FOutputVertexInterface::FOutputVertexInterface
            (&(this->Interface).OutputInterface,&local_58.OutputInterface);
  FEnvironmentVertexInterface::FEnvironmentVertexInterface
            (&(this->Interface).EnvironmentInterface,&local_58.EnvironmentInterface);
  (this->OperatorData).Object = (IOperatorData *)0x0;
  (this->OperatorData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  FVertexInterface::~FVertexInterface(&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FVertexInterface::~FVertexInterface(param_3);
  return this;
}

// FNodeData @ 14ad3b820

FNodeData * __thiscall
Metasound::FNodeData::FNodeData
          (FNodeData *this,FName *param_1,FGuid *param_2,FVertexInterface *param_3,
          TSharedPtr<Metasound::IOperatorData_const_,1> *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this->Name = *param_1;
  uVar1 = param_2->B;
  uVar2 = param_2->C;
  uVar3 = param_2->D;
  (this->ID).A = param_2->A;
  (this->ID).B = uVar1;
  (this->ID).C = uVar2;
  (this->ID).D = uVar3;
  FInputVertexInterface::FInputVertexInterface
            (&(this->Interface).InputInterface,&param_3->InputInterface);
  FOutputVertexInterface::FOutputVertexInterface
            (&(this->Interface).OutputInterface,&param_3->OutputInterface);
  FEnvironmentVertexInterface::FEnvironmentVertexInterface
            (&(this->Interface).EnvironmentInterface,&param_3->EnvironmentInterface);
  (this->OperatorData).Object = param_4->Object;
  (this->OperatorData).SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  (param_4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_4->Object = (IOperatorData *)0x0;
  FVertexInterface::~FVertexInterface(param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// FNodeData @ 14ad3b8b0

FNodeData * __thiscall Metasound::FNodeData::FNodeData(FNodeData *this)

{
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->ID).A = 0;
  (this->ID).B = 0;
  (this->ID).C = 0;
  (this->ID).D = 0;
  (this->Interface).InputInterface._padding_ = 0;
  (this->Interface).InputInterface._padding_ = 0;
  (this->Interface).InputInterface.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Interface).InputInterface.SubInterfaces.ArrayNum = 0;
  (this->Interface).InputInterface.SubInterfaces.ArrayMax = 0;
  (this->Interface).OutputInterface._padding_ = 0;
  (this->Interface).OutputInterface._padding_ = 0;
  (this->Interface).OutputInterface.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Interface).OutputInterface.SubInterfaces.ArrayNum = 0;
  (this->Interface).OutputInterface.SubInterfaces.ArrayMax = 0;
  *(undefined8 *)&(this->Interface).EnvironmentInterface = 0;
  *(undefined8 *)&(this->Interface).EnvironmentInterface.field_0x8 = 0;
  (this->OperatorData).Object = (IOperatorData *)0x0;
  (this->OperatorData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// ~FNodeData @ 14ad3df60

void __thiscall Metasound::FNodeData::~FNodeData(FNodeData *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OperatorData).SharedReferenceCount.ReferenceController);
  FVertexInterface::~FVertexInterface(&this->Interface);
  return;
}

