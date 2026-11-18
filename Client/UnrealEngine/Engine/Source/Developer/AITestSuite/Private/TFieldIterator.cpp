// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 3

// IterateToNext @ 147056f20

void __thiscall TFieldIterator<FByteProperty>::IterateToNext(TFieldIterator<FByteProperty> *this)

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
LAB_14705703e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147056f4b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x1008041) == 0x1008041) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_14705703e;
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
        goto joined_r0x000147056f4b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_14705703e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147057060

void __thiscall TFieldIterator<FIntProperty>::IterateToNext(TFieldIterator<FIntProperty> *this)

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
LAB_14705717e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x00014705708b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x1008081) == 0x1008081) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_14705717e;
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
        goto joined_r0x00014705708b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_14705717e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 1470571a0

void __thiscall
TFieldIterator<FStructProperty>::IterateToNext(TFieldIterator<FStructProperty> *this)

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
LAB_1470572be:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x0001470571cb:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x108001) == 0x108001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_1470572be;
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
        goto joined_r0x0001470571cb;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_1470572be;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

