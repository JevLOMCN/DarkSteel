// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// begin @ 14ce76c60

TBaseIterator<0,1> * __thiscall
UE::Geometry::FMeshFaceSelection::begin
          (FMeshFaceSelection *this,TBaseIterator<0,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uStack_1c;
  
  iVar3 = *(int *)&(this->Selected).Elements.field_0x28;
  puVar1 = &(this->Selected).Elements.field_0x10;
  iVar9 = 0;
  uVar6 = 1;
  iVar10 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Selected).Elements.field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar4 = *puVar11;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14ce76cf9;
      uVar4 = puVar11[lVar8 + 1];
    }
    uVar6 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14ce76cf9:
  iVar3 = *(int *)&(this->Selected).Elements.field_0x8;
  iVar5 = *(int *)&(this->Selected).Elements.field_0x34;
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)&this->Selected;
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(uVar6,iVar9);
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)puVar1;
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(iVar7,0xffffffff);
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(iVar7,iVar10);
  *(ulonglong *)&(__return_storage_ptr__->ElementIt).InitialNum = CONCAT44(uStack_1c,iVar3 - iVar5);
  return __return_storage_ptr__;
}

// end @ 14ce76d70

TBaseIterator<0,1> * __thiscall
UE::Geometry::FMeshFaceSelection::end
          (FMeshFaceSelection *this,TBaseIterator<0,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  TBaseIterator<0,1> *pTVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined4 local_5c;
  undefined4 uStack_2c;
  
  uVar11 = *(uint *)&(this->Selected).Elements.field_0x28;
  iVar12 = (int)uVar11 >> 5;
  bVar9 = (byte)uVar11 & 0x1f;
  uVar16 = 1 << bVar9;
  uVar13 = -1 << bVar9;
  uVar14 = uVar11 & 0xffffffe0;
  puVar1 = &(this->Selected).Elements.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar8 = (TBaseIterator<0,1> *)(*pcVar6)();
    return pTVar8;
  }
  uVar3 = *(uint *)&(this->Selected).Elements.field_0x28;
  if (uVar11 != uVar3) {
    puVar15 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar11 = uVar13 & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ce76e5c;
      uVar13 = 0xffffffff;
      uVar11 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar16 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar16 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_14ce76e5c:
  iVar4 = *(int *)&(this->Selected).Elements.field_0x8;
  iVar5 = *(int *)&(this->Selected).Elements.field_0x34;
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)&this->Selected;
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(uVar16,iVar12);
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)puVar1;
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(uVar11,uVar13);
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(local_5c,uVar14);
  *(ulonglong *)&(__return_storage_ptr__->ElementIt).InitialNum = CONCAT44(uStack_2c,iVar4 - iVar5);
  return __return_storage_ptr__;
}

