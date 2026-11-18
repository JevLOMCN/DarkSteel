// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 1

// IterateToNext @ 144451a70

void __thiscall TFieldIterator<FMapProperty>::IterateToNext(TFieldIterator<FMapProperty> *this)

{
  EClassCastFlags EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UStruct *pUVar5;
  FField *pFVar6;
  int iVar7;
  
  pUVar5 = this->Struct;
  pFVar6 = this->Field;
  if (pUVar5 == (UStruct *)0x0) {
LAB_144451b9e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000144451aaa:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if (((EVar1 & (CASTCLASS_FMapProperty|CASTCLASS_FProperty|CASTCLASS_UField)) ==
           (CASTCLASS_FMapProperty|CASTCLASS_FProperty|CASTCLASS_UField)) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_144451b9e;
    }
    if (this->bIncludeInterface != false) {
      iVar7 = this->InterfaceIndex + 1;
      this->InterfaceIndex = iVar7;
      if (iVar7 < *(int *)&pUVar5[2].PostConstructLink) {
        if ((iVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = (&(pUVar5[2].DestructorLink)->_padding_)[(longlong)iVar7 * 2];
        if (lVar2 == 0) {
          pFVar6 = (FField *)0x0;
        }
        else {
          pFVar6 = *(FField **)(lVar2 + 0x50);
        }
        goto joined_r0x000144451aaa;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_144451b9e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

