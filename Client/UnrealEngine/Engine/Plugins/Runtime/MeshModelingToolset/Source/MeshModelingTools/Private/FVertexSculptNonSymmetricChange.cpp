// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// Apply @ 14ccde790

void __thiscall
FVertexSculptNonSymmetricChange::Apply(FVertexSculptNonSymmetricChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UMeshVertexSculptTool::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      pUVar2 = UMeshVertexSculptTool::StaticClass();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        param_1 = (UObject *)0x0;
      }
      (**(code **)(*(longlong *)param_1 + 0x6f0))(param_1,0);
    }
  }
  return;
}

// Revert @ 14cd1ced0

void __thiscall
FVertexSculptNonSymmetricChange::Revert(FVertexSculptNonSymmetricChange *this,UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = UMeshVertexSculptTool::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar3 = UMeshVertexSculptTool::StaticClass();
      lVar2 = *(longlong *)&param_1->field_0x10;
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        param_1 = (UObject *)0x0;
      }
      (**(code **)(*(longlong *)param_1 + 0x6f0))(param_1,CONCAT71((int7)((ulonglong)lVar2 >> 8),1))
      ;
    }
  }
  return;
}

