// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 63

// TIterator @ 14b443820

TIterator * __thiscall
TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b4438b9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b4438b9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b44c8a0

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b44c939;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b44c939:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b44c9b0

TIterator * __thiscall
TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b44ca49;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b44ca49:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b470440

TIterator * __thiscall
TSet<TTuple<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b4704d9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b4704d9:
  *(TSet<TTuple<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b4b1890

TIterator * __thiscall
TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b4b1929;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b4b1929:
  *(TSet<TTuple<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b4cb4b0

TIterator * __thiscall
TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b4cb549;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b4cb549:
  *(TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b5006f0

TIterator * __thiscall
TSet<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b500789;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b500789:
  *(TSet<TTuple<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b500800

TIterator * __thiscall
TSet<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b500899;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b500899:
  *(TSet<TTuple<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b500910

TIterator * __thiscall
TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b5009a9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b5009a9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b54a430

TIterator * __thiscall
TSet<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b54a4c9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b54a4c9:
  *(TSet<TTuple<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b586d10

TIterator * __thiscall
TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b586da9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b586da9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b594210

TIterator * __thiscall
TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b5942a9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b5942a9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b5b1520

TIterator * __thiscall
TSet<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b5b15b9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b5b15b9:
  *(TSet<TTuple<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b5c6a40

TIterator * __thiscall
TSet<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b5c6ad9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b5c6ad9:
  *(TSet<TTuple<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b5c6b50

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b5c6be9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b5c6be9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b5c6c60

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b5c6cf9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b5c6cf9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b5c6d70

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b5c6e09;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b5c6e09:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b5c6e80

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b5c6f19;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b5c6f19:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b5c6f90

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b5c7029;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b5c7029:
  *(TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b76c9e0

TIterator * __thiscall
TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b76ca79;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b76ca79:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b76caf0

TIterator * __thiscall
TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b76cb89;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b76cb89:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b76cc00

TIterator * __thiscall
TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b76cc99;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b76cc99:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b76cd10

TIterator * __thiscall
TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b76cda9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b76cda9:
  *(TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b76ce20

TIterator * __thiscall
TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b76ceb9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b76ceb9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b76cf30

TIterator * __thiscall
TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b76cfc9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b76cfc9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b76d040

TIterator * __thiscall
TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b76d0d9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b76d0d9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b76d150

TIterator * __thiscall
TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b76d1e9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b76d1e9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b76d260

TIterator * __thiscall
TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b76d2f9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b76d2f9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b79ab10

TIterator * __thiscall
TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b79aba9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b79aba9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b79ac20

TIterator * __thiscall
TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b79acb9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b79acb9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b79ad30

TIterator * __thiscall
TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b79adc9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b79adc9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b79ae40

TIterator * __thiscall
TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b79aed9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b79aed9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b79af50

TIterator * __thiscall
TSet<TTuple<enum_EDS_StateTagType,FDS_EquipmentAppearanceData>,TDefaultMapHashableKeyFuncs<enum_EDS_StateTagType,FDS_EquipmentAppearanceData,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_StateTagType,FDS_EquipmentAppearanceData>,TDefaultMapHashableKeyFuncs<EDS_StateTagType,FDS_EquipmentAppearanceData,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b79afe9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b79afe9:
  *(TSet<TTuple<EDS_StateTagType,FDS_EquipmentAppearanceData>,TDefaultMapHashableKeyFuncs<EDS_StateTagType,FDS_EquipmentAppearanceData,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_StateTagType,FDS_EquipmentAppearanceData>,TDefaultMapHashableKeyFuncs<EDS_StateTagType,FDS_EquipmentAppearanceData,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b79b060

TIterator * __thiscall
TSet<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b79b0f9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b79b0f9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b7d7e60

TIterator * __thiscall
TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>::
TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b7d7ef9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b7d7ef9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14b9d7cb0

TIterator * __thiscall
TSet<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14b9d7d49;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14b9d7d49:
  *(TSet<TTuple<EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba31b80

TIterator * __thiscall
TSet<TTuple<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>,TDefaultMapHashableKeyFuncs<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba31c19;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba31c19:
  *(TSet<TTuple<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>,TDefaultMapHashableKeyFuncs<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>,TDefaultMapHashableKeyFuncs<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba31c90

TIterator * __thiscall
TSet<TTuple<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_SpecialBuffType,FDS_SpecialBuffInfo>,TDefaultMapHashableKeyFuncs<EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba31d29;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba31d29:
  *(TSet<TTuple<EDS_SpecialBuffType,FDS_SpecialBuffInfo>,TDefaultMapHashableKeyFuncs<EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_SpecialBuffType,FDS_SpecialBuffInfo>,TDefaultMapHashableKeyFuncs<EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba31da0

TIterator * __thiscall
TSet<TTuple<enum_EDS_StatusType,FDS_StatusInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_StatusType,FDS_StatusInfo>,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba31e39;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba31e39:
  *(TSet<TTuple<EDS_StatusType,FDS_StatusInfo>,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_StatusType,FDS_StatusInfo>,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba31eb0

TIterator * __thiscall
TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba31f49;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba31f49:
  *(TSet<TTuple<TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba31fc0

TIterator * __thiscall
TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba32059;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba32059:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba320d0

TIterator * __thiscall
TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba32169;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba32169:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba321e0

TIterator * __thiscall
TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba32279;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba32279:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba322f0

TIterator * __thiscall
TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba32389;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba32389:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba90a80

TIterator * __thiscall
TSet<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba90b19;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba90b19:
  *(TSet<TTuple<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba90b90

TIterator * __thiscall
TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba90c29;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba90c29:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba90ca0

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba90d39;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba90d39:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ba90db0

TIterator * __thiscall
TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ba90e49;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ba90e49:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14baed7a0

TIterator * __thiscall
TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14baed839;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14baed839:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14baed8b0

TIterator * __thiscall
TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,FDS_QuestObjectivePhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestObjectivePhasingInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14baed949;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14baed949:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14baed9c0

TIterator * __thiscall
TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,FDS_QuestPhasingInfo>,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14baeda59;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14baeda59:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14baedad0

TIterator * __thiscall
TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14baedb69;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14baedb69:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14baedbe0

TIterator * __thiscall
TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14baedc79;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14baedc79:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14baedcf0

TIterator * __thiscall
TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14baedd89;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14baedd89:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14bb4c9b0

TIterator * __thiscall
TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14bb4ca49;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14bb4ca49:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14bbeabd0

TIterator * __thiscall
TSet<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14bbeac69;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14bbeac69:
  *(TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14bc2a480

TIterator * __thiscall
TSet<TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EDS_EntityMaterialType,FDS_EntityMaterialInfo>,TDefaultMapHashableKeyFuncs<EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14bc2a519;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14bc2a519:
  *(TSet<TTuple<EDS_EntityMaterialType,FDS_EntityMaterialInfo>,TDefaultMapHashableKeyFuncs<EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EDS_EntityMaterialType,FDS_EntityMaterialInfo>,TDefaultMapHashableKeyFuncs<EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14bc2a590

TIterator * __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14bc2a629;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14bc2a629:
  *(TSet<TTuple<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14bc2a6a0

TIterator * __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14bc2a739;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14bc2a739:
  *(TSet<TTuple<EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14bc2a7b0

TIterator * __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14bc2a849;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14bc2a849:
  *(TSet<TTuple<EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14bc83270

TIterator * __thiscall
TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14bc83309;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14bc83309:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14bce3b50

TIterator * __thiscall
TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14bce3be9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14bce3be9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14bf99120

TIterator * __thiscall
TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14bf991b9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14bf991b9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

