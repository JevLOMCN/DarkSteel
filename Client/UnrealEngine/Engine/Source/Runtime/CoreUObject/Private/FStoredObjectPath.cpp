// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FStoredObjectPath @ 1420ea4d0

FStoredObjectPath * __thiscall
UE::CoreUObject::Private::FStoredObjectPath::FStoredObjectPath
          (FStoredObjectPath *this,FStoredObjectPath *param_1)

{
  FMinimalName FVar1;
  
  this->NumElements = param_1->NumElements;
  param_1->NumElements = 0;
  if (3 < this->NumElements) {
    (this->field1_0x8).Short[0] = (param_1->field1_0x8).Short[0];
    return this;
  }
  FVar1 = (param_1->field1_0x8).Short[1];
  (this->field1_0x8).Short[0] = (param_1->field1_0x8).Short[0];
  (this->field1_0x8).Short[1] = FVar1;
  (this->field1_0x8).Short[2] = (param_1->field1_0x8).Short[2];
  return this;
}

// FStoredObjectPath @ 1420ea510

FStoredObjectPath * __thiscall
UE::CoreUObject::Private::FStoredObjectPath::FStoredObjectPath
          (FStoredObjectPath *this,FMinimalName *param_1,int param_2,FMinimalName *param_3,
          int param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong64 uVar3;
  FMinimalName *_Dst;
  longlong lVar4;
  FMinimalName *pFVar5;
  FMinimalName *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  pFVar6 = (FMinimalName *)0x0;
  uVar7 = 0;
  lVar8 = (longlong)param_4;
  lVar11 = (longlong)param_2;
  iVar2 = param_2 + param_4;
  this->NumElements = iVar2;
  if (iVar2 < 4) {
    _Dst = (FMinimalName *)&this->field1_0x8;
  }
  else {
    uVar10 = (ulonglong)iVar2;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar10;
    uVar3 = SUB168(ZEXT816(8) * auVar1,0);
    if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    _Dst = operator_new__(uVar3);
    pFVar5 = _Dst;
    if (_Dst == (FMinimalName *)0x0) {
      (this->field1_0x8).Long = (FMinimalName *)0x0;
      _Dst = pFVar6;
    }
    else {
      do {
        pFVar5->Index = 0;
        pFVar5->Number = 0;
        uVar10 = uVar10 - 1;
        pFVar5 = pFVar5 + 1;
      } while (uVar10 != 0);
      (this->field1_0x8).Long = _Dst;
    }
  }
  uVar9 = 0;
  if (((0 < param_2) && (1 < (uint)param_2)) &&
     ((param_1 + lVar11 + -1 < _Dst || (_Dst + lVar11 + -1 < param_1)))) {
    memcpy(_Dst,param_1,lVar11 * 8);
    pFVar5 = pFVar6;
    do {
      uVar9 = (int)pFVar5 + 1;
      pFVar5 = (FMinimalName *)(ulonglong)uVar9;
    } while ((int)uVar9 < param_2);
  }
  lVar4 = (longlong)(int)uVar9;
  if (lVar4 < lVar11) {
    pFVar5 = _Dst + lVar4;
    lVar4 = lVar11 - lVar4;
    do {
      *pFVar5 = *(FMinimalName *)(((longlong)param_1 - (longlong)_Dst) + (longlong)pFVar5);
      pFVar5 = pFVar5 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if ((0 < param_4) && (1 < (uint)param_4)) {
    if ((param_3 + lVar8 + -1 < _Dst + lVar11) || (_Dst + (param_4 + -1 + param_2) < param_3)) {
      memcpy(_Dst + lVar11,param_3,lVar8 * 8);
      do {
        uVar7 = (int)pFVar6 + 1;
        pFVar6 = (FMinimalName *)(ulonglong)uVar7;
      } while ((int)uVar7 < param_4);
    }
  }
  lVar4 = (longlong)(int)uVar7;
  if (lVar4 < lVar8) {
    pFVar6 = param_3 + lVar4;
    lVar8 = lVar8 - lVar4;
    do {
      *(FMinimalName *)((lVar11 * 8 - (longlong)param_3) + (longlong)_Dst + (longlong)pFVar6) =
           *pFVar6;
      pFVar6 = pFVar6 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return this;
}

// FStoredObjectPath @ 1420ea6c0

FStoredObjectPath * __thiscall
UE::CoreUObject::Private::FStoredObjectPath::FStoredObjectPath
          (FStoredObjectPath *this,TArrayView<FMinimalName_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  FMinimalName *pFVar8;
  FStoredObjectPath *pFVar9;
  FMinimalName *pFVar10;
  uint uVar11;
  longlong lVar12;
  FMinimalName *pFVar13;
  
  iVar1 = param_1->ArrayNum;
  uVar6 = (ulonglong)iVar1;
  pFVar13 = (FMinimalName *)0x0;
  this->NumElements = iVar1;
  if (iVar1 < 4) {
    pFVar13 = (FMinimalName *)&this->field1_0x8;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar6;
    uVar7 = SUB168(ZEXT816(8) * auVar3,0);
    if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    pFVar8 = operator_new__(uVar7);
    pFVar10 = pFVar8;
    if (pFVar8 == (FMinimalName *)0x0) {
      (this->field1_0x8).Long = (FMinimalName *)0x0;
    }
    else {
      do {
        pFVar10->Index = 0;
        pFVar10->Number = 0;
        uVar6 = uVar6 - 1;
        pFVar10 = pFVar10 + 1;
      } while (uVar6 != 0);
      (this->field1_0x8).Long = pFVar8;
      pFVar13 = pFVar8;
    }
  }
  uVar11 = this->NumElements - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 * 8;
    do {
      uVar5 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FStoredObjectPath *)(*pcVar2)();
        return pFVar9;
      }
      pFVar10 = (FMinimalName *)((longlong)&(param_1->DataPtr->Index).Value + lVar12);
      lVar12 = lVar12 + -8;
      *pFVar13 = *pFVar10;
      pFVar13 = pFVar13 + 1;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  return this;
}

// ~FStoredObjectPath @ 1420ec600

void __thiscall
UE::CoreUObject::Private::FStoredObjectPath::~FStoredObjectPath(FStoredObjectPath *this)

{
  if (3 < this->NumElements) {
    operator_delete__((this->field1_0x8).Long);
    return;
  }
  return;
}

// operator= @ 1420ec960

FStoredObjectPath * __thiscall
UE::CoreUObject::Private::FStoredObjectPath::operator=
          (FStoredObjectPath *this,FStoredObjectPath *param_1)

{
  FMinimalName FVar1;
  
  if (3 < this->NumElements) {
    operator_delete__((this->field1_0x8).Long);
  }
  this->NumElements = param_1->NumElements;
  param_1->NumElements = 0;
  if (3 < this->NumElements) {
    (this->field1_0x8).Short[0] = (param_1->field1_0x8).Short[0];
    return this;
  }
  FVar1 = (param_1->field1_0x8).Short[1];
  (this->field1_0x8).Short[0] = (param_1->field1_0x8).Short[0];
  (this->field1_0x8).Short[1] = FVar1;
  (this->field1_0x8).Short[2] = (param_1->field1_0x8).Short[2];
  return this;
}

// GetView @ 1420fd9b0

TArrayView<FMinimalName_const_,int> * __thiscall
UE::CoreUObject::Private::FStoredObjectPath::GetView
          (FStoredObjectPath *this,TArrayView<FMinimalName_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMinimalName_const_,int> *pTVar4;
  
  iVar1 = this->NumElements;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 4) {
    __return_storage_ptr__->DataPtr = (FMinimalName *)&this->field1_0x8;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<FMinimalName_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  else {
    __return_storage_ptr__->DataPtr = (FMinimalName *)(this->field1_0x8).Short[0];
  }
  return __return_storage_ptr__;
}

