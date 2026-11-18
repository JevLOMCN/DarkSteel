// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// ApplyStampByTriangles @ 14cce2710

void __thiscall
FGroupPaintBrushOp::ApplyStampByTriangles
          (FGroupPaintBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x8);
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5139374200154226864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                         ,0xb0,"PropertySet.IsValid()"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
  if (pUVar9 != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_UGroupPaintBrushOpProps_NoRegister();
    iVar4 = (int)pUVar10->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar10->_padding_)) goto LAB_14cce27c6;
  }
  pUVar9 = (UObject *)0x0;
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14cce27c6:
  uVar7 = (**(code **)(*(longlong *)pUVar9 + 0x300))(pUVar9);
  cVar2 = pUVar9[4].field_0x1c;
  lVar12 = 0;
  iVar4 = param_3->ArrayNum;
  uVar11 = 0;
  if (0 < (longlong)iVar4) {
    do {
      uVar13 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < param_3->ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = *(uint *)((param_3->AllocatorInstance).Data + lVar12 * 4);
      if ((param_1->TriangleGroups).bIsSet == false) {
        iVar14 = -1;
      }
      else {
        if ((-1 < (int)uVar8) &&
           ((int)uVar8 <
            (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar1 = (ulonglong)(uVar8 >> 9) * 8;
          sVar3 = *(short *)(*(longlong *)
                              ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                              + lVar1) + (ulonglong)(uVar8 & 0x1ff) * 2);
          if ((sVar3 != 0) && (sVar3 != -1)) {
            iVar14 = *(int *)(*(longlong *)
                               ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                               lVar1) + (ulonglong)(uVar8 & 0x1ff) * 4);
            goto LAB_14cce28f0;
          }
        }
        iVar14 = 0;
      }
LAB_14cce28f0:
      if ((cVar2 == '\0') || (iVar14 == 0)) {
        uVar8 = 0;
        if ((int)uVar11 < param_4->ArrayNum) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)((param_4->AllocatorInstance).Data + lVar12 * 4) = uVar7;
      }
      else {
        uVar8 = 0;
        if ((int)uVar11 < param_4->ArrayNum) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(int *)((param_4->AllocatorInstance).Data + lVar12 * 4) = iVar14;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar4);
  }
  return;
}

