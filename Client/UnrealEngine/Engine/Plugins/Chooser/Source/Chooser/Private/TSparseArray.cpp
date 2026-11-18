// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// ~TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a87e220

void __thiscall
TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FCompiledBindingCacheId,TWeakPtr<UE::Chooser::FCompiledBinding,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a87e2c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FCompiledBindingCacheId,TWeakPtr<UE::Chooser::FCompiledBinding,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FCompiledBindingCacheId,TWeakPtr<UE::Chooser::FCompiledBinding,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FCompiledBindingCacheId,TWeakPtr<UE::Chooser::FCompiledBinding,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator= @ 14a87ede0

TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  ForElementType<int> *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  int *piVar7;
  undefined1 *puVar8;
  ForElementType<int> *_Dst;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *_Src;
  
  if (this == param_1) {
    return this;
  }
  iVar12 = *(int *)&param_1->field_0x8;
  lVar13 = (longlong)iVar12;
  Empty(this,iVar12);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar12,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc
            );
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < lVar13) {
    plVar10 = (longlong *)(*(longlong *)param_1 + 0x18);
    lVar9 = *(longlong *)this - *(longlong *)param_1;
    uVar11 = 1;
    do {
      if (((iVar12 < 0) || (*(int *)&param_1->field_0x28 <= iVar12)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(*pcVar3)();
        return pTVar6;
      }
      puVar8 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar5 = iVar12;
      if (iVar12 < 0) {
        iVar5 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) {
        *(int *)(lVar9 + -0x18 + (longlong)plVar10) = (int)plVar10[-3];
        *(undefined4 *)(lVar9 + -0x14 + (longlong)plVar10) =
             *(undefined4 *)((longlong)plVar10 + -0x14);
      }
      else {
        *(longlong *)(lVar9 + -0x18 + (longlong)plVar10) = plVar10[-3];
        *(undefined8 *)(lVar9 + (longlong)plVar10) = 0;
        _Src = (longlong *)*plVar10;
        iVar5 = (int)plVar10[1];
        *(int *)(lVar9 + 8 + (longlong)plVar10) = iVar5;
        if (_Src == (longlong *)0x0) {
          _Src = plVar10 + -2;
        }
        piVar7 = (int *)((longlong)plVar10 + lVar9 + 0xc);
        if (iVar5 == 0) {
          *piVar7 = 4;
        }
        else {
          pFVar2 = (ForElementType<int> *)(lVar9 + -0x10 + (longlong)plVar10);
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,iVar5,0,pFVar2,iVar5,piVar7);
          _Dst = *(ForElementType<int> **)(lVar9 + (longlong)plVar10);
          if (*(ForElementType<int> **)(lVar9 + (longlong)plVar10) == (ForElementType<int> *)0x0) {
            _Dst = pFVar2;
          }
          memcpy(_Dst,_Src,(longlong)iVar5 << 2);
        }
        *(int *)(lVar9 + 0x10 + (longlong)plVar10) = (int)plVar10[2];
        *(int *)(lVar9 + 0x18 + (longlong)plVar10) = (int)plVar10[3];
        *(undefined4 *)(lVar9 + 0x1c + (longlong)plVar10) =
             *(undefined4 *)((longlong)plVar10 + 0x1c);
      }
      iVar12 = iVar12 + 1;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      plVar10 = plVar10 + 7;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return this;
}

// DestroyElements @ 14a885660

void __thiscall
TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x38 + 0x18 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 7;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a885750

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FCompiledBindingCacheId,TWeakPtr<UE::Chooser::FCompiledBinding,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FCompiledBindingCacheId,TWeakPtr<UE::Chooser::FCompiledBinding,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  
  uVar8 = (ulonglong)param_1;
  if ((longlong)uVar8 < (longlong)(param_1 + param_2)) {
    bVar4 = (byte)param_1 & 0x1f;
    uVar10 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    lVar9 = (longlong)(param_1 + param_2) - uVar8;
    plVar12 = (longlong *)(*(longlong *)this + (uVar8 * 5 + 3) * 8);
    do {
      iVar7 = (int)uVar8;
      if ((-1 < iVar7) && (iVar7 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar11 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&this->field_0x20;
        }
        iVar6 = iVar7;
        if (iVar7 < 0) {
          iVar6 = iVar7 + 0x1f;
        }
        if (((*(uint *)(puVar11 + (longlong)(iVar6 >> 5) * 4) & uVar10) != 0) &&
           (plVar2 = (longlong *)*plVar12, plVar2 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      plVar12 = plVar12 + 5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

// Empty @ 14a885870

void __thiscall
TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<void_const_*,FRandomizationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

