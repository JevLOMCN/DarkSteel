// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// IterateToNext @ 1476bb280

void __thiscall TFieldIterator<FSetProperty>::IterateToNext(TFieldIterator<FSetProperty> *this)

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
LAB_1476bb3ae:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x0001476bb2ba:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if (((EVar1 & (CASTCLASS_FSetProperty|CASTCLASS_FProperty|CASTCLASS_UField)) ==
           (CASTCLASS_FSetProperty|CASTCLASS_FProperty|CASTCLASS_UField)) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_1476bb3ae;
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
        goto joined_r0x0001476bb2ba;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_1476bb3ae;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147841250

void __thiscall
TFieldIterator<FMulticastDelegateProperty>::IterateToNext
          (TFieldIterator<FMulticastDelegateProperty> *this)

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
LAB_14784136e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x00014784127b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x2008001) == 0x2008001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_14784136e;
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
        goto joined_r0x00014784127b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_14784136e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147af5610

void __thiscall TFieldIterator<FArrayProperty>::IterateToNext(TFieldIterator<FArrayProperty> *this)

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
LAB_147af572e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147af563b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x208001) == 0x208001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147af572e;
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
        goto joined_r0x000147af563b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147af572e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147dae390

void __thiscall TFieldIterator<FBoolProperty>::IterateToNext(TFieldIterator<FBoolProperty> *this)

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
LAB_147dae4ae:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147dae3bb:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x28001) == 0x28001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147dae4ae;
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
        goto joined_r0x000147dae3bb;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147dae4ae;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147dae4d0

void __thiscall TFieldIterator<FClassProperty>::IterateToNext(TFieldIterator<FClassProperty> *this)

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
LAB_147dae5ee:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147dae4fb:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x4018401) == 0x4018401) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147dae5ee;
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
        goto joined_r0x000147dae4fb;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147dae5ee;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147dae610

void __thiscall
TFieldIterator<FDoubleProperty>::IterateToNext(TFieldIterator<FDoubleProperty> *this)

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
LAB_147dae73e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147dae64a:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if (((EVar1 & (CASTCLASS_FDoubleProperty|CASTCLASS_FNumericProperty|CASTCLASS_FProperty|
                    CASTCLASS_UField)) ==
           (CASTCLASS_FDoubleProperty|CASTCLASS_FNumericProperty|CASTCLASS_FProperty|
           CASTCLASS_UField)) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147dae73e;
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
        goto joined_r0x000147dae64a;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147dae73e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147dae760

void __thiscall TFieldIterator<FEnumProperty>::IterateToNext(TFieldIterator<FEnumProperty> *this)

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
LAB_147dae88e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147dae79a:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if (((EVar1 & (CASTCLASS_FEnumProperty|CASTCLASS_FProperty|CASTCLASS_UField)) ==
           (CASTCLASS_FEnumProperty|CASTCLASS_FProperty|CASTCLASS_UField)) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147dae88e;
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
        goto joined_r0x000147dae79a;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147dae88e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147dae8b0

void __thiscall
TFieldIterator<FFieldPathProperty>::IterateToNext(TFieldIterator<FFieldPathProperty> *this)

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
LAB_147dae9de:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147dae8ea:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if (((EVar1 & (CASTCLASS_FFieldPathProperty|CASTCLASS_FProperty|CASTCLASS_UField)) ==
           (CASTCLASS_FFieldPathProperty|CASTCLASS_FProperty|CASTCLASS_UField)) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147dae9de;
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
        goto joined_r0x000147dae8ea;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147dae9de;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147daea00

void __thiscall TFieldIterator<FFloatProperty>::IterateToNext(TFieldIterator<FFloatProperty> *this)

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
LAB_147daeb1e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147daea2b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x1008101) == 0x1008101) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147daeb1e;
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
        goto joined_r0x000147daea2b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147daeb1e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147daeb40

void __thiscall TFieldIterator<FInt64Property>::IterateToNext(TFieldIterator<FInt64Property> *this)

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
LAB_147daec5e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147daeb6b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x1408001) == 0x1408001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147daec5e;
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
        goto joined_r0x000147daeb6b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147daec5e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147daec80

void __thiscall
TFieldIterator<FInterfaceProperty>::IterateToNext(TFieldIterator<FInterfaceProperty> *this)

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
LAB_147daed9e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147daecab:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x9001) == 0x9001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147daed9e;
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
        goto joined_r0x000147daecab;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147daed9e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147daedc0

void __thiscall TFieldIterator<FNameProperty>::IterateToNext(TFieldIterator<FNameProperty> *this)

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
LAB_147daeede:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147daedeb:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0xa001) == 0xa001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147daeede;
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
        goto joined_r0x000147daedeb;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147daeede;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147daef00

void __thiscall
TFieldIterator<FSoftClassProperty>::IterateToNext(TFieldIterator<FSoftClassProperty> *this)

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
LAB_147daf02e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147daef3a:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if (((EVar1 & (CASTCLASS_FSoftClassProperty|CASTCLASS_FSoftObjectProperty|
                     CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|CASTCLASS_UField)) ==
           (CASTCLASS_FSoftClassProperty|CASTCLASS_FSoftObjectProperty|CASTCLASS_FObjectPropertyBase
            |CASTCLASS_FProperty|CASTCLASS_UField)) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147daf02e;
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
        goto joined_r0x000147daef3a;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147daf02e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147daf050

void __thiscall
TFieldIterator<FSoftObjectProperty>::IterateToNext(TFieldIterator<FSoftObjectProperty> *this)

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
LAB_147daf16e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147daf07b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x24008001) == 0x24008001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147daf16e;
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
        goto joined_r0x000147daf07b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147daf16e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147daf190

void __thiscall TFieldIterator<FStrProperty>::IterateToNext(TFieldIterator<FStrProperty> *this)

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
LAB_147daf2ae:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147daf1bb:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0xc001) == 0xc001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147daf2ae;
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
        goto joined_r0x000147daf1bb;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147daf2ae;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147daf2d0

void __thiscall TFieldIterator<FTextProperty>::IterateToNext(TFieldIterator<FTextProperty> *this)

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
LAB_147daf3ee:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000147daf2fb:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x40008001) == 0x40008001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147daf3ee;
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
        goto joined_r0x000147daf2fb;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147daf3ee;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 147fe3610

void __thiscall TFieldIterator<UStruct>::IterateToNext(TFieldIterator<UStruct> *this)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UStruct *pUVar5;
  UField *pUVar6;
  int iVar7;
  
  pUVar5 = this->Struct;
  pUVar6 = this->Field;
  if (pUVar5 == (UStruct *)0x0) {
LAB_147fe3726:
    this->Struct = pUVar5;
    this->Field = pUVar6;
    return;
  }
joined_r0x000147fe363b:
  do {
    for (; pUVar6 != (UField *)0x0; pUVar6 = (pUVar6->Next).field0_0x0.DebugPtr) {
      uVar1 = *(ulonglong *)(pUVar6->_padding_ + 0xd8);
      if (((uVar1 & 8) != 0) &&
         ((((uVar1 >> 0xf & 1) == 0 || (((uint)pUVar6[1]._padding_ >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_147fe3726;
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
          pUVar6 = (UField *)0x0;
        }
        else {
          pUVar6 = *(UField **)(lVar2 + 0x48);
        }
        goto joined_r0x000147fe363b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_147fe3726;
    pUVar6 = (pUVar5->Children).field0_0x0.DebugPtr;
    this->InterfaceIndex = -1;
  } while( true );
}

