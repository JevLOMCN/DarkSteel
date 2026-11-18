// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// operator= @ 14266a850

TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  FString *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  FString *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int *this_00;
  undefined1 *puVar11;
  longlong lVar12;
  
  if (this != param_1) {
    iVar5 = *(int *)&param_1->field_0x8;
    lVar10 = (longlong)iVar5;
    Empty(this,iVar5);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar5,(ForAnyElementType *)this,(int *)&this->field_0x8,
               (int *)&this->field_0xc);
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    puVar1 = &param_1->field_0x10;
    if (&this->field_0x10 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    iVar8 = 0;
    if (0 < iVar5) {
      uVar9 = 1;
      this_00 = (int *)(*(longlong *)this + 0x10);
      lVar12 = *(longlong *)param_1 - *(longlong *)this;
      do {
        if ((iVar8 < 0) || (*(int *)&param_1->field_0x28 <= iVar8)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(*pcVar3)();
            return pTVar6;
          }
        }
        puVar11 = puVar1;
        if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&param_1->field_0x20;
        }
        pFVar7 = (FString *)(lVar12 + -0x10 + (longlong)this_00);
        pFVar2 = (FString *)(lVar12 + (longlong)this_00);
        iVar5 = iVar8;
        if (iVar8 < 0) {
          iVar5 = iVar8 + 0x1f;
        }
        if ((*(uint *)(puVar11 + (longlong)(iVar5 >> 5) * 4) & uVar9) == 0) {
          *(undefined4 *)&(((FString *)(this_00 + -4))->Data).AllocatorInstance.Data =
               *(undefined4 *)&(pFVar7->Data).AllocatorInstance.Data;
          this_00[-3] = *(undefined4 *)((longlong)&pFVar2[-1].Data.AllocatorInstance.Data + 4);
        }
        else {
          ::FString::FString((FString *)(this_00 + -4),pFVar7);
          ::FString::FString((FString *)this_00,pFVar2);
          *(undefined4 *)&(((FString *)(this_00 + 4))->Data).AllocatorInstance.Data =
               *(undefined4 *)&pFVar2[1].Data.AllocatorInstance.Data;
          this_00[5] = *(undefined4 *)((longlong)&pFVar2[1].Data.AllocatorInstance.Data + 4);
        }
        iVar8 = iVar8 + 1;
        uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
        this_00 = this_00 + 10;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return this;
}

