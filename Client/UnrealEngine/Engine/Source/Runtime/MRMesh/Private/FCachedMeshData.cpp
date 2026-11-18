// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 1

// Recycle @ 146c6c9b0

void __thiscall
FMockDataMeshTrackerImpl::FCachedMeshData::Recycle
          (FCachedMeshData *this,TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FMockDataMeshTrackerImpl *pFVar3;
  TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  pFVar3 = this->Owner;
  this->Owner = (FMockDataMeshTrackerImpl *)0x0;
  this->BrickId = 0;
  piVar1 = &(this->OffsetVertices).ArrayMax;
  (this->OffsetVertices).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->OffsetVertices).AllocatorInstance,0,piVar1);
  }
  (this->WorldVertices).ArrayNum = 0;
  if ((this->WorldVertices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->WorldVertices).AllocatorInstance,0,&(this->WorldVertices).ArrayMax);
  }
  (this->Triangles).ArrayNum = 0;
  if ((this->Triangles).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Triangles).AllocatorInstance,0,&(this->Triangles).ArrayMax);
  }
  (this->Normals).ArrayNum = 0;
  if ((this->Normals).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Normals).AllocatorInstance,0,&(this->Normals).ArrayMax);
  }
  (this->UV0).ArrayNum = 0;
  if ((this->UV0).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->UV0).AllocatorInstance,0,&(this->UV0).ArrayMax);
  }
  (this->VertexColors).ArrayNum = 0;
  if ((this->VertexColors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->VertexColors).AllocatorInstance,0,&(this->VertexColors).ArrayMax);
  }
  (this->Tangents).ArrayNum = 0;
  if ((this->Tangents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Tangents).AllocatorInstance,0,&(this->Tangents).ArrayMax);
  }
  (this->Confidence).ArrayNum = 0;
  if ((this->Confidence).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Confidence).AllocatorInstance,0,&(this->Confidence).ArrayMax);
  }
  if (pFVar3 != (FMockDataMeshTrackerImpl *)0x0) {
    lpCriticalSection = &pFVar3->FreeCachedMeshDatasMutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = &pFVar3->FreeCachedMeshDatas;
    pTVar4 = (TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)
             (pTVar2->AllocatorInstance).Data;
    if ((pTVar4 <= param_1) && (param_1 < pTVar4 + (pFVar3->FreeCachedMeshDatas).ArrayMax)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (pFVar3->FreeCachedMeshDatas).ArrayNum;
    piVar1 = &(pFVar3->FreeCachedMeshDatas).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (pFVar3->FreeCachedMeshDatas).ArrayNum = iVar8 + 1;
    pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(FCachedMeshData **)pFVar9 = param_1->Object;
    pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

