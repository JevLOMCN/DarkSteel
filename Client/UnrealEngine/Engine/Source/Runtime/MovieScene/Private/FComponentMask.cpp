// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// Set @ 1460f6af0

void __thiscall UE::MovieScene::FComponentMask::Set(FComponentMask *this,FComponentTypeID param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = ((uint)param_1.Value - (this->Bits).NumBits) + 1;
  if (0 < iVar4) {
    TBitArray<TFixedAllocator<12>_>::Add(&this->Bits,false,iVar4);
  }
  if ((this->Bits).NumBits <= (int)(uint)param_1.Value) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = (this->Bits).AllocatorInstance.InlineData + (param_1.Value >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)param_1.Value & 0x1f);
  return;
}

// SetAll @ 1460f6f50

void __thiscall
UE::MovieScene::FComponentMask::SetAll
          (FComponentMask *this,initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  FComponentTypeID *pFVar3;
  code *pcVar4;
  bool bVar5;
  FComponentTypeID *pFVar6;
  int iVar7;
  
  pFVar3 = param_1->_Last;
  pFVar6 = param_1->_First;
  while( true ) {
    if (pFVar6 == pFVar3) {
      return;
    }
    uVar2 = pFVar6->Value;
    iVar7 = ((uint)uVar2 - (this->Bits).NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&this->Bits,false,iVar7);
    }
    if (((this->Bits).NumBits <= (int)(uint)uVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) break;
    pFVar6 = pFVar6 + 1;
    pTVar1 = (this->Bits).AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// First @ 146132a50

FComponentTypeID __thiscall UE::MovieScene::FComponentMask::First(FComponentMask *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  ushort uVar4;
  TTypeCompatibleBytes<unsigned_int> *pTVar5;
  undefined2 *in_RDX;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar9 = 0;
  iVar1 = (this->Bits).NumBits;
  uVar7 = iVar1 + 0x1f;
  pTVar5 = (TTypeCompatibleBytes<unsigned_int> *)this;
  if (uVar7 >> 5 != 0) {
    do {
      if (*(int *)(((TBitArray<TFixedAllocator<12>_> *)pTVar5->Pad)->AllocatorInstance).InlineData
                  [0].Pad != 0) {
        pTVar5 = (this->Bits).AllocatorInstance.InlineData + uVar9;
        iVar2 = 0;
        bVar10 = *(int *)pTVar5->Pad != 0;
        if (bVar10) {
          for (; (*(uint *)pTVar5->Pad >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
          }
        }
        iVar6 = 0x20;
        if (bVar10) {
          iVar6 = iVar2;
        }
        uVar7 = iVar6 + (int)uVar9 * 0x20;
        if (((int)uVar7 < iVar1) && (uVar7 != 0xffffffff)) {
          if (((uVar7 & 0xffff0000) != 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(BitIndex & 0xFFFF0000) == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                                  ,0xba,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            uVar4 = (*pcVar3)();
            return (FComponentTypeID)uVar4;
          }
          *in_RDX = (short)uVar7;
          return (FComponentTypeID)(ushort)in_RDX;
        }
        break;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      pTVar5 = pTVar5 + 1;
    } while ((int)uVar8 < (int)(uVar7 >> 5));
  }
  *in_RDX = 0xffff;
  return (FComponentTypeID)(ushort)in_RDX;
}

// Iterate @ 146141880

TConstSetBitIterator<TFixedAllocator<12>_> * __thiscall
UE::MovieScene::FComponentMask::Iterate
          (FComponentMask *this,TConstSetBitIterator<TFixedAllocator<12>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 1;
  iVar6 = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->CurrentBitIndex = 0;
  __return_storage_ptr__->BaseBitIndex = 0;
  __return_storage_ptr__->Array = &this->Bits;
  __return_storage_ptr__->UnvisitedBitMask = 0xffffffff;
  iVar2 = (this->Bits).NumBits;
  if (iVar2 == 0) {
    return __return_storage_ptr__;
  }
  uVar3 = *(uint *)(this->Bits).AllocatorInstance.InlineData[0].Pad;
  while( true ) {
    if (uVar3 != 0) {
      *(uint *)((longlong)&__return_storage_ptr__->_padding_ + 4) = -uVar3 & uVar3;
      uVar1 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar6 = (int)lVar4 + -1 + iVar6;
      __return_storage_ptr__->CurrentBitIndex = iVar6;
      if (iVar2 < iVar6) {
        __return_storage_ptr__->CurrentBitIndex = iVar2;
      }
      return __return_storage_ptr__;
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x20;
    *(int *)&__return_storage_ptr__->_padding_ = iVar5;
    __return_storage_ptr__->BaseBitIndex = iVar6;
    if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar5) break;
    uVar3 = *(uint *)(this->Bits).AllocatorInstance.InlineData[iVar5].Pad;
    __return_storage_ptr__->UnvisitedBitMask = 0xffffffff;
  }
  __return_storage_ptr__->CurrentBitIndex = iVar2;
  return __return_storage_ptr__;
}

// NumComponents @ 146145850

int __thiscall UE::MovieScene::FComponentMask::NumComponents(FComponentMask *this)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = (this->Bits).NumBits;
  iVar6 = 0;
  uVar5 = 0;
  iVar1 = uVar4 + 0x1f;
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5;
  uVar4 = uVar4 & 0x8000001f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
  }
  uVar3 = 0xffffffff >> ((byte)(0x20 - uVar4) & 0x1f);
  if (0x1f < (int)(0x20 - uVar4)) {
    uVar3 = 0xffffffff;
  }
  uVar4 = 0xffffffff;
  if (iVar1 == 1) {
    uVar4 = uVar3;
  }
  if (0 < iVar1) {
    do {
      if (uVar4 == 0xffffffff) {
        uVar4 = *(uint *)(this->Bits).AllocatorInstance.InlineData[uVar5].Pad;
      }
      else {
        uVar4 = uVar4 & *(uint *)(this->Bits).AllocatorInstance.InlineData[uVar5].Pad;
      }
      uVar5 = uVar5 + 1;
      uVar2 = (ulonglong)uVar4 - ((ulonglong)(uVar4 >> 1) & 0x5555555555555555);
      uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
      iVar6 = iVar6 + (uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                  0x38);
      uVar4 = 0xffffffff;
      if (uVar5 == iVar1 - 1U) {
        uVar4 = uVar3;
      }
    } while ((int)uVar5 < iVar1);
  }
  return iVar6;
}

