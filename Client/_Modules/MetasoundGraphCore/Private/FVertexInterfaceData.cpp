// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 5

// FVertexInterfaceData @ 14ad3cd00

FVertexInterfaceData * __thiscall
Metasound::FVertexInterfaceData::FVertexInterfaceData
          (FVertexInterfaceData *this,FVertexInterface *param_1)

{
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  FSubInterfaceLayout *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FVertexInterfaceData *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  
  FInputVertexInterfaceData::FInputVertexInterfaceData
            (&this->InputVertexInterfaceData,&param_1->InputInterface);
  (this->OutputVertexInterfaceData).bIsVertexInterfaceFrozen = true;
  (this->OutputVertexInterfaceData).Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  pTVar1 = &(this->OutputVertexInterfaceData).SubInterfaces;
  (this->OutputVertexInterfaceData).Bindings.ArrayNum = 0;
  (this->OutputVertexInterfaceData).Bindings.ArrayMax = 0;
  iVar4 = (param_1->OutputInterface).SubInterfaces.ArrayNum;
  pFVar5 = (FSubInterfaceLayout *)(param_1->OutputInterface).SubInterfaces.AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FVertexInterfaceData *)(*pcVar6)();
      return pFVar9;
    }
  }
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->OutputVertexInterfaceData).SubInterfaces.ArrayMax;
  (this->OutputVertexInterfaceData).SubInterfaces.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar3);
    ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
  }
  iVar4 = (int)(param_1->OutputInterface)._padding_;
  lVar11 = (param_1->OutputInterface)._padding_;
  lVar12 = (longlong)iVar4 * 0x20 + lVar11;
  while( true ) {
    if ((int)(param_1->OutputInterface)._padding_ != iVar4) {
      `TCheckedPointerIterator<Metasound::FOutputDataVertex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar11 == lVar12) break;
    iVar8 = (this->OutputVertexInterfaceData).Bindings.ArrayNum;
    if (iVar8 == (this->OutputVertexInterfaceData).Bindings.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&(this->OutputVertexInterfaceData).Bindings.AllocatorInstance,
                         &(this->OutputVertexInterfaceData).Bindings.ArrayMax);
    }
    (this->OutputVertexInterfaceData).Bindings.ArrayNum = iVar8 + 1;
    pFVar10 = (this->OutputVertexInterfaceData).Bindings.AllocatorInstance.Data +
              (longlong)iVar8 * 0x40;
    *(undefined ***)pFVar10 = &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)(pFVar10 + 8) = *(undefined8 *)(lVar11 + 8);
    *(undefined8 *)(pFVar10 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    puVar2 = (undefined4 *)(lVar11 + 0x18);
    lVar11 = lVar11 + 0x20;
    *(undefined4 *)(pFVar10 + 0x18) = *puVar2;
    *(undefined ***)pFVar10 = &___7FOutputDataVertex_Metasound__6B_;
    pFVar10[0x38] = (FScriptContainerElement)0x0;
  }
  return this;
}

// ~FVertexInterfaceData @ 14ad3e130

void __thiscall Metasound::FVertexInterfaceData::~FVertexInterfaceData(FVertexInterfaceData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)
             (this->OutputVertexInterfaceData).SubInterfaces.AllocatorInstance.Data,
             (this->OutputVertexInterfaceData).SubInterfaces.ArrayNum);
  pFVar1 = (this->OutputVertexInterfaceData).SubInterfaces.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
            ((FOutputBinding *)(this->OutputVertexInterfaceData).Bindings.AllocatorInstance.Data,
             (this->OutputVertexInterfaceData).Bindings.ArrayNum);
  pFVar1 = (this->OutputVertexInterfaceData).Bindings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)
             (this->InputVertexInterfaceData).SubInterfaces.AllocatorInstance.Data,
             (this->InputVertexInterfaceData).SubInterfaces.ArrayNum);
  pFVar1 = (this->InputVertexInterfaceData).SubInterfaces.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)(this->InputVertexInterfaceData).Bindings.AllocatorInstance.Data,
             (this->InputVertexInterfaceData).Bindings.ArrayNum);
  pFVar1 = (this->InputVertexInterfaceData).Bindings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14ad3eff0

FVertexInterfaceData * __thiscall
Metasound::FVertexInterfaceData::operator=(FVertexInterfaceData *this,FVertexInterfaceData *param_1)

{
  TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &(param_1->InputVertexInterfaceData).Bindings;
  pTVar2 = &(this->InputVertexInterfaceData).Bindings;
  (this->InputVertexInterfaceData).bIsVertexInterfaceFrozen =
       (param_1->InputVertexInterfaceData).bIsVertexInterfaceFrozen;
  if (pTVar2 != pTVar1) {
    DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
              ((FInputBinding *)(pTVar2->AllocatorInstance).Data,
               (this->InputVertexInterfaceData).Bindings.ArrayNum);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InputVertexInterfaceData).Bindings.ArrayNum =
         (param_1->InputVertexInterfaceData).Bindings.ArrayNum;
    (this->InputVertexInterfaceData).Bindings.ArrayMax =
         (param_1->InputVertexInterfaceData).Bindings.ArrayMax;
    (param_1->InputVertexInterfaceData).Bindings.ArrayNum = 0;
    (param_1->InputVertexInterfaceData).Bindings.ArrayMax = 0;
  }
  pTVar3 = &(param_1->InputVertexInterfaceData).SubInterfaces;
  pTVar4 = &(this->InputVertexInterfaceData).SubInterfaces;
  if (pTVar4 != pTVar3) {
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)(pTVar4->AllocatorInstance).Data,
               (this->InputVertexInterfaceData).SubInterfaces.ArrayNum);
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InputVertexInterfaceData).SubInterfaces.ArrayNum =
         (param_1->InputVertexInterfaceData).SubInterfaces.ArrayNum;
    (this->InputVertexInterfaceData).SubInterfaces.ArrayMax =
         (param_1->InputVertexInterfaceData).SubInterfaces.ArrayMax;
    (param_1->InputVertexInterfaceData).SubInterfaces.ArrayNum = 0;
    (param_1->InputVertexInterfaceData).SubInterfaces.ArrayMax = 0;
  }
  pTVar5 = &(param_1->OutputVertexInterfaceData).Bindings;
  pTVar6 = &(this->OutputVertexInterfaceData).Bindings;
  (this->OutputVertexInterfaceData).bIsVertexInterfaceFrozen =
       (param_1->OutputVertexInterfaceData).bIsVertexInterfaceFrozen;
  if (pTVar6 != pTVar5) {
    DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
              ((FOutputBinding *)(pTVar6->AllocatorInstance).Data,
               (this->OutputVertexInterfaceData).Bindings.ArrayNum);
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->OutputVertexInterfaceData).Bindings.ArrayNum =
         (param_1->OutputVertexInterfaceData).Bindings.ArrayNum;
    (this->OutputVertexInterfaceData).Bindings.ArrayMax =
         (param_1->OutputVertexInterfaceData).Bindings.ArrayMax;
    (param_1->OutputVertexInterfaceData).Bindings.ArrayNum = 0;
    (param_1->OutputVertexInterfaceData).Bindings.ArrayMax = 0;
  }
  pTVar3 = &(param_1->OutputVertexInterfaceData).SubInterfaces;
  pTVar4 = &(this->OutputVertexInterfaceData).SubInterfaces;
  if (pTVar4 != pTVar3) {
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)(pTVar4->AllocatorInstance).Data,
               (this->OutputVertexInterfaceData).SubInterfaces.ArrayNum);
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->OutputVertexInterfaceData).SubInterfaces.ArrayNum =
         (param_1->OutputVertexInterfaceData).SubInterfaces.ArrayNum;
    (this->OutputVertexInterfaceData).SubInterfaces.ArrayMax =
         (param_1->OutputVertexInterfaceData).SubInterfaces.ArrayMax;
    (param_1->OutputVertexInterfaceData).SubInterfaces.ArrayNum = 0;
    (param_1->OutputVertexInterfaceData).SubInterfaces.ArrayMax = 0;
  }
  return this;
}

// Bind @ 14ad47a70

void __thiscall
Metasound::FVertexInterfaceData::Bind(FVertexInterfaceData *this,FVertexInterfaceData *param_1)

{
  VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FInputBinding>
            ((this->InputVertexInterfaceData).bIsVertexInterfaceFrozen,
             &(this->InputVertexInterfaceData).Bindings,
             &(param_1->InputVertexInterfaceData).Bindings);
  VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FOutputBinding>
            ((this->OutputVertexInterfaceData).bIsVertexInterfaceFrozen,
             &(this->OutputVertexInterfaceData).Bindings,
             &(param_1->OutputVertexInterfaceData).Bindings);
  return;
}

// Bind @ 14ad47ac0

void __thiscall
Metasound::FVertexInterfaceData::Bind(FVertexInterfaceData *this,FVertexInterfaceData *param_1)

{
  VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FInputBinding>
            ((this->InputVertexInterfaceData).bIsVertexInterfaceFrozen,
             &(this->InputVertexInterfaceData).Bindings,
             &(param_1->InputVertexInterfaceData).Bindings);
  VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FOutputBinding>
            ((this->OutputVertexInterfaceData).bIsVertexInterfaceFrozen,
             &(this->OutputVertexInterfaceData).Bindings,
             &(param_1->OutputVertexInterfaceData).Bindings);
  return;
}

