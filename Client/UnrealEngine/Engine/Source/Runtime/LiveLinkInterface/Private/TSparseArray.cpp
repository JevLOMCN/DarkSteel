// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 1

// operator= @ 14cfb68d0

TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  void *_Src;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  int *piVar7;
  FString *this_00;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ForAnyElementType *pFVar14;
  
  if (this == param_1) {
    return this;
  }
  iVar5 = *(int *)&param_1->field_0x8;
  lVar10 = (longlong)iVar5;
  Empty(this,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar5,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar11 = 0;
  if (0 < iVar5) {
    lVar13 = *(longlong *)this - *(longlong *)param_1;
    puVar8 = (undefined8 *)(*(longlong *)param_1 + 0x10);
    uVar9 = 1;
    do {
      if (((iVar11 < 0) || (*(int *)&param_1->field_0x28 <= iVar11)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(*pcVar2)();
        return pTVar6;
      }
      puVar12 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar12 = *(undefined1 **)&param_1->field_0x20;
      }
      this_00 = (FString *)(lVar13 + -0x10 + (longlong)puVar8);
      iVar5 = iVar11;
      if (iVar11 < 0) {
        iVar5 = iVar11 + 0x1f;
      }
      if ((*(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) & uVar9) == 0) {
        *(undefined4 *)&(this_00->Data).AllocatorInstance.Data =
             *(undefined4 *)&(((FString *)(puVar8 + -2))->Data).AllocatorInstance.Data;
        *(undefined4 *)(lVar13 + -0xc + (longlong)puVar8) = *(undefined4 *)((longlong)puVar8 + -0xc)
        ;
      }
      else {
        ::FString::FString(this_00,(FString *)(puVar8 + -2));
        uVar3 = puVar8[1];
        *(undefined8 *)(lVar13 + (longlong)puVar8) = *puVar8;
        ((undefined8 *)(lVar13 + (longlong)puVar8))[1] = uVar3;
        pFVar14 = (ForAnyElementType *)(lVar13 + 0x10 + (longlong)puVar8);
        pFVar14->Data = (FScriptContainerElement *)0x0;
        _Src = (void *)puVar8[2];
        iVar5 = *(int *)(puVar8 + 3);
        piVar7 = (int *)(lVar13 + 0x1c + (longlong)puVar8);
        *(int *)(lVar13 + 0x18 + (longlong)puVar8) = iVar5;
        if (iVar5 == 0) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar5,0,pFVar14,iVar5,piVar7);
          memcpy(pFVar14->Data,_Src,(longlong)iVar5);
        }
        *(undefined4 *)(lVar13 + 0x20 + (longlong)puVar8) = *(undefined4 *)(puVar8 + 4);
        *(undefined4 *)(lVar13 + 0x24 + (longlong)puVar8) = *(undefined4 *)((longlong)puVar8 + 0x24)
        ;
      }
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      puVar8 = puVar8 + 7;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return this;
}

