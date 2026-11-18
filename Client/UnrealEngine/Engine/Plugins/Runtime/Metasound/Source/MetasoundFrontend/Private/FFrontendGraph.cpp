// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// FFrontendGraph @ 14ae1bac0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FFrontendGraph * __thiscall
Metasound::FFrontendGraph::FFrontendGraph
          (FFrontendGraph *this,FTopLevelAssetPath *param_1,FGuid *param_2)

{
  TSharedPtr<Metasound::IOperatorData_const_,1> local_18;
  
  local_18.Object = (IOperatorData *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGraph::FGraph((FGraph *)this,param_1,param_2,&local_18);
  this->_padding_ = (longlong)&___7FFrontendGraph_Metasound__6B_;
  *(undefined8 *)&this->InputNodes = 0;
  *(undefined8 *)&(this->InputNodes).field_0x8 = 0;
  *(undefined8 *)&(this->InputNodes).field_0x20 = 0;
  *(undefined4 *)&(this->InputNodes).field_0x28 = 0;
  *(undefined4 *)&(this->InputNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputNodes).field_0x34 = 0;
  *(undefined4 *)&(this->InputNodes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InputNodes).field_0x40 = 0;
  *(undefined4 *)&(this->InputNodes).field_0x48 = 0;
  *(undefined8 *)&this->OutputNodes = 0;
  *(undefined8 *)&(this->OutputNodes).field_0x8 = 0;
  *(undefined8 *)&(this->OutputNodes).field_0x20 = 0;
  *(undefined4 *)&(this->OutputNodes).field_0x28 = 0;
  *(undefined4 *)&(this->OutputNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputNodes).field_0x34 = 0;
  *(undefined4 *)&(this->OutputNodes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OutputNodes).field_0x40 = 0;
  *(undefined4 *)&(this->OutputNodes).field_0x48 = 0;
  return this;
}

// FFrontendGraph @ 14ae1bb80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FFrontendGraph * __thiscall
Metasound::FFrontendGraph::FFrontendGraph(FFrontendGraph *this,FString *param_1,FGuid *param_2)

{
  int iVar1;
  int iVar2;
  FTopLevelAssetPath local_38;
  TStringView<wchar_t> local_28;
  TSharedPtr<Metasound::IOperatorData_const_,1> local_18;
  
  local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_38.PackageName.ComparisonIndex.Value = 0;
  local_38.PackageName.Number = 0;
  local_18.Object = (IOperatorData *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetName.Number = 0;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_28.Size = iVar2;
  FTopLevelAssetPath::TrySetPath(&local_38,&local_28);
  FGraph::FGraph((FGraph *)this,&local_38,param_2,&local_18);
  this->_padding_ = (longlong)&___7FFrontendGraph_Metasound__6B_;
  *(undefined8 *)&this->InputNodes = 0;
  *(undefined8 *)&(this->InputNodes).field_0x8 = 0;
  *(undefined8 *)&(this->InputNodes).field_0x20 = 0;
  *(undefined4 *)&(this->InputNodes).field_0x28 = 0;
  *(undefined4 *)&(this->InputNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputNodes).field_0x34 = 0;
  *(undefined4 *)&(this->InputNodes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InputNodes).field_0x40 = 0;
  *(undefined4 *)&(this->InputNodes).field_0x48 = 0;
  *(undefined8 *)&this->OutputNodes = 0;
  *(undefined8 *)&(this->OutputNodes).field_0x8 = 0;
  *(undefined8 *)&(this->OutputNodes).field_0x20 = 0;
  *(undefined4 *)&(this->OutputNodes).field_0x28 = 0;
  *(undefined4 *)&(this->OutputNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputNodes).field_0x34 = 0;
  *(undefined4 *)&(this->OutputNodes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OutputNodes).field_0x40 = 0;
  *(undefined4 *)&(this->OutputNodes).field_0x48 = 0;
  return this;
}

// ~FFrontendGraph @ 14ae1d7b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall Metasound::FFrontendGraph::~FFrontendGraph(FFrontendGraph *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->OutputNodes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OutputNodes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputNodes);
  *(undefined4 *)&(this->InputNodes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InputNodes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InputNodes);
  FGraph::~FGraph((FGraph *)this);
  return;
}

// AddInputNode @ 14ae21660

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::FFrontendGraph::AddInputNode
          (FFrontendGraph *this,FGuid *param_1,int param_2,FName *param_3,
          TSharedPtr<Metasound::INode_const_,1> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  TSharedPtr<Metasound::INode_const_,1> *pTVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_res18 [4];
  INode *local_58;
  int *local_50;
  INode **local_48;
  TSharedPtr<Metasound::INode_const_,1> local_40;
  FGuid local_28;
  
  pTVar3 = param_4;
  local_res18[0] = param_2;
  if (param_4->Object != (INode *)0x0) {
    if (*(int *)&(this->InputNodes).field_0x8 != *(int *)&(this->InputNodes).field_0x34) {
      puVar6 = *(undefined1 **)&(this->InputNodes).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->InputNodes).field_0x38;
      }
      iVar5 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->InputNodes).field_0x48 - 1U & param_2) *
                                4);
      if (iVar5 != -1) {
        lVar1 = *(longlong *)&(this->InputNodes).field_0x0;
        do {
          if (*(int *)(lVar1 + (longlong)iVar5 * 0x18) == param_2) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InputNodes.Contains(InIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraph.cpp"
                               ,0x1d,L"");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    local_58 = pTVar3->Object;
    local_50 = local_res18;
    local_48 = &local_58;
    TSet<TTuple<int,Metasound::INode_const_*>,TDefaultMapHashableKeyFuncs<int,Metasound::INode_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,Metasound::INode_const_*_&&>_>
              ((TSet<TTuple<int,Metasound::INode_const_*>,TDefaultMapHashableKeyFuncs<int,Metasound::INode_const_*,0>,FDefaultSetAllocator>
                *)&this->InputNodes,
               (TPairInitializer<int_const_&,Metasound::INode_const_*_&&> *)&param_4,
               (bool *)&local_50);
    local_40.Object = pTVar3->Object;
    local_28.A = param_1->A;
    local_28.B = param_1->B;
    local_28.C = param_1->C;
    local_28.D = param_1->D;
    local_40.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    (pTVar3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar3->Object = (INode *)0x0;
    FGraph::AddInputNode((FGraph *)this,&local_28,param_3,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar3->SharedReferenceCount).ReferenceController);
  return;
}

// AddOutputNode @ 14ae22a00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::FFrontendGraph::AddOutputNode
          (FFrontendGraph *this,FGuid *param_1,int param_2,FName *param_3,
          TSharedPtr<Metasound::INode_const_,1> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  TSharedPtr<Metasound::INode_const_,1> *pTVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_res18 [4];
  INode *local_58;
  int *local_50;
  INode **local_48;
  TSharedPtr<Metasound::INode_const_,1> local_40;
  FGuid local_28;
  
  pTVar3 = param_4;
  local_res18[0] = param_2;
  if (param_4->Object != (INode *)0x0) {
    if (*(int *)&(this->OutputNodes).field_0x8 != *(int *)&(this->OutputNodes).field_0x34) {
      puVar6 = *(undefined1 **)&(this->OutputNodes).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->OutputNodes).field_0x38;
      }
      iVar5 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->OutputNodes).field_0x48 - 1U & param_2)
                                * 4);
      if (iVar5 != -1) {
        lVar1 = *(longlong *)&(this->OutputNodes).field_0x0;
        do {
          if (*(int *)(lVar1 + (longlong)iVar5 * 0x18) == param_2) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!OutputNodes.Contains(InIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraph.cpp"
                               ,0x2c,L"");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    local_58 = pTVar3->Object;
    local_50 = local_res18;
    local_48 = &local_58;
    TSet<TTuple<int,Metasound::INode_const_*>,TDefaultMapHashableKeyFuncs<int,Metasound::INode_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,Metasound::INode_const_*_&&>_>
              ((TSet<TTuple<int,Metasound::INode_const_*>,TDefaultMapHashableKeyFuncs<int,Metasound::INode_const_*,0>,FDefaultSetAllocator>
                *)&this->OutputNodes,
               (TPairInitializer<int_const_&,Metasound::INode_const_*_&&> *)&param_4,
               (bool *)&local_50);
    local_40.Object = pTVar3->Object;
    local_28.A = param_1->A;
    local_28.B = param_1->B;
    local_28.C = param_1->C;
    local_28.D = param_1->D;
    local_40.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    (pTVar3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar3->Object = (INode *)0x0;
    FGraph::AddOutputNode((FGraph *)this,&local_28,param_3,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar3->SharedReferenceCount).ReferenceController);
  return;
}

// FindInputNode @ 14ae339f0

INode * __thiscall Metasound::FFrontendGraph::FindInputNode(FFrontendGraph *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->InputNodes).field_0x8 != *(int *)&(this->InputNodes).field_0x34) {
    puVar4 = *(undefined1 **)&(this->InputNodes).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->InputNodes).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->InputNodes).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->InputNodes + (longlong)iVar2 * 0x18;
        if (*(int *)(*(longlong *)&this->InputNodes + (longlong)iVar2 * 0x18) == param_1) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 == (undefined8 *)0x0) {
            return (INode *)0x0;
          }
          return (INode *)*puVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (INode *)0x0;
}

// FindOutputNode @ 14ae35820

INode * __thiscall Metasound::FFrontendGraph::FindOutputNode(FFrontendGraph *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->OutputNodes).field_0x8 != *(int *)&(this->OutputNodes).field_0x34) {
    puVar4 = *(undefined1 **)&(this->OutputNodes).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->OutputNodes).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->OutputNodes).field_0x48 - 1U & param_1) *
                              4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->OutputNodes + (longlong)iVar2 * 0x18;
        if (*(int *)(*(longlong *)&this->OutputNodes + (longlong)iVar2 * 0x18) == param_1) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 == (undefined8 *)0x0) {
            return (INode *)0x0;
          }
          return (INode *)*puVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (INode *)0x0;
}

