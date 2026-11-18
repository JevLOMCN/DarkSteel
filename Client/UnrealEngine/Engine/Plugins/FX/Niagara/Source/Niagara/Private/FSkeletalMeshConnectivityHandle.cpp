// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// FSkeletalMeshConnectivityHandle @ 149212a60

FSkeletalMeshConnectivityHandle * __thiscall
FSkeletalMeshConnectivityHandle::FSkeletalMeshConnectivityHandle
          (FSkeletalMeshConnectivityHandle *this,FSkeletalMeshConnectivityHandle *param_1)

{
  TSharedPtr<FSkeletalMeshConnectivity,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSkeletalMeshConnectivity *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->Usage).RequiresCpuAccess = false;
  (this->Usage).RequiresGpuAccess = false;
  pTVar1 = &param_1->ConnectivityData;
  (this->ConnectivityData).Object = (FSkeletalMeshConnectivity *)0x0;
  (this->ConnectivityData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->Usage = param_1->Usage;
  pTVar2 = (param_1->ConnectivityData).SharedReferenceCount.ReferenceController;
  pFVar3 = pTVar1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->ConnectivityData).SharedReferenceCount.ReferenceController;
  (this->ConnectivityData).Object = pFVar3;
  (this->ConnectivityData).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FSkeletalMeshConnectivity,1> *)&local_18) {
    pTVar1->Object = (FSkeletalMeshConnectivity *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->ConnectivityData).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return this;
}

// FSkeletalMeshConnectivityHandle @ 149212b10

