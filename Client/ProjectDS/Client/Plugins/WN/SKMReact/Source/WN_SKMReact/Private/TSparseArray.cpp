// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_SKMReact
// Functions: 5

// ~TSparseArray<TSparseSetElement<TTuple<FName,FWN_SKMReact_BoneTraceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14acd5d50

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FWN_SKMReact_BoneTraceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FWN_SKMReact_BoneTraceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FWN_SKMReact_BoneTraceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// ~TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14acd5df0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// operator= @ 14acd60c0

TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar8;
  FString *pFVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 *puVar14;
  longlong lVar15;
  
  if (this == param_1) {
    return this;
  }
  iVar7 = *(int *)&param_1->field_0x8;
  lVar12 = (longlong)iVar7;
  Empty(this,iVar7);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,iVar7,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar13 = 0;
  if (0 < iVar7) {
    uVar11 = 1;
    puVar10 = (undefined8 *)(*(longlong *)this + 0x10);
    lVar15 = *(longlong *)param_1 - *(longlong *)this;
    do {
      if ((iVar13 < 0) || (*(int *)&param_1->field_0x28 <= iVar13)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      puVar14 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar14 = *(undefined1 **)&param_1->field_0x20;
      }
      pFVar9 = (FString *)(lVar15 + -0x10 + (longlong)puVar10);
      iVar7 = iVar13;
      if (iVar13 < 0) {
        iVar7 = iVar13 + 0x1f;
      }
      if ((*(uint *)(puVar14 + (longlong)(iVar7 >> 5) * 4) & uVar11) == 0) {
        *(undefined4 *)&(((FString *)(puVar10 + -2))->Data).AllocatorInstance.Data =
             *(undefined4 *)&(pFVar9->Data).AllocatorInstance.Data;
        *(undefined4 *)((longlong)puVar10 + -0xc) =
             *(undefined4 *)(lVar15 + -0xc + (longlong)puVar10);
      }
      else {
        ::FString::FString((FString *)(puVar10 + -2),pFVar9);
        pUVar3 = *(UObject **)(lVar15 + (longlong)puVar10);
        *puVar10 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        puVar2 = (undefined8 *)(lVar15 + 8 + (longlong)puVar10);
        uVar5 = puVar2[1];
        puVar10[1] = *puVar2;
        puVar10[2] = uVar5;
        puVar10[3] = *(undefined8 *)(lVar15 + 0x18 + (longlong)puVar10);
        puVar2 = (undefined8 *)(lVar15 + 0x20 + (longlong)puVar10);
        uVar5 = puVar2[1];
        puVar10[4] = *puVar2;
        puVar10[5] = uVar5;
        puVar10[6] = *(undefined8 *)(lVar15 + 0x30 + (longlong)puVar10);
        *(undefined4 *)(puVar10 + 7) = *(undefined4 *)(lVar15 + 0x38 + (longlong)puVar10);
        *(undefined4 *)((longlong)puVar10 + 0x3c) =
             *(undefined4 *)(lVar15 + 0x3c + (longlong)puVar10);
      }
      iVar13 = iVar13 + 1;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      puVar10 = puVar10 + 10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return this;
}

// DestroyElements @ 14acd6730

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    puVar10 = (undefined8 *)(uVar6 * 0x50 + *(longlong *)this);
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
      puVar10 = puVar10 + 10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// Empty @ 14acd69a0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

