// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// Cut @ 14358c6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FMeshSelfCut::Cut(FMeshSelfCut *this,FIntersectionsQueryResult *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [80];
  void *local_b8;
  undefined4 local_b0;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  void *local_68;
  undefined4 local_60;
  ForAnyElementType local_58;
  ForAnyElementType local_48;
  ForAnyElementType local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (this->bCutCoplanar != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bCutCoplanar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshMeshCut.cpp"
                       ,0x241,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (this->VertexChains).ArrayNum = 0;
  if ((this->VertexChains).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->VertexChains).AllocatorInstance,0,&(this->VertexChains).ArrayMax);
  }
  MeshCut::FCutWorkingInfo::FCutWorkingInfo
            ((FCutWorkingInfo *)local_108,this->Mesh,this->SnapTolerance);
  MeshCut::FCutWorkingInfo::AddSegments((FCutWorkingInfo *)local_108,param_1,0);
  MeshCut::FCutWorkingInfo::AddSegments((FCutWorkingInfo *)local_108,param_1,1);
  MeshCut::FCutWorkingInfo::InsertFaceVertices((FCutWorkingInfo *)local_108);
  MeshCut::FCutWorkingInfo::InsertEdgeVertices((FCutWorkingInfo *)local_108);
  pTVar4 = &this->VertexChains;
  if (this->bTrackInsertedVertices == false) {
    pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  }
  bVar2 = MeshCut::FCutWorkingInfo::ConnectEdges
                    ((FCutWorkingInfo *)local_108,pTVar4,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8);
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_108 + 0x10));
  return bVar2;
}

