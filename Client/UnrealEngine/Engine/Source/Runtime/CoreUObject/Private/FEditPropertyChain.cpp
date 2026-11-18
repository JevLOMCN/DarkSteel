// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// GetActiveMemberNode @ 141fcd9c0

TDoubleLinkedListNode * __thiscall FEditPropertyChain::GetActiveMemberNode(FEditPropertyChain *this)

{
  return this->ActiveMemberPropertyNode;
}

// GetActiveNode @ 141fcd9d0

TDoubleLinkedListNode * __thiscall FEditPropertyChain::GetActiveNode(FEditPropertyChain *this)

{
  return this->ActivePropertyNode;
}

// IsArchetypeInstanceAffected @ 141fd58e0

bool __thiscall
FEditPropertyChain::IsArchetypeInstanceAffected(FEditPropertyChain *this,UObject *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (this->bFilterAffectedInstances == false) {
    return true;
  }
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(this->AffectedInstances).Elements.field_0x8 !=
      *(int *)&(this->AffectedInstances).Elements.field_0x34) {
    FVar4 = (this->AffectedInstances).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->AffectedInstances).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->AffectedInstances).HashSize - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                    4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->AffectedInstances).Elements;
      do {
        if (*(UObject **)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          return true;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// SetActiveMemberPropertyNode @ 141fe8d70

bool __thiscall
FEditPropertyChain::SetActiveMemberPropertyNode(FEditPropertyChain *this,FProperty *param_1)

{
  TDoubleLinkedListNode *pTVar1;
  
  pTVar1 = (TDoubleLinkedListNode *)this->_padding_;
  while( true ) {
    if (pTVar1 == (TDoubleLinkedListNode *)0x0) {
      return false;
    }
    if (pTVar1->Value == param_1) break;
    pTVar1 = pTVar1->NextNode;
  }
  this->ActiveMemberPropertyNode = pTVar1;
  return true;
}

// SetActivePropertyNode @ 141fe8da0

bool __thiscall
FEditPropertyChain::SetActivePropertyNode(FEditPropertyChain *this,FProperty *param_1)

{
  TDoubleLinkedListNode *pTVar1;
  
  pTVar1 = (TDoubleLinkedListNode *)this->_padding_;
  while( true ) {
    if (pTVar1 == (TDoubleLinkedListNode *)0x0) {
      return false;
    }
    if (pTVar1->Value == param_1) break;
    pTVar1 = pTVar1->NextNode;
  }
  this->ActivePropertyNode = pTVar1;
  return true;
}

// SetListSize @ 141fe91c0

void __thiscall FEditPropertyChain::SetListSize(FEditPropertyChain *this,int param_1)

{
  int iVar1;
  FProperty *pFVar2;
  ulonglong uVar3;
  longlong lVar4;
  UClass *pUVar5;
  TDoubleLinkedListNode *pTVar6;
  TDoubleLinkedListNode *pTVar7;
  TDoubleLinkedListNode *pTVar8;
  
  lVar4 = this->_padding_;
  *(int *)&this->_padding_ = param_1;
  if (param_1 == 0) {
    this->ActiveMemberPropertyNode = (TDoubleLinkedListNode *)0x0;
    this->ActivePropertyNode = (TDoubleLinkedListNode *)0x0;
    return;
  }
  if ((int)lVar4 != param_1) {
    pTVar6 = this->ActivePropertyNode;
    pTVar7 = pTVar6;
    if (pTVar6 == (TDoubleLinkedListNode *)0x0) {
      pTVar6 = (TDoubleLinkedListNode *)this->_padding_;
      this->ActivePropertyNode = pTVar6;
      pTVar7 = pTVar6;
      if (pTVar6 == (TDoubleLinkedListNode *)0x0) {
        return;
      }
    }
    do {
      pFVar2 = pTVar6->Value;
      pUVar5 = Z_Construct_UClass_UClass_NoRegister();
      uVar3 = pFVar2->_padding_;
      if (((byte)uVar3 & (uVar3 & 0xfffffffffffffffe) != 0) != 0) {
        iVar1 = (int)pUVar5->_padding_;
        lVar4 = *(longlong *)((uVar3 & 0xfffffffffffffffe) + 0x10);
        if (((iVar1 <= *(int *)(lVar4 + 0x38)) &&
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar5->_padding_)) && (pTVar8 = pTVar6, (uVar3 & 0xfffffffffffffffe) != 0)) break;
      }
      pTVar6 = pTVar6->PrevNode;
      pTVar8 = pTVar7;
    } while (pTVar6 != (TDoubleLinkedListNode *)0x0);
    this->ActiveMemberPropertyNode = pTVar8;
  }
  return;
}

