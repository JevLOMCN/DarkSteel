// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// operator() @ 149218be0

void __thiscall
`FNDI_SkeletalMesh_GeneratedData::Tick'::__l49::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0x108)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar1 + 0x100);
  if (*(longlong *)(lVar1 + 0x100) == 0) {
    lVar5 = lVar1;
  }
  FSkeletalMeshSkinningData::Tick
            (*(FSkeletalMeshSkinningData **)(lVar5 + (longlong)param_1 * 8),
             **(float **)((longlong)this + 8),true);
  return;
}

// GetCachedConnectivity @ 149234350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSkeletalMeshConnectivityHandle * __thiscall
FNDI_SkeletalMesh_GeneratedData::GetCachedConnectivity
          (FNDI_SkeletalMesh_GeneratedData *this,
          FSkeletalMeshConnectivityHandle *__return_storage_ptr__,
          TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *param_1,int param_2,
          FSkeletalMeshConnectivityUsage param_3,bool param_4)

{
  FPlatformRWLock *SRWLock;
  atomic<int> *paVar1;
  TArray<TSharedPtr<FSkeletalMeshConnectivity,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<int> aVar3;
  int *piVar4;
  FWeakObjectPtr FVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSkeletalMeshConnectivity *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  FSkeletalMeshConnectivityHandle *pFVar12;
  USkeletalMesh *pUVar13;
  longlong lVar14;
  FSkeletalMeshLODRenderData *pFVar15;
  FSkeletalMeshConnectivityProxy *pFVar16;
  FSkeletalMeshConnectivityProxy *pFVar17;
  FScriptContainerElement *pFVar18;
  FSkeletalMeshConnectivityProxy *pFVar19;
  FScriptContainerElement *pFVar20;
  longlong *local_38;
  FSkeletalMeshConnectivityProxy *pFStack_30;
  
  pUVar11 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  if ((pUVar11 == (UObject *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshObject.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                         ,0x2f4,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FSkeletalMeshConnectivityHandle *)(*pcVar8)();
    return pFVar12;
  }
  pUVar13 = (USkeletalMesh *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  if ((((pUVar13 == (USkeletalMesh *)0x0) ||
       (lVar14 = (**(code **)(pUVar13->_padding_ + 0x330))(pUVar13,param_2), lVar14 == 0)) ||
      ((*(byte *)(lVar14 + 0xd0) & 4) == 0)) ||
     (pFVar15 = FSkeletalMeshConnectivity::GetLodRenderData(pUVar13,param_2),
     pFVar15 == (FSkeletalMeshLODRenderData *)0x0)) {
    (__return_storage_ptr__->Usage).RequiresCpuAccess = false;
    (__return_storage_ptr__->Usage).RequiresGpuAccess = false;
    (__return_storage_ptr__->ConnectivityData).Object = (FSkeletalMeshConnectivity *)0x0;
    (__return_storage_ptr__->ConnectivityData).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  SRWLock = &this->CachedConnectivityGuard;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar2 = &this->CachedConnectivity;
  pFVar18 = (pTVar2->AllocatorInstance).Data;
  pFVar20 = pFVar18 + (longlong)(this->CachedConnectivity).ArrayNum * 0x10;
  for (; pFVar18 != pFVar20; pFVar18 = pFVar18 + 0x10) {
    if ((*(longlong *)pFVar18 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FSkeletalMeshConnectivityHandle *)(*pcVar8)();
      return pFVar12;
    }
    piVar4 = *(int **)pFVar18;
    if (((0 < piVar4[6]) && (*piVar4 == param_2)) &&
       (bVar9 = TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
                          ((TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *)(piVar4 + 1),param_1),
       bVar9)) {
      __return_storage_ptr__->Usage = param_3;
      (__return_storage_ptr__->ConnectivityData).Object = *(FSkeletalMeshConnectivity **)pFVar18;
      pTVar6 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
      (__return_storage_ptr__->ConnectivityData).SharedReferenceCount.ReferenceController = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar7 = (__return_storage_ptr__->ConnectivityData).Object;
      if ((pFVar7 != (FSkeletalMeshConnectivity *)0x0) &&
         ((__return_storage_ptr__->Usage).RequiresGpuAccess != false)) {
        LOCK();
        paVar1 = &pFVar7->GpuUserCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x0) {
          if (((pFVar7->Proxy).Ptr != (FSkeletalMeshConnectivityProxy *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Proxy == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMeshConnectivity.cpp"
                                 ,0x73,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar12 = (FSkeletalMeshConnectivityHandle *)(*pcVar8)();
            return pFVar12;
          }
          pFVar16 = ::operator_new(0x60);
          if (pFVar16 == (FSkeletalMeshConnectivityProxy *)0x0) {
            pFVar16 = (FSkeletalMeshConnectivityProxy *)0x0;
          }
          else {
            pFVar16->_padding_ = 0;
            pFVar16->_padding_ = 0;
            pFVar16->_padding_ = 0;
            pFVar16->_padding_ = 0;
            *(undefined8 *)&pFVar16->MaxAdjacentTriangleCount = 0;
            (pFVar16->AdjacencyResource)._padding_ = 0;
            (pFVar16->AdjacencyResource)._padding_ = 0;
            (pFVar16->AdjacencyResource)._padding_ = 0;
            *(undefined8 *)&(pFVar16->AdjacencyResource).bNeedsCPUAccess = 0;
            (pFVar16->AdjacencyBuffer).Reference = (FRHIBuffer *)0x0;
            (pFVar16->AdjacencySrv).Reference = (FRHIShaderResourceView *)0x0;
            pFVar16->GpuMemoryUsage = 0;
            FRenderResource::FRenderResource((FRenderResource *)pFVar16);
            pFVar16->MaxAdjacentTriangleCount = 8;
            pFVar16->GpuMemoryUsage = 0;
            pFVar16->_padding_ = (longlong)&___7FSkeletalMeshConnectivityProxy__6B_;
            (pFVar16->AdjacencyResource)._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
            (pFVar16->AdjacencyResource)._padding_ = 0;
            (pFVar16->AdjacencyResource)._padding_ = 0;
            (pFVar16->AdjacencyResource).bNeedsCPUAccess = false;
            (pFVar16->AdjacencyBuffer).Reference = (FRHIBuffer *)0x0;
            (pFVar16->AdjacencySrv).Reference = (FRHIShaderResourceView *)0x0;
          }
          pFVar19 = (pFVar7->Proxy).Ptr;
          if ((pFVar19 != pFVar16) &&
             ((pFVar7->Proxy).Ptr = pFVar16, pFVar19 != (FSkeletalMeshConnectivityProxy *)0x0)) {
            (**(code **)pFVar19->_padding_)(pFVar19,1);
          }
          bVar9 = FSkeletalMeshConnectivityProxy::Initialize((pFVar7->Proxy).Ptr,pFVar7);
          pFVar16 = (pFVar7->Proxy).Ptr;
          if (bVar9) {
            BeginInitResource((FRenderResource *)pFVar16,(FRenderCommandPipe *)0x0);
          }
          else if (pFVar16 != (FSkeletalMeshConnectivityProxy *)0x0) {
            (pFVar7->Proxy).Ptr = (FSkeletalMeshConnectivityProxy *)0x0;
            (**(code **)pFVar16->_padding_)(pFVar16,1);
          }
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      return __return_storage_ptr__;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar18 = (pTVar2->AllocatorInstance).Data;
  pFVar20 = pFVar18 + (longlong)(this->CachedConnectivity).ArrayNum * 0x10;
  while( true ) {
    if (pFVar18 == pFVar20) {
      pFStack_30 = ::operator_new(0x30);
      pFVar16 = (FSkeletalMeshConnectivityProxy *)0x0;
      if (pFStack_30 == (FSkeletalMeshConnectivityProxy *)0x0) {
        local_38 = ___xmm_00000000000000000000000000000010;
        pFStack_30 = _UNK_150651568;
        pFVar19 = pFVar16;
      }
      else {
        *(undefined4 *)&pFStack_30->_padding_ = 1;
        *(undefined4 *)((longlong)&pFStack_30->_padding_ + 4) = 1;
        pFStack_30->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFSkeletalMeshConnectivity___00_SharedPointerInternals__6B_
        ;
        FVar5 = param_1->WeakPtr;
        *(int *)&pFStack_30->_padding_ = param_2;
        *(FWeakObjectPtr *)((longlong)&pFStack_30->_padding_ + 4) = FVar5;
        *(undefined8 *)&pFStack_30->MaxAdjacentTriangleCount = 0;
        *(undefined4 *)&(pFStack_30->AdjacencyResource)._padding_ = 0;
        if ((&pFStack_30->_padding_ == (longlong *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FSkeletalMeshConnectivityHandle *)(*pcVar8)();
          return pFVar12;
        }
        LOCK();
        *(int *)&pFStack_30->_padding_ = (int)pFStack_30->_padding_ + 1;
        UNLOCK();
        pFVar19 = pFStack_30;
        local_38 = &pFStack_30->_padding_;
      }
      pFVar18 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar18 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar18 + (longlong)(this->CachedConnectivity).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FSkeletalMeshConnectivityHandle *)(*pcVar8)();
        return pFVar12;
      }
      iVar10 = (this->CachedConnectivity).ArrayNum;
      piVar4 = &(this->CachedConnectivity).ArrayMax;
      if (iVar10 == *piVar4) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar2->AllocatorInstance,piVar4);
      }
      (this->CachedConnectivity).ArrayNum = iVar10 + 1;
      pFVar18 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(longlong **)pFVar18 = local_38;
      *(FSkeletalMeshConnectivityProxy **)(pFVar18 + 8) = pFStack_30;
      __return_storage_ptr__->Usage = param_3;
      pFStack_30 = (FSkeletalMeshConnectivityProxy *)0x0;
      local_38 = (longlong *)0x0;
      (__return_storage_ptr__->ConnectivityData).Object = *(FSkeletalMeshConnectivity **)pFVar18;
      pTVar6 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
      (__return_storage_ptr__->ConnectivityData).SharedReferenceCount.ReferenceController = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar7 = (__return_storage_ptr__->ConnectivityData).Object;
      if ((pFVar7 != (FSkeletalMeshConnectivity *)0x0) &&
         ((__return_storage_ptr__->Usage).RequiresGpuAccess != false)) {
        LOCK();
        paVar1 = &pFVar7->GpuUserCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x0) {
          if (((pFVar7->Proxy).Ptr != (FSkeletalMeshConnectivityProxy *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Proxy == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMeshConnectivity.cpp"
                                 ,0x73,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar12 = (FSkeletalMeshConnectivityHandle *)(*pcVar8)();
            return pFVar12;
          }
          pFVar17 = ::operator_new(0x60);
          if (pFVar17 != (FSkeletalMeshConnectivityProxy *)0x0) {
            pFVar17->_padding_ = 0;
            pFVar17->_padding_ = 0;
            pFVar17->_padding_ = 0;
            pFVar17->_padding_ = 0;
            *(undefined8 *)&pFVar17->MaxAdjacentTriangleCount = 0;
            (pFVar17->AdjacencyResource)._padding_ = 0;
            (pFVar17->AdjacencyResource)._padding_ = 0;
            (pFVar17->AdjacencyResource)._padding_ = 0;
            *(undefined8 *)&(pFVar17->AdjacencyResource).bNeedsCPUAccess = 0;
            (pFVar17->AdjacencyBuffer).Reference = (FRHIBuffer *)0x0;
            (pFVar17->AdjacencySrv).Reference = (FRHIShaderResourceView *)0x0;
            pFVar17->GpuMemoryUsage = 0;
            FRenderResource::FRenderResource((FRenderResource *)pFVar17);
            pFVar17->MaxAdjacentTriangleCount = 8;
            pFVar17->_padding_ = (longlong)&___7FSkeletalMeshConnectivityProxy__6B_;
            (pFVar17->AdjacencyResource)._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
            (pFVar17->AdjacencyResource)._padding_ = 0;
            (pFVar17->AdjacencyResource)._padding_ = 0;
            (pFVar17->AdjacencyResource).bNeedsCPUAccess = false;
            (pFVar17->AdjacencyBuffer).Reference = (FRHIBuffer *)0x0;
            (pFVar17->AdjacencySrv).Reference = (FRHIShaderResourceView *)0x0;
            pFVar17->GpuMemoryUsage = 0;
            pFVar16 = pFVar17;
          }
          pFVar17 = (pFVar7->Proxy).Ptr;
          if ((pFVar17 != pFVar16) &&
             ((pFVar7->Proxy).Ptr = pFVar16, pFVar17 != (FSkeletalMeshConnectivityProxy *)0x0)) {
            (**(code **)pFVar17->_padding_)(pFVar17,1);
          }
          bVar9 = FSkeletalMeshConnectivityProxy::Initialize((pFVar7->Proxy).Ptr,pFVar7);
          pFVar16 = (pFVar7->Proxy).Ptr;
          if (bVar9) {
            BeginInitResource((FRenderResource *)pFVar16,(FRenderCommandPipe *)0x0);
          }
          else if (pFVar16 != (FSkeletalMeshConnectivityProxy *)0x0) {
            (pFVar7->Proxy).Ptr = (FSkeletalMeshConnectivityProxy *)0x0;
            (**(code **)pFVar16->_padding_)(pFVar16,1);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFStack_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar19);
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return __return_storage_ptr__;
    }
    if ((*(longlong *)pFVar18 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FSkeletalMeshConnectivityHandle *)(*pcVar8)();
      return pFVar12;
    }
    piVar4 = *(int **)pFVar18;
    if (((0 < piVar4[6]) && (*piVar4 == param_2)) &&
       (bVar9 = TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
                          ((TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *)(piVar4 + 1),param_1),
       bVar9)) break;
    pFVar18 = pFVar18 + 0x10;
  }
  __return_storage_ptr__->Usage = param_3;
  (__return_storage_ptr__->ConnectivityData).Object = *(FSkeletalMeshConnectivity **)pFVar18;
  pTVar6 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
  (__return_storage_ptr__->ConnectivityData).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (__return_storage_ptr__->ConnectivityData).Object;
  if ((pFVar7 != (FSkeletalMeshConnectivity *)0x0) &&
     ((__return_storage_ptr__->Usage).RequiresGpuAccess != false)) {
    LOCK();
    paVar1 = &pFVar7->GpuUserCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x0) {
      if (((pFVar7->Proxy).Ptr != (FSkeletalMeshConnectivityProxy *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Proxy == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMeshConnectivity.cpp"
                             ,0x73,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FSkeletalMeshConnectivityHandle *)(*pcVar8)();
        return pFVar12;
      }
      pFVar16 = ::operator_new(0x60);
      if (pFVar16 == (FSkeletalMeshConnectivityProxy *)0x0) {
        pFVar16 = (FSkeletalMeshConnectivityProxy *)0x0;
      }
      else {
        pFVar16->_padding_ = 0;
        pFVar16->_padding_ = 0;
        pFVar16->_padding_ = 0;
        pFVar16->_padding_ = 0;
        *(undefined8 *)&pFVar16->MaxAdjacentTriangleCount = 0;
        (pFVar16->AdjacencyResource)._padding_ = 0;
        (pFVar16->AdjacencyResource)._padding_ = 0;
        (pFVar16->AdjacencyResource)._padding_ = 0;
        *(undefined8 *)&(pFVar16->AdjacencyResource).bNeedsCPUAccess = 0;
        (pFVar16->AdjacencyBuffer).Reference = (FRHIBuffer *)0x0;
        (pFVar16->AdjacencySrv).Reference = (FRHIShaderResourceView *)0x0;
        pFVar16->GpuMemoryUsage = 0;
        FRenderResource::FRenderResource((FRenderResource *)pFVar16);
        pFVar16->MaxAdjacentTriangleCount = 8;
        pFVar16->GpuMemoryUsage = 0;
        pFVar16->_padding_ = (longlong)&___7FSkeletalMeshConnectivityProxy__6B_;
        (pFVar16->AdjacencyResource)._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
        (pFVar16->AdjacencyResource)._padding_ = 0;
        (pFVar16->AdjacencyResource)._padding_ = 0;
        (pFVar16->AdjacencyResource).bNeedsCPUAccess = false;
        (pFVar16->AdjacencyBuffer).Reference = (FRHIBuffer *)0x0;
        (pFVar16->AdjacencySrv).Reference = (FRHIShaderResourceView *)0x0;
      }
      pFVar19 = (pFVar7->Proxy).Ptr;
      if ((pFVar19 != pFVar16) &&
         ((pFVar7->Proxy).Ptr = pFVar16, pFVar19 != (FSkeletalMeshConnectivityProxy *)0x0)) {
        (**(code **)pFVar19->_padding_)(pFVar19,1);
      }
      bVar9 = FSkeletalMeshConnectivityProxy::Initialize((pFVar7->Proxy).Ptr,pFVar7);
      pFVar16 = (pFVar7->Proxy).Ptr;
      if (bVar9) {
        BeginInitResource((FRenderResource *)pFVar16,(FRenderCommandPipe *)0x0);
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
        return __return_storage_ptr__;
      }
      if (pFVar16 != (FSkeletalMeshConnectivityProxy *)0x0) {
        (pFVar7->Proxy).Ptr = (FSkeletalMeshConnectivityProxy *)0x0;
        (**(code **)pFVar16->_padding_)(pFVar16,1);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return __return_storage_ptr__;
}

// GetCachedSkinningData @ 149234aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSkeletalMeshSkinningDataHandle * __thiscall
FNDI_SkeletalMesh_GeneratedData::GetCachedSkinningData
          (FNDI_SkeletalMesh_GeneratedData *this,
          FSkeletalMeshSkinningDataHandle *__return_storage_ptr__,
          TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *param_1,
          FSkeletalMeshSkinningDataUsage param_2,bool param_3)

{
  FSkeletalMeshSkinningData *pFVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  FSkeletalMeshSkinningDataHandle *pFVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  int local_res8;
  FWeakObjectPtr local_res18 [2];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *local_48;
  TReferenceControllerBase<1> **local_40;
  
  pUVar6 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  if (pUVar6 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                       ,0x235,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSkeletalMeshSkinningDataHandle *)(*pcVar3)();
      return pFVar7;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&this->CachedSkinningDataGuard);
  local_res18[0] = param_1->WeakPtr;
  iVar5 = TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
                      *)&this->CachedSkinningData,
                     local_res18[0].ObjectSerialNumber ^ local_res18[0].ObjectIndex,
                     (TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr> *)local_res18);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (iVar5 != -1) {
    lVar8 = (longlong)iVar5 * 0x20 + *(longlong *)&this->CachedSkinningData;
    pTVar9 = (TReferenceControllerBase<1> *)(lVar8 + 8);
    if (lVar8 == 0) {
      pTVar9 = pTVar10;
    }
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Usage = param_2;
      (__return_storage_ptr__->SkinningData).Object = (FSkeletalMeshSkinningData *)pTVar9->_padding_
      ;
      pTVar10 = *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount;
      (__return_storage_ptr__->SkinningData).SharedReferenceCount.ReferenceController = pTVar10;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar1 = (__return_storage_ptr__->SkinningData).Object;
      if (pFVar1 != (FSkeletalMeshSkinningData *)0x0) {
        FSkeletalMeshSkinningData::RegisterUser(pFVar1,__return_storage_ptr__->Usage,param_3);
      }
      ReleaseSRWLockShared((PSRWLOCK)&this->CachedSkinningDataGuard);
      return __return_storage_ptr__;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->CachedSkinningDataGuard);
  AcquireSRWLockExclusive((PSRWLOCK)&this->CachedSkinningDataGuard);
  pTStack_50 = ::operator_new(0x90);
  if (pTStack_50 == (TReferenceControllerBase<1> *)0x0) {
    local_58 = ___xmm_00000000000000000000000000000010;
    pTStack_50 = _UNK_150651568;
  }
  else {
    pTStack_50->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_50->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_50->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSkeletalMeshSkinningData___00_SharedPointerInternals__6B_
    ;
    FVar2 = param_1->WeakPtr;
    *(undefined1 *)&pTStack_50[1]._padding_ = 0;
    pTStack_50[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_50[3]._padding_ = 0;
    pTStack_50[2]._padding_ = (longlong)FVar2;
    pTStack_50[2].SharedReferenceCount = (atomic<int>)0x3d086595;
    pTStack_50[2].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_50[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_50[4]._padding_ = 0;
    pTStack_50[4].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[4].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_50[5]._padding_ = 0;
    pTStack_50[5].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[5].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_50[6]._padding_ = 0;
    pTStack_50[6].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[6].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_50[7]._padding_ = 0;
    pTStack_50[7].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[7].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_50[8]._padding_ = 0;
    *(undefined1 *)&pTStack_50[8].SharedReferenceCount = 0;
    if (pTStack_50 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FSkeletalMeshSkinningDataHandle *)(*pcVar3)();
        return pFVar7;
      }
    }
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
    pTVar10 = pTStack_50;
    local_58 = pTStack_50 + 1;
  }
  local_40 = &local_58;
  local_48 = param_1;
  TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_const_&,TSharedPtr<FSkeletalMeshSkinningData,1>_&&>_>
            ((TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
              *)&this->CachedSkinningData,
             (TPairInitializer<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_const_&,TSharedPtr<FSkeletalMeshSkinningData,1>_&&>
              *)&local_res8,(bool *)&local_48);
  lVar8 = *(longlong *)&this->CachedSkinningData;
  __return_storage_ptr__->Usage = param_2;
  (__return_storage_ptr__->SkinningData).Object =
       *(FSkeletalMeshSkinningData **)((longlong)local_res8 * 0x20 + 8 + lVar8);
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)local_res8 * 0x20 + 0x10 + lVar8);
  (__return_storage_ptr__->SkinningData).SharedReferenceCount.ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = (__return_storage_ptr__->SkinningData).Object;
  if (pFVar1 != (FSkeletalMeshSkinningData *)0x0) {
    FSkeletalMeshSkinningData::RegisterUser(pFVar1,__return_storage_ptr__->Usage,param_3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->CachedSkinningDataGuard);
  return __return_storage_ptr__;
}

// GetCachedUvMapping @ 149234d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTypedMeshUvMappingHandle<FSkeletalMeshUvMapping> * __thiscall
FNDI_SkeletalMesh_GeneratedData::GetCachedUvMapping
          (FNDI_SkeletalMesh_GeneratedData *this,
          TTypedMeshUvMappingHandle<FSkeletalMeshUvMapping> *__return_storage_ptr__,
          TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *param_1,int param_2,int param_3,
          FMeshUvMappingUsage param_4,bool param_5)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  TTypedMeshUvMappingHandle<FSkeletalMeshUvMapping> *pTVar6;
  TSharedPtr<FSkeletalMeshUvMapping,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSharedReferencer<1> FVar9;
  FScriptContainerElement *pFVar10;
  TArray<TSharedPtr<FSkeletalMeshUvMapping,1>,TSizedDefaultAllocator<32>_> *this_00;
  int local_res20 [2];
  TReferenceControllerBase<1> *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  TSharedPtr<FMeshUvMapping,1> local_98;
  TSharedPtr<FMeshUvMapping,1> local_88;
  TSharedPtr<FMeshUvMapping,1> local_78;
  <lambda_1> local_68;
  <lambda_1> local_48;
  
  local_res20[0] = param_2;
  pUVar5 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  if ((pUVar5 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshObject.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                         ,0x2cf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TTypedMeshUvMappingHandle<FSkeletalMeshUvMapping> *)(*pcVar2)();
    return pTVar6;
  }
  bVar3 = FSkeletalMeshUvMapping::IsValidMeshObject(param_1,local_res20[0],param_3);
  if (bVar3) {
    SRWLock = &this->CachedUvMappingGuard;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    local_68.InLodIndex = local_res20;
    local_68.InUvSetIndex = &param_3;
    this_00 = &this->CachedUvMapping;
    local_68.MeshObject = param_1;
    pTVar7 = TArray<TSharedPtr<FSkeletalMeshUvMapping,1>,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FNDI_SkeletalMesh_GeneratedData::GetCachedUvMapping_::__l2::<lambda_1>_>
                       (this_00,&local_68);
    if (pTVar7 == (TSharedPtr<FSkeletalMeshUvMapping,1> *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      local_48.InLodIndex = local_res20;
      local_48.InUvSetIndex = &param_3;
      local_48.MeshObject = param_1;
      pTVar7 = TArray<TSharedPtr<FSkeletalMeshUvMapping,1>,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FNDI_SkeletalMesh_GeneratedData::GetCachedUvMapping_::__l2::<lambda_1>_>
                         (this_00,&local_48);
      if (pTVar7 == (TSharedPtr<FSkeletalMeshUvMapping,1> *)0x0) {
        pTVar8 = ::operator_new(0x60);
        FVar9.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
          local_a8 = ___xmm_00000000000000000000000000000010;
          pTStack_a0 = _UNK_150651568;
        }
        else {
          pTVar8->SharedReferenceCount = (atomic<int>)0x1;
          pTVar8->WeakReferenceCount = (atomic<int>)0x1;
          pTVar8->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFSkeletalMeshUvMapping___00_SharedPointerInternals__6B_
          ;
          FSkeletalMeshUvMapping::FSkeletalMeshUvMapping
                    ((FSkeletalMeshUvMapping *)(pTVar8 + 1),
                     (TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>)param_1->WeakPtr,local_res20[0],
                     param_3);
          local_a8 = pTVar8 + 1;
          if ((local_a8 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TTypedMeshUvMappingHandle<FSkeletalMeshUvMapping> *)(*pcVar2)();
            return pTVar6;
          }
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
          FVar9.ReferenceController = pTVar8;
          pTStack_a0 = pTVar8;
        }
        pFVar10 = (this_00->AllocatorInstance).Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 <
             pFVar10 + (longlong)(this->CachedUvMapping).ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TTypedMeshUvMappingHandle<FSkeletalMeshUvMapping> *)(*pcVar2)();
          return pTVar6;
        }
        iVar4 = (this->CachedUvMapping).ArrayNum;
        piVar1 = &(this->CachedUvMapping).ArrayMax;
        if (iVar4 == *piVar1) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&this_00->AllocatorInstance,piVar1);
        }
        (this->CachedUvMapping).ArrayNum = iVar4 + 1;
        pFVar10 = (this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(TReferenceControllerBase<1> **)pFVar10 = local_a8;
        *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTStack_a0;
        pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
        local_a8 = (TReferenceControllerBase<1> *)0x0;
        local_78.Object = *(FMeshUvMapping **)pFVar10;
        local_78.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar10 + 8);
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FMeshUvMappingHandleBase::FMeshUvMappingHandleBase
                  ((FMeshUvMappingHandleBase *)__return_storage_ptr__,param_4,&local_78,param_5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_a0);
      }
      else {
        local_88.Object = (FMeshUvMapping *)pTVar7->Object;
        local_88.SharedReferenceCount.ReferenceController =
             (pTVar7->SharedReferenceCount).ReferenceController;
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FMeshUvMappingHandleBase::FMeshUvMappingHandleBase
                  ((FMeshUvMappingHandleBase *)__return_storage_ptr__,param_4,&local_88,param_5);
        FVar9.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    else {
      local_98.Object = (FMeshUvMapping *)pTVar7->Object;
      local_98.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FMeshUvMappingHandleBase::FMeshUvMappingHandleBase
                ((FMeshUvMappingHandleBase *)__return_storage_ptr__,param_4,&local_98,param_5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  else {
    *(undefined4 *)&__return_storage_ptr__->field_0x2 = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x6 = 0;
    *(undefined2 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  return __return_storage_ptr__;
}

// Tick @ 14924fcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDI_SkeletalMesh_GeneratedData::Tick
          (FNDI_SkeletalMesh_GeneratedData *this,ETickingGroup param_1,float param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FNDI_SkeletalMesh_GeneratedData *pFVar9;
  TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
  *this_00;
  TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSkel_PreSkin> FVar15;
  UObject *pUVar16;
  ForElementType<FSkeletalMeshSkinningData_*> FVar17;
  FWeakObjectPtr FVar18;
  ForElementType<int> FVar19;
  byte bVar20;
  longlong lVar21;
  uint uVar22;
  ForElementType<FSkeletalMeshSkinningData_*> FVar23;
  ulonglong uVar24;
  TArray<TSharedPtr<FSkeletalMeshConnectivity,1>,TSizedDefaultAllocator<32>_> *this_01;
  ETickingGroup EVar25;
  uint uVar26;
  int *piVar27;
  ulonglong uVar29;
  uint uVar30;
  int iVar31;
  undefined1 *puVar32;
  int iVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  float local_res18 [4];
  undefined1 auStackY_678 [32];
  <lambda_1> local_617;
  undefined1 local_616;
  undefined1 local_615;
  uint local_614;
  uint local_610 [2];
  FWeakObjectPtr local_608;
  FNDI_SkeletalMesh_GeneratedData *local_600;
  ETickingGroup local_5f8;
  FName local_5f0;
  FColor_u_0 local_5e8 [2];
  int local_5e0;
  uint uStack_5dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5d8;
  uint local_5d0;
  uint uStack_5cc;
  uint uStack_5c8;
  undefined4 uStack_5c4;
  TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
  *local_5c0;
  undefined8 uStack_5b8;
  TBitArray<FDefaultBitArrayAllocator> *local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  int iStack_598;
  undefined4 uStack_594;
  FName local_590;
  TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
  *local_588;
  FName local_580;
  int local_570;
  int local_56c;
  FWeakObjectPtr local_568;
  FPlatformRWLock *local_560;
  TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
  *local_558;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_550;
  undefined8 uStack_530;
  ForElementType<FSkeletalMeshSkinningData_*> *local_528;
  float *local_520;
  TArrayView<std::nullptr_t,int> local_518;
  code *local_508;
  ForElementType<FSkeletalMeshSkinningData_*> **local_500;
  FName local_4f8;
  TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
  *local_4f0;
  undefined8 uStack_4e8;
  TBitArray<FDefaultBitArrayAllocator> *local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined4 local_4a4;
  ForElementType<int> local_498;
  int local_410;
  int local_40c;
  ForElementType<int> local_408;
  int local_380;
  int local_37c;
  ForElementType<FSkeletalMeshSkinningData_*> local_378;
  int local_270;
  int local_26c;
  ForElementType<FSkeletalMeshSkinningData_*> local_268;
  int local_160;
  int local_15c;
  ForElementType<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_> local_158;
  int local_50;
  int local_4c;
  ulonglong local_48;
  ulonglong uVar28;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_678;
  local_res18[0] = param_2;
  local_600 = this;
  local_5f8 = param_1;
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                          ,0x24a,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar31 = 0;
  iVar33 = 0;
  FVar15 = StatPtr_STAT_NiagaraSkel_PreSkin;
  if (StatPtr_STAT_NiagaraSkel_PreSkin == (FThreadSafeStaticStat<FStat_STAT_NiagaraSkel_PreSkin>)0x0
     ) {
    pFVar14 = ::FName::FName(&local_4f8,"STAT_NiagaraSkel_PreSkin");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSkel_PreSkin>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSkel_PreSkin,*pFVar14,
                        L"PreSkin","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar15;
  bVar12 = false;
  bVar8 = false;
  local_580.ComparisonIndex.Value = 0;
  local_580.Number = 0;
  bVar11 = false;
  bVar13 = false;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5e8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar12 = false;
      bVar8 = true;
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_590.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_590.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_590,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                   ,0x24b);
        bVar12 = true;
        bVar8 = true;
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_5f0 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar11 = true;
      goto LAB_14924fe72;
    }
  }
  bVar8 = bVar13;
  bVar12 = bVar11;
  bVar11 = false;
  local_5f0 = local_580;
LAB_14924fe72:
  local_560 = &this->CachedSkinningDataGuard;
  AcquireSRWLockExclusive((PSRWLOCK)local_560);
  uVar30 = *(int *)&(this->CachedSkinningData).field_0x8 -
           *(int *)&(this->CachedSkinningData).field_0x34;
  local_158.SecondaryData =
       (ForElementType<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_>)0x0;
  local_50 = 0;
  local_4c = 0x20;
  local_268.SecondaryData = (ForElementType<FSkeletalMeshSkinningData_*>)0x0;
  local_160 = 0;
  local_15c = 0x20;
  local_378.SecondaryData = (ForElementType<FSkeletalMeshSkinningData_*>)0x0;
  local_270 = 0;
  local_26c = 0x20;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
  }
  if (0x20 < (int)uVar30) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkeletalMeshSkinningData_*>_>
              (8,8,uVar30,&local_268,0,&local_15c);
  }
  uVar30 = *(int *)&(this->CachedSkinningData).field_0x8 -
           *(int *)&(this->CachedSkinningData).field_0x34;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
  }
  if (local_26c < (int)uVar30) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkeletalMeshSkinningData_*>_>
              (8,8,uVar30,&local_378,local_270,&local_26c);
  }
  pFVar9 = local_600;
  local_5c0 = (TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
               *)&this->CachedSkinningData;
  iVar4 = *(int *)&(this->CachedSkinningData).field_0x28;
  local_5b0 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedSkinningData).field_0x10;
  uVar30 = 1;
  uStack_5a8._4_4_ = iVar33;
  if (iVar4 != 0) {
    puVar34 = *(uint **)&(this->CachedSkinningData).field_0x20;
    if (puVar34 == (uint *)0x0) {
      puVar34 = (uint *)local_5b0;
    }
    uVar26 = *puVar34;
    iVar33 = 0;
    while (uVar26 == 0) {
      lVar21 = (longlong)iVar31;
      iVar33 = iVar33 + 0x20;
      iVar31 = iVar31 + 1;
      uStack_5a8._4_4_ = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar31) goto LAB_14924ffef;
      uVar26 = puVar34[lVar21 + 1];
    }
    uVar30 = -uVar26 & uVar26;
    uVar24 = (ulonglong)uVar30 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_570 = (int)lVar21;
    uStack_5a8._4_4_ = local_570 + -1 + iVar33;
    if (iVar4 < uStack_5a8._4_4_) {
      uStack_5a8._4_4_ = iVar4;
    }
  }
LAB_14924ffef:
  uVar26 = *(uint *)&(this->CachedSkinningData).field_0x28;
  bVar20 = (byte)uVar26 & 0x1f;
  iStack_598 = *(int *)&(this->CachedSkinningData).field_0x8 -
               *(int *)&(this->CachedSkinningData).field_0x34;
  iVar35 = (int)uVar26 >> 5;
  uVar22 = uVar26 & 0xffffffe0;
  puVar1 = &(local_600->CachedSkinningData).field_0x10;
  uStack_5dc = 1 << bVar20;
  uVar36 = -1 << bVar20;
  uStack_5b8 = CONCAT44(uVar30,iVar31);
  uStack_5a8._0_4_ = 0xffffffff;
  local_5a0._4_4_ = local_4a4;
  local_5a0._0_4_ = iVar33;
  TStack_550._padding_ = uStack_5b8;
  uStack_530 = CONCAT44(uStack_594,iStack_598);
  TStack_550.UnvisitedBitMask = 0xffffffff;
  TStack_550.CurrentBitIndex = uStack_5a8._4_4_;
  TStack_550.BaseBitIndex = iVar33;
  TStack_550._28_4_ = local_4a4;
  local_5e0 = iVar35;
  pTStack_5d8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_5d0 = uVar36;
  uStack_5cc = uVar26;
  uStack_5c8 = uVar22;
  local_588 = local_5c0;
  local_558 = local_5c0;
  TStack_550.Array = local_5b0;
  if ((((int)uVar26 < 0) || (iVar4 < (int)uVar26)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar30 = *(uint *)&(pFVar9->CachedSkinningData).field_0x28;
  if (uVar26 != uVar30) {
    puVar32 = *(undefined1 **)&(pFVar9->CachedSkinningData).field_0x20;
    if (puVar32 == (undefined1 *)0x0) {
      puVar32 = puVar1;
    }
    uVar36 = uVar36 & *(uint *)(puVar32 + (longlong)iVar35 * 4);
    while (uVar36 == 0) {
      uStack_5c8 = uVar22 + 0x20;
      local_5e0 = iVar35 + 1;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < local_5e0)
      goto LAB_14925013b;
      uVar36 = *(uint *)(puVar32 + (longlong)iVar35 * 4 + 4);
      local_5d0 = 0xffffffff;
      iVar35 = local_5e0;
      uVar22 = uStack_5c8;
    }
    uStack_5dc = -uVar36 & uVar36;
    uVar24 = (ulonglong)uStack_5dc * 2 + 1;
    lVar21 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_56c = (int)lVar21;
    uStack_5cc = local_56c + -1 + uVar22;
    if ((int)uVar30 < (int)uStack_5cc) {
LAB_14925013b:
      uStack_5cc = uVar30;
    }
  }
  uStack_5b8 = CONCAT44(uStack_5dc,local_5e0);
  uStack_5a8 = CONCAT44(uStack_5cc,local_5d0);
  local_5a0 = CONCAT44(uStack_5c4,uStack_5c8);
  local_5c0 = local_588;
  iStack_598 = *(int *)&(local_600->CachedSkinningData).field_0x8 -
               *(int *)&(local_600->CachedSkinningData).field_0x34;
  local_5b0 = pTStack_5d8;
  local_4f0 = local_588;
  uStack_4c8 = CONCAT44(uStack_594,iStack_598);
  local_4e0 = pTStack_5d8;
  uStack_4e8 = uStack_5b8;
  uStack_4d8 = uStack_5a8;
  local_4d0 = local_5a0;
  do {
    pTVar10 = local_558;
    if (*(int *)&(local_558->Elements).field_0x8 - *(int *)&(local_558->Elements).field_0x34 !=
        (int)uStack_530) {
      local_616 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_616);
    }
    iVar33 = local_50;
    this_00 = local_588;
    FVar5 = local_5f0;
    pFVar9 = local_600;
    if (((TStack_550.CurrentBitIndex == uStack_4d8._4_4_) && (TStack_550.Array == local_4e0)) &&
       (pTVar10 == local_4f0)) {
      FVar23 = (ForElementType<FSkeletalMeshSkinningData_*>)&local_158;
      if (local_158.SecondaryData !=
          (ForElementType<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_>)0x0) {
        FVar23 = (ForElementType<FSkeletalMeshSkinningData_*>)local_158.SecondaryData;
      }
      FVar17 = (ForElementType<FSkeletalMeshSkinningData_*>)
               ((longlong)FVar23 + (longlong)local_50 * 8);
      while( true ) {
        if (local_50 != iVar33) {
          local_617 = (<lambda_1>)0x0;
          `TCheckedPointerIterator<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_617);
        }
        if (FVar23 == FVar17) break;
        local_568 = *(FWeakObjectPtr *)FVar23;
        if (*(int *)&(pFVar9->CachedSkinningData).field_0x8 !=
            *(int *)&(pFVar9->CachedSkinningData).field_0x34) {
          TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr>_>
                    (this_00,local_568.ObjectSerialNumber ^ local_568.ObjectIndex,
                     (TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr> *)&local_568);
        }
        FVar23 = (ForElementType<FSkeletalMeshSkinningData_*>)((longlong)FVar23 + 8);
      }
      uVar29 = 0;
      uVar24 = uVar29;
      uVar28 = uVar29;
      if (0 < local_160) {
        do {
          uVar26 = (uint)uVar28;
          uVar30 = 0;
          if ((int)uVar26 < local_160) {
            uVar30 = ~uVar26 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar23 = (ForElementType<FSkeletalMeshSkinningData_*>)&local_268;
          if (local_268.SecondaryData != (ForElementType<FSkeletalMeshSkinningData_*>)0x0) {
            FVar23 = local_268.SecondaryData;
          }
          FSkeletalMeshSkinningData::Tick
                    (*(FSkeletalMeshSkinningData **)(uVar24 + (longlong)FVar23),local_res18[0],false
                    );
          uVar24 = uVar24 + 8;
          uVar28 = (ulonglong)(uVar26 + 1);
        } while ((int)(uVar26 + 1) < local_160);
      }
      if (local_270 != 0) {
        local_528 = &local_378;
        local_518.DataPtr = (void **)0x0;
        local_520 = local_res18;
        local_518.ArrayNum = 0;
        local_508 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNDI_SkeletalMesh_GeneratedData::Tick'::__l49::<lambda_1>,void,int>
                    ::Call;
        local_500 = &local_528;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",local_270,1,(TFunctionRef<void___cdecl(int)> *)&local_508,
                   local_617,None,&local_518);
      }
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar9->CachedUvMappingGuard);
      iVar33 = (pFVar9->CachedUvMapping).ArrayNum;
      local_498.SecondaryData = (ForElementType<int>)0x0;
      local_410 = 0;
      local_40c = 0x20;
      local_614 = 0;
      uVar30 = 0;
      uVar24 = uVar29;
      if (0 < iVar33) {
        do {
          uVar36 = (uint)uVar24;
          uVar26 = uVar30;
          if ((int)uVar36 < (pFVar9->CachedUvMapping).ArrayNum) {
            uVar26 = ~uVar36 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (pFVar9->CachedUvMapping).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar6 + (longlong)(int)uVar36 * 0x10) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar13 = FMeshUvMapping::CanBeDestroyed
                             (*(FMeshUvMapping **)(pFVar6 + (longlong)(int)uVar36 * 0x10));
          if (bVar13) {
            FVar19 = (ForElementType<int>)&local_498;
            if (local_498.SecondaryData != (ForElementType<int>)0x0) {
              FVar19 = local_498.SecondaryData;
            }
            if ((ulonglong)FVar19 <= &local_614) {
              FVar19 = (ForElementType<int>)&local_498;
              if (local_498.SecondaryData != (ForElementType<int>)0x0) {
                FVar19 = local_498.SecondaryData;
              }
              if ((&local_614 < (uint *)((longlong)FVar19 + (longlong)local_40c * 4)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar31 = local_410;
            if (local_410 == local_40c) {
              iVar31 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,&local_498,&local_40c);
            }
            local_410 = iVar31 + 1;
            FVar19 = (ForElementType<int>)&local_498;
            if (local_498.SecondaryData != (ForElementType<int>)0x0) {
              FVar19 = local_498.SecondaryData;
            }
            *(uint *)((longlong)FVar19 + (longlong)iVar31 * 4) = local_614;
          }
          local_614 = local_614 + 1;
          uVar24 = (ulonglong)local_614;
        } while ((int)local_614 < iVar33);
        bVar13 = local_410 == 0;
        if (!bVar13) {
          do {
            if ((bVar13 || local_410 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar33 = local_410 + -1;
            FVar19 = (ForElementType<int>)&local_498;
            if (local_498.SecondaryData != (ForElementType<int>)0x0) {
              FVar19 = local_498.SecondaryData;
            }
            uVar26 = *(uint *)((longlong)FVar19 + (longlong)iVar33 * 4);
            FVar19 = (ForElementType<int>)&local_498;
            if (local_498.SecondaryData != (ForElementType<int>)0x0) {
              FVar19 = local_498.SecondaryData;
            }
            pvVar3 = (void *)((longlong)FVar19 + (longlong)iVar33 * 4);
            iVar33 = (local_410 - iVar33) + -1;
            if (iVar33 != 0) {
              memmove(pvVar3,(void *)((longlong)pvVar3 + 4),(longlong)iVar33 << 2);
            }
            local_410 = local_410 + -1;
            uVar36 = uVar30;
            if ((int)uVar26 < (pFVar9->CachedUvMapping).ArrayNum) {
              uVar36 = ~uVar26 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            TArray<TSharedPtr<FSkeletalMeshUvMapping,1>,TSizedDefaultAllocator<32>_>::
            RemoveAtSwapImpl(&pFVar9->CachedUvMapping,uVar26);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&(pFVar9->CachedUvMapping).AllocatorInstance,
                       (pFVar9->CachedUvMapping).ArrayNum,&(pFVar9->CachedUvMapping).ArrayMax);
            bVar13 = local_410 == 0;
          } while (!bVar13);
        }
      }
      if (local_498.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_498.SecondaryData);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar9->CachedUvMappingGuard);
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar9->CachedConnectivityGuard);
      iVar33 = (pFVar9->CachedConnectivity).ArrayNum;
      local_408.SecondaryData = (ForElementType<int>)0x0;
      local_380 = 0;
      local_37c = 0x20;
      local_610[0] = 0;
      if (0 < iVar33) {
        this_01 = &pFVar9->CachedConnectivity;
        do {
          uVar36 = (uint)uVar29;
          uVar26 = uVar30;
          if ((int)uVar36 < (pFVar9->CachedConnectivity).ArrayNum) {
            uVar26 = ~uVar36 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (this_01->AllocatorInstance).Data;
          if ((*(longlong *)(pFVar6 + (longlong)(int)uVar36 * 0x10) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(int *)(*(longlong *)(pFVar6 + (longlong)(int)uVar36 * 0x10) + 0x18) < 1) {
            FVar19 = (ForElementType<int>)&local_408;
            if (local_408.SecondaryData != (ForElementType<int>)0x0) {
              FVar19 = local_408.SecondaryData;
            }
            if ((ulonglong)FVar19 <= local_610) {
              FVar19 = (ForElementType<int>)&local_408;
              if (local_408.SecondaryData != (ForElementType<int>)0x0) {
                FVar19 = local_408.SecondaryData;
              }
              if ((local_610 < (uint *)((longlong)FVar19 + (longlong)local_37c * 4)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar31 = local_380;
            if (local_380 == local_37c) {
              iVar31 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,&local_408,&local_37c);
            }
            local_380 = iVar31 + 1;
            FVar19 = (ForElementType<int>)&local_408;
            if (local_408.SecondaryData != (ForElementType<int>)0x0) {
              FVar19 = local_408.SecondaryData;
            }
            *(uint *)((longlong)FVar19 + (longlong)iVar31 * 4) = local_610[0];
          }
          local_610[0] = local_610[0] + 1;
          uVar29 = (ulonglong)local_610[0];
        } while ((int)local_610[0] < iVar33);
        bVar13 = local_380 == 0;
        if (!bVar13) {
          do {
            if ((bVar13 || local_380 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar33 = local_380 + -1;
            FVar19 = (ForElementType<int>)&local_408;
            if (local_408.SecondaryData != (ForElementType<int>)0x0) {
              FVar19 = local_408.SecondaryData;
            }
            uVar26 = *(uint *)((longlong)FVar19 + (longlong)iVar33 * 4);
            FVar19 = (ForElementType<int>)&local_408;
            if (local_408.SecondaryData != (ForElementType<int>)0x0) {
              FVar19 = local_408.SecondaryData;
            }
            pvVar3 = (void *)((longlong)FVar19 + (longlong)iVar33 * 4);
            iVar33 = (local_380 - iVar33) + -1;
            if (iVar33 != 0) {
              memmove(pvVar3,(void *)((longlong)pvVar3 + 4),(longlong)iVar33 << 2);
            }
            local_380 = local_380 + -1;
            uVar36 = uVar30;
            if ((int)uVar26 < (pFVar9->CachedConnectivity).ArrayNum) {
              uVar36 = ~uVar26 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            TArray<TSharedPtr<FSkeletalMeshConnectivity,1>,TSizedDefaultAllocator<32>_>::
            RemoveAtSwapImpl(this_01,uVar26);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&this_01->AllocatorInstance,(pFVar9->CachedConnectivity).ArrayNum,
                       &(pFVar9->CachedConnectivity).ArrayMax);
            bVar13 = local_380 == 0;
          } while (!bVar13);
        }
      }
      if (local_408.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_408.SecondaryData);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar9->CachedConnectivityGuard);
      if (local_378.SecondaryData != (ForElementType<FSkeletalMeshSkinningData_*>)0x0) {
        FMemory::Free((void *)local_378.SecondaryData);
      }
      if (local_268.SecondaryData != (ForElementType<FSkeletalMeshSkinningData_*>)0x0) {
        FMemory::Free((void *)local_268.SecondaryData);
      }
      if (local_158.SecondaryData !=
          (ForElementType<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_158.SecondaryData);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_560);
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) {
        FThreadStats::AddMessage(FVar5,CycleScopeEnd);
      }
      return;
    }
    FVar23 = (ForElementType<FSkeletalMeshSkinningData_*>)
             ((longlong)TStack_550.CurrentBitIndex * 0x20 + *(longlong *)&pTVar10->Elements);
    pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar23);
    EVar25 = local_5f8;
    if (local_5f8 == TG_PrePhysics) {
      if ((*(longlong *)((longlong)FVar23 + 8) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      **(undefined1 **)((longlong)FVar23 + 8) = 0;
    }
    if ((pUVar16 == (UObject *)0x0) ||
       ((*(longlong *)((longlong)FVar23 + 0x10) != 0 &&
        (*(int *)(*(longlong *)((longlong)FVar23 + 0x10) + 8) == 1)))) {
LAB_14925058a:
      FVar17 = (ForElementType<FSkeletalMeshSkinningData_*>)&local_158;
      if (local_158.SecondaryData !=
          (ForElementType<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_>)0x0) {
        FVar17 = (ForElementType<FSkeletalMeshSkinningData_*>)local_158.SecondaryData;
      }
      if ((ulonglong)FVar17 <= (ulonglong)FVar23) {
        FVar17 = (ForElementType<FSkeletalMeshSkinningData_*>)&local_158;
        if (local_158.SecondaryData !=
            (ForElementType<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_>)0x0) {
          FVar17 = (ForElementType<FSkeletalMeshSkinningData_*>)local_158.SecondaryData;
        }
        if (((ulonglong)FVar23 < (ulonglong)((longlong)FVar17 + (longlong)local_4c * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_>_>
                             (0x408,&local_158,&local_4c);
      }
      FVar17 = (ForElementType<FSkeletalMeshSkinningData_*>)&local_158;
      lVar21 = (longlong)local_50;
      FVar18 = *(FWeakObjectPtr *)FVar23;
      FVar23 = (ForElementType<FSkeletalMeshSkinningData_*>)local_158.SecondaryData;
      local_50 = local_50 + 1;
LAB_149250668:
      if (FVar23 != (ForElementType<FSkeletalMeshSkinningData_*>)0x0) {
        FVar17 = FVar23;
      }
      *(FWeakObjectPtr *)((longlong)FVar17 + lVar21 * 8) = FVar18;
    }
    else {
      if ((*(longlong *)((longlong)FVar23 + 8) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar21 = *(longlong *)((longlong)FVar23 + 8);
      if (*(int *)(lVar21 + 0x20) < 1) {
        iVar33 = *(int *)(lVar21 + 0x70);
        piVar27 = *(int **)(lVar21 + 0x68);
        piVar2 = piVar27 + (longlong)iVar33 * 0x12;
        while( true ) {
          if (*(int *)(lVar21 + 0x70) != iVar33) {
            local_615 = 0;
            `TCheckedPointerIterator<FSkeletalMeshSkinningData::FLODData_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(&local_615);
          }
          if (piVar27 == piVar2) goto LAB_14925058a;
          EVar25 = local_5f8;
          if (0 < *piVar27) break;
          piVar27 = piVar27 + 0x12;
        }
      }
      if ((*(longlong *)((longlong)FVar23 + 8) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (**(char **)((longlong)FVar23 + 8) != '\x01') {
        if (EVar25 != TG_LastDemotable) {
          bVar20 = pUVar16[1].field_0x19;
          if ((byte)pUVar16[1].field_0x19 < (byte)pUVar16[1].field_0x18) {
            bVar20 = pUVar16[1].field_0x18;
          }
          uVar26 = (uint)bVar20;
          uVar30 = uVar26;
          if (((pUVar16[0x45].field_0x1 & 0x20) != 0) && (uVar30 = 3, 3 < uVar26)) {
            uVar30 = uVar26;
          }
          uVar26 = 6;
          if (uVar30 + 1 < 6) {
            uVar26 = uVar30 + 1;
          }
          uVar30 = 0;
          if (uVar26 != 0) {
            uVar30 = uVar26;
          }
          if ((int)EVar25 < (int)uVar30) goto LAB_149250673;
        }
        if ((*(char **)((longlong)FVar23 + 8) == (char *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        **(undefined1 **)((longlong)FVar23 + 8) = 1;
        local_608 = *(FWeakObjectPtr *)((longlong)FVar23 + 8);
        if ((local_608 == (FWeakObjectPtr)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("SkinningDataPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                                ,0x27d,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)((longlong)local_608 + 0x24) < 1) {
          FVar23 = (ForElementType<FSkeletalMeshSkinningData_*>)&local_268;
          if (local_268.SecondaryData != (ForElementType<FSkeletalMeshSkinningData_*>)0x0) {
            FVar23 = local_268.SecondaryData;
          }
          if ((ulonglong)FVar23 <= &local_608) {
            FVar23 = (ForElementType<FSkeletalMeshSkinningData_*>)&local_268;
            if (local_268.SecondaryData != (ForElementType<FSkeletalMeshSkinningData_*>)0x0) {
              FVar23 = local_268.SecondaryData;
            }
            if ((&local_608 < (FWeakObjectPtr *)((longlong)FVar23 + (longlong)local_15c * 8)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (local_160 == local_15c) {
            local_160 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkeletalMeshSkinningData_*>_>
                                  (0x808,&local_268,&local_15c);
          }
          FVar17 = (ForElementType<FSkeletalMeshSkinningData_*>)&local_268;
          lVar21 = (longlong)local_160;
          FVar18 = local_608;
          FVar23 = local_268.SecondaryData;
          local_160 = local_160 + 1;
        }
        else {
          FVar23 = (ForElementType<FSkeletalMeshSkinningData_*>)&local_378;
          if (local_378.SecondaryData != (ForElementType<FSkeletalMeshSkinningData_*>)0x0) {
            FVar23 = local_378.SecondaryData;
          }
          if ((ulonglong)FVar23 <= &local_608) {
            FVar23 = (ForElementType<FSkeletalMeshSkinningData_*>)&local_378;
            if (local_378.SecondaryData != (ForElementType<FSkeletalMeshSkinningData_*>)0x0) {
              FVar23 = local_378.SecondaryData;
            }
            if ((&local_608 < (FWeakObjectPtr *)((longlong)FVar23 + (longlong)local_26c * 8)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (local_270 == local_26c) {
            local_270 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkeletalMeshSkinningData_*>_>
                                  (0x808,&local_378,&local_26c);
          }
          FVar17 = (ForElementType<FSkeletalMeshSkinningData_*>)&local_378;
          lVar21 = (longlong)local_270;
          FVar18 = local_608;
          FVar23 = local_378.SecondaryData;
          local_270 = local_270 + 1;
        }
        goto LAB_149250668;
      }
    }
LAB_149250673:
    TStack_550.UnvisitedBitMask = TStack_550.UnvisitedBitMask & ~TStack_550._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_550);
  } while( true );
}

