// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// ApplyStampByTriangles @ 14cce2420

void __thiscall
FGroupEraseBrushOp::ApplyStampByTriangles
          (FGroupEraseBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  
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
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
  if (pUVar10 != (UObject *)0x0) {
    pUVar11 = Z_Construct_UClass_UGroupEraseBrushOpProps_NoRegister();
    iVar7 = (int)pUVar11->_padding_;
    if ((iVar7 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
        &pUVar11->_padding_)) goto LAB_14cce24d7;
  }
  pUVar10 = (UObject *)0x0;
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14cce24d7:
  iVar7 = (**(code **)(*(longlong *)pUVar10 + 0x300))(pUVar10);
  cVar2 = pUVar10[4].field_0x1c;
  UE::Core::Private::Function::CheckCallable(*(void **)&pUVar10[4].field_0x20);
  pcVar5 = *(code **)&pUVar10[4].field_0x20;
  plVar13 = (longlong *)&pUVar10[5].field_0x8;
  if (*(longlong **)&pUVar10[5].field_0x20 != (longlong *)0x0) {
    plVar13 = *(longlong **)&pUVar10[5].field_0x20;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  iVar8 = (*pcVar5)(uVar12);
  uVar17 = 0;
  iVar4 = param_3->ArrayNum;
  lVar15 = 0;
  if (0 < (longlong)iVar4) {
    do {
      uVar16 = ~uVar17 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar17 < param_3->ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = *(uint *)((param_3->AllocatorInstance).Data + lVar15 * 4);
      if ((param_1->TriangleGroups).bIsSet == false) {
        iVar14 = -1;
      }
      else {
        if ((-1 < (int)uVar9) &&
           ((int)uVar9 <
            (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar1 = (ulonglong)(uVar9 >> 9) * 8;
          sVar3 = *(short *)(*(longlong *)
                              ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                              + lVar1) + (ulonglong)(uVar9 & 0x1ff) * 2);
          if ((sVar3 != 0) && (sVar3 != -1)) {
            iVar14 = *(int *)(*(longlong *)
                               ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                               lVar1) + (ulonglong)(uVar9 & 0x1ff) * 4);
            goto LAB_14cce2626;
          }
        }
        iVar14 = 0;
      }
LAB_14cce2626:
      if (cVar2 == '\0') {
        uVar9 = 0;
        if ((int)uVar17 < param_4->ArrayNum) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(int *)((param_4->AllocatorInstance).Data + lVar15 * 4) = iVar7;
      }
      else {
        uVar9 = 0;
        if ((int)uVar17 < param_4->ArrayNum) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (iVar14 == iVar8) {
          iVar14 = iVar7;
        }
        *(int *)((param_4->AllocatorInstance).Data + lVar15 * 4) = iVar14;
      }
      uVar17 = uVar17 + 1;
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar4);
  }
  return;
}

