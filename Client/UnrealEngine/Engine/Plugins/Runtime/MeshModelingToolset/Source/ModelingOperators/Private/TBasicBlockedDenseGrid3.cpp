// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 7

// GetValue @ 14c980a40

float __thiscall
UE::Geometry::TBasicBlockedDenseGrid3<float,8>::GetValue
          (TBasicBlockedDenseGrid3<float,8> *this,FVector3i *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar1 = (param_1->field0_0x0)._s_0.X;
  uVar7 = iVar1 >> 0x1f & 7;
  uVar4 = iVar1 + uVar7;
  iVar1 = (param_1->field0_0x0)._s_0.Y;
  uVar8 = iVar1 >> 0x1f & 7;
  uVar5 = iVar1 + uVar8;
  iVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar9 = iVar1 >> 0x1f & 7;
  uVar6 = iVar1 + uVar9;
  lVar10 = (longlong)
           ((((int)uVar6 >> 3) * *(int *)((longlong)&this->_padding_ + 4) + ((int)uVar5 >> 3)) *
            (int)this->_padding_ + ((int)uVar4 >> 3));
  pFVar2 = (this->Blocks).AllocatorInstance.Data;
  lVar3 = *(longlong *)(pFVar2 + lVar10 * 0x10);
  if (lVar3 != 0) {
    return *(float *)(lVar3 + 4 +
                     (ulonglong)
                     (((uVar4 & 7) - uVar7) +
                     (((uVar5 & 7) - uVar8) + ((uVar6 & 7) - uVar9) * 8) * 8) * 4);
  }
  return *(float *)(pFVar2 + lVar10 * 0x10 + 8);
}

// Resize @ 14c984360

