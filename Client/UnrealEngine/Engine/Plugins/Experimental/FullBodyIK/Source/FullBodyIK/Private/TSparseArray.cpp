// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 6

// ~TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14df740f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// ~TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14df74190

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// operator= @ 14df74560

TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  void *_Src;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ForAnyElementType *pFVar13;
  longlong local_res8;
  
  if (this == param_1) {
    return this;
  }
  iVar6 = *(int *)&param_1->field_0x8;
  local_res8 = (longlong)iVar6;
  Empty(this,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,0x10,iVar6,(ForAnyElementType *)this,(int *)&this->field_0x8,
             (int *)&this->field_0xc);
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar11 = 0;
  if (0 < iVar6) {
    puVar9 = (undefined1 *)(*(longlong *)param_1 + 0x10);
    uVar10 = 1;
    lVar12 = *(longlong *)this - *(longlong *)param_1;
    do {
      if (((iVar11 < 0) || (*(int *)&param_1->field_0x28 <= iVar11)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
      puVar8 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar6 = iVar11;
      if (iVar11 < 0) {
        iVar6 = iVar11 + 0x1f;
      }
      uVar2 = *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4);
      *(undefined4 *)(puVar9 + lVar12 + -0x10) = *(undefined4 *)(puVar9 + -0x10);
      if ((uVar2 & uVar10) == 0) {
        *(undefined4 *)(puVar9 + lVar12 + -0xc) = *(undefined4 *)(puVar9 + -0xc);
      }
      else {
        puVar9[lVar12] = *puVar9;
        pFVar13 = (ForAnyElementType *)(puVar9 + lVar12 + 0x70);
        uVar4 = *(undefined8 *)(puVar9 + 0x10);
        *(undefined8 *)(puVar9 + lVar12 + 8) = *(undefined8 *)(puVar9 + 8);
        *(undefined8 *)((longlong)(puVar9 + lVar12 + 8) + 8) = uVar4;
        *(undefined8 *)(puVar9 + lVar12 + 0x18) = *(undefined8 *)(puVar9 + 0x18);
        puVar9[lVar12 + 0x20] = puVar9[0x20];
        uVar4 = *(undefined8 *)(puVar9 + 0x38);
        *(undefined8 *)(puVar9 + lVar12 + 0x30) = *(undefined8 *)(puVar9 + 0x30);
        *(undefined8 *)((longlong)(puVar9 + lVar12 + 0x30) + 8) = uVar4;
        uVar4 = *(undefined8 *)(puVar9 + 0x48);
        *(undefined8 *)(puVar9 + lVar12 + 0x40) = *(undefined8 *)(puVar9 + 0x40);
        *(undefined8 *)((longlong)(puVar9 + lVar12 + 0x40) + 8) = uVar4;
        *(undefined4 *)(puVar9 + lVar12 + 0x50) = *(undefined4 *)(puVar9 + 0x50);
        *(undefined4 *)(puVar9 + lVar12 + 0x54) = *(undefined4 *)(puVar9 + 0x54);
        *(undefined4 *)(puVar9 + lVar12 + 0x58) = *(undefined4 *)(puVar9 + 0x58);
        *(undefined4 *)(puVar9 + lVar12 + 0x5c) = *(undefined4 *)(puVar9 + 0x5c);
        *(undefined4 *)(puVar9 + lVar12 + 0x60) = *(undefined4 *)(puVar9 + 0x60);
        *(undefined4 *)(puVar9 + lVar12 + 100) = *(undefined4 *)(puVar9 + 100);
        *(undefined4 *)(puVar9 + lVar12 + 0x68) = *(undefined4 *)(puVar9 + 0x68);
        *(undefined4 *)(puVar9 + lVar12 + 0x6c) = *(undefined4 *)(puVar9 + 0x6c);
        pFVar13->Data = (FScriptContainerElement *)0x0;
        _Src = *(void **)(puVar9 + 0x70);
        iVar6 = *(int *)(puVar9 + 0x78);
        *(int *)(puVar9 + lVar12 + 0x78) = iVar6;
        if (iVar6 == 0) {
          *(int *)(puVar9 + lVar12 + 0x7c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar6,0,pFVar13,iVar6,(int *)(puVar9 + lVar12 + 0x7c));
          memcpy(pFVar13->Data,_Src,(longlong)iVar6 << 2);
        }
        *(undefined4 *)(puVar9 + lVar12 + 0x80) = *(undefined4 *)(puVar9 + 0x80);
        *(undefined4 *)(puVar9 + lVar12 + 0x84) = *(undefined4 *)(puVar9 + 0x84);
      }
      iVar11 = iVar11 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar9 = puVar9 + 0xa0;
      local_res8 = local_res8 + -1;
    } while (local_res8 != 0);
  }
  return this;
}

// DestroyElements @ 14df7e3a0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    puVar10 = (undefined8 *)(uVar6 * 0xa0 + 0x80 + *(longlong *)this);
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
      puVar10 = puVar10 + 0x14;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// Empty @ 14df7e8d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,0x10,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// Empty @ 14df7e980

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

