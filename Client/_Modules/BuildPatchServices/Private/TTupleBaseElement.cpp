// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// TTupleBaseElement<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,2,4><TArray<FString,TSizedDefaultAllocator<32>_>_const_&> @ 1431ffbd0

TTupleBaseElement<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,2,4> * __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,2,4>::
TTupleBaseElement<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,2,4><TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
          (TTupleBaseElement<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,2,4>
           *this,EForwardingConstructor param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2
          )

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  TTupleBaseElement<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,2,4> *pTVar8;
  ulonglong uVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *puVar20;
  int iVar21;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  uVar2 = param_2->ArrayNum;
  pFVar17 = (param_2->AllocatorInstance).Data;
  if (((int)uVar2 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar8 = (TTupleBaseElement<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,2,4> *
             )(*pcVar6)();
    return pTVar8;
  }
  uVar12 = 0;
  *(undefined8 *)&(this->Value).Elements = 0;
  *(undefined8 *)&(this->Value).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Value).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Value).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Value).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Value).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Value).Elements.field_0x34 = 0;
  (this->Value).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Value).HashSize = 0;
  if (uVar2 == 0) goto LAB_1431ffe84;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidSetNum((longlong)(int)uVar2);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar2);
  uVar15 = 1;
  if (3 < uVar2) {
    uVar13 = (ulonglong)((uVar2 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar5 & 0x1f);
  }
  iVar10 = (this->Value).HashSize;
  if ((iVar10 != 0) && ((int)uVar15 <= iVar10)) goto LAB_1431ffe84;
  (this->Value).HashSize = uVar15;
  if ((this->Value).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Value).Hash.SecondaryData,0,0,4);
  }
  if (uVar15 != 0) {
    uVar18 = uVar15;
    if (uVar15 < 2) {
      if ((this->Value).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar18 = 0;
        goto LAB_1431ffcd3;
      }
    }
    else {
LAB_1431ffcd3:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->Value).Hash.SecondaryData,0,uVar18,4);
    }
    if (0 < (int)uVar15) {
      uVar19 = (ulonglong)uVar15;
      uVar13 = uVar12;
      do {
        FVar4 = (this->Value).Hash.SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&(this->Value).Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar9 = uVar13 & (longlong)(int)uVar15 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((longlong)FVar11 + uVar9 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if ((this->Value).HashSize != 0) {
    uVar15 = *(uint *)&(this->Value).Elements.field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Value).Elements.field_0x10;
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar15 != 0) {
      puVar20 = *(uint **)&(this->Value).Elements.field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)local_50.Array;
      }
      uVar18 = *puVar20;
      uVar13 = uVar12;
      while (uVar18 == 0) {
        uStack_60 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_60;
        iVar10 = (int)uVar12;
        local_78 = iVar10 + 1;
        uVar12 = (ulonglong)local_78;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1431ffdc9;
        uVar18 = puVar20[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar18 & uVar18;
      uVar12 = (ulonglong)uStack_74 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (int)lVar5 + -1 + uStack_60;
      uVar12 = (ulonglong)uStack_64;
      if ((int)uVar15 < (int)uStack_64) {
LAB_1431ffdc9:
        uVar12 = (ulonglong)uVar15;
        uStack_64 = uVar15;
      }
    }
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar12 < (int)uVar15) {
      do {
        iVar21 = (int)uVar12;
        lVar5 = *(longlong *)&(this->Value).Elements;
        puVar1 = (undefined8 *)(lVar5 + (longlong)iVar21 * 0x18);
        iVar3 = *(int *)(lVar5 + 8 + (longlong)iVar21 * 0x18);
        iVar10 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar14 = L"";
          iVar10 = 0;
        }
        else {
          pwVar14 = (wchar_t *)*puVar1;
        }
        uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar14);
        uVar15 = (this->Value).HashSize - 1U & uVar15;
        *(uint *)((longlong)puVar1 + 0x14) = uVar15;
        FVar4 = (this->Value).Hash.SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&(this->Value).Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar12 = (longlong)(this->Value).HashSize - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)FVar11 + uVar12 * 4);
        *(int *)((longlong)FVar11 + uVar12 * 4) = iVar21;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar12 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
LAB_1431ffe84:
  pFVar16 = pFVar17 + (longlong)(int)uVar2 * 0x10;
  for (; pFVar17 != pFVar16; pFVar17 = pFVar17 + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&this->Value,(FString *)&stack0x00000008,(bool *)pFVar17);
  }
  return this;
}

// ~TTupleBaseElement<BuildPatchServices::FChunkUriResponse,1,2> @ 143287510

void __thiscall
UE::Core::Private::Tuple::TTupleBaseElement<BuildPatchServices::FChunkUriResponse,1,2>::
~TTupleBaseElement<BuildPatchServices::FChunkUriResponse,1,2>
          (TTupleBaseElement<BuildPatchServices::FChunkUriResponse,1,2> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->Value).AdditionalHeaders.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Value).AdditionalHeaders.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Value).AdditionalHeaders);
  pFVar2 = (this->Value).Uri.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

