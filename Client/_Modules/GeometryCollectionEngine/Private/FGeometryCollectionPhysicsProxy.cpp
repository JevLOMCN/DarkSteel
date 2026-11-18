// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 3

// FindInternalClusterChildrenTransformIndices_External @ 146372080

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FGeometryCollectionPhysicsProxy::FindInternalClusterChildrenTransformIndices_External
          (FGeometryCollectionPhysicsProxy *this,FGeometryCollectionItemIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined4 in_register_00000014;
  undefined1 *puVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  
  if (-2 < *(int *)CONCAT44(in_register_00000014,param_1.ItemIndex)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5275234534101614158>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\GeometryCollectionPhysicsProxy.h"
                       ,0x1b2,"ItemIndex.IsInternalCluster()");
    if (!bVar2) {
      return (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    }
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  uVar7 = *(int *)CONCAT44(in_register_00000014,param_1.ItemIndex) + 0x80000000;
  pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  pTVar4 = pTVar8;
  if (*(int *)&(this->InternalClusterUniqueIdxToChildrenTransformIndices).field_0x8 !=
      *(int *)&(this->InternalClusterUniqueIdxToChildrenTransformIndices).field_0x34) {
    puVar6 = *(undefined1 **)&(this->InternalClusterUniqueIdxToChildrenTransformIndices).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->InternalClusterUniqueIdxToChildrenTransformIndices).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->InternalClusterUniqueIdxToChildrenTransformIndices).
                                        field_0x48 - 1U & uVar7) * 4);
    if (iVar3 != -1) {
      do {
        pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar3 * 0x20 +
                 *(longlong *)&this->InternalClusterUniqueIdxToChildrenTransformIndices);
        if (*(uint *)&(pTVar4->AllocatorInstance).Data == uVar7) break;
        iVar3 = pTVar4[1].ArrayNum;
        pTVar4 = pTVar8;
      } while (iVar3 != -1);
    }
  }
  pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar4->ArrayNum;
  if (pTVar4 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar8;
  }
  return pTVar5;
}

// GetFromParticleToTransformIndex @ 1463751d0

int __thiscall
FGeometryCollectionPhysicsProxy::GetFromParticleToTransformIndex
          (FGeometryCollectionPhysicsProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->FromParticleToTransformIndex).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FromParticleToTransformIndex.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\GeometryCollectionPhysicsProxy.h"
                       ,0x240,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->FromParticleToTransformIndex).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->FromParticleToTransformIndex).AllocatorInstance.Data +
                 (longlong)param_1 * 4);
}

// GetUnorderedParticles_Internal @ 14637c970

TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
__thiscall
FGeometryCollectionPhysicsProxy::GetUnorderedParticles_Internal
          (FGeometryCollectionPhysicsProxy *this,
          TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->SolverParticleHandles).ArrayNum;
  _Src = (this->SolverParticleHandles).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

