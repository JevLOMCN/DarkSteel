// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Navmesh
// Functions: 5

// ~TSparseArray<dtSharedBoundaryData,FDefaultSparseArrayAllocator> @ 144652390

void __thiscall
TSparseArray<dtSharedBoundaryData,FDefaultSparseArrayAllocator>::
~TSparseArray<dtSharedBoundaryData,FDefaultSparseArrayAllocator>
          (TSparseArray<dtSharedBoundaryData,FDefaultSparseArrayAllocator> *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// Add @ 1446529b0

int __thiscall
TSparseArray<dtSharedBoundaryData,FDefaultSparseArrayAllocator>::Add
          (TSparseArray<dtSharedBoundaryData,FDefaultSparseArrayAllocator> *this,
          dtSharedBoundaryData *param_1)

{
  int iVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  int iVar5;
  FSparseArrayAllocationInfo local_28;
  
  if (*(int *)&this->field_0x34 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x98,8,1,(ForAnyElementType *)this,(int *)&this->field_0x8,
                       (int *)&this->field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,false);
  }
  else {
    iVar5 = *(int *)&this->field_0x30;
    iVar1 = *(int *)&this->field_0x34 + -1;
    iVar3 = *(int *)((longlong)iVar5 * 0x98 + 4 + *(longlong *)this);
    *(int *)&this->field_0x30 = iVar3;
    *(int *)&this->field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x98 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<152,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<152,8,FDefaultSparseArrayAllocator> *)this,&local_28,iVar5);
  if (local_28.Pointer != (double *)0x0) {
    dVar4 = param_1->Center[1];
    pFVar2 = (ForAnyElementType *)((longlong)local_28.Pointer + 0x38);
    *(double *)local_28.Pointer = param_1->Center[0];
    *(double *)((longlong)local_28.Pointer + 8) = dVar4;
    *(double *)((longlong)local_28.Pointer + 0x10) = param_1->Center[2];
    *(double *)((longlong)local_28.Pointer + 0x18) = param_1->Radius;
    *(double *)((longlong)local_28.Pointer + 0x20) = param_1->AccessTime;
    *(dtQueryFilter **)((longlong)local_28.Pointer + 0x28) = param_1->Filter;
    *(uchar *)((longlong)local_28.Pointer + 0x30) = param_1->SingleAreaId;
    pFVar2->Data = (FScriptContainerElement *)0x0;
    iVar5 = (param_1->Edges).ArrayNum;
    _Src = (param_1->Edges).AllocatorInstance.Data;
    *(int *)((longlong)local_28.Pointer + 0x40) = iVar5;
    if (iVar5 == 0) {
      *(int *)((longlong)local_28.Pointer + 0x44) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar5,0,pFVar2,iVar5,(int *)((longlong)local_28.Pointer + 0x44));
      memcpy(pFVar2->Data,_Src,(longlong)iVar5 << 6);
    }
    *(undefined8 *)
     &((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
      ((longlong)local_28.Pointer + 0x48))->Elements = 0;
    *(double *)((longlong)local_28.Pointer + 0x50) = 0.0;
    *(double *)((longlong)local_28.Pointer + 0x68) = 0.0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x70) = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x74) = 0x80;
    *(undefined4 *)((longlong)local_28.Pointer + 0x78) = 0xffffffff;
    *(undefined4 *)((longlong)local_28.Pointer + 0x7c) = 0;
    *(double *)((longlong)local_28.Pointer + 0x88) = 0.0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x90) = 0;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               ((longlong)local_28.Pointer + 0x48),&param_1->Polys);
  }
  return local_28.Index;
}

// DestroyElements @ 144654170

void __thiscall
TSparseArray<dtSharedBoundaryData,FDefaultSparseArrayAllocator>::DestroyElements
          (TSparseArray<dtSharedBoundaryData,FDefaultSparseArrayAllocator> *this,int param_1,
          int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar9 = (undefined8 *)(uVar6 * 0x98 + 0x88 + *(longlong *)this);
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
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          *(undefined4 *)(puVar9 + 1) = 0;
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(puVar9 + -8));
          if ((void *)puVar9[-10] != (void *)0x0) {
            FMemory::Free((void *)puVar9[-10]);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar9 = puVar9 + 0x13;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// Empty @ 144654290

void __thiscall
TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// RemoveAt @ 144655290

void __thiscall
TSparseArray<dtSharedBoundaryData,FDefaultSparseArrayAllocator>::RemoveAt
          (TSparseArray<dtSharedBoundaryData,FDefaultSparseArrayAllocator> *this,int param_1,
          int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x98 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x98 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0x26;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

