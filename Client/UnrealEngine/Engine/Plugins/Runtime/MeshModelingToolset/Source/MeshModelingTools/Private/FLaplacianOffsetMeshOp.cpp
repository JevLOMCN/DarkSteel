// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// CalculateOffset @ 14cce7e70

void __thiscall
UE::Geometry::FLaplacianOffsetMeshOp::CalculateOffset
          (FLaplacianOffsetMeshOp *this,FProgressCancel *param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FDynamicMesh3 *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong *plStackX_8;
  ulonglong in_stack_ffffffffffffff68;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseNormals.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\DeformationOps\\MeshOffsetOps.h"
                         ,0x149,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar10 = (FDynamicMesh3 *)&DAT_00000005;
  if (this->bUniformWeights != false) {
    pFVar10 = (FDynamicMesh3 *)0x0;
  }
  MeshDeformation::ConstructConstrainedMeshDeformer((ELaplacianWeightScheme)&plStackX_8,pFVar10);
  dVar6 = __real_3ff0000000000000;
  lVar3 = this->_padding_;
  dVar2 = this->Softness;
  uVar15 = SUB84(dVar2,0);
  uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (dVar2 <= __real_3f50624dd2f1a9fc) {
    uVar15 = SUB84(__real_3f50624dd2f1a9fc,0);
    uVar16 = (undefined4)((ulonglong)__real_3f50624dd2f1a9fc >> 0x20);
  }
  dVar2 = (double)CONCAT44(uVar16,uVar15) * __real_3f847ae147ae147b;
  uVar11 = *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24);
  pFVar10 = (FDynamicMesh3 *)0x0;
  if ((uVar11 != 0) &&
     (pFVar10 = (FDynamicMesh3 *)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x28) - 1U))) {
    pFVar10 = (FDynamicMesh3 *)&DAT_00000001;
    uVar9 = 1;
    if ((int)uVar11 < 2) goto joined_r0x00014cd0cff9;
    do {
      uVar12 = (ulonglong)((uint)pFVar10 & 0x1ff);
      lVar4 = (*(undefined8 **)(lVar3 + 0x28))[(ulonglong)pFVar10 >> 9];
      if ((*(short *)(lVar4 + uVar12 * 2) != 0) && (*(short *)(lVar4 + uVar12 * 2) != -1)) break;
      uVar9 = (uint)pFVar10 + 1;
      pFVar10 = (FDynamicMesh3 *)(ulonglong)uVar9;
    } while ((int)uVar9 < (int)uVar11);
  }
  uVar9 = (uint)pFVar10;
joined_r0x00014cd0cff9:
  if (uVar9 == uVar11) {
    (**(code **)(*plStackX_8 + 0x40))(plStackX_8,&this->_padding_);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)*plStackX_8)(plStackX_8,1);
    }
    return;
  }
  do {
    uVar9 = (uint)pFVar10;
    dVar14 = dVar6;
    if ((char)this->_padding_ == '\0') {
LAB_14cd0d08d:
      if (dVar6 <= dVar14) {
        dVar14 = dVar6;
      }
    }
    else {
      if ((this->_padding_ == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar13 = TIndexedWeightMap<float>::GetValue((TIndexedWeightMap<float> *)this->_padding_,uVar9)
      ;
      dVar14 = (double)fVar13;
      if (0.0 <= (double)fVar13) goto LAB_14cd0d08d;
      dVar14 = 0.0;
    }
    uVar12 = (ulonglong)(int)uVar9;
    lVar4 = *(longlong *)(*(longlong *)(this->_padding_ + 0x10) + ((ulonglong)pFVar10 >> 9) * 8);
    pdVar1 = (double *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
    dStack_88 = *pdVar1;
    dStack_80 = pdVar1[1];
    dVar14 = ((dVar6 - dVar14) * (double)this->_padding_ + dVar14 * (double)this->_padding_) *
             (double)this->_padding_;
    dStack_78 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
    if ((this->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = this->_padding_;
    uVar8 = 0;
    if ((int)uVar9 < *(int *)(lVar4 + 0x10)) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (in_stack_ffffffffffffff68 = uVar12,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 8);
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffffffffff00;
    dStack_80 = dStack_80 + dVar14 * *(double *)(lVar4 + 8 + uVar12 * 0x18);
    dStack_88 = dStack_88 + dVar14 * *(double *)(lVar4 + uVar12 * 0x18);
    dStack_78 = dStack_78 + dVar14 * *(double *)(lVar4 + 0x10 + uVar12 * 0x18);
    (**(code **)(*plStackX_8 + 8))(plStackX_8,pFVar10,dVar2,&dStack_88,in_stack_ffffffffffffff68);
    uVar9 = uVar9 + 1;
    pFVar10 = (FDynamicMesh3 *)(ulonglong)uVar9;
    if ((int)uVar11 <= (int)uVar9) goto joined_r0x00014cd0cff9;
    while( true ) {
      uVar12 = (ulonglong)((uint)pFVar10 & 0x1ff);
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x28) + ((ulonglong)pFVar10 >> 9) * 8);
      if ((*(short *)(lVar4 + uVar12 * 2) != 0) && (*(short *)(lVar4 + uVar12 * 2) != -1)) break;
      uVar9 = (uint)pFVar10 + 1;
      pFVar10 = (FDynamicMesh3 *)(ulonglong)uVar9;
      if ((int)uVar11 <= (int)uVar9) goto joined_r0x00014cd0cff9;
    }
  } while( true );
}

// Offset @ 14cd0cf00

void __thiscall UE::Geometry::FLaplacianOffsetMeshOp::Offset(FLaplacianOffsetMeshOp *this)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FDynamicMesh3 *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong *local_res8;
  ulonglong in_stack_ffffffffffffff68;
  double local_88;
  double dStack_80;
  double local_78;
  
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseNormals.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\DeformationOps\\MeshOffsetOps.h"
                         ,0x149,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar10 = (FDynamicMesh3 *)&DAT_00000005;
  if (this->bUniformWeights != false) {
    pFVar10 = (FDynamicMesh3 *)0x0;
  }
  MeshDeformation::ConstructConstrainedMeshDeformer((ELaplacianWeightScheme)&local_res8,pFVar10);
  dVar6 = __real_3ff0000000000000;
  lVar3 = this->_padding_;
  dVar2 = this->Softness;
  uVar15 = SUB84(dVar2,0);
  uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (dVar2 <= __real_3f50624dd2f1a9fc) {
    uVar15 = SUB84(__real_3f50624dd2f1a9fc,0);
    uVar16 = (undefined4)((ulonglong)__real_3f50624dd2f1a9fc >> 0x20);
  }
  dVar2 = (double)CONCAT44(uVar16,uVar15) * __real_3f847ae147ae147b;
  uVar11 = *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24);
  pFVar10 = (FDynamicMesh3 *)0x0;
  if ((uVar11 != 0) &&
     (pFVar10 = (FDynamicMesh3 *)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x28) - 1U))) {
    pFVar10 = (FDynamicMesh3 *)&DAT_00000001;
    uVar9 = 1;
    if ((int)uVar11 < 2) goto joined_r0x00014cd0cff9;
    do {
      uVar12 = (ulonglong)((uint)pFVar10 & 0x1ff);
      lVar4 = (*(undefined8 **)(lVar3 + 0x28))[(ulonglong)pFVar10 >> 9];
      if ((*(short *)(lVar4 + uVar12 * 2) != 0) && (*(short *)(lVar4 + uVar12 * 2) != -1)) break;
      uVar9 = (uint)pFVar10 + 1;
      pFVar10 = (FDynamicMesh3 *)(ulonglong)uVar9;
    } while ((int)uVar9 < (int)uVar11);
  }
  uVar9 = (uint)pFVar10;
