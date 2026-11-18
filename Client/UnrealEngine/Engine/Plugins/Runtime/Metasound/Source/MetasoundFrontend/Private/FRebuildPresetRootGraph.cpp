// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// FRebuildPresetRootGraph @ 14ae5ac40

FRebuildPresetRootGraph * __thiscall
Metasound::Frontend::FRebuildPresetRootGraph::FRebuildPresetRootGraph
          (FRebuildPresetRootGraph *this,FMetasoundFrontendDocument *param_1)

{
  this->ParentBuilder = (FMetaSoundFrontendDocumentBuilder *)0x0;
  this->_padding_ = (longlong)&___7FRebuildPresetRootGraph_Frontend_Metasound__6B_;
  return this;
}

// AddAndConnectInputs @ 14ae60720

void __thiscall
Metasound::Frontend::FRebuildPresetRootGraph::AddAndConnectInputs
          (FRebuildPresetRootGraph *this,
          TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *param_1,
          FMetaSoundFrontendDocumentBuilder *param_2,FGuid *param_3)

{
  int iVar1;
  FName FVar2;
  FMetasoundFrontendClassInputDefault *pFVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  FMetasoundFrontendClassInput *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  INodeTemplateRegistry *pIVar10;
  longlong lVar11;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar12;
  FMetasoundFrontendNode *pFVar13;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar14;
  FMetasoundFrontendVertex *pFVar15;
  ForElementType<FSetElementId> FVar16;
  ulonglong uVar17;
  FMetasoundFrontendClassInput *this_00;
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  undefined8 local_108;
  FMetasoundFrontendVertex *local_100;
  uint local_f8;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> local_f0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_e0;
  FMetasoundFrontendClassInput *local_d8;
  FMetasoundFrontendClassInput local_d0;
  FGuid local_88;
  FMetasoundFrontendEdge local_78;
  
  pIVar10 = INodeTemplateRegistry::Get();
  lVar11 = (**(code **)((longlong)*pIVar10 + 8))(pIVar10,&FInputNodeTemplate::ClassName);
  if ((lVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputTemplate",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                         ,0x352,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  pTVar12 = FMetaSoundFrontendDocumentBuilder::GetGraphInputsInheritingDefault(param_2);
  local_e0 = pTVar12;
  if ((pTVar12 == (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputsInheritingDefault",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                         ,0x357,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_f8 = param_1->ArrayNum;
  uVar17 = (ulonglong)(int)local_f8;
  this_00 = (FMetasoundFrontendClassInput *)(param_1->AllocatorInstance).Data;
  local_d8 = this_00 + uVar17;
  do {
    pFVar6 = local_d8;
    if (param_1->ArrayNum != (int)uVar17) {
      local_118[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_118);
    }
    if (this_00 == pFVar6) {
      if (local_110.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data);
      }
      return;
    }
    FVar2 = (FName)this_00->_padding_;
    pFVar13 = FMetaSoundFrontendDocumentBuilder::FindGraphInputNode(param_2,FVar2,(FGuid *)0x0);
    if (pFVar13 == (FMetasoundFrontendNode *)0x0) {
      local_d0._padding_ = this_00->_padding_;
      local_d0._padding_ = this_00->_padding_;
      local_d0._padding_._0_4_ = (undefined4)this_00->_padding_;
      iVar9 = (this_00->Defaults).ArrayNum;
      local_d0._padding_ = this_00->_padding_;
      local_d0._padding_ = this_00->_padding_;
      pFVar3 = (FMetasoundFrontendClassInputDefault *)(this_00->Defaults).AllocatorInstance.Data;
      local_d0.Defaults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0._padding_ = this_00->_padding_;
      local_d0._padding_ = this_00->_padding_;
      local_d0.Defaults.ArrayNum = iVar9;
      if (iVar9 == 0) {
        local_d0.Defaults.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,iVar9,0,&local_d0.Defaults.AllocatorInstance,iVar9,
                   &local_d0.Defaults.ArrayMax);
        ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
                  (local_d0.Defaults.AllocatorInstance.Data,pFVar3,iVar9);
      }
      pFVar13 = FMetaSoundFrontendDocumentBuilder::AddGraphInput(param_2,&local_d0,(FGuid *)0x0);
    }
    else {
      uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(pTVar12->Elements).field_0x8 != *(int *)&(pTVar12->Elements).field_0x34) {
        FVar4 = (pTVar12->Hash).SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&pTVar12->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar4;
        }
        iVar9 = *(int *)((longlong)FVar16 +
                        (ulonglong)(pTVar12->HashSize - 1U & FVar2.Number + uVar8) * 4);
        if (iVar9 != -1) {
          do {
            if (*(FName *)(*(longlong *)&pTVar12->Elements + (longlong)iVar9 * 0x10) == FVar2)
            goto LAB_14ae6091d;
            iVar9 = *(int *)(*(longlong *)&pTVar12->Elements + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
      iVar9 = -1;
LAB_14ae6091d:
      pTVar14 = FMetasoundFrontendClassInput::GetDefaults(this_00);
      local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = pTVar14->ArrayNum;
      pFVar3 = (FMetasoundFrontendClassInputDefault *)(pTVar14->AllocatorInstance).Data;
      local_f0.ArrayNum = iVar1;
      if (iVar1 == 0) {
        local_f0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,iVar1,0,&local_f0.AllocatorInstance,iVar1,&local_f0.ArrayMax);
        ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
                  (local_f0.AllocatorInstance.Data,pFVar3,iVar1);
      }
      FMetaSoundFrontendDocumentBuilder::SetGraphInputDefaults(param_2,FVar2,&local_f0);
      if (iVar9 != -1) {
        FMetaSoundFrontendDocumentBuilder::SetGraphInputInheritsDefault(param_2,FVar2,true,false);
      }
    }
    local_88.A = (pFVar13->ID).A;
    local_88.B = (pFVar13->ID).B;
    local_88.C = (pFVar13->ID).C;
    local_88.D = (pFVar13->ID).D;
    pFVar15 = FMetaSoundFrontendDocumentBuilder::FindNodeOutput
                        (param_2,&pFVar13->ID,FVar2,(FGuid *)0x0);
    if ((pFVar15 == (FMetasoundFrontendVertex *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InputNodeOutputVertex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                           ,0x372,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_100 = FMetaSoundFrontendDocumentBuilder::FindNodeInput(param_2,param_3,FVar2,(FGuid *)0x0)
    ;
    if ((local_100 == (FMetasoundFrontendVertex *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReferencedNodeInputVertex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                           ,0x374,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((local_110.Data <= (FScriptContainerElement *)&local_100) &&
        ((FScriptContainerElement *)&local_100 < local_110.Data + (longlong)local_108._4_4_ * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (int)local_108;
    if ((int)local_108 == local_108._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_110,(int *)((longlong)&local_108 + 4));
    }
    local_108 = CONCAT44(local_108._4_4_,iVar9 + 1);
    local_78.FromNodeID.A = local_88.A;
    local_78.FromNodeID.B = local_88.B;
    local_78.FromNodeID.C = local_88.C;
    local_78.FromNodeID.D = local_88.D;
    *(FMetasoundFrontendVertex **)(local_110.Data + (longlong)iVar9 * 8) = local_100;
    local_78.FromVertexID.A = (pFVar15->VertexID).A;
    local_78.FromVertexID.B = (pFVar15->VertexID).B;
    local_78.FromVertexID.C = (pFVar15->VertexID).C;
    local_78.FromVertexID.D = (pFVar15->VertexID).D;
    local_78.ToNodeID.A = param_3->A;
    local_78.ToNodeID.B = param_3->B;
    local_78.ToNodeID.C = param_3->C;
    local_78.ToNodeID.D = param_3->D;
    local_78.ToVertexID.A = (local_100->VertexID).A;
    local_78.ToVertexID.B = (local_100->VertexID).B;
    local_78.ToVertexID.C = (local_100->VertexID).C;
    local_78.ToVertexID.D = (local_100->VertexID).D;
    FMetaSoundFrontendDocumentBuilder::AddEdge(param_2,&local_78,(FGuid *)0x0);
    uVar17 = (ulonglong)local_f8;
    this_00 = this_00 + 1;
    pTVar12 = local_e0;
  } while( true );
}

// AddAndConnectOutputs @ 14ae60b80

void __thiscall
Metasound::Frontend::FRebuildPresetRootGraph::AddAndConnectOutputs
          (FRebuildPresetRootGraph *this,
          TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *param_1,
          FMetaSoundFrontendDocumentBuilder *param_2,FGuid *param_3)

{
  int iVar1;
  code *pcVar2;
  FGuid *pFVar3;
  bool bVar4;
  int iVar5;
  FMetasoundFrontendNode *pFVar6;
  FMetasoundFrontendVertex *pFVar7;
  FName *pFVar8;
  FName *pFVar9;
  undefined1 local_res10 [16];
  FGuid *local_res20;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FMetasoundFrontendVertex *local_c8 [2];
  FName local_b8;
  FName FStack_b0;
  FName local_a8;
  FName FStack_a0;
  FName local_98;
  FName FStack_90;
  uint local_88;
  FMetasoundFrontendEdge local_78;
  
  pFVar8 = (FName *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  local_d8.Data = (FScriptContainerElement *)0x0;
  pFVar9 = (FName *)((longlong)pFVar8 + (longlong)iVar1 * 0x34);
  local_d0 = 0;
  local_res20 = param_3;
  while( true ) {
    pFVar3 = local_res20;
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar9) {
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      return;
    }
    pFVar6 = FMetaSoundFrontendDocumentBuilder::FindGraphOutputNode(param_2,*pFVar8,(FGuid *)0x0);
    if (pFVar6 == (FMetasoundFrontendNode *)0x0) {
      local_b8 = *pFVar8;
      FStack_b0 = pFVar8[1];
      local_88 = pFVar8[6].ComparisonIndex.Value;
      local_a8 = pFVar8[2];
      FStack_a0 = pFVar8[3];
      local_98 = pFVar8[4];
      FStack_90 = pFVar8[5];
      pFVar6 = FMetaSoundFrontendDocumentBuilder::AddGraphOutput
                         (param_2,(FMetasoundFrontendClassOutput *)&local_b8,(FGuid *)0x0);
      if ((pFVar6 == (FMetasoundFrontendNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutputNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                             ,0x3c4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_c8[0] = FMetaSoundFrontendDocumentBuilder::FindNodeOutput
                            (param_2,pFVar3,*pFVar8,(FGuid *)0x0);
    if ((local_c8[0] == (FMetasoundFrontendVertex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReferencedNodeOutputVertex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                           ,0x3c8,L""), bVar4)) break;
    pFVar7 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                       (param_2,&pFVar6->ID,*pFVar8,(FGuid *)0x0);
    if ((pFVar7 == (FMetasoundFrontendVertex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutputNodeInputVertex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                           ,0x3ca,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_78.ToNodeID.A = (pFVar6->ID).A;
    local_78.ToNodeID.B = (pFVar6->ID).B;
    local_78.ToNodeID.C = (pFVar6->ID).C;
    local_78.ToNodeID.D = (pFVar6->ID).D;
    local_78.FromNodeID.A = local_res20->A;
    local_78.FromNodeID.B = local_res20->B;
    local_78.FromNodeID.C = local_res20->C;
    local_78.FromNodeID.D = local_res20->D;
    local_78.FromVertexID.A = (local_c8[0]->VertexID).A;
    local_78.FromVertexID.B = (local_c8[0]->VertexID).B;
    local_78.FromVertexID.C = (local_c8[0]->VertexID).C;
    local_78.FromVertexID.D = (local_c8[0]->VertexID).D;
    local_78.ToVertexID.A = (pFVar7->VertexID).A;
    local_78.ToVertexID.B = (pFVar7->VertexID).B;
    local_78.ToVertexID.C = (pFVar7->VertexID).C;
    local_78.ToVertexID.D = (pFVar7->VertexID).D;
    FMetaSoundFrontendDocumentBuilder::AddEdge(param_2,&local_78,(FGuid *)0x0);
    if (((local_d8.Data <= (FScriptContainerElement *)local_c8) &&
        ((FScriptContainerElement *)local_c8 < local_d8.Data + (longlong)local_d0._4_4_ * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)local_d0;
    if ((int)local_d0 == local_d0._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
    }
    local_d0 = CONCAT44(local_d0._4_4_,iVar5 + 1);
    pFVar8 = (FName *)&pFVar8[6].Number;
    *(FMetasoundFrontendVertex **)(local_d8.Data + (longlong)iVar5 * 8) = local_c8[0];
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GenerateRequiredClassInputs @ 14ae73b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FRebuildPresetRootGraph::GenerateRequiredClassInputs
          (FRebuildPresetRootGraph *this,
          TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetaSoundFrontendDocumentBuilder *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  FName *pFVar2;
  int iVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  FRebuildPresetRootGraph *pFVar9;
  void *pvVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *pTVar16;
  FMetasoundFrontendDocument *pFVar17;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar18;
  FDocumentIDGenerator *this_00;
  FGuid *pFVar19;
  FMetasoundFrontendClassInput *pFVar20;
  longlong lVar21;
  ForElementType<FSetElementId> FVar22;
  uint uVar23;
  ForElementType<FSetElementId> FVar24;
  FName *pFVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [3];
  int local_1a4;
  uint local_1a0;
  FMetasoundFrontendClassInput local_198;
  FName local_148;
  FRebuildPresetRootGraph *local_140;
  FMetasoundFrontendDocument *local_138;
  FMetasoundFrontendClassInput *local_130;
  FMetasoundFrontendClassInput *local_128;
  FMetasoundFrontendClassInput *local_120;
  FMetasoundFrontendClassInterface *local_118;
  FName *local_110;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_108;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *local_100;
  code *local_f8;
  FMetasoundFrontendClassInput **local_f0;
  code *local_e8;
  FMetasoundFrontendClassInput **local_e0;
  code *local_d8;
  FMetasoundFrontendClassInput **local_d0;
  FSparseArrayAllocationInfo local_c8;
  FGuid local_b8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_140 = this;
  local_108 = param_2;
  local_100 = __return_storage_ptr__;
  if ((this->ParentBuilder == (FMetaSoundFrontendDocumentBuilder *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentBuilder",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                          ,0x3f8,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pTVar16 = (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar16;
  }
  FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(this->ParentBuilder);
  pFVar17 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(this->ParentBuilder);
  local_138 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(param_1);
  pTVar18 = FMetaSoundFrontendDocumentBuilder::GetGraphInputsInheritingDefault(param_1);
  if ((pTVar18 == (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ExistingInputsInheritingDefaultPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                          ,0x3ff,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pTVar16 = (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar16;
  }
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(&local_a8,pTVar18);
  local_118 = FMetasoundFrontendClass::GetDefaultInterface
                        ((FMetasoundFrontendClass *)&pFVar17->RootGraph);
  pFVar9 = local_140;
  local_1a0 = (local_118->Inputs).ArrayNum;
  uVar26 = (ulonglong)(int)local_1a0;
  pFVar25 = (FName *)(local_118->Inputs).AllocatorInstance.Data;
  local_110 = pFVar25 + uVar26 * 9;
  while( true ) {
    pFVar2 = local_110;
    if ((local_118->Inputs).ArrayNum != (int)uVar26) {
      local_1a8 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1a8);
    }
    pTVar18 = local_108;
    if (pFVar25 == pFVar2) break;
    local_198._padding_ = *(longlong *)pFVar25;
    local_198._padding_ = *(longlong *)(pFVar25 + 1);
    uVar12 = pFVar25[8].ComparisonIndex.Value;
    local_198._padding_._0_4_ = pFVar25[6].ComparisonIndex.Value;
    local_198.Defaults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar4 = pFVar25[7];
    local_198.Defaults.ArrayNum = uVar12;
    local_198._padding_ = *(longlong *)(pFVar25 + 4);
    local_198._padding_ = *(longlong *)(pFVar25 + 5);
    local_198._padding_ = *(longlong *)(pFVar25 + 2);
    local_198._padding_ = *(longlong *)(pFVar25 + 3);
    if (uVar12 == 0) {
      local_198.Defaults.ArrayNum = 0;
      local_198.Defaults.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar12,0,&local_198.Defaults.AllocatorInstance,uVar12,
                 &local_198.Defaults.ArrayMax);
      ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
                (local_198.Defaults.AllocatorInstance.Data,
                 (FMetasoundFrontendClassInputDefault *)FVar4,uVar12);
    }
    this_00 = FDocumentIDGenerator::Get();
    pFVar19 = FDocumentIDGenerator::CreateVertexID(this_00,&local_b8,local_138);
    local_198._padding_._0_4_ = pFVar19->A;
    local_198._padding_._4_4_ = pFVar19->B;
    local_198._padding_._0_4_ = pFVar19->C;
    local_198._padding_._4_4_ = pFVar19->D;
    FMetasoundFrontendClassInput::ResetDefaults(&local_198,false);
    pFVar20 = FMetaSoundFrontendDocumentBuilder::FindGraphInput(param_1,*pFVar25);
    if (pFVar20 != (FMetasoundFrontendClassInput *)0x0) {
      local_198._padding_ = pFVar20->_padding_;
      local_198._padding_ = pFVar20->_padding_;
    }
    pFVar20 = FMetaSoundFrontendDocumentBuilder::FindGraphInput(param_1,*pFVar25);
    if ((pFVar20 == (FMetasoundFrontendClassInput *)0x0) ||
       ((FName)pFVar20->_padding_ != pFVar25[1])) {
      pFVar20 = FMetaSoundFrontendDocumentBuilder::FindGraphInput(pFVar9->ParentBuilder,*pFVar25);
      if (pFVar20 == (FMetasoundFrontendClassInput *)0x0) {
        FMetasoundFrontendClassInput::InitDefault(&local_198);
      }
      else {
        local_d0 = &local_120;
        local_d8 = UE::Core::Private::Function::
                   TFunctionRefCaller<``Metasound::Frontend::FRebuildPresetRootGraph::GenerateRequiredClassInputs'::__l20::<lambda_1>::operator()'::__l5::<lambda_1>,void,FGuid_const_&,FMetasoundFrontendLiteral_const_&>
                   ::Call;
        local_120 = &local_198;
        FMetasoundFrontendClassInput::IterateDefaults
                  (pFVar20,(TFunctionRef<void___cdecl(FGuid_const_&,FMetasoundFrontendLiteral_const_&)>
                            *)&local_d8);
      }
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&local_a8,&local_148,(bool *)pFVar25);
    }
    else {
      FVar4 = *pFVar25;
      uVar12 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
        FVar22 = (ForElementType<FSetElementId>)&local_a8.Hash;
        if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar22 = local_a8.Hash.SecondaryData;
        }
        for (iVar13 = *(int *)((longlong)FVar22 +
                              (ulonglong)(local_a8.HashSize - 1U & FVar4.Number + uVar12) * 4);
            iVar13 != -1; iVar13 = *(int *)(local_a8.Elements._0_8_ + 8 + (longlong)iVar13 * 0x10))
        {
          if (*(FName *)(local_a8.Elements._0_8_ + (longlong)iVar13 * 0x10) == FVar4) {
            pFVar20 = FMetaSoundFrontendDocumentBuilder::FindGraphInput
                                (pFVar9->ParentBuilder,*pFVar25);
            if (pFVar20 == (FMetasoundFrontendClassInput *)0x0) goto LAB_14ae73e8c;
            local_130 = &local_198;
            local_f0 = &local_130;
            local_f8 = UE::Core::Private::Function::
                       TFunctionRefCaller<``Metasound::Frontend::FRebuildPresetRootGraph::GenerateRequiredClassInputs'::__l20::<lambda_1>::operator()'::__l5::<lambda_1>,void,FGuid_const_&,FMetasoundFrontendLiteral_const_&>
                       ::Call;
            FMetasoundFrontendClassInput::IterateDefaults
                      (pFVar20,(TFunctionRef<void___cdecl(FGuid_const_&,FMetasoundFrontendLiteral_const_&)>
                                *)&local_f8);
            goto LAB_14ae73eeb;
          }
        }
      }
      pFVar20 = FMetaSoundFrontendDocumentBuilder::FindGraphInput(param_1,*pFVar25);
      if (pFVar20 == (FMetasoundFrontendClassInput *)0x0) {
LAB_14ae73e8c:
        FMetasoundFrontendClassInput::InitDefault(&local_198);
      }
      else {
        local_128 = &local_198;
        local_e0 = &local_128;
        local_e8 = UE::Core::Private::Function::
                   TFunctionRefCaller<``Metasound::Frontend::FRebuildPresetRootGraph::GenerateRequiredClassInputs'::__l20::<lambda_1>::operator()'::__l5::<lambda_1>,void,FGuid_const_&,FMetasoundFrontendLiteral_const_&>
                   ::Call;
        FMetasoundFrontendClassInput::IterateDefaults
                  (pFVar20,(TFunctionRef<void___cdecl(FGuid_const_&,FMetasoundFrontendLiteral_const_&)>
                            *)&local_e8);
      }
    }
LAB_14ae73eeb:
    pFVar20 = (FMetasoundFrontendClassInput *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar20 <= &local_198) && (&local_198 < pFVar20 + __return_storage_ptr__->ArrayMax)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar16;
    }
    iVar13 = __return_storage_ptr__->ArrayNum;
    if (iVar13 == __return_storage_ptr__->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar13 + 1;
    lVar21 = (longlong)iVar13;
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar2 = (FName *)(pFVar5 + lVar21 * 0x48);
    pFVar2->ComparisonIndex = (FNameEntryId)(undefined4)local_198._padding_;
    pFVar2->Number = local_198._padding_._4_4_;
    pFVar2[1].ComparisonIndex = (FNameEntryId)(undefined4)local_198._padding_;
    pFVar2[1].Number = local_198._padding_._4_4_;
    *(longlong *)(pFVar5 + lVar21 * 0x48 + 0x10) = local_198._padding_;
    *(longlong *)(pFVar5 + lVar21 * 0x48 + 0x18) = local_198._padding_;
    ((FName *)(pFVar5 + lVar21 * 0x48 + 0x20))->ComparisonIndex =
         (FNameEntryId)(undefined4)local_198._padding_;
    ((FName *)(pFVar5 + lVar21 * 0x48 + 0x20))->Number = local_198._padding_._4_4_;
    ((FName *)(pFVar5 + lVar21 * 0x48 + 0x28))->ComparisonIndex =
         (FNameEntryId)(undefined4)local_198._padding_;
    ((FName *)(pFVar5 + lVar21 * 0x48 + 0x28))->Number = local_198._padding_._4_4_;
    *(uint *)(pFVar5 + lVar21 * 0x48 + 0x30) = (uint)local_198._padding_;
    *(undefined8 *)(pFVar5 + lVar21 * 0x48 + 0x38) = 0;
    *(FScriptContainerElement **)(pFVar5 + lVar21 * 0x48 + 0x38) =
         local_198.Defaults.AllocatorInstance.Data;
    local_198.Defaults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar5 + lVar21 * 0x48 + 0x40) = local_198.Defaults.ArrayNum;
    *(int *)(pFVar5 + lVar21 * 0x48 + 0x44) = local_198.Defaults.ArrayMax;
    local_198.Defaults.ArrayNum = 0;
    local_198.Defaults.ArrayMax = 0;
    DestructItems<FMetasoundFrontendClassInputDefault,int>
              ((FMetasoundFrontendClassInputDefault *)0x0,0);
    if (local_198.Defaults.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Defaults.AllocatorInstance.Data);
    }
    pFVar25 = pFVar25 + 9;
    uVar26 = (ulonglong)local_1a0;
  }
  puVar1 = &(local_108->Elements).field_0x8;
  if (*(int *)&(local_108->Elements).field_0x8 != *(int *)&(local_108->Elements).field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(local_108);
    iVar13 = *(int *)&(pTVar18->Elements).field_0xc;
    *(undefined4 *)puVar1 = 0;
    if (iVar13 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)pTVar18,0,(int *)&(pTVar18->Elements).field_0xc);
    }
    *(undefined4 *)&(pTVar18->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar18->Elements).field_0x34 = 0;
    *(undefined4 *)&(pTVar18->Elements).field_0x28 = 0;
  }
  pFVar27 = (__return_storage_ptr__->AllocatorInstance).Data;
  iVar13 = __return_storage_ptr__->ArrayNum;
  pFVar5 = pFVar27 + (longlong)iVar13 * 0x48;
LAB_14ae74070:
  pTVar16 = local_100;
  if (local_100->ArrayNum != iVar13) {
    `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_1a7);
  }
  if (pFVar27 == pFVar5) {
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    return pTVar16;
  }
  lVar21 = *(longlong *)pFVar27;
  uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar21);
  if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
    FVar22 = (ForElementType<FSetElementId>)&local_a8.Hash;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar22 = local_a8.Hash.SecondaryData;
    }
    iVar15 = *(int *)((longlong)FVar22 +
                     (ulonglong)(local_a8.HashSize - 1U & uVar12 + (int)((ulonglong)lVar21 >> 0x20))
                     * 4);
    if (iVar15 != -1) {
LAB_14ae740e0:
      if (*(longlong *)(local_a8.Elements._0_8_ + (longlong)iVar15 * 0x10) != lVar21)
      goto code_r0x00014ae740ec;
      iVar15 = *(int *)&(pTVar18->Elements).field_0x34;
      lVar21 = *(longlong *)pFVar27;
      if (iVar15 == 0) {
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,4,1,(ForAnyElementType *)pTVar18,(int *)puVar1,
                            (int *)&(pTVar18->Elements).field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(pTVar18->Elements).field_0x10,false);
      }
      else {
        iVar14 = *(int *)&(pTVar18->Elements).field_0x30;
        lVar6 = *(longlong *)&pTVar18->Elements;
        iVar3 = *(int *)(lVar6 + 4 + (longlong)iVar14 * 0x10);
        iVar15 = iVar15 + -1;
        *(int *)&(pTVar18->Elements).field_0x30 = iVar3;
        *(int *)&(pTVar18->Elements).field_0x34 = iVar15;
        if (iVar15 != 0) {
          *(undefined4 *)(lVar6 + (longlong)iVar3 * 0x10) = 0xffffffff;
        }
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar18,&local_c8,iVar14);
      pvVar10 = local_c8.Pointer;
      if (local_c8.Pointer != (TSparseSetElement<FName> *)0x0) {
        *(longlong *)local_c8.Pointer = lVar21;
        *(undefined4 *)((longlong)local_c8.Pointer + 8) = 0xffffffff;
      }
      uVar7 = *(undefined8 *)local_c8.Pointer;
      local_1a4 = local_c8.Index;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar7);
      uVar12 = (int)((ulonglong)uVar7 >> 0x20) + uVar12;
      bVar11 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::TryReplaceExisting
                         (pTVar18,uVar12,pvVar10,&local_1a4,(bool *)0x0);
      if (bVar11) goto LAB_14ae74246;
      uVar23 = *(int *)puVar1 - *(int *)&(pTVar18->Elements).field_0x34;
      if (uVar23 < 4) {
        iVar15 = 1;
      }
      else {
        uVar26 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((int)uVar23 < 1) || (iVar15 <= pTVar18->HashSize)) {
        uVar12 = pTVar18->HashSize - 1U & uVar12;
        *(uint *)((longlong)pvVar10 + 0xc) = uVar12;
        FVar22 = (pTVar18->Hash).SecondaryData;
        FVar24 = (ForElementType<FSetElementId>)&pTVar18->Hash;
        if (FVar22 != (ForElementType<FSetElementId>)0x0) {
          FVar24 = FVar22;
        }
        uVar26 = (longlong)pTVar18->HashSize - 1U & (longlong)(int)uVar12;
        *(undefined4 *)((longlong)pvVar10 + 8) = *(undefined4 *)((longlong)FVar24 + uVar26 * 4);
        *(int *)((longlong)FVar24 + uVar26 * 4) = local_1a4;
        goto LAB_14ae74246;
      }
      pTVar18->HashSize = iVar15;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(pTVar18);
      pFVar27 = pFVar27 + 0x48;
      goto LAB_14ae74070;
    }
  }
LAB_14ae74246:
  pFVar27 = pFVar27 + 0x48;
  goto LAB_14ae74070;
code_r0x00014ae740ec:
  iVar15 = *(int *)(local_a8.Elements._0_8_ + 8 + (longlong)iVar15 * 0x10);
  if (iVar15 == -1) goto code_r0x00014ae740f5;
  goto LAB_14ae740e0;
code_r0x00014ae740f5:
  pFVar27 = pFVar27 + 0x48;
  goto LAB_14ae74070;
}

// GenerateRequiredClassOutputs @ 14ae742a0

TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FRebuildPresetRootGraph::GenerateRequiredClassOutputs
          (FRebuildPresetRootGraph *this,
          TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetaSoundFrontendDocumentBuilder *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *pTVar5;
  FMetasoundFrontendDocument *pFVar6;
  FMetasoundFrontendDocument *pFVar7;
  FMetasoundFrontendClassInterface *pFVar8;
  FDocumentIDGenerator *this_00;
  FGuid *pFVar9;
  FMetasoundFrontendClassOutput *pFVar10;
  FName *pFVar11;
  FName *pFVar12;
  FName *pFVar13;
  undefined1 local_res8 [8];
  FGuid local_78;
  FName local_68;
  FName FStack_60;
  FName local_58;
  FName FStack_50;
  FName local_48;
  FName FStack_40;
  uint local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this->ParentBuilder == (FMetaSoundFrontendDocumentBuilder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentBuilder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                       ,0x44a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar6 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(this->ParentBuilder);
  pFVar7 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(param_1);
  pFVar8 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar6->RootGraph);
  iVar1 = (pFVar8->Outputs).ArrayNum;
  pFVar12 = (FName *)(pFVar8->Outputs).AllocatorInstance.Data;
  pFVar13 = (FName *)((longlong)pFVar12 + (longlong)iVar1 * 0x34);
  while( true ) {
    if ((pFVar8->Outputs).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar13) break;
    local_68 = *pFVar12;
    FStack_60 = pFVar12[1];
    local_38 = pFVar12[6].ComparisonIndex.Value;
    local_58 = pFVar12[2];
    FStack_50 = pFVar12[3];
    local_48 = pFVar12[4];
    FStack_40 = pFVar12[5];
    this_00 = FDocumentIDGenerator::Get();
    pFVar9 = FDocumentIDGenerator::CreateVertexID(this_00,&local_78,pFVar7);
    local_58.ComparisonIndex.Value = pFVar9->A;
    local_58.Number = pFVar9->B;
    FStack_50.ComparisonIndex.Value = pFVar9->C;
    FStack_50.Number = pFVar9->D;
    pFVar10 = FMetaSoundFrontendDocumentBuilder::FindGraphOutput(param_1,*pFVar12);
    if (pFVar10 != (FMetasoundFrontendClassOutput *)0x0) {
      local_48.ComparisonIndex.Value = *(uint *)&pFVar10->field_0x20;
      local_48.Number = *(uint *)&pFVar10->field_0x24;
      FStack_40.ComparisonIndex.Value = *(uint *)&pFVar10->field_0x28;
      FStack_40.Number = *(uint *)&pFVar10->field_0x2c;
    }
    pFVar11 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar11 <= &local_68) &&
       (&local_68 < (FName *)((longlong)pFVar11 + (longlong)__return_storage_ptr__->ArrayMax * 0x34)
       )) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x434,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    pFVar11 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x34);
    pFVar12 = (FName *)&pFVar12[6].Number;
    *pFVar11 = local_68;
    pFVar11[1] = FStack_60;
    pFVar11[2] = local_58;
    pFVar11[3] = FStack_50;
    pFVar11[4] = local_48;
    pFVar11[5] = FStack_40;
    pFVar11[6].ComparisonIndex.Value = local_38;
  }
  return __return_storage_ptr__;
}

// Transform @ 14ae8bf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::FRebuildPresetRootGraph::Transform
          (FRebuildPresetRootGraph *this,FMetaSoundFrontendDocumentBuilder *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  FRebuildPresetRootGraph *this_00;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *pTVar9;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  FMetasoundFrontendDocument *pFVar13;
  FDocumentModifyDelegates *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FMetasoundFrontendVersionNumber *pFVar16;
  FMetasoundFrontendNode *pFVar17;
  longlong lVar18;
  int iVar19;
  ForElementType<unsigned_int> FVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c6 [6];
  undefined8 local_1c0;
  FGuid local_1b8;
  FMetasoundFrontendDocument *local_1a8;
  ForElementType<unsigned_int> local_1a0;
  TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> local_198;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> local_188;
  int local_178;
  int local_174;
  FGuid *local_170;
  FRebuildPresetRootGraph *local_168;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_160;
  longlong lStack_158;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  code *local_f0;
  FGuid **local_e8;
  TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> local_e0;
  FGuid local_c8 [2];
  undefined4 local_9c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  iVar7 = GCycleStatsShouldEmitNamedEvents;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_168 = this;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::Frontend::FRebuildPresetRootGraph::Transform");
  }
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId697,
               "Metasound::Frontend::FRebuildPresetRootGraph::Transform",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
               ,0x2b9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId697);
  }
  bVar11 = FMetaSoundFrontendDocumentBuilder::IsPreset(param_1);
  if ((!bVar11) || (this->ParentBuilder == (FMetaSoundFrontendDocumentBuilder *)0x0)) {
    bVar11 = false;
    goto LAB_14ae8c54a;
  }
  pFVar13 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(param_1);
  local_1a8 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(this->ParentBuilder);
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_98.Elements._44_4_ = 0x80;
  GenerateRequiredClassInputs(this,&local_188,param_1,&local_98);
  GenerateRequiredClassOutputs(this,&local_e0,param_1);
  local_170 = &local_1b8;
  local_1b8.A = 0;
  local_1b8.B = 0;
  local_e8 = &local_170;
  local_1b8.C = 0;
  local_1b8.D = 0;
  local_f0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FRebuildPresetRootGraph::Transform'::__l2::<lambda_1>,void,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&>
             ::Call;
  FMetaSoundFrontendDocumentBuilder::IterateNodesByClassType
            (param_1,(TFunctionRef<void___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
                      *)&local_f0,External,(FGuid *)0x0);
  if (((local_1b8.C == 0 && local_1b8.B == 0) && local_1b8.A == 0) && local_1b8.D == 0) {
    local_1b8._0_8_ = (pFVar13->RootGraph)._padding_;
    local_1b8._8_8_ = (pFVar13->RootGraph)._padding_;
  }
  pFVar14 = FMetaSoundFrontendDocumentBuilder::GetDocumentDelegates(param_1);
  pTVar15 = ::operator_new(0x2f0);
  local_1c0 = 1;
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
    pFVar14 = (FDocumentModifyDelegates *)&DAT_00000010;
LAB_14ae8c16f:
    if (((pFVar14->_padding_ == 0) || (*(longlong *)&pFVar14->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar14->_padding_ + 8) < 1)) {
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar14->_padding_ = (longlong)pFVar14;
      if (pTVar15 != *(TReferenceControllerBase<1> **)&pFVar14->_padding_) {
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = *(longlong **)&pFVar14->_padding_;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,local_1c0);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar14->_padding_ = pTVar15;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    }
  }
  else {
    pTVar15->SharedReferenceCount = (atomic<int>)0x1;
    pTVar15->WeakReferenceCount = (atomic<int>)0x1;
    pTVar15->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDocumentModifyDelegates_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FDocumentModifyDelegates::FDocumentModifyDelegates
              ((FDocumentModifyDelegates *)(pTVar15 + 1),pFVar14);
    pFVar14 = (FDocumentModifyDelegates *)(pTVar15 + 1);
    if (pFVar14 != (FDocumentModifyDelegates *)0x0) goto LAB_14ae8c16f;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
  }
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_198.Object = pFVar14;
  local_198.SharedReferenceCount.ReferenceController = pTVar15;
  FMetaSoundFrontendDocumentBuilder::ClearDocument(param_1,&local_198);
  FMetaSoundFrontendDocumentBuilder::SetPresetFlags(param_1,true);
  iStack_148 = 0;
  iVar19 = *(int *)&(local_1a8->Interfaces).Elements.field_0x28;
  local_140 = &(local_1a8->Interfaces).Elements.field_0x10;
  local_130 = 0;
  local_160 = &local_1a8->Interfaces;
  iStack_134 = 0;
  if (iVar19 == 0) {
LAB_14ae8c28c:
    uStack_144 = (uint)local_1c0;
  }
  else {
    puVar21 = *(uint **)&(local_1a8->Interfaces).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)local_140;
    }
    uStack_144 = *puVar21;
    while (uStack_144 == 0) {
      lVar18 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      iStack_134 = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14ae8c28c;
      uStack_144 = puVar21[lVar18 + 1];
    }
    uStack_144 = -uStack_144 & uStack_144;
    uVar2 = (ulonglong)uStack_144 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_178 = (int)lVar18;
    iStack_134 = local_178 + -1 + local_130;
    if (iVar19 < iStack_134) {
      iStack_134 = iVar19;
    }
  }
  uStack_12c = local_9c;
  iStack_128 = *(int *)&(local_1a8->Interfaces).Elements.field_0x8 -
               *(int *)&(local_1a8->Interfaces).Elements.field_0x34;
  uVar23 = *(uint *)&(local_1a8->Interfaces).Elements.field_0x28;
  local_1a0 = (ForElementType<unsigned_int>)&(local_1a8->Interfaces).Elements.field_0x10;
  uStack_138 = 0xffffffff;
  TStack_118.CurrentBitIndex = iStack_134;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  TStack_118._padding_ = CONCAT44(uStack_144,iStack_148);
  uVar22 = uVar23 & 0xffffffe0;
  iVar19 = (int)uVar23 >> 5;
  local_1c0 = CONCAT44(local_1c0._4_4_,uVar23);
  TStack_118._28_4_ = local_9c;
  TStack_118.BaseBitIndex = local_130;
  uStack_f8 = CONCAT44(uStack_124,iStack_128);
  uVar3 = uVar23;
  local_150 = local_160;
  local_120 = local_160;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140;
  if ((int)uVar23 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
    uVar3 = (uint)local_1c0;
  }
  pTVar9 = local_160;
  this_00 = local_168;
  FVar8 = local_1a0;
  uVar4 = *(int *)((longlong)local_1a0 + 0x18);
  if (uVar3 != uVar4) {
    local_1c0 = CONCAT44(local_1c0._4_4_,uVar4);
    FVar20 = local_1a0;
    if (*(ForElementType<unsigned_int> *)((longlong)local_1a0 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_1a0 + 0x10);
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar19 * 4);
    while (uVar23 == 0) {
      lVar18 = (longlong)iVar19;
      uVar22 = uVar22 + 0x20;
      iVar19 = iVar19 + 1;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14ae8c3b3;
      uVar23 = *(uint *)((undefined1 *)((longlong)FVar20 + 4) + lVar18 * 4);
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_174 = (int)lVar18;
    uVar22 = local_174 + -1 + uVar22;
    if ((int)uVar4 < (int)uVar22) {
      uVar22 = uVar4;
    }
    local_1c0 = CONCAT44(local_1c0._4_4_,uVar22);
  }
LAB_14ae8c3b3:
  iVar19 = (uint)local_1c0;
  while( true ) {
    pTVar10 = local_120;
    if (*(int *)&(local_120->Elements).field_0x8 - *(int *)&(local_120->Elements).field_0x34 !=
        (int)uStack_f8) {
      local_1c6[0] = 0;
      `TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1c6);
    }
    pFVar13 = local_1a8;
    if (((TStack_118.CurrentBitIndex == iVar19) &&
        ((ForElementType<unsigned_int>)TStack_118.Array == FVar8)) && (pTVar10 == pTVar9)) break;
    FMetaSoundFrontendDocumentBuilder::AddInterface
              (param_1,*(FName *)(*(longlong *)&pTVar10->Elements +
                                 (longlong)TStack_118.CurrentBitIndex * 0x18),false,
               this_00->ParentBuilder);
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  local_160 = (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
               *)local_1b8._0_8_;
  lStack_158._0_4_ = local_1b8.C;
  lStack_158._4_4_ = local_1b8.D;
  pFVar16 = FMetasoundFrontendClassMetadata::GetVersion
                      ((FMetasoundFrontendClassMetadata *)&(local_1a8->RootGraph)._padding_);
  local_c8[0]._0_8_ = local_160;
  local_c8[0].C = (undefined4)lStack_158;
  local_c8[0].D = lStack_158._4_4_;
  pFVar17 = FMetaSoundFrontendDocumentBuilder::AddNodeByClassName
                      (param_1,(FMetasoundFrontendClassName *)&(pFVar13->RootGraph)._padding_,
                       pFVar16->Major,local_c8,(FGuid *)0x0);
  if ((pFVar17 == (FMetasoundFrontendNode *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ReferencedNode",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                          ,0x2f3,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  FMetaSoundFrontendDocumentBuilder::SetGraphInputsInheritingDefault(param_1,&local_98);
  AddAndConnectInputs(this_00,&local_188,param_1,&local_1b8);
  AddAndConnectOutputs(this_00,&local_e0,param_1,&local_1b8);
  bVar11 = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_188.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
LAB_14ae8c54a:
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar11;
}

// Transform @ 14ae8c5b0

bool __thiscall
Metasound::Frontend::FRebuildPresetRootGraph::Transform
          (FRebuildPresetRootGraph *this,FMetasoundFrontendDocument *param_1)

{
  return false;
}

// Transform @ 14ae8c5c0

bool __thiscall
Metasound::Frontend::FRebuildPresetRootGraph::Transform
          (FRebuildPresetRootGraph *this,
          TSharedRef<Metasound::Frontend::IDocumentController,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

