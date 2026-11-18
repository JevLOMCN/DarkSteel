// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// Cut @ 14358c300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FMeshMeshCut::Cut(FMeshMeshCut *this,FIntersectionsQueryResult *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [16];
  ForAnyElementType local_118;
  undefined8 local_110;
  TBitArray<FDefaultBitArrayAllocator> local_108;
  undefined4 local_e8;
  undefined4 local_e4;
  void *local_d8;
  undefined4 local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((this->bCutCoplanar != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bCutCoplanar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshMeshCut.cpp"
                         ,0x250,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  this->VertexChains[0].ArrayNum = 0;
  if (this->VertexChains[0].ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this->VertexChains[0].AllocatorInstance,0,&this->VertexChains[0].ArrayMax);
  }
  this->SegmentToChain[0].ArrayNum = 0;
  if (this->SegmentToChain[0].ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this->SegmentToChain[0].AllocatorInstance,0,&this->SegmentToChain[0].ArrayMax)
    ;
  }
  iVar8 = this->VertexChains[1].ArrayMax;
  this->VertexChains[1].ArrayNum = 0;
  if (iVar8 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this->VertexChains[1].AllocatorInstance,0,&this->VertexChains[1].ArrayMax);
  }
  iVar8 = this->SegmentToChain[1].ArrayMax;
  this->SegmentToChain[1].ArrayNum = 0;
  if (iVar8 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this->SegmentToChain[1].AllocatorInstance,0,&this->SegmentToChain[1].ArrayMax)
    ;
  }
  bVar3 = this->bMutuallyCut;
  uVar11 = 1;
  pTVar6 = pTVar10;
  pTVar9 = pTVar10;
  do {
    local_128._0_8_ = this->Mesh[(longlong)pTVar9];
    local_128._8_8_ = this->SnapTolerance * this->SnapTolerance;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = 0;
    local_108.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_108.NumBits = 0;
    local_108.MaxBits = 0x80;
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 0;
    local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_b8.NumBits = 0;
    local_b8.MaxBits = 0x80;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70._0_4_ = 0;
    local_70._4_4_ = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60._0_4_ = 0;
    local_60._4_4_ = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50._0_4_ = 0;
    local_50._4_4_ = 0;
    MeshCut::FCutWorkingInfo::Init((FCutWorkingInfo *)local_128,(FDynamicMesh3 *)local_128._0_8_);
    iVar8 = (int)pTVar6;
    MeshCut::FCutWorkingInfo::AddSegments((FCutWorkingInfo *)local_128,param_1,iVar8);
    MeshCut::FCutWorkingInfo::InsertFaceVertices((FCutWorkingInfo *)local_128);
    MeshCut::FCutWorkingInfo::InsertEdgeVertices((FCutWorkingInfo *)local_128);
    pTVar6 = pTVar10;
    pTVar7 = pTVar10;
    if (this->bTrackInsertedVertices != false) {
      pTVar6 = this->VertexChains + iVar8;
      pTVar7 = this->SegmentToChain + iVar8;
    }
    bVar5 = MeshCut::FCutWorkingInfo::ConnectEdges((FCutWorkingInfo *)local_128,pTVar6,pTVar7);
    pTVar7 = pTVar10;
    if (bVar5) {
      pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar11;
    }
    uVar11 = (uint)SUB81(pTVar7,0);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    local_80 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    uVar2 = local_c0 >> 0x20;
    local_c0 = local_c0 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_c8,0,(int *)((longlong)&local_c0 + 4));
    }
    local_98 = 0xffffffff;
    local_94 = 0;
    local_b8.NumBits = 0;
    if (0x80 < (uint)local_b8.MaxBits) {
      local_b8.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
    }
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
    }
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
    local_d0 = 0;
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    uVar2 = local_110 >> 0x20;
    local_110 = local_110 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_118,0,(int *)((longlong)&local_110 + 4));
    }
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_108.NumBits = 0;
    if (0x80 < (uint)local_108.MaxBits) {
      local_108.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_108,0);
    }
    if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)(iVar8 + 1);
    pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             ((longlong)&(pTVar9->AllocatorInstance).Data + 1);
  } while ((longlong)pTVar9 < (longlong)((ulonglong)(bVar3 != false) + 1));
  return SUB81(pTVar7,0);
}

