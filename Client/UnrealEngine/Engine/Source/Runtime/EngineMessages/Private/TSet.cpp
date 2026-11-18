// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineMessages
// Functions: 1

// operator= @ 14463b420

TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  FString *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  *pTVar7;
  ForElementType<FSetElementId> _Dst;
  undefined1 *puVar8;
  ForElementType<FSetElementId> _Src;
  FString *this_00;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  uVar9 = param_1->HashSize;
  uVar12 = uVar9;
  if (uVar9 < 2) {
    if ((this->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14463b486;
    uVar12 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->Hash).SecondaryData,0,uVar12,4);
LAB_14463b486:
  _Src = (param_1->Hash).SecondaryData;
  _Dst = (this->Hash).SecondaryData;
  if (uVar9 != 0) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      _Src = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    if (_Dst == (ForElementType<FSetElementId>)0x0) {
      _Dst = (ForElementType<FSetElementId>)&this->Hash;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)(int)uVar9 << 2);
  }
  this->HashSize = uVar9;
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar10 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar3 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar3 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar11 = 0;
  if (0 < iVar6) {
    uVar9 = 1;
    this_00 = (FString *)(*(longlong *)&this->Elements + 8);
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if (((iVar11 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar11)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
                  *)(*pcVar4)();
        return pTVar7;
      }
      puVar3 = *(undefined1 **)&(param_1->Elements).field_0x20;
      pFVar2 = (FString *)(lVar13 + (longlong)this_00);
      puVar8 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      iVar6 = iVar11;
      if (iVar11 < 0) {
        iVar6 = iVar11 + 0x1f;
      }
      uVar12 = *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4);
      this_00[-1].Data.ArrayNum = *(int *)((longlong)this_00 + lVar13 + -8);
      if ((uVar12 & uVar9) == 0) {
        this_00[-1].Data.ArrayMax = pFVar2[-1].Data.ArrayMax;
      }
      else {
        ::FString::FString(this_00,pFVar2);
        *(undefined4 *)&this_00[1].Data.AllocatorInstance.Data =
             *(undefined4 *)&pFVar2[1].Data.AllocatorInstance.Data;
        *(undefined4 *)((longlong)&this_00[1].Data.AllocatorInstance.Data + 4) =
             *(undefined4 *)((longlong)&pFVar2[1].Data.AllocatorInstance.Data + 4);
      }
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      this_00 = this_00 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return this;
}

