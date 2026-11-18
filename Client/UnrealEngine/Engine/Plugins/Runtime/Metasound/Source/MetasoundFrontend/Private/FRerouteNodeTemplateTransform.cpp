// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// ~FRerouteNodeTemplateTransform @ 14af42da0

void __thiscall
Metasound::Frontend::ReroutePrivate::FRerouteNodeTemplateTransform::~FRerouteNodeTemplateTransform
          (FRerouteNodeTemplateTransform *this)

{
  return;
}

// Transform @ 14afbfbd0

bool __thiscall
Metasound::Frontend::ReroutePrivate::FRerouteNodeTemplateTransform::Transform
          (FRerouteNodeTemplateTransform *this,FGuid *param_1,FGuid *param_2,
          FMetaSoundFrontendDocumentBuilder *param_3)

{
  FScriptContainerElement *pFVar1;
  FGuid *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FMetasoundFrontendNode *pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  FMetasoundFrontendEdge *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116 [6];
  ForAnyElementType local_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> local_e8;
  FGuid local_d8;
  FGuid local_c8;
  FGuid *local_b8;
  FMetaSoundFrontendDocumentBuilder *local_b0;
  FMetasoundFrontendEdge local_a8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  local_d8 = FrontendInvalidID;
  local_c8 = FrontendInvalidID;
  pFVar8 = FMetaSoundFrontendDocumentBuilder::FindNode(param_3,param_2,param_1);
  if ((pFVar8 != (FMetasoundFrontendNode *)0x0) ||
     (local_b8 = param_2, local_b0 = param_3,
     bVar5 = `Metasound::Frontend::ReroutePrivate::FRerouteNodeTemplateTransform::Transform'::__l3::
             <lambda_1>::operator()(&local_b8), bVar5)) {
    if ((pFVar8->Interface).Inputs.ArrayNum != 1) {
      local_118 = 0;
      bVar5 = `Metasound::Frontend::ReroutePrivate::FRerouteNodeTemplateTransform::Transform'::__l6
              ::<lambda_2>::operator()(&local_118);
      if (!bVar5) goto LAB_14afc0046;
    }
    if ((pFVar8->Interface).Outputs.ArrayNum != 1) {
      local_117 = 0;
      bVar5 = `Metasound::Frontend::ReroutePrivate::FRerouteNodeTemplateTransform::Transform'::__l9
              ::<lambda_3>::operator()(&local_117);
      if (!bVar5) goto LAB_14afc0046;
    }
    iVar11 = (pFVar8->Interface).Inputs.ArrayNum;
    uVar14 = 0;
    uVar12 = iVar11 - 1;
    uVar13 = uVar14;
    if ((int)uVar12 < iVar11) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FMetaSoundFrontendDocumentBuilder::FindEdges
              (param_3,&local_f8,&pFVar8->ID,
               (FGuid *)((pFVar8->Interface).Inputs.AllocatorInstance.Data +
                        (longlong)((pFVar8->Interface).Inputs.ArrayNum + -1) * 0x20 + 0x10),param_1)
    ;
    if (local_f8.ArrayNum != 0) {
      uVar13 = uVar14;
      if ((int)(local_f8.ArrayNum - 1U) < local_f8.ArrayNum) {
        uVar13 = ~(local_f8.ArrayNum - 1U) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = *(FGuid **)(local_f8.AllocatorInstance.Data + (longlong)(local_f8.ArrayNum + -1) * 8)
      ;
      local_d8 = *pFVar2;
      local_38._0_4_ = pFVar2[3].A;
      local_38._4_4_ = pFVar2[3].B;
      uStack_30._0_4_ = pFVar2[3].C;
      uStack_30._4_4_ = pFVar2[3].D;
      local_c8 = pFVar2[1];
      local_48._0_4_ = pFVar2[2].A;
      local_48._4_4_ = pFVar2[2].B;
      uStack_40._0_4_ = pFVar2[2].C;
      uStack_40._4_4_ = pFVar2[2].D;
    }
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    iVar11 = (pFVar8->Interface).Outputs.ArrayNum;
    uVar13 = iVar11 - 1;
    if ((int)uVar13 < iVar11) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FMetaSoundFrontendDocumentBuilder::FindEdges
              (param_3,&local_e8,&pFVar8->ID,
               (FGuid *)((pFVar8->Interface).Outputs.AllocatorInstance.Data +
                        (longlong)((pFVar8->Interface).Outputs.ArrayNum + -1) * 0x20 + 0x10),param_1
              );
    iVar11 = local_e8.ArrayNum;
    pFVar1 = local_e8.AllocatorInstance.Data + (longlong)iVar11 * 8;
    FVar15.Data = local_e8.AllocatorInstance.Data;
    while( true ) {
      if (local_e8.ArrayNum != iVar11) {
        local_116[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendEdge_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_116);
      }
      if (FVar15.Data == pFVar1) break;
      puVar3 = *(undefined8 **)FVar15.Data;
      if ((puVar3 == (undefined8 *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentEdge",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\NodeTemplates\\MetasoundFrontendNodeTemplateReroute.cpp"
                             ,0x4c,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      local_a8.FromNodeID._0_8_ = *puVar3;
      local_a8.FromNodeID._8_8_ = puVar3[1];
      local_a8.FromVertexID._0_8_ = puVar3[2];
      local_a8.FromVertexID._8_8_ = puVar3[3];
      local_a8.ToNodeID._0_8_ = puVar3[4];
      local_a8.ToNodeID._8_8_ = puVar3[5];
      local_a8.ToVertexID._0_8_ = puVar3[6];
      local_a8.ToVertexID._8_8_ = puVar3[7];
      if (((local_110.Data <= &local_a8) &&
          (&local_a8 < (FMetasoundFrontendEdge *)(local_110.Data + (longlong)local_108._4_4_ * 0x40)
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar7 = (int)local_108;
      if ((int)local_108 == local_108._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x440,&local_110,(int *)((longlong)&local_108 + 4));
      }
      lVar9 = (longlong)iVar7 * 0x40;
      local_108 = CONCAT44(local_108._4_4_,iVar7 + 1);
      FVar15.Data = FVar15.Data + 8;
      *(undefined8 *)&local_110.Data[lVar9].field_0x0 = local_a8.FromNodeID._0_8_;
      *(undefined8 *)(local_110.Data + lVar9 + 8) = local_a8.FromNodeID._8_8_;
      *(undefined8 *)(local_110.Data + lVar9 + 0x10) = local_a8.FromVertexID._0_8_;
      *(undefined8 *)(local_110.Data + lVar9 + 0x10 + 8) = local_a8.FromVertexID._8_8_;
      *(undefined8 *)(local_110.Data + lVar9 + 0x20) = local_a8.ToNodeID._0_8_;
      *(undefined8 *)(local_110.Data + lVar9 + 0x20 + 8) = local_a8.ToNodeID._8_8_;
      *(undefined8 *)(local_110.Data + lVar9 + 0x30) = local_a8.ToVertexID._0_8_;
      *(undefined8 *)(local_110.Data + lVar9 + 0x30 + 8) = local_a8.ToVertexID._8_8_;
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    FMetaSoundFrontendDocumentBuilder::RemoveNode(param_3,&pFVar8->ID,param_1);
    if (((local_d8.B != 0 || local_d8.D != 0) || local_d8.C != 0) || local_d8.A != 0) {
      if (((local_c8.B != 0 || local_c8.D != 0) || local_c8.C != 0) || local_c8.A != 0) {
        iVar11 = (int)local_108;
        uVar10 = (ulonglong)(int)local_108;
        bVar5 = (int)local_108 != 0;
        pFVar16 = (FMetasoundFrontendEdge *)(local_110.Data + uVar10 * 0x40);
        FVar15.Data = local_110.Data;
        while( true ) {
          uVar13 = local_d8.A;
          uVar14 = local_d8.B;
          uVar12 = local_d8.C;
          uVar17 = local_d8.D;
          uVar18 = local_c8.A;
          uVar19 = local_c8.B;
          uVar20 = local_c8.C;
          uVar21 = local_c8.D;
          if ((int)uVar10 != iVar11) {
            `TCheckedPointerIterator<FMetasoundFrontendEdge,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_100);
            uVar13 = local_d8.A;
            uVar14 = local_d8.B;
            uVar12 = local_d8.C;
            uVar17 = local_d8.D;
            uVar18 = local_c8.A;
            uVar19 = local_c8.B;
            uVar20 = local_c8.C;
            uVar21 = local_c8.D;
          }
          if ((FMetasoundFrontendEdge *)FVar15.Data == pFVar16) break;
          (((FMetasoundFrontendEdge *)FVar15.Data)->FromNodeID).A = uVar13;
          (((FMetasoundFrontendEdge *)FVar15.Data)->FromNodeID).B = uVar14;
          (((FMetasoundFrontendEdge *)FVar15.Data)->FromNodeID).C = uVar12;
          (((FMetasoundFrontendEdge *)FVar15.Data)->FromNodeID).D = uVar17;
          (((FMetasoundFrontendEdge *)FVar15.Data)->FromVertexID).A = uVar18;
          (((FMetasoundFrontendEdge *)FVar15.Data)->FromVertexID).B = uVar19;
          (((FMetasoundFrontendEdge *)FVar15.Data)->FromVertexID).C = uVar20;
          (((FMetasoundFrontendEdge *)FVar15.Data)->FromVertexID).D = uVar21;
          FMetaSoundFrontendDocumentBuilder::AddEdge
                    (param_3,(FMetasoundFrontendEdge *)FVar15.Data,param_1);
          uVar10 = local_108 & 0xffffffff;
          FVar15.Data = FVar15.Data + 0x40;
        }
        goto LAB_14afc0049;
      }
    }
  }
LAB_14afc0046:
  bVar5 = false;
LAB_14afc0049:
  if ((FMetasoundFrontendEdge *)local_110.Data != (FMetasoundFrontendEdge *)0x0) {
    FMemory::Free(local_110.Data);
  }
  return bVar5;
}

// operator() @ 150560690

bool __thiscall
`Metasound::Frontend::ReroutePrivate::FRerouteNodeTemplateTransform::Transform'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7734692632114233296>);
  if (bVar4) {
    FMetaSoundFrontendDocumentBuilder::GetDebugName
              (*(FMetaSoundFrontendDocumentBuilder **)((longlong)this + 8),&local_18);
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FGuid::AppendString(*(FGuid **)this,&local_28,Digits);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7734692632114233296>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150560738;
    }
  }
  bVar4 = false;
LAB_150560738:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505607d0

bool __thiscall
`Metasound::Frontend::ReroutePrivate::FRerouteNodeTemplateTransform::Transform'::__l6::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7734692632114233294>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7734692632114233294>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150560810

bool __thiscall
`Metasound::Frontend::ReroutePrivate::FRerouteNodeTemplateTransform::Transform'::__l9::<lambda_3>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7734692632114233289>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7734692632114233289>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

