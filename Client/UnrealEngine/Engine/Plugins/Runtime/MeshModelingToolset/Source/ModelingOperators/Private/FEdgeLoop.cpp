// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// GetVertices<UE::Math::TVector<double>_> @ 14c942dd0

void __thiscall
UE::Geometry::FEdgeLoop::GetVertices<UE::Math::TVector<double>_>
          (FEdgeLoop *this,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar13 = (longlong)(this->Vertices).ArrayNum;
  uVar12 = 0;
  if (0 < lVar13) {
    lVar11 = 0;
    do {
      pFVar2 = this->Mesh;
      uVar8 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar8 = *(uint *)((this->Vertices).AllocatorInstance.Data + lVar11 * 4);
      uVar10 = (ulonglong)(uVar8 & 0x1ff);
      lVar4 = *(longlong *)
               ((pFVar2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8);
      puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x18);
      local_38 = *puVar1;
      uStack_30 = puVar1[1];
      local_28 = *(undefined8 *)(lVar4 + 0x10 + uVar10 * 0x18);
      if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_1->ArrayMax * 0x18)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == param_1->ArrayMax) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      uVar12 = uVar12 + 1;
      param_1->ArrayNum = iVar9 + 1;
      lVar11 = lVar11 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar3 = pFVar5 + (longlong)iVar9 * 0x18;
      *(undefined8 *)pFVar3 = local_38;
      *(undefined8 *)(pFVar3 + 8) = uStack_30;
      *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x18 + 0x10) = local_28;
    } while (lVar11 < lVar13);
  }
  return;
}

