// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// StaticStruct @ 1471b4820

UScriptStruct * __cdecl FMassObserversMap::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassObserversMap.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassObserversMap.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassObserversMap,(UObject *)pUVar1,
                         L"MassObserversMap");
  }
  return Z_Registration_Info_UScriptStruct_FMassObserversMap.OuterSingleton;
}

// FMassObserversMap @ 1471daba0

FMassObserversMap * __thiscall FMassObserversMap::FMassObserversMap(FMassObserversMap *this)

{
  *(undefined8 *)&this->Container = 0;
  *(undefined8 *)&(this->Container).field_0x8 = 0;
  *(undefined8 *)&(this->Container).field_0x20 = 0;
  *(undefined4 *)&(this->Container).field_0x28 = 0;
  *(undefined4 *)&(this->Container).field_0x2c = 0x80;
  *(undefined4 *)&(this->Container).field_0x34 = 0;
  *(undefined4 *)&(this->Container).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Container).field_0x40 = 0;
  *(undefined4 *)&(this->Container).field_0x48 = 0;
  return this;
}

// ~FMassObserversMap @ 1471e0510

void __thiscall FMassObserversMap::~FMassObserversMap(FMassObserversMap *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Container).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Container).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// DebugAddUniqueProcessors @ 14720d960

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassObserversMap::DebugAddUniqueProcessors
          (FMassObserversMap *this,
          TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  FMassObserversMap *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_8c;
  UMassProcessor *local_80;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  FMassObserversMap *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(this->Container).field_0x28;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Container).field_0x10;
  iVar15 = 0;
  uVar8 = 1;
  iVar17 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->Container).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar19;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14720da0d;
      uVar14 = puVar18[lVar10 + 1];
    }
    uVar8 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar17 + -1 + (int)lVar10;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14720da0d:
  uVar14 = *(uint *)&(this->Container).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar15);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar17;
  uStack_48 = CONCAT44(uStack_8c,
                       *(int *)&(this->Container).field_0x8 - *(int *)&(this->Container).field_0x34)
  ;
  local_78 = pTVar19;
  local_70 = this;
  TStack_68.Array = pTVar19;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->Container).field_0x28;
  if (uVar14 != uVar8) {
    puVar16 = *(undefined1 **)&(this->Container).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar19;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar15;
      uVar13 = uVar13 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14720db10;
      uVar14 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar8 < (int)uVar14) {
      uVar14 = uVar8;
    }
  }
LAB_14720db10:
  while( true ) {
    pFVar6 = local_70;
    if (*(int *)&(local_70->Container).field_0x8 - *(int *)&(local_70->Container).field_0x34 !=
        (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_68.CurrentBitIndex == uVar14) && (TStack_68.Array == pTVar19)) && (pFVar6 == this))
    {
      return;
    }
    lVar10 = *(longlong *)&pFVar6->Container;
    lVar11 = *(longlong *)(lVar10 + 8 + (longlong)TStack_68.CurrentBitIndex * 0x28);
    lVar10 = lVar10 + (longlong)TStack_68.CurrentBitIndex * 0x28;
    iVar4 = *(int *)(lVar10 + 0x10);
    lVar1 = lVar11 + (longlong)iVar4 * 8;
    while( true ) {
      if (*(int *)(lVar10 + 0x10) != iVar4) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMassProcessor>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (lVar11 == lVar1) break;
      lVar11 = lVar11 + 8;
    }
    plVar12 = *(longlong **)(lVar10 + 8);
    iVar4 = *(int *)(lVar10 + 0x10);
    if ((iVar4 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) break;
    plVar2 = plVar12 + iVar4;
    for (; plVar12 != plVar2; plVar12 = plVar12 + 1) {
      local_80 = (UMassProcessor *)*plVar12;
      if ((local_80 == (UMassProcessor *)0x0) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_988180934387826410>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                             ,0x116,"Processor"), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<UMassProcessor_const_*_const_&>(param_1,&local_80);
      pTVar19 = local_78;
    }
    TStack_68._padding_._4_4_ = (uint)((ulonglong)TStack_68._padding_ >> 0x20);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

