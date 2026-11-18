// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FClusterBuilder @ 147cc2fc0

FClusterBuilder * __thiscall
UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::FClusterBuilder
          (FClusterBuilder *this,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,int param_3,TBox<double> *param_4,
          int param_5,float param_6,int param_7,bool param_8)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  
  (this->Result).Ptr = (FClusterTree *)0x0;
  (this->BuiltInstanceData).Ptr = (FStaticMeshInstanceData *)0x0;
  this->OriginalNum = param_1->ArrayNum;
  dVar2 = (param_4->Min).field0_0x0._s_0.Y;
  (this->InstBox).Min.field0_0x0._s_0.X = (param_4->Min).field0_0x0._s_0.X;
  (this->InstBox).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_4->Max).field0_0x0._s_0.X;
  (this->InstBox).Min.field0_0x0._s_0.Z = (param_4->Min).field0_0x0._s_0.Z;
  (this->InstBox).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_4->Max).field0_0x0._s_0.Z;
  (this->InstBox).Max.field0_0x0._s_0.Y = (param_4->Max).field0_0x0._s_0.Y;
  (this->InstBox).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = param_4->Pad[0];
  uVar4 = param_4->Pad[1];
  uVar5 = param_4->Pad[2];
  uVar6 = param_4->Pad[3];
  uVar7 = param_4->Pad[4];
  uVar8 = param_4->Pad[5];
  uVar9 = param_4->Pad[6];
  (this->InstBox).IsValid = param_4->IsValid;
  (this->InstBox).Pad[0] = uVar3;
  (this->InstBox).Pad[1] = uVar4;
  (this->InstBox).Pad[2] = uVar5;
  (this->InstBox).Pad[3] = uVar6;
  (this->InstBox).Pad[4] = uVar7;
  (this->InstBox).Pad[5] = uVar8;
  (this->InstBox).Pad[6] = uVar9;
  this->MaxInstancesPerLeaf = param_5;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->InstancingRandomSeed = param_7;
  (this->SortIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortIndex).ArrayNum = 0;
  (this->SortIndex).ArrayMax = 0;
  (this->SortPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortPoints).ArrayNum = 0;
  (this->SortPoints).ArrayMax = 0;
  this->GenerateInstanceScalingRange = param_8;
  this->DensityScaling = param_6;
  (this->Transforms).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = param_1->ArrayNum;
  (this->Transforms).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->CustomDataFloats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomDataFloats).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CustomDataFloats).ArrayNum = param_2->ArrayNum;
  (this->CustomDataFloats).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  this->NumCustomDataFloats = param_3;
  (this->Clusters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Clusters).ArrayNum = 0;
  (this->Clusters).ArrayMax = 0;
  (this->SortPairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortPairs).ArrayNum = 0;
  (this->SortPairs).ArrayMax = 0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// BuildInstanceBuffer @ 147cdd210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::BuildInstanceBuffer
          (FClusterBuilder *this)

{
  TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> *pTVar1;
  int iVar2;
  int iVar3;
  FClusterTree *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FStaticMeshInstanceData *pFVar12;
  FStaticMeshInstanceData *pFVar13;
  FStaticMeshInstanceData *pFVar14;
  uint uVar15;
  uint uVar16;
  longlong local_d8;
  uint local_d0;
  longlong local_c8;
  undefined8 local_b8;
  TVector2<double>_u_0 local_b0;
  TVector2<double>_u_0 local_a0;
  TMatrix<float> local_88;
  
  local_d0 = this->InstancingRandomSeed;
  pFVar12 = ::operator_new(0x50);
  pFVar14 = (FStaticMeshInstanceData *)0x0;
  pFVar13 = pFVar14;
  if (pFVar12 != (FStaticMeshInstanceData *)0x0) {
    pFVar12->InstanceOriginData = (FStaticMeshVertexDataInterface *)0x0;
    pFVar12->InstanceOriginDataPtr = (uchar *)0x0;
    pFVar12->InstanceTransformData = (FStaticMeshVertexDataInterface *)0x0;
    pFVar12->InstanceTransformDataPtr = (uchar *)0x0;
    pFVar12->InstanceLightmapData = (FStaticMeshVertexDataInterface *)0x0;
    pFVar12->InstanceLightmapDataPtr = (uchar *)0x0;
    pFVar12->InstanceCustomData = (FStaticMeshVertexDataInterface *)0x0;
    pFVar12->InstanceCustomDataPtr = (uchar *)0x0;
    pFVar12->NumInstances = 0;
    pFVar12->NumCustomDataFloats = 0;
    pFVar12->bUseHalfFloat = true;
    FStaticMeshInstanceData::AllocateBuffers(pFVar12,0,None);
    pFVar13 = pFVar12;
  }
  pTVar1 = &this->BuiltInstanceData;
  if (pTVar1 == (TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> *)
                &local_b8) {
    if (pFVar13 == (FStaticMeshInstanceData *)0x0) goto LAB_147cdd2be;
    FStaticMeshInstanceData::~FStaticMeshInstanceData(pFVar13);
  }
  else {
    pFVar12 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar13;
    if (pFVar12 == (FStaticMeshInstanceData *)0x0) goto LAB_147cdd2be;
    FStaticMeshInstanceData::~FStaticMeshInstanceData(pFVar12);
    pFVar13 = pFVar12;
  }
  ::operator_delete(pFVar13,0x50);
LAB_147cdd2be:
  pFVar4 = (this->Result).Ptr;
  iVar2 = (pFVar4->SortedInstances).ArrayNum;
  iVar3 = (pFVar4->InstanceReorderTable).ArrayNum;
  if (0 < iVar2) {
    FStaticMeshInstanceData::AllocateInstances
              (pTVar1->Ptr,iVar2,this->NumCustomDataFloats,None,false);
    fVar8 = __real_3f800000;
    local_a0._s_0.X = ___xmm_bff0000000000000bff0000000000000;
    local_a0._s_0.Y = _UNK_15076c718;
    local_b0._s_0.X = ___xmm_bff0000000000000bff0000000000000;
    local_b0._s_0.Y = _UNK_15076c718;
    if (0 < iVar3) {
      local_c8 = 0;
      local_d8 = 0;
      pFVar13 = pFVar14;
      do {
        pFVar4 = (this->Result).Ptr;
        uVar16 = (uint)pFVar13;
        uVar10 = 0;
        if ((int)uVar16 < (pFVar4->InstanceReorderTable).ArrayNum) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar2 = *(int *)((pFVar4->InstanceReorderTable).AllocatorInstance.Data + local_c8 * 4);
        local_d0 = local_d0 * 0xbb38435 + 0x3619636b;
        if (-1 < iVar2) {
          pFVar13 = pTVar1->Ptr;
          uVar10 = 0;
          if ((int)uVar16 < (this->Transforms).ArrayNum) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->Transforms).AllocatorInstance.Data;
          local_88.M[0][2] = (float)*(double *)(pFVar5 + local_d8 + 0x10);
          local_88.M[0][3] = (float)*(double *)(pFVar5 + local_d8 + 0x10 + 8);
          local_88.M[0][0] = (float)*(double *)(pFVar5 + local_d8);
          local_88.M[0][1] = (float)*(double *)(pFVar5 + local_d8 + 8);
          local_88.M[1][2] = (float)*(double *)(pFVar5 + local_d8 + 0x30);
          local_88.M[1][3] = (float)*(double *)(pFVar5 + local_d8 + 0x30 + 8);
          local_88.M[1][0] = (float)*(double *)(pFVar5 + local_d8 + 0x20);
          local_88.M[1][1] = (float)*(double *)(pFVar5 + local_d8 + 0x20 + 8);
          local_88.M[2][0] = (float)*(double *)(pFVar5 + local_d8 + 0x40);
          local_88.M[2][1] = (float)*(double *)(pFVar5 + local_d8 + 0x40 + 8);
          local_88.M[2][2] = (float)*(double *)(pFVar5 + local_d8 + 0x50);
          local_88.M[2][3] = (float)*(double *)(pFVar5 + local_d8 + 0x50 + 8);
          local_88.M[3][0] = (float)*(double *)(pFVar5 + local_d8 + 0x60);
          local_88.M[3][1] = (float)*(double *)(pFVar5 + local_d8 + 0x60 + 8);
          local_88.M[3][2] = (float)*(double *)(pFVar5 + local_d8 + 0x70);
          local_88.M[3][3] = (float)*(double *)(pFVar5 + local_d8 + 0x70 + 8);
          FStaticMeshInstanceData::SetInstance
                    (pFVar13,iVar2,&local_88,(float)(local_d0 >> 9 | 0x3f800000) - fVar8,
                     (TVector2<double> *)&local_a0._s_0,(TVector2<double> *)&local_b0._s_0);
          iVar11 = this->NumCustomDataFloats;
          pFVar13 = pFVar14;
          if (0 < iVar11) {
            do {
              pFVar12 = pTVar1->Ptr;
              iVar7 = (int)pFVar13;
              uVar15 = iVar11 * uVar16 + iVar7;
              uVar10 = 0;
              if ((int)uVar15 < (this->CustomDataFloats).ArrayNum) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FStaticMeshInstanceData::SetInstanceCustomDataInternal
                        (pFVar12,iVar2,iVar7,
                         *(float *)((this->CustomDataFloats).AllocatorInstance.Data +
                                   (longlong)(int)uVar15 * 4));
              iVar11 = this->NumCustomDataFloats;
              pFVar13 = (FStaticMeshInstanceData *)(ulonglong)(iVar7 + 1U);
            } while ((int)(iVar7 + 1U) < iVar11);
          }
        }
        local_c8 = local_c8 + 1;
        local_d8 = local_d8 + 0x80;
        pFVar13 = (FStaticMeshInstanceData *)(ulonglong)(uVar16 + 1);
      } while (local_c8 < iVar3);
    }
  }
  return;
}

// BuildTree @ 147cde380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::BuildTree(FClusterBuilder *this)