void __thiscall
UE::Geometry::TBasicBlockedDenseGrid3<int,8>::Resize
          (TBasicBlockedDenseGrid3<int,8> *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FBlock3 *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  
  TBlockedGrid3Layout<8>::Resize((TBlockedGrid3Layout<8> *)this,param_1,param_2,param_3);
  piVar1 = &(this->Blocks).ArrayMax;
  piVar2 = &(this->Blocks).ArrayNum;
  pFVar4 = (FBlock3 *)(this->Blocks).AllocatorInstance.Data;
  uVar13 = (int)this->_padding_ * *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_;
  if (*piVar1 < 0) {
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,8>::FBlock3,int>(pFVar4,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Blocks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,8>::FBlock3,int>(pFVar4,*piVar2);
    *piVar2 = 0;
  }
  uVar11 = 0;
  iVar3 = *piVar2;
  if (iVar3 < (int)uVar13) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar13 - iVar3,&(this->Blocks).AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,8>::FBlock3,int>
              ((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 0x10,uVar13 - iVar3);
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < iVar3) {
      uVar10 = iVar3 - uVar13;
      if (((int)(uVar10 | uVar13) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar10 != 0) {
        TArray<UE::Geometry::TBasicBlockedDenseGrid3<int,8>::FBlock3,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&this->Blocks,uVar13,uVar10);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Blocks).AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  lVar12 = (longlong)(int)uVar13;
  uVar14 = uVar11;
  if (0 < (int)uVar13) {
    do {
      uVar10 = (uint)uVar11;
      uVar13 = 0;
      if ((int)uVar10 < *piVar2) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->Blocks).AllocatorInstance.Data;
      pvVar6 = *(void **)(pFVar5 + uVar14);
      if (pvVar6 != (void *)0x0) {
        *(undefined8 *)(pFVar5 + uVar14) = 0;
        ::operator_delete(pvVar6,0x804);
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      *(int *)(pFVar5 + uVar14 + 8) = this->DefaultValue;
      lVar12 = lVar12 + -1;
      uVar14 = uVar14 + 0x10;
    } while (lVar12 != 0);
  }
  return;
}

// Resize @ 14c984570

void __thiscall
UE::Geometry::TBasicBlockedDenseGrid3<float,8>::Resize
          (TBasicBlockedDenseGrid3<float,8> *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FBlock3 *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  TBlockedGrid3Layout<8>::Resize((TBlockedGrid3Layout<8> *)this,param_1,param_2,param_3);
  piVar1 = &(this->Blocks).ArrayMax;
  piVar2 = &(this->Blocks).ArrayNum;
  pFVar4 = (FBlock3 *)(this->Blocks).AllocatorInstance.Data;
  uVar12 = (int)this->_padding_ * *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_;
  if (*piVar1 < 0) {
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<float,8>::FBlock3,int>(pFVar4,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Blocks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<float,8>::FBlock3,int>(pFVar4,*piVar2);
    *piVar2 = 0;
  }
  uVar11 = 0;
  iVar3 = *piVar2;
  if (iVar3 < (int)uVar12) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar12 - iVar3,&(this->Blocks).AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<UE::Geometry::TBasicBlockedDenseGrid3<float,8>::FBlock3,int>
              ((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 0x10,uVar12 - iVar3);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar3) {
      uVar10 = iVar3 - uVar12;
      if (((int)(uVar10 | uVar12) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar10 != 0) {
        TArray<UE::Geometry::TBasicBlockedDenseGrid3<float,8>::FBlock3,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&this->Blocks,uVar12,uVar10);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Blocks).AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  lVar14 = (longlong)(int)uVar12;
  uVar13 = uVar11;
  if (0 < (int)uVar12) {
    do {
      uVar10 = (uint)uVar13;
      uVar12 = 0;
      if ((int)uVar10 < *piVar2) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->Blocks).AllocatorInstance.Data;
      pvVar6 = *(void **)(pFVar5 + uVar11);
      if (pvVar6 != (void *)0x0) {
        *(undefined8 *)(pFVar5 + uVar11) = 0;
        ::operator_delete(pvVar6,0x804);
      }
      *(float *)(pFVar5 + uVar11 + 8) = this->DefaultValue;
      uVar11 = uVar11 + 0x10;
      lVar14 = lVar14 + -1;
      uVar13 = (ulonglong)(uVar10 + 1);
    } while (lVar14 != 0);
  }
  return;
}

// Resize @ 14c984780

void __thiscall
UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::Resize
          (TBasicBlockedDenseGrid3<bool,8> *this,int param_1,int param_2,int param_3)

{
  TArray<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  int *piVar2;
  int iVar3;
  FBlock3 *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  TBlockedGrid3Layout<8>::Resize((TBlockedGrid3Layout<8> *)this,param_1,param_2,param_3);
  this_00 = &this->Blocks;
  piVar1 = &(this->Blocks).ArrayMax;
  pFVar4 = (FBlock3 *)(this_00->AllocatorInstance).Data;
  piVar2 = &(this->Blocks).ArrayNum;
  uVar12 = (int)this->_padding_ * *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_;
  if (*piVar1 < 0) {
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,int>(pFVar4,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,int>(pFVar4,*piVar2);
    *piVar2 = 0;
  }
  uVar11 = 0;
  iVar3 = *piVar2;
  if (iVar3 < (int)uVar12) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar12 - iVar3,&this_00->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x10,uVar12 - iVar3);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar3) {
      uVar10 = iVar3 - uVar12;
      if (((int)(uVar10 | uVar12) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar10 != 0) {
        TArray<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_00,uVar12,uVar10);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  lVar14 = (longlong)(int)uVar12;
  uVar13 = uVar11;
  if (0 < (int)uVar12) {
    do {
      uVar10 = (uint)uVar11;
      uVar12 = 0;
      if ((int)uVar10 < *piVar2) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this_00->AllocatorInstance).Data;
      pvVar6 = *(void **)(pFVar5 + uVar13);
      if (pvVar6 != (void *)0x0) {
        *(undefined8 *)(pFVar5 + uVar13) = 0;
        if (*(void **)((longlong)pvVar6 + 0x808) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar6 + 0x808));
        }
        ::operator_delete(pvVar6,0x818);
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      pFVar5[uVar13 + 8] = (FScriptContainerElement)this->DefaultValue;
      lVar14 = lVar14 + -1;
      uVar13 = uVar13 + 0x10;
    } while (lVar14 != 0);
  }
  return;
}

// TouchBlockData @ 14c986c10

TBlockData3<int,8> * __thiscall
UE::Geometry::TBasicBlockedDenseGrid3<int,8>::TouchBlockData
          (TBasicBlockedDenseGrid3<int,8> *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement local_18 [16];
  
  pFVar4 = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  if (*(longlong *)pFVar4 == 0) {
    piVar2 = ::operator_new(0x804);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = param_1;
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)piVar2 + lVar3 + 4) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 8) = *(undefined4 *)(pFVar4 + 8);
        lVar3 = lVar3 + 8;
      } while (lVar3 < 0x800);
    }
    if (pFVar4 != local_18) {
      pvVar1 = *(void **)pFVar4;
      *(int **)pFVar4 = piVar2;
      piVar2 = (int *)0x0;
      ::operator_delete(pvVar1,0x804);
    }
    ::operator_delete(piVar2,0x804);
  }
  return *(TBlockData3<int,8> **)pFVar4;
}

