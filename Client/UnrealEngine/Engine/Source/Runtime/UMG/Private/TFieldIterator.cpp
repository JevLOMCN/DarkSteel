// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// IterateToNext @ 146a7c820

void __thiscall
TFieldIterator<FDelegateProperty>::IterateToNext(TFieldIterator<FDelegateProperty> *this)

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
LAB_146a7c93e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000146a7c84b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x808001) == 0x808001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_146a7c93e;
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
        goto joined_r0x000146a7c84b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_146a7c93e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 146a7c960

void __thiscall
TFieldIterator<FObjectPropertyBase>::IterateToNext(TFieldIterator<FObjectPropertyBase> *this)

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
LAB_146a7ca7e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000146a7c98b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x4008001) == 0x4008001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_146a7ca7e;
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
        goto joined_r0x000146a7c98b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_146a7ca7e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