{
  FStaticMeshInstanceData *pFVar1;
  undefined1 auVar2 [8];
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  double dVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ForAnyElementType FVar26;
  bool bVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  FClusterTree *pFVar32;
  FClusterTree *pFVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  FScriptContainerElement *pFVar39;
  int *piVar40;
  int *piVar41;
  uint uVar42;
  int *piVar43;
  char cVar44;
  longlong lVar45;
  longlong lVar46;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined4 uVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  double dVar55;
  double dVar56;
  undefined1 in_XMM3 [16];
  float fVar57;
  undefined1 in_XMM4 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined1 auStackY_308 [32];
  ForAnyElementType local_2b0;
  undefined8 local_2a8;
  ForAnyElementType local_2a0;
  undefined8 local_298;
  uint local_290;
  ForAnyElementType local_288;
  undefined8 local_280;
  uint local_278;
  int local_274;
  int local_270 [2];
  ForAnyElementType local_268;
  undefined8 local_260;
  ForAnyElementType local_258;
  undefined8 local_250;
  uint local_248;
  longlong local_240;
  longlong local_238;
  FScriptContainerElement *local_230;
  ForAnyElementType local_228;
  undefined8 local_220;
  ForAnyElementType local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined1 auStack_1f0 [8];
  double local_1e8;
  double dStack_1e0;
  char local_1d8;
  undefined4 local_1d7;
  undefined2 local_1d3;
  undefined1 local_1d1;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [8];
  undefined1 auStack_1a8 [8];
  double local_1a0;
  double dStack_198;
  undefined8 local_190;
  int local_188;
  uint local_184;
  int local_180 [2];
  longlong local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int *local_f0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e8;
  undefined1 local_d8 [24];
  undefined1 auStack_c0 [152];
  double dVar58;
  
  auStack_c0._32_8_ = __security_cookie.value ^ (ulonglong)auStackY_308;
  Init(this);
  pFVar32 = ::operator_new(0x38);
  if (pFVar32 == (FClusterTree *)0x0) {
    pFVar32 = (FClusterTree *)0x0;
  }
  else {
    *(undefined8 *)&pFVar32->OutOcclusionLayerNum = 0;
    (pFVar32->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar32->Nodes).ArrayNum = 0;
    (pFVar32->Nodes).ArrayMax = 0;
    (pFVar32->SortedInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar32->SortedInstances).ArrayNum = 0;
    (pFVar32->SortedInstances).ArrayMax = 0;
    (pFVar32->InstanceReorderTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar32->InstanceReorderTable).ArrayNum = 0;
    (pFVar32->InstanceReorderTable).ArrayMax = 0;
  }
  if (this == (FClusterBuilder *)&stack0xffffffffffffff20) {
    if (pFVar32 == (FClusterTree *)0x0) goto LAB_147cde487;
    pFVar39 = (pFVar32->InstanceReorderTable).AllocatorInstance.Data;
    if (pFVar39 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar39);
    }
    pFVar39 = (pFVar32->SortedInstances).AllocatorInstance.Data;
    if (pFVar39 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar39);
    }
    pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
    pFVar33 = pFVar32;
    if (pFVar39 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar39);
    }
  }
  else {
    pFVar33 = (this->Result).Ptr;
    (this->Result).Ptr = pFVar32;
    if (pFVar33 == (FClusterTree *)0x0) goto LAB_147cde487;
    pFVar39 = (pFVar33->InstanceReorderTable).AllocatorInstance.Data;
    if (pFVar39 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar39);
    }
    pFVar39 = (pFVar33->SortedInstances).AllocatorInstance.Data;
    if (pFVar39 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar39);
    }
    pFVar39 = (pFVar33->Nodes).AllocatorInstance.Data;
    if (pFVar39 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar39);
    }
  }
  ::operator_delete(pFVar33,0x38);
