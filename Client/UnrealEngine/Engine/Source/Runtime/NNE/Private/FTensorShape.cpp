// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 7

// operator= @ 1436e7c80

void __thiscall UE::NNE::FTensorShape::operator=(FTensorShape *this,FTensorShape *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((8 < (param_1->Data).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OtherShape.Rank() <= MaxRank",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNETypes.cpp"
                         ,0x65,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this != param_1) {
    FVar3 = (param_1->Data).AllocatorInstance.SecondaryData;
    piVar1 = &(this->Data).ArrayMax;
    iVar2 = (param_1->Data).ArrayNum;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      param_1 = (FTensorShape *)FVar3;
    }
    (this->Data).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 8;
      return;
    }
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,iVar2,*piVar1,(ForElementType<unsigned_int> *)this,iVar2,piVar1);
    FVar3 = (this->Data).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      this = (FTensorShape *)FVar3;
    }
    if (iVar2 != 0) {
      memcpy(this,param_1,(longlong)iVar2 << 2);
    }
  }
  return;
}

// operator== @ 1436e7d70

bool __thiscall UE::NNE::FTensorShape::operator==(FTensorShape *this,FTensorShape *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
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
        FVar9 = (ForElementType<unsigned_int>)this;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
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
        FVar10 = (ForElementType<unsigned_int>)param_1;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
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
        goto LAB_1436e42ac;
        iVar8 = (this->Data).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar11 = lVar11 + 1;
      } while ((int)uVar7 < iVar8);
    }
    bVar4 = true;
  }
  else {
LAB_1436e42ac:
    bVar4 = false;
  }
  return bVar4;
}

// operator!= @ 1436e7da0

bool __thiscall UE::NNE::FTensorShape::operator!=(FTensorShape *this,FTensorShape *param_1)

{
  bool bVar1;
  
  bVar1 = TypesUtils::AreShapeEqual<UE::NNE::FTensorShape>(this,param_1);
  return !bVar1;
}

// IsCompatibleWith @ 1436ea980

bool __thiscall
UE::NNE::FTensorShape::IsCompatibleWith(FTensorShape *this,FSymbolicTensorShape *param_1)

{
  int iVar1;
  ForElementType<int> FVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ForElementType<int> FVar11;
  ForElementType<unsigned_int> FVar12;
  
  iVar1 = (this->Data).ArrayNum;
  if (iVar1 == (param_1->Data).ArrayNum) {
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        FVar2 = (param_1->Data).AllocatorInstance.SecondaryData;
        iVar1 = (param_1->Data).ArrayNum;
        FVar11 = (ForElementType<int>)param_1;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar11 = FVar2;
        }
        if (iVar1 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        uVar10 = ~uVar8 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar8 < iVar1) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        if (-1 < *(int *)((longlong)FVar11 + lVar9 * 4)) {
          FVar2 = (param_1->Data).AllocatorInstance.SecondaryData;
          iVar1 = (param_1->Data).ArrayNum;
          FVar11 = (ForElementType<int>)param_1;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar11 = FVar2;
          }
          if (iVar1 < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          uVar7 = 0;
          if ((int)uVar8 < (this->Data).ArrayNum) {
            uVar7 = uVar10;
          }
          if (uVar7 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          FVar3 = (this->Data).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<unsigned_int>)this;
          if (FVar3 != (ForElementType<unsigned_int>)0x0) {
            FVar12 = FVar3;
          }
          uVar7 = 0;
          if ((int)uVar8 < iVar1) {
            uVar7 = uVar10;
          }
          if (uVar7 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          if (*(int *)((longlong)FVar11 + lVar9 * 4) != *(int *)((longlong)FVar12 + lVar9 * 4))
          goto LAB_1436eab33;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar8 < (this->Data).ArrayNum);
    }
    bVar5 = true;
  }
  else {
LAB_1436eab33:
    bVar5 = false;
  }
  return bVar5;
}

// Make @ 1436eae40

