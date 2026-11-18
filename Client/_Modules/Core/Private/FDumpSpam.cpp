// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FDumpSpam @ 1419d24a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDumpSpam::~FDumpSpam(FDumpSpam *this)

{
  ulonglong uVar1;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  FDelegateHandle FVar5;
  void *pvVar6;
  code *pcVar7;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FValueComparisonClass<TGreater<int>_> local_res20;
  FString local_b8;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  FThreadStats::bIsRawStatsActive = false;
  LOCK();
  FThreadStats::PrimaryEnableCounter.Counter = FThreadStats::PrimaryEnableCounter.Counter + -1;
  UNLOCK();
  FThreadStats::CheckEnable();
  if (4 < (byte)LogStats._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:___cdecl_FDumpSpam::~FDumpSpam(void)___ptr64'::__l3::LOG_Static,
               (FLogCategoryBase *)&LogStats);
  }
  local_res20.Predicate.Predicate = (TDereferenceWrapper<int,TGreater<int>_>)local_res8;
  this_00 = &this->Counts;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Sort<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this_00,&local_res20);
  iVar3 = *(int *)&(this->Counts).field_0x28;
  puVar2 = &(this->Counts).field_0x10;
  iStack_a0 = 0;
  local_88 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Counts).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_1419d258d;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_8c = local_88 + -1 + local_res18;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_1419d258d:
  uVar13 = *(uint *)&(this->Counts).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_80 = *(int *)&(this->Counts).field_0x8 - *(int *)&(this->Counts).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = this_00;
  local_98 = puVar2;
  iStack_84 = iStack_8c;
  local_78 = this_00;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(this->Counts).field_0x28;
  if (uVar13 != uVar4) {
    puVar14 = *(undefined1 **)&(this->Counts).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar2;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1419d2690;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1419d2690:
  while( true ) {
    pTVar8 = local_78;
    if (*(int *)(&local_78->field_0x0 + 8) - *(int *)(&local_78->field_0x0 + 0x34) != (int)uStack_50
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == this_00))
    break;
    if (4 < (byte)LogStats._0_1_) {
      ::FName::ToString((FName *)(*(longlong *)&pTVar8->field_0x0 +
                                 (longlong)TStack_70.CurrentBitIndex * 0x14),&local_b8);
      UE::Logging::Private::BasicLog<5>
                (&`public:___cdecl_FDumpSpam::~FDumpSpam(void)___ptr64'::__l25::LOG_Static,
                 (FLogCategoryBase *)&LogStats);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  FVar5.ID = (this->NewRawStatPacketDelegateHandle).ID;
  if (FVar5.ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &this->Stats->NewRawStatPacket,FVar5);
  }
  *(undefined4 *)&(this->Counts).field_0x48 = 0;
  pvVar6 = *(void **)&(this->Counts).field_0x40;
  DumpSpam = (FDumpSpam *)0x0;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  return;
}

// NewFrame @ 141a0c100

void __thiscall FDumpSpam::NewFrame(FDumpSpam *this,FStatPacket *param_1)

{
  ulonglong *puVar1;
  FScriptContainerElement *pFVar2;
  TTuple<FName,int> *pTVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  int *piVar10;
  undefined4 local_res8 [2];
  TPairInitializer<FName_const_&,int_&&> local_res10;
  int **local_38;
  undefined4 *local_30;
  
  this->NumPackets = this->NumPackets + 1;
  piVar10 = (int *)0x0;
  this->TotalCount = this->TotalCount + (param_1->StatMessages).NumElements;
  uVar4 = (param_1->StatMessages).NumElements;
  pFVar9 = (param_1->StatMessages).Chunks.Array.AllocatorInstance.Data;
  if (uVar4 != 0) {
    uVar8 = (ulonglong)uVar4;
    piVar7 = piVar10;
    do {
      lVar6 = (longlong)piVar7 * 0x10 + *(longlong *)pFVar9;
      puVar1 = (ulonglong *)(lVar6 + 8);
      local_res10.Value._0_4_ = *(undefined4 *)puVar1;
      local_res10.Value._4_4_ = *(uint *)(lVar6 + 0xc) & 0x1ff;
      pTVar3 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                       *)&this->Counts,(FName)(*puVar1 & 0x1ffffffffff));
      piVar5 = (int *)&pTVar3->field_0x8;
      if (pTVar3 == (TTuple<FName,int> *)0x0) {
        piVar5 = piVar10;
      }
      if (piVar5 == (int *)0x0) {
        local_38 = &local_res10.Value;
        local_res8[0] = 1;
        local_30 = local_res8;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,int_&&>_>
                  ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)&this->Counts,&local_res10,(bool *)&local_38);
      }
      else {
        *piVar5 = *piVar5 + 1;
      }
      uVar4 = (int)piVar7 + 1;
      piVar7 = piVar10;
      pFVar2 = pFVar9 + 8;
      if (uVar4 < 0x1000) {
        piVar7 = (int *)(ulonglong)uVar4;
        pFVar2 = pFVar9;
      }
      pFVar9 = pFVar2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

