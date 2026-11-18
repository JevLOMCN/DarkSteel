// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 5

// operator= @ 1436e7ba0

void __thiscall
UE::NNE::FSymbolicTensorShape::operator=(FSymbolicTensorShape *this,FSymbolicTensorShape *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> FVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((8 < (param_1->Data).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OtherShape.Rank() <= MaxRank",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNETypes.cpp"
                         ,0x33,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this != param_1) {
    FVar3 = (param_1->Data).AllocatorInstance.SecondaryData;
    piVar1 = &(this->Data).ArrayMax;
    iVar2 = (param_1->Data).ArrayNum;
    if (FVar3 != (ForElementType<int>)0x0) {
      param_1 = (FSymbolicTensorShape *)FVar3;
    }
    (this->Data).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 8;
      return;
    }
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,*piVar1,(ForElementType<int> *)this,iVar2,piVar1);
    FVar3 = (this->Data).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<int>)0x0) {
      this = (FSymbolicTensorShape *)FVar3;
    }
    if (iVar2 != 0) {
      memcpy(this,param_1,(longlong)iVar2 << 2);
    }
  }
  return;
}

// operator== @ 1436e7d60

bool __thiscall
UE::NNE::FSymbolicTensorShape::operator==(FSymbolicTensorShape *this,FSymbolicTensorShape *param_1)

{
  int iVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ForElementType<int> FVar9;
  ForElementType<int> FVar10;
  longlong lVar11;
  
  if (8 < (this->Data).ArrayNum) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("lhs.Rank() <= lhs.MaxRank",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNETypes.cpp"
                       ,0xc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar8 = (this->Data).ArrayNum;
  if (iVar8 == (param_1->Data).ArrayNum) {
    uVar7 = 0;
    if (0 < iVar8) {
      lVar11 = 0;
      do {
        FVar2 = (this->Data).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar9 = FVar2;
        }
        if (iVar8 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        FVar2 = (param_1->Data).AllocatorInstance.SecondaryData;
        iVar1 = (param_1->Data).ArrayNum;
        FVar10 = (ForElementType<int>)param_1;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar10 = FVar2;
        }
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        uVar6 = 0;
        if ((int)uVar7 < iVar1) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        uVar6 = 0;
        if ((int)uVar7 < iVar8) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        if (*(int *)((longlong)FVar9 + lVar11 * 4) != *(int *)((longlong)FVar10 + lVar11 * 4))
        goto LAB_1436e40dc;
        iVar8 = (this->Data).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar11 = lVar11 + 1;
      } while ((int)uVar7 < iVar8);
    }
    bVar4 = true;
  }
  else {
LAB_1436e40dc:
    bVar4 = false;
  }
  return bVar4;
}

// operator!= @ 1436e7d80

bool __thiscall
UE::NNE::FSymbolicTensorShape::operator!=(FSymbolicTensorShape *this,FSymbolicTensorShape *param_1)

{
  bool bVar1;
  
  bVar1 = TypesUtils::AreShapeEqual<UE::NNE::FSymbolicTensorShape>(this,param_1);
  return !bVar1;
}

// IsConcrete @ 1436eab60

bool __thiscall UE::NNE::FSymbolicTensorShape::IsConcrete(FSymbolicTensorShape *this)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ForElementType<int> FVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar7 = (this->Data).ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      FVar1 = (this->Data).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<int>)this;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar6 = FVar1;
      }
      if (*(int *)(lVar9 + (longlong)FVar6) < 0) {
        return false;
      }
      iVar7 = (this->Data).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < iVar7);
  }
  return true;
}

// Make @ 1436eac20

FSymbolicTensorShape * __cdecl
UE::NNE::FSymbolicTensorShape::Make
          (FSymbolicTensorShape *__return_storage_ptr__,TArrayView<int_const_,int> *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ForElementType<int> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSymbolicTensorShape *pFVar8;
  ForElementType<int> FVar9;
  
  if ((8 < param_1->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.Num() <= MaxRank",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNETypes.cpp"
                         ,0x39,
                         L"Cannot create symbolic tensor shape, input is rank %d while max rank is %d"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FSymbolicTensorShape *)(*pcVar5)();
    return pFVar8;
  }
  iVar3 = param_1->ArrayNum;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  *piVar1 = 0;
  *piVar2 = 8;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSymbolicTensorShape *)(*pcVar5)();
      return pFVar8;
    }
  }
  else if (iVar3 == 0) {
    return __return_storage_ptr__;
  }
  iVar7 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,iVar3,(ForElementType<int> *)__return_storage_ptr__,piVar1,piVar2);
  FVar4 = (__return_storage_ptr__->Data).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<int>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<int>)0x0) {
    FVar9 = FVar4;
  }
  memcpy((void *)((longlong)FVar9 + (longlong)iVar7 * 4),param_1->DataPtr,(longlong)iVar3 << 2);
  return __return_storage_ptr__;
}

