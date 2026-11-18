// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// IterateToNext @ 141eabb00

void __thiscall TFieldIterator<FProperty>::IterateToNext(TFieldIterator<FProperty> *this)

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
LAB_141eabc1e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000141eabb2b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x8001) == 0x8001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_141eabc1e;
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
        goto joined_r0x000141eabb2b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_141eabc1e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 141eabc40

void __thiscall TFieldIterator<UField>::IterateToNext(TFieldIterator<UField> *this)

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
LAB_141eabd56:
    this->Struct = pUVar5;
    this->Field = pUVar6;
    return;
  }
joined_r0x000141eabc6b:
  do {
    for (; pUVar6 != (UField *)0x0; pUVar6 = (pUVar6->Next).field0_0x0.DebugPtr) {
      uVar1 = *(ulonglong *)(pUVar6->_padding_ + 0xd8);
      if (((uVar1 & 1) != 0) &&
         ((((uVar1 >> 0xf & 1) == 0 || (((uint)pUVar6[1]._padding_ >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_141eabd56;
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
        goto joined_r0x000141eabc6b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_141eabd56;
    pUVar6 = (pUVar5->Children).field0_0x0.DebugPtr;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 141f3b070

void __thiscall
TFieldIterator<FProperty_const_>::IterateToNext(TFieldIterator<FProperty_const_> *this)

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
LAB_141f3b18e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000141f3b09b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if ((((uint)EVar1 & 0x8001) == 0x8001) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_141f3b18e;
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
        goto joined_r0x000141f3b09b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_141f3b18e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 141f3b1b0

void __thiscall TFieldIterator<UField_const_>::IterateToNext(TFieldIterator<UField_const_> *this)

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
LAB_141f3b2c6:
    this->Struct = pUVar5;
    this->Field = pUVar6;
    return;
  }
joined_r0x000141f3b1db:
  do {
    for (; pUVar6 != (UField *)0x0; pUVar6 = (pUVar6->Next).field0_0x0.DebugPtr) {
      uVar1 = *(ulonglong *)(pUVar6->_padding_ + 0xd8);
      if (((uVar1 & 1) != 0) &&
         ((((uVar1 >> 0xf & 1) == 0 || (((uint)pUVar6[1]._padding_ >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_141f3b2c6;
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
        goto joined_r0x000141f3b1db;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_141f3b2c6;
    pUVar6 = (pUVar5->Children).field0_0x0.DebugPtr;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 141f908e0

void __thiscall TFieldIterator<FField>::IterateToNext(TFieldIterator<FField> *this)

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
LAB_141f909f3:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000141f9090b:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if (((EVar1 & CASTCLASS_UField) != CASTCLASS_None) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_141f909f3;
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
        goto joined_r0x000141f9090b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_141f909f3;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 141f90a20

void __thiscall
TFieldIterator<FMulticastSparseDelegateProperty>::IterateToNext
          (TFieldIterator<FMulticastSparseDelegateProperty> *this)

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
LAB_141f90b4e:
    this->Struct = pUVar5;
    this->Field = pFVar6;
    return;
  }
joined_r0x000141f90a5a:
  do {
    for (; pFVar6 != (FField *)0x0; pFVar6 = pFVar6->Next) {
      EVar1 = pFVar6->ClassPrivate->CastFlags;
      if (((EVar1 & (CASTCLASS_FMulticastSparseDelegateProperty|CASTCLASS_FMulticastDelegateProperty
                     |CASTCLASS_FProperty|CASTCLASS_UField)) ==
           (CASTCLASS_FMulticastSparseDelegateProperty|CASTCLASS_FMulticastDelegateProperty|
            CASTCLASS_FProperty|CASTCLASS_UField)) &&
         ((((EVar1 >> 0xf & 1) == 0 || ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_141f90b4e;
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
        goto joined_r0x000141f90a5a;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_141f90b4e;
    pFVar6 = pUVar5->ChildProperties;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 141fd6320

void __thiscall
TFieldIterator<UFunction_const_>::IterateToNext(TFieldIterator<UFunction_const_> *this)

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
LAB_141fd6438:
    this->Struct = pUVar5;
    this->Field = pUVar6;
    return;
  }
joined_r0x000141fd634b:
  do {
    for (; pUVar6 != (UField *)0x0; pUVar6 = (pUVar6->Next).field0_0x0.DebugPtr) {
      uVar1 = *(ulonglong *)(pUVar6->_padding_ + 0xd8);
      if (((uVar1 >> 0x13 & 1) != 0) &&
         ((((uVar1 >> 0xf & 1) == 0 || (((uint)pUVar6[1]._padding_ >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_141fd6438;
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
        goto joined_r0x000141fd634b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_141fd6438;
    pUVar6 = (pUVar5->Children).field0_0x0.DebugPtr;
    this->InterfaceIndex = -1;
  } while( true );
}

// IterateToNext @ 141fd6460

void __thiscall TFieldIterator<UFunction>::IterateToNext(TFieldIterator<UFunction> *this)

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
LAB_141fd6578:
    this->Struct = pUVar5;
    this->Field = pUVar6;
    return;
  }
joined_r0x000141fd648b:
  do {
    for (; pUVar6 != (UField *)0x0; pUVar6 = (pUVar6->Next).field0_0x0.DebugPtr) {
      uVar1 = *(ulonglong *)(pUVar6->_padding_ + 0xd8);
      if (((uVar1 >> 0x13 & 1) != 0) &&
         ((((uVar1 >> 0xf & 1) == 0 || (((uint)pUVar6[1]._padding_ >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_141fd6578;
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
        goto joined_r0x000141fd648b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_141fd6578;
    pUVar6 = (pUVar5->Children).field0_0x0.DebugPtr;
    this->InterfaceIndex = -1;
  } while( true );
}

// TFieldIterator<FProperty> @ 1420e8ac0

TFieldIterator<FProperty> * __thiscall
TFieldIterator<FProperty>::TFieldIterator<FProperty>
          (TFieldIterator<FProperty> *this,UStruct *param_1,EFieldIterationFlags param_2)

{
  int iVar1;
  bool bVar2;
  FField *pFVar3;
  UClass *pUVar4;
  
  this->Struct = param_1;
  if (param_1 == (UStruct *)0x0) {
    pFVar3 = (FField *)0x0;
  }
  else {
    pFVar3 = param_1->ChildProperties;
  }
  this->Field = pFVar3;
  this->InterfaceIndex = -1;
  this->bIncludeSuper = (bool)(param_2 & IncludeSuper);
  this->bIncludeDeprecated = (bool)(param_2 >> 1 & 1);
  if (((param_2 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      bVar2 = true;
      goto LAB_1420e8b33;
    }
  }
  bVar2 = false;
LAB_1420e8b33:
  this->bIncludeInterface = bVar2;
  IterateToNext(this);
  return this;
}

// IterateToNext @ 142184c00

void __thiscall TFieldIterator<UEnum>::IterateToNext(TFieldIterator<UEnum> *this)

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
LAB_142184d16:
    this->Struct = pUVar5;
    this->Field = pUVar6;
    return;
  }
joined_r0x000142184c2b:
  do {
    for (; pUVar6 != (UField *)0x0; pUVar6 = (pUVar6->Next).field0_0x0.DebugPtr) {
      uVar1 = *(ulonglong *)(pUVar6->_padding_ + 0xd8);
      if (((uVar1 & 4) != 0) &&
         ((((uVar1 >> 0xf & 1) == 0 || (((uint)pUVar6[1]._padding_ >> 0x1d & 1) == 0)) ||
          (this->bIncludeDeprecated != false)))) goto LAB_142184d16;
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
        goto joined_r0x000142184c2b;
      }
    }
    if ((this->bIncludeSuper == false) ||
       (pUVar5 = (UStruct *)(**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5),
       pUVar5 == (UStruct *)0x0)) goto LAB_142184d16;
    pUVar6 = (pUVar5->Children).field0_0x0.DebugPtr;
    this->InterfaceIndex = -1;
  } while( true );
}

