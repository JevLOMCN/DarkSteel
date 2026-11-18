// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 17

// FVertexInterface @ 14ad3cb30

FVertexInterface * __thiscall
Metasound::FVertexInterface::FVertexInterface
          (FVertexInterface *this,FInputVertexInterface *param_1,FOutputVertexInterface *param_2)

{
  FInputVertexInterface::FInputVertexInterface(&this->InputInterface,param_1);
  FOutputVertexInterface::FOutputVertexInterface(&this->OutputInterface,param_2);
  *(undefined8 *)&this->EnvironmentInterface = 0;
  *(undefined8 *)&(this->EnvironmentInterface).field_0x8 = 0;
  return this;
}

// FVertexInterface @ 14ad3cb70

FVertexInterface * __thiscall
Metasound::FVertexInterface::FVertexInterface
          (FVertexInterface *this,FInputVertexInterface *param_1,FOutputVertexInterface *param_2,
          FEnvironmentVertexInterface *param_3)

{
  FScriptContainerElement *pFVar1;
  
  (this->InputInterface)._padding_ = 0;
  (this->InputInterface)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->InputInterface)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->InputInterface)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  (this->InputInterface).SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputInterface).SubInterfaces.AllocatorInstance.Data =
       (param_1->SubInterfaces).AllocatorInstance.Data;
  (param_1->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputInterface).SubInterfaces.ArrayNum = (param_1->SubInterfaces).ArrayNum;
  (this->InputInterface).SubInterfaces.ArrayMax = (param_1->SubInterfaces).ArrayMax;
  (param_1->SubInterfaces).ArrayNum = 0;
  (param_1->SubInterfaces).ArrayMax = 0;
  (this->OutputInterface)._padding_ = 0;
  (this->OutputInterface)._padding_ = param_2->_padding_;
  param_2->_padding_ = 0;
  *(int *)&(this->OutputInterface)._padding_ = (int)param_2->_padding_;
  *(undefined4 *)((longlong)&(this->OutputInterface)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  param_2->_padding_ = 0;
  (this->OutputInterface).SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputInterface).SubInterfaces.AllocatorInstance.Data =
       (param_2->SubInterfaces).AllocatorInstance.Data;
  (param_2->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputInterface).SubInterfaces.ArrayNum = (param_2->SubInterfaces).ArrayNum;
  (this->OutputInterface).SubInterfaces.ArrayMax = (param_2->SubInterfaces).ArrayMax;
  (param_2->SubInterfaces).ArrayNum = 0;
  (param_2->SubInterfaces).ArrayMax = 0;
  *(undefined8 *)&this->EnvironmentInterface = 0;
  *(undefined8 *)&this->EnvironmentInterface = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)&(this->EnvironmentInterface).field_0x8 = *(undefined4 *)&param_3->field_0x8;
  *(undefined4 *)&(this->EnvironmentInterface).field_0xc = *(undefined4 *)&param_3->field_0xc;
  *(undefined8 *)&param_3->field_0x8 = 0;
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(param_1->SubInterfaces).AllocatorInstance.Data,
             (param_1->SubInterfaces).ArrayNum);
  pFVar1 = (param_1->SubInterfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)param_1->_padding_,(int)param_1->_padding_);
  if ((void *)param_1->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_1->_padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(param_2->SubInterfaces).AllocatorInstance.Data,
             (param_2->SubInterfaces).ArrayNum);
  pFVar1 = (param_2->SubInterfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)param_2->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_2->_padding_);
  }
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return this;
}

// FVertexInterface @ 14ad3ccc0

FVertexInterface * __thiscall Metasound::FVertexInterface::FVertexInterface(FVertexInterface *this)

{
  (this->InputInterface)._padding_ = 0;
  (this->InputInterface)._padding_ = 0;
  (this->InputInterface).SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputInterface).SubInterfaces.ArrayNum = 0;
  (this->InputInterface).SubInterfaces.ArrayMax = 0;
  (this->OutputInterface)._padding_ = 0;
  (this->OutputInterface)._padding_ = 0;
  (this->OutputInterface).SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputInterface).SubInterfaces.ArrayNum = 0;
  (this->OutputInterface).SubInterfaces.ArrayMax = 0;
  *(undefined8 *)&this->EnvironmentInterface = 0;
  *(undefined8 *)&(this->EnvironmentInterface).field_0x8 = 0;
  return this;
}

// ~FVertexInterface @ 14ad3e0a0

