// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// GetAttribute @ 14ccfd8c0

TUniquePtr<IMeshVertexAttributeAdapter,TDefaultDelete<IMeshVertexAttributeAdapter>_> __thiscall
FDynamicMeshVertexAttributeSource::GetAttribute
          (FDynamicMeshVertexAttributeSource *this,FName param_1)

{
  FDynamicMeshAttributeSet *this_00;
  FDynamicMesh3 *pFVar1;
  int iVar2;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong in_R8;
  
  this_00 = (this->Mesh->AttributeSet).Ptr;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    iVar2 = (**(code **)(this_00->_padding_ + 0xd8))(this_00);
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        pTVar3 = UE::Geometry::FDynamicMeshAttributeSet::GetWeightLayer(this_00,iVar5);
        if (pTVar3->_padding_ == in_R8) {
          puVar4 = ::operator_new(0x18);
          if (puVar4 != (undefined8 *)0x0) {
            pFVar1 = this->Mesh;
            *puVar4 = &___7FDynamicMeshVertexAttributeAdapter__6B_;
            puVar4[1] = pFVar1;
            puVar4[2] = pTVar3;
            *(undefined8 **)param_1 = puVar4;
            return (TUniquePtr<IMeshVertexAttributeAdapter,TDefaultDelete<IMeshVertexAttributeAdapter>_>
                    )param_1;
          }
          *(undefined8 *)param_1 = 0;
          return (TUniquePtr<IMeshVertexAttributeAdapter,TDefaultDelete<IMeshVertexAttributeAdapter>_>
                  )param_1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<IMeshVertexAttributeAdapter,TDefaultDelete<IMeshVertexAttributeAdapter>_>)
         param_1;
}

// GetAttributeElementNum @ 14ccfda30

int __thiscall
FDynamicMeshVertexAttributeSource::GetAttributeElementNum(FDynamicMeshVertexAttributeSource *this)

{
  return (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
         (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
}

// GetAttributeList @ 14ccfda80

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FDynamicMeshVertexAttributeSource::GetAttributeList
          (FDynamicMeshVertexAttributeSource *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FDynamicMeshAttributeSet *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  longlong local_18 [2];
  
  iVar9 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  this_00 = (this->Mesh->AttributeSet).Ptr;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    uVar5 = (**(code **)(this_00->_padding_ + 0xd8))(this_00);
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if (*piVar1 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar5,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    if (0 < (int)uVar5) {
      do {
        pTVar7 = UE::Geometry::FDynamicMeshAttributeSet::GetWeightLayer(this_00,iVar9);
        local_18[0] = pTVar7->_padding_;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar8;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        iVar9 = iVar9 + 1;
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_18[0];
      } while (iVar9 < (int)uVar5);
    }
  }
  return __return_storage_ptr__;
}