FTensorShape * __cdecl
UE::NNE::FTensorShape::Make
          (FTensorShape *__return_storage_ptr__,TArrayView<unsigned_int_const_,int> *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FTensorShape *pFVar8;
  ForElementType<unsigned_int> FVar9;
  
  if ((8 < param_1->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.Num() <= MaxRank",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNETypes.cpp"
                         ,0x6b,L"Cannot create tensor shape, input is rank %d while max rank is %d")
     , bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FTensorShape *)(*pcVar5)();
    return pFVar8;
  }
  iVar3 = param_1->ArrayNum;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
  ;
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
      pFVar8 = (FTensorShape *)(*pcVar5)();
      return pFVar8;
    }
  }
  else if (iVar3 == 0) {
    return __return_storage_ptr__;
  }
  iVar7 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,iVar3,(ForElementType<unsigned_int> *)__return_storage_ptr__,piVar1,piVar2)
  ;
  FVar4 = (__return_storage_ptr__->Data).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<unsigned_int>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FVar9 = FVar4;
  }
  memcpy((void *)((longlong)FVar9 + (longlong)iVar7 * 4),param_1->DataPtr,(longlong)iVar3 << 2);
  return __return_storage_ptr__;
}

// MakeFromSymbolic @ 1436eaf50

FTensorShape * __cdecl
UE::NNE::FTensorShape::MakeFromSymbolic
          (FTensorShape *__return_storage_ptr__,FSymbolicTensorShape *param_1)

{
  ForElementType<int> FVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FTensorShape *pFVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  ForElementType<int> FVar10;
  longlong lVar11;
  int local_28 [4];
  
  (__return_storage_ptr__->Data).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
  ;
  uVar9 = 0;
  lVar11 = 0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 8;
  while( true ) {
    iVar6 = (param_1->Data).ArrayNum;
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTensorShape *)(*pcVar3)();
      return pFVar7;
    }
    if (iVar6 <= (int)uVar9) {
      return __return_storage_ptr__;
    }
    FVar1 = (param_1->Data).AllocatorInstance.SecondaryData;
    iVar6 = (param_1->Data).ArrayNum;
    FVar10 = (ForElementType<int>)param_1;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar10 = FVar1;
    }
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) break;
    uVar5 = 0;
    if ((int)uVar9 < iVar6) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTensorShape *)(*pcVar3)();
      return pFVar7;
    }
    local_28[0] = *(int *)(lVar11 + (longlong)FVar10);
    FVar2 = (__return_storage_ptr__->Data).AllocatorInstance.SecondaryData;
    if (local_28[0] < 0) {
      local_28[0] = 1;
    }
    FVar8 = (ForElementType<unsigned_int>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar8 = FVar2;
    }
    if ((ulonglong)FVar8 <= local_28) {
      FVar8 = (ForElementType<unsigned_int>)__return_storage_ptr__;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar2;
      }
      if ((local_28 <
           (int *)((longlong)FVar8 + (longlong)(__return_storage_ptr__->Data).ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FTensorShape *)(*pcVar3)();
        return pFVar7;
      }
    }
    iVar6 = (__return_storage_ptr__->Data).ArrayNum;
    if (iVar6 == (__return_storage_ptr__->Data).ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                        (0x404,(ForElementType<unsigned_int> *)__return_storage_ptr__,
                         &(__return_storage_ptr__->Data).ArrayMax);
    }
    (__return_storage_ptr__->Data).ArrayNum = iVar6 + 1;
    FVar2 = (__return_storage_ptr__->Data).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<unsigned_int>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar8 = FVar2;
    }
    uVar9 = uVar9 + 1;
    lVar11 = lVar11 + 4;
    *(int *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_28[0];
  }
  pcVar3 = (code *)swi(3);
  pFVar7 = (FTensorShape *)(*pcVar3)();
  return pFVar7;
}

// Volume @ 1436ee160

ulong64 __thiscall UE::NNE::FTensorShape::Volume(FTensorShape *this)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  longlong lVar9;
  ulong64 uVar10;
  
  iVar6 = (this->Data).ArrayNum;
  uVar8 = 0;
  uVar10 = 1;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return uVar10;
      }
      FVar2 = (this->Data).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<unsigned_int>)this;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar2;
      }
      uVar8 = uVar8 + 1;
      puVar1 = (uint *)((longlong)FVar7 + lVar9);
      lVar9 = lVar9 + 4;
      iVar6 = (this->Data).ArrayNum;
      uVar10 = uVar10 * *puVar1;
    } while ((int)uVar8 < iVar6);
  }
  return uVar10;
}