void __thiscall Metasound::FVertexInterface::~FVertexInterface(FVertexInterface *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  if (*(void **)&this->EnvironmentInterface != (void *)0x0) {
    FMemory::Free(*(void **)&this->EnvironmentInterface);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(this->OutputInterface).SubInterfaces.AllocatorInstance.Data,
             (this->OutputInterface).SubInterfaces.ArrayNum);
  pFVar1 = (this->OutputInterface).SubInterfaces.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->OutputInterface)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(this->InputInterface).SubInterfaces.AllocatorInstance.Data,
             (this->InputInterface).SubInterfaces.ArrayNum);
  pFVar1 = (this->InputInterface).SubInterfaces.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)(this->InputInterface)._padding_,
             (int)(this->InputInterface)._padding_);
  pvVar2 = (void *)(this->InputInterface)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// operator= @ 14ad3ee80

FVertexInterface * __thiscall
Metasound::FVertexInterface::operator=(FVertexInterface *this,FVertexInterface *param_1)

{
  int *piVar1;
  FOutputVertexInterface *pFVar2;
  FEnvironmentVertexInterface *pFVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  FInputDataVertex *pFVar7;
  FOutputDataVertex *pFVar8;
  FEnvironmentVertex *pFVar9;
  
  if (this != param_1) {
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)(this->InputInterface)._padding_,
               (int)(this->InputInterface)._padding_);
    iVar6 = (int)(param_1->InputInterface)._padding_;
    piVar1 = (int *)((longlong)&(this->InputInterface)._padding_ + 4);
    pFVar7 = (FInputDataVertex *)(param_1->InputInterface)._padding_;
    iVar5 = *piVar1;
    *(int *)&(this->InputInterface)._padding_ = iVar6;
    if ((iVar6 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar6,iVar5,(ForAnyElementType *)this,iVar6,piVar1);
      ConstructItems<Metasound::FInputDataVertex,Metasound::FInputDataVertex,int>
                ((void *)(this->InputInterface)._padding_,pFVar7,iVar6);
    }
  }
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_>::operator=
            (&(this->InputInterface).SubInterfaces,&(param_1->InputInterface).SubInterfaces);
  pFVar2 = &this->OutputInterface;
  if (pFVar2 != &param_1->OutputInterface) {
    iVar6 = (int)(param_1->OutputInterface)._padding_;
    piVar1 = (int *)((longlong)&(this->OutputInterface)._padding_ + 4);
    iVar5 = *piVar1;
    pFVar8 = (FOutputDataVertex *)(param_1->OutputInterface)._padding_;
    *(int *)&(this->OutputInterface)._padding_ = iVar6;
    if ((iVar6 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar6,iVar5,(ForAnyElementType *)pFVar2,iVar6,piVar1);
      ConstructItems<Metasound::FOutputDataVertex,Metasound::FOutputDataVertex,int>
                ((void *)pFVar2->_padding_,pFVar8,iVar6);
    }
  }
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_>::operator=
            (&(this->OutputInterface).SubInterfaces,&(param_1->OutputInterface).SubInterfaces);
  pFVar3 = &this->EnvironmentInterface;
  if (pFVar3 != &param_1->EnvironmentInterface) {
    iVar6 = *(int *)&(param_1->EnvironmentInterface).field_0x8;
    puVar4 = &(this->EnvironmentInterface).field_0xc;
    pFVar9 = *(FEnvironmentVertex **)&param_1->EnvironmentInterface;
    *(int *)&(this->EnvironmentInterface).field_0x8 = iVar6;
    if ((iVar6 == 0) && (*(int *)puVar4 == 0)) {
      *(undefined4 *)puVar4 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,*(int *)puVar4,(ForAnyElementType *)pFVar3,iVar6,(int *)puVar4);
    ConstructItems<Metasound::FEnvironmentVertex,Metasound::FEnvironmentVertex,int>
              (*(void **)pFVar3,pFVar9,iVar6);
  }
  return this;
}

// ContainsEnvironmentVertex @ 14ad4b770

bool __thiscall
Metasound::FVertexInterface::ContainsEnvironmentVertex(FVertexInterface *this,FName *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)&this->EnvironmentInterface;
  lVar2 = (longlong)*(int *)&(this->EnvironmentInterface).field_0x8 * 0x10 + lVar1;
  if (lVar1 != lVar2) {
    do {
      if (*(FName *)(lVar1 + 8) == *param_1) goto LAB_14ad4b798;
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != lVar2);
  }
  lVar1 = 0;
LAB_14ad4b798:
  return lVar1 != 0;
}

// ContainsInputVertex @ 14ad4b7b0

bool __thiscall
Metasound::FVertexInterface::ContainsInputVertex(FVertexInterface *this,FName *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (this->InputInterface)._padding_;
  lVar2 = (longlong)(int)(this->InputInterface)._padding_ * 0x38 + lVar1;
  if (lVar1 != lVar2) {
    do {
      if (*(FName *)(lVar1 + 8) == *param_1) goto LAB_14ad4b7d7;
      lVar1 = lVar1 + 0x38;
    } while (lVar1 != lVar2);
  }
  lVar1 = 0;
LAB_14ad4b7d7:
  return lVar1 != 0;
}

