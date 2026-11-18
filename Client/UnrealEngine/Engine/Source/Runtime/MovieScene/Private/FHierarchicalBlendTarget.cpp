// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 16

// FHierarchicalBlendTarget @ 146092de0

FHierarchicalBlendTarget * __thiscall
UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget
          (FHierarchicalBlendTarget *this,FHierarchicalBlendTarget *param_1)

{
  this->Capacity = param_1->Capacity;
  *(undefined8 *)this->Data = *(undefined8 *)param_1->Data;
  *(undefined4 *)(this->Data + 8) = *(undefined4 *)(param_1->Data + 8);
  *(undefined2 *)(this->Data + 0xc) = *(undefined2 *)(param_1->Data + 0xc);
  param_1->Capacity = 7;
  *(undefined8 *)param_1->Data = GInitialBlendTargets._0_8_;
  *(undefined4 *)(param_1->Data + 8) = GInitialBlendTargets._8_4_;
  *(short *)(param_1->Data + 0xc) = GInitialBlendTargets[6];
  return this;
}

// FHierarchicalBlendTarget @ 146092e30

FHierarchicalBlendTarget * __thiscall
UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget
          (FHierarchicalBlendTarget *this,FHierarchicalBlendTarget *param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulong64 uVar4;
  void *pvVar5;
  FHierarchicalBlendTarget *_Dst;
  
  uVar3 = 7;
  this->Capacity = 7;
  if (param_1->Capacity != 7) {
    auVar2 = ZEXT816(2) * ZEXT216(param_1->Capacity);
    uVar4 = auVar2._0_8_;
    if (auVar2._8_8_ != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new__(uVar4);
    uVar1 = param_1->Capacity;
    *(void **)this->Data = pvVar5;
    uVar3 = (ulonglong)uVar1;
    this->Capacity = uVar1;
  }
  if (param_1->Capacity != 7) {
    param_1 = *(FHierarchicalBlendTarget **)param_1->Data;
  }
  _Dst = this;
  if ((short)uVar3 != 7) {
    _Dst = *(FHierarchicalBlendTarget **)this->Data;
  }
  memcpy(_Dst,param_1,uVar3 * 2);
  return this;
}

// FHierarchicalBlendTarget @ 146092ec0

FHierarchicalBlendTarget * __thiscall
UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(FHierarchicalBlendTarget *this)

{
  this->Capacity = 7;
  *(undefined8 *)this->Data = GInitialBlendTargets._0_8_;
  *(undefined4 *)(this->Data + 8) = GInitialBlendTargets._8_4_;
  *(short *)(this->Data + 0xc) = GInitialBlendTargets[6];
  return this;
}

// ~FHierarchicalBlendTarget @ 146097700

void __thiscall
UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(FHierarchicalBlendTarget *this)

{
  if (this->Capacity != 7) {
    operator_delete__(*(void **)this->Data);
    this->Capacity = 7;
  }
  return;
}

// operator= @ 1460999a0

FHierarchicalBlendTarget * __thiscall
UE::MovieScene::FHierarchicalBlendTarget::operator=
          (FHierarchicalBlendTarget *this,FHierarchicalBlendTarget *param_1)

{
  if (this->Capacity != 7) {
    operator_delete__(*(void **)this->Data);
    this->Capacity = 7;
  }
  this->Capacity = param_1->Capacity;
  *(undefined8 *)this->Data = *(undefined8 *)param_1->Data;
  *(undefined4 *)(this->Data + 8) = *(undefined4 *)(param_1->Data + 8);
  *(undefined2 *)(this->Data + 0xc) = *(undefined2 *)(param_1->Data + 0xc);
  param_1->Capacity = 7;
  *(undefined8 *)param_1->Data = GInitialBlendTargets._0_8_;
  *(undefined4 *)(param_1->Data + 8) = GInitialBlendTargets._8_4_;
  *(short *)(param_1->Data + 0xc) = GInitialBlendTargets[6];
  return this;
}

// operator= @ 146099a30

FHierarchicalBlendTarget * __thiscall
UE::MovieScene::FHierarchicalBlendTarget::operator=
          (FHierarchicalBlendTarget *this,FHierarchicalBlendTarget *param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  ulong64 uVar3;
  void *pvVar4;
  FHierarchicalBlendTarget *_Dst;
  
  if ((this->Capacity != param_1->Capacity) && (this->Capacity != 7)) {
    operator_delete__(*(void **)this->Data);
    this->Capacity = 7;
  }
  if (param_1->Capacity != 7) {
    auVar2 = ZEXT816(2) * ZEXT416((uint)param_1->Capacity);
    uVar3 = auVar2._0_8_;
    if (auVar2._8_8_ != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar3);
    *(void **)this->Data = pvVar4;
  }
  uVar1 = param_1->Capacity;
  this->Capacity = uVar1;
  if (param_1->Capacity != 7) {
    param_1 = *(FHierarchicalBlendTarget **)param_1->Data;
  }
  _Dst = this;
  if (uVar1 != 7) {
    _Dst = *(FHierarchicalBlendTarget **)this->Data;
  }
  memcpy(_Dst,param_1,(ulonglong)uVar1 * 2);
  return this;
}

// operator[] @ 14609b3d0

short __thiscall
UE::MovieScene::FHierarchicalBlendTarget::operator[](FHierarchicalBlendTarget *this,int param_1)

{
  ushort *puVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  
  if ((int)(uint)this->Capacity <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < static_cast<int32>(Capacity)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\BuiltInComponentTypes.cpp"
                       ,200,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      sVar4 = (*pcVar2)();
      return sVar4;
    }
  }
  puVar1 = &this->Capacity;
  if (*puVar1 != 7) {
    this = *(FHierarchicalBlendTarget **)this->Data;
  }
  uVar5 = 0;
  if (param_1 < (int)(uint)*puVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      sVar4 = (*pcVar2)();
      return sVar4;
    }
  }
  return *(short *)(this->Data + (longlong)param_1 * 2);
}