joined_r0x00014cd0cff9:
  if (uVar9 == uVar11) {
    (**(code **)(*local_res8 + 0x40))(local_res8,&this->_padding_);
    if (local_res8 != (longlong *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    return;
  }
  do {
    uVar9 = (uint)pFVar10;
    dVar14 = dVar6;
    if ((char)this->_padding_ == '\0') {
LAB_14cd0d08d:
      if (dVar6 <= dVar14) {
        dVar14 = dVar6;
      }
    }
    else {
      if ((this->_padding_ == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar13 = TIndexedWeightMap<float>::GetValue((TIndexedWeightMap<float> *)this->_padding_,uVar9)
      ;
      dVar14 = (double)fVar13;
      if (0.0 <= (double)fVar13) goto LAB_14cd0d08d;
      dVar14 = 0.0;
    }
    uVar12 = (ulonglong)(int)uVar9;
    lVar4 = *(longlong *)(*(longlong *)(this->_padding_ + 0x10) + ((ulonglong)pFVar10 >> 9) * 8);
    pdVar1 = (double *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
    local_88 = *pdVar1;
    dStack_80 = pdVar1[1];
    dVar14 = ((dVar6 - dVar14) * (double)this->_padding_ + dVar14 * (double)this->_padding_) *
             (double)this->_padding_;
    local_78 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
    if ((this->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = this->_padding_;
    uVar8 = 0;
    if ((int)uVar9 < *(int *)(lVar4 + 0x10)) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (in_stack_ffffffffffffff68 = uVar12,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 8);
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffffffffff00;
    dStack_80 = dStack_80 + dVar14 * *(double *)(lVar4 + 8 + uVar12 * 0x18);
    local_88 = local_88 + dVar14 * *(double *)(lVar4 + uVar12 * 0x18);
    local_78 = local_78 + dVar14 * *(double *)(lVar4 + 0x10 + uVar12 * 0x18);
    (**(code **)(*local_res8 + 8))(local_res8,pFVar10,dVar2,&local_88,in_stack_ffffffffffffff68);
    uVar9 = uVar9 + 1;
    pFVar10 = (FDynamicMesh3 *)(ulonglong)uVar9;
    if ((int)uVar11 <= (int)uVar9) goto joined_r0x00014cd0cff9;
    while( true ) {
      uVar12 = (ulonglong)((uint)pFVar10 & 0x1ff);
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x28) + ((ulonglong)pFVar10 >> 9) * 8);
      if ((*(short *)(lVar4 + uVar12 * 2) != 0) && (*(short *)(lVar4 + uVar12 * 2) != -1)) break;
      uVar9 = (uint)pFVar10 + 1;
      pFVar10 = (FDynamicMesh3 *)(ulonglong)uVar9;
      if ((int)uVar11 <= (int)uVar9) goto joined_r0x00014cd0cff9;
    }
  } while( true );
}

