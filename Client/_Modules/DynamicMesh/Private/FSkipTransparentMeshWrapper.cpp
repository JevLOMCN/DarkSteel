// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// FSkipTransparentMeshWrapper @ 14c6dff80

FSkipTransparentMeshWrapper * __thiscall
FSkipTransparentMeshWrapper::FSkipTransparentMeshWrapper
          (FSkipTransparentMeshWrapper *this,FDynamicMesh3 *param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_res8 [2];
  
  this->Mesh = param_1;
  *(undefined8 *)&this->IsTriTransparent = *(undefined8 *)param_2;
  iVar8 = 0;
  *(undefined8 *)&(this->IsTriTransparent).field_0x8 = 0;
  uVar7 = 0;
  *(undefined8 *)&(this->IsTriTransparent).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  uVar5 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
  uVar6 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  pcVar1 = *(code **)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  if (0 < (int)(uVar5 * 0x200 + uVar6)) {
    do {
      if (((((int)uVar7 < 0) || ((int)(uVar5 * 0x200 + uVar6) <= (int)uVar7)) ||
          (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                          AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
                                       (ulonglong)(uVar7 & 0x1ff) * 2) - 1U))) ||
         (local_res8[0] = uVar7, cVar3 = (*pcVar1)(uVar2,local_res8), cVar3 != '\0')) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      uVar5 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
      iVar8 = iVar8 + iVar4;
      uVar6 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar5 * 0x200 + uVar6));
  }
  this->TriCount = iVar8;
  return this;
}

