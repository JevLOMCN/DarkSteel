// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FChaosDerivedDataReader<float,3> @ 14824c820

FChaosDerivedDataReader<float,3> * __thiscall
FChaosDerivedDataReader<float,3>::FChaosDerivedDataReader<float,3>
          (FChaosDerivedDataReader<float,3> *this,FBulkData *param_1)

{
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar1;
  void *pvVar2;
  long64 lVar3;
  FChaosArchiveContext *this_00;
  FChaosArchiveContext *pFVar4;
  FChaosArchive *pFVar5;
  FLLMScope local_res8 [2];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  FMemScope local_198;
  uint *local_190;
  FArchiveState local_188;
  void *local_f8;
  undefined8 local_f0;
  long64 local_e8;
  char local_e0;
  FChaosArchive local_d8;
  
  local_res20[0] = 4;
  (this->ConvexImplicitObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvexImplicitObjects).ArrayNum = 0;
  (this->ConvexImplicitObjects).ArrayMax = 0;
  (this->TrimeshImplicitObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrimeshImplicitObjects).ArrayNum = 0;
  (this->TrimeshImplicitObjects).ArrayMax = 0;
  (this->ConvexGeometries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvexGeometries).ArrayNum = 0;
  (this->ConvexGeometries).ArrayMax = 0;
  (this->TriMeshGeometries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriMeshGeometries).ArrayNum = 0;
  (this->TriMeshGeometries).ArrayMax = 0;
  (this->UVInfo).IndexBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).IndexBuffer.ArrayNum = 0;
  (this->UVInfo).IndexBuffer.ArrayMax = 0;
  (this->UVInfo).VertPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).VertPositions.ArrayNum = 0;
  (this->UVInfo).VertPositions.ArrayMax = 0;
  (this->UVInfo).VertUVs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).VertUVs.ArrayNum = 0;
  (this->UVInfo).VertUVs.ArrayMax = 0;
  (this->FaceRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FaceRemap).ArrayNum = 0;
  (this->FaceRemap).ArrayMax = 0;
  this->bReadSuccessful = false;
  pvVar2 = FBulkData::LockReadOnly(param_1);
  lVar3 = FBulkData::GetBulkDataSize(param_1);
  FArchiveState::FArchiveState(&local_188);
  pFVar4 = (FChaosArchiveContext *)0x0;
  local_188._padding_ = (longlong)&___7FBufferReaderBase__6B_;
  local_f0 = 0;
  local_e0 = '\0';
  local_f8 = pvVar2;
  local_e8 = lVar3;
  FArchiveState::SetIsLoading(&local_188,true);
  (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
  local_188._padding_ = (longlong)&___7FBufferReader__6B_;
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_d8,(FArchive *)&local_188);
  local_d8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
  this_00 = ::operator_new(0x158);
  if (this_00 != (FChaosArchiveContext *)0x0) {
    pFVar4 = Chaos::FChaosArchiveContext::FChaosArchiveContext(this_00);
  }
  local_res18[0] = 0xffffffff;
  local_d8.Context.Ptr = pFVar4;
  if (*(uint **)(local_d8._padding_ + 8) < *(uint **)local_d8._padding_ + 1) {
    if ((local_d8._padding_._2_1_ & 1) == 0) {
      if (*(code **)(local_d8._padding_ + 0x188) == FArchiveProxy::Serialize) {
        (**(code **)(*(longlong *)local_d8._padding_ + 0x188))();
      }
      else {
        (**(code **)(local_d8._padding_ + 0x188))(&local_d8);
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,local_res18);
    }
  }
  else {
    local_res18[0] = **(uint **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
  }
  FArchive::UsingCustomVersion((FArchive *)&local_188,&FFortniteValkyrieBranchObjectVersion::GUID);
  if (local_res18[0] == 4) {
    FLLMScope::FLLMScope(local_res8,ChaosConvex,false,None,Default,true);
    FMemScope::FMemScope(&local_198,ChaosConvex,true);
    Chaos::operator<<<Chaos::FConvex_TSizedDefaultAllocator<32>_>(&local_d8,&this->ConvexGeometries)
    ;
    FMemScope::~FMemScope(&local_198);
    FLLMScope::~FLLMScope(local_res8);
    FLLMScope::FLLMScope(local_res8,ChaosTrimesh,false,None,Default,true);
    FMemScope::FMemScope(&local_198,ChaosTrimesh,true);
    pFVar5 = Chaos::operator<<<Chaos::FTriangleMeshImplicitObject_TSizedDefaultAllocator<32>_>
                       (&local_d8,&this->TriMeshGeometries);
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
              ((FArchive *)pFVar5,&(this->UVInfo).IndexBuffer);
    TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
              ((FArchive *)pFVar5,&(this->UVInfo).VertPositions);
    TArrayPrivateFriend::
    Serialize<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              ((FArchive *)pFVar5,&(this->UVInfo).VertUVs);
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
              ((FArchive *)pFVar5,&this->FaceRemap);
    FMemScope::~FMemScope(&local_198);
    FLLMScope::~FLLMScope(local_res8);
    this->bReadSuccessful = true;
  }
  else {
    local_198 = (FMemScope)local_res20;
    local_190 = local_res18;
    `FChaosDerivedDataReader<float,3>::FChaosDerivedDataReader<float,3>'::__l5::<lambda_1>::
    operator()(&local_198);
  }
  FBulkData::Unlock(param_1);
  TVar1.Ptr = local_d8.Context.Ptr;
  if (local_d8.Context.Ptr != (FChaosArchiveContext *)0x0) {
    Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_d8.Context.Ptr);
    ::operator_delete(TVar1.Ptr,0x158);
  }
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_d8);
  local_188._padding_ = (longlong)&___7FBufferReader__6B_;
  if (local_e0 != '\0') {
    FMemory::Free(local_f8);
    local_f8 = (void *)0x0;
  }
  local_188._padding_ = (longlong)&___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)&local_188);
  return this;
}

// ~FChaosDerivedDataReader<float,3> @ 148251a20

void __thiscall
FChaosDerivedDataReader<float,3>::~FChaosDerivedDataReader<float,3>
          (FChaosDerivedDataReader<float,3> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FaceRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (this->UVInfo).VertUVs.AllocatorInstance.Data,(this->UVInfo).VertUVs.ArrayNum);
  pFVar1 = (this->UVInfo).VertUVs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVInfo).VertPositions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVInfo).IndexBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int>
            ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)
             (this->TriMeshGeometries).AllocatorInstance.Data,(this->TriMeshGeometries).ArrayNum);
  pFVar1 = (this->TriMeshGeometries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<Chaos::FConvex>,int>
            ((TRefCountPtr<Chaos::FConvex> *)(this->ConvexGeometries).AllocatorInstance.Data,
             (this->ConvexGeometries).ArrayNum);
  pFVar1 = (this->ConvexGeometries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<Chaos::FTriangleMeshImplicitObject,1>,int>
            ((TSharedPtr<Chaos::FTriangleMeshImplicitObject,1> *)
             (this->TrimeshImplicitObjects).AllocatorInstance.Data,
             (this->TrimeshImplicitObjects).ArrayNum);
  pFVar1 = (this->TrimeshImplicitObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<Chaos::FConvex,1>,int>
            ((TSharedPtr<Chaos::FConvex,1> *)(this->ConvexImplicitObjects).AllocatorInstance.Data,
             (this->ConvexImplicitObjects).ArrayNum);
  pFVar1 = (this->ConvexImplicitObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 150528f20

bool __thiscall
`FChaosDerivedDataReader<float,3>::FChaosDerivedDataReader<float,3>'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7636311355317813276>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7636311355317813276>,
                       &`public:___cdecl_`public:___cdecl_FChaosDerivedDataReader<float,3>::FChaosDerivedDataReader<float,3>(FBulkData*___ptr64)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