FSkeletalMeshConnectivityHandle * __thiscall
FSkeletalMeshConnectivityHandle::FSkeletalMeshConnectivityHandle
          (FSkeletalMeshConnectivityHandle *this,FSkeletalMeshConnectivityUsage param_1,
          TSharedPtr<FSkeletalMeshConnectivity,1> *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSkeletalMeshConnectivity *pFVar4;
  FSkeletalMeshConnectivityProxy *pFVar5;
  code *pcVar6;
  bool bVar7;
  FSkeletalMeshConnectivityHandle *pFVar8;
  FSkeletalMeshConnectivityProxy *pFVar9;
  
  this->Usage = param_1;
  (this->ConnectivityData).Object = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ConnectivityData).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = (this->ConnectivityData).Object;
  if ((pFVar4 != (FSkeletalMeshConnectivity *)0x0) && ((this->Usage).RequiresGpuAccess != false)) {
    LOCK();
    paVar1 = &pFVar4->GpuUserCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x0) {
      if (((pFVar4->Proxy).Ptr != (FSkeletalMeshConnectivityProxy *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Proxy == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMeshConnectivity.cpp"
                             ,0x73,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FSkeletalMeshConnectivityHandle *)(*pcVar6)();
        return pFVar8;
      }
      pFVar9 = ::operator_new(0x60);
      if (pFVar9 == (FSkeletalMeshConnectivityProxy *)0x0) {
        pFVar9 = (FSkeletalMeshConnectivityProxy *)0x0;
      }
      else {
        pFVar9->_padding_ = 0;
        pFVar9->_padding_ = 0;
        pFVar9->_padding_ = 0;
        pFVar9->_padding_ = 0;
        *(undefined8 *)&pFVar9->MaxAdjacentTriangleCount = 0;
        (pFVar9->AdjacencyResource)._padding_ = 0;
        (pFVar9->AdjacencyResource)._padding_ = 0;
        (pFVar9->AdjacencyResource)._padding_ = 0;
        *(undefined8 *)&(pFVar9->AdjacencyResource).bNeedsCPUAccess = 0;
        (pFVar9->AdjacencyBuffer).Reference = (FRHIBuffer *)0x0;
        (pFVar9->AdjacencySrv).Reference = (FRHIShaderResourceView *)0x0;
        pFVar9->GpuMemoryUsage = 0;
        FRenderResource::FRenderResource((FRenderResource *)pFVar9);
        pFVar9->MaxAdjacentTriangleCount = 8;
        pFVar9->GpuMemoryUsage = 0;
        pFVar9->_padding_ = (longlong)&___7FSkeletalMeshConnectivityProxy__6B_;
        (pFVar9->AdjacencyResource)._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
        (pFVar9->AdjacencyResource)._padding_ = 0;
        (pFVar9->AdjacencyResource)._padding_ = 0;
        (pFVar9->AdjacencyResource).bNeedsCPUAccess = false;
        (pFVar9->AdjacencyBuffer).Reference = (FRHIBuffer *)0x0;
        (pFVar9->AdjacencySrv).Reference = (FRHIShaderResourceView *)0x0;
      }
      pFVar5 = (pFVar4->Proxy).Ptr;
      if ((pFVar5 != pFVar9) &&
         ((pFVar4->Proxy).Ptr = pFVar9, pFVar5 != (FSkeletalMeshConnectivityProxy *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
      bVar7 = FSkeletalMeshConnectivityProxy::Initialize((pFVar4->Proxy).Ptr,pFVar4);
      pFVar9 = (pFVar4->Proxy).Ptr;
      if (bVar7) {
        BeginInitResource((FRenderResource *)pFVar9,(FRenderCommandPipe *)0x0);
        return this;
      }
      if (pFVar9 != (FSkeletalMeshConnectivityProxy *)0x0) {
        (pFVar4->Proxy).Ptr = (FSkeletalMeshConnectivityProxy *)0x0;
        (**(code **)pFVar9->_padding_)(pFVar9,1);
      }
    }
  }
  return this;
}

// FSkeletalMeshConnectivityHandle @ 149212c90

FSkeletalMeshConnectivityHandle * __thiscall
FSkeletalMeshConnectivityHandle::FSkeletalMeshConnectivityHandle
          (FSkeletalMeshConnectivityHandle *this)

{
  (this->Usage).RequiresCpuAccess = false;
  (this->Usage).RequiresGpuAccess = false;
  (this->ConnectivityData).Object = (FSkeletalMeshConnectivity *)0x0;
  (this->ConnectivityData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FSkeletalMeshConnectivityHandle @ 149215910

void __thiscall
FSkeletalMeshConnectivityHandle::~FSkeletalMeshConnectivityHandle
          (FSkeletalMeshConnectivityHandle *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FSkeletalMeshConnectivity *this_00;
  
  this_00 = (this->ConnectivityData).Object;
  if ((this_00 != (FSkeletalMeshConnectivity *)0x0) && ((this->Usage).RequiresGpuAccess != false)) {
    LOCK();
    paVar1 = &this_00->GpuUserCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      FSkeletalMeshConnectivity::Release(this_00);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ConnectivityData).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 149216570

FSkeletalMeshConnectivityHandle * __thiscall
FSkeletalMeshConnectivityHandle::operator=
          (FSkeletalMeshConnectivityHandle *this,FSkeletalMeshConnectivityHandle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSkeletalMeshConnectivity *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this != param_1) {
    this->Usage = param_1->Usage;
    pTVar1 = (param_1->ConnectivityData).SharedReferenceCount.ReferenceController;
    pFVar2 = (param_1->ConnectivityData).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->ConnectivityData).SharedReferenceCount.ReferenceController;
    (this->ConnectivityData).Object = pFVar2;
    (this->ConnectivityData).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&param_1->ConnectivityData != (TSharedPtr<FSkeletalMeshConnectivity,1> *)&local_18) {
      (param_1->ConnectivityData).Object = (FSkeletalMeshConnectivity *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->ConnectivityData).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return this;
}

// operator_bool @ 1492166e0

bool __thiscall
FSkeletalMeshConnectivityHandle::operator_bool(FSkeletalMeshConnectivityHandle *this)

{
  return (this->ConnectivityData).Object != (FSkeletalMeshConnectivity *)0x0;
}

// GetAdjacentTriangleIndex @ 149233d10

int __thiscall
FSkeletalMeshConnectivityHandle::GetAdjacentTriangleIndex
          (FSkeletalMeshConnectivityHandle *this,int param_1,int param_2)

{
  return -1;
}

// GetProxy @ 149237760

FSkeletalMeshConnectivityProxy * __thiscall
FSkeletalMeshConnectivityHandle::GetProxy(FSkeletalMeshConnectivityHandle *this)

{
  FSkeletalMeshConnectivity *pFVar1;
  
  pFVar1 = (this->ConnectivityData).Object;
  if (pFVar1 != (FSkeletalMeshConnectivity *)0x0) {
    return (pFVar1->Proxy).Ptr;
  }
  return (FSkeletalMeshConnectivityProxy *)0x0;
}

// PinAndInvalidateHandle @ 149246890

void __thiscall
FSkeletalMeshConnectivityHandle::PinAndInvalidateHandle(FSkeletalMeshConnectivityHandle *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ConnectivityData != (TSharedPtr<FSkeletalMeshConnectivity,1> *)&local_18) {
    (this->ConnectivityData).Object = (FSkeletalMeshConnectivity *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ConnectivityData).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