LAB_147cde487:
  iVar30 = this->Num;
  if (iVar30 == 0) {
    local_188 = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (&((this->Result).Ptr)->InstanceReorderTable,&local_188,this->OriginalNum);
  }
  else {
    iVar29 = this->MaxInstancesPerLeaf;
    this->BranchingFactor = iVar29;
    if (((iVar29 < 3) || (iVar28 = this->OcclusionLayerTarget, iVar28 == 0)) ||
       (iVar28 < iVar30 / iVar29)) {
      Split(this,iVar30);
    }
    else {
      this->OcclusionLayerTarget = 0;
      iVar28 = (iVar28 + -1 + iVar30) / iVar28;
      if (iVar28 < 2) {
        iVar28 = 2;
      }
      this->BranchingFactor = iVar28;
      Split(this,iVar30);
      ((this->Result).Ptr)->OutOcclusionLayerNum = (this->Clusters).ArrayNum;
    }
    pFVar32 = (this->Result).Ptr;
    pTVar47 = &pFVar32->SortedInstances;
    if ((pTVar47 == &this->SortIndex) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar27)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar30 = (this->SortIndex).ArrayNum;
    local_f0 = &(this->SortIndex).ArrayNum;
    if (iVar30 != 0) {
      iVar29 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar30,&pTVar47->AllocatorInstance,
                          &(pFVar32->SortedInstances).ArrayNum,&(pFVar32->SortedInstances).ArrayMax)
      ;
      memcpy((pTVar47->AllocatorInstance).Data + (longlong)iVar29 * 4,
             (this->SortIndex).AllocatorInstance.Data,(longlong)iVar30 << 2);
    }
    uVar25 = _UNK_150a9e6b8;
    uVar24 = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
    uVar35 = (this->Clusters).ArrayNum;
    uVar38 = (ulonglong)uVar35;
    pFVar32 = (this->Result).Ptr;
    this->NumRoots = uVar35;
    local_170 = 0x7f7fffff;
    uStack_16c = 0x7f7fffff;
    uStack_168 = 0x7f7fffff;
    uStack_164 = 0xffffffff;
    local_160 = 0xff7fffff;
    uStack_15c = 0xff7fffff;
    uStack_158 = 0xffffffffff7fffff;
    local_150 = 0xffffffffffffffff;
    uStack_138 = 0xff7fffff;
    uStack_134 = 0xff7fffff;
    uStack_148 = uVar24;
    uStack_140 = uVar25;
    if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar38);
    }
    piVar40 = &(pFVar32->Nodes).ArrayMax;
    (pFVar32->Nodes).ArrayNum = 0;
    if (*piVar40 != uVar35) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,4,uVar35,(ForAnyElementType *)pFVar32,0,piVar40);
    }
    if (0 < (int)uVar35) {
      do {
        pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
        if (((pFVar39 <= (FScriptContainerElement *)&local_170) &&
            ((FScriptContainerElement *)&local_170 < pFVar39 + (longlong)*piVar40 * 0x40)) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar27)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar30 = (pFVar32->Nodes).ArrayNum;
        if (iVar30 == *piVar40) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x440,(ForAnyElementType *)pFVar32,piVar40);
        }
        (pFVar32->Nodes).ArrayNum = iVar30 + 1;
        pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
        lVar34 = (longlong)iVar30 * 0x40;
        *(ulonglong *)(pFVar39 + lVar34) = CONCAT44(uStack_16c,local_170);
        *(ulonglong *)(pFVar39 + lVar34 + 8) = CONCAT44(uStack_164,uStack_168);
        *(ulonglong *)(pFVar39 + lVar34 + 0x10) = CONCAT44(uStack_15c,local_160);
        *(undefined8 *)(pFVar39 + lVar34 + 0x10 + 8) = uStack_158;
        *(undefined8 *)(pFVar39 + lVar34 + 0x20) = local_150;
        *(undefined8 *)(pFVar39 + lVar34 + 0x20 + 8) = uStack_148;
        *(undefined8 *)(pFVar39 + lVar34 + 0x30) = uStack_140;
        *(ulonglong *)(pFVar39 + lVar34 + 0x30 + 8) = CONCAT44(uStack_134,uStack_138);
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
    }
    dVar23 = __real_3e45798ee0000000;
    local_290 = 0;
    if (0 < this->NumRoots) {
      local_230 = (FScriptContainerElement *)0x0;
      lVar34 = 0;
      do {
        pFVar39 = local_230;
        uVar35 = local_290;
        pFVar32 = (this->Result).Ptr;
        uVar36 = ~local_290 >> 0x1f;
        uVar42 = 0;
        if ((int)local_290 < (pFVar32->Nodes).ArrayNum) {
          uVar42 = uVar36;
        }
        if ((uVar42 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (pFVar32->Nodes).AllocatorInstance.Data;
        uVar42 = 0;
        if ((int)uVar35 < (this->Clusters).ArrayNum) {
          uVar42 = uVar36;
        }
        if ((uVar42 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)(pFVar5 + lVar34 + 0x20) =
             *(undefined4 *)((this->Clusters).AllocatorInstance.Data + (longlong)pFVar39 * 8);
        uVar42 = 0;
        if ((int)uVar35 < (this->Clusters).ArrayNum) {
          uVar42 = uVar36;
        }
        if ((uVar42 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (this->Clusters).AllocatorInstance.Data;
        uVar42 = 0;
        if ((int)uVar35 < (this->Clusters).ArrayNum) {
          uVar42 = uVar36;
        }
        if ((uVar42 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar38 = (ulonglong)*(int *)(pFVar5 + lVar34 + 0x20);
        local_1c0 = ZEXT816(0);
        iVar30 = *(int *)(pFVar6 + (longlong)pFVar39 * 8) + -1 +
                 *(int *)((this->Clusters).AllocatorInstance.Data + (longlong)pFVar39 * 8 + 4);
        *(int *)(pFVar5 + lVar34 + 0x24) = iVar30;
        local_190 = 0;
        _local_1b0 = ZEXT816(0);
        local_1a0 = 0.0;
        dStack_198 = 0.0;
        if (*(int *)(pFVar5 + lVar34 + 0x20) <= iVar30) {
          lVar46 = uVar38 * 4;
          do {
            pFVar32 = (this->Result).Ptr;
            uVar42 = (uint)uVar38;
            uVar35 = 0;
            if ((int)uVar42 < (pFVar32->SortedInstances).ArrayNum) {
              uVar35 = ~uVar42 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar35 = *(uint *)((pFVar32->SortedInstances).AllocatorInstance.Data + lVar46);
            uVar36 = 0;
            if ((int)uVar35 < (this->Transforms).ArrayNum) {
              uVar36 = ~uVar35 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar39 = (this->Transforms).AllocatorInstance.Data + (longlong)(int)uVar35 * 0x80;
            UE::Math::TBox<double>::TransformBy
                      (&this->InstBox,(TBox<double> *)local_d8,(TMatrix<double> *)pFVar39);
            uVar50 = (undefined4)local_d8._8_8_;
            uVar52 = SUB84(local_d8._8_8_,4);
            if ((char)local_190 == '\0') {
              if (auStack_c0[0x18] != '\0') {
                in_XMM3._8_8_ = auStack_c0._0_8_;
                in_XMM3._0_8_ = local_d8._16_8_;
                in_XMM4._8_8_ = local_d8._8_8_;
                in_XMM4._0_8_ = local_d8._0_8_;
                local_190 = CONCAT71(auStack_c0._25_7_,auStack_c0[0x18]);
                auVar14._4_8_ = auStack_c0._0_8_;
                auVar14._0_4_ = SUB84(local_d8._0_8_,4);
                auVar59._0_8_ = auVar14._0_8_ << 0x20;
                auVar59._8_4_ = uVar50;
                auVar59._12_4_ = uVar52;
                dStack_198 = (double)auStack_c0._16_8_;
                local_1a0 = (double)auStack_c0._8_8_;
                auStack_1a8 = (undefined1  [8])auStack_c0._0_8_;
                local_1b0 = (undefined1  [8])local_d8._16_8_;
                local_1c0._8_8_ = auVar59._8_8_;
                local_1c0._0_8_ = local_d8._0_8_;
              }
            }
            else if (auStack_c0[0x18] != '\0') {
              pFVar1 = (FStaticMeshInstanceData *)local_d8._0_8_;
              if ((double)local_1c0._0_8_ <= (double)local_d8._0_8_) {
                pFVar1 = (FStaticMeshInstanceData *)local_1c0._0_8_;
              }
              if ((double)local_1c0._8_8_ <= (double)local_d8._8_8_) {
                uVar50 = local_1c0._8_4_;
                uVar52 = local_1c0._12_4_;
              }
              auVar2 = (undefined1  [8])local_d8._16_8_;
              if ((double)local_1b0 <= (double)local_d8._16_8_) {
                auVar2 = local_1b0;
              }
              local_1c0._12_4_ = uVar52;
              local_1c0._8_4_ = uVar50;
              local_1c0._0_8_ = pFVar1;
              uVar50 = (undefined4)auStack_c0._0_8_;
              uVar52 = SUB84(auStack_c0._0_8_,4);
              if ((double)auStack_c0._0_8_ <= (double)auStack_1a8) {
                uVar50 = local_1b0._8_4_;
                uVar52 = local_1b0._12_4_;
              }
              dVar58 = (double)auStack_c0._8_8_;
              if ((double)auStack_c0._8_8_ <= local_1a0) {
                dVar58 = local_1a0;
              }
              auStack_1a8._4_4_ = uVar52;
              auStack_1a8._0_4_ = uVar50;
              local_1b0 = auVar2;
              uVar50 = (undefined4)auStack_c0._16_8_;
              uVar52 = SUB84(auStack_c0._16_8_,4);
              if ((double)auStack_c0._16_8_ <= dStack_198) {
                uVar50 = SUB84(dStack_198,0);
                uVar52 = (undefined4)((ulonglong)dStack_198 >> 0x20);
              }
              dStack_198 = (double)CONCAT44(uVar52,uVar50);
              local_1a0 = dVar58;
            }
            if (this->GenerateInstanceScalingRange != false) {
              dVar58 = *(double *)&pFVar39->field_0x0 * *(double *)&pFVar39->field_0x0 +
                       *(double *)(pFVar39 + 8) * *(double *)(pFVar39 + 8) +
                       *(double *)(pFVar39 + 0x10) * *(double *)(pFVar39 + 0x10);
              if (dVar58 <= dVar23) {
                dVar58 = 0.0;
              }
              else {
                auVar9._8_8_ = 0;
                auVar9._0_8_ = dVar58;
                auVar59 = sqrtpd(in_XMM4,auVar9);
                dVar58 = auVar59._0_8_;
              }
              dVar55 = *(double *)(pFVar39 + 0x20) * *(double *)(pFVar39 + 0x20) +
                       *(double *)(pFVar39 + 0x28) * *(double *)(pFVar39 + 0x28) +
                       *(double *)(pFVar39 + 0x30) * *(double *)(pFVar39 + 0x30);
              if (dVar55 <= dVar23) {
                dVar55 = 0.0;
              }
              else {
                auVar10._8_8_ = 0;
                auVar10._0_8_ = dVar55;
                auVar59 = sqrtpd(in_XMM3,auVar10);
                dVar55 = auVar59._0_8_;
              }
              auVar49._0_8_ = *(double *)(pFVar39 + 0x48) * *(double *)(pFVar39 + 0x48);
              auVar49._8_8_ = 0;
              dVar48 = *(double *)(pFVar39 + 0x40) * *(double *)(pFVar39 + 0x40) + auVar49._0_8_ +
                       *(double *)(pFVar39 + 0x50) * *(double *)(pFVar39 + 0x50);
              if (dVar48 <= dVar23) {
                dVar48 = 0.0;
              }
              else {
                auVar11._8_8_ = 0;
                auVar11._0_8_ = dVar48;
                auVar59 = sqrtpd(auVar49,auVar11);
                dVar48 = auVar59._0_8_;
              }
              fVar60 = (float)dVar58;
              fVar57 = (float)dVar55;
              in_XMM4 = ZEXT416((uint)fVar57);
              fVar54 = (float)dVar48;
              in_XMM3 = ZEXT416((uint)fVar54);
              fVar51 = *(float *)(pFVar5 + lVar34 + 0x2c);
              if (fVar57 <= *(float *)(pFVar5 + lVar34 + 0x2c)) {
                fVar51 = fVar57;
              }
              fVar16 = fVar60;
              if (*(float *)(pFVar5 + lVar34 + 0x28) <= fVar60) {
                fVar16 = *(float *)(pFVar5 + lVar34 + 0x28);
              }
              fVar53 = *(float *)(pFVar5 + lVar34 + 0x30);
              if (fVar54 <= *(float *)(pFVar5 + lVar34 + 0x30)) {
                fVar53 = fVar54;
              }
              *(float *)(pFVar5 + lVar34 + 0x28) = fVar16;
              *(float *)(pFVar5 + lVar34 + 0x2c) = fVar51;
              *(float *)(pFVar5 + lVar34 + 0x30) = fVar53;
              fVar51 = *(float *)(pFVar5 + lVar34 + 0x38);
              if (*(float *)(pFVar5 + lVar34 + 0x38) <= fVar57) {
                fVar51 = fVar57;
              }
              if (fVar60 <= *(float *)(pFVar5 + lVar34 + 0x34)) {
                fVar60 = *(float *)(pFVar5 + lVar34 + 0x34);
              }
              fVar57 = *(float *)(pFVar5 + lVar34 + 0x3c);
              if (*(float *)(pFVar5 + lVar34 + 0x3c) <= fVar54) {
                fVar57 = fVar54;
              }
              *(float *)(pFVar5 + lVar34 + 0x34) = fVar60;
              *(float *)(pFVar5 + lVar34 + 0x38) = fVar51;
              *(float *)(pFVar5 + lVar34 + 0x3c) = fVar57;
            }
            uVar38 = (ulonglong)(uVar42 + 1);
            lVar46 = lVar46 + 4;
            pFVar39 = local_230;
            uVar35 = local_290;
          } while ((int)(uVar42 + 1) <= *(int *)(pFVar5 + lVar34 + 0x24));
        }
        local_290 = uVar35 + 1;
        local_230 = pFVar39 + 1;
        *(float *)(pFVar5 + lVar34) = (float)(double)local_1c0._0_8_;
        *(float *)(pFVar5 + lVar34 + 4) = (float)(double)local_1c0._8_8_;
        *(float *)(pFVar5 + lVar34 + 8) = (float)(double)local_1b0;
        in_XMM3 = ZEXT416((uint)(float)local_1a0);
        *(float *)(pFVar5 + lVar34 + 0x10) = (float)(double)auStack_1a8;
        *(float *)(pFVar5 + lVar34 + 0x14) = (float)local_1a0;
        *(float *)(pFVar5 + lVar34 + 0x18) = (float)dStack_198;
        lVar34 = lVar34 + 0x40;
      } while ((int)local_290 < this->NumRoots);
    }
    local_288.Data = (FScriptContainerElement *)0x0;
    local_280 = 0;
    iVar30 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_288,(int *)((longlong)&local_280 + 4));
    local_1d0 = (FScriptContainerElement *)0x0;
    uStack_1c8 = 0;
    local_280 = CONCAT44(local_280._4_4_,iVar30 + 1);
    *(int *)(local_288.Data + (longlong)iVar30 * 4) = this->NumRoots;
    dVar55 = _UNK_150689678;
    dVar58 = ___xmm_3fe00000000000003fe0000000000000;
    dVar23 = __real_3fe0000000000000;
    local_228.Data = (FScriptContainerElement *)0x0;
    local_220 = 0;
    local_2a0.Data = (FScriptContainerElement *)0x0;
    local_298 = 0;
    local_258.Data = (FScriptContainerElement *)0x0;
    local_250 = 0;
    local_218.Data = (FScriptContainerElement *)0x0;
    uStack_210 = 0;
    local_2b0.Data = (FScriptContainerElement *)0x0;
    local_2a8._0_4_ = 0;
    local_2a8._4_4_ = 0;
    local_268.Data = (FScriptContainerElement *)0x0;
    local_260 = 0;
    if (1 < this->NumRoots) {
      local_e8 = &this->SortIndex;
      pFVar39 = (FScriptContainerElement *)&this->NumRoots;
      local_230 = pFVar39;
      do {
        piVar43 = &(this->SortPoints).ArrayNum;
        piVar41 = &(this->SortIndex).ArrayMax;
        piVar40 = &(this->SortPoints).ArrayMax;
        (this->SortIndex).ArrayNum = 0;
        if (*piVar41 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(this->SortIndex).AllocatorInstance,0,piVar41);
        }
        *piVar43 = 0;
        if (*piVar40 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&(this->SortPoints).AllocatorInstance,0,piVar40);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,*(int *)pFVar39,&(this->SortIndex).AllocatorInstance,local_f0,piVar41);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,*(int *)pFVar39,&(this->SortPoints).AllocatorInstance,piVar43,piVar40);
        iVar30 = *(int *)pFVar39;
        uVar35 = 0;
        lVar34 = 0;
        pTVar47 = &this->SortIndex;
        if (0 < iVar30) {
          lVar45 = 0;
          lVar46 = 0;
          do {
            uVar36 = ~uVar35 >> 0x1f;
            uVar42 = 0;
            if ((int)uVar35 < (this->SortIndex).ArrayNum) {
              uVar42 = uVar36;
            }
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(uint *)((this->SortIndex).AllocatorInstance.Data + lVar34 * 4) = uVar35;
            pFVar32 = (this->Result).Ptr;
            uVar42 = 0;
            if ((int)uVar35 < (pFVar32->Nodes).ArrayNum) {
              uVar42 = uVar36;
            }
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
            fVar51 = *(float *)(pFVar39 + lVar46 + 0x10);
            fVar60 = *(float *)(pFVar39 + lVar46);
            uVar3 = *(undefined8 *)(pFVar39 + lVar46 + 0x14);
            uVar4 = *(undefined8 *)(pFVar39 + lVar46 + 4);
            uVar42 = 0;
            if ((int)uVar35 < (this->SortPoints).ArrayNum) {
              uVar42 = uVar36;
            }
            dVar48 = (double)((float)((ulonglong)uVar3 >> 0x20) + (float)((ulonglong)uVar4 >> 0x20))
                     * dVar55;
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar39 = (this->SortPoints).AllocatorInstance.Data;
            uVar35 = uVar35 + 1;
            lVar34 = lVar34 + 1;
            lVar46 = lVar46 + 0x40;
            *(double *)(pFVar39 + lVar45) = (double)(fVar51 + fVar60) * dVar23;
            auVar13._8_4_ = SUB84(dVar48,0);
            auVar13._0_8_ = (double)((float)uVar3 + (float)uVar4) * dVar58;
            auVar13._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
            *(undefined1 (*) [16])(pFVar39 + lVar45 + 8) = auVar13;
            iVar30 = this->NumRoots;
            lVar45 = lVar45 + 0x18;
            pFVar39 = local_230;
            pTVar47 = local_e8;
          } while ((int)uVar35 < iVar30);
        }
        iVar29 = this->InternalNodeBranchingFactor;
        this->BranchingFactor = iVar29;
        if (((iVar29 < 3) || (iVar28 = this->OcclusionLayerTarget, iVar28 == 0)) ||
           (iVar28 < iVar30 / iVar29)) {
          Split(this,iVar30);
        }
        else {
          this->OcclusionLayerTarget = 0;
          iVar28 = (iVar30 + -1 + iVar28) / iVar28;
          if (iVar28 < 2) {
            iVar28 = 2;
          }
          this->BranchingFactor = iVar28;
          Split(this,iVar30);
          ((this->Result).Ptr)->OutOcclusionLayerNum = (this->Clusters).ArrayNum;
        }
        lVar34 = local_220;
        uVar35 = local_220._4_4_;
        local_220 = (ulonglong)local_220._4_4_ << 0x20;
        if ((lVar34 < 0) && (uVar35 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_228,0,(int *)((longlong)&local_220 + 4));
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,*(int *)pFVar39,&local_228,(int *)&local_220,
                   (int *)((longlong)&local_220 + 4));
        uVar35 = 0;
        if (0 < *(int *)pFVar39) {
          lVar34 = 0;
          do {
            uVar42 = 0;
            if ((int)uVar35 < pTVar47->ArrayNum) {
              uVar42 = ~uVar35 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar42 = *(uint *)((pTVar47->AllocatorInstance).Data + lVar34);
            uVar36 = 0;
            if ((int)uVar42 < (int)local_220) {
              uVar36 = ~uVar42 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar34 = lVar34 + 4;
            *(uint *)(local_228.Data + (longlong)(int)uVar42 * 4) = uVar35;
            uVar35 = uVar35 + 1;
          } while ((int)uVar35 < *(int *)pFVar39);
        }
        lVar34 = local_298;
        uVar35 = local_298._4_4_;
        local_298 = (ulonglong)local_298._4_4_ << 0x20;
        if ((lVar34 < 0) && (uVar35 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_2a0,0,(int *)((longlong)&local_298 + 4));
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,this->Num,&local_2a0,(int *)&local_298,(int *)((longlong)&local_298 + 4));
        uVar35 = 0;
        lVar34 = 0;
        uVar42 = 0;
        if (0 < *(int *)pFVar39) {
          local_238 = 0;
          do {
            lVar46 = local_238;
            pFVar32 = (this->Result).Ptr;
            uVar36 = 0;
            if ((int)uVar42 < (this->SortIndex).ArrayNum) {
              uVar36 = ~uVar42 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar36 = *(uint *)((this->SortIndex).AllocatorInstance.Data + lVar46);
            uVar37 = 0;
            if ((int)uVar36 < (pFVar32->Nodes).ArrayNum) {
              uVar37 = ~uVar36 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
            lVar46 = (longlong)(int)uVar36 * 0x40;
            iVar30 = *(int *)(pFVar39 + lVar46 + 0x20);
            if (iVar30 <= *(int *)(pFVar39 + lVar46 + 0x24)) {
              lVar45 = lVar34 * 4;
              do {
                uVar36 = 0;
                if ((int)uVar35 < (int)local_298) {
                  uVar36 = ~uVar35 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar35 = uVar35 + 1;
                lVar34 = lVar34 + 1;
                *(int *)(local_2a0.Data + lVar45) = iVar30;
                iVar30 = iVar30 + 1;
                lVar45 = lVar45 + 4;
              } while (iVar30 <= *(int *)(pFVar39 + lVar46 + 0x24));
            }
            uVar42 = uVar42 + 1;
            local_238 = local_238 + 4;
          } while ((int)uVar42 < *(int *)local_230);
        }
        lVar34 = local_250;
        uVar35 = local_250._4_4_;
        local_250 = (ulonglong)local_250._4_4_ << 0x20;
        if ((lVar34 < 0) && (uVar35 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_258,0,(int *)((longlong)&local_250 + 4));
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,this->Num,&local_258,(int *)&local_250,(int *)((longlong)&local_250 + 4));
        uVar35 = 0;
        if (0 < this->Num) {
          lVar34 = 0;
          do {
            uVar42 = 0;
            if ((int)uVar35 < (int)local_298) {
              uVar42 = ~uVar35 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar42 = *(uint *)(local_2a0.Data + lVar34);
            uVar36 = 0;
            if ((int)uVar42 < (int)local_250) {
              uVar36 = ~uVar42 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar34 = lVar34 + 4;
            *(uint *)(local_258.Data + (longlong)(int)uVar42 * 4) = uVar35;
            uVar35 = uVar35 + 1;
          } while ((int)uVar35 < this->Num);
        }
        pFVar32 = (this->Result).Ptr;
        uVar35 = 0;
        if (0 < (pFVar32->Nodes).ArrayNum) {
          lVar34 = 0;
          do {
            uVar42 = 0;
            if ((int)uVar35 < (pFVar32->Nodes).ArrayNum) {
              uVar42 = ~uVar35 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
            uVar42 = *(uint *)(pFVar39 + lVar34 + 0x20);
            uVar36 = 0;
            if ((int)uVar42 < (int)local_250) {
              uVar36 = ~uVar42 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar36 = *(uint *)(pFVar39 + lVar34 + 0x24);
            *(undefined4 *)(pFVar39 + lVar34 + 0x20) =
                 *(undefined4 *)(local_258.Data + (longlong)(int)uVar42 * 4);
            uVar42 = 0;
            if ((int)uVar36 < (int)local_250) {
              uVar42 = ~uVar36 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar35 = uVar35 + 1;
            *(undefined4 *)(pFVar39 + lVar34 + 0x24) =
                 *(undefined4 *)(local_258.Data + (longlong)(int)uVar36 * 4);
            lVar34 = lVar34 + 0x40;
            pFVar32 = (this->Result).Ptr;
          } while ((int)uVar35 < (pFVar32->Nodes).ArrayNum);
        }
        lVar34 = uStack_210;
        uVar35 = uStack_210._4_4_;
        uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
        if ((lVar34 < 0) && (uVar35 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_218,0,(int *)((longlong)&uStack_210 + 4));
        }
        pFVar32 = (this->Result).Ptr;
        pFVar39 = (pFVar32->SortedInstances).AllocatorInstance.Data;
        lVar34._0_4_ = (pFVar32->SortedInstances).ArrayNum;
        lVar34._4_4_ = (pFVar32->SortedInstances).ArrayMax;
        (pFVar32->SortedInstances).AllocatorInstance.Data = local_218.Data;
        (pFVar32->SortedInstances).ArrayNum = (int)uStack_210;
        (pFVar32->SortedInstances).ArrayMax = uStack_210._4_4_;
        pFVar32 = (this->Result).Ptr;
        local_218.Data = pFVar39;
        uStack_210 = lVar34;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,this->Num,&(pFVar32->SortedInstances).AllocatorInstance,
                   &(pFVar32->SortedInstances).ArrayNum,&(pFVar32->SortedInstances).ArrayMax);
        uVar35 = 0;
        if (0 < this->Num) {
          lVar34 = 0;
          do {
            uVar42 = 0;
            if ((int)uVar35 < (int)local_298) {
              uVar42 = ~uVar35 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar42 = *(uint *)(local_2a0.Data + lVar34);
            uVar36 = 0;
            if ((int)uVar42 < (int)uStack_210) {
              uVar36 = ~uVar42 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar50 = *(undefined4 *)(local_218.Data + (longlong)(int)uVar42 * 4);
            pFVar32 = (this->Result).Ptr;
            uVar42 = 0;
            if ((int)uVar35 < (pFVar32->SortedInstances).ArrayNum) {
              uVar42 = ~uVar35 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar35 = uVar35 + 1;
            *(undefined4 *)((pFVar32->SortedInstances).AllocatorInstance.Data + lVar34) = uVar50;
            lVar34 = lVar34 + 4;
          } while ((int)uVar35 < this->Num);
        }
        lVar34 = local_298;
        uVar35 = local_298._4_4_;
        local_298 = (ulonglong)local_298._4_4_ << 0x20;
        if ((lVar34 < 0) && (uVar35 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_2a0,0,(int *)((longlong)&local_298 + 4));
        }
        uVar35 = (((this->Result).Ptr)->Nodes).ArrayNum + (this->Clusters).ArrayNum;
        local_248 = uVar35;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar35,&local_2a0,(int *)&local_298,(int *)((longlong)&local_298 + 4));
        uVar42 = local_2a8._4_4_;
        local_2a8 = (ulonglong)local_2a8._4_4_ << 0x20;
        uVar36 = 0;
        if (((int)uVar42 < 0) && (uVar36 = 0, uVar42 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_2b0,0,(int *)((longlong)&local_2a8 + 4));
          uVar42 = local_2a8._4_4_;
          uVar36 = (uint)local_2a8;
        }
        local_274 = (this->Clusters).ArrayNum;
        if ((local_2b0.Data <= (FScriptContainerElement *)&local_274) &&
           ((FScriptContainerElement *)&local_274 < local_2b0.Data + (longlong)(int)uVar42 * 4)) {
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar27) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar42 = local_2a8._4_4_;
          uVar36 = (uint)local_2a8;
        }
        if (uVar36 == uVar42) {
          uVar36 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_2b0,(int *)((longlong)&local_2a8 + 4));
        }
        uVar42 = 0;
        lVar34 = 0;
        *(int *)(local_2b0.Data + (longlong)(int)uVar36 * 4) = local_274;
        local_2a8._0_4_ = uVar36 + 1;
        if (0 < (int)local_280 + -1) {
          do {
            uVar36 = 0;
            if ((int)uVar42 < (int)(uint)local_2a8) {
              uVar36 = ~uVar42 >> 0x1f;
            }
            iVar30 = (int)local_280;
            if (uVar36 == 0) {
              bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar27) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar30 = (int)local_280;
            }
            FVar26.Data = local_2b0.Data;
            uVar36 = 0;
            if ((int)uVar42 < iVar30) {
              uVar36 = ~uVar42 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_270[0] = *(int *)(local_288.Data + lVar34 * 4) +
                           *(int *)(FVar26.Data + lVar34 * 4);
            if (((local_2b0.Data <= (FScriptContainerElement *)local_270) &&
                ((FScriptContainerElement *)local_270 <
                 local_2b0.Data + (longlong)(int)local_2a8._4_4_ * 4)) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((uint)local_2a8 == local_2a8._4_4_) {
              local_2a8._0_4_ =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_2b0,(int *)((longlong)&local_2a8 + 4));
            }
            lVar46 = (longlong)(int)(uint)local_2a8;
            uVar42 = uVar42 + 1;
            lVar34 = lVar34 + 1;
            local_2a8._0_4_ = (uint)local_2a8 + 1;
            *(int *)(local_2b0.Data + lVar46 * 4) = local_270[0];
          } while ((int)uVar42 < (int)local_280 + -1);
        }
        local_278 = 0;
        if (0 < this->NumRoots) {
          local_240 = 0;
          do {
            lVar34 = local_240;
            uVar42 = local_278;
            pFVar32 = (this->Result).Ptr;
            uVar36 = ~local_278;
            uVar35 = 0;
            if ((int)local_278 < (this->SortIndex).ArrayNum) {
              uVar35 = uVar36 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar35 = *(uint *)((this->SortIndex).AllocatorInstance.Data + lVar34);
            uVar37 = 0;
            if ((int)uVar35 < (pFVar32->Nodes).ArrayNum) {
              uVar37 = ~uVar35 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
            uVar37 = 0;
            if ((int)uVar42 < (this->SortIndex).ArrayNum) {
              uVar37 = uVar36 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar50 = *(undefined4 *)((this->SortIndex).AllocatorInstance.Data + lVar34);
            if (((int)(uint)local_2a8 < 1) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar36 = *(uint *)local_2b0.Data;
            *(uint *)local_2b0.Data = uVar36 + 1;
            uVar37 = 0;
            if ((int)uVar36 < (int)local_298) {
              uVar37 = ~uVar36 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_290 = 1;
            local_238 = 1;
            *(undefined4 *)(local_2a0.Data + (longlong)(int)uVar36 * 4) = uVar50;
            uVar36 = *(uint *)(pFVar39 + (longlong)(int)uVar35 * 0x40 + 0x1c);
            uVar37 = *(uint *)(pFVar39 + (longlong)(int)uVar35 * 0x40 + 0xc);
            uVar35 = local_248;
            while (local_248 = uVar35, -1 < (int)uVar36) {
              lVar34 = (longlong)(int)uVar37;
              uVar35 = 0x7fffffff;
              uVar38 = (ulonglong)uVar36;
              uVar36 = 0xffffffff;
              if (lVar34 <= (longlong)uVar38) {
                lVar46 = lVar34 << 6;
                local_184 = ~local_290 >> 0x1f;
                local_178 = (uVar38 - lVar34) + 1;
                do {
                  lVar34 = local_238;
                  uVar42 = 0;
                  if ((int)local_290 < (int)(uint)local_2a8) {
                    uVar42 = local_184;
                  }
                  if ((uVar42 == 0) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar27)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  uVar42 = *(uint *)(local_2b0.Data + lVar34 * 4);
                  *(uint *)(local_2b0.Data + lVar34 * 4) = uVar42 + 1;
                  uVar31 = 0;
                  if ((int)uVar42 < (int)local_298) {
                    uVar31 = ~uVar42 >> 0x1f;
                  }
                  if ((uVar31 == 0) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar27)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(uint *)(local_2a0.Data + (longlong)(int)uVar42 * 4) = uVar37;
                  pFVar32 = (this->Result).Ptr;
                  uVar42 = 0;
                  if ((int)uVar37 < (pFVar32->Nodes).ArrayNum) {
                    uVar42 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar42 == 0) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar27)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pFVar33 = (this->Result).Ptr;
                  uVar42 = *(uint *)((pFVar32->Nodes).AllocatorInstance.Data + lVar46 + 0xc);
                  uVar31 = 0;
                  if ((int)uVar37 < (pFVar33->Nodes).ArrayNum) {
                    uVar31 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar31 == 0) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar27)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  uVar31 = *(uint *)((pFVar33->Nodes).AllocatorInstance.Data + lVar46 + 0x1c);
                  if ((-1 < (int)uVar42) && ((int)uVar42 < (int)uVar35)) {
                    uVar35 = uVar42;
                  }
                  if ((-1 < (int)uVar31) && ((int)uVar36 < (int)uVar31)) {
                    uVar36 = uVar31;
                  }
                  uVar37 = uVar37 + 1;
                  lVar46 = lVar46 + 0x40;
                  local_178 = local_178 + -1;
                } while (local_178 != 0);
              }
              local_290 = local_290 + 1;
              local_238 = local_238 + 1;
              uVar37 = uVar35;
              uVar42 = local_278;
              uVar35 = local_248;
              lVar34 = local_240;
            }
            local_278 = uVar42 + 1;
            local_240 = lVar34 + 4;
          } while ((int)local_278 < this->NumRoots);
        }
        lVar34 = local_260;
        uVar42 = local_260._4_4_;
        local_260 = (ulonglong)local_260._4_4_ << 0x20;
        if ((lVar34 < 0) && (uVar42 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_268,0,(int *)((longlong)&local_260 + 4));
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar35,&local_268,(int *)&local_260,(int *)((longlong)&local_260 + 4));
        iVar30 = (this->Clusters).ArrayNum;
        uVar38 = (ulonglong)iVar30;
        if (iVar30 < (int)uVar35) {
          lVar34 = uVar38 * 4;
          do {
            uVar36 = (uint)uVar38;
            uVar42 = 0;
            if ((int)uVar36 < (int)local_298) {
              uVar42 = ~uVar36 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar42 = *(uint *)(local_2a0.Data + lVar34);
            uVar37 = 0;
            if ((int)uVar42 < (int)local_260) {
              uVar37 = ~uVar42 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar34 = lVar34 + 4;
            *(uint *)(local_268.Data + (longlong)(int)uVar42 * 4) = uVar36;
            uVar38 = (ulonglong)(uVar36 + 1);
          } while ((int)(uVar36 + 1) < (int)uVar35);
        }
        pFVar32 = (this->Result).Ptr;
        uVar42 = 0;
        if (0 < (pFVar32->Nodes).ArrayNum) {
          lVar34 = 0;
          do {
            uVar36 = 0;
            if ((int)uVar42 < (pFVar32->Nodes).ArrayNum) {
              uVar36 = ~uVar42 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
            uVar36 = *(uint *)(pFVar39 + lVar34 + 0xc);
            if (-1 < (int)uVar36) {
              uVar37 = 0;
              if ((int)uVar36 < (int)local_260) {
                uVar37 = ~uVar36 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar37 = *(uint *)(pFVar39 + lVar34 + 0x1c);
              *(undefined4 *)(pFVar39 + lVar34 + 0xc) =
                   *(undefined4 *)(local_268.Data + (longlong)(int)uVar36 * 4);
              uVar36 = 0;
              if ((int)uVar37 < (int)local_260) {
                uVar36 = ~uVar37 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(undefined4 *)(pFVar39 + lVar34 + 0x1c) =
                   *(undefined4 *)(local_268.Data + (longlong)(int)uVar37 * 4);
            }
            uVar42 = uVar42 + 1;
            lVar34 = lVar34 + 0x40;
            pFVar32 = (this->Result).Ptr;
          } while ((int)uVar42 < (pFVar32->Nodes).ArrayNum);
        }
        pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
        uVar3._0_4_ = (pFVar32->Nodes).ArrayNum;
        uVar3._4_4_ = (pFVar32->Nodes).ArrayMax;
        *(undefined4 *)&(pFVar32->Nodes).AllocatorInstance.Data = (undefined4)local_1d0;
        *(undefined4 *)((longlong)&(pFVar32->Nodes).AllocatorInstance.Data + 4) = local_1d0._4_4_;
        (pFVar32->Nodes).ArrayNum = (int)uStack_1c8;
        (pFVar32->Nodes).ArrayMax = uStack_1c8._4_4_;
        local_1d0 = pFVar39;
        uStack_1c8 = uVar3;
        if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
        }
        pFVar32 = (this->Result).Ptr;
        piVar40 = &(pFVar32->Nodes).ArrayMax;
        (pFVar32->Nodes).ArrayNum = 0;
        if (*piVar40 != uVar35) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,4,uVar35,(ForAnyElementType *)pFVar32,0,piVar40);
        }
        iVar30 = 0;
        if (0 < (this->Clusters).ArrayNum) {
          do {
            pFVar32 = (this->Result).Ptr;
            local_130 = 0x7f7fffff;
            uStack_12c = 0x7f7fffff;
            uStack_128 = 0x7f7fffff;
            uStack_124 = 0xffffffff;
            local_120 = 0xff7fffff;
            uStack_11c = 0xff7fffff;
            uStack_118 = 0xffffffffff7fffff;
            local_110 = 0xffffffffffffffff;
            uStack_108 = uVar24;
            uStack_100 = uVar25;
            uStack_f8 = 0xff7fffff;
            uStack_f4 = 0xff7fffff;
            pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
            if (((pFVar39 <= (FScriptContainerElement *)&local_130) &&
                ((FScriptContainerElement *)&local_130 <
                 pFVar39 + (longlong)(pFVar32->Nodes).ArrayMax * 0x40)) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar29 = (pFVar32->Nodes).ArrayNum;
            piVar40 = &(pFVar32->Nodes).ArrayMax;
            if (iVar29 == *piVar40) {
              iVar29 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x440,(ForAnyElementType *)pFVar32,piVar40);
            }
            iVar30 = iVar30 + 1;
            (pFVar32->Nodes).ArrayNum = iVar29 + 1;
            pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
            lVar34 = (longlong)iVar29 * 0x40;
            *(ulonglong *)(pFVar39 + lVar34) = CONCAT44(uStack_12c,local_130);
            *(ulonglong *)(pFVar39 + lVar34 + 8) = CONCAT44(uStack_124,uStack_128);
            *(ulonglong *)(pFVar39 + lVar34 + 0x10) = CONCAT44(uStack_11c,local_120);
            *(undefined8 *)(pFVar39 + lVar34 + 0x10 + 8) = uStack_118;
            *(undefined8 *)(pFVar39 + lVar34 + 0x20) = local_110;
            *(undefined8 *)(pFVar39 + lVar34 + 0x20 + 8) = uStack_108;
            pFVar39 = pFVar39 + lVar34 + 0x30;
            *(undefined4 *)pFVar39 = (undefined4)uStack_100;
            *(undefined4 *)(pFVar39 + 4) = uStack_100._4_4_;
            *(undefined4 *)(pFVar39 + 8) = uStack_f8;
            *(undefined4 *)(pFVar39 + 0xc) = uStack_f4;
          } while (iVar30 < (this->Clusters).ArrayNum);
        }
        pFVar32 = (this->Result).Ptr;
        iVar30 = (int)uStack_1c8;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,4,(int)uStack_1c8,(ForAnyElementType *)pFVar32,&(pFVar32->Nodes).ArrayNum,
                   &(pFVar32->Nodes).ArrayMax);
        uVar35 = 0;
        if (0 < iVar30) {
          lVar34 = 0;
          pFVar39 = local_1d0;
          do {
            uVar42 = 0;
            if ((int)uVar35 < iVar30) {
              uVar42 = ~uVar35 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar3 = *(undefined8 *)pFVar39;
            uVar4 = *(undefined8 *)(pFVar39 + 8);
            pFVar32 = (this->Result).Ptr;
            uVar17 = *(undefined8 *)(pFVar39 + 0x10);
            uVar18 = *(undefined8 *)(pFVar39 + 0x18);
            uVar19 = *(undefined8 *)(pFVar39 + 0x20);
            uVar20 = *(undefined8 *)(pFVar39 + 0x28);
            uVar42 = 0;
            if ((int)uVar35 < (int)local_260) {
              uVar42 = ~uVar35 >> 0x1f;
            }
            uVar21 = *(undefined8 *)(pFVar39 + 0x30);
            uVar22 = *(undefined8 *)(pFVar39 + 0x38);
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar42 = *(uint *)(local_268.Data + lVar34);
            uVar36 = 0;
            if ((int)uVar42 < (pFVar32->Nodes).ArrayNum) {
              uVar36 = ~uVar42 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar5 = (pFVar32->Nodes).AllocatorInstance.Data;
            lVar46 = (longlong)(int)uVar42 * 0x40;
            uVar35 = uVar35 + 1;
            pFVar39 = pFVar39 + 0x40;
            lVar34 = lVar34 + 4;
            *(undefined8 *)(pFVar5 + lVar46) = uVar3;
            *(undefined8 *)(pFVar5 + lVar46 + 8) = uVar4;
            *(undefined8 *)(pFVar5 + lVar46 + 0x10) = uVar17;
            *(undefined8 *)(pFVar5 + lVar46 + 0x10 + 8) = uVar18;
            *(undefined8 *)(pFVar5 + lVar46 + 0x20) = uVar19;
            *(undefined8 *)(pFVar5 + lVar46 + 0x20 + 8) = uVar20;
            *(undefined8 *)(pFVar5 + lVar46 + 0x30) = uVar21;
            *(undefined8 *)(pFVar5 + lVar46 + 0x30 + 8) = uVar22;
          } while ((int)uVar35 < iVar30);
        }
        uVar35 = (this->Clusters).ArrayNum;
        local_278 = 0;
        local_240 = 0;
        if (0 < (int)uVar35) {
          lVar34 = 0;
          uVar42 = uVar35;
          do {
            lVar46 = local_240;
            uVar35 = local_278;
            pFVar32 = (this->Result).Ptr;
            uVar37 = ~local_278;
            uVar36 = 0;
            if ((int)local_278 < (pFVar32->Nodes).ArrayNum) {
              uVar36 = uVar37 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
            *(uint *)(pFVar39 + lVar34 + 0xc) = uVar42;
            uVar36 = 0;
            if ((int)uVar35 < (this->Clusters).ArrayNum) {
              uVar36 = uVar37 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar36 = *(uint *)(pFVar39 + lVar34 + 0xc);
            local_248 = uVar42 + *(int *)((this->Clusters).AllocatorInstance.Data + lVar46 * 8 + 4);
            *(uint *)(pFVar39 + lVar34 + 0x1c) = local_248 - 1;
            pFVar32 = (this->Result).Ptr;
            uVar42 = 0;
            if ((int)uVar36 < (pFVar32->Nodes).ArrayNum) {
              uVar42 = ~uVar36 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar42 = *(uint *)(pFVar39 + lVar34 + 0x1c);
            *(undefined4 *)(pFVar39 + lVar34 + 0x20) =
                 *(undefined4 *)
                  ((pFVar32->Nodes).AllocatorInstance.Data + (longlong)(int)uVar36 * 0x40 + 0x20);
            pFVar32 = (this->Result).Ptr;
            uVar36 = 0;
            if ((int)uVar42 < (pFVar32->Nodes).ArrayNum) {
              uVar36 = ~uVar42 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar38 = (ulonglong)*(int *)(pFVar39 + lVar34 + 0xc);
            cVar44 = '\0';
            local_1d8 = '\0';
            local_208 = ZEXT816(0);
            local_1f8 = 0.0;
            *(undefined4 *)(pFVar39 + lVar34 + 0x24) =
                 *(undefined4 *)
                  ((pFVar32->Nodes).AllocatorInstance.Data + (longlong)(int)uVar42 * 0x40 + 0x24);
            _auStack_1f0 = ZEXT816(0);
            auVar59 = _auStack_1f0;
            dStack_1e0 = 0.0;
            local_1d7 = 0;
            local_1d3 = 0;
            local_1d1 = 0;
            if (*(int *)(pFVar39 + lVar34 + 0xc) <= *(int *)(pFVar39 + lVar34 + 0x1c)) {
              local_1e8 = 0.0;
              auStack_1f0 = (undefined1  [8])0x0;
              lVar46 = uVar38 << 6;
              dVar48 = local_1e8;
              auVar2 = auStack_1f0;
              _auStack_1f0 = auVar59;
              do {
                pFVar32 = (this->Result).Ptr;
                uVar42 = (uint)uVar38;
                uVar35 = 0;
                if ((int)uVar42 < (pFVar32->Nodes).ArrayNum) {
                  uVar35 = ~uVar42 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar5 = (pFVar32->Nodes).AllocatorInstance.Data;
                dVar8 = (double)*(float *)(pFVar5 + lVar46 + 8);
                dVar12 = (double)*(float *)(pFVar5 + lVar46);
                dVar56 = (double)*(float *)(pFVar5 + lVar46 + 4);
                dVar15 = dVar8;
                if (cVar44 == '\0') {
                  cVar44 = '\x01';
                  local_1d8 = '\x01';
                  local_208._8_8_ = dVar56;
                  auVar2 = (undefined1  [8])dVar12;
                  dVar48 = dVar56;
                  local_208._0_8_ = dVar12;
                }
                else {
                  if ((double)auVar2 <= dVar12) {
                    auVar2 = (undefined1  [8])dVar12;
                  }
                  if (dVar12 <= (double)local_208._0_8_) {
                    local_208._0_8_ = dVar12;
                  }
                  if (local_1f8 <= dVar8) {
                    dVar15 = local_1f8;
                  }
                  if (dVar8 <= dStack_1e0) {
                    dVar8 = dStack_1e0;
                  }
                  if (dVar56 <= (double)local_208._8_8_) {
                    local_208._8_8_ = dVar56;
                  }
                  if (dVar48 <= dVar56) {
                    dVar48 = dVar56;
                  }
                }
                dVar12 = (double)*(float *)(pFVar5 + lVar46 + 0x10);
                dVar56 = (double)*(float *)(pFVar5 + lVar46 + 0x14);
                local_1f8 = (double)*(float *)(pFVar5 + lVar46 + 0x18);
                if (cVar44 == '\0') {
                  cVar44 = '\x01';
                  local_1d8 = '\x01';
                  local_208._8_8_ = dVar56;
                  local_208._0_8_ = dVar12;
                  unique0x100009ba = SUB84(dVar56,0);
                  auStack_1f0 = (undefined1  [8])dVar12;
                  unique0x100009be = (int)((ulonglong)dVar56 >> 0x20);
                  dStack_1e0 = local_1f8;
                }
                else {
                  if (dVar12 <= (double)local_208._0_8_) {
                    local_208._0_8_ = dVar12;
                  }
                  if (dVar56 <= (double)local_208._8_8_) {
                    local_208._8_8_ = dVar56;
                  }
                  if (local_1f8 <= dVar15) {
                    dVar15 = local_1f8;
                  }
                  if ((double)auVar2 <= dVar12) {
                    auVar2 = (undefined1  [8])dVar12;
                  }
                  if (dVar48 <= dVar56) {
                    dVar48 = dVar56;
                  }
                  dVar56 = dVar48;
                  dStack_1e0 = dVar8;
                  if (dVar8 <= local_1f8) {
                    dStack_1e0 = local_1f8;
                  }
                  local_1e8 = dVar56;
                  auStack_1f0 = auVar2;
                  dVar12 = (double)auVar2;
                  local_1f8 = dVar15;
                }
                dVar48 = dVar56;
                auVar2 = (undefined1  [8])dVar12;
                if (this->GenerateInstanceScalingRange != false) {
                  fVar51 = *(float *)(pFVar5 + lVar46 + 0x28);
                  if (*(float *)(pFVar39 + lVar34 + 0x28) <= *(float *)(pFVar5 + lVar46 + 0x28)) {
                    fVar51 = *(float *)(pFVar39 + lVar34 + 0x28);
                  }
                  fVar60 = *(float *)(pFVar5 + lVar46 + 0x2c);
                  if (*(float *)(pFVar39 + lVar34 + 0x2c) <= *(float *)(pFVar5 + lVar46 + 0x2c)) {
                    fVar60 = *(float *)(pFVar39 + lVar34 + 0x2c);
                  }
                  fVar54 = *(float *)(pFVar5 + lVar46 + 0x30);
                  if (*(float *)(pFVar39 + lVar34 + 0x30) <= *(float *)(pFVar5 + lVar46 + 0x30)) {
                    fVar54 = *(float *)(pFVar39 + lVar34 + 0x30);
                  }
                  *(float *)(pFVar39 + lVar34 + 0x28) = fVar51;
                  *(float *)(pFVar39 + lVar34 + 0x2c) = fVar60;
                  *(float *)(pFVar39 + lVar34 + 0x30) = fVar54;
                  fVar51 = *(float *)(pFVar5 + lVar46 + 0x34);
                  if (*(float *)(pFVar5 + lVar46 + 0x34) <= *(float *)(pFVar39 + lVar34 + 0x34)) {
                    fVar51 = *(float *)(pFVar39 + lVar34 + 0x34);
                  }
                  fVar60 = *(float *)(pFVar5 + lVar46 + 0x38);
                  if (*(float *)(pFVar5 + lVar46 + 0x38) <= *(float *)(pFVar39 + lVar34 + 0x38)) {
                    fVar60 = *(float *)(pFVar39 + lVar34 + 0x38);
                  }
                  fVar54 = *(float *)(pFVar5 + lVar46 + 0x3c);
                  if (*(float *)(pFVar5 + lVar46 + 0x3c) <= *(float *)(pFVar39 + lVar34 + 0x3c)) {
                    fVar54 = *(float *)(pFVar39 + lVar34 + 0x3c);
                  }
                  *(float *)(pFVar39 + lVar34 + 0x34) = fVar51;
                  *(float *)(pFVar39 + lVar34 + 0x38) = fVar60;
                  *(float *)(pFVar39 + lVar34 + 0x3c) = fVar54;
                  cVar44 = local_1d8;
                  dVar48 = local_1e8;
                  auVar2 = auStack_1f0;
                }
                uVar38 = (ulonglong)(uVar42 + 1);
                lVar46 = lVar46 + 0x40;
                uVar35 = local_278;
              } while ((int)(uVar42 + 1) <= *(int *)(pFVar39 + lVar34 + 0x1c));
            }
            local_278 = uVar35 + 1;
            local_240 = local_240 + 1;
            *(float *)(pFVar39 + lVar34) = (float)(double)local_208._0_8_;
            *(float *)(pFVar39 + lVar34 + 4) = (float)(double)local_208._8_8_;
            *(float *)(pFVar39 + lVar34 + 8) = (float)local_1f8;
            *(float *)(pFVar39 + lVar34 + 0x10) = (float)(double)auStack_1f0;
            *(float *)(pFVar39 + lVar34 + 0x14) = (float)local_1e8;
            *(float *)(pFVar39 + lVar34 + 0x18) = (float)dStack_1e0;
            lVar34 = lVar34 + 0x40;
            uVar35 = (this->Clusters).ArrayNum;
            uVar42 = local_248;
          } while ((int)local_278 < (int)uVar35);
        }
        pFVar39 = local_230;
        *(uint *)local_230 = uVar35;
        if (((local_288.Data <= local_230) &&
            (local_230 < local_288.Data + (longlong)local_280._4_4_ * 4)) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar27)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar30 = (int)local_280;
        if ((int)local_280 == local_280._4_4_) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_288,(int *)((longlong)&local_280 + 4));
        }
        local_280 = CONCAT44(local_280._4_4_,iVar30 + 1);
        memmove(local_288.Data + 4,local_288.Data,(longlong)iVar30 << 2);
        *(int *)local_288.Data = *(int *)pFVar39;
      } while (1 < *(int *)pFVar39);
    }
    local_180[0] = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (&((this->Result).Ptr)->InstanceReorderTable,local_180,this->OriginalNum);
    uVar35 = 0;
    if (0 < this->Num) {
      lVar34 = 0;
      do {
        pFVar32 = (this->Result).Ptr;
        uVar42 = 0;
        if ((int)uVar35 < (pFVar32->SortedInstances).ArrayNum) {
          uVar42 = ~uVar35 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar42 = *(uint *)((pFVar32->SortedInstances).AllocatorInstance.Data + lVar34);
        uVar36 = 0;
        if ((int)uVar42 < (pFVar32->InstanceReorderTable).ArrayNum) {
          uVar36 = ~uVar42 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar34 = lVar34 + 4;
        *(uint *)((pFVar32->InstanceReorderTable).AllocatorInstance.Data + (longlong)(int)uVar42 * 4
                 ) = uVar35;
        uVar35 = uVar35 + 1;
      } while ((int)uVar35 < this->Num);
    }
    uVar50 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    uVar24 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    if (this->GenerateInstanceScalingRange == false) {
      pFVar32 = (this->Result).Ptr;
      if (((pFVar32->Nodes).ArrayNum < 1) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
      *(undefined8 *)(pFVar39 + 0x28) = uVar24;
      *(undefined4 *)(pFVar39 + 0x30) = uVar50;
      uVar50 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      uVar24 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      pFVar32 = (this->Result).Ptr;
      if (((pFVar32->Nodes).ArrayNum < 1) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar39 = (pFVar32->Nodes).AllocatorInstance.Data;
      *(undefined8 *)(pFVar39 + 0x34) = uVar24;
      *(undefined4 *)(pFVar39 + 0x3c) = uVar50;
    }
    if (local_1d0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0);
    }
    if (local_268.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data);
    }
    if (local_2b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data);
    }
    if (local_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data);
    }
    if (local_258.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data);
    }
    if (local_2a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data);
    }
    if (local_228.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data);
    }
    if (local_288.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data);
    }
  }
  return;
}

// BuildTreeAndBuffer @ 147ce1240

void __thiscall
UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::BuildTreeAndBuffer
          (FClusterBuilder *this)

{
  BuildTree(this);
  BuildInstanceBuffer(this);
  return;
}

// BuildTreeAndBufferAsync @ 147ce1270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::BuildTreeAndBufferAsync
          (FClusterBuilder *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  BuildTree(this);
  BuildInstanceBuffer(this);
  return;
}

// Init @ 147d15a00

void __thiscall
UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::Init(FClusterBuilder *this)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint local_res8;
  uint local_78 [20];
  
  piVar1 = &(this->SortIndex).ArrayMax;
  (this->SortIndex).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SortIndex).AllocatorInstance,0,piVar1);
  }
  uVar17 = this->OriginalNum;
  pTVar2 = &this->SortPoints;
  iVar12 = (this->SortPoints).ArrayNum;
  piVar3 = &(this->SortPoints).ArrayNum;
  if (iVar12 < (int)uVar17) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar17 - iVar12,&pTVar2->AllocatorInstance,piVar3,&(this->SortPoints).ArrayMax
              );
  }
  else {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if ((int)uVar17 < iVar12) {
      uVar16 = iVar12 - uVar17;
      if (((int)(uVar16 | uVar17) < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar16 != 0) {
        pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x18;
        iVar12 = (*piVar3 - uVar17) - uVar16;
        if (iVar12 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar16 * 0x18,(longlong)iVar12 * 0x18);
        }
        *piVar3 = *piVar3 - uVar16;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&pTVar2->AllocatorInstance,*piVar3,&(this->SortPoints).ArrayMax);
      }
    }
  }
  local_res8 = this->InstancingRandomSeed;
  uVar17 = (uint)((float)this->OriginalNum * this->DensityScaling);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  (this->SortIndex).ArrayNum = 0;
  if (*piVar1 != uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&(this->SortIndex).AllocatorInstance,0,piVar1);
  }
  fVar9 = __real_3f800000;
  local_78[0] = 0;
  if (0 < this->OriginalNum) {
    do {
      uVar17 = local_78[0];
      uVar16 = 0;
      if ((int)local_78[0] < (this->Transforms).ArrayNum) {
        uVar16 = ~local_78[0] >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar16 = local_78[0];
      pFVar7 = (this->Transforms).AllocatorInstance.Data;
      lVar15 = (longlong)(int)uVar17 * 0x80;
      uVar4 = *(undefined8 *)(pFVar7 + lVar15 + 0x60);
      uVar5 = *(undefined8 *)(pFVar7 + lVar15 + 0x68);
      uVar6 = *(undefined8 *)(pFVar7 + lVar15 + 0x70);
      uVar17 = 0;
      if ((int)local_78[0] < *piVar3) {
        uVar17 = ~local_78[0] >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar15 = (longlong)(int)uVar16;
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar7 + lVar15 * 0x18) = uVar4;
      *(undefined8 *)(pFVar7 + lVar15 * 0x18 + 8) = uVar5;
      *(undefined8 *)(pFVar7 + lVar15 * 0x18 + 0x10) = uVar6;
      if ((fVar9 <= this->DensityScaling) ||
         (local_res8 = local_res8 * 0xbb38435 + 0x3619636b,
         (float)(local_res8 >> 9 | 0x3f800000) - fVar9 <= this->DensityScaling)) {
        pFVar7 = (this->SortIndex).AllocatorInstance.Data;
        if ((pFVar7 <= (FScriptContainerElement *)local_78) &&
           (((FScriptContainerElement *)local_78 < pFVar7 + (longlong)*piVar1 * 4 &&
            (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = (this->SortIndex).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->SortIndex).AllocatorInstance,piVar1);
        }
        (this->SortIndex).ArrayNum = iVar12 + 1;
        *(uint *)((this->SortIndex).AllocatorInstance.Data + (longlong)iVar12 * 4) = local_78[0];
      }
      local_78[0] = local_78[0] + 1;
    } while ((int)local_78[0] < this->OriginalNum);
  }
  lVar15 = 0;
  this->Num = (this->SortIndex).ArrayNum;
  pTVar10 = CVarMaxOcclusionQueriesPerComponent.Ref;
  bVar11 = IsInParallelGameThread();
  if (bVar11) {
LAB_147d15dd3:
    lVar13 = lVar15;
  }
  else {
    bVar11 = IsInGameThread();
    lVar13 = 4;
    if (bVar11) goto LAB_147d15dd3;
  }
  this->OcclusionLayerTarget = *(int *)((longlong)pTVar10->ShadowedValue + lVar13);
  pTVar10 = CVarMinInstancesPerOcclusionQuery.Ref;
  bVar11 = IsInParallelGameThread();
  if (bVar11) {
LAB_147d15df8:
    lVar13 = lVar15;
  }
  else {
    bVar11 = IsInGameThread();
    lVar13 = 4;
    if (bVar11) goto LAB_147d15df8;
  }
  iVar12 = this->Num / *(int *)((longlong)pTVar10->ShadowedValue + lVar13);
  if (this->OcclusionLayerTarget <= iVar12) goto LAB_147d15e34;
  this->OcclusionLayerTarget = iVar12;
  pTVar10 = CVarMinOcclusionQueriesPerComponent.Ref;
  bVar11 = IsInParallelGameThread();
  if (bVar11) {
LAB_147d15e26:
    lVar13 = lVar15;
  }
  else {
    bVar11 = IsInGameThread();
    lVar13 = 4;
    if (bVar11) goto LAB_147d15e26;
  }
  if (this->OcclusionLayerTarget < *(int *)((longlong)pTVar10->ShadowedValue + lVar13)) {
    this->OcclusionLayerTarget = 0;
  }
LAB_147d15e34:
  pTVar10 = CVarFoliageSplitFactor.Ref;
  bVar11 = IsInParallelGameThread();
  if ((bVar11) || (bVar11 = IsInGameThread(), lVar13 = 4, bVar11)) {
    lVar13 = lVar15;
  }
  iVar12 = *(int *)((longlong)pTVar10->ShadowedValue + lVar13);
  this->InternalNodeBranchingFactor = iVar12;
  if (this->Num / this->MaxInstancesPerLeaf < iVar12) {
    iVar12 = this->Num / iVar12;
    iVar14 = 0x400;
    if (iVar12 < 0x400) {
      iVar14 = iVar12;
    }
    iVar12 = 1;
    if (1 < iVar14) {
      iVar12 = iVar14;
    }
    this->MaxInstancesPerLeaf = iVar12;
  }
  return;
}

// Split @ 147d30d30

void __thiscall
UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::Split(FClusterBuilder *this,int param_1)

{
  TArray<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::FRunPair,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FIdentityFunctor local_res10 [8];
  
  pTVar1 = &this->Clusters;
  (this->Clusters).ArrayNum = 0;
  if ((this->Clusters).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar1->AllocatorInstance,0,&(this->Clusters).ArrayMax);
  }
  Split(this,0,param_1 + -1);
  AlgoImpl::
  IntroSortInternal<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::FRunPair,int,FIdentityFunctor,TDereferenceWrapper<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::FRunPair,TLess<void>_>_>
            ((FRunPair *)(pTVar1->AllocatorInstance).Data,(this->Clusters).ArrayNum,local_res10[0],
             (TLess<void> *)local_res10);
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (this->Clusters).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Clusters).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::FRunPair,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar2) break;
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// Split @ 147d30df0

void __thiscall
UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::Split
          (FClusterBuilder *this,int param_1,int param_2)

{
  int *piVar1;
  TArray<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::FSortPair,TSizedDefaultAllocator<32>_>
  *pTVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FIdentityFunctor FVar13;
  TArray<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::FRunPair,TSizedDefaultAllocator<32>_>
  *pTVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  double dVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  double dVar31;
  FIdentityFunctor local_c8 [4];
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  float local_b0;
  uint uStack_ac;
  ulonglong local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  char local_68;
  undefined4 local_67;
  undefined2 local_63;
  undefined1 local_61;
  ulonglong local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  
  uVar11 = (ulonglong)param_2;
  uVar12 = uVar11;
  FVar13 = local_c8[0];
  local_c0 = param_1;
  local_b8 = param_2;
  local_a8 = uVar11;
  do {
    pFVar16 = (FScriptContainerElement *)(longlong)param_1;
    local_bc = ((int)uVar11 - param_1) + 1;
    local_68 = '\0';
    local_67 = 0;
    local_63 = 0;
    local_61 = 0;
    local_98 = 0.0;
    dStack_90 = 0.0;
    local_88 = 0.0;
    dStack_80 = 0.0;
    local_78 = 0.0;
    dStack_70 = 0.0;
    pFVar20 = pFVar16;
    uVar7 = param_1;
    local_c4 = param_1;
    local_58 = pFVar16;
    if ((longlong)pFVar16 <= (longlong)uVar12) {
      do {
        uVar10 = 0;
        if ((int)uVar7 < (this->SortIndex).ArrayNum) {
          uVar10 = ~uVar7 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = *(uint *)((this->SortIndex).AllocatorInstance.Data + (longlong)pFVar20 * 4);
        lVar17 = (longlong)(int)uVar10;
        uVar15 = 0;
        if ((int)uVar10 < (this->SortPoints).ArrayNum) {
          uVar15 = ~uVar10 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->SortPoints).AllocatorInstance.Data;
        if (local_68 == '\0') {
          local_98 = *(double *)(pFVar4 + lVar17 * 0x18);
          dStack_90 = *(double *)(pFVar4 + lVar17 * 0x18 + 8);
          local_68 = '\x01';
          local_88 = *(double *)(pFVar4 + lVar17 * 0x18 + 0x10);
          dStack_80 = local_98;
          local_78 = dStack_90;
          dStack_70 = local_88;
        }
        else {
          dVar31 = *(double *)(pFVar4 + lVar17 * 0x18);
          dVar3 = *(double *)(pFVar4 + lVar17 * 0x18 + 8);
          uVar28 = SUB84(dVar3,0);
          uVar30 = (undefined4)((ulonglong)dVar3 >> 0x20);
          uVar21 = SUB84(dVar31,0);
          uVar22 = (undefined4)((ulonglong)dVar31 >> 0x20);
          if (local_98 <= dVar31) {
            uVar21 = SUB84(local_98,0);
            uVar22 = (undefined4)((ulonglong)local_98 >> 0x20);
          }
          dVar27 = *(double *)(pFVar4 + lVar17 * 0x18 + 0x10);
          uVar23 = uVar28;
          uVar25 = uVar30;
          if (dStack_90 <= dVar3) {
            uVar23 = SUB84(dStack_90,0);
            uVar25 = (undefined4)((ulonglong)dStack_90 >> 0x20);
          }
          if (dVar31 <= dStack_80) {
            dVar31 = dStack_80;
          }
          if (dVar3 <= local_78) {
            uVar28 = SUB84(local_78,0);
            uVar30 = (undefined4)((ulonglong)local_78 >> 0x20);
          }
          local_98 = (double)CONCAT44(uVar22,uVar21);
          uVar21 = SUB84(dVar27,0);
          uVar22 = (undefined4)((ulonglong)dVar27 >> 0x20);
          if (local_88 <= dVar27) {
            uVar21 = SUB84(local_88,0);
            uVar22 = (undefined4)((ulonglong)local_88 >> 0x20);
          }
          if (dVar27 <= dStack_70) {
            dVar27 = dStack_70;
          }
          dStack_90 = (double)CONCAT44(uVar25,uVar23);
          local_78 = (double)CONCAT44(uVar30,uVar28);
          local_88 = (double)CONCAT44(uVar22,uVar21);
          dStack_80 = dVar31;
          dStack_70 = dVar27;
        }
        pFVar20 = pFVar20 + 1;
        uVar7 = uVar7 + 1;
      } while ((longlong)pFVar20 <= (longlong)uVar12);
      pFVar20 = (FScriptContainerElement *)(ulonglong)(uint)param_1;
    }
    local_a0 = SUB84(pFVar20,0);
    if ((int)local_bc <= this->BranchingFactor) {
      pTVar14 = &this->Clusters;
      pFVar20 = (pTVar14->AllocatorInstance).Data;
      uStack_9c = local_bc;
      if (((pFVar20 <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < pFVar20 + (longlong)(this->Clusters).ArrayMax * 8)
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->Clusters).ArrayNum;
      piVar1 = &(this->Clusters).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar14->AllocatorInstance,piVar1);
      }
      (this->Clusters).ArrayNum = iVar8 + 1;
      *(ulonglong *)((pTVar14->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           CONCAT44(uStack_9c,local_a0);
      return;
    }
    piVar1 = &(this->SortPairs).ArrayMax;
    (this->SortPairs).ArrayNum = 0;
    if ((this->SortPairs).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->SortPairs).AllocatorInstance,0,piVar1);
    }
    fVar26 = (float)(dStack_80 - local_98);
    fVar24 = (float)(local_78 - dStack_90);
    fVar29 = fVar26;
    if (fVar26 < fVar24) {
      fVar29 = fVar24;
    }
    uVar11 = (ulonglong)pFVar20 & 0xffffffff;
    uVar12 = (ulonglong)(fVar26 < fVar24);
    if (fVar29 < (float)(dStack_70 - local_88)) {
      uVar12 = 2;
    }
    local_60 = uVar12;
    if ((longlong)pFVar16 <= (longlong)local_a8) {
      pTVar2 = &this->SortPairs;
      do {
        uVar10 = (uint)uVar11;
        uVar7 = 0;
        if ((int)uVar10 < (this->SortIndex).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStack_ac = *(uint *)((this->SortIndex).AllocatorInstance.Data + (longlong)pFVar16 * 4);
        lVar17 = (longlong)(int)uStack_ac;
        uVar7 = 0;
        if ((int)uStack_ac < (this->SortPoints).ArrayNum) {
          uVar7 = ~uStack_ac >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = (pTVar2->AllocatorInstance).Data;
        local_b0 = (float)*(double *)
                           ((this->SortPoints).AllocatorInstance.Data + uVar12 * 8 + lVar17 * 0x18);
        if (((pFVar20 <= (FScriptContainerElement *)&local_b0) &&
            ((FScriptContainerElement *)&local_b0 <
             pFVar20 + (longlong)(this->SortPairs).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->SortPairs).ArrayNum;
        if (iVar8 == (this->SortPairs).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&pTVar2->AllocatorInstance,piVar1);
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        (this->SortPairs).ArrayNum = iVar8 + 1;
        pFVar16 = pFVar16 + 1;
        *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             CONCAT44(uStack_ac,local_b0);
      } while ((longlong)pFVar16 <= (longlong)local_a8);
      pFVar20 = (FScriptContainerElement *)((ulonglong)local_58 & 0xffffffff);
      pFVar16 = local_58;
      FVar13 = local_c8[0];
    }
    AlgoImpl::
    IntroSortInternal<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::FSortPair,int,FIdentityFunctor,TDereferenceWrapper<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::FSortPair,TLess<void>_>_>
              ((FSortPair *)(this->SortPairs).AllocatorInstance.Data,(this->SortPairs).ArrayNum,
               FVar13,(TLess<void> *)local_c8);
    uVar12 = local_a8;
    uVar7 = local_c0;
    if ((longlong)pFVar16 <= (longlong)local_a8) {
      lVar17 = 0;
      do {
        uVar15 = (uint)pFVar20;
        uVar10 = 0;
        if ((int)(uVar15 - uVar7) < (this->SortPairs).ArrayNum) {
          uVar10 = ~(uVar15 - uVar7) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar21 = *(undefined4 *)((this->SortPairs).AllocatorInstance.Data + lVar17 + 4);
        uVar10 = 0;
        if ((int)uVar15 < (this->SortIndex).ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = (FScriptContainerElement *)(ulonglong)(uVar15 + 1);
        lVar17 = lVar17 + 8;
        *(undefined4 *)((this->SortIndex).AllocatorInstance.Data + (longlong)pFVar16 * 4) = uVar21;
        pFVar16 = pFVar16 + 1;
        FVar13 = local_c8[0];
      } while ((longlong)pFVar16 <= (longlong)uVar12);
    }
    uVar9 = (int)local_bc / 2;
    uVar19 = (int)uVar12 - uVar9;
    uVar10 = (local_c4 - 1) + uVar9;
    local_c0 = uVar19 + 1;
    uVar7 = local_bc & 1;
    uVar15 = local_c0;
    local_bc = uVar10;
    if (uVar7 != 0) {
      uVar7 = 0;
      if ((int)uVar9 < (this->SortPairs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_48 = (this->SortPairs).AllocatorInstance.Data;
      uVar10 = uVar9 + 1;
      uVar7 = 0;
      if ((int)uVar10 < (this->SortPairs).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_60 = (ulonglong)(int)uVar10;
      uVar18 = uVar9 - 1;
      local_50 = (this->SortPairs).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar18 < (this->SortPairs).ArrayNum) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_58 = (this->SortPairs).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar9 < (this->SortPairs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = local_bc;
      uVar15 = uVar19;
      if (*(float *)((this->SortPairs).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) -
          *(float *)(local_58 + (longlong)(int)uVar18 * 8) <
          *(float *)(local_50 + local_60 * 8) - *(float *)(local_48 + (longlong)(int)uVar9 * 8)) {
        uVar10 = local_c4 + uVar9;
        uVar15 = local_c0;
      }
    }
    local_c0 = uVar15;
    param_1 = local_c0;
    Split(this,local_c4,uVar10);
    uVar11 = (ulonglong)local_b8;
  } while( true );
}

