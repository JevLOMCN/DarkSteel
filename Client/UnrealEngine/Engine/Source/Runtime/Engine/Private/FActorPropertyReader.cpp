// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ShouldSkipProperty @ 14786f690

bool __thiscall
FActorPropertyReader::ShouldSkipProperty(FActorPropertyReader *this,FProperty *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  uint uVar5;
  int iVar6;
  FProperty *pFVar7;
  undefined1 *puVar8;
  
  if ((param_1->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) == CPF_None
     ) goto LAB_14786f732;
  uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
  if (((uVar1 >> 0x10 & 1) == 0) || (pFVar7 = param_1, param_1 == (FProperty *)0x0)) {
    if ((uVar1 >> 0x15 & 1) == 0) goto LAB_14786f732;
    pFVar7 = (FProperty *)param_1[1]._padding_;
    if ((pFVar7 == (FProperty *)0x0) || ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x10 & 1) == 0)) {
      pFVar7 = (FProperty *)0x0;
    }
    if (pFVar7 == (FProperty *)0x0) goto LAB_14786f732;
  }
  lVar2 = pFVar7[1]._padding_;
  pUVar4 = UActorComponent::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar6 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return true;
    }
  }
LAB_14786f732:
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&this->field_0xb0 != *(int *)&this->field_0xdc) {
    puVar8 = *(undefined1 **)&this->field_0xe8;
    if (*(undefined1 **)&this->field_0xe8 == (undefined1 *)0x0) {
      puVar8 = &this->field_0xe0;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)(*(int *)&this->field_0xf0 - 1U & (uVar5 >> 0x10 ^ uVar5))
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FProperty **)(*(longlong *)&this->field_0xa8 + (longlong)iVar6 * 0x10) == param_1)
        goto LAB_14786f7ba;
        iVar6 = *(int *)(*(longlong *)&this->field_0xa8 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_14786f7ba:
  return iVar6 != -1;
}

