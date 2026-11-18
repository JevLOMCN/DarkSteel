// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 5

// ~TSparseArray<TSparseSetElement<TObjectPtr<UMediaCapture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14d7d17a0

void __thiscall
TSparseArray<TSparseSetElement<TObjectPtr<UMediaCapture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TObjectPtr<UMediaCapture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TObjectPtr<UMediaCapture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14d7d1840

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14d7d18e0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14d7d1980

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// DestroyElements @ 14d7d6600

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar8 = (undefined8 *)(uVar6 * 0x60 + 0x48 + *(longlong *)this);
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
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          *(undefined4 *)(puVar8 + 1) = 0;
          if ((void *)*puVar8 != (void *)0x0) {
            FMemory::Free((void *)*puVar8);
          }
          TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(puVar8 + -8));
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar8 = puVar8 + 0xc;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

