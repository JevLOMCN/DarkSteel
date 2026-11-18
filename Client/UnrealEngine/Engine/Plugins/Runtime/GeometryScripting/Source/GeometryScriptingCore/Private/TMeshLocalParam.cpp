// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// GetAllComputedUVs @ 14ce6a510

void __thiscall
UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::GetAllComputedUVs
          (TMeshLocalParam<UE::Geometry::FDynamicMesh3> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,double param_3,
          double param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  
  uVar2 = (this->AllocatedNodes).CurBlock;
  uVar10 = 0;
  uVar3 = (this->AllocatedNodes).CurBlockUsed;
  do {
    if (uVar10 == uVar2 * 0x200 + uVar3) {
      return;
    }
    pFVar9 = (FScriptContainerElement *)
             (*(longlong *)
               ((this->AllocatedNodes).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8)
             + (ulonglong)(uVar10 & 0x1ff) * 0x40);
    if (((pFVar9[0x20] != (FScriptContainerElement)0x0) &&
        (*(double *)(pFVar9 + 8) <= param_4 && param_4 != *(double *)(pFVar9 + 8))) &&
       (pFVar1 = pFVar9 + 0x10,
       *(double *)(pFVar9 + 0x18) * *(double *)(pFVar9 + 0x18) +
       *(double *)(pFVar9 + 0x10) * *(double *)(pFVar9 + 0x10) < param_3 * param_3)) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      if ((pFVar4 <= pFVar9) && (pFVar9 < pFVar4 + (longlong)param_1->ArrayMax * 4)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar8 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 4) =
           *(undefined4 *)pFVar9;
      pFVar4 = (param_2->AllocatorInstance).Data;
      if ((pFVar4 <= pFVar1) && (pFVar1 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == param_2->ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar8 + 1;
      uVar6 = *(undefined8 *)(pFVar9 + 0x18);
      pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar9 = *(undefined8 *)pFVar1;
      *(undefined8 *)(pFVar9 + 8) = uVar6;
    }
    uVar10 = uVar10 + 1;
  } while( true );
}

