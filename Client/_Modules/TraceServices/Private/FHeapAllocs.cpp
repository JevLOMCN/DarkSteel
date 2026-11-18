// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// FHeapAllocs @ 14d3cc7f0

FHeapAllocs * __thiscall TraceServices::FHeapAllocs::FHeapAllocs(FHeapAllocs *this)

{
  *(undefined8 *)&this->AddressMap = 0;
  *(undefined8 *)&(this->AddressMap).field_0x8 = 0;
  *(undefined8 *)&(this->AddressMap).field_0x20 = 0;
  *(undefined4 *)&(this->AddressMap).field_0x28 = 0;
  *(undefined4 *)&(this->AddressMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AddressMap).field_0x34 = 0;
  *(undefined4 *)&(this->AddressMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AddressMap).field_0x40 = 0;
  *(undefined4 *)&(this->AddressMap).field_0x48 = 0;
  this->AllocCount = 0;
  return this;
}

// ~FHeapAllocs @ 14d3d0680

void __thiscall TraceServices::FHeapAllocs::~FHeapAllocs(FHeapAllocs *this)

{
  void *pvVar1;
  
  Reset(this);
  *(undefined4 *)&(this->AddressMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AddressMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Reset @ 14d4016f0

void __thiscall TraceServices::FHeapAllocs::Reset(FHeapAllocs *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->AddressMap).field_0x28;
  puVar1 = &(this->AddressMap).field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = iVar15;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->AddressMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    iVar15 = 0;
    iVar13 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d40178d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = iVar15 + -1 + local_res10;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14d40178d:
  uVar12 = *(uint *)&(this->AddressMap).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AddressMap).field_0x8 -
                       *(int *)&(this->AddressMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->AddressMap).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->AddressMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d401890;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14d401890:
  while( true ) {
    if (*(int *)&(this->AddressMap).field_0x8 - *(int *)&(this->AddressMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)&this->AddressMap;
    puVar6 = *(undefined8 **)(lVar10 + 8);
    while (puVar6 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)puVar6[1];
      ::operator_delete((void *)*puVar6,0x40);
      ::operator_delete(puVar6,0x18);
      puVar6 = puVar4;
    }
    TStack_60._padding_._4_4_ = (uint)((ulonglong)TStack_60._padding_ >> 0x20);
    *(undefined8 *)(lVar10 + 8) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    *(undefined8 *)(lVar10 + 0x10) = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>,FDefaultSetAllocator>
           *)this);
  this->AllocCount = 0;
  return;
}

