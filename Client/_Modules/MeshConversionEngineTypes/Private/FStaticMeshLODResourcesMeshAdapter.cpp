// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversionEngineTypes
// Functions: 1

// FStaticMeshLODResourcesMeshAdapter @ 14ca349b0

FStaticMeshLODResourcesMeshAdapter * __thiscall
FStaticMeshLODResourcesMeshAdapter::FStaticMeshLODResourcesMeshAdapter
          (FStaticMeshLODResourcesMeshAdapter *this,FStaticMeshLODResources *param_1)

{
  TArray<FStaticMeshSection_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  FStaticMeshLODResourcesMeshAdapter *pFVar12;
  ulonglong uVar13;
  FStaticMeshSectionArray *pFVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 local_res10 [8];
  uint local_res18;
  FStaticMeshSectionArray *local_48 [2];
  
  this->Mesh = param_1;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  pTVar1 = &this->ValidSections;
  piVar2 = &(this->ValidSections).ArrayMax;
  pTVar3 = &this->TriangleOffsetArray;
  (this->BuildScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BuildScale).field0_0x0._s_0.Y = (double)uVar9;
  piVar4 = &(this->TriangleOffsetArray).ArrayMax;
  piVar5 = &this->NumTriangles;
  (this->BuildScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->InvBuildScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->InvBuildScale).field0_0x0._s_0.Y = (double)uVar9;
  (this->InvBuildScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->bScaleNormals = false;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ValidSections).ArrayNum = 0;
  *piVar2 = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->TriangleOffsetArray).ArrayNum = 0;
  *piVar4 = 0;
  *piVar5 = 0;
  uVar15 = *(int *)&(param_1->Sections).field_0x28 + 1;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (*piVar4 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&pTVar3->AllocatorInstance,(this->TriangleOffsetArray).ArrayNum,piVar4);
  }
  uVar15 = *(uint *)&(param_1->Sections).field_0x28;
  if (-1 < (int)uVar15) {
    if (*piVar2 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar15,&pTVar1->AllocatorInstance,(this->ValidSections).ArrayNum,piVar2);
    }
    local_res18 = *(uint *)&(param_1->Sections).field_0x28;
    uVar13 = (ulonglong)(int)local_res18;
    pFVar14 = *(FStaticMeshSectionArray **)&(param_1->Sections).field_0x20;
    if (pFVar14 == (FStaticMeshSectionArray *)0x0) {
      pFVar14 = &param_1->Sections;
    }
    lVar16 = uVar13 * 0x1c;
    puVar8 = &pFVar14->field_0x0;
    while( true ) {
      if (*(int *)&(param_1->Sections).field_0x28 != (int)uVar13) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FStaticMeshSection_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      pFVar6 = (pTVar3->AllocatorInstance).Data;
      if (pFVar14 == (FStaticMeshSectionArray *)(puVar8 + lVar16)) break;
      if ((pFVar6 <= piVar5) && (piVar5 < pFVar6 + (longlong)*piVar4 * 4)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          pFVar12 = (FStaticMeshLODResourcesMeshAdapter *)(*pcVar7)();
          return pFVar12;
        }
      }
      iVar11 = (this->TriangleOffsetArray).ArrayNum;
      if (iVar11 == *piVar4) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar3->AllocatorInstance,piVar4);
      }
      (this->TriangleOffsetArray).ArrayNum = iVar11 + 1;
      *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 4) = *piVar5;
      *piVar5 = *piVar5 + *(int *)&pFVar14->field_0x8;
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      local_48[0] = pFVar14;
      if ((pFVar6 <= (FScriptContainerElement *)local_48) &&
         ((FScriptContainerElement *)local_48 < pFVar6 + (longlong)*piVar2 * 8)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          pFVar12 = (FStaticMeshLODResourcesMeshAdapter *)(*pcVar7)();
          return pFVar12;
        }
      }
      iVar11 = (this->ValidSections).ArrayNum;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      pFVar14 = (FStaticMeshSectionArray *)&pFVar14->field_0x1c;
      (this->ValidSections).ArrayNum = iVar11 + 1;
      *(FStaticMeshSectionArray **)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8) =
           local_48[0];
      uVar13 = (ulonglong)local_res18;
    }
    if ((pFVar6 <= piVar5) && (piVar5 < pFVar6 + (longlong)*piVar4 * 4)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FStaticMeshLODResourcesMeshAdapter *)(*pcVar7)();
        return pFVar12;
      }
    }
    iVar11 = (this->TriangleOffsetArray).ArrayNum;
    if (iVar11 == *piVar4) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar3->AllocatorInstance,piVar4);
    }
    (this->TriangleOffsetArray).ArrayNum = iVar11 + 1;
    *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 4) = *piVar5;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
}