// ContainsOutputVertex @ 14ad4b7f0

bool __thiscall
Metasound::FVertexInterface::ContainsOutputVertex(FVertexInterface *this,FName *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (this->OutputInterface)._padding_;
  lVar2 = (longlong)(int)(this->OutputInterface)._padding_ * 0x20 + lVar1;
  if (lVar1 != lVar2) {
    do {
      if (*(FName *)(lVar1 + 8) == *param_1) goto LAB_14ad4b818;
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != lVar2);
  }
  lVar1 = 0;
LAB_14ad4b818:
  return lVar1 != 0;
}

// GetEnvironmentInterface @ 14ad55bc0

FEnvironmentVertexInterface * __thiscall
Metasound::FVertexInterface::GetEnvironmentInterface(FVertexInterface *this)

{
  return &this->EnvironmentInterface;
}

// GetEnvironmentInterface @ 14ad55bd0

FEnvironmentVertexInterface * __thiscall
Metasound::FVertexInterface::GetEnvironmentInterface(FVertexInterface *this)

{
  return &this->EnvironmentInterface;
}

// GetEnvironmentVertex @ 14ad55be0

FEnvironmentVertex * __thiscall
Metasound::FVertexInterface::GetEnvironmentVertex(FVertexInterface *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FEnvironmentVertex *pFVar3;
  FEnvironmentVertex *pFVar4;
  FString local_18;
  
  pFVar3 = *(FEnvironmentVertex **)&this->EnvironmentInterface;
  pFVar4 = pFVar3 + *(int *)&(this->EnvironmentInterface).field_0x8;
  if (pFVar3 != pFVar4) {
    do {
      if (pFVar3->VertexName == *param_1) {
        return pFVar3;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar4);
  }
  ::FName::ToString(param_1,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("nullptr != Vertex",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertex.h"
                     ,0x1ae,L"Vertex with name \'%s\' does not exist");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return (FEnvironmentVertex *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FEnvironmentVertex *)(*pcVar1)();
  return pFVar3;
}

// GetInputInterface @ 14ad55e90

FInputVertexInterface * __thiscall
Metasound::FVertexInterface::GetInputInterface(FVertexInterface *this)

{
  return &this->InputInterface;
}

// GetInputInterface @ 14ad55ea0

FInputVertexInterface * __thiscall
Metasound::FVertexInterface::GetInputInterface(FVertexInterface *this)

{
  return &this->InputInterface;
}

// GetInputVertex @ 14ad55eb0

FInputDataVertex * __thiscall
Metasound::FVertexInterface::GetInputVertex(FVertexInterface *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FInputDataVertex *pFVar4;
  FString local_18;
  
  pFVar3 = (FInputDataVertex *)(this->InputInterface)._padding_;
  pFVar4 = pFVar3 + (int)(this->InputInterface)._padding_;
  if (pFVar3 != pFVar4) {
    do {
      if ((FName)pFVar3->_padding_ == *param_1) {
        return pFVar3;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar4);
  }
  ::FName::ToString(param_1,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("nullptr != Vertex",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertex.h"
                     ,0x1ae,L"Vertex with name \'%s\' does not exist");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return (FInputDataVertex *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FInputDataVertex *)(*pcVar1)();
  return pFVar3;
}

// GetOutputInterface @ 14ad56570

FOutputVertexInterface * __thiscall
Metasound::FVertexInterface::GetOutputInterface(FVertexInterface *this)

{
  return &this->OutputInterface;
}

// GetOutputInterface @ 14ad56580

FOutputVertexInterface * __thiscall
Metasound::FVertexInterface::GetOutputInterface(FVertexInterface *this)

{
  return &this->OutputInterface;
}

// GetOutputVertex @ 14ad56590

FOutputDataVertex * __thiscall
Metasound::FVertexInterface::GetOutputVertex(FVertexInterface *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FOutputDataVertex *pFVar4;
  FOutputDataVertex *pFVar5;
  FString local_18;
  
  pFVar4 = (FOutputDataVertex *)(this->OutputInterface)._padding_;
  pFVar5 = pFVar4 + (int)(this->OutputInterface)._padding_;
  if (pFVar4 != pFVar5) {
    do {
      FVar1.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x8;
      FVar1.Number = *(uint *)&pFVar4->field_0xc;
      if (FVar1 == *param_1) {
        return pFVar4;
      }
      pFVar4 = pFVar4 + 1;
    } while (pFVar4 != pFVar5);
  }
  ::FName::ToString(param_1,&local_18);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("nullptr != Vertex",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertex.h"
                     ,0x1ae,L"Vertex with name \'%s\' does not exist");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return (FOutputDataVertex *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FOutputDataVertex *)(*pcVar2)();
  return pFVar4;
}

