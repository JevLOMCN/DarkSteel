// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 4

// FDynamicGraphOperatorData @ 14ad38e40

FDynamicGraphOperatorData * __thiscall
Metasound::DynamicGraph::FDynamicGraphOperatorData::FDynamicGraphOperatorData
          (FDynamicGraphOperatorData *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&param_1->ActualBlockRate;
  this->_padding_ = *(longlong *)param_1;
  this->_padding_ = lVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnInputAdded = 0;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnInputAdded.field_0x28 = 0;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnInputRemoved = 0;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnInputRemoved.field_0x28 = 0;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnOutputAdded = 0;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnOutputAdded.field_0x28 = 0;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnOutputUpdated = 0;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnOutputUpdated.field_0x28 = 0;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnOutputRemoved = 0;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnOutputRemoved.field_0x28 = 0;
  (this->ExecuteTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteTable).ArrayNum = 0;
  (this->ExecuteTable).ArrayMax = 0;
  (this->PostExecuteTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostExecuteTable).ArrayNum = 0;
  (this->PostExecuteTable).ArrayMax = 0;
  (this->ResetTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResetTable).ArrayNum = 0;
  (this->ResetTable).ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 0;
  return this;
}

// FDynamicGraphOperatorData @ 14ad38f10

FDynamicGraphOperatorData * __thiscall
Metasound::DynamicGraph::FDynamicGraphOperatorData::FDynamicGraphOperatorData
          (FDynamicGraphOperatorData *this,FOperatorSettings *param_1,
          FDynamicOperatorUpdateCallbacks *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 *puVar6;
  
  fVar3 = param_1->TargetBlockRate;
  fVar4 = param_1->ActualBlockRate;
  iVar5 = param_1->NumFramesPerBlock;
  *(int *)&this->_padding_ = param_1->SampleRate;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3;
  *(float *)&this->_padding_ = fVar4;
  *(int *)((longlong)&this->_padding_ + 4) = iVar5;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  lVar1 = *(longlong *)&param_2->OnInputAdded;
  *(longlong *)&(this->OperatorUpdateCallbacks).OnInputAdded = lVar1;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnInputAdded.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_2->OnInputAdded).field_0x28;
    puVar6 = (undefined8 *)&(param_2->OnInputAdded).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar6 = puVar2;
    }
    (**(code **)*puVar6)();
  }
  lVar1 = *(longlong *)&param_2->OnInputRemoved;
  *(longlong *)&(this->OperatorUpdateCallbacks).OnInputRemoved = lVar1;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnInputRemoved.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_2->OnInputRemoved).field_0x28;
    puVar6 = (undefined8 *)&(param_2->OnInputRemoved).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar6 = puVar2;
    }
    (**(code **)*puVar6)();
  }
  lVar1 = *(longlong *)&param_2->OnOutputAdded;
  *(longlong *)&(this->OperatorUpdateCallbacks).OnOutputAdded = lVar1;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnOutputAdded.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_2->OnOutputAdded).field_0x28;
    puVar6 = (undefined8 *)&(param_2->OnOutputAdded).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar6 = puVar2;
    }
    (**(code **)*puVar6)();
  }
  lVar1 = *(longlong *)&param_2->OnOutputUpdated;
  *(longlong *)&(this->OperatorUpdateCallbacks).OnOutputUpdated = lVar1;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnOutputUpdated.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_2->OnOutputUpdated).field_0x28;
    puVar6 = (undefined8 *)&(param_2->OnOutputUpdated).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar6 = puVar2;
    }
    (**(code **)*puVar6)();
  }
  lVar1 = *(longlong *)&param_2->OnOutputRemoved;
  *(longlong *)&(this->OperatorUpdateCallbacks).OnOutputRemoved = lVar1;
  *(undefined8 *)&(this->OperatorUpdateCallbacks).OnOutputRemoved.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_2->OnOutputRemoved).field_0x28;
    puVar6 = (undefined8 *)&(param_2->OnOutputRemoved).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar6 = puVar2;
    }
    (**(code **)*puVar6)();
  }
  (this->ExecuteTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteTable).ArrayNum = 0;
  (this->ExecuteTable).ArrayMax = 0;
  (this->PostExecuteTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostExecuteTable).ArrayNum = 0;
  (this->PostExecuteTable).ArrayMax = 0;
  (this->ResetTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResetTable).ArrayNum = 0;
  (this->ResetTable).ArrayMax = 0;
  return this;
}

// ~FDynamicGraphOperatorData @ 14ad3d9b0