// Add @ 1460a5ef0

void __thiscall
UE::MovieScene::FHierarchicalBlendTarget::Add(FHierarchicalBlendTarget *this,short param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FHierarchicalBlendTarget *pFVar10;
  
  uVar4 = this->Capacity;
  uVar5 = (uint)uVar4;
  pFVar10 = this;
  if (uVar4 != 7) {
    pFVar10 = *(FHierarchicalBlendTarget **)this->Data;
  }
  uVar8 = 0;
  uVar7 = (uint)uVar4;
  uVar9 = uVar7;
  if (uVar4 != 0) {
    do {
      uVar3 = (int)uVar9 / 2;
      if (param_1 < *(short *)(pFVar10->Data + (longlong)(int)(uVar3 + uVar8) * 2)) {
        uVar8 = uVar3 + uVar8 + (int)uVar9 % 2;
      }
      uVar9 = uVar3;
    } while (0 < (int)uVar3);
  }
  if ((int)uVar8 < (int)uVar7) {
    uVar9 = 0;
    if ((int)uVar8 < (int)uVar7) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(short *)(pFVar10->Data + (longlong)(int)uVar8 * 2) == param_1) {
      return;
    }
  }
  uVar6 = this->Capacity;
  uVar7 = uVar6 - 1;
  uVar9 = 0;
  if ((int)uVar7 < (int)(uint)uVar4) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(short *)(pFVar10->Data + (ulonglong)uVar6 * 2 + -2) == -0x8000) {
    uVar4 = this->Capacity;
    if ((int)uVar8 < (int)(uint)uVar4) goto LAB_1460a6061;
  }
  else {
    uVar4 = this->Capacity;
  }
  uVar6 = 0x10;
  if (uVar4 != 7) {
    uVar6 = uVar4 + 0x10;
  }
  Grow(this,uVar6);
  uVar4 = this->Capacity;
  uVar5 = (uint)uVar4;
  pFVar10 = this;
  if (uVar5 != 7) {
    pFVar10 = *(FHierarchicalBlendTarget **)this->Data;
  }
LAB_1460a6061:
  if ((int)uVar8 < (int)(uVar4 - 1)) {
    uVar9 = 0;
    if ((int)uVar8 < (int)uVar5) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(short *)(pFVar10->Data + (longlong)(int)uVar8 * 2) != -0x8000) {
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar9 = uVar8 + 1;
      uVar7 = 0;
      if ((int)uVar9 < (int)uVar5) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      memmove(pFVar10->Data + (longlong)(int)uVar9 * 2,pFVar10->Data + (longlong)(int)uVar8 * 2,
              (longlong)(int)((this->Capacity - uVar8) + -1) * 2);
    }
  }
  uVar9 = 0;
  if ((int)uVar8 < (int)uVar5) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(short *)(pFVar10->Data + (longlong)(int)uVar8 * 2) = param_1;
  return;
}

// AsArray @ 1460ab2b0