// TouchBlockData @ 14c986cc0

TBlockData3<float,8> * __thiscall
UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData
          (TBasicBlockedDenseGrid3<float,8> *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement local_18 [16];
  
  pFVar4 = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  if (*(longlong *)pFVar4 == 0) {
    piVar2 = ::operator_new(0x804);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = param_1;
      lVar3 = 0xc;
      do {
        *(undefined4 *)((longlong)piVar2 + lVar3 + -8) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + -4) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 4) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 8) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 0xc) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 0x10) = *(undefined4 *)(pFVar4 + 8);
        *(undefined4 *)((longlong)piVar2 + lVar3 + 0x14) = *(undefined4 *)(pFVar4 + 8);
        lVar3 = lVar3 + 0x20;
      } while (lVar3 < 0x80c);
    }
    if (pFVar4 != local_18) {
      pvVar1 = *(void **)pFVar4;
      *(int **)pFVar4 = piVar2;
      piVar2 = (int *)0x0;
      ::operator_delete(pvVar1,0x804);
    }
    ::operator_delete(piVar2,0x804);
  }
  return *(TBlockData3<float,8> **)pFVar4;
}

// TouchBlockData @ 14c986d90

TBlockData3<bool,8> * __thiscall
UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::TouchBlockData
          (TBasicBlockedDenseGrid3<bool,8> *this,int param_1)

{
  void *pvVar1;
  ForElementType<unsigned_int> FVar2;
  TBlockData3<bool,8> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement local_18 [16];
  
  pFVar4 = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  if (*(longlong *)pFVar4 == 0) {
    pTVar3 = ::operator_new(0x818);
    if (pTVar3 == (TBlockData3<bool,8> *)0x0) {
      pTVar3 = (TBlockData3<bool,8> *)0x0;
    }
    else {
      pTVar3 = TBlockData3<bool,8>::TBlockData3<bool,8>(pTVar3,(bool *)(pFVar4 + 8),param_1);
    }
    if (pFVar4 != local_18) {
      pvVar1 = *(void **)pFVar4;
      *(TBlockData3<bool,8> **)pFVar4 = pTVar3;
      if (pvVar1 != (void *)0x0) {
        if (*(void **)((longlong)pvVar1 + 0x808) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar1 + 0x808));
        }
        ::operator_delete(pvVar1,0x818);
        return *(TBlockData3<bool,8> **)pFVar4;
      }
      return pTVar3;
    }
    if (pTVar3 != (TBlockData3<bool,8> *)0x0) {
      FVar2 = (pTVar3->BitArray).AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      ::operator_delete(pTVar3,0x818);
    }
  }
  return *(TBlockData3<bool,8> **)pFVar4;
}

