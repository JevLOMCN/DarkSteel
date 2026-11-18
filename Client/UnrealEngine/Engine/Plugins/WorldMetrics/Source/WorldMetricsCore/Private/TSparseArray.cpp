// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 3

// ~TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_> @ 14f1334d0

void __thiscall
TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::
~TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          (TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *(undefined4 *)&this->field_0x208 = 0;
  if (*(int *)&this->field_0x20c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
              (0x10,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)
                        this,0,(int *)&this->field_0x20c);
  }
  *(undefined4 *)&this->field_0x228 = 0xffffffff;
  *(undefined4 *)&this->field_0x22c = 0;
  *(undefined4 *)&this->field_0x220 = 0;
  if ((*(int *)&this->field_0x224 < 0) || (0x20 < *(int *)&this->field_0x224)) {
    *(undefined4 *)&this->field_0x224 = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               &this->field_0x210,0);
  }
  if (*(void **)&this->field_0x218 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x218);
  }
  if (*(void **)&this->field_0x200 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x200);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_> @ 14f133580

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::
~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          (TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x2988);
  *(undefined4 *)&this->field_0x2988 = 0;
  if (*(int *)&this->field_0x298c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<664,8>_>_>_>
              (0x298,8,0,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<664,8>_>_> *)this,0,
               (int *)&this->field_0x298c);
  }
  *(undefined4 *)&this->field_0x29a8 = 0xffffffff;
  *(undefined4 *)&this->field_0x29ac = 0;
  *(undefined4 *)&this->field_0x29a0 = 0;
  if ((*(int *)&this->field_0x29a4 < 0) || (0x20 < *(int *)&this->field_0x29a4)) {
    *(undefined4 *)&this->field_0x29a4 = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               &this->field_0x2990,0);
  }
  if (*(void **)&this->field_0x2998 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x2998);
  }
  if (*(void **)&this->field_0x2980 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x2980);
  }
  return;
}

// DestroyElements @ 14f135d90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
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
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  *pTVar10;
  longlong lVar11;
  
  uVar6 = (ulonglong)param_1;
  pTVar10 = this;
  if (*(TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        **)&this->field_0x2980 !=
      (TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    pTVar10 = *(TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                **)&this->field_0x2980;
  }
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar11 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar8 = (undefined8 *)(&pTVar10->field_0x280 + uVar6 * 0x298);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x29a0)) {
        if ((*(int *)&this->field_0x29a0 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x2990;
        if (*(undefined1 **)&this->field_0x2998 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x2998;
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
          TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          ::
          ~TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                    ((TSparseArray<TSparseSetElement<UObject_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)(puVar8 + -0x4e));
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar8 = puVar8 + 0x53;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