TArrayView<short_const_,int> * __thiscall
UE::MovieScene::FHierarchicalBlendTarget::AsArray
          (FHierarchicalBlendTarget *this,TArrayView<short_const_,int> *__return_storage_ptr__)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<short_const_,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = this->Capacity;
  uVar6 = (uint)uVar1;
  uVar7 = (uint)uVar1;
  if (uVar7 != 7) {
    this = *(FHierarchicalBlendTarget **)this->Data;
  }
  uVar8 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = (int)uVar6 / 2;
      if (-0x8000 < *(short *)(this->Data + (longlong)(int)(uVar4 + uVar8) * 2)) {
        uVar8 = uVar4 + uVar8 + (int)uVar6 % 2;
      }
      uVar6 = uVar4;
    } while (0 < (int)uVar4);
  }
  __return_storage_ptr__->DataPtr = (short *)this;
  if ((int)uVar8 < (int)uVar7) {
    uVar7 = uVar8;
  }
  uVar6 = 0;
  if (0 < (int)uVar7) {
    uVar6 = uVar7;
  }
  __return_storage_ptr__->ArrayNum = uVar6;
  if (((int)uVar6 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<short_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// FreeAllocation @ 1460c6fb0

void __thiscall
UE::MovieScene::FHierarchicalBlendTarget::FreeAllocation(FHierarchicalBlendTarget *this)

{
  if (this->Capacity != 7) {
    operator_delete__(*(void **)this->Data);
    this->Capacity = 7;
  }
  return;
}

// GetAllEntries @ 1460c9190

TArrayView<short,int> * __thiscall
UE::MovieScene::FHierarchicalBlendTarget::GetAllEntries
          (FHierarchicalBlendTarget *this,TArrayView<short,int> *__return_storage_ptr__)

{
  ushort *puVar1;
  
  puVar1 = &this->Capacity;
  if (*puVar1 != 7) {
    this = *(FHierarchicalBlendTarget **)this->Data;
  }
  __return_storage_ptr__->ArrayNum = (uint)*puVar1;
  __return_storage_ptr__->DataPtr = (short *)this;
  return __return_storage_ptr__;
}

// GetAllEntries @ 1460c91b0

TArrayView<short_const_,int> * __thiscall
UE::MovieScene::FHierarchicalBlendTarget::GetAllEntries
          (FHierarchicalBlendTarget *this,TArrayView<short_const_,int> *__return_storage_ptr__)

{
  ushort *puVar1;
  
  puVar1 = &this->Capacity;
  if (*puVar1 != 7) {
    this = *(FHierarchicalBlendTarget **)this->Data;
  }
  __return_storage_ptr__->ArrayNum = (uint)*puVar1;
  __return_storage_ptr__->DataPtr = (short *)this;
  return __return_storage_ptr__;
}

// GetMemory @ 1460cde80

short * __thiscall
UE::MovieScene::FHierarchicalBlendTarget::GetMemory(FHierarchicalBlendTarget *this)

{
  if (this->Capacity != 7) {
    this = *(FHierarchicalBlendTarget **)this->Data;
  }
  return (short *)this;
}

// GetMemory @ 1460cdea0

short * __thiscall
UE::MovieScene::FHierarchicalBlendTarget::GetMemory(FHierarchicalBlendTarget *this)

{
  if (this->Capacity != 7) {
    this = *(FHierarchicalBlendTarget **)this->Data;
  }
  return (short *)this;
}

// Grow @ 1460d10e0

void __thiscall
UE::MovieScene::FHierarchicalBlendTarget::Grow(FHierarchicalBlendTarget *this,ushort param_1)

{
  ushort uVar1;
  ulong64 uVar2;
  void *_Dst;
  ulonglong uVar3;
  FHierarchicalBlendTarget *_Src;
  undefined2 *puVar4;
  
  uVar2 = SUB168(ZEXT816(2) * ZEXT216(param_1),0);
  if (SUB168(ZEXT816(2) * ZEXT216(param_1),8) != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  _Dst = operator_new__(uVar2);
  _Src = this;
  if (this->Capacity != 7) {
    _Src = *(FHierarchicalBlendTarget **)this->Data;
  }
  memmove(_Dst,_Src,(ulonglong)this->Capacity * 2);
  uVar1 = this->Capacity;
  if (uVar1 < param_1) {
    puVar4 = (undefined2 *)((longlong)_Dst + (ulonglong)uVar1 * 2);
    for (uVar3 = (ulonglong)(ushort)(param_1 - uVar1); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0x8000;
      puVar4 = puVar4 + 1;
    }
  }
  if (this->Capacity != 7) {
    operator_delete__(_Src);
  }
  this->Capacity = param_1;
  *(void **)this->Data = _Dst;
  return;
}

// Num @ 1460da5c0

int __thiscall UE::MovieScene::FHierarchicalBlendTarget::Num(FHierarchicalBlendTarget *this)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = this->Capacity;
  uVar2 = (uint)uVar1;
  if (uVar1 != 7) {
    this = *(FHierarchicalBlendTarget **)this->Data;
  }
  iVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = (int)uVar2 / 2;
      if (-0x8000 < *(short *)(this->Data + (longlong)(int)(uVar3 + iVar4) * 2)) {
        iVar4 = (int)uVar2 % 2 + uVar3 + iVar4;
      }
      uVar2 = uVar3;
    } while (0 < (int)uVar3);
  }
  return iVar4;
}