void __thiscall
Metasound::DynamicGraph::FDynamicGraphOperatorData::~FDynamicGraphOperatorData
          (FDynamicGraphOperatorData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ResetTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostExecuteTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExecuteTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicOperatorUpdateCallbacks::~FDynamicOperatorUpdateCallbacks(&this->OperatorUpdateCallbacks);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,int>
            ((TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>
              *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FVertexInterfaceData::~FVertexInterfaceData((FVertexInterfaceData *)&this->_padding_);
  return;
}

// InitTables @ 14ad58dd0

void __thiscall
Metasound::DynamicGraph::FDynamicGraphOperatorData::InitTables(FDynamicGraphOperatorData *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FExecuteEntry *pFVar8;
  FPostExecuteEntry *pFVar9;
  FResetEntry *pFVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry> local_res8 [8];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_64;
  undefined4 uStack_44;
  
  puVar15 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar16 = puVar15 + (longlong)iVar4 * 0xf;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      local_res8[0] = (TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>)0x0;
      `TCheckedPointerIterator<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar15 == puVar16) break;
    uVar5 = *puVar15;
    if (puVar15[2] == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("OperatorInfo.Operator.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                          ,0x154,L"");
      if (bVar12) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    plVar6 = (longlong *)puVar15[2];
    lVar14 = (**(code **)(*plVar6 + 0x38))(plVar6);
    uStack_80 = (undefined4)uVar5;
    uStack_7c = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (lVar14 != 0) {
      uVar3 = *(undefined4 *)(puVar15 + 1);
      piVar1 = &(this->ExecuteTable).ArrayMax;
      iVar13 = (this->ExecuteTable).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(this->ExecuteTable).AllocatorInstance,piVar1);
      }
      (this->ExecuteTable).ArrayNum = iVar13 + 1;
      pFVar7 = (this->ExecuteTable).AllocatorInstance.Data;
      pFVar2 = pFVar7 + (longlong)iVar13 * 0x20;
      *(undefined4 *)pFVar2 = uVar3;
      *(undefined4 *)(pFVar2 + 4) = uStack_84;
      *(undefined4 *)(pFVar2 + 8) = uStack_80;
      *(undefined4 *)(pFVar2 + 0xc) = uStack_7c;
      pFVar7 = pFVar7 + (longlong)iVar13 * 0x20 + 0x10;
      *(longlong **)pFVar7 = plVar6;
      *(longlong *)(pFVar7 + 8) = lVar14;
    }
    lVar14 = (**(code **)(*plVar6 + 0x40))(plVar6);
    if (lVar14 != 0) {
      uVar3 = *(undefined4 *)(puVar15 + 1);
      piVar1 = &(this->PostExecuteTable).ArrayMax;
      iVar13 = (this->PostExecuteTable).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(this->PostExecuteTable).AllocatorInstance,piVar1);
      }
      (this->PostExecuteTable).ArrayNum = iVar13 + 1;
      pFVar7 = (this->PostExecuteTable).AllocatorInstance.Data;
      pFVar2 = pFVar7 + (longlong)iVar13 * 0x20;
      *(undefined4 *)pFVar2 = uVar3;
      *(undefined4 *)(pFVar2 + 4) = uStack_64;
      *(undefined4 *)(pFVar2 + 8) = uStack_80;
      *(undefined4 *)(pFVar2 + 0xc) = uStack_7c;
      pFVar7 = pFVar7 + (longlong)iVar13 * 0x20 + 0x10;
      *(longlong **)pFVar7 = plVar6;
      *(longlong *)(pFVar7 + 8) = lVar14;
    }
    lVar14 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if (lVar14 != 0) {
      uVar3 = *(undefined4 *)(puVar15 + 1);
      piVar1 = &(this->ResetTable).ArrayMax;
      iVar13 = (this->ResetTable).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(this->ResetTable).AllocatorInstance,piVar1);
      }
      (this->ResetTable).ArrayNum = iVar13 + 1;
      pFVar7 = (this->ResetTable).AllocatorInstance.Data;
      pFVar2 = pFVar7 + (longlong)iVar13 * 0x20;
      *(ulonglong *)pFVar2 = CONCAT44(uStack_44,uVar3);
      *(undefined8 *)(pFVar2 + 8) = uVar5;
      pFVar7 = pFVar7 + (longlong)iVar13 * 0x20 + 0x10;
      *(longlong **)pFVar7 = plVar6;
      *(longlong *)(pFVar7 + 8) = lVar14;
    }
    puVar15 = puVar15 + 0xf;
  }
  iVar4 = (this->ExecuteTable).ArrayNum;
  pFVar8 = (FExecuteEntry *)(this->ExecuteTable).AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_>
            (pFVar8,iVar4,local_res8[0],(TLess<void>)local_res8[0]);
  iVar4 = (this->PostExecuteTable).ArrayNum;
  pFVar9 = (FPostExecuteEntry *)(this->PostExecuteTable).AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FPostExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_>
            (pFVar9,iVar4,(TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>)local_res8[0],
             (TLess<void>)local_res8[0]);
  iVar4 = (this->ResetTable).ArrayNum;
  pFVar10 = (FResetEntry *)(this->ResetTable).AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FResetEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_>
            (pFVar10,iVar4,(TGetOrdinal<Metasound::DynamicGraph::FResetEntry>)local_res8[0],
             (TLess<void>)local_res8[0]);
  return;
}

