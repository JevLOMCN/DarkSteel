// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 4

// operator() @ 14c94ace0

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FTriIDBlockGrid::FTriIDBlockGrid'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForAnyElementType *pFVar6;
  
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 0x30)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = (longlong)param_1 * 4;
  pFVar6 = (ForAnyElementType *)((longlong)param_1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,*(int *)(lVar1 + *(longlong *)((longlong)this + 0x10)),pFVar6,(int *)(pFVar6 + 1),
             (int *)((longlong)&pFVar6[1].Data + 4));
  LOCK();
  *(undefined4 *)(lVar1 + *(longlong *)((longlong)this + 8)) = 0;
  UNLOCK();
  return;
}

// operator() @ 14c94adb0

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriIDBlockGrid::
FTriIDBlockGrid'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForAnyElementType *pFVar6;
  
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 0x30)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = (longlong)param_1 * 4;
  pFVar6 = (ForAnyElementType *)((longlong)param_1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,*(int *)(lVar1 + *(longlong *)((longlong)this + 0x10)),pFVar6,(int *)(pFVar6 + 1),
             (int *)((longlong)&pFVar6[1].Data + 4));
  LOCK();
  *(undefined4 *)(lVar1 + *(longlong *)((longlong)this + 8)) = 0;
  UNLOCK();
  return;
}

// GetOccupiedBlockIDs @ 14c97f7a0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FTriIDBlockGrid::GetOccupiedBlockIDs
          (FTriIDBlockGrid *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  longlong lVar12;
  uint local_38 [4];
  
  iVar1 = (this->TrisInBlock).ArrayNum;
  lVar12 = (longlong)iVar1;
  uVar11 = 0;
  uVar8 = 0;
  if (iVar1 < 1) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->TrisInBlock).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      if (*(int *)((this->TrisInBlock).AllocatorInstance.Data + lVar9 + 8) != 0) {
        uVar11 = uVar11 + 1;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (0 < (int)uVar11) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
  }
  piVar10 = &__return_storage_ptr__->ArrayMax;
  local_38[0] = 0;
  if (0 < iVar1) {
    do {
      uVar8 = local_38[0];
      uVar11 = 0;
      if ((int)local_38[0] < (this->TrisInBlock).ArrayNum) {
        uVar11 = ~local_38[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      if (*(int *)((this->TrisInBlock).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10 + 8) !=
          0) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)*piVar10 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == *piVar10) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,piVar10);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             local_38[0];
      }
      local_38[0] = local_38[0] + 1;
    } while ((int)local_38[0] < iVar1);
  }
  return __return_storage_ptr__;
}

// GetOccupiedBlockIDs @ 14c97f9e0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriIDBlockGrid::
GetOccupiedBlockIDs(FTriIDBlockGrid *this,
                   TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  longlong lVar12;
  uint local_38 [4];
  
  iVar1 = (this->TrisInBlock).ArrayNum;
  lVar12 = (longlong)iVar1;
  uVar11 = 0;
  uVar8 = 0;
  if (iVar1 < 1) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->TrisInBlock).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      if (*(int *)((this->TrisInBlock).AllocatorInstance.Data + lVar9 + 8) != 0) {
        uVar11 = uVar11 + 1;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (0 < (int)uVar11) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
  }
  piVar10 = &__return_storage_ptr__->ArrayMax;
  local_38[0] = 0;
  if (0 < iVar1) {
    do {
      uVar8 = local_38[0];
      uVar11 = 0;
      if ((int)local_38[0] < (this->TrisInBlock).ArrayNum) {
        uVar11 = ~local_38[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      if (*(int *)((this->TrisInBlock).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10 + 8) !=
          0) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)*piVar10 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == *piVar10) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,piVar10);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             local_38[0];
      }
      local_38[0] = local_38[0] + 1;
    } while ((int)local_38[0] < iVar1);
  }
  return __return_storage_ptr__;
}

