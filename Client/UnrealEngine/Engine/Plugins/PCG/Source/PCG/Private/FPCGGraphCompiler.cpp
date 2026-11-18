// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 25

// <lambda_invoker_cdecl> @ 149c97360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGridLinkageContext * __cdecl
`FPCGGraphCompiler::CreateGridLinkages'::__l21::<lambda_2>::<lambda_invoker_cdecl>
          (FPCGInitializeElementParams *param_1)

{
  FPCGGridLinkageContext *this;
  
  this = ::operator_new(0x260);
  if (this != (FPCGGridLinkageContext *)0x0) {
    memset(this,0,0x260);
    FPCGContext::FPCGContext((FPCGContext *)this);
    this->bScheduledGraph = false;
    this->_padding_ = (longlong)&___7FPCGGridLinkageContext__6B_;
    return this;
  }
  return (FPCGGridLinkageContext *)0x0;
}

// ~FPCGGraphCompiler @ 149ca6100

void __thiscall FPCGGraphCompiler::~FPCGGraphCompiler(FPCGGraphCompiler *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->SharedGatherElementLock);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SharedGatherElementLock);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedGatherElement).SharedReferenceCount.ReferenceController);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->SharedTrivialPostGraphElementLock);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SharedTrivialPostGraphElementLock);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedTrivialPostGraphElement).SharedReferenceCount.ReferenceController);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->SharedTrivialElementLock);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SharedTrivialElementLock);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedTrivialElement).SharedReferenceCount.ReferenceController);
  FPCGGraphCompilerCache::~FPCGGraphCompilerCache(&this->Cache);
  return;
}

// operator() @ 149ca84d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGGraphCompiler::CompileTopGraph'::__l33::<lambda_2>::operator()
          (void *this,FPCGGraphTask *param_1)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = (uint)param_1->NodeId;
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar6 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar1 = *(uint *)(*plVar2 + (longlong)(int)uVar1 * 4);
  if ((uVar1 != 0) && ((*(uint *)this & uVar1) == 0)) {
    return true;
  }
  return false;
}

// AddReferencedObjects @ 149caaf40

void __thiscall
FPCGGraphCompiler::AddReferencedObjects(FPCGGraphCompiler *this,FReferenceCollector *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  longlong *plVar5;
  TMap<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 *puVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint *puVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  uint uVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 local_res20 [8];
  undefined1 local_148;
  undefined1 local_147 [3];
  uint local_144;
  TMap<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  TMap<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *local_100;
  longlong *local_f8;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  longlong *local_e8;
  int iStack_e0;
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TMap<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId982,"FCPGGraphCompiler::AddReferencedObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
               ,0x3d6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId982);
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)
            &(this->Cache).TopGraphToComputeGraphMap.field_0x10;
  iStack_138 = 0;
  iVar2 = *(int *)&(this->Cache).TopGraphToComputeGraphMap.field_0x28;
  local_140 = &(this->Cache).TopGraphToComputeGraphMap;
  local_120 = 0;
  uStack_134 = 1;
  iStack_124 = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&(this->Cache).TopGraphToComputeGraphMap.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)pTVar16;
    }
    uVar10 = *puVar15;
    while (uVar10 == 0) {
      lVar8 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      iStack_124 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_149cab04f;
      uVar10 = puVar15[lVar8 + 1];
    }
    uStack_134 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uStack_134 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_110 = (int)lVar8;
    iStack_124 = local_120 + -1 + local_110;
    if (iVar2 < iStack_124) {
      iStack_124 = iVar2;
    }
  }
LAB_149cab04f:
  uStack_11c = local_3c;
  iStack_118 = *(int *)&(this->Cache).TopGraphToComputeGraphMap.field_0x8 -
               *(int *)&(this->Cache).TopGraphToComputeGraphMap.field_0x34;
  uVar10 = *(uint *)&(this->Cache).TopGraphToComputeGraphMap.field_0x28;
  TStack_80._padding_ = CONCAT44(uStack_134,iStack_138);
  uVar17 = uVar10 & 0xffffffe0;
  uStack_128 = 0xffffffff;
  TStack_80.CurrentBitIndex = iStack_124;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = local_120;
  uStack_60 = CONCAT44(uStack_114,iStack_118);
  local_144 = uVar10;
  local_130 = (undefined1 *)pTVar16;
  local_100 = local_140;
  local_f0 = pTVar16;
  local_88 = local_140;
  TStack_80.Array = pTVar16;
  if ((((int)uVar10 < 0) || (iVar2 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->Cache).TopGraphToComputeGraphMap.field_0x28;
  if (uVar10 != uVar3) {
    puVar13 = *(undefined1 **)&(this->Cache).TopGraphToComputeGraphMap.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = (undefined1 *)pTVar16;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar3;
      local_144 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_149cab180;
      uVar10 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_10c = (int)lVar8;
    uVar10 = local_10c + -1 + uVar17;
    local_144 = uVar10;
    if ((int)uVar3 < (int)uVar10) {
      uVar10 = uVar3;
      local_144 = uVar3;
    }
  }
LAB_149cab180:
  do {
    pTVar6 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_80.CurrentBitIndex == uVar10) && (TStack_80.Array == pTVar16)) &&
       (pTVar6 == local_100)) {
      ReleaseSRWLockShared((PSRWLOCK)this);
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    iStack_e0 = 0;
    local_c8 = 0;
    lVar8 = (longlong)TStack_80.CurrentBitIndex * 0x60 + *(longlong *)pTVar6;
    uStack_dc = 1;
    iVar2 = *(int *)(lVar8 + 0x30);
    pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar8 + 0x18);
    plVar18 = (longlong *)(lVar8 + 8);
    iStack_cc = 0;
    if (iVar2 != 0) {
      pTVar14 = pTVar16;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x28);
      }
      uVar10 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
      while (uVar10 == 0) {
        lVar9 = (longlong)iStack_e0;
        local_c8 = local_c8 + 0x20;
        iStack_e0 = iStack_e0 + 1;
        iStack_cc = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_149cab250;
        uVar10 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uStack_dc = -uVar10 & uVar10;
      uVar1 = (ulonglong)uStack_dc * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_108 = (int)lVar9;
      iStack_cc = local_c8 + -1 + local_108;
      if (iVar2 < iStack_cc) {
        iStack_cc = iVar2;
      }
    }
LAB_149cab250:
    uVar10 = *(uint *)(lVar8 + 0x30);
    iStack_c4 = iStack_124;
    iStack_c0 = *(int *)(lVar8 + 0x10) - *(int *)(lVar8 + 0x3c);
    uVar17 = uVar10 & 0xffffffe0;
    TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
    uStack_d0 = 0xffffffff;
    TStack_b0.CurrentBitIndex = iStack_cc;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar10 >> 5;
    TStack_b0._28_4_ = iStack_124;
    TStack_b0.BaseBitIndex = local_c8;
    uStack_90 = CONCAT44(uStack_bc,iStack_c0);
    local_f8 = plVar18;
    local_e8 = plVar18;
    local_d8 = pTVar16;
    local_b8 = plVar18;
    TStack_b0.Array = pTVar16;
    if ((((int)uVar10 < 0) || (iVar2 < (int)uVar10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar3 = *(uint *)(lVar8 + 0x30);
    if (uVar10 != uVar3) {
      pTVar14 = pTVar16;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x28);
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) &
               *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar10 == 0) {
        lVar8 = (longlong)iVar12;
        uVar17 = uVar17 + 0x20;
        iVar12 = iVar12 + 1;
        uVar10 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_149cab351;
        uVar10 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_104 = (int)lVar8;
      uVar10 = local_104 + -1 + uVar17;
      if ((int)uVar3 < (int)uVar10) {
        uVar10 = uVar3;
      }
    }
LAB_149cab351:
    while( true ) {
      plVar5 = local_b8;
      if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
        local_148 = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_148);
      }
      if (((TStack_b0.CurrentBitIndex == uVar10) && (TStack_b0.Array == pTVar16)) &&
         (plVar5 == plVar18)) break;
      lVar11 = (longlong)TStack_b0.CurrentBitIndex * 0x20 + *plVar5;
      lVar9 = *(longlong *)(lVar11 + 8);
      iVar2 = *(int *)(lVar11 + 0x10);
      lVar8 = lVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if (*(int *)(lVar11 + 0x10) != iVar2) {
          local_147[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UPCGComputeGraph>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_147);
        }
        if (lVar9 == lVar8) break;
        (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar9);
        lVar9 = lVar9 + 8;
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      plVar18 = local_f8;
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    pTVar16 = local_f0;
    uVar10 = local_144;
  } while( true );
}

// CalculateDynamicActivePinDependencies @ 149cae930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPCGGraphCompiler::CalculateDynamicActivePinDependencies
          (ulong64 param_1,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_2)

{
  UPCGNode *this;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UPCGPin *pUVar10;
  ulong64 uVar11;
  UPCGSettings *pUVar12;
  UClass *pUVar13;
  byte bVar14;
  ulonglong uVar15;
  ForElementType<FSetElementId> FVar16;
  int iVar17;
  longlong lVar18;
  uint *puVar19;
  FPCGPinDependencyExpression *pFVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  char *pcVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined1 auStackY_238 [32];
  FPCGPinDependencyExpression local_1e8;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6 [6];
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *local_1d0;
  FScriptContainerElement *local_1c8;
  uint local_1c0;
  ulong64 local_1b8;
  int local_1b0 [2];
  ulong64 local_1a8;
  int local_1a0;
  int local_19c;
  FName local_198;
  char *local_190;
  FName local_188;
  FScriptContainerElement *local_180;
  FString local_178;
  FString local_168;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  int local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  FPCGPinProperties local_f8;
  char local_c8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  iVar17 = (int)param_1;
  local_1d0 = param_2;
  local_1a8 = param_1;
  if ((iVar17 < 0) || (param_2->ArrayNum <= iVar17)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8202795070391321688>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                       ,0x458,"InOutCompiledTasks.IsValidIndex(InTaskId)");
    if (!bVar5) {
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this = *(UPCGNode **)((param_2->AllocatorInstance).Data + (longlong)iVar17 * 0x148 + 0x98);
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  if ((param_2->ArrayNum <= iVar17) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1c8 = (param_2->AllocatorInstance).Data + (longlong)iVar17 * 0x148;
  local_1c0 = *(uint *)(local_1c8 + 8);
  uVar15 = (ulonglong)(int)local_1c0;
  lVar1 = *(longlong *)local_1c8;
  lVar25 = uVar15 * 0x80;
  pcVar23 = (char *)(lVar1 + 0x70);
LAB_149caea60:
  if (*(int *)(local_1c8 + 8) != (int)uVar15) {
    local_1d8 = 0;
    `TCheckedPointerIterator<FPCGGraphTaskInput,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_1d8);
  }
  uVar8 = local_70;
  if ((uint *)(pcVar23 + -0x70) == (uint *)(lVar25 + lVar1)) goto LAB_149caed92;
  if ((((this == (UPCGNode *)0x0) || (*pcVar23 == '\0')) ||
      (pUVar10 = UPCGNode::GetInputPin(this,(FName *)(pcVar23 + -0x30)), pUVar10 == (UPCGPin *)0x0))
     || (cVar6 = (**(code **)(this->_padding_ + 0x2c0))(this,pUVar10), cVar6 == '\0'))
  goto LAB_149caed80;
  uVar8 = *(uint *)(pcVar23 + -0x70);
  uVar22 = 0;
  if ((int)uVar8 < param_2->ArrayNum) {
    uVar22 = ~uVar8 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar18 = *(longlong *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x148 + 0x98);
  if (lVar18 == 0) goto LAB_149caed80;
  if (*(int *)(lVar18 + 0x80) < 0x40) {
    plVar2 = *(longlong **)(lVar18 + 0x78);
    iVar17 = *(int *)(lVar18 + 0x80);
    plVar24 = plVar2;
    param_2 = local_1d0;
    if (plVar2 == plVar2 + iVar17) goto LAB_149caed80;
    do {
      FPCGPinProperties::FPCGPinProperties(&local_f8,(FPCGPinProperties *)(*plVar24 + 0x48));
      local_c8 = '\x01';
      if (pcVar23[-0x38] == '\x01') {
        bVar5 = FPCGPinProperties::operator==(&local_f8,(FPCGPinProperties *)(pcVar23 + -0x68));
        if (local_c8 != '\0') goto LAB_149caec04;
      }
      else {
        bVar5 = false;
LAB_149caec04:
        if (local_f8.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.AllowedTypes.Ids.AllocatorInstance.Data);
        }
      }
      param_2 = local_1d0;
      if (bVar5 != false) {
        iVar17 = (int)((longlong)plVar24 - (longlong)plVar2 >> 3);
        if (iVar17 == -1) goto LAB_149caed80;
        if ((0x3e < iVar17) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("PinIndex < PCGPinIdHelpers::MaxOutputPins",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                               ,0x48c,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*pcVar23 == '\0') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(undefined8 *)(pcVar23 + -0x30);
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar8 = uVar8 + (int)((ulonglong)uVar3 >> 0x20);
        if (local_98._8_4_ == local_64) goto LAB_149caed2c;
        FVar16 = (ForElementType<FSetElementId>)local_60;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = local_58;
        }
        iVar9 = *(int *)((longlong)FVar16 + (ulonglong)(local_50 - 1U & uVar8) * 4);
        if (iVar9 == -1) goto LAB_149caed2c;
        goto LAB_149caed00;
      }
      plVar24 = plVar24 + 1;
    } while (plVar24 != plVar2 + iVar17);
    pcVar23 = pcVar23 + 0x80;
    uVar15 = (ulonglong)local_1c0;
    goto LAB_149caea60;
  }
  if ((byte)LogPCG._0_1_ < 3) goto LAB_149caed80;
  local_198 = *(FName *)(lVar18 + 0x18);
  ::FName::ToString(&local_198,&local_178);
  UE::Logging::Private::BasicLog<3>
            ((FStaticBasicLogRecord *)&PTR_u_Number_of_outpu_151fbd8a0,(FLogCategoryBase *)&LogPCG);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
    pcVar23 = pcVar23 + 0x80;
    uVar15 = (ulonglong)local_1c0;
    goto LAB_149caea60;
  }
LAB_149caed80:
  pcVar23 = pcVar23 + 0x80;
  uVar15 = (ulonglong)local_1c0;
  goto LAB_149caea60;
  while (iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + local_98._0_8_), iVar9 != -1) {
LAB_149caed00:
    if (*(longlong *)((longlong)iVar9 * 0x20 + local_98._0_8_) == *(longlong *)(pcVar23 + -0x30)) {
      if ((iVar9 != -1) && (lVar18 = (longlong)iVar9 * 0x20 + local_98._0_8_, lVar18 != 0))
      goto LAB_149caed63;
      break;
    }
  }
LAB_149caed2c:
  local_190 = pcVar23 + -0x30;
  TSet<TTuple<FName,FPCGPinDependencyExpression>,TDefaultMapHashableKeyFuncs<FName,FPCGPinDependencyExpression,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FPCGPinDependencyExpression>,TDefaultMapHashableKeyFuncs<FName,FPCGPinDependencyExpression,0>,FDefaultSetAllocator>
              *)local_98,(uint)local_1b0,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar8,
             (bool *)&local_190);
  lVar18 = (longlong)local_1b0[0] * 0x20 + local_98._0_8_;
LAB_149caed63:
  uVar11 = PCGPinIdHelpers::NodeIdAndPinIndexToPinId(*(ulong64 *)(pcVar23 + -0x70),(longlong)iVar17)
  ;
  FPCGPinDependencyExpression::AddPinDependency((FPCGPinDependencyExpression *)(lVar18 + 8),uVar11);
  param_2 = local_1d0;
  goto LAB_149caed80;
LAB_149caed92:
  local_1e8.Expression.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Expression.ArrayNum = 0;
  local_1e8.Expression.ArrayMax = 0;
  if (local_98._8_4_ != local_64) {
    iStack_150 = 0;
    local_138 = 0;
    uStack_14c = 1;
    uStack_13c = 0;
    if (local_70 != 0) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar22 = *puVar19;
      while (uVar22 == 0) {
        iStack_150 = iStack_150 + 1;
        local_138 = local_138 + 0x20;
        uStack_13c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_150)
        goto LAB_149caee3e;
        uVar22 = puVar19[iStack_150];
      }
      uStack_14c = -uVar22 & uVar22;
      uVar15 = (ulonglong)uStack_14c * 2 + 1;
      lVar1 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      local_1a0 = (int)lVar1;
      uStack_13c = local_1a0 + -1 + local_138;
      if ((int)local_70 < (int)uStack_13c) {
        uStack_13c = local_70;
      }
    }
LAB_149caee3e:
    local_158 = (longlong *)local_98;
    uStack_134 = local_a4;
    local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar22 = local_70 & 0xffffffe0;
    iStack_130 = local_98._8_4_ - local_64;
    uStack_140 = 0xffffffff;
    TStack_120.CurrentBitIndex = uStack_13c;
    TStack_120.UnvisitedBitMask = 0xffffffff;
    TStack_120._padding_ = CONCAT44(uStack_14c,iStack_150);
    iVar17 = (int)local_70 >> 5;
    TStack_120._28_4_ = local_a4;
    TStack_120.BaseBitIndex = local_138;
    uStack_100 = CONCAT44(uStack_12c,iStack_130);
    bVar14 = (byte)local_70;
    iVar9 = 0;
    local_128 = local_158;
    TStack_120.Array = local_148;
    if ((int)local_70 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = local_1e8.Expression.ArrayNum;
    }
    if (uVar8 != local_70) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar8 = -1 << (bVar14 & 0x1f) & puVar19[iVar17];
      while (uVar8 == 0) {
        iVar17 = iVar17 + 1;
        uVar22 = uVar22 + 0x20;
        uVar8 = local_70;
        if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar17)
        goto LAB_149caef70;
        uVar8 = puVar19[iVar17];
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      local_19c = (int)lVar1;
      uVar8 = local_19c + -1 + uVar22;
      if ((int)local_70 < (int)uVar8) {
        uVar8 = local_70;
      }
    }
LAB_149caef70:
    while( true ) {
      plVar2 = local_128;
      if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
        local_1d7 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FPCGPinDependencyExpression>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d7);
        iVar9 = local_1e8.Expression.ArrayNum;
      }
      if (((TStack_120.CurrentBitIndex == uVar8) &&
          (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (param_2 = local_1d0, plVar2 == (longlong *)local_98)) break;
      pFVar20 = (FPCGPinDependencyExpression *)
                (*plVar2 + 8 + (longlong)TStack_120.CurrentBitIndex * 0x20);
      if ((pFVar20->Expression).ArrayNum != 0) {
        if (iVar9 != 0) {
          if ((local_1e8.Expression.AllocatorInstance.Data <
               (FScriptContainerElement *)
               ((longlong)&FPCGPinDependencyExpression::ConjunctionMarker + 1U)) &&
             (&FPCGPinDependencyExpression::ConjunctionMarker <
              local_1e8.Expression.AllocatorInstance.Data +
              (longlong)local_1e8.Expression.ArrayMax * 8)) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = local_1e8.Expression.ArrayNum;
          }
          if (iVar9 == local_1e8.Expression.ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)&local_1e8,&local_1e8.Expression.ArrayMax)
            ;
          }
          local_1e8.Expression.ArrayNum = iVar9 + 1;
          *(undefined8 *)(local_1e8.Expression.AllocatorInstance.Data + (longlong)iVar9 * 8) =
               0xffffffffffffffff;
        }
        if ((&local_1e8 == pFVar20) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar17 = (pFVar20->Expression).ArrayNum;
        if (iVar17 != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar17,(ForAnyElementType *)&local_1e8,
                             &local_1e8.Expression.ArrayNum,&local_1e8.Expression.ArrayMax);
          memcpy(local_1e8.Expression.AllocatorInstance.Data + (longlong)iVar9 * 8,
                 (pFVar20->Expression).AllocatorInstance.Data,(longlong)iVar17 << 3);
        }
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      iVar9 = local_1e8.Expression.ArrayNum;
    }
    goto LAB_149caf4f2;
  }
  if ((this == (UPCGNode *)0x0) ||
     (pUVar12 = UPCGNode::GetSettings(this), pUVar12 == (UPCGSettings *)0x0)) {
LAB_149caf198:
    bVar5 = false;
  }
  else {
    pUVar13 = Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister();
    iVar17 = (int)pUVar13->_padding_;
    if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar13->_padding_)) goto LAB_149caf198;
    pUVar12 = UPCGNode::GetSettings(this);
    if (pUVar12 == (UPCGSettings *)0x0) {
LAB_149caf188:
      pUVar12 = (UPCGSettings *)0x0;
    }
    else {
      pUVar13 = Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister();
      iVar17 = (int)pUVar13->_padding_;
      if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar17) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
          &pUVar13->_padding_)) goto LAB_149caf188;
    }
    if (*(char *)((longlong)&pUVar12[1].CachedElement.SharedReferenceCount.ReferenceController + 1)
        != '\0') goto LAB_149caf198;
    bVar5 = true;
  }
  uVar11 = local_1a8;
  if ((param_2->ArrayNum <= (int)local_1a8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_180 = (param_2->AllocatorInstance).Data + (uVar11 & 0xffffffff) * 0x148;
  local_1c0 = *(uint *)(local_180 + 8);
  uVar15 = (ulonglong)(int)local_1c0;
  pFVar21 = (FScriptContainerElement *)(uVar15 * 0x80 + *(longlong *)local_180);
  pcVar23 = (char *)(*(longlong *)local_180 + 0x69);
  local_1c8 = pFVar21;
  while( true ) {
    if (*(int *)(local_180 + 8) != (int)uVar15) {
      local_1d6[0] = 0;
      `TCheckedPointerIterator<FPCGGraphTaskInput,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1d6);
    }
    if ((FScriptContainerElement *)(pcVar23 + -0x69) == pFVar21) break;
    if ((pcVar23[7] == '\0') || (((*pcVar23 != '\x02' && (*pcVar23 != '\x03')) || (bVar5)))) {
      if (pcVar23[-0x31] != '\0') {
        uVar8 = *(uint *)(pcVar23 + -0x69);
        uVar22 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar22 = ~uVar8 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar1 = *(longlong *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x148 + 0x98);
        pFVar21 = local_1c8;
        param_2 = local_1d0;
        if (lVar1 != 0) {
          if (*(int *)(lVar1 + 0x80) < 0x40) {
            plVar2 = *(longlong **)(lVar1 + 0x78);
            iVar17 = *(int *)(lVar1 + 0x80);
            for (plVar24 = plVar2; pFVar21 = local_1c8, param_2 = local_1d0,
                plVar24 != plVar2 + iVar17; plVar24 = plVar24 + 1) {
              lVar1 = *plVar24;
              if ((pcVar23[-0x31] == '\0') &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              bVar7 = FPCGPinProperties::operator==
                                ((FPCGPinProperties *)(lVar1 + 0x48),
                                 (FPCGPinProperties *)(pcVar23 + -0x61));
              if (bVar7) {
                iVar17 = (int)((longlong)plVar24 - (longlong)plVar2 >> 3);
                pFVar21 = local_1c8;
                param_2 = local_1d0;
                if (iVar17 != -1) {
                  if ((0x3e < iVar17) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("PinIndex < PCGPinIdHelpers::MaxOutputPins",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                                         ,0x4c6,L""), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar11 = PCGPinIdHelpers::NodeIdAndPinIndexToPinId
                                     (*(ulong64 *)(pcVar23 + -0x69),(longlong)iVar17);
                  FPCGPinDependencyExpression::AddPinDependency(&local_1e8,uVar11);
                  pFVar21 = local_1c8;
                  param_2 = local_1d0;
                }
                break;
              }
            }
          }
          else if (2 < (byte)LogPCG._0_1_) {
            local_188 = *(FName *)(lVar1 + 0x18);
            ::FName::ToString(&local_188,&local_168);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_Number_of_outpu_151fbd8a0,
                       (FLogCategoryBase *)&LogPCG);
            pFVar21 = local_1c8;
            param_2 = local_1d0;
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
              pFVar21 = local_1c8;
              param_2 = local_1d0;
            }
          }
        }
        goto LAB_149caf32a;
      }
      local_1b8 = PCGPinIdHelpers::NodeIdToPinId(*(ulong64 *)(pcVar23 + -0x69));
      if (((local_1b8 == 0xffffffffffffffff) || (local_1b8 == 0xfffffffffffffffe)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PinId != ConjunctionMarker && PinId != RemovedTermMarker",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGPinDependencyExpression.cpp"
                             ,9,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((local_1e8.Expression.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1b8) &&
          ((FScriptContainerElement *)&local_1b8 <
           local_1e8.Expression.AllocatorInstance.Data + (longlong)local_1e8.Expression.ArrayMax * 8
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar17 = local_1e8.Expression.ArrayNum;
      if (local_1e8.Expression.ArrayNum == local_1e8.Expression.ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&local_1e8,&local_1e8.Expression.ArrayMax);
      }
      pcVar23 = pcVar23 + 0x80;
      local_1e8.Expression.ArrayNum = iVar17 + 1;
      *(ulong64 *)(local_1e8.Expression.AllocatorInstance.Data + (longlong)iVar17 * 8) = local_1b8;
      uVar15 = (ulonglong)local_1c0;
    }
    else {
LAB_149caf32a:
      pcVar23 = pcVar23 + 0x80;
      uVar15 = (ulonglong)local_1c0;
    }
  }
LAB_149caf4f2:
  uVar11 = local_1a8;
  if ((param_2->ArrayNum <= (int)local_1a8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = (param_2->AllocatorInstance).Data + (uVar11 & 0xffffffff) * 0x148 + 0x60;
  if (pFVar21 != (FScriptContainerElement *)&local_1e8) {
    if (*(void **)pFVar21 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar21);
    }
    *(FScriptContainerElement **)pFVar21 = local_1e8.Expression.AllocatorInstance.Data;
    local_1e8.Expression.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar21 + 8) = local_1e8.Expression.ArrayNum;
    *(int *)(pFVar21 + 0xc) = local_1e8.Expression.ArrayMax;
    local_1e8.Expression.ArrayNum = 0;
    local_1e8.Expression.ArrayMax = 0;
  }
  if (local_1e8.Expression.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Expression.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPCGPinDependencyExpression>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPCGPinDependencyExpression>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPCGPinDependencyExpression>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// CalculateGridRecursive @ 149caf630

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

EPCGHiGenGrid __cdecl
FPCGGraphCompiler::CalculateGridRecursive
          (ulong64 param_1,EPCGHiGenGrid param_2,FPCGStackContext *param_3,
          TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_4,
          TArray<EPCGHiGenGrid,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  longlong lVar2;
  UPCGNode *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EPCGHiGenGrid EVar6;
  EPCGHiGenGrid EVar7;
  FPCGStack *pFVar8;
  UPCGHiGenGridSizeSettings *this_00;
  UClass *pUVar9;
  uint uVar10;
  char *pcVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 local_c8 [4];
  uint local_c4;
  longlong local_c0;
  ulong64 local_b8;
  FPCGPinProperties local_b0;
  char local_80;
  FPCGPinProperties local_78;
  char local_48;
  char local_40;
  char local_3f;
  
  uVar10 = (uint)param_1;
  uVar14 = ~uVar10 >> 0x1f;
  uVar5 = 0;
  if ((int)uVar10 < param_5->ArrayNum) {
    uVar5 = uVar14;
  }
  local_c4 = uVar14;
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  lVar15 = (longlong)(int)uVar10;
  local_c0 = lVar15;
  if (*(int *)((param_5->AllocatorInstance).Data + lVar15 * 4) != 0) {
    uVar5 = 0;
    if ((int)uVar10 < param_5->ArrayNum) {
      uVar5 = uVar14;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    return *(EPCGHiGenGrid *)((param_5->AllocatorInstance).Data + lVar15 * 4);
  }
  uVar5 = 0;
  if ((int)uVar10 < param_4->ArrayNum) {
    uVar5 = uVar14;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  lVar13 = lVar15 * 0x148;
  pFVar8 = FPCGStackContext::GetStack
                     (param_3,*(int *)((param_4->AllocatorInstance).Data + lVar13 + 0x70));
  if ((pFVar8 == (FPCGStack *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                         ,0x284,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  uVar5 = 0;
  if ((int)uVar10 < param_4->ArrayNum) {
    uVar5 = uVar14;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  lVar2 = *(longlong *)((param_4->AllocatorInstance).Data + lVar13 + 0x58);
  uVar5 = 0;
  if ((int)uVar10 < param_4->ArrayNum) {
    uVar5 = uVar14;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  this = *(UPCGNode **)((param_4->AllocatorInstance).Data + lVar13 + 0x98);
  if ((this != (UPCGNode *)0x0) &&
     (this_00 = (UPCGHiGenGridSizeSettings *)UPCGNode::GetSettings(this),
     this_00 != (UPCGHiGenGridSizeSettings *)0x0)) {
    pUVar9 = Z_Construct_UClass_UPCGHiGenGridSizeSettings_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar9->_padding_ && ((char)this_00->_padding_ != '\0')) && (lVar2 == -1)))) {
      EVar6 = UPCGHiGenGridSizeSettings::GetGrid(this_00);
      if (param_2 < EVar6) {
        EVar6 = param_2;
      }
      goto LAB_149cafb3b;
    }
  }
  uVar5 = 0;
  if ((int)uVar10 < param_4->ArrayNum) {
    uVar5 = uVar14;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  if (*(int *)((param_4->AllocatorInstance).Data + lVar13 + 8) == 0) {
    EVar6 = param_2;
    if (lVar2 != -1) {
      uVar5 = 0;
      if ((int)uVar10 < param_4->ArrayNum) {
        uVar5 = uVar14;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      if ((*(longlong *)((param_4->AllocatorInstance).Data + lVar13 + 0x58) == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCompiledTasks[InTaskId].ParentId != InvalidPCGTaskId",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                             ,0x29e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      uVar5 = 0;
      if ((int)uVar10 < param_4->ArrayNum) {
        uVar5 = uVar14;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      EVar6 = CalculateGridRecursive
                        (*(ulong64 *)((param_4->AllocatorInstance).Data + lVar13 + 0x58),param_2,
                         param_3,param_4,param_5);
    }
  }
  else {
    EVar6 = Unbounded;
    uVar5 = 0;
    if ((int)uVar10 < param_4->ArrayNum) {
      uVar5 = uVar14;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    pFVar12 = (param_4->AllocatorInstance).Data + lVar13;
    lVar13 = *(longlong *)pFVar12;
    iVar1 = *(int *)(pFVar12 + 8);
    pcVar11 = (char *)(lVar13 + 0x70);
    while( true ) {
      if (*(int *)(pFVar12 + 8) != iVar1) {
        local_c8[0] = 0;
        `TCheckedPointerIterator<FPCGGraphTaskInput_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_c8);
      }
      lVar15 = local_c0;
      uVar14 = local_c4;
      if ((ulong64 *)(pcVar11 + -0x70) == (ulong64 *)((longlong)iVar1 * 0x80 + lVar13)) break;
      local_b8 = *(ulong64 *)(pcVar11 + -0x70);
      local_80 = pcVar11[-0x38];
      if (local_80 != '\0') {
        FPCGPinProperties::FPCGPinProperties(&local_b0,(FPCGPinProperties *)(pcVar11 + -0x68));
      }
      local_48 = *pcVar11;
      if (local_48 != '\0') {
        FPCGPinProperties::FPCGPinProperties(&local_78,(FPCGPinProperties *)(pcVar11 + -0x30));
      }
      local_40 = pcVar11[8];
      local_3f = pcVar11[9];
      EVar7 = CalculateGridRecursive(local_b8,param_2,param_3,param_4,param_5);
      bVar4 = PCGHiGenGrid::IsValidGrid(EVar7);
      if ((bVar4) && (EVar7 < EVar6)) {
        EVar6 = EVar7;
      }
      if ((local_48 != '\0') &&
         (local_78.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.AllowedTypes.Ids.AllocatorInstance.Data);
      }
      if ((local_80 != '\0') &&
         (local_b0.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b0.AllowedTypes.Ids.AllocatorInstance.Data);
      }
      pcVar11 = pcVar11 + 0x80;
    }
  }
LAB_149cafb3b:
  if ((EVar6 == Uninitialized) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8202795070391321266>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                         ,0x2b2,"Grid != EPCGHiGenGrid::Uninitialized"), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  uVar5 = 0;
  if ((int)uVar10 < param_5->ArrayNum) {
    uVar5 = uVar14;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  *(EPCGHiGenGrid *)((param_5->AllocatorInstance).Data + lVar15 * 4) = EVar6;
  return EVar6;
}

// CalculateStaticallyActiveRecursive @ 149cafbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPCGGraphCompiler::CalculateStaticallyActiveRecursive
          (ulong64 param_1,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_2,
          TMap<unsigned___int64,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>_>
          *param_3)

{
  ulong64 *puVar1;
  ForElementType<FName> FVar2;
  UPCGNode *pUVar3;
  code *pcVar4;
  ulong64 *puVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  bool *pbVar10;
  UPCGSettings *pUVar11;
  UClass *pUVar12;
  ForElementType<FName> FVar13;
  ForElementType<FName> FVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ForElementType<FName> FVar19;
  ulong64 uVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  int iVar26;
  char *pcVar27;
  uint uVar28;
  undefined1 auStack_198 [32];
  ForElementType<FName> local_178;
  ForElementType<FName> local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148;
  char local_147;
  undefined1 local_146;
  undefined1 local_145;
  char local_144;
  char local_143;
  undefined1 local_142;
  undefined1 local_141;
  undefined1 local_140 [8];
  ulong64 local_138;
  uint local_130;
  ForElementType<FName> local_128;
  char *local_120;
  TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
  *local_118;
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *local_100;
  ulong64 *local_f8;
  FScriptContainerElement *local_f0;
  UPCGNode *local_e8;
  ulong64 *local_e0;
  undefined1 *local_d8;
  ulong64 *local_d0;
  undefined1 *local_c8;
  ulong64 *local_c0;
  undefined1 *local_b8;
  ulong64 *local_b0;
  undefined1 *local_a8;
  undefined1 local_98 [64];
  ForElementType<FName> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_138 = param_1;
  local_118 = (TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
               *)param_3;
  local_100 = param_2;
  pbVar10 = TMapBase<unsigned___int64,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>_>
            ::Find((TMapBase<unsigned___int64,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>_>
                    *)param_3,param_1);
  if (pbVar10 != (bool *)0x0) {
    return *pbVar10;
  }
  uVar18 = (uint)param_1;
  uVar28 = 0;
  uVar15 = uVar28;
  if ((int)uVar18 < param_2->ArrayNum) {
    uVar15 = ~uVar18 >> 0x1f;
  }
  if (uVar15 == 0) {
    local_178 = (ForElementType<FName>)(longlong)(int)uVar18;
    local_170 = (ForElementType<FName>)(longlong)param_2->ArrayNum;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  FVar19 = (ForElementType<FName>)(longlong)(int)(uint)local_138;
  pUVar3 = *(UPCGNode **)((param_2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x148 + 0x98);
  uVar15 = uVar28;
  if ((int)(uint)local_138 < param_2->ArrayNum) {
    uVar15 = ~(uint)local_138 >> 0x1f;
  }
  local_e8 = pUVar3;
  if ((uVar15 == 0) &&
     (local_178 = FVar19, local_170 = (ForElementType<FName>)(longlong)param_2->ArrayNum,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if (*(longlong *)((param_2->AllocatorInstance).Data + (longlong)FVar19 * 0x148 + 0x58) == -1) {
    if (pUVar3 != (UPCGNode *)0x0) goto LAB_149cafe05;
  }
  else {
    FVar19 = (ForElementType<FName>)(longlong)(int)(uint)local_138;
    uVar15 = uVar28;
    if ((int)(uint)local_138 < param_2->ArrayNum) {
      uVar15 = ~(uint)local_138 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (local_178 = FVar19, local_170 = (ForElementType<FName>)(longlong)param_2->ArrayNum,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    local_146 = CalculateStaticallyActiveRecursive
                          (*(ulong64 *)
                            ((param_2->AllocatorInstance).Data + (longlong)FVar19 * 0x148 + 0x58),
                           param_2,param_3);
    if (!(bool)local_146) {
LAB_149cafda0:
      local_e0 = &local_138;
      local_d8 = &local_146;
      TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,bool_const_&>_>
                ((TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
                  *)param_3,(TPairInitializer<unsigned___int64_const_&,bool_const_&> *)local_110,
                 (bool *)&local_e0);
      return (bool)local_146;
    }
    if (pUVar3 != (UPCGNode *)0x0) {
      pUVar11 = UPCGNode::GetSettings(pUVar3);
      if (pUVar11 != (UPCGSettings *)0x0) {
        pUVar11 = UPCGNode::GetSettings(pUVar3);
        bVar6 = UObjectBaseUtility::IsA<UPCGGraphInputOutputSettings>((UObjectBaseUtility *)pUVar11)
        ;
        if (bVar6) goto LAB_149cafda0;
      }
LAB_149cafe05:
      pUVar11 = UPCGNode::GetSettings(pUVar3);
      uVar15 = 0;
      if (pUVar11 != (UPCGSettings *)0x0) {
        pUVar12 = Z_Construct_UClass_UPCGSubgraphSettings_NoRegister();
        iVar26 = (int)pUVar12->_padding_;
        if ((iVar26 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar26 * 8) ==
            &pUVar12->_padding_)) {
          FVar19 = (ForElementType<FName>)(longlong)(int)(uint)local_138;
          if ((int)(uint)local_138 < param_2->ArrayNum) {
            uVar28 = ~(uint)local_138 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (local_178 = FVar19, local_170 = (ForElementType<FName>)(longlong)param_2->ArrayNum,
             bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          if (*(int *)((param_2->AllocatorInstance).Data + (longlong)FVar19 * 0x148 + 8) == 0) {
            uVar20 = 0xffffffffffffffff;
          }
          else {
            FVar19 = (ForElementType<FName>)(longlong)(int)(uint)local_138;
            uVar28 = uVar15;
            if ((int)(uint)local_138 < param_2->ArrayNum) {
              uVar28 = ~(uint)local_138 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (local_178 = FVar19, local_170 = (ForElementType<FName>)(longlong)param_2->ArrayNum,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            pFVar21 = (param_2->AllocatorInstance).Data + (longlong)FVar19 * 0x148;
            iVar26 = *(int *)(pFVar21 + 8);
            if (iVar26 < 1) {
              local_178 = (ForElementType<FName>)0x0;
              local_170 = (ForElementType<FName>)(longlong)iVar26;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
            }
            uVar20 = **(ulong64 **)pFVar21;
          }
          cVar8 = (**(code **)(pUVar11->_padding_ + 0x500))(pUVar11);
          if ((cVar8 == '\0') && (uVar20 != 0xffffffffffffffff)) {
            uVar18 = (uint)uVar20;
            uVar28 = uVar15;
            if ((int)uVar18 < param_2->ArrayNum) {
              uVar28 = ~uVar18 >> 0x1f;
            }
            if (uVar28 == 0) {
              local_178 = (ForElementType<FName>)(longlong)(int)uVar18;
              local_170 = (ForElementType<FName>)(longlong)param_2->ArrayNum;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
            }
            if (*(UPCGNode **)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x148 + 0x98) ==
                pUVar3) {
              local_145 = CalculateStaticallyActiveRecursive(uVar20,param_2,param_3);
              local_c0 = &local_138;
              local_b8 = &local_145;
              TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<unsigned___int64_const_&,bool_const_&>_>
                        ((TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
                          *)param_3,
                         (TPairInitializer<unsigned___int64_const_&,bool_const_&> *)local_108,
                         (bool *)&local_c0);
              return (bool)local_145;
            }
          }
        }
      }
      local_58 = (ForElementType<FName>)0x0;
      local_50 = 0;
      local_4c = 8;
      pFVar25 = (pUVar3->InputPins).AllocatorInstance.Data;
      iVar26 = (pUVar3->InputPins).ArrayNum;
      local_144 = '\0';
      pFVar21 = pFVar25 + (longlong)iVar26 * 8;
      while( true ) {
        if ((pUVar3->InputPins).ArrayNum != iVar26) {
          local_141 = 0;
          `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_141);
        }
        if (pFVar25 == pFVar21) break;
        lVar16 = *(longlong *)pFVar25;
        if (lVar16 != 0) {
          FVar19 = (ForElementType<FName>)(lVar16 + 0x48);
          if ((*(char *)(lVar16 + 0x71) != '\x02') && (*(char *)(lVar16 + 0x71) != '\x03')) {
            local_144 = '\x01';
            cVar8 = (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3);
            if (cVar8 != '\0') {
              FVar14 = (ForElementType<FName>)local_98;
              if (local_58 != (ForElementType<FName>)0x0) {
                FVar14 = local_58;
              }
              FVar2 = (ForElementType<FName>)((longlong)FVar14 + (longlong)local_50 * 8);
              if (FVar14 != FVar2) {
                FVar13 = FVar14;
                do {
                  if (*(longlong *)FVar13 == *(longlong *)FVar19) {
                    if ((int)((longlong)FVar13 - (longlong)FVar14 >> 3) != -1) goto LAB_149cb018f;
                    break;
                  }
                  FVar13 = (ForElementType<FName>)((longlong)FVar13 + 8);
                } while (FVar13 != FVar2);
              }
              FVar14 = (ForElementType<FName>)local_98;
              if (local_58 != (ForElementType<FName>)0x0) {
                FVar14 = local_58;
              }
              if ((ulonglong)FVar14 <= (ulonglong)FVar19) {
                FVar14 = (ForElementType<FName>)local_98;
                if (local_58 != (ForElementType<FName>)0x0) {
                  FVar14 = local_58;
                }
                if ((ulonglong)FVar19 < (ulonglong)((longlong)FVar14 + (longlong)local_4c * 8)) {
                  local_158 = 8;
                  local_170 = (ForElementType<FName>)local_98;
                  if (local_58 != (ForElementType<FName>)0x0) {
                    local_170 = local_58;
                  }
                  local_178 = FVar19;
                  local_168 = (longlong)local_4c;
                  local_160 = (longlong)local_50;
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar6) {
                    pcVar4 = (code *)swi(3);
                    uVar7 = (*pcVar4)();
                    return (bool)uVar7;
                  }
                }
              }
              if (local_50 == local_4c) {
                local_50 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                                     (0x408,(ForElementType<FName> *)local_98,&local_4c);
              }
              FVar14 = (ForElementType<FName>)local_98;
              if (local_58 != (ForElementType<FName>)0x0) {
                FVar14 = local_58;
              }
              lVar16 = (longlong)local_50;
              local_50 = local_50 + 1;
              *(undefined8 *)((longlong)FVar14 + lVar16 * 8) = *(undefined8 *)FVar19;
            }
          }
        }
LAB_149cb018f:
        pFVar25 = pFVar25 + 8;
      }
      FVar19 = (ForElementType<FName>)(longlong)(int)(uint)local_138;
      local_143 = '\0';
      local_147 = '\0';
      if ((int)(uint)local_138 < param_2->ArrayNum) {
        uVar15 = ~(uint)local_138 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (local_178 = FVar19, local_170 = (ForElementType<FName>)(longlong)param_2->ArrayNum,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_f0 = (param_2->AllocatorInstance).Data + (longlong)FVar19 * 0x148;
      local_130 = *(uint *)(local_f0 + 8);
      uVar17 = (ulonglong)(int)local_130;
      local_f8 = (ulong64 *)(uVar17 * 0x80 + *(longlong *)local_f0);
      pcVar27 = (char *)(*(longlong *)local_f0 + 0x69);
      do {
        puVar5 = local_f8;
        local_120 = pcVar27;
        if (*(int *)(local_f0 + 8) != (int)uVar17) {
          local_140[0] = 0;
          `TCheckedPointerIterator<FPCGGraphTaskInput_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_140);
        }
        puVar1 = (ulong64 *)(pcVar27 + -0x69);
        if (puVar1 == puVar5) {
          pUVar11 = UPCGNode::GetSettings(local_e8);
          if ((pUVar11 == (UPCGSettings *)0x0) ||
             (cVar8 = (**(code **)(pUVar11->_padding_ + 0x420))(pUVar11), cVar8 == '\0')) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          local_148 = 1;
          if (local_50 == 0) {
            if (bVar6) {
              if ((local_144 == '\0') || (local_147 != '\0')) {
                local_148 = 1;
              }
              else {
                local_148 = 0;
              }
              goto LAB_149cb0589;
            }
            if ((local_143 == '\0') || (local_147 != '\0')) goto LAB_149cb0589;
            FVar19 = (ForElementType<FName>)(longlong)(int)(uint)local_138;
            uVar15 = 0;
            if ((int)(uint)local_138 < param_2->ArrayNum) {
              uVar15 = ~(uint)local_138 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (local_178 = FVar19, local_170 = (ForElementType<FName>)(longlong)param_2->ArrayNum,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)((param_2->AllocatorInstance).Data + (longlong)FVar19 * 0x148 + 8) == 0)
            goto LAB_149cb0589;
          }
          local_148 = 0;
LAB_149cb0589:
          local_b0 = &local_138;
          local_a8 = &local_148;
          TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned___int64_const_&,bool_const_&>_>
                    (local_118,
                     (TPairInitializer<unsigned___int64_const_&,bool_const_&> *)(local_108 + 4),
                     (bool *)&local_b0);
          uVar7 = local_148;
          if (local_58 == (ForElementType<FName>)0x0) {
            return (bool)local_148;
          }
          FMemory::Free((void *)local_58);
          return (bool)uVar7;
        }
        if ((pcVar27[7] == '\0') ||
           ((iVar26 = local_50, *pcVar27 != '\x02' && (*pcVar27 != '\x03')))) {
          bVar9 = 1;
          local_143 = '\x01';
          if (pcVar27[-0x31] != '\0') {
            uVar15 = (uint)*puVar1;
            uVar28 = 0;
            if ((int)uVar15 < param_2->ArrayNum) {
              uVar28 = ~uVar15 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (local_178 = (ForElementType<FName>)(longlong)(int)uVar15,
               local_170 = (ForElementType<FName>)(longlong)param_2->ArrayNum,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            pUVar3 = *(UPCGNode **)
                      ((param_2->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x148 + 0x98);
            if ((pUVar3 != (UPCGNode *)0x0) &&
               (pUVar11 = UPCGNode::GetSettings(pUVar3), pUVar11 != (UPCGSettings *)0x0)) {
              pcVar4 = *(code **)(pUVar11->_padding_ + 0x418);
              if ((pcVar27[-0x31] == '\0') &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              bVar9 = (*pcVar4)(pUVar11,pcVar27 + -0x61);
              bVar9 = bVar9 & 1;
              iVar26 = local_50;
              if (bVar9 == 0) goto LAB_149cb04a2;
            }
          }
          bVar6 = CalculateStaticallyActiveRecursive
                            (*puVar1,param_2,
                             (TMap<unsigned___int64,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>_>
                              *)local_118);
          iVar26 = local_50;
          if (((bVar9 & bVar6) != 0) && (local_147 = '\x01', pcVar27[7] != '\0')) {
            local_128 = (ForElementType<FName>)((longlong)pcVar27 - 0x29);
            FVar19 = (ForElementType<FName>)local_98;
            if (local_58 != (ForElementType<FName>)0x0) {
              FVar19 = local_58;
            }
            if ((ulonglong)FVar19 <= (ulonglong)local_128) {
              FVar19 = (ForElementType<FName>)local_98;
              if (local_58 != (ForElementType<FName>)0x0) {
                FVar19 = local_58;
              }
              if ((ulonglong)local_128 < (ulonglong)((longlong)FVar19 + (longlong)local_4c * 8)) {
                local_160 = (longlong)local_50;
                local_158 = 8;
                local_170 = (ForElementType<FName>)local_98;
                if (local_58 != (ForElementType<FName>)0x0) {
                  local_170 = local_58;
                }
                local_178 = local_128;
                local_168 = (longlong)local_4c;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
              }
            }
            lVar16 = (longlong)local_50;
            iVar26 = local_50;
            if (local_50 != 0) {
              FVar19 = (ForElementType<FName>)local_98;
              if (local_58 != (ForElementType<FName>)0x0) {
                FVar19 = local_58;
              }
              iVar26 = 0;
              lVar22 = 0;
              bVar6 = *(longlong *)FVar19 != *(longlong *)local_128;
              FVar14 = local_128;
              iVar23 = 0;
              do {
                lVar22 = lVar22 + 1;
                iVar24 = iVar23 + 1;
                if (lVar22 < lVar16) {
                  do {
                    if (bVar6 != (*(longlong *)((longlong)FVar19 + lVar22 * 8) !=
                                 *(longlong *)FVar14)) break;
                    iVar24 = iVar24 + 1;
                    lVar22 = lVar22 + 1;
                  } while (lVar22 < lVar16);
                }
                if (bVar6 != false) {
                  if (iVar26 != iVar23) {
                    memmove((void *)((longlong)FVar19 + (longlong)iVar26 * 8),
                            (void *)((longlong)FVar19 + (longlong)iVar23 * 8),
                            (longlong)(iVar24 - iVar23) << 3);
                    FVar14 = local_128;
                  }
                  iVar26 = iVar26 + (iVar24 - iVar23);
                }
                bVar6 = (bool)(bVar6 ^ 1);
                param_2 = local_100;
                pcVar27 = local_120;
                iVar23 = iVar24;
              } while (lVar22 < lVar16);
            }
          }
        }
LAB_149cb04a2:
        local_50 = iVar26;
        pcVar27 = pcVar27 + 0x80;
        uVar17 = (ulonglong)local_130;
      } while( true );
    }
  }
  local_d0 = &local_138;
  local_142 = 1;
  local_c8 = &local_142;
  TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,bool_&&>_>
            ((TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
              *)param_3,(TPairInitializer<unsigned___int64_const_&,bool_&&> *)(local_110 + 4),
             (bool *)&local_d0);
  return true;
}

// ClearCache @ 149cb4db0

void __thiscall FPCGGraphCompiler::ClearCache(FPCGGraphCompiler *this)

{
  AcquireSRWLockExclusive((PSRWLOCK)this);
  TSet<TTuple<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&(this->Cache).GraphToTaskMap);
  TSet<TTuple<UPCGGraph_*,FPCGStackContext>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,FPCGStackContext,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UPCGGraph_*,FPCGStackContext>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,FPCGStackContext,0>,FDefaultSetAllocator>
           *)&(this->Cache).GraphToStackContextMap);
  TSet<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
           *)&(this->Cache).TopGraphToTaskMap);
  TSet<TTuple<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>,FDefaultSetAllocator>
           *)&(this->Cache).TopGraphToStackContextMap);
  TSet<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
           *)&(this->Cache).TopGraphToComputeGraphMap);
                    /* WARNING: Could not recover jumptable at 0x000149cb4dfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// Compile @ 149cb6110

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphCompiler::Compile(FPCGGraphCompiler *this,UPCGGraph *param_1)

{
  longlong lVar1;
  UPCGGraphCompilationData *pUVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  bool bVar6;
  TPairInitializer<UPCGGraph_*_const_&,FPCGStackContext_const_&> local_res8;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> local_58;
  FPCGStackContext **local_48;
  FPCGStackContext *local_40;
  FPCGStackContext local_38;
  
  local_res8.Value = (FPCGStackContext *)param_1;
  AcquireSRWLockShared((PSRWLOCK)this);
  uVar3 = ((uint)((ulonglong)local_res8.Value >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_res8.Value >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(this->Cache).GraphToTaskMap.field_0x8 !=
      *(int *)&(this->Cache).GraphToTaskMap.field_0x34) {
    puVar5 = *(undefined1 **)&(this->Cache).GraphToTaskMap.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Cache).GraphToTaskMap.field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->Cache).GraphToTaskMap.field_0x48 - 1U &
                              (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->Cache).GraphToTaskMap;
      do {
        if (*(UPCGGraph **)((longlong)iVar4 * 0x20 + lVar1) == (UPCGGraph *)local_res8.Value)
        goto LAB_149cb61ac;
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_149cb61ac:
  bVar6 = iVar4 != -1;
  ReleaseSRWLockShared((PSRWLOCK)this);
  if (((UPCGGraph *)local_res8.Value != (UPCGGraph *)0x0) &&
     (pUVar2 = (((TObjectPtr<UPCGGraphCompilationData> *)((longlong)local_res8.Value + 0x1f0))->
               field0_0x0).DebugPtr, pUVar2 != (UPCGGraphCompilationData *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    bVar6 = bVar6 || *(int *)&(pUVar2->Tasks).field_0x8 != *(int *)&(pUVar2->Tasks).field_0x34;
  }
  if (!bVar6) {
    local_38.GraphExecutionTaskId = 0xffffffffffffffff;
    local_res8.Key = (UPCGGraph **)0x0;
    local_38.Stacks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Stacks.ArrayNum = 0;
    local_38.Stacks.ArrayMax = 0;
    local_38.CurrentStackIndex = -1;
    CompileGraph(this,&local_58,(UPCGGraph *)local_res8.Value,(ulong64 *)&local_res8,&local_38);
    if (local_58.ArrayNum != 0) {
      AcquireSRWLockExclusive((PSRWLOCK)this);
      uVar3 = ((uint)((ulonglong)local_res8.Value >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res8.Value >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      if (*(int *)&(this->Cache).GraphToTaskMap.field_0x8 !=
          *(int *)&(this->Cache).GraphToTaskMap.field_0x34) {
        puVar5 = *(undefined1 **)&(this->Cache).GraphToTaskMap.field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(this->Cache).GraphToTaskMap.field_0x38;
        }
        iVar4 = *(int *)(puVar5 + (ulonglong)
                                  (*(int *)&(this->Cache).GraphToTaskMap.field_0x48 - 1U &
                                  (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar4 != -1) {
          lVar1 = *(longlong *)&(this->Cache).GraphToTaskMap;
          do {
            if (*(UPCGGraph **)((longlong)iVar4 * 0x20 + lVar1) == (UPCGGraph *)local_res8.Value)
            goto LAB_149cb631d;
            iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
          } while (iVar4 != -1);
        }
      }
      local_48 = &local_res8.Value;
      local_40 = (FPCGStackContext *)&local_58;
      TSet<TTuple<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UPCGGraph_*_const_&,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_&&>_>
                ((TSet<TTuple<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&(this->Cache).GraphToTaskMap,
                 (TPairInitializer<UPCGGraph_*_const_&,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_&&>
                  *)&local_res8,(bool *)&local_48);
      local_48 = &local_res8.Value;
      local_40 = &local_38;
      TSet<TTuple<UPCGGraph_*,FPCGStackContext>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,FPCGStackContext,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UPCGGraph_*_const_&,FPCGStackContext_const_&>_>
                ((TSet<TTuple<UPCGGraph_*,FPCGStackContext>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,FPCGStackContext,0>,FDefaultSetAllocator>
                  *)&(this->Cache).GraphToStackContextMap,&local_res8,(bool *)&local_48);
LAB_149cb631d:
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
    DestructItems<FPCGGraphTask,int>
              ((FPCGGraphTask *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    if ((FPCGGraphTask *)local_58.AllocatorInstance.Data != (FPCGGraphTask *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    DestructItems<FPCGStack,int>
              ((FPCGStack *)local_38.Stacks.AllocatorInstance.Data,local_38.Stacks.ArrayNum);
    if ((FPCGStack *)local_38.Stacks.AllocatorInstance.Data != (FPCGStack *)0x0) {
      FMemory::Free(local_38.Stacks.AllocatorInstance.Data);
    }
  }
  return;
}

// CompileGraph @ 149cb6380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> * __thiscall
FPCGGraphCompiler::CompileGraph
          (FPCGGraphCompiler *this,
          TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPCGGraph *param_1,ulong64 *param_2,FPCGStackContext *param_3)

{
  int *piVar1;
  EPCGPinStatus EVar2;
  EPCGPinUsage EVar3;
  FPCGStack *pFVar4;
  UPCGPin *pUVar5;
  UPCGNode *pUVar6;
  TObjectPtr<UPCGPin>_u_0 TVar7;
  FName FVar8;
  UPCGEdge *this_00;
  code *pcVar9;
  bool bVar10;
  ForAnyElementType FVar11;
  ulong64 *puVar12;
  FPCGStackContext *pFVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *pTVar19;
  UClass *pUVar20;
  TObjectPtr<UPCGGraph> TVar21;
  TObjectPtr<UPCGPin>_u_0 *pTVar22;
  char *pcVar23;
  TTuple<UPCGNode_const_*,unsigned___int64> *pTVar24;
  UPCGSettings *pUVar25;
  longlong lVar26;
  ulonglong uVar27;
  atomic<unsigned_char> *paVar28;
  ForElementType<FSetElementId> FVar29;
  TObjectPtr<UPCGNode>_u_0 *pTVar30;
  FPCGStack *pFVar31;
  FPCGGraphTask *pFVar32;
  FScriptContainerElement *pFVar33;
  UPCGPin *pUVar34;
  UPCGPin *pUVar35;
  TObjectPtr<UPCGPin>_u_0 *pTVar36;
  FScriptContainerElement FVar37;
  TObjectPtr<UPCGPin>_u_0 *pTVar38;
  TObjectPtr<UPCGNode>_u_0 *pTVar39;
  FScriptContainerElement *pFVar40;
  int iVar41;
  TObjectPtr<UPCGNode>_u_0 TVar42;
  ForAnyElementType FVar43;
  TObjectPtr<UPCGPin>_u_0 *pTVar44;
  undefined1 auStackY_428 [32];
  ForAnyElementType local_3d0;
  undefined8 local_3c8;
  EPCGPinUsage local_3c0;
  ForAnyElementType local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8;
  undefined1 local_3a7;
  undefined1 local_3a6;
  undefined1 local_3a5;
  undefined1 local_3a4;
  undefined1 local_3a3;
  undefined1 local_3a2;
  undefined1 local_3a1;
  undefined1 local_3a0;
  undefined1 local_39f;
  undefined1 local_39e [6];
  TObjectPtr<UPCGPin>_u_0 *local_398;
  uint local_390;
  uint local_38c;
  UPCGPin *local_388;
  TObjectPtr<UPCGPin>_u_0 *local_380;
  TObjectPtr<UPCGPin>_u_0 *local_378;
  TObjectPtr<UPCGPin>_u_0 *local_370;
  TObjectPtr<UPCGNode>_u_0 local_368;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> local_360;
  TObjectPtr<UPCGNode>_u_0 local_350;
  TObjectPtr<UPCGPin>_u_0 *local_348;
  TObjectPtr<UPCGPin>_u_0 *local_340;
  TObjectPtr<UPCGPin>_u_0 *local_338;
  TObjectPtr<UPCGPin>_u_0 *local_330;
  TObjectPtr<UPCGNode>_u_0 local_328;
  ulong64 *local_320;
  FPCGStackContext *local_318;
  TObjectPtr<UPCGNode>_u_0 local_310;
  ulong64 local_308;
  TObjectPtr<UPCGNode>_u_0 local_300;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *local_2f8;
  FPCGStackContext local_2f0;
  TObjectPtr<UPCGPin>_u_0 *local_2d0;
  FPCGGraphCompiler *local_2c8;
  FPCGStack *local_2c0;
  undefined1 local_2b8 [8];
  TObjectPtr<UPCGPin>_u_0 local_2b0;
  TObjectPtr<UPCGPin>_u_0 **local_2a8;
  ulong64 *local_2a0;
  TObjectPtr<UPCGPin>_u_0 **local_298;
  TObjectPtr<UPCGNode>_u_0 *local_290;
  FString local_280;
  FPCGPinProperties local_270;
  FScriptContainerElement local_240;
  FPCGPinProperties local_238;
  FScriptContainerElement local_208;
  FPCGPinProperties local_200;
  FScriptContainerElement local_1d0;
  FPCGPinProperties local_1c8;
  bool local_198;
  FPCGPinProperties local_190;
  char local_160;
  FPCGPinProperties local_158;
  char local_128;
  FPCGPinProperties local_120;
  char local_f0;
  FPCGPinProperties local_e8;
  char local_b8;
  TSet<TTuple<UPCGNode_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned___int64,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_318 = param_3;
  if (param_1 == (UPCGGraph *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    local_320 = param_2;
    local_2f8 = __return_storage_ptr__;
    local_2d0 = (TObjectPtr<UPCGPin>_u_0 *)param_1;
    local_2c8 = this;
    FPCGStackContext::PushFrame(param_3,(UObject *)param_1);
    pTVar30 = (TObjectPtr<UPCGNode>_u_0 *)(param_1->Nodes).AllocatorInstance.Data;
    iVar17 = (param_1->Nodes).ArrayNum;
    local_3b8.Data = (FScriptContainerElement *)0x0;
    local_3b0 = 0;
    local_a8.Elements._0_8_ = 0;
    pTVar39 = pTVar30 + iVar17;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    local_3d0.Data = (FScriptContainerElement *)0x0;
    local_3c8._0_4_ = 0;
    local_3c8._4_4_ = 0;
    while( true ) {
      if ((param_1->Nodes).ArrayNum != iVar17) {
        local_3a8 = 0;
        `TCheckedPointerIterator<UPCGNode_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3a8);
      }
      if (pTVar30 == pTVar39) break;
      local_310 = (TObjectPtr<UPCGNode>_u_0)pTVar30->DebugPtr;
      bVar14 = UPCGNode::HasInboundEdges(local_310.DebugPtr);
      if (!bVar14) {
        if (((local_3d0.Data <= &local_310) &&
            (&local_310 <
             (TObjectPtr<UPCGNode>_u_0 *)(local_3d0.Data + (longlong)local_3c8._4_4_ * 8))) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
          return pTVar19;
        }
        if ((int)local_3c8 == local_3c8._4_4_) {
          local_3c8._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_3d0,(int *)((longlong)&local_3c8 + 4));
        }
        ((TObjectPtr<UPCGNode>_u_0 *)(local_3d0.Data + (longlong)(int)local_3c8 * 8))->DebugPtr =
             (UPCGNode *)local_310;
        local_3c8._0_4_ = (int)local_3c8 + 1;
      }
      pTVar30 = pTVar30 + 1;
    }
    local_328 = (param_1->InputNode).field0_0x0;
    if (((local_3d0.Data <= &local_328) &&
        (&local_328 < (TObjectPtr<UPCGNode>_u_0 *)(local_3d0.Data + (longlong)local_3c8._4_4_ * 8)))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar19;
    }
    if ((int)local_3c8 == local_3c8._4_4_) {
      local_3c8._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_3d0,(int *)((longlong)&local_3c8 + 4));
    }
    lVar26 = (longlong)(int)local_3c8;
    iVar17 = (int)local_3c8 + 1;
    local_3c8 = CONCAT44(local_3c8._4_4_,iVar17);
    *(TObjectPtr<UPCGNode>_u_0 *)(local_3d0.Data + lVar26 * 8) = local_328;
    while (0 < iVar17) {
      pTVar36 = (TObjectPtr<UPCGPin>_u_0 *)0x0;
      if (((int)local_3c8 < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar19;
      }
      iVar17 = (int)local_3c8 + -1;
      pTVar22 = *(TObjectPtr<UPCGPin>_u_0 **)(local_3d0.Data + (longlong)iVar17 * 8);
      iVar41 = ((int)local_3c8 - iVar17) + -1;
      if (iVar41 != 0) {
        memmove(local_3d0.Data + (longlong)iVar17 * 8,local_3d0.Data + (longlong)iVar17 * 8 + 8,
                (longlong)iVar41 << 3);
      }
      iVar17 = (int)local_3c8 + -1;
      local_3c8 = CONCAT44(local_3c8._4_4_,iVar17);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&local_3d0,iVar17,(int *)((longlong)&local_3c8 + 4));
      local_398 = pTVar22;
      if (pTVar22 == (TObjectPtr<UPCGPin>_u_0 *)0x0) {
LAB_149cb6745:
        local_380 = (TObjectPtr<UPCGPin>_u_0 *)0x0;
        pTVar22 = pTVar36;
        pTVar44 = pTVar36;
LAB_149cb674f:
        bVar14 = false;
      }
      else {
        pUVar20 = Z_Construct_UClass_UPCGBaseSubgraphNode_NoRegister();
        iVar17 = (int)pUVar20->_padding_;
        if ((*(int *)&((pTVar22[2].DebugPtr)->Edges).AllocatorInstance.Data < iVar17) ||
           ((longlong *)
            *(undefined1 **)
             ((longlong)(pTVar22[2].DebugPtr)->Label_DEPRECATED + (longlong)iVar17 * 8) !=
            &pUVar20->_padding_)) goto LAB_149cb6745;
        TVar21 = UPCGBaseSubgraphNode::GetSubgraph((UPCGBaseSubgraphNode *)&pTVar22->ObjectPtr);
        pTVar44 = *(TObjectPtr<UPCGPin>_u_0 **)TVar21.field0_0x0;
        local_380 = pTVar44;
        pTVar22 = (TObjectPtr<UPCGPin>_u_0 *)UPCGNode::GetSettings((UPCGNode *)&pTVar22->ObjectPtr);
        if (pTVar22 == (TObjectPtr<UPCGPin>_u_0 *)0x0) {
LAB_149cb6720:
          pTVar22 = pTVar36;
        }
        else {
          pUVar20 = Z_Construct_UClass_UPCGBaseSubgraphSettings_NoRegister();
          iVar17 = (int)pUVar20->_padding_;
          if ((*(int *)&((pTVar22[2].DebugPtr)->Edges).AllocatorInstance.Data < iVar17) ||
             ((longlong *)
              *(undefined1 **)
               ((longlong)(pTVar22[2].DebugPtr)->Label_DEPRECATED + (longlong)iVar17 * 8) !=
              &pUVar20->_padding_)) goto LAB_149cb6720;
        }
        if ((pTVar44 == (TObjectPtr<UPCGPin>_u_0 *)0x0) ||
           ((local_2d0 != pTVar44 &&
            (bVar14 = UPCGGraph::Contains((UPCGGraph *)&pTVar44->ObjectPtr,
                                          (UPCGGraph *)&local_2d0->ObjectPtr), !bVar14))))
        goto LAB_149cb674f;
        bVar14 = true;
      }
      if ((pTVar22 == (TObjectPtr<UPCGPin>_u_0 *)0x0) ||
         (cVar15 = (*(code *)pTVar22->DebugPtr[10]._padding_)(), cVar15 != '\0')) {
        bVar16 = true;
        if (pTVar22 != (TObjectPtr<UPCGPin>_u_0 *)0x0) goto LAB_149cb6772;
LAB_149cb677c:
        bVar10 = false;
      }
      else {
        bVar16 = false;
LAB_149cb6772:
        if (*(char *)(pTVar22 + 9) == '\0') goto LAB_149cb677c;
        bVar10 = true;
      }
      if ((((pTVar44 == (TObjectPtr<UPCGPin>_u_0 *)0x0) || (bVar16)) || (!bVar10)) || (bVar14)) {
        local_300.DebugPtr = (UPCGNode *)*local_320;
        *local_320 = (ulong64)((longlong)&(local_300.DebugPtr)->_padding_ + 1);
        iVar17 = (int)local_3b0;
        if ((int)local_3b0 == local_3b0._4_4_) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x148,8,&local_3b8,(int *)((longlong)&local_3b0 + 4));
        }
        local_3b0 = CONCAT44(local_3b0._4_4_,iVar17 + 1);
        pFVar32 = (FPCGGraphTask *)(local_3b8.Data + (longlong)iVar17 * 0x148);
        memset(pFVar32,0,0x148);
        local_330 = (TObjectPtr<UPCGPin>_u_0 *)FPCGGraphTask::FPCGGraphTask(pFVar32);
        local_330[0x13].DebugPtr = (UPCGPin *)local_398;
        *(TObjectPtr<UPCGNode>_u_0 *)(local_330 + 9) = local_300;
        *(int *)(local_330 + 0xe) = param_3->CurrentStackIndex;
        local_348 = local_398;
        local_390 = *(uint *)(local_398 + 0xe);
        uVar27 = (ulonglong)(int)local_390;
        pTVar36 = (TObjectPtr<UPCGPin>_u_0 *)local_398[0xd].DebugPtr;
        local_340 = pTVar36 + uVar27;
        while( true ) {
          pTVar22 = local_340;
          local_380 = pTVar36;
          if (*(int *)(local_348 + 0xe) != (int)uVar27) {
            local_3a3 = 0;
            `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_3a3);
          }
          if (pTVar36 == pTVar22) break;
          TVar7 = (TObjectPtr<UPCGPin>_u_0)pTVar36->DebugPtr;
          local_38c = ((TVar7.DebugPtr)->Edges).ArrayNum;
          uVar27 = (ulonglong)(int)local_38c;
          pTVar36 = *(TObjectPtr<UPCGPin>_u_0 **)((longlong)TVar7 + 0x38);
          EVar3 = ((TVar7.DebugPtr)->Properties).Usage;
          local_338 = pTVar36 + uVar27;
          while( true ) {
            pTVar22 = local_338;
            if (((TVar7.DebugPtr)->Edges).ArrayNum != (int)uVar27) {
              local_3a2 = 0;
              `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_3a2);
            }
            if (pTVar36 == pTVar22) break;
            pUVar35 = pTVar36->DebugPtr;
            bVar14 = UPCGEdge::IsValid((UPCGEdge *)pUVar35);
            if (bVar14) {
              if (((TObjectPtr<UPCGPin> *)&pUVar35->Properties)[1].field0_0x0.DebugPtr ==
                  (UPCGPin *)0x0) {
                bVar14 = TVar7.DebugPtr == (UPCGPin *)0x0;
              }
              else {
                bVar14 = ((TObjectPtr<UPCGPin> *)&pUVar35->Properties)[1].field0_0x0.DebugPtr ==
                         TVar7.DebugPtr;
              }
              if ((!bVar14) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InboundEdge->OutputPin == InputPin",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                                      ,0x157,L""), bVar14)) {
                pcVar9 = (code *)swi(3);
                pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
                return pTVar19;
              }
              FVar8 = (pUVar35->Properties).Label;
              pTVar24 = TSet<TTuple<UPCGNode_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned___int64,0>,FDefaultSetAllocator>
                        ::Find(&local_a8,*(UPCGNode **)((longlong)FVar8 + 0x28));
              pTVar22 = local_330;
              if ((pTVar24 == (TTuple<UPCGNode_const_*,unsigned___int64> *)0x0) ||
                 (&pTVar24->field_0x8 == (undefined1 *)0x0)) {
                if (1 < (byte)LogPCG._0_1_) {
                  local_2b0 = local_398[3];
                  ::FName::ToString((FName *)&local_2b0.ObjectPtr,&local_280);
                  UE::Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)&PTR_u_Inconsistent_no_151fbd488,
                             (FLogCategoryBase *)&LogPCG);
                  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_280.Data.AllocatorInstance.Data);
                  }
                }
                __return_storage_ptr__ = local_2f8;
                (local_2f8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                local_2f8->ArrayNum = 0;
                local_2f8->ArrayMax = 0;
                if ((TObjectPtr<UPCGNode>_u_0 *)local_3d0.Data != (TObjectPtr<UPCGNode>_u_0 *)0x0) {
                  FMemory::Free(local_3d0.Data);
                }
                goto LAB_149cb7b1a;
              }
              iVar17 = *(int *)(local_330 + 1);
              if (iVar17 == *(int *)((longlong)local_330 + 0xc)) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x880,(ForAnyElementType *)&local_330->ObjectPtr,
                                    (int *)((longlong)local_330 + 0xc));
              }
              *(int *)(pTVar22 + 1) = iVar17 + 1;
              pUVar35 = pTVar22->DebugPtr + iVar17;
              FPCGPinProperties::FPCGPinProperties(&local_1c8,&(TVar7.DebugPtr)->Properties);
              local_198 = true;
              FPCGPinProperties::FPCGPinProperties
                        (&local_e8,(FPCGPinProperties *)((longlong)FVar8 + 0x48));
              pUVar35->_padding_ = *(longlong *)&pTVar24->field_0x8;
              *(undefined1 *)&(pUVar35->Edges).AllocatorInstance.Data = 1;
              local_b8 = '\x01';
              FPCGPinProperties::FPCGPinProperties
                        ((FPCGPinProperties *)&pUVar35->_padding_,&local_e8);
              (pUVar35->Properties).bAllowMultipleData = local_198;
              if (local_198 != false) {
                FPCGPinProperties::FPCGPinProperties
                          ((FPCGPinProperties *)&(pUVar35->Edges).ArrayNum,&local_1c8);
              }
              pUVar35->bPropertiesHaveChangedOnDeprecation = EVar3 != DependencyOnly;
              pUVar35->field_0x79 = 1;
              if ((local_b8 != '\0') &&
                 (local_e8.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 )) {
                FMemory::Free(local_e8.AllowedTypes.Ids.AllocatorInstance.Data);
              }
              if ((local_198 != false) &&
                 (local_1c8.AllowedTypes.Ids.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_1c8.AllowedTypes.Ids.AllocatorInstance.Data);
              }
LAB_149cb7616:
              uVar27 = (ulonglong)local_38c;
              pTVar36 = pTVar36 + 1;
            }
            else {
              if ((byte)LogPCG._0_1_ < 3) goto LAB_149cb7616;
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              uVar27 = (ulonglong)local_38c;
              pTVar36 = pTVar36 + 1;
            }
          }
          pTVar36 = local_380 + 1;
          uVar27 = (ulonglong)local_390;
        }
        uVar18 = ((uint)((ulonglong)local_398 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_398 >> 4))
                 * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
          FVar29 = (ForElementType<FSetElementId>)&local_a8.Hash;
          if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar29 = local_a8.Hash.SecondaryData;
          }
          for (iVar17 = *(int *)((longlong)FVar29 +
                                (ulonglong)(local_a8.HashSize - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4)
              ; iVar17 != -1;
              iVar17 = *(int *)(local_a8.Elements._0_8_ + 0x10 + (longlong)iVar17 * 0x18)) {
            if (*(TObjectPtr<UPCGPin>_u_0 **)(local_a8.Elements._0_8_ + (longlong)iVar17 * 0x18) ==
                local_398) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!IdMapping.Contains(Node)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                                  ,0x164,L"");
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
                return pTVar19;
              }
              break;
            }
          }
        }
        local_298 = &local_398;
        local_290 = &local_300;
        TSet<TTuple<UPCGNode_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned___int64,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UPCGNode_const_*_const_&,unsigned___int64_const_&>_>
                  (&local_a8,
                   (TPairInitializer<UPCGNode_const_*_const_&,unsigned___int64_const_&> *)
                   (local_2b8 + 4),(bool *)&local_298);
      }
      else {
        local_2f0.GraphExecutionTaskId = 0xffffffffffffffff;
        local_2f0.Stacks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2f0.Stacks.ArrayNum = 0;
        local_2f0.Stacks.ArrayMax = 0;
        TVar42.DebugPtr = (UPCGNode *)*local_320;
        local_2f0.CurrentStackIndex = -1;
        *local_320 = (ulong64)((longlong)&(TVar42.DebugPtr)->_padding_ + 1);
        local_368.DebugPtr = TVar42.DebugPtr;
        uVar18 = PCGHiGenGrid::UninitializedGridSize();
        GetCompiledTasks(local_2c8,&local_360,(UPCGGraph *)&pTVar44->ObjectPtr,uVar18,&local_2f0,
                         false);
        pFVar13 = local_318;
        FPCGStackContext::PushFrame(local_318,(UObject *)&local_398->ObjectPtr);
        iVar41 = local_360.ArrayNum;
        uVar27 = (ulonglong)local_360.ArrayNum;
        iVar17 = (pFVar13->Stacks).ArrayNum;
        pTVar22 = (TObjectPtr<UPCGPin>_u_0 *)(local_360.AllocatorInstance.Data + 0x70);
        pTVar38 = (TObjectPtr<UPCGPin>_u_0 *)(local_360.AllocatorInstance.Data + uVar27 * 0x148);
        while( true ) {
          if ((uint)uVar27 != iVar41) {
            local_3a7 = 0;
            `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_3a7);
          }
          pFVar13 = local_318;
          if (pTVar22 + -0xe == pTVar38) break;
          *(int *)pTVar22 = *(int *)pTVar22 + iVar17;
          uVar27 = (ulonglong)(uint)local_360.ArrayNum;
          pTVar22 = pTVar22 + 0x29;
        }
        FPCGStackContext::AppendStacks(local_318,&local_2f0);
        iVar17 = pFVar13->CurrentStackIndex;
        if ((iVar17 < 0) || ((pFVar13->Stacks).ArrayNum <= iVar17)) {
          pcVar23 = "Stacks.IsValidIndex(CurrentStackIndex)";
          iVar17 = 0x16d;
          paVar28 = &bGEnsureHasExecuted<6828661919449088365>;
        }
        else {
          if (((pFVar13->Stacks).ArrayNum <= iVar17) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
            return pTVar19;
          }
          pFVar4 = (FPCGStack *)(pFVar13->Stacks).AllocatorInstance.Data;
          local_2c0 = pFVar4 + iVar17;
          iVar17 = (pFVar13->Stacks).ArrayNum;
          for (pFVar31 = pFVar4; pFVar31 != pFVar4 + iVar17; pFVar31 = pFVar31 + 1) {
            bVar14 = `FPCGStackContext::PopFrame'::__l2::<lambda_1>::operator()(&local_2c0,pFVar31);
            if (bVar14) {
              iVar17 = (int)(((longlong)pFVar31 - (longlong)pFVar4) / 0x18);
              pFVar13->CurrentStackIndex = iVar17;
              if (iVar17 != -1) goto LAB_149cb695d;
              goto LAB_149cb68f1;
            }
          }
          pFVar13->CurrentStackIndex = -1;
LAB_149cb68f1:
          pcVar23 = "CurrentStackIndex != INDEX_NONE";
          iVar17 = 0x185;
          paVar28 = &bGEnsureHasExecuted<6828661919449088389>;
        }
        bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (paVar28,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGStackContext.cpp"
                            ,iVar17,pcVar23);
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
          return pTVar19;
        }
LAB_149cb695d:
        puVar12 = local_320;
        OffsetNodeIds(&local_360,*local_320,(ulong64)TVar42);
        *puVar12 = *puVar12 + (longlong)local_360.ArrayNum;
        local_370 = (TObjectPtr<UPCGPin>_u_0 *)local_360.AllocatorInstance.Data;
        for (FVar43.Data = local_360.AllocatorInstance.Data;
            (TObjectPtr<UPCGPin>_u_0 *)FVar43.Data !=
            (TObjectPtr<UPCGPin>_u_0 *)
            (local_360.AllocatorInstance.Data + (longlong)local_360.ArrayNum * 0x148);
            FVar43.Data = FVar43.Data + 0x148) {
          if (((TObjectPtr<UPCGPin>_u_0 *)((longlong)FVar43.Data + 0x98))->DebugPtr ==
              pTVar44[8].DebugPtr) goto LAB_149cb69c1;
        }
        for (; FVar43.Data = (FScriptContainerElement *)pTVar36,
            local_370 !=
            (TObjectPtr<UPCGPin>_u_0 *)
            (local_360.AllocatorInstance.Data + (longlong)local_360.ArrayNum * 0x148);
            local_370 = local_370 + 0x29) {
LAB_149cb69c1:
          if (local_370[0x13].DebugPtr == pTVar44[9].DebugPtr) goto LAB_149cb69de;
          pTVar36 = (TObjectPtr<UPCGPin>_u_0 *)FVar43.Data;
        }
        local_370 = (TObjectPtr<UPCGPin>_u_0 *)0x0;
LAB_149cb69de:
        iVar17 = (int)local_3b0;
        if ((int)local_3b0 == local_3b0._4_4_) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x148,8,&local_3b8,(int *)((longlong)&local_3b0 + 4));
        }
        local_3b0 = CONCAT44(local_3b0._4_4_,iVar17 + 1);
        pFVar32 = (FPCGGraphTask *)(local_3b8.Data + (longlong)iVar17 * 0x148);
        memset(pFVar32,0,0x148);
        pFVar32 = FPCGGraphTask::FPCGGraphTask(pFVar32);
        pFVar32->Node = (UPCGNode *)local_398;
        pFVar32->NodeId = (ulong64)local_368;
        pFVar32->StackIndex = pFVar13->CurrentStackIndex;
        local_338 = local_398;
        local_38c = *(uint *)(local_398 + 0xe);
        uVar27 = (ulonglong)(int)local_38c;
        pTVar36 = (TObjectPtr<UPCGPin>_u_0 *)local_398[0xd].DebugPtr;
        local_330 = pTVar36 + uVar27;
        while( true ) {
          pTVar22 = local_330;
          local_348 = pTVar36;
          if (*(int *)(local_338 + 0xe) != (int)uVar27) {
            local_3a6 = 0;
            `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_3a6);
          }
          if (pTVar36 == pTVar22) break;
          pUVar35 = pTVar36->DebugPtr;
          local_388 = pUVar35;
          if ((pUVar35 == (UPCGPin *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InputPin",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                                  ,0xf1,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
            return pTVar19;
          }
          local_390 = (pUVar35->Edges).ArrayNum;
          uVar27 = (ulonglong)(int)local_390;
          pTVar22 = (TObjectPtr<UPCGPin>_u_0 *)(pUVar35->Edges).AllocatorInstance.Data;
          EVar2 = (pUVar35->Properties).PinStatus;
          local_3c0 = (pUVar35->Properties).Usage;
          pTVar36 = pTVar22 + uVar27;
          local_378 = pTVar36;
          while( true ) {
            local_340 = pTVar22;
            if ((pUVar35->Edges).ArrayNum != (int)uVar27) {
              local_3a5 = 0;
              `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_3a5);
            }
            if (pTVar22 == pTVar36) break;
            pUVar5 = pTVar22->DebugPtr;
            bVar14 = UPCGEdge::IsValid((UPCGEdge *)pUVar5);
            if (bVar14) {
              if ((EVar2 == OverrideOrUserParam) ||
                 ((TObjectPtr<UPCGPin>_u_0 *)FVar43.Data == (TObjectPtr<UPCGPin>_u_0 *)0x0)) {
                pUVar35 = ((TObjectPtr<UPCGPin>_u_0 *)&(pUVar5->Properties).Label)->DebugPtr;
                pUVar5 = (((TObjectPtr<UPCGPin> *)&(pUVar5->Properties).Usage)->field0_0x0).DebugPtr
                ;
                pTVar24 = TSet<TTuple<UPCGNode_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned___int64,0>,FDefaultSetAllocator>
                          ::Find(&local_a8,(pUVar35->Node).field0_0x0.DebugPtr);
                if ((pTVar24 == (TTuple<UPCGNode_const_*,unsigned___int64> *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Pair != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                        ,0x288,L""), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
                  return pTVar19;
                }
                iVar17 = (pFVar32->Inputs).ArrayNum;
                piVar1 = &(pFVar32->Inputs).ArrayMax;
                if (iVar17 == *piVar1) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x880,(ForAnyElementType *)pFVar32,piVar1);
                }
                (pFVar32->Inputs).ArrayNum = iVar17 + 1;
                pFVar33 = (pFVar32->Inputs).AllocatorInstance.Data + (longlong)iVar17 * 0x80;
                FPCGPinProperties::FPCGPinProperties(&local_200,&pUVar5->Properties);
                local_1d0 = (FScriptContainerElement)0x1;
                FPCGPinProperties::FPCGPinProperties(&local_120,&pUVar35->Properties);
                *(undefined8 *)pFVar33 = *(undefined8 *)&pTVar24->field_0x8;
                pFVar33[0x38] = (FScriptContainerElement)0x1;
                local_f0 = '\x01';
                FPCGPinProperties::FPCGPinProperties((FPCGPinProperties *)(pFVar33 + 8),&local_120);
                pFVar33[0x70] = local_1d0;
                if (local_1d0 != (FScriptContainerElement)0x0) {
                  FPCGPinProperties::FPCGPinProperties
                            ((FPCGPinProperties *)(pFVar33 + 0x40),&local_200);
                }
                *(undefined2 *)(pFVar33 + 0x78) = 0x101;
                FVar11.Data = local_200.AllowedTypes.Ids.AllocatorInstance.Data;
                FVar37 = local_1d0;
                if ((local_f0 != '\0') &&
                   (local_120.AllowedTypes.Ids.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_120.AllowedTypes.Ids.AllocatorInstance.Data);
                  FVar11.Data = local_200.AllowedTypes.Ids.AllocatorInstance.Data;
                  FVar37 = local_1d0;
                }
              }
              else {
                pUVar35 = ((TObjectPtr<UPCGPin>_u_0 *)&(pUVar5->Properties).Label)->DebugPtr;
                pUVar34 = (((TObjectPtr<UPCGPin> *)&(pUVar5->Properties).Usage)->field0_0x0).
                          DebugPtr;
                pTVar24 = TSet<TTuple<UPCGNode_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned___int64,0>,FDefaultSetAllocator>
                          ::Find(&local_a8,(pUVar35->Node).field0_0x0.DebugPtr);
                if ((pTVar24 == (TTuple<UPCGNode_const_*,unsigned___int64> *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Pair != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                        ,0x288,L""), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
                  return pTVar19;
                }
                iVar17 = (pFVar32->Inputs).ArrayNum;
                piVar1 = &(pFVar32->Inputs).ArrayMax;
                if (iVar17 == *piVar1) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x880,(ForAnyElementType *)pFVar32,piVar1);
                }
                (pFVar32->Inputs).ArrayNum = iVar17 + 1;
                pFVar33 = (pFVar32->Inputs).AllocatorInstance.Data + (longlong)iVar17 * 0x80;
                FPCGPinProperties::FPCGPinProperties(&local_270,&pUVar34->Properties);
                local_240 = (FScriptContainerElement)0x1;
                FPCGPinProperties::FPCGPinProperties(&local_190,&pUVar35->Properties);
                *(undefined8 *)pFVar33 = *(undefined8 *)&pTVar24->field_0x8;
                pFVar33[0x38] = (FScriptContainerElement)0x1;
                local_160 = '\x01';
                FPCGPinProperties::FPCGPinProperties((FPCGPinProperties *)(pFVar33 + 8),&local_190);
                pFVar33[0x70] = local_240;
                if (local_240 != (FScriptContainerElement)0x0) {
                  FPCGPinProperties::FPCGPinProperties
                            ((FPCGPinProperties *)(pFVar33 + 0x40),&local_270);
                }
                *(undefined2 *)(pFVar33 + 0x78) = 0x100;
                if ((local_160 != '\0') &&
                   (local_190.AllowedTypes.Ids.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_190.AllowedTypes.Ids.AllocatorInstance.Data);
                }
                if ((local_240 != (FScriptContainerElement)0x0) &&
                   (local_270.AllowedTypes.Ids.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_270.AllowedTypes.Ids.AllocatorInstance.Data);
                }
                pUVar35 = ((TObjectPtr<UPCGPin>_u_0 *)&(pUVar5->Properties).Label)->DebugPtr;
                bVar14 = local_3c0 != DependencyOnly;
                pUVar5 = (((TObjectPtr<UPCGPin> *)&(pUVar5->Properties).Usage)->field0_0x0).DebugPtr
                ;
                pTVar24 = TSet<TTuple<UPCGNode_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned___int64,0>,FDefaultSetAllocator>
                          ::Find(&local_a8,(pUVar35->Node).field0_0x0.DebugPtr);
                if ((pTVar24 == (TTuple<UPCGNode_const_*,unsigned___int64> *)0x0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Pair != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                        ,0x288,L""), bVar16)) {
                  pcVar9 = (code *)swi(3);
                  pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
                  return pTVar19;
                }
                iVar17 = *(int *)((longlong)FVar43.Data + 8);
                if (iVar17 == *(int *)((longlong)FVar43.Data + 0xc)) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x880,(ForAnyElementType *)FVar43.Data,
                                      (int *)((longlong)FVar43.Data + 0xc));
                }
                *(int *)((longlong)FVar43.Data + 8) = iVar17 + 1;
                pUVar34 = *(UPCGPin **)FVar43.Data + iVar17;
                FPCGPinProperties::FPCGPinProperties(&local_238,&pUVar5->Properties);
                local_208 = (FScriptContainerElement)0x1;
                FPCGPinProperties::FPCGPinProperties(&local_158,&pUVar35->Properties);
                pUVar34->_padding_ = *(longlong *)&pTVar24->field_0x8;
                *(undefined1 *)&(pUVar34->Edges).AllocatorInstance.Data = 1;
                local_128 = '\x01';
                FPCGPinProperties::FPCGPinProperties
                          ((FPCGPinProperties *)&pUVar34->_padding_,&local_158);
                (pUVar34->Properties).bAllowMultipleData = (bool)local_208;
                if (local_208 != (FScriptContainerElement)0x0) {
                  FPCGPinProperties::FPCGPinProperties
                            ((FPCGPinProperties *)&(pUVar34->Edges).ArrayNum,&local_238);
                }
                pUVar34->bPropertiesHaveChangedOnDeprecation = bVar14;
                pUVar34->field_0x79 = 1;
                FVar11.Data = local_238.AllowedTypes.Ids.AllocatorInstance.Data;
                FVar37 = local_208;
                if ((local_128 != '\0') &&
                   (local_158.AllowedTypes.Ids.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_158.AllowedTypes.Ids.AllocatorInstance.Data);
                  FVar11.Data = local_238.AllowedTypes.Ids.AllocatorInstance.Data;
                  FVar37 = local_208;
                }
              }
              pUVar35 = local_388;
              pTVar36 = local_378;
              if ((FVar37 != (FScriptContainerElement)0x0) &&
                 (FVar11.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(FVar11.Data);
                pUVar35 = local_388;
                pTVar36 = local_378;
              }
LAB_149cb6d7e:
              uVar27 = (ulonglong)local_390;
              pTVar22 = local_340 + 1;
            }
            else {
              if ((byte)LogPCG._0_1_ < 3) goto LAB_149cb6d7e;
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              uVar27 = (ulonglong)local_390;
              pTVar22 = local_340 + 1;
            }
          }
          pTVar36 = local_348 + 1;
          uVar27 = (ulonglong)local_38c;
        }
        TVar42 = local_368;
        if ((TObjectPtr<UPCGPin>_u_0 *)FVar43.Data != (TObjectPtr<UPCGPin>_u_0 *)0x0) {
          iVar17 = *(int *)((longlong)FVar43.Data + 8);
          if (iVar17 == *(int *)((longlong)FVar43.Data + 0xc)) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x880,(ForAnyElementType *)FVar43.Data,
                                (int *)((longlong)FVar43.Data + 0xc));
          }
          TVar42 = local_368;
          *(int *)((longlong)FVar43.Data + 8) = iVar17 + 1;
          pUVar35 = *(UPCGPin **)FVar43.Data + iVar17;
          pUVar35->_padding_ = (longlong)local_368;
          *(undefined1 *)&(pUVar35->Edges).AllocatorInstance.Data = 0;
          bVar14 = FPCGGraphTaskInput::NoPin.bIsSet;
          *(bool *)&(pUVar35->Edges).AllocatorInstance.Data = FPCGGraphTaskInput::NoPin.bIsSet;
          if (bVar14 != false) {
            FPCGPinProperties::FPCGPinProperties
                      ((FPCGPinProperties *)&pUVar35->_padding_,
                       &FPCGGraphTaskInput::NoPin.TypedValue);
          }
          (pUVar35->Properties).bAllowMultipleData = false;
          bVar14 = FPCGGraphTaskInput::NoPin.bIsSet;
          (pUVar35->Properties).bAllowMultipleData = FPCGGraphTaskInput::NoPin.bIsSet;
          if (bVar14 != false) {
            FPCGPinProperties::FPCGPinProperties
                      ((FPCGPinProperties *)&(pUVar35->Edges).ArrayNum,
                       &FPCGGraphTaskInput::NoPin.TypedValue);
          }
          *(undefined2 *)&pUVar35->bPropertiesHaveChangedOnDeprecation = 0x100;
        }
        iVar17 = local_360.ArrayNum;
        pTVar22 = local_380;
        pTVar36 = (TObjectPtr<UPCGPin>_u_0 *)(local_360.AllocatorInstance.Data + 8);
        pTVar44 = (TObjectPtr<UPCGPin>_u_0 *)
                  (local_360.AllocatorInstance.Data + (longlong)local_360.ArrayNum * 0x148);
        while( true ) {
          if (local_360.ArrayNum != iVar17) {
            local_3a4 = 0;
            `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_3a4);
          }
          iVar41 = local_360.ArrayNum;
          pTVar38 = pTVar36 + -1;
          if (pTVar38 == pTVar44) break;
          pUVar6 = (UPCGNode *)pTVar36[0x12].DebugPtr;
          if ((pUVar6 != (UPCGNode *)0x0) &&
             ((TObjectPtr<UPCGPin>_u_0 *)pUVar6->_padding_ == pTVar22)) {
            pUVar25 = UPCGNode::GetSettings(pUVar6);
            if ((pUVar25 == (UPCGSettings *)0x0) ||
               (cVar15 = (**(code **)(pUVar25->_padding_ + 0x498))(pUVar25), cVar15 == '\0')) {
              FVar37 = (FScriptContainerElement)0x0;
              if (*(int *)pTVar36 != 0) goto LAB_149cb7088;
            }
            else {
              FVar37 = (FScriptContainerElement)0x1;
            }
            iVar41 = *(int *)pTVar36;
            if (iVar41 == *(int *)((longlong)&(pTVar36->ObjectPtr).field0_0x0 + 4)) {
              iVar41 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x880,(ForAnyElementType *)&pTVar38->ObjectPtr,
                                  (int *)((longlong)&(pTVar36->ObjectPtr).field0_0x0 + 4));
            }
            *(int *)pTVar36 = iVar41 + 1;
            pTVar39 = (TObjectPtr<UPCGNode>_u_0 *)
                      ((FScriptContainerElement *)pTVar38->DebugPtr + (longlong)iVar41 * 0x80);
            *pTVar39 = TVar42;
            *(FScriptContainerElement *)(pTVar39 + 7) = (FScriptContainerElement)0x0;
            bVar14 = FPCGGraphTaskInput::NoPin.bIsSet;
            *(bool *)(pTVar39 + 7) = FPCGGraphTaskInput::NoPin.bIsSet;
            if (bVar14 != false) {
              FPCGPinProperties::FPCGPinProperties
                        ((FPCGPinProperties *)&pTVar39[1].ObjectPtr,
                         &FPCGGraphTaskInput::NoPin.TypedValue);
            }
            *(FScriptContainerElement *)(pTVar39 + 0xe) = (FScriptContainerElement)0x0;
            bVar14 = FPCGGraphTaskInput::NoPin.bIsSet;
            *(bool *)(pTVar39 + 0xe) = FPCGGraphTaskInput::NoPin.bIsSet;
            if (bVar14 != false) {
              FPCGPinProperties::FPCGPinProperties
                        ((FPCGPinProperties *)&pTVar39[8].ObjectPtr,
                         &FPCGGraphTaskInput::NoPin.TypedValue);
            }
            *(FScriptContainerElement *)(pTVar39 + 0xf) = FVar37;
            *(FScriptContainerElement *)((longlong)pTVar39 + 0x79) = (FScriptContainerElement)0x1;
            *(undefined1 *)((longlong)pTVar36 + 0x139) = 1;
          }
LAB_149cb7088:
          pTVar36 = pTVar36 + 0x29;
        }
        if (local_360.ArrayNum != 0) {
          iVar17 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x148,8,local_360.ArrayNum,&local_3b8,(int *)&local_3b0,
                              (int *)((longlong)&local_3b0 + 4));
          ConstructItems<FPCGGraphTask,FPCGGraphTask,int>
                    (local_3b8.Data + (longlong)iVar17 * 0x148,
                     (FPCGGraphTask *)local_360.AllocatorInstance.Data,iVar41);
        }
        local_308 = *local_320;
        *local_320 = local_308 + 1;
        iVar17 = (int)local_3b0;
        if ((int)local_3b0 == local_3b0._4_4_) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x148,8,&local_3b8,(int *)((longlong)&local_3b0 + 4));
        }
        local_3b0 = CONCAT44(local_3b0._4_4_,iVar17 + 1);
        pFVar32 = (FPCGGraphTask *)(local_3b8.Data + (longlong)iVar17 * 0x148);
        memset(pFVar32,0,0x148);
        pFVar32 = FPCGGraphTask::FPCGGraphTask(pFVar32);
        pFVar32->Node = (UPCGNode *)local_398;
        pFVar32->NodeId = local_308;
        pFVar32->StackIndex = local_318->CurrentStackIndex;
        pFVar32->ElementSource = Trivial;
        iVar17 = (pFVar32->Inputs).ArrayNum;
        if (iVar17 == (pFVar32->Inputs).ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,(ForAnyElementType *)pFVar32,&(pFVar32->Inputs).ArrayMax);
        }
        (pFVar32->Inputs).ArrayNum = iVar17 + 1;
        pTVar39 = (TObjectPtr<UPCGNode>_u_0 *)
                  ((pFVar32->Inputs).AllocatorInstance.Data + (longlong)iVar17 * 0x80);
        *pTVar39 = TVar42;
        *(FScriptContainerElement *)(pTVar39 + 7) = (FScriptContainerElement)0x0;
        bVar14 = FPCGGraphTaskInput::NoPin.bIsSet;
        *(bool *)(pTVar39 + 7) = FPCGGraphTaskInput::NoPin.bIsSet;
        if (bVar14 != false) {
          FPCGPinProperties::FPCGPinProperties
                    ((FPCGPinProperties *)&pTVar39[1].ObjectPtr,
                     &FPCGGraphTaskInput::NoPin.TypedValue);
        }
        *(FScriptContainerElement *)(pTVar39 + 0xe) = (FScriptContainerElement)0x0;
        bVar14 = FPCGGraphTaskInput::NoPin.bIsSet;
        *(bool *)(pTVar39 + 0xe) = FPCGGraphTaskInput::NoPin.bIsSet;
        if (bVar14 != false) {
          FPCGPinProperties::FPCGPinProperties
                    ((FPCGPinProperties *)&pTVar39[8].ObjectPtr,
                     &FPCGGraphTaskInput::NoPin.TypedValue);
        }
        pTVar36 = local_370;
        *(undefined2 *)(pTVar39 + 0xf) = 0x100;
        if (local_370 != (TObjectPtr<UPCGPin>_u_0 *)0x0) {
          iVar17 = (pFVar32->Inputs).ArrayNum;
          if (iVar17 == (pFVar32->Inputs).ArrayMax) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x880,(ForAnyElementType *)pFVar32,&(pFVar32->Inputs).ArrayMax);
          }
          (pFVar32->Inputs).ArrayNum = iVar17 + 1;
          pTVar22 = (TObjectPtr<UPCGPin>_u_0 *)
                    ((pFVar32->Inputs).AllocatorInstance.Data + (longlong)iVar17 * 0x80);
          *pTVar22 = pTVar36[9];
          *(undefined1 *)(pTVar22 + 7) = 0;
          bVar14 = FPCGGraphTaskInput::NoPin.bIsSet;
          *(bool *)(pTVar22 + 7) = FPCGGraphTaskInput::NoPin.bIsSet;
          if (bVar14 != false) {
            FPCGPinProperties::FPCGPinProperties
                      ((FPCGPinProperties *)&pTVar22[1].ObjectPtr,
                       &FPCGGraphTaskInput::NoPin.TypedValue);
          }
          *(undefined1 *)(pTVar22 + 0xe) = 0;
          bVar14 = FPCGGraphTaskInput::NoPin.bIsSet;
          *(bool *)(pTVar22 + 0xe) = FPCGGraphTaskInput::NoPin.bIsSet;
          if (bVar14 != false) {
            FPCGPinProperties::FPCGPinProperties
                      ((FPCGPinProperties *)&pTVar22[8].ObjectPtr,
                       &FPCGGraphTaskInput::NoPin.TypedValue);
          }
          *(undefined2 *)(pTVar22 + 0xf) = 0x101;
        }
        uVar18 = ((uint)((ulonglong)local_398 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_398 >> 4))
                 * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
          FVar29 = (ForElementType<FSetElementId>)&local_a8.Hash;
          if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar29 = local_a8.Hash.SecondaryData;
          }
          for (iVar17 = *(int *)((longlong)FVar29 +
                                (ulonglong)(local_a8.HashSize - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4)
              ; iVar17 != -1;
              iVar17 = *(int *)(local_a8.Elements._0_8_ + 0x10 + (longlong)iVar17 * 0x18)) {
            if (*(TObjectPtr<UPCGPin>_u_0 **)(local_a8.Elements._0_8_ + (longlong)iVar17 * 0x18) ==
                local_398) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!IdMapping.Contains(Node)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                                  ,0x140,L"");
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
                return pTVar19;
              }
              break;
            }
          }
        }
        local_2a8 = &local_398;
        local_2a0 = &local_308;
        TSet<TTuple<UPCGNode_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned___int64,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UPCGNode_const_*_const_&,unsigned___int64_const_&>_>
                  (&local_a8,
                   (TPairInitializer<UPCGNode_const_*_const_&,unsigned___int64_const_&> *)local_2b8,
                   (bool *)&local_2a8);
        DestructItems<FPCGGraphTask,int>
                  ((FPCGGraphTask *)local_360.AllocatorInstance.Data,local_360.ArrayNum);
        if ((TObjectPtr<UPCGPin>_u_0 *)local_360.AllocatorInstance.Data !=
            (TObjectPtr<UPCGPin>_u_0 *)0x0) {
          FMemory::Free(local_360.AllocatorInstance.Data);
        }
        DestructItems<FPCGStack,int>
                  ((FPCGStack *)local_2f0.Stacks.AllocatorInstance.Data,local_2f0.Stacks.ArrayNum);
        if ((FPCGStack *)local_2f0.Stacks.AllocatorInstance.Data != (FPCGStack *)0x0) {
          FMemory::Free(local_2f0.Stacks.AllocatorInstance.Data);
        }
      }
      local_340 = local_398;
      uVar27 = (ulonglong)*(int *)(local_398 + 0x10);
      pTVar36 = (TObjectPtr<UPCGPin>_u_0 *)local_398[0xf].DebugPtr;
      local_388 = (UPCGPin *)CONCAT44(local_388._4_4_,*(int *)(local_398 + 0x10));
      local_378 = pTVar36 + uVar27;
      while( true ) {
        pTVar22 = local_378;
        local_380 = pTVar36;
        if (*(int *)(local_340 + 0x10) != (int)uVar27) {
          local_3a1 = 0;
          `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_3a1);
        }
        if (pTVar36 == pTVar22) break;
        local_338 = (TObjectPtr<UPCGPin>_u_0 *)pTVar36->DebugPtr;
        local_390 = *(uint *)(local_338 + 8);
        uVar27 = (ulonglong)(int)local_390;
        pTVar36 = (TObjectPtr<UPCGPin>_u_0 *)local_338[7].DebugPtr;
        local_348 = pTVar36 + uVar27;
        while( true ) {
          pTVar22 = local_348;
          local_370 = pTVar36;
          if (*(int *)(local_338 + 8) != (int)uVar27) {
            local_3a0 = 0;
            `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_3a0);
          }
          if (pTVar36 == pTVar22) break;
          pUVar35 = pTVar36->DebugPtr;
          bVar14 = UPCGEdge::IsValid((UPCGEdge *)pUVar35);
          if (bVar14) {
            local_368 = (TObjectPtr<UPCGNode>_u_0)
                        ((TObjectPtr<UPCGNode>_u_0 *)
                        (*(longlong *)&(pUVar35->Properties).Usage + 0x28))->DebugPtr;
            local_350 = local_368;
            if ((local_368.DebugPtr == (UPCGNode *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OutboundNode",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                                    ,0x174,L""), bVar14)) {
              pcVar9 = (code *)swi(3);
              pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
              return pTVar19;
            }
            for (FVar43.Data = local_3d0.Data; local_368 = local_350,
                (TObjectPtr<UPCGNode>_u_0 *)FVar43.Data !=
                (TObjectPtr<UPCGNode>_u_0 *)(local_3d0.Data + (longlong)(int)local_3c8 * 8);
                FVar43.Data = FVar43.Data + 8) {
              if (*(UPCGNode **)FVar43.Data == local_350.DebugPtr) goto LAB_149cb7a1e;
            }
            local_38c = ((local_350.DebugPtr)->InputPins).ArrayNum;
            uVar27 = (ulonglong)(int)local_38c;
            bVar14 = true;
            pTVar36 = (TObjectPtr<UPCGPin>_u_0 *)
                      (((TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_> *)
                       ((longlong)local_350 + 0x68))->AllocatorInstance).Data;
            local_330 = pTVar36 + uVar27;
            while( true ) {
              pTVar22 = local_330;
              if (((local_368.DebugPtr)->InputPins).ArrayNum != (int)uVar27) {
                local_39f = 0;
                `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_39f);
              }
              if (pTVar36 == pTVar22) break;
              pUVar35 = pTVar36->DebugPtr;
              pFVar40 = (pUVar35->Edges).AllocatorInstance.Data;
              iVar17 = (pUVar35->Edges).ArrayNum;
              pFVar33 = pFVar40 + (longlong)iVar17 * 8;
              while( true ) {
                if ((pUVar35->Edges).ArrayNum != iVar17) {
                  local_39e[0] = 0;
                  `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_39e);
                }
                if (pFVar40 == pFVar33) break;
                this_00 = *(UPCGEdge **)pFVar40;
                bVar16 = UPCGEdge::IsValid(this_00);
                if (bVar16) {
                  pUVar6 = (((this_00->InputPin).field0_0x0.DebugPtr)->Node).field0_0x0.DebugPtr;
                  uVar18 = ((uint)((ulonglong)pUVar6 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)pUVar6 >> 4)) * -0x7a143595;
                  uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
                  if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
                    FVar29 = (ForElementType<FSetElementId>)&local_a8.Hash;
                    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar29 = local_a8.Hash.SecondaryData;
                    }
                    for (iVar41 = *(int *)((longlong)FVar29 +
                                          (ulonglong)
                                          (local_a8.HashSize - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4);
                        iVar41 != -1;
                        iVar41 = *(int *)(local_a8.Elements._0_8_ + 0x10 + (longlong)iVar41 * 0x18))
                    {
                      if (*(UPCGNode **)(local_a8.Elements._0_8_ + (longlong)iVar41 * 0x18) ==
                          pUVar6) goto LAB_149cb793e;
                    }
                  }
                  iVar41 = -1;
LAB_149cb793e:
                  bVar14 = (bool)(bVar14 & iVar41 != -1);
                }
                pFVar40 = pFVar40 + 8;
              }
              pTVar36 = pTVar36 + 1;
              uVar27 = (ulonglong)local_38c;
            }
            pTVar36 = local_370;
            if (bVar14) {
              if (((local_3d0.Data <= &local_350) &&
                  (&local_350 <
                   (TObjectPtr<UPCGNode>_u_0 *)(local_3d0.Data + (longlong)local_3c8._4_4_ * 8))) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar9 = (code *)swi(3);
                pTVar19 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
                return pTVar19;
              }
              iVar17 = (int)local_3c8;
              if ((int)local_3c8 == local_3c8._4_4_) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_3d0,(int *)((longlong)&local_3c8 + 4));
              }
              local_3c8 = CONCAT44(local_3c8._4_4_,iVar17 + 1);
              ((TObjectPtr<UPCGNode>_u_0 *)(local_3d0.Data + (longlong)iVar17 * 8))->DebugPtr =
                   (UPCGNode *)local_350;
              pTVar36 = local_370;
            }
LAB_149cb7a1e:
            pTVar36 = pTVar36 + 1;
            uVar27 = (ulonglong)local_390;
          }
          else {
            if ((byte)LogPCG._0_1_ < 3) goto LAB_149cb7a1e;
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            pTVar36 = pTVar36 + 1;
            uVar27 = (ulonglong)local_390;
          }
        }
        pTVar36 = local_380 + 1;
        uVar27 = (ulonglong)local_388 & 0xffffffff;
      }
      __return_storage_ptr__ = local_2f8;
      param_3 = local_318;
      iVar17 = (int)local_3c8;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_3b8.Data;
    __return_storage_ptr__->ArrayNum = (int)local_3b0;
    local_3b0._4_4_ = (int)((ulonglong)local_3b0 >> 0x20);
    __return_storage_ptr__->ArrayMax = local_3b0._4_4_;
    local_3b0 = 0;
    local_3b8.Data = (FScriptContainerElement *)0x0;
    if ((TObjectPtr<UPCGNode>_u_0 *)local_3d0.Data != (TObjectPtr<UPCGNode>_u_0 *)0x0) {
      FMemory::Free(local_3d0.Data);
    }
LAB_149cb7b1a:
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    DestructItems<FPCGGraphTask,int>((FPCGGraphTask *)local_3b8.Data,(int)local_3b0);
    if ((FPCGGraphTask *)local_3b8.Data != (FPCGGraphTask *)0x0) {
      FMemory::Free(local_3b8.Data);
    }
  }
  return __return_storage_ptr__;
}

// CompileTopGraph @ 149cb7ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGGraphCompiler::CompileTopGraph(FPCGGraphCompiler *this,UPCGGraph *param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  FPCGGraphTaskInput *pFVar3;
  ulong64 *puVar4;
  code *pcVar5;
  TConsoleVariableData<bool> *pTVar6;
  FPCGGraphCompiler *SRWLock;
  void *pvVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  EPCGHiGenGrid EVar14;
  EPCGHiGenGrid EVar15;
  int iVar16;
  TSet<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar17;
  longlong lVar18;
  FPCGPinProperties *pFVar19;
  FPCGPinProperties *pFVar20;
  ulonglong uVar21;
  UPCGSettings *pUVar22;
  TSet<TTuple<unsigned_int,FPCGStackContext>,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  ForElementType<FSetElementId> FVar26;
  UPCGNode *pUVar27;
  FScriptContainerElement *pFVar28;
  FPCGGraphTask *pFVar29;
  bool *pbVar30;
  bool *pbVar31;
  ulong64 uVar32;
  FScriptContainerElement *pFVar33;
  uint uVar34;
  uint uVar35;
  ulonglong uVar36;
  ForElementType<unsigned_int> FVar37;
  UPCGNode *pUVar38;
  longlong lVar39;
  FScriptContainerElement FVar40;
  undefined1 auStackY_298 [32];
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> local_268;
  uint local_258 [2];
  undefined1 local_250;
  undefined1 local_24f [7];
  UPCGGraph *local_248;
  UPCGNode *local_240;
  undefined1 local_238;
  undefined1 local_237 [3];
  uint local_234;
  TArray<EPCGHiGenGrid,TSizedDefaultAllocator<32>_> local_230;
  uint local_220;
  longlong local_218;
  uint local_210 [2];
  FScriptContainerElement *local_208;
  int local_200;
  uint uStack_1fc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f8;
  undefined4 local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  FPCGStackContext local_1e0;
  FPCGGraphCompiler *local_1c0;
  FName local_1b4;
  undefined1 local_1ac [8];
  undefined1 local_1a4 [4];
  FString local_1a0;
  int local_190;
  undefined4 local_18c;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  code *local_160;
  undefined1 *local_158;
  EPCGHiGenGrid local_150 [2];
  TArray<EPCGHiGenGrid,TSizedDefaultAllocator<32>_> *local_148;
  code *local_140;
  EPCGHiGenGrid *local_138;
  code *local_130;
  undefined1 *local_128;
  FSparseArrayAllocationInfo local_120;
  uint *local_110;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *local_108;
  uint *local_100;
  FPCGStackContext *local_f8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_258[0] = param_2;
  local_248 = param_1;
  local_1c0 = this;
  AcquireSRWLockShared((PSRWLOCK)this);
  pTVar17 = (TSet<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
               ::Find((TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                       *)&(this->Cache).TopGraphToTaskMap,local_248);
  if (pTVar17 !=
      (TSet<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *)0x0) {
    local_210[0] = local_258[0];
    iVar12 = TSet<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<unsigned_int>(pTVar17,local_258[0],local_210);
    if (iVar12 != -1) {
      ReleaseSRWLockShared((PSRWLOCK)this);
      return;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)this);
  if (5 < (byte)LogPCG._0_1_) {
    local_1b4 = (FName)local_248->_padding_;
    ::FName::ToString(&local_1b4,&local_1a0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  local_1e0.GraphExecutionTaskId = 0xffffffffffffffff;
  local_1e0.Stacks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.Stacks.ArrayNum = 0;
  local_1e0.Stacks.ArrayMax = 0;
  local_1e0.CurrentStackIndex = -1;
  GetCompiledTasks(this,&local_268,local_248,local_258[0],&local_1e0,false);
  pTVar6 = PCGGraphCompiler::CVarEnableTaskStaticCulling.Ref;
  if (local_268.ArrayNum != 0) {
    bVar8 = IsInParallelGameThread();
    if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
      lVar18 = 0;
    }
    else {
      lVar18 = 1;
    }
    if (pTVar6->ShadowedValue[lVar18] != false) {
      local_158 = &local_238;
      local_160 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPCGGraphCompiler::CompileTopGraph'::__l30::<lambda_1>,bool,FPCGGraphTask_const_&>
                  ::Call;
      CullTasks(&local_268,true,(TFunctionRef<bool___cdecl(FPCGGraphTask_const_&)> *)&local_160,
                (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0);
      CullTasksStaticInactive(&local_268);
      if ((local_248->bUseHierarchicalGeneration != false) &&
         (uVar13 = PCGHiGenGrid::UninitializedGridSize(), local_258[0] != uVar13)) {
        EVar14 = PCGHiGenGrid::GridSizeToGrid(local_258[0]);
        uVar13 = UPCGGraph::GetDefaultGridSize(local_248);
        EVar15 = PCGHiGenGrid::GridSizeToGrid(uVar13);
        iVar12 = local_268.ArrayNum;
        local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_230.ArrayNum = 0;
        local_230.ArrayMax = 0;
        if (local_268.ArrayNum < 1) {
          if (local_268.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_268.ArrayNum);
          }
        }
        else {
          iVar16 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,local_268.ArrayNum,&local_230.AllocatorInstance,
                              &local_230.ArrayNum,&local_230.ArrayMax);
          memset(local_230.AllocatorInstance.Data + (longlong)iVar16 * 4,0,(longlong)iVar12 << 2);
        }
        bVar8 = -1 < CpuChannel->Enabled;
        if (bVar8) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId486,"FPCGGraphCompiler::ResolveGridSizes",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                     ,0x1e6);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId486);
        }
        if (local_268.ArrayNum != 0) {
          bVar9 = false;
          if (local_230.ArrayNum == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InOutTaskGenerationGrid.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                               ,0x1ec,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar9 = local_230.ArrayNum == 0;
          }
          if ((bVar9 || local_230.ArrayNum < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar13 = 1;
          *(EPCGHiGenGrid *)local_230.AllocatorInstance.Data = EVar14;
          if (1 < local_268.ArrayNum) {
            lVar18 = 0x148;
            do {
              uVar25 = 0;
              if ((int)uVar13 < local_268.ArrayNum) {
                uVar25 = ~uVar13 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              CalculateGridRecursive
                        (*(ulong64 *)(local_268.AllocatorInstance.Data + lVar18 + 0x48),EVar15,
                         &local_1e0,&local_268,&local_230);
              uVar13 = uVar13 + 1;
              lVar18 = lVar18 + 0x148;
              this = local_1c0;
            } while ((int)uVar13 < local_268.ArrayNum);
          }
        }
        if (bVar8) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        CreateGridLinkages(local_248,EVar14,&local_230,&local_268,&local_1e0,this->bIsCooking);
        local_148 = &local_230;
        local_138 = local_150;
        local_140 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPCGGraphCompiler::CompileTopGraph'::__l33::<lambda_2>,bool,FPCGGraphTask_const_&>
                    ::Call;
        local_150[0] = EVar14;
        CullTasks(&local_268,false,(TFunctionRef<bool___cdecl(FPCGGraphTask_const_&)> *)&local_140,
                  (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0);
        if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.AllocatorInstance.Data);
        }
      }
    }
    iVar12 = local_268.ArrayNum;
    local_128 = local_237;
    local_130 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGGraphCompiler::CompileTopGraph'::__l34::<lambda_3>,bool,FPCGGraphTask_const_&>
                ::Call;
    CullTasks(&local_268,false,(TFunctionRef<bool___cdecl(FPCGGraphTask_const_&)> *)&local_130,
              (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0);
    if ((local_268.ArrayNum < iVar12) && (2 < (byte)LogPCG._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    PostCullStackCleanup(&local_268,&local_1e0);
    uVar13 = 0;
    if (0 < local_268.ArrayNum) {
      lVar18 = 0;
      do {
        uVar25 = 0;
        if ((int)uVar13 < local_268.ArrayNum) {
          uVar25 = ~uVar13 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        CalculateDynamicActivePinDependencies
                  (*(ulong64 *)(local_268.AllocatorInstance.Data + lVar18 + 0x48),&local_268);
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 0x148;
      } while ((int)uVar13 < local_268.ArrayNum);
    }
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    local_e8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_e8.AllocationFlags.NumBits = 0;
    local_e8.AllocationFlags.MaxBits = 0x80;
    local_e8.FirstFreeIndex = -1;
    local_e8.NumFreeIndices = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    local_220 = 0;
    if (0 < local_268.ArrayNum) {
      local_218 = 0;
      do {
        lVar18 = local_218;
        uVar13 = 0;
        if ((int)local_220 < local_268.ArrayNum) {
          uVar13 = ~local_220 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_208 = local_268.AllocatorInstance.Data + lVar18;
        local_234 = *(uint *)(local_208 + 8);
        uVar23 = (ulonglong)(int)local_234;
        pUVar38 = *(UPCGNode **)local_208;
        local_240 = (UPCGNode *)(&pUVar38->_padding_ + uVar23 * 0x10);
        pUVar27 = local_240;
LAB_149cb8191:
        if (*(int *)(local_208 + 8) != (int)uVar23) {
          local_250 = 0;
          `TCheckedPointerIterator<FPCGGraphTaskInput,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_250);
        }
        if (pUVar38 != pUVar27) {
          if (((pUVar38 != (UPCGNode *)0x0) &&
              (*(char *)&(pUVar38->OutboundNodes_DEPRECATED).AllocatorInstance.Data != '\0')) &&
             (*(char *)&(pUVar38->OutputPins).AllocatorInstance.Data != '\0'))
          goto code_r0x000149cb81cf;
          goto LAB_149cb885a;
        }
        local_220 = local_220 + 1;
        local_218 = local_218 + 0x148;
      } while ((int)local_220 < local_268.ArrayNum);
    }
    iVar12 = local_268.ArrayNum;
    uVar32 = (ulong64)local_268.ArrayNum;
    pFVar28 = (FScriptContainerElement *)(uVar32 + 1);
    local_208 = pFVar28;
    if (local_268.ArrayNum == local_268.ArrayMax) {
      local_268.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x148,8,&local_268.AllocatorInstance,&local_268.ArrayMax);
    }
    pFVar29 = (FPCGGraphTask *)
              (local_268.AllocatorInstance.Data + (longlong)local_268.ArrayNum * 0x148);
    local_268.ArrayNum = local_268.ArrayNum + 1;
    memset(pFVar29,0,0x148);
    pFVar29 = FPCGGraphTask::FPCGGraphTask(pFVar29);
    uVar13 = 0;
    pFVar29->ElementSource = Trivial;
    pFVar29->NodeId = uVar32;
    if (0 < iVar12) {
      lVar18 = 0;
      lVar39 = 0;
      do {
        uVar25 = 0;
        if ((int)uVar13 < local_268.ArrayNum) {
          uVar25 = ~uVar13 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar28 = local_268.AllocatorInstance.Data + lVar39;
                    /* WARNING: Load size is inaccurate */
        if ((((UPCGNode *)pFVar28[0x98] == (UPCGNode *)0x0) ||
            (pUVar22 = UPCGNode::GetSettings((UPCGNode *)pFVar28[0x98]),
            pUVar22 == (UPCGSettings *)0x0)) ||
           (cVar10 = (**(code **)(pUVar22->_padding_ + 0x498))(pUVar22), cVar10 == '\0')) {
          FVar40 = (FScriptContainerElement)0x0;
        }
        else {
          FVar40 = (FScriptContainerElement)0x1;
        }
        if ((pFVar28[0x141] == (FScriptContainerElement)0x0) &&
           ((iVar16 = *(int *)(pFVar28 + 8), iVar16 == 0 || (FVar40 != (FScriptContainerElement)0x0)
            ))) {
          if (iVar16 == *(int *)(pFVar28 + 0xc)) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x880,(ForAnyElementType *)pFVar28,(int *)(pFVar28 + 0xc));
          }
          *(int *)(pFVar28 + 8) = iVar16 + 1;
                    /* WARNING: Load size is inaccurate */
          pFVar33 = *pFVar28 + (longlong)iVar16 * 0x80;
          *(ulong64 *)pFVar33 = uVar32;
          pFVar33[0x38] = (FScriptContainerElement)0x0;
          bVar8 = FPCGGraphTaskInput::NoPin.bIsSet;
          pFVar33[0x38] = (FScriptContainerElement)FPCGGraphTaskInput::NoPin.bIsSet;
          if (bVar8 != false) {
            FPCGPinProperties::FPCGPinProperties
                      ((FPCGPinProperties *)(pFVar33 + 8),&FPCGGraphTaskInput::NoPin.TypedValue);
          }
          pFVar33[0x70] = (FScriptContainerElement)0x0;
          bVar8 = FPCGGraphTaskInput::NoPin.bIsSet;
          pFVar33[0x70] = (FScriptContainerElement)FPCGGraphTaskInput::NoPin.bIsSet;
          if (bVar8 != false) {
            FPCGPinProperties::FPCGPinProperties
                      ((FPCGPinProperties *)(pFVar33 + 0x40),&FPCGGraphTaskInput::NoPin.TypedValue);
          }
          pFVar33[0x78] = FVar40;
          pFVar33[0x79] = (FScriptContainerElement)0x1;
          pFVar28[0x141] = (FScriptContainerElement)0x1;
        }
                    /* WARNING: Load size is inaccurate */
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 1;
        *(FScriptContainerElement **)(pFVar28 + 0x50) = pFVar28[0x48];
        lVar39 = lVar39 + 0x148;
        pFVar28 = local_208;
      } while (lVar18 < (longlong)uVar32);
    }
    if (local_268.ArrayNum == local_268.ArrayMax) {
      local_268.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x148,8,&local_268.AllocatorInstance,&local_268.ArrayMax);
    }
    pFVar29 = (FPCGGraphTask *)
              (local_268.AllocatorInstance.Data + (longlong)local_268.ArrayNum * 0x148);
    local_268.ArrayNum = local_268.ArrayNum + 1;
    memset(pFVar29,0,0x148);
    pFVar29 = FPCGGraphTask::FPCGGraphTask(pFVar29);
    uVar13 = iVar12 - 1;
    pFVar29->ElementSource = TrivialPostGraph;
    pFVar29->NodeId = (ulong64)pFVar28;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    local_240 = (local_248->OutputNode).field0_0x0.DebugPtr;
    if (-1 < (int)uVar13) {
      lVar18 = (longlong)(int)uVar13 * 0x148;
      do {
        uVar25 = 0;
        if ((int)uVar13 < local_268.ArrayNum) {
          uVar25 = ~uVar13 >> 0x1f;
        }
        local_218 = lVar18;
        if ((uVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar28 = local_268.AllocatorInstance.Data + lVar18;
        uVar23 = *(ulonglong *)(pFVar28 + 0x48);
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar26 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar26 = local_98.Hash.SecondaryData;
          }
          for (iVar12 = *(int *)((longlong)FVar26 +
                                ((uVar23 >> 0x20) * 0x17 + uVar23 &
                                (ulonglong)(local_98.HashSize - 1)) * 4); iVar12 != -1;
              iVar12 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar12 * 0x10)) {
            if (*(ulonglong *)(local_98.Elements._0_8_ + (longlong)iVar12 * 0x10) == uVar23)
            goto LAB_149cb8c6d;
          }
        }
        FVar40 = (FScriptContainerElement)(*(UPCGNode **)(pFVar28 + 0x98) == local_240);
        piVar1 = &(pFVar29->Inputs).ArrayMax;
        iVar12 = (pFVar29->Inputs).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,(ForAnyElementType *)pFVar29,piVar1);
        }
        (pFVar29->Inputs).ArrayNum = iVar12 + 1;
        pFVar33 = (pFVar29->Inputs).AllocatorInstance.Data + (longlong)iVar12 * 0x80;
        *(longlong *)pFVar33 = *(longlong *)(pFVar28 + 0x48);
        pFVar33[0x38] = (FScriptContainerElement)0x0;
        bVar8 = FPCGGraphTaskInput::NoPin.bIsSet;
        pFVar33[0x38] = (FScriptContainerElement)FPCGGraphTaskInput::NoPin.bIsSet;
        if (bVar8 != false) {
          FPCGPinProperties::FPCGPinProperties
                    ((FPCGPinProperties *)(pFVar33 + 8),&FPCGGraphTaskInput::NoPin.TypedValue);
        }
        pFVar33[0x70] = (FScriptContainerElement)0x0;
        bVar8 = FPCGGraphTaskInput::NoPin.bIsSet;
        pFVar33[0x70] = (FScriptContainerElement)FPCGGraphTaskInput::NoPin.bIsSet;
        if (bVar8 != false) {
          FPCGPinProperties::FPCGPinProperties
                    ((FPCGPinProperties *)(pFVar33 + 0x40),&FPCGGraphTaskInput::NoPin.TypedValue);
        }
        pFVar33[0x78] = FVar40;
        pFVar33[0x79] = (FScriptContainerElement)0x0;
LAB_149cb8c6d:
        iVar12 = *(int *)(pFVar28 + 8);
        pbVar30 = *(bool **)pFVar28;
        pbVar31 = pbVar30 + (longlong)iVar12 * 0x80;
        while( true ) {
          if (*(int *)(pFVar28 + 8) != iVar12) {
            local_24f[0] = 0;
            `TCheckedPointerIterator<FPCGGraphTaskInput_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_24f);
          }
          if (pbVar30 == pbVar31) break;
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64_const_&>(&local_98,(ulong64 *)local_1a4,pbVar30);
          pbVar30 = pbVar30 + 0x80;
        }
        lVar18 = local_218 + -0x148;
        uVar13 = uVar13 - 1;
        local_218 = lVar18;
      } while (-1 < (int)uVar13);
    }
    SRWLock = local_1c0;
    AcquireSRWLockExclusive((PSRWLOCK)local_1c0);
    uVar13 = ((uint)((ulonglong)local_248 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_248 >> 4)) *
             -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    pTVar17 = (TSet<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                 ::FindOrAddImpl<UPCGGraph_*_const_&>
                           ((TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                             *)&(SRWLock->Cache).TopGraphToTaskMap,uVar13 >> 0x10 ^ uVar13,
                            &local_248);
    if (*(int *)&(pTVar17->Elements).field_0x8 != *(int *)&(pTVar17->Elements).field_0x34) {
      FVar26 = (pTVar17->Hash).SecondaryData;
      if (FVar26 == (ForElementType<FSetElementId>)0x0) {
        FVar26 = (ForElementType<FSetElementId>)&pTVar17->Hash;
      }
      iVar12 = *(int *)((longlong)FVar26 + (ulonglong)(pTVar17->HashSize - 1U & local_258[0]) * 4);
      if (iVar12 != -1) {
        do {
          if (*(uint *)((longlong)iVar12 * 0x20 + *(longlong *)&pTVar17->Elements) == local_258[0])
          goto LAB_149cb8db3;
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *(longlong *)&pTVar17->Elements);
        } while (iVar12 != -1);
      }
    }
    local_110 = local_258;
    local_108 = &local_268;
    TSet<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned_int_const_&,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_&&>_>
              (pTVar17,(TPairInitializer<unsigned_int_const_&,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_&&>
                        *)(local_1ac + 4),(bool *)&local_110);
LAB_149cb8db3:
    uVar13 = ((uint)((ulonglong)local_248 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_248 >> 4)) *
             -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    this_00 = (TSet<TTuple<unsigned_int,FPCGStackContext>,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>,FDefaultSetAllocator>
               *)TMapBase<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>_>
                 ::FindOrAddImpl<UPCGGraph_*_const_&>
                           ((TMapBase<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>_>
                             *)&(SRWLock->Cache).TopGraphToStackContextMap,uVar13 >> 0x10 ^ uVar13,
                            &local_248);
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      FVar26 = (this_00->Hash).SecondaryData;
      if (FVar26 == (ForElementType<FSetElementId>)0x0) {
        FVar26 = (ForElementType<FSetElementId>)&this_00->Hash;
      }
      iVar12 = *(int *)((longlong)FVar26 + (ulonglong)(this_00->HashSize - 1U & local_258[0]) * 4);
      if (iVar12 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar12 * 0x30) == local_258[0])
          goto LAB_149cb8e75;
          iVar12 = *(int *)(*(longlong *)&this_00->Elements + 0x28 + (longlong)iVar12 * 0x30);
        } while (iVar12 != -1);
      }
    }
    local_100 = local_258;
    local_f8 = &local_1e0;
    TSet<TTuple<unsigned_int,FPCGStackContext>,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,FPCGStackContext_&&>_>
              (this_00,(TPairInitializer<unsigned_int_const_&,FPCGStackContext_&&> *)local_1ac,
               (bool *)&local_100);
LAB_149cb8e75:
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    local_a0 = 0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    TSparseArray<TSparseSetElement<PCGGraphCompiler::FTaskInputOrigin>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<PCGGraphCompiler::FTaskInputOrigin>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<PCGGraphCompiler::FTaskInputOrigin>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_e8);
  }
  DestructItems<FPCGGraphTask,int>
            ((FPCGGraphTask *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
  if ((FPCGGraphTask *)local_268.AllocatorInstance.Data != (FPCGGraphTask *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  DestructItems<FPCGStack,int>
            ((FPCGStack *)local_1e0.Stacks.AllocatorInstance.Data,local_1e0.Stacks.ArrayNum);
  if ((FPCGStack *)local_1e0.Stacks.AllocatorInstance.Data != (FPCGStack *)0x0) {
    FMemory::Free(local_1e0.Stacks.AllocatorInstance.Data);
  }
  return;
code_r0x000149cb81cf:
  if ((*(char *)&(pUVar38->OutboundNodes_DEPRECATED).AllocatorInstance.Data == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = ::GetTypeHash((FPCGPinProperties *)&pUVar38->_padding_);
  uVar34 = (int)pUVar38->_padding_ - uVar13 ^ uVar13 >> 0xd;
  uVar25 = (-0x61c88647 - uVar13) - uVar34 ^ uVar34 << 8;
  uVar35 = (uVar13 - uVar25) - uVar34 ^ uVar25 >> 0xd;
  uVar34 = (uVar34 - uVar35) - uVar25 ^ uVar35 >> 0xc;
  uVar13 = (uVar25 - uVar34) - uVar35 ^ uVar34 << 0x10;
  uVar35 = (uVar35 - uVar13) - uVar34 ^ uVar13 >> 5;
  uVar25 = (uVar34 - uVar35) - uVar13 ^ uVar35 >> 3;
  uVar13 = (uVar13 - uVar25) - uVar35 ^ uVar25 << 10;
  if (local_e8.Data.ArrayNum != local_e8.NumFreeIndices) {
    FVar24.Data = local_b0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FVar24.Data = local_a8.Data;
    }
    iVar12 = *(int *)(FVar24.Data +
                     (ulonglong)(local_a0 - 1 & ((uVar35 - uVar13) - uVar25 ^ uVar13 >> 0xf)) * 4);
    FVar24.Data = local_e8.Data.AllocatorInstance.Data;
    while (iVar12 != -1) {
      lVar18 = (longlong)iVar12 * 0x10;
      plVar2 = *(longlong **)(FVar24.Data + lVar18);
      if ((plVar2 != (longlong *)0x0) && (*plVar2 == pUVar38->_padding_)) {
        pFVar19 = TOptional<FPCGPinProperties>::GetValue
                            ((TOptional<FPCGPinProperties> *)(plVar2 + 1));
        pFVar20 = TOptional<FPCGPinProperties>::GetValue
                            ((TOptional<FPCGPinProperties> *)&pUVar38->_padding_);
        bVar8 = FPCGPinProperties::operator==(pFVar19,pFVar20);
        FVar24.Data = local_e8.Data.AllocatorInstance.Data;
        if (bVar8) {
          if ((iVar12 != -1) &&
             (pFVar28 = local_e8.Data.AllocatorInstance.Data + lVar18,
             pFVar28 != (FScriptContainerElement *)0x0)) {
            if ((*(longlong *)pFVar28 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("It->TaskInput",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                                   ,0x5a4,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar23 = (ulonglong)local_234;
            *(undefined1 *)(*(longlong *)pFVar28 + 0x79) = 1;
            *(undefined1 *)((longlong)&(pUVar38->OutputPins).AllocatorInstance.Data + 1) = 1;
            pUVar38 = (UPCGNode *)&(pUVar38->OutputPins).ArrayNum;
            pUVar27 = local_240;
            goto LAB_149cb8191;
          }
          break;
        }
      }
      iVar12 = *(int *)(FVar24.Data + lVar18 + 8);
    }
  }
  uVar13 = (uint)pUVar38->_padding_;
  if (((int)uVar13 < 0) || (local_268.ArrayNum <= (int)uVar13)) {
LAB_149cb841a:
    uVar11 = 0;
  }
  else {
    uVar25 = 0;
    if ((int)uVar13 < local_268.ArrayNum) {
      uVar25 = ~uVar13 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((local_268.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x148 ==
          (FScriptContainerElement *)0x0) ||
        (plVar2 = *(longlong **)
                   (local_268.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x148 + 0x78),
        plVar2 == (longlong *)0x0)) || (cVar10 = (**(code **)(*plVar2 + 0x48))(), cVar10 == '\0'))
    goto LAB_149cb841a;
    uVar11 = 1;
  }
  *(undefined1 *)((longlong)&(pUVar38->OutputPins).AllocatorInstance.Data + 1) = uVar11;
  if (local_e8.NumFreeIndices == 0) {
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,1,(ForAnyElementType *)&local_e8,&local_e8.Data.ArrayNum,
                        &local_e8.Data.ArrayMax);
    TBitArray<FDefaultBitArrayAllocator>::Add(&local_e8.AllocationFlags,false);
    iVar12 = local_e8.FirstFreeIndex;
  }
  else {
    local_e8.NumFreeIndices = local_e8.NumFreeIndices + -1;
    iVar12 = *(int *)(local_e8.Data.AllocatorInstance.Data +
                     (longlong)local_e8.FirstFreeIndex * 0x10 + 4);
    iVar16 = local_e8.FirstFreeIndex;
    if (local_e8.NumFreeIndices != 0) {
      *(undefined4 *)(local_e8.Data.AllocatorInstance.Data + (longlong)iVar12 * 0x10) = 0xffffffff;
    }
  }
  local_e8.FirstFreeIndex = iVar12;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(&local_e8,&local_120,iVar16);
  pvVar7 = local_120.Pointer;
  iVar12 = local_120.Index;
  if (local_120.Pointer != (FTaskInputOrigin *)0x0) {
    *(UPCGNode **)local_120.Pointer = pUVar38;
    *(undefined4 *)&((FTaskInputOrigin *)((longlong)local_120.Pointer + 8))->TaskInput = 0xffffffff;
  }
  uVar13 = PCGGraphCompiler::GetTypeHash(local_120.Pointer);
  if ((local_e8.Data.ArrayNum - local_e8.NumFreeIndices != 1) &&
     (local_e8.Data.ArrayNum != local_e8.NumFreeIndices)) {
    FVar24.Data = local_b0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FVar24.Data = local_a8.Data;
    }
    iVar16 = *(int *)(FVar24.Data + (ulonglong)(local_a0 - 1 & uVar13) * 4);
    FVar24.Data = local_e8.Data.AllocatorInstance.Data;
    for (; iVar16 != -1; iVar16 = *(int *)(FVar24.Data + (longlong)iVar16 * 0x10 + 8)) {
      pFVar3 = *(FPCGGraphTaskInput **)pvVar7;
      puVar4 = *(ulong64 **)(FVar24.Data + (longlong)iVar16 * 0x10);
      if (puVar4 == (ulong64 *)0x0) {
        if (pFVar3 == (FPCGGraphTaskInput *)0x0) {
LAB_149cb854f:
          if (iVar16 != -1) {
            *(FPCGGraphTaskInput **)(FVar24.Data + (longlong)iVar16 * 0x10) =
                 *(FPCGGraphTaskInput **)pvVar7;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(&local_e8,iVar12,1);
            pUVar27 = local_240;
            goto LAB_149cb885a;
          }
          break;
        }
      }
      else if ((pFVar3 != (FPCGGraphTaskInput *)0x0) && (*puVar4 == pFVar3->TaskId)) {
        pFVar19 = TOptional<FPCGPinProperties>::GetValue
                            ((TOptional<FPCGPinProperties> *)(puVar4 + 1));
        pFVar20 = TOptional<FPCGPinProperties>::GetValue
                            (&(*(FPCGGraphTaskInput **)pvVar7)->UpstreamPin);
        bVar8 = FPCGPinProperties::operator==(pFVar19,pFVar20);
        FVar24.Data = local_e8.Data.AllocatorInstance.Data;
        if (bVar8) goto LAB_149cb854f;
      }
    }
  }
  uVar34 = 1;
  uVar25 = local_e8.Data.ArrayNum - local_e8.NumFreeIndices;
  if (3 < uVar25) {
    uVar23 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_18c = (undefined4)lVar18;
    uVar34 = 1 << ((byte)lVar18 & 0x1f);
  }
  if (((int)uVar25 < 1) || ((int)uVar34 <= (int)local_a0)) {
    uVar13 = local_a0 - 1 & uVar13;
    *(uint *)((longlong)&((FTaskInputOrigin *)((longlong)pvVar7 + 8))->TaskInput + 4) = uVar13;
    FVar24.Data = local_b0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FVar24.Data = local_a8.Data;
    }
    uVar23 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar13;
    *(undefined4 *)&((FTaskInputOrigin *)((longlong)pvVar7 + 8))->TaskInput =
         *(undefined4 *)(FVar24.Data + uVar23 * 4);
    *(int *)(FVar24.Data + uVar23 * 4) = iVar12;
    pUVar27 = local_240;
    goto LAB_149cb885a;
  }
  local_a0 = uVar34;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar34 != 0) {
    uVar13 = uVar34;
    if (uVar34 < 2) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_149cb865d;
      }
    }
    else {
LAB_149cb865d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar13,4);
    }
    if (0 < (int)uVar34) {
      uVar36 = (ulonglong)uVar34;
      uVar23 = 0;
      do {
        FVar24.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar24.Data = local_a8.Data;
        }
        uVar21 = uVar23 & (longlong)(int)uVar34 - 1U;
        uVar23 = uVar23 + 1;
        *(undefined4 *)(FVar24.Data + uVar21 * 4) = 0xffffffff;
        uVar36 = uVar36 - 1;
      } while (uVar36 != 0);
    }
  }
  pUVar27 = local_240;
  if (local_a0 != 0) {
    pTStack_1f8 = &local_e8.AllocationFlags;
    uStack_1fc = 1;
    local_200 = 0;
    iStack_1ec = 0;
    iStack_1e8 = 0;
    if (local_e8.AllocationFlags.NumBits != 0) {
      FVar37 = (ForElementType<unsigned_int>)&local_e8.AllocationFlags;
      if (local_e8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar37 = local_e8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar13 = *(uint *)FVar37;
      iStack_1e8 = 0;
      local_200 = 0;
      while (uVar13 == 0) {
        iStack_1e8 = iStack_1e8 + 0x20;
        lVar18 = (longlong)local_200;
        local_200 = local_200 + 1;
        if ((int)(local_e8.AllocationFlags.NumBits + -1 +
                 (local_e8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_200)
        goto LAB_149cb876b;
        uVar13 = *(uint *)((uchar *)((longlong)FVar37 + 4) + lVar18 * 4);
      }
      uStack_1fc = -uVar13 & uVar13;
      uVar23 = (ulonglong)uStack_1fc * 2 + 1;
      lVar18 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_190 = (int)lVar18;
      iStack_1ec = local_190 + -1 + iStack_1e8;
      if (local_e8.AllocationFlags.NumBits < iStack_1ec) {
LAB_149cb876b:
        iStack_1ec = local_e8.AllocationFlags.NumBits;
      }
    }
    local_1f0 = 0xffffffff;
    local_188 = &local_e8;
    local_180._padding_ = CONCAT44(uStack_1fc,local_200);
    local_180.CurrentBitIndex = iStack_1ec;
    local_180.UnvisitedBitMask = 0xffffffff;
    local_180._28_4_ = uStack_1e4;
    local_180.BaseBitIndex = iStack_1e8;
    iVar12 = iStack_1ec;
    local_180.Array = pTStack_1f8;
    if (iStack_1ec < local_e8.AllocationFlags.NumBits) {
      do {
        pFVar28 = (local_188->Data).AllocatorInstance.Data + (longlong)iVar12 * 0x10;
        uVar13 = PCGGraphCompiler::GetTypeHash((FTaskInputOrigin *)pFVar28);
        uVar13 = local_a0 - 1 & uVar13;
        *(uint *)(pFVar28 + 0xc) = uVar13;
        FVar24.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar24.Data = local_a8.Data;
        }
        uVar23 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)&pFVar28[8].field_0x0 = *(undefined4 *)(FVar24.Data + uVar23 * 4);
        *(int *)(FVar24.Data + uVar23 * 4) = iVar12;
        local_180.UnvisitedBitMask = local_180.UnvisitedBitMask & ~local_180._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_180);
        pUVar27 = local_240;
        iVar12 = local_180.CurrentBitIndex;
      } while (local_180.CurrentBitIndex < (local_180.Array)->NumBits);
    }
  }
LAB_149cb885a:
  pUVar38 = (UPCGNode *)&(pUVar38->OutputPins).ArrayNum;
  uVar23 = (ulonglong)local_234;
  goto LAB_149cb8191;
}

// CreateGridLinkages @ 149cb9560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FPCGGraphCompiler::CreateGridLinkages
          (UPCGGraph *param_1,EPCGHiGenGrid param_2,
          TArray<EPCGHiGenGrid,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_4,FPCGStackContext *param_5,
          bool param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  EPCGHiGenGrid EVar3;
  EPCGHiGenGrid EVar4;
  UPCGNode *this;
  ulong64 uVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForAnyElementType FVar9;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  UPCGPin *pUVar15;
  UPCGSettings *pUVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined ***pppuVar18;
  FScriptContainerElement *pFVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  FPCGGraphTask *pFVar23;
  TReferenceControllerBase<1> *pTVar24;
  FPCGPinProperties *this_00;
  ulonglong uVar25;
  TReferenceControllerBase<1> *pTVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStackY_328 [32];
  EPCGHiGenGrid local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  ulonglong local_2c0;
  EPCGHiGenGrid local_2b8;
  uint local_2b4;
  longlong local_2b0;
  FString local_2a8;
  uint local_298;
  uint local_294;
  FName local_290;
  FScriptContainerElement local_288;
  ForAnyElementType local_280;
  int local_278;
  int local_274;
  int local_270;
  FScriptContainerElement local_268;
  FScriptContainerElement local_267;
  FScriptContainerElement local_266;
  FScriptContainerElement local_265;
  FScriptContainerElement local_260;
  FName local_258;
  FScriptContainerElement local_250;
  ForAnyElementType local_248;
  int local_240;
  int local_23c;
  int local_238;
  FScriptContainerElement local_230;
  FScriptContainerElement local_22f;
  FScriptContainerElement local_22e;
  FScriptContainerElement local_22d;
  TReferenceControllerBase<1> *local_228;
  FSharedReferencer<1> FStack_220;
  FPCGPinProperties local_218;
  EPCGHiGenGrid local_1e8;
  EPCGHiGenGrid local_1e4;
  FString local_1e0;
  EPCGHiGenGrid local_1d0;
  FName local_1cc;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *local_1c0;
  TArray<EPCGHiGenGrid,TSizedDefaultAllocator<32>_> *local_1b8;
  FPCGStack *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  undefined8 local_188;
  FPCGPinProperties local_180;
  char local_150;
  FPCGPinProperties local_148;
  char local_118;
  undefined1 local_110;
  undefined1 local_10f;
  code *local_108 [5];
  undefined8 *local_e0;
  FPCGPinProperties local_d8;
  char local_a8;
  void *local_a0 [3];
  code *local_88 [2];
  undefined **local_78;
  code *local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2b8 = param_2;
  local_1c0 = param_4;
  local_1b8 = param_3;
  local_1b0 = FPCGStackContext::GetStack(param_5,param_5->CurrentStackIndex);
  pTVar8 = _UNK_150651568;
  pTVar7 = ___xmm_00000000000000000000000000000010;
  iVar13 = param_4->ArrayNum;
  local_198 = (ulonglong)iVar13;
  if (iVar13 != 0) {
    if (local_1b0 == (FPCGStack *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8202795070391321095>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                          ,0x207,"CurrentStack");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      local_2c0 = 0;
      if (iVar13 != 0) {
        do {
          uVar25 = local_2c0;
          uVar29 = (uint)local_2c0;
          uVar28 = ~uVar29 >> 0x1f;
          uVar27 = 0;
          if ((int)uVar29 < param_3->ArrayNum) {
            uVar27 = uVar28;
          }
          if ((uVar27 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar27 = 0;
          local_2c8 = (longlong)(int)uVar29;
          lVar22 = 0;
          local_2b0 = local_2c8 * 0x148;
          local_1a8 = local_2c8 * 4;
          local_298 = *(uint *)((param_3->AllocatorInstance).Data + local_1a8);
          while( true ) {
            lVar21 = local_2b0;
            iVar13 = (int)uVar25;
            uVar29 = 0;
            if (iVar13 < param_4->ArrayNum) {
              uVar29 = uVar28;
            }
            local_2d0 = lVar22;
            local_2b4 = uVar27;
            if ((uVar29 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(int *)((param_4->AllocatorInstance).Data + lVar21 + 8) <= (int)uVar27) break;
            uVar29 = 0;
            if (iVar13 < param_4->ArrayNum) {
              uVar29 = uVar28;
            }
            if ((uVar29 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar19 = (param_4->AllocatorInstance).Data + lVar21;
            local_294 = ~uVar27 >> 0x1f;
            uVar29 = 0;
            if ((int)uVar27 < *(int *)(pFVar19 + 8)) {
              uVar29 = local_294;
            }
            if ((uVar29 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_1a0 = lVar22 * 0x80;
            puVar20 = (undefined8 *)(*(longlong *)pFVar19 + local_1a0);
            local_188 = *puVar20;
            local_150 = *(char *)(puVar20 + 7);
            if (local_150 != '\0') {
              FPCGPinProperties::FPCGPinProperties(&local_180,(FPCGPinProperties *)(puVar20 + 1));
            }
            local_118 = *(char *)(puVar20 + 0xe);
            if (local_118 != '\0') {
              FPCGPinProperties::FPCGPinProperties(&local_148,(FPCGPinProperties *)(puVar20 + 8));
            }
            local_110 = *(undefined1 *)(puVar20 + 0xf);
            local_10f = *(undefined1 *)((longlong)puVar20 + 0x79);
            if (local_150 == '\0') {
LAB_149cba36d:
              if ((local_118 != '\0') &&
                 (local_148.AllowedTypes.Ids.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_148.AllowedTypes.Ids.AllocatorInstance.Data);
              }
              if ((local_150 == '\0') ||
                 (local_180.AllowedTypes.Ids.AllocatorInstance.Data ==
                  (FScriptContainerElement *)0x0)) goto LAB_149cb99f1;
              FMemory::Free(local_180.AllowedTypes.Ids.AllocatorInstance.Data);
              uVar27 = uVar27 + 1;
              lVar22 = lVar22 + 1;
            }
            else {
              lVar21 = (longlong)(int)(uint)local_188;
              uVar29 = 0;
              if ((int)(uint)local_188 < param_4->ArrayNum) {
                uVar29 = ~(uint)local_188 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              this = *(UPCGNode **)((param_4->AllocatorInstance).Data + lVar21 * 0x148 + 0x98);
              if (this == (UPCGNode *)0x0) goto LAB_149cba36d;
              if ((local_150 == '\0') &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pUVar15 = UPCGNode::GetOutputPin(this,&local_180.Label);
              lVar22 = local_2d0;
              if (pUVar15 == (UPCGPin *)0x0) goto LAB_149cba36d;
              lVar22 = (longlong)(int)(uint)local_188;
              uVar29 = 0;
              if ((int)(uint)local_188 < param_3->ArrayNum) {
                uVar29 = ~(uint)local_188 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar29 = *(uint *)((param_3->AllocatorInstance).Data + lVar22 * 4);
              if ((uVar29 != 0) && (local_298 < uVar29)) {
                local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2a8.Data.ArrayNum = 0;
                local_2a8.Data.ArrayMax = 0;
                bVar11 = FPCGStack::CreateStackFramePath
                                   (local_1b0,&local_2a8,(pUVar15->Node).field0_0x0.DebugPtr,pUVar15
                                   );
                if (bVar11) {
                  iVar12 = param_4->ArrayNum;
                  if (iVar12 == param_4->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x148,8,&param_4->AllocatorInstance,&param_4->ArrayMax);
                  }
                  param_4->ArrayNum = iVar12 + 1;
                  pFVar23 = (FPCGGraphTask *)
                            ((param_4->AllocatorInstance).Data + (longlong)iVar12 * 0x148);
                  memset(pFVar23,0,0x148);
                  pFVar23 = FPCGGraphTask::FPCGGraphTask(pFVar23);
                  pFVar23->NodeId = (longlong)(param_4->ArrayNum + -1);
                  uVar27 = 0;
                  if (iVar13 < param_4->ArrayNum) {
                    uVar27 = uVar28;
                  }
                  if ((uVar27 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar23->StackIndex =
                       *(int *)((param_4->AllocatorInstance).Data + local_2b0 + 0x70);
                  FPCGPinProperties::FPCGPinProperties(&local_218,&pUVar15->Properties);
                  lVar22 = (longlong)(int)(uint)local_188;
                  uVar29 = 0;
                  uVar27 = uVar29;
                  if ((int)(uint)local_188 < param_4->ArrayNum) {
                    uVar27 = ~(uint)local_188 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (*(longlong *)((param_4->AllocatorInstance).Data + lVar22 * 0x148 + 0x98) != 0)
                  {
                    lVar22 = (longlong)(int)(uint)local_188;
                    uVar27 = uVar29;
                    if ((int)(uint)local_188 < param_4->ArrayNum) {
                      uVar27 = ~(uint)local_188 >> 0x1f;
                    }
                    if ((uVar27 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pUVar16 = UPCGNode::GetSettings
                                        (*(UPCGNode **)
                                          ((param_4->AllocatorInstance).Data + lVar22 * 0x148 + 0x98
                                          ));
                    if (pUVar16 != (UPCGSettings *)0x0) {
                      puVar20 = (undefined8 *)
                                (**(code **)(pUVar16->_padding_ + 0x440))(pUVar16,local_a0,pUVar15);
                      if (&local_218.AllowedTypes != (FPCGDataTypeIdentifier *)puVar20) {
                        if (local_218.AllowedTypes.Ids.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_218.AllowedTypes.Ids.AllocatorInstance.Data);
                        }
                        local_218.AllowedTypes.Ids.AllocatorInstance.Data =
                             (FScriptContainerElement *)*puVar20;
                        *puVar20 = 0;
                        local_218.AllowedTypes.Ids.ArrayNum = *(int *)(puVar20 + 1);
                        local_218.AllowedTypes.Ids.ArrayMax = *(int *)((longlong)puVar20 + 0xc);
                        puVar20[1] = 0;
                      }
                      local_218.AllowedTypes.CustomSubtype = *(int *)(puVar20 + 2);
                      if (local_a0[0] != (void *)0x0) {
                        FMemory::Free(local_a0[0]);
                      }
                    }
                  }
                  iVar13 = local_218.AllowedTypes.Ids.ArrayNum;
                  FVar9.Data = local_218.AllowedTypes.Ids.AllocatorInstance.Data;
                  local_258 = local_218.Label;
                  local_250 = (FScriptContainerElement)local_218.Usage;
                  local_248.Data = (FScriptContainerElement *)0x0;
                  local_240 = local_218.AllowedTypes.Ids.ArrayNum;
                  if (local_218.AllowedTypes.Ids.ArrayNum == 0) {
                    local_23c = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,local_218.AllowedTypes.Ids.ArrayNum,0,&local_248,
                               local_218.AllowedTypes.Ids.ArrayNum,&local_23c);
                    ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                              (local_248.Data,(FPCGDataTypeBaseId *)FVar9.Data,iVar13);
                  }
                  piVar1 = &(pFVar23->Inputs).ArrayMax;
                  local_238 = local_218.AllowedTypes.CustomSubtype;
                  local_230 = (FScriptContainerElement)local_218.bAllowMultipleData;
                  local_22f = (FScriptContainerElement)local_218.PinStatus;
                  local_22e = (FScriptContainerElement)local_218.bInvisiblePin;
                  local_22d = (FScriptContainerElement)local_218.bAllowMultipleConnections;
                  iVar13 = (pFVar23->Inputs).ArrayNum;
                  if (iVar13 == *piVar1) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x880,(ForAnyElementType *)pFVar23,piVar1);
                  }
                  iVar12 = local_240;
                  FVar9.Data = local_248.Data;
                  (pFVar23->Inputs).ArrayNum = iVar13 + 1;
                  pFVar19 = (pFVar23->Inputs).AllocatorInstance.Data + (longlong)iVar13 * 0x80;
                  local_290 = local_258;
                  local_288 = local_250;
                  local_280.Data = (FScriptContainerElement *)0x0;
                  local_278 = local_240;
                  if (local_240 == 0) {
                    local_274 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,local_240,0,&local_280,local_240,&local_274);
                    ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                              (local_280.Data,(FPCGDataTypeBaseId *)FVar9.Data,iVar12);
                  }
                  local_270 = local_238;
                  local_268 = local_230;
                  local_267 = local_22f;
                  local_266 = local_22e;
                  local_265 = local_22d;
                  local_260 = (FScriptContainerElement)0x1;
                  FPCGPinProperties::FPCGPinProperties(&local_d8,&local_218);
                  *(undefined8 *)pFVar19 = local_188;
                  pFVar19[0x38] = (FScriptContainerElement)0x1;
                  local_a8 = '\x01';
                  FPCGPinProperties::FPCGPinProperties((FPCGPinProperties *)(pFVar19 + 8),&local_d8)
                  ;
                  iVar13 = local_278;
                  FVar9.Data = local_280.Data;
                  pFVar19[0x70] = local_260;
                  if (local_260 != (FScriptContainerElement)0x0) {
                    pFVar2 = pFVar19 + 0x50;
                    *(FName *)(pFVar19 + 0x40) = local_290;
                    pFVar19[0x48] = local_288;
                    *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0
                    ;
                    *(int *)(pFVar19 + 0x58) = local_278;
                    if (local_278 == 0) {
                      *(int *)(pFVar19 + 0x5c) = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,local_278,0,(ForAnyElementType *)pFVar2,local_278,
                                 (int *)(pFVar19 + 0x5c));
                      ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                                (*(FScriptContainerElement **)&pFVar2->field_0x0,
                                 (FPCGDataTypeBaseId *)FVar9.Data,iVar13);
                    }
                    *(int *)(pFVar19 + 0x60) = local_270;
                    pFVar19[0x68] = local_268;
                    pFVar19[0x69] = local_267;
                    pFVar19[0x6a] = local_266;
                    pFVar19[0x6b] = local_265;
                    param_3 = local_1b8;
                  }
                  *(undefined2 *)(pFVar19 + 0x78) = 0x101;
                  if ((local_a8 != '\0') &&
                     (local_d8.AllowedTypes.Ids.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_d8.AllowedTypes.Ids.AllocatorInstance.Data);
                  }
                  if ((local_260 != (FScriptContainerElement)0x0) &&
                     (local_280.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_280.Data);
                  }
                  lVar22 = (longlong)(int)(uint)local_188;
                  if ((int)(uint)local_188 < param_3->ArrayNum) {
                    uVar29 = ~(uint)local_188 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  EVar3 = *(EPCGHiGenGrid *)((param_3->AllocatorInstance).Data + lVar22 * 4);
                  uVar27 = 0;
                  if ((int)local_2c0 < param_3->ArrayNum) {
                    uVar27 = uVar28;
                  }
                  if ((uVar27 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  FVar9.Data = local_2a8.Data.AllocatorInstance.Data;
                  lVar22 = (longlong)local_2a8.Data.ArrayNum;
                  EVar4 = *(EPCGHiGenGrid *)((param_3->AllocatorInstance).Data + local_1a8);
                  local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_1e0.Data.ArrayNum = local_2a8.Data.ArrayNum;
                  local_1e8 = EVar3;
                  local_1e4 = EVar4;
                  if (local_2a8.Data.ArrayNum == 0) {
                    local_1e0.Data.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_2a8.Data.ArrayNum,0,(ForAnyElementType *)&local_1e0,
                               local_2a8.Data.ArrayNum,&local_1e0.Data.ArrayMax);
                    memcpy(local_1e0.Data.AllocatorInstance.Data,FVar9.Data,lVar22 * 2);
                  }
                  pTVar24 = (TReferenceControllerBase<1> *)0x0;
                  local_1d0 = local_2b8;
                  local_1cc = local_218.Label;
                  local_78 = &
                             ___7__TFunction_OwnedObject_P6APEAUFPCGGridLinkageContext__AEBUFPCGInitializeElementParams___Z_0A__0A__Function_Private_Core_UE__6B_
                  ;
                  local_70 = `FPCGGraphCompiler::CreateGridLinkages'::__l21::<lambda_2>::
                             <lambda_invoker_cdecl>;
                  local_88[0] = UE::Core::Private::Function::
                                TFunctionRefCaller<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),FPCGContext_*,FPCGInitializeElementParams_const_&>
                                ::Call;
                  local_60 = (undefined ***)0x0;
                  pTVar17 = ::operator_new(0xf0);
                  if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
                    pTVar26 = (TReferenceControllerBase<1> *)&DAT_00000010;
                    local_228 = pTVar7;
                    FStack_220.ReferenceController = pTVar8;
                  }
                  else {
                    pTVar17->SharedReferenceCount = (atomic<int>)0x1;
                    pTVar17->WeakReferenceCount = (atomic<int>)0x1;
                    local_108[0] = (code *)0x0;
                    pTVar17->_padding_ =
                         (longlong)
                         &
                         ___7__TIntrusiveReferenceController_VFPCGGridLinkageElement_PCGGraphExecutor___00_SharedPointerInternals__6B_
                    ;
                    local_e0 = (undefined8 *)0x0;
                    puVar20 = FMemory::Malloc(0x30,8);
                    *puVar20 = &UE::Core::Private::Function::
                                TFunction_OwnedObject<`FPCGGraphCompiler::CreateGridLinkages'::`21'::<lambda_1>,0,1>
                                ::_vftable_;
                    *(EPCGHiGenGrid *)(puVar20 + 1) = local_1e8;
                    *(EPCGHiGenGrid *)((longlong)puVar20 + 0xc) = local_1e4;
                    local_e0 = puVar20;
                    ::FString::FString((FString *)(puVar20 + 2),&local_1e0);
                    *(EPCGHiGenGrid *)(puVar20 + 4) = local_1d0;
                    *(FName *)((longlong)puVar20 + 0x24) = local_1cc;
                    if ((EPCGHiGenGrid *)(puVar20 + 1) != (EPCGHiGenGrid *)0x0) {
                      local_108[0] = UE::Core::Private::Function::
                                     TFunctionRefCaller<`FPCGGraphCompiler::CreateGridLinkages'::__l21::<lambda_1>,bool,FPCGContext_*>
                                     ::Call;
                    }
                    PCGGraphExecutor::FPCGGridLinkageElement::FPCGGridLinkageElement
                              ((FPCGGridLinkageElement *)(pTVar17 + 1),
                               (TFunction<bool___cdecl(FPCGContext_*)> *)local_108,
                               (TFunction<FPCGContext_*___cdecl(FPCGInitializeElementParams_const_&)>
                                *)local_88,EVar3,EVar4,local_2b8,&local_2a8,pUVar15);
                    pTVar26 = pTVar17 + 1;
                    if ((pTVar26 == (TReferenceControllerBase<1> *)0x0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InObject != nullptr",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x246,L""), bVar11)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    LOCK();
                    pTVar17->SharedReferenceCount =
                         (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
                    UNLOCK();
                    FStack_220.ReferenceController = pTVar17;
                    pTVar24 = pTVar17;
                    local_228 = pTVar26;
                  }
                  if (&pFVar23->Element != (TSharedPtr<IPCGElement,1> *)&local_228) {
                    (pFVar23->Element).Object = (IPCGElement *)pTVar26;
                    local_228 = (TReferenceControllerBase<1> *)0x0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=
                              (&(pFVar23->Element).SharedReferenceCount,&FStack_220);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(FStack_220.ReferenceController);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar24);
                  pTVar10 = local_1c0;
                  uVar5 = pFVar23->NodeId;
                  uVar27 = 0;
                  if ((int)local_2c0 < local_1c0->ArrayNum) {
                    uVar27 = uVar28;
                  }
                  if ((uVar27 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar29 = local_294;
                  uVar27 = local_2b4;
                  pFVar19 = (pTVar10->AllocatorInstance).Data + local_2b0;
                  uVar14 = 0;
                  if ((int)local_2b4 < *(int *)(pFVar19 + 8)) {
                    uVar14 = local_294;
                  }
                  if ((uVar14 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar22 = local_1a0;
                  param_4 = local_1c0;
                  *(ulong64 *)(local_1a0 + *(longlong *)pFVar19) = uVar5;
                  uVar14 = 0;
                  if ((int)local_2c0 < local_1c0->ArrayNum) {
                    uVar14 = uVar28;
                  }
                  if ((uVar14 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar19 = (param_4->AllocatorInstance).Data + local_2b0;
                  uVar14 = 0;
                  if ((int)uVar27 < *(int *)(pFVar19 + 8)) {
                    uVar14 = uVar29;
                  }
                  if ((uVar14 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  this_00 = (FPCGPinProperties *)(*(longlong *)pFVar19 + 8 + lVar22);
                  if (&local_218 != this_00) {
                    if (((char)this_00[1].Label.ComparisonIndex.Value != '\0') &&
                       (pFVar19 = (this_00->AllowedTypes).Ids.AllocatorInstance.Data,
                       pFVar19 != (FScriptContainerElement *)0x0)) {
                      FMemory::Free(pFVar19);
                    }
                    FPCGPinProperties::FPCGPinProperties(this_00,&local_218);
                    *(undefined1 *)&this_00[1].Label.ComparisonIndex.Value = 1;
                  }
                  param_3 = local_1b8;
                  local_2d4 = EVar4 | EVar3;
                  pFVar19 = (local_1b8->AllocatorInstance).Data;
                  if (((pFVar19 <= (FScriptContainerElement *)&local_2d4) &&
                      ((FScriptContainerElement *)&local_2d4 <
                       pFVar19 + (longlong)local_1b8->ArrayMax * 4)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar13 = param_3->ArrayNum;
                  if (iVar13 == param_3->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
                  }
                  param_3->ArrayNum = iVar13 + 1;
                  *(EPCGHiGenGrid *)((param_3->AllocatorInstance).Data + (longlong)iVar13 * 4) =
                       local_2d4;
                  if (local_88[0] != (code *)0x0) {
                    pppuVar18 = &local_78;
                    if (local_60 != (undefined ***)0x0) {
                      pppuVar18 = local_60;
                    }
                    (*(code *)(*pppuVar18)[2])();
                  }
                  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                  }
                  if (local_248.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_248.Data);
                  }
                  if (local_218.AllowedTypes.Ids.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_218.AllowedTypes.Ids.AllocatorInstance.Data);
                  }
                  uVar25 = local_2c0;
                  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
                    uVar25 = local_2c0;
                  }
                }
                else {
                  bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<8202795070391321131>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                                      ,0x22b,
                                      "CurrentStack->CreateStackFramePath(ResourceKey, UpstreamPin->Node, UpstreamPin)"
                                     );
                  if (bVar11) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
                  }
                }
              }
              if ((local_118 != '\0') &&
                 (local_148.AllowedTypes.Ids.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_148.AllowedTypes.Ids.AllocatorInstance.Data);
              }
              lVar22 = local_2d0;
              if ((local_150 != '\0') &&
                 (local_180.AllowedTypes.Ids.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_180.AllowedTypes.Ids.AllocatorInstance.Data);
                lVar22 = local_2d0;
              }
LAB_149cb99f1:
              uVar27 = uVar27 + 1;
              lVar22 = lVar22 + 1;
            }
          }
          local_2c0 = uVar25 + 1;
        } while (local_2c0 < local_198);
      }
    }
  }
  return;
}

// CullTasks @ 149cbbc60

void __cdecl
FPCGGraphCompiler::CullTasks
          (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          TFunctionRef<bool___cdecl(FPCGGraphTask_const_&)> *param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FPCGPinProperties *pFVar12;
  void *pvVar13;
  uint uVar14;
  FPCGPinProperties *this;
  longlong lVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  ulong64 uVar19;
  uint uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 local_77;
  undefined1 local_76 [2];
  uint local_74;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_70;
  longlong local_60;
  int *local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId859,"FPCGGraphCompiler::CullTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
               ,0x35b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId859);
  }
  piVar17 = &param_1->ArrayNum;
  local_58 = piVar17;
  if (1 < param_1->ArrayNum) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1->ArrayNum,&local_70.AllocatorInstance,&local_70.ArrayNum,
               &local_70.ArrayMax);
    if ((local_70.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar14 = 1;
    local_40 = 1;
    *(undefined8 *)local_70.AllocatorInstance.Data = 0;
    uVar20 = *piVar17;
    if (1 < (int)uVar20) {
      lVar21 = 8;
      do {
        uVar16 = 0;
        if ((int)uVar14 < (int)uVar20) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        cVar6 = (**(code **)param_3)
                          (*(undefined8 *)&param_3->field_0x8,
                           (param_1->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x148);
        uVar20 = 0;
        if ((int)uVar14 < local_70.ArrayNum) {
          uVar20 = ~uVar14 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar14 = uVar14 + 1;
        *(ulonglong *)(local_70.AllocatorInstance.Data + lVar21) = -(ulonglong)(cVar6 != '\0');
        uVar20 = param_1->ArrayNum;
        lVar21 = lVar21 + 8;
      } while ((int)uVar14 < (int)uVar20);
    }
    piVar17 = &param_1->ArrayNum;
    if (param_2) {
      uVar14 = 1;
      local_60 = CONCAT44(local_60._4_4_,1);
      if (1 < (int)uVar20) {
        local_50 = 0x148;
        do {
          lVar21 = local_50;
          uVar16 = 0;
          if ((int)uVar14 < (int)uVar20) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if (uVar16 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar14 = (uint)local_60;
          }
          pFVar10 = (param_1->AllocatorInstance).Data + lVar21;
          if ((*(longlong *)&pFVar10[0x98].field_0x0 != 0) &&
             (*(int *)(*(longlong *)&pFVar10[0x98].field_0x0 + 0x70) != 0)) {
            iVar8 = *(int *)&pFVar10[8].field_0x0;
            uVar20 = 0;
            if (0 < iVar8) {
              do {
                uVar14 = 0;
                if ((int)uVar20 < iVar8) {
                  uVar14 = ~uVar20 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                local_48 = (longlong)(int)uVar20 * 0x80;
                uVar14 = *(uint *)(*(longlong *)&pFVar10->field_0x0 + local_48);
                uVar16 = 0;
                if ((int)uVar14 < local_70.ArrayNum) {
                  uVar16 = ~uVar14 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (*(longlong *)(local_70.AllocatorInstance.Data + (longlong)(int)uVar14 * 8) == -1
                   ) {
                  uVar16 = 0;
                  if ((int)uVar14 < param_1->ArrayNum) {
                    uVar16 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar22 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x148;
                  if ((*(longlong *)&pFVar22[0x98].field_0x0 == 0) ||
                     (*(int *)(*(longlong *)&pFVar22[0x98].field_0x0 + 0x70) < 2)) {
                    uVar14 = uVar20 + 1;
                    if ((pFVar10 == pFVar22) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(const void*)this != (const void*)&Items",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x767,L""), bVar5)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    iVar8 = *(int *)&pFVar22[8].field_0x0;
                    iVar7 = UE::Core::Private::
                            ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x80,8,iVar8,(ForAnyElementType *)pFVar10,
                                       (int *)(pFVar10 + 8),(int *)(pFVar10 + 0xc));
                    pvVar13 = (void *)(*(longlong *)&pFVar10->field_0x0 +
                                      (longlong)(int)uVar14 * 0x80);
                    memmove((void *)((longlong)pvVar13 + (longlong)iVar8 * 0x80),pvVar13,
                            (longlong)(int)(iVar7 - uVar14) << 7);
                    ConstructItems<FPCGGraphTaskInput,FPCGGraphTaskInput,int>
                              ((void *)(*(longlong *)&pFVar10->field_0x0 +
                                       (longlong)(int)uVar14 * 0x80),
                               *(FPCGGraphTaskInput **)&pFVar22->field_0x0,iVar8);
                    local_74 = *(uint *)&pFVar22[8].field_0x0;
                    if (0 < (int)local_74) {
                      lVar21 = 0;
                      do {
                        uVar16 = 0;
                        if ((int)uVar20 < *(int *)&pFVar10[8].field_0x0) {
                          uVar16 = ~uVar20 >> 0x1f;
                        }
                        if ((uVar16 == 0) &&
                           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar5)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        pFVar12 = (FPCGPinProperties *)
                                  (*(longlong *)&pFVar10->field_0x0 + local_48 + 0x40);
                        uVar16 = 0;
                        if ((int)uVar14 < *(int *)&pFVar10[8].field_0x0) {
                          uVar16 = ~uVar14 >> 0x1f;
                        }
                        if ((uVar16 == 0) &&
                           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar5)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        this = (FPCGPinProperties *)
                               (*(longlong *)&pFVar10->field_0x0 +
                               ((longlong)(int)uVar20 + 1 + lVar21) * 0x80 + 0x40);
                        if (pFVar12 != this) {
                          cVar6 = (char)this[1].Label.ComparisonIndex.Value;
                          if ((char)pFVar12[1].Label.ComparisonIndex.Value == '\0') {
                            if (cVar6 != '\0') {
                              pFVar22 = (this->AllowedTypes).Ids.AllocatorInstance.Data;
                              if (pFVar22 != (FScriptContainerElement *)0x0) {
                                FMemory::Free(pFVar22);
                              }
                              *(undefined1 *)&this[1].Label.ComparisonIndex.Value = 0;
                            }
                          }
                          else {
                            if ((cVar6 != '\0') &&
                               (pFVar22 = (this->AllowedTypes).Ids.AllocatorInstance.Data,
                               pFVar22 != (FScriptContainerElement *)0x0)) {
                              FMemory::Free(pFVar22);
                            }
                            FPCGPinProperties::FPCGPinProperties(this,pFVar12);
                            *(undefined1 *)&this[1].Label.ComparisonIndex.Value = 1;
                          }
                        }
                        uVar14 = uVar14 + 1;
                        lVar21 = lVar21 + 1;
                      } while (lVar21 < (int)local_74);
                    }
                    uVar20 = uVar20 + local_74;
                    goto LAB_149cbc1f0;
                  }
                  local_77 = 0;
                  `FPCGGraphCompiler::CullTasks'::__l23::<lambda_1>::operator()(&local_77);
                }
                else {
LAB_149cbc1f0:
                  uVar20 = uVar20 + 1;
                }
                iVar8 = *(int *)&pFVar10[8].field_0x0;
              } while ((int)uVar20 < iVar8);
              piVar17 = local_58;
              uVar14 = (uint)local_60;
            }
          }
          uVar14 = uVar14 + 1;
          uVar20 = *piVar17;
          local_50 = local_50 + 0x148;
          local_60 = CONCAT44(local_60._4_4_,uVar14);
        } while ((int)uVar14 < (int)uVar20);
      }
    }
    uVar19 = 1;
    uVar14 = 1;
    if (1 < (int)uVar20) {
      lVar11 = 0x148;
      local_60 = 1;
      local_50 = 0x148;
      local_48 = 8;
      lVar21 = 1;
      do {
        lVar15 = local_48;
        lVar23 = local_50;
        uVar18 = (uint)uVar19;
        uVar16 = ~uVar14 >> 0x1f;
        uVar20 = 0;
        if ((int)uVar14 < local_70.ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)(local_70.AllocatorInstance.Data + lVar15) != -1) {
          if (uVar18 != uVar14) {
            uVar20 = 0;
            if ((int)uVar14 < *local_58) {
              uVar20 = uVar16;
            }
            if ((uVar20 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_74 = ~uVar18 >> 0x1f;
            pFVar10 = (param_1->AllocatorInstance).Data + lVar23;
            uVar20 = 0;
            if ((int)uVar18 < param_1->ArrayNum) {
              uVar20 = local_74;
            }
            if ((uVar20 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar22 = (param_1->AllocatorInstance).Data + lVar11;
            if (pFVar22 != pFVar10) {
              DestructItems<FPCGGraphTaskInput,int>
                        (*(FPCGGraphTaskInput **)pFVar22,*(int *)(pFVar22 + 8));
              if (*(void **)pFVar22 != (void *)0x0) {
                FMemory::Free(*(void **)pFVar22);
              }
              *(undefined8 *)pFVar22 = *(undefined8 *)pFVar10;
              *(undefined8 *)pFVar10 = 0;
              *(undefined4 *)(pFVar22 + 8) = *(undefined4 *)(pFVar10 + 8);
              *(undefined4 *)(pFVar22 + 0xc) = *(undefined4 *)(pFVar10 + 0xc);
              *(undefined8 *)(pFVar10 + 8) = 0;
            }
            *(undefined4 *)(pFVar22 + 0x10) = *(undefined4 *)(pFVar10 + 0x10);
            TPersistentObjectPtr<FSoftObjectPath>::operator=
                      ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar22 + 0x18),
                       (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar10 + 0x18));
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (*(UObject **)(pFVar10 + 0x40) != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(*(UObject **)(pFVar10 + 0x40));
            }
            pFVar1 = pFVar10 + 0x60;
            *(undefined8 *)(pFVar22 + 0x40) = *(undefined8 *)(pFVar10 + 0x40);
            pFVar2 = pFVar22 + 0x60;
            *(undefined8 *)(pFVar22 + 0x48) = *(undefined8 *)(pFVar10 + 0x48);
            *(undefined8 *)(pFVar22 + 0x50) = *(undefined8 *)(pFVar10 + 0x50);
            *(undefined8 *)(pFVar22 + 0x58) = *(undefined8 *)(pFVar10 + 0x58);
            if (pFVar2 != pFVar1) {
              if (*(void **)pFVar2 != (void *)0x0) {
                FMemory::Free(*(void **)pFVar2);
              }
              *(undefined8 *)pFVar2 = *(undefined8 *)pFVar1;
              *(undefined8 *)pFVar1 = 0;
              *(undefined4 *)(pFVar22 + 0x68) = *(undefined4 *)(pFVar10 + 0x68);
              *(undefined4 *)(pFVar22 + 0x6c) = *(undefined4 *)(pFVar10 + 0x6c);
              *(undefined8 *)(pFVar10 + 0x68) = 0;
            }
            pFVar1 = pFVar10 + 0x78;
            *(undefined4 *)(pFVar22 + 0x70) = *(undefined4 *)(pFVar10 + 0x70);
            if (pFVar22 + 0x78 != pFVar1) {
              *(undefined8 *)(pFVar22 + 0x78) = *(undefined8 *)pFVar1;
              *(undefined8 *)pFVar1 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(pFVar22 + 0x80),
                         (FSharedReferencer<1> *)(pFVar10 + 0x80));
            }
            uVar4 = *(undefined8 *)(pFVar10 + 0x90);
            pFVar1 = pFVar10 + 0xa8;
            *(undefined8 *)(pFVar22 + 0x88) = *(undefined8 *)(pFVar10 + 0x88);
            *(undefined8 *)(pFVar22 + 0x90) = uVar4;
            *(undefined8 *)(pFVar22 + 0x98) = *(undefined8 *)(pFVar10 + 0x98);
            *(undefined8 *)(pFVar22 + 0xa0) = *(undefined8 *)(pFVar10 + 0xa0);
            if (pFVar22 + 0xa8 != pFVar1) {
              *(undefined8 *)(pFVar22 + 0xa8) = *(undefined8 *)pFVar1;
              *(undefined8 *)pFVar1 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(pFVar22 + 0xb0),
                         (FSharedReferencer<1> *)(pFVar10 + 0xb0));
            }
            pFVar22[0xb8] = pFVar10[0xb8];
            FPCGDataCollection::operator=
                      ((FPCGDataCollection *)(pFVar22 + 0xc0),(FPCGDataCollection *)(pFVar10 + 0xc0)
                      );
            if ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)(pFVar22 + 0xf0) !=
                (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)(pFVar10 + 0xf0)) {
              TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              ::
              Move<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
                        ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                          *)(pFVar22 + 0xf0),
                         (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                          *)(pFVar10 + 0xf0));
            }
            lVar21 = local_60;
            pFVar22[0x140] = pFVar10[0x140];
            pFVar22[0x141] = pFVar10[0x141];
            uVar18 = (uint)local_40;
            uVar20 = 0;
            if ((int)uVar18 < *local_58) {
              uVar20 = local_74;
            }
            if ((uVar20 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(longlong *)((param_1->AllocatorInstance).Data + lVar11 + 0x48) = lVar21;
            lVar15 = local_48;
            lVar23 = local_50;
          }
          uVar20 = 0;
          if ((int)uVar14 < local_70.ArrayNum) {
            uVar20 = uVar16;
          }
          if ((uVar20 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar21 = lVar21 + 1;
          uVar19 = (ulong64)(uVar18 + 1);
          lVar11 = lVar11 + 0x148;
          *(longlong *)(local_70.AllocatorInstance.Data + lVar15) = (longlong)(int)uVar18;
          local_60 = lVar21;
          local_40 = uVar19;
        }
        local_50 = lVar23 + 0x148;
        local_48 = lVar15 + 8;
        uVar14 = uVar14 + 1;
        uVar20 = *local_58;
        piVar17 = local_58;
      } while ((int)uVar14 < (int)uVar20);
    }
    uVar14 = (uint)uVar19;
    if ((int)uVar20 < (int)uVar14) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x148,8,uVar14 - uVar20,&param_1->AllocatorInstance,piVar17,
                         &param_1->ArrayMax);
      DefaultConstructItems<FPCGGraphTask,int>
                ((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x148,uVar14 - uVar20);
    }
    else {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar19);
      }
      if ((int)uVar14 < (int)uVar20) {
        uVar20 = uVar20 - uVar14;
        if (((int)(uVar20 | uVar14) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar20 != 0) {
          TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>::RemoveAtImpl(param_1,uVar14,uVar20);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x148,8,&param_1->AllocatorInstance,*piVar17,&param_1->ArrayMax);
        }
      }
    }
    local_74 = *piVar17;
    uVar9 = (ulonglong)(int)local_74;
    pFVar10 = (param_1->AllocatorInstance).Data;
    pFVar22 = pFVar10 + uVar9 * 0x148;
    while( true ) {
      if (*piVar17 != (uint)uVar9) {
        local_76[0] = 0;
        `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_76);
      }
      if (pFVar10 == pFVar22) break;
      uVar20 = *(int *)&pFVar10[8].field_0x0 - 1;
      if (-1 < (int)uVar20) {
        lVar21 = (longlong)(int)uVar20 << 7;
        do {
          uVar16 = ~uVar20 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar20 < *(int *)&pFVar10[8].field_0x0) {
            uVar14 = uVar16;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar14 = *(uint *)(*(longlong *)&pFVar10->field_0x0 + lVar21);
          uVar18 = 0;
          if ((int)uVar14 < local_70.ArrayNum) {
            uVar18 = ~uVar14 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar11 = *(longlong *)(local_70.AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
          if (lVar11 == -1) {
            uVar14 = 0;
            if ((int)uVar20 < *(int *)&pFVar10[8].field_0x0) {
              uVar14 = uVar16;
            }
            if ((uVar14 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pvVar13 = (void *)(*(longlong *)&pFVar10->field_0x0 + lVar21);
            if ((*(char *)((longlong)pvVar13 + 0x70) != '\0') &&
               (*(void **)((longlong)pvVar13 + 0x50) != (void *)0x0)) {
              FMemory::Free(*(void **)((longlong)pvVar13 + 0x50));
            }
            if ((*(char *)((longlong)pvVar13 + 0x38) != '\0') &&
               (*(void **)((longlong)pvVar13 + 0x18) != (void *)0x0)) {
              FMemory::Free(*(void **)((longlong)pvVar13 + 0x18));
            }
            iVar8 = ~uVar20 + *(int *)&pFVar10[8].field_0x0;
            if (iVar8 != 0) {
              memmove(pvVar13,(void *)((longlong)pvVar13 + 0x80),(longlong)iVar8 << 7);
            }
            *(int *)&pFVar10[8].field_0x0 = *(int *)&pFVar10[8].field_0x0 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,(ForAnyElementType *)pFVar10,*(int *)&pFVar10[8].field_0x0,
                       (int *)(pFVar10 + 0xc));
          }
          else {
            uVar14 = 0;
            if ((int)uVar20 < *(int *)&pFVar10[8].field_0x0) {
              uVar14 = uVar16;
            }
            if ((uVar14 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(longlong *)(*(longlong *)&pFVar10->field_0x0 + lVar21) = lVar11;
          }
          lVar21 = lVar21 + -0x80;
          uVar20 = uVar20 - 1;
          piVar17 = local_58;
        } while (-1 < (int)uVar20);
      }
      if (*(longlong *)&pFVar10[0x58].field_0x0 != -1) {
        uVar14 = (uint)*(longlong *)&pFVar10[0x58].field_0x0;
        uVar20 = 0;
        if ((int)uVar14 < local_70.ArrayNum) {
          uVar20 = ~uVar14 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar21 = *(longlong *)(local_70.AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
        if ((lVar21 == -1) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<8202795070391321542>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                               ,0x3c6,"RemappedParentId != InvalidPCGTaskId"), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(longlong *)&pFVar10[0x58].field_0x0 = lVar21;
      }
      uVar9 = (ulonglong)local_74;
      pFVar10 = pFVar10 + 0x148;
    }
    if ((param_4 != (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0) &&
       (param_4 != &local_70)) {
      pFVar10 = (param_4->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (param_4->AllocatorInstance).Data = local_70.AllocatorInstance.Data;
      param_4->ArrayNum = local_70.ArrayNum;
      param_4->ArrayMax = local_70.ArrayMax;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CullTasksStaticInactive @ 149cbca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FPCGGraphCompiler::CullTasksStaticInactive
          (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [4];
  undefined1 local_a4 [12];
  FScriptContainerElement *local_98;
  undefined1 *local_90;
  code *local_88;
  undefined1 *local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (param_1->ArrayNum != 0) {
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 0x80;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = (ForElementType<FSetElementId>)0x0;
    local_30 = 0;
    local_a8[0] = 1;
    if ((param_1->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_98 = (param_1->AllocatorInstance).Data + 0x48;
    local_90 = local_a8;
    TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,bool_&&>_>
              ((TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
                *)local_78,(TPairInitializer<unsigned___int64_const_&,bool_&&> *)local_a4,
               (bool *)&local_98);
    iVar4 = param_1->ArrayNum;
    uVar5 = 1;
    if (1 < iVar4) {
      lVar6 = 0x148;
      do {
        uVar3 = 0;
        if ((int)uVar5 < iVar4) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        CalculateStaticallyActiveRecursive
                  (*(ulong64 *)((param_1->AllocatorInstance).Data + lVar6 + 0x48),param_1,
                   (TMap<unsigned___int64,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>_>
                    *)local_78);
        iVar4 = param_1->ArrayNum;
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x148;
      } while ((int)uVar5 < iVar4);
    }
    local_a4._4_8_ = local_78;
    local_80 = local_a4 + 4;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGGraphCompiler::CullTasksStaticInactive'::__l2::<lambda_1>,bool,FPCGGraphTask_const_&>
               ::Call;
    CullTasks(param_1,false,(TFunctionRef<bool___cdecl(FPCGGraphTask_const_&)> *)&local_88,
              (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0);
    local_30 = 0;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_38);
    }
    iVar4 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_44 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  return;
}

// GetCompiledTasks @ 149cc6f30

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> * __thiscall
FPCGGraphCompiler::GetCompiledTasks
          (FPCGGraphCompiler *this,
          TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPCGGraph *param_1,uint param_2,FPCGStackContext *param_3,bool param_4)

{
  longlong *plVar1;
  int iVar2;
  UPCGGraphCompilationData *pUVar3;
  longlong lVar4;
  FPCGGraphTask *pFVar5;
  code *pcVar6;
  bool bVar7;
  TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FName FVar11;
  TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
  *pTVar12;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined1 *puVar14;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  longlong lVar15;
  FPCGStackContext *pFVar16;
  FName FVar17;
  int iVar18;
  FPCGStackContext *pFVar19;
  undefined1 local_res18 [8];
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> local_40;
  
  if ((param_1 != (UPCGGraph *)0x0) &&
     (pUVar3 = (param_1->CookedCompilationData).field0_0x0.DebugPtr,
     pUVar3 != (UPCGGraphCompilationData *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if (*(int *)&(pUVar3->Tasks).field_0x8 != *(int *)&(pUVar3->Tasks).field_0x34) {
      puVar14 = *(undefined1 **)&(pUVar3->Tasks).field_0x40;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(pUVar3->Tasks).field_0x38;
      }
      iVar18 = *(int *)(puVar14 +
                       (ulonglong)(*(int *)&(pUVar3->Tasks).field_0x48 - 1U & param_2) * 4);
      if (iVar18 != -1) {
        lVar15 = *(longlong *)&pUVar3->Tasks;
        do {
          if (*(uint *)((longlong)iVar18 * 0x20 + lVar15) == param_2) {
            if ((iVar18 != -1) && (lVar15 = (longlong)iVar18 * 0x20 + lVar15, lVar15 != 0)) {
              plVar1 = (longlong *)(lVar15 + 8);
              pFVar16 = TMapBase<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
                        ::Find((TMapBase<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
                                *)&pUVar3->StackContexts,param_2);
              if ((plVar1 != (longlong *)0x0) && (pFVar16 != (FPCGStackContext *)0x0)) {
                lVar4 = *plVar1;
                iVar18 = *(int *)(lVar15 + 0x10);
                this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(lVar4 + 0x18);
                FVar17.ComparisonIndex.Value = 0;
                FVar17.Number = 0;
                goto LAB_149cc70c8;
              }
            }
            break;
          }
          iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 + lVar15);
        } while (iVar18 != -1);
      }
    }
  }
  pFVar16 = (FPCGStackContext *)0x0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  if (param_4) {
    CompileTopGraph(this,param_1,param_2);
    AcquireSRWLockShared((PSRWLOCK)this);
    pTVar8 = TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
             ::Find((TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                     *)&(this->Cache).TopGraphToTaskMap,param_1);
    if ((pTVar8 != (TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
                    *)0x0) && (*(int *)&pTVar8->field_0x8 != *(int *)&pTVar8->field_0x34)) {
      puVar14 = *(undefined1 **)&pTVar8->field_0x40;
      if (*(undefined1 **)&pTVar8->field_0x40 == (undefined1 *)0x0) {
        puVar14 = &pTVar8->field_0x38;
      }
      iVar18 = *(int *)(puVar14 + (ulonglong)(*(int *)&pTVar8->field_0x48 - 1U & param_2) * 4);
      if (iVar18 != -1) {
        lVar15 = *(longlong *)pTVar8;
        do {
          if (*(uint *)((longlong)iVar18 * 0x20 + lVar15) == param_2) {
            if ((iVar18 != -1) &&
               (lVar15 = (longlong)iVar18 * 0x20 + lVar15,
               pFVar19 = (FPCGStackContext *)(lVar15 + 8), lVar15 != 0)) goto LAB_149cc721e;
            break;
          }
          iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 + lVar15);
        } while (iVar18 != -1);
      }
    }
    pFVar19 = pFVar16;
LAB_149cc721e:
    pTVar12 = TMapBase<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>_>
              ::Find((TMapBase<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>_>
                      *)&(this->Cache).TopGraphToStackContextMap,param_1);
    if ((pTVar12 !=
         (TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
          *)0x0) && (*(int *)&pTVar12->field_0x8 != *(int *)&pTVar12->field_0x34)) {
      puVar14 = *(undefined1 **)&pTVar12->field_0x40;
      if (*(undefined1 **)&pTVar12->field_0x40 == (undefined1 *)0x0) {
        puVar14 = &pTVar12->field_0x38;
      }
      iVar18 = *(int *)(puVar14 + (ulonglong)(*(int *)&pTVar12->field_0x48 - 1U & param_2) * 4);
      if (iVar18 != -1) {
        lVar15 = *(longlong *)pTVar12;
        do {
          if (*(uint *)(lVar15 + (longlong)iVar18 * 0x30) == param_2) {
            if ((iVar18 != -1) && (lVar15 = (longlong)iVar18 * 0x30 + lVar15, lVar15 != 0)) {
              pFVar16 = (FPCGStackContext *)(lVar15 + 8);
            }
            break;
          }
          iVar18 = *(int *)(lVar15 + 0x28 + (longlong)iVar18 * 0x30);
        } while (iVar18 != -1);
      }
    }
    if (((pFVar19 == (FPCGStackContext *)0x0) != (pFVar16 == (FPCGStackContext *)0x0)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8202795070391321855>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                           ,0x4ff,"!Tasks == !StackContext"), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar13;
    }
    if ((pFVar19 == (FPCGStackContext *)0x0) || (pFVar16 == (FPCGStackContext *)0x0))
    goto LAB_149cc733e;
    TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>::operator=
              (&local_40,(TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)pFVar19);
  }
  else {
    Compile(this,param_1);
    AcquireSRWLockShared((PSRWLOCK)this);
    pTVar13 = TMapBase<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
                      *)&(this->Cache).GraphToTaskMap,param_1);
    if (pTVar13 == (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_149cc733e;
    TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>::operator=(&local_40,pTVar13);
    pFVar16 = TMapBase<UPCGGraph_*,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,FPCGStackContext,0>_>
              ::FindChecked((TMapBase<UPCGGraph_*,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,FPCGStackContext,0>_>
                             *)&(this->Cache).GraphToStackContextMap,param_1);
  }
  FPCGStackContext::operator=(param_3,pFVar16);
LAB_149cc733e:
  ReleaseSRWLockShared((PSRWLOCK)this);
  (__return_storage_ptr__->AllocatorInstance).Data = local_40.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_40.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_40.ArrayMax;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  DestructItems<FPCGGraphTask,int>((FPCGGraphTask *)0x0,0);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
LAB_149cc70c8:
  if (*(int *)(lVar15 + 0x10) != iVar18) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res18);
  }
  if (&this_00[-1].ObjectID.AssetPath.AssetName == (FName *)((longlong)iVar18 * 0x148 + lVar4)) {
    FPCGStackContext::operator=(param_3,pFVar16);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar18 = *(int *)(lVar15 + 0x10);
    pFVar5 = (FPCGGraphTask *)*plVar1;
    __return_storage_ptr__->ArrayNum = iVar18;
    if (iVar18 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x148,8,iVar18,0,&__return_storage_ptr__->AllocatorInstance,iVar18,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FPCGGraphTask,FPCGGraphTask,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,pFVar5,iVar18);
    return __return_storage_ptr__;
  }
  if (this_00[-1].ObjectID.SubPathString.Data.ArrayNum == 3) {
    pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar9 == (UObject *)0x0) {
LAB_149cc712d:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodePtr.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphTask.cpp"
                         ,0x6c,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar13;
      }
    }
    else {
      pUVar10 = Z_Construct_UClass_UPCGNode_NoRegister();
      iVar2 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar10->_padding_)) goto LAB_149cc712d;
    }
    FVar11 = (FName)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (FVar11 == (FName)0x0) {
LAB_149cc7186:
      FVar11 = FVar17;
    }
    else {
      pUVar10 = Z_Construct_UClass_UPCGNode_NoRegister();
      iVar2 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)((longlong)FVar11 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar11 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar10->_padding_)) goto LAB_149cc7186;
    }
    this_00[3].ObjectID.AssetPath.PackageName = FVar11;
  }
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_00[8].ObjectID;
  goto LAB_149cc70c8;
}

// GetComputeGraph @ 149cc73b0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGComputeGraph * __thiscall
FPCGGraphCompiler::GetComputeGraph
          (FPCGGraphCompiler *this,UPCGGraph *param_1,uint param_2,uint param_3)

{
  UPCGGraphCompilationData *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UPCGComputeGraph *pUVar5;
  uint *puVar6;
  undefined1 *puVar7;
  
  if ((param_1 != (UPCGGraph *)0x0) &&
     (pUVar1 = (param_1->CookedCompilationData).field0_0x0.DebugPtr,
     pUVar1 != (UPCGGraphCompilationData *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if (*(int *)&(pUVar1->ComputeGraphs).field_0x8 != *(int *)&(pUVar1->ComputeGraphs).field_0x34) {
      puVar7 = *(undefined1 **)&(pUVar1->ComputeGraphs).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pUVar1->ComputeGraphs).field_0x38;
      }
      uVar4 = *(uint *)(puVar7 + (ulonglong)
                                 (*(int *)&(pUVar1->ComputeGraphs).field_0x48 - 1U & param_2) * 4);
      if (uVar4 != 0xffffffff) {
        do {
          puVar6 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&pUVar1->ComputeGraphs);
          if (*puVar6 == param_2) {
            pUVar5 = (UPCGComputeGraph *)(puVar6 + 2);
            if (puVar6 == (uint *)0x0) {
              pUVar5 = (UPCGComputeGraph *)0x0;
            }
            if (pUVar5 == (UPCGComputeGraph *)0x0) {
              return (UPCGComputeGraph *)0x0;
            }
            if ((int)param_3 < 0) {
              return (UPCGComputeGraph *)0x0;
            }
            if ((int)pUVar5->_padding_ <= (int)param_3) {
              return (UPCGComputeGraph *)0x0;
            }
            if (((int)param_3 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              pUVar5 = (UPCGComputeGraph *)(*pcVar2)();
              return pUVar5;
            }
            return *(UPCGComputeGraph **)(pUVar5->_padding_ + (longlong)(int)param_3 * 8);
          }
          uVar4 = puVar6[6];
        } while (uVar4 != 0xffffffff);
      }
    }
  }
  return (UPCGComputeGraph *)0x0;
}

// GetPrecompiledTasks @ 149ccb560

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> * __thiscall
FPCGGraphCompiler::GetPrecompiledTasks
          (FPCGGraphCompiler *this,
          TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPCGGraph *param_1,uint param_2,FPCGStackContext *param_3,bool param_4)

{
  FPCGGraphTask *pFVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
  *pTVar8;
  uint *puVar9;
  FPCGStackContext *pFVar10;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 *puVar12;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *pTVar13;
  FPCGStackContext *pFVar14;
  int iVar15;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FPCGGraphTask *local_78;
  int local_70;
  FPCGStackContext local_68;
  FPCGStackContext local_48;
  
  pTVar13 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)0x0;
  AcquireSRWLockShared((PSRWLOCK)this);
  if (param_4) {
    pTVar7 = TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
             ::Find((TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                     *)&(this->Cache).TopGraphToTaskMap,param_1);
    if (pTVar7 != (TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
                   *)0x0) {
      if (*(int *)&pTVar7->field_0x8 != *(int *)&pTVar7->field_0x34) {
        puVar12 = *(undefined1 **)&pTVar7->field_0x40;
        if (*(undefined1 **)&pTVar7->field_0x40 == (undefined1 *)0x0) {
          puVar12 = &pTVar7->field_0x38;
        }
        iVar15 = *(int *)(puVar12 + (ulonglong)(*(int *)&pTVar7->field_0x48 - 1U & param_2) * 4);
        if (iVar15 != -1) {
          do {
            pTVar11 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)
                      ((longlong)iVar15 * 0x20 + *(longlong *)pTVar7);
            if (*(uint *)&(pTVar11->AllocatorInstance).Data == param_2) {
              if (iVar15 != -1) goto LAB_149ccb613;
              break;
            }
            iVar15 = pTVar11[1].ArrayNum;
          } while (iVar15 != -1);
        }
      }
      pTVar11 = pTVar13;
LAB_149ccb613:
      pTVar13 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)&pTVar11->ArrayNum;
      if (pTVar11 == (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar13 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)0x0;
      }
    }
    pTVar8 = TMapBase<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>_>
             ::Find((TMapBase<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>_>
                     *)&(this->Cache).TopGraphToStackContextMap,param_1);
    if (pTVar8 == (TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
                   *)0x0) {
      pFVar14 = (FPCGStackContext *)0x0;
LAB_149ccb6e1:
      local_68._28_4_ = 0;
      local_68.GraphExecutionTaskId = 0xffffffffffffffff;
      local_68.Stacks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Stacks.ArrayNum = 0;
      local_68.Stacks.ArrayMax = 0;
      local_68.CurrentStackIndex = -1;
      FPCGStackContext::operator=(param_3,&local_68);
      FVar4.Data = local_68.Stacks.AllocatorInstance.Data;
      DestructItems<FPCGStack,int>
                ((FPCGStack *)local_68.Stacks.AllocatorInstance.Data,local_68.Stacks.ArrayNum);
      if ((FPCGStack *)FVar4.Data != (FPCGStack *)0x0) {
        FMemory::Free(FVar4.Data);
      }
    }
    else {
      if (*(int *)&pTVar8->field_0x8 != *(int *)&pTVar8->field_0x34) {
        puVar12 = *(undefined1 **)&pTVar8->field_0x40;
        if (*(undefined1 **)&pTVar8->field_0x40 == (undefined1 *)0x0) {
          puVar12 = &pTVar8->field_0x38;
        }
        uVar6 = *(uint *)(puVar12 + (ulonglong)(*(int *)&pTVar8->field_0x48 - 1U & param_2) * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar9 = (uint *)((longlong)(int)uVar6 * 0x30 + *(longlong *)pTVar8);
            if (*puVar9 == param_2) goto LAB_149ccb68f;
            uVar6 = puVar9[10];
          } while (uVar6 != 0xffffffff);
        }
      }
      puVar9 = (uint *)0x0;
LAB_149ccb68f:
      pFVar14 = (FPCGStackContext *)(puVar9 + 2);
      if (puVar9 == (uint *)0x0) {
        pFVar14 = (FPCGStackContext *)0x0;
      }
      if (pFVar14 == (FPCGStackContext *)0x0) goto LAB_149ccb6e1;
      pFVar10 = FPCGStackContext::FPCGStackContext(&local_48,pFVar14);
      FPCGStackContext::operator=(param_3,pFVar10);
      DestructItems<FPCGStack,int>
                ((FPCGStack *)local_48.Stacks.AllocatorInstance.Data,local_48.Stacks.ArrayNum);
      if ((FPCGStack *)local_48.Stacks.AllocatorInstance.Data != (FPCGStack *)0x0) {
        FMemory::Free(local_48.Stacks.AllocatorInstance.Data);
      }
    }
    if (((pTVar13 == (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)0x0) !=
         (pFVar14 == (FPCGStackContext *)0x0)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8202795070391321040>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                           ,0x1d0,"!ExistingTasks == !ExistingStackContext"), bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar13 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar13;
    }
  }
  else {
    pTVar13 = TMapBase<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
                      *)&(this->Cache).GraphToTaskMap,param_1);
  }
  if (pTVar13 == (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    bVar3 = false;
    bVar5 = true;
    local_78 = (FPCGGraphTask *)0x0;
    local_70 = 0;
  }
  else {
    iVar15 = pTVar13->ArrayNum;
    bVar3 = true;
    bVar5 = false;
    pFVar1 = (FPCGGraphTask *)(pTVar13->AllocatorInstance).Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = iVar15;
    if (iVar15 == 0) {
      local_7c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x148,8,iVar15,0,&local_88,iVar15,&local_7c);
      ConstructItems<FPCGGraphTask,FPCGGraphTask,int>(local_88.Data,pFVar1,iVar15);
    }
    iVar15 = local_80;
    FVar4.Data = local_88.Data;
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = local_80;
    if (local_80 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x148,8,local_80,0,&__return_storage_ptr__->AllocatorInstance,local_80,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<FPCGGraphTask,FPCGGraphTask,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,(FPCGGraphTask *)FVar4.Data,iVar15
                );
      goto LAB_149ccb850;
    }
  }
  __return_storage_ptr__->ArrayMax = 0;
LAB_149ccb850:
  if ((bVar5) &&
     (DestructItems<FPCGGraphTask,int>(local_78,local_70), local_78 != (FPCGGraphTask *)0x0)) {
    FMemory::Free(local_78);
  }
  if ((bVar3) &&
     (DestructItems<FPCGGraphTask,int>((FPCGGraphTask *)local_88.Data,local_80),
     (FPCGGraphTask *)local_88.Data != (FPCGGraphTask *)0x0)) {
    FMemory::Free(local_88.Data);
  }
  ReleaseSRWLockShared((PSRWLOCK)this);
  return __return_storage_ptr__;
}

// GetSharedGatherElement @ 149ccc000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<IPCGElement,1> * __thiscall
FPCGGraphCompiler::GetSharedGatherElement
          (FPCGGraphCompiler *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> FStack_20;
  
  SRWLock = &this->SharedGatherElementLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar4 = &this->SharedGatherElement;
  if (pTVar4->Object != (IPCGElement *)0x0) {
    __return_storage_ptr__->Object = pTVar4->Object;
    pTVar3 = (this->SharedGatherElement).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return __return_storage_ptr__;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (pTVar4->Object == (IPCGElement *)0x0) {
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      local_28 = ___xmm_00000000000000000000000000000010;
      pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5 = pTVar3 + 1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFPCGGatherElement___00_SharedPointerInternals__6B_;
      pTVar3[1]._padding_ = (longlong)&___7FPCGGatherElement__6B_;
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
          return pTVar4;
        }
      }
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      FStack_20.ReferenceController = pTVar3;
      local_28 = pTVar5;
    }
    if (pTVar4 != (TSharedPtr<IPCGElement,1> *)&local_28) {
      pTVar4->Object = (IPCGElement *)pTVar5;
      local_28 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SharedGatherElement).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  __return_storage_ptr__->Object = pTVar4->Object;
  pTVar3 = (this->SharedGatherElement).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return __return_storage_ptr__;
}

// GetSharedTrivialElement @ 149ccc1a0

TSharedPtr<IPCGElement,1> * __thiscall
FPCGGraphCompiler::GetSharedTrivialElement
          (FPCGGraphCompiler *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  FPlatformRWLock *SRWLock;
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FPCGTrivialElement,1> *pTVar2;
  TSharedPtr<IPCGElement,1> *pTVar3;
  FPCGTrivialElement *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FPCGTrivialElement,1> local_18;
  
  SRWLock = &this->SharedTrivialElementLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar3 = &this->SharedTrivialElement;
  if (pTVar3->Object != (IPCGElement *)0x0) {
    __return_storage_ptr__->Object = pTVar3->Object;
    pTVar1 = (this->SharedTrivialElement).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return __return_storage_ptr__;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (pTVar3->Object == (IPCGElement *)0x0) {
    pTVar2 = MakeShared<FPCGTrivialElement,1>(&local_18);
    local_20.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
    local_28 = pTVar2->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar3 != (TSharedPtr<IPCGElement,1> *)&local_28) {
      pTVar3->Object = (IPCGElement *)local_28;
      local_28 = (FPCGTrivialElement *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SharedTrivialElement).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  __return_storage_ptr__->Object = pTVar3->Object;
  pTVar1 = (this->SharedTrivialElement).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return __return_storage_ptr__;
}

// GetSharedTrivialPostGraphElement @ 149ccc2c0

TSharedPtr<IPCGElement,1> * __thiscall
FPCGGraphCompiler::GetSharedTrivialPostGraphElement
          (FPCGGraphCompiler *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  FPlatformRWLock *SRWLock;
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FPCGTrivialElement,1> *pTVar2;
  TSharedPtr<IPCGElement,1> *pTVar3;
  FPCGTrivialElement *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FPCGTrivialElement,1> local_18;
  
  SRWLock = &this->SharedTrivialPostGraphElementLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar3 = &this->SharedTrivialPostGraphElement;
  if (pTVar3->Object != (IPCGElement *)0x0) {
    __return_storage_ptr__->Object = pTVar3->Object;
    pTVar1 = (this->SharedTrivialPostGraphElement).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return __return_storage_ptr__;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (pTVar3->Object == (IPCGElement *)0x0) {
    pTVar2 = MakeShared<FPCGTrivialElement,1>(&local_18);
    local_20.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
    local_28 = pTVar2->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar3 != (TSharedPtr<IPCGElement,1> *)&local_28) {
      pTVar3->Object = (IPCGElement *)local_28;
      local_28 = (FPCGTrivialElement *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SharedTrivialPostGraphElement).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  __return_storage_ptr__->Object = pTVar3->Object;
  pTVar1 = (this->SharedTrivialPostGraphElement).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return __return_storage_ptr__;
}

// OffsetNodeIds @ 149ccdd50

void __cdecl
FPCGGraphCompiler::OffsetNodeIds
          (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_1,ulong64 param_2,
          ulong64 param_3)

{
  ulong64 *puVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  longlong *plVar5;
  ulong64 *puVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x148;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar9) break;
    *(ulong64 *)(pFVar8 + 0x48) = *(longlong *)(pFVar8 + 0x48) + param_2;
    uVar4 = param_3;
    if (*(longlong *)(pFVar8 + 0x58) != -1) {
      uVar4 = *(longlong *)(pFVar8 + 0x58) + param_2;
    }
    *(ulong64 *)(pFVar8 + 0x58) = uVar4;
    iVar3 = *(int *)(pFVar8 + 8);
    plVar5 = *(longlong **)pFVar8;
    plVar7 = plVar5 + (longlong)iVar3 * 0x10;
    while( true ) {
      if (*(int *)(pFVar8 + 8) != iVar3) {
        `TCheckedPointerIterator<FPCGGraphTaskInput,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (plVar5 == plVar7) break;
      *plVar5 = *plVar5 + param_2;
      plVar5 = plVar5 + 0x10;
    }
    puVar6 = *(ulong64 **)(pFVar8 + 0x60);
    iVar3 = *(int *)(pFVar8 + 0x68);
    puVar1 = puVar6 + iVar3;
    while( true ) {
      if (*(int *)(pFVar8 + 0x68) != iVar3) {
        `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar6 == puVar1) break;
      if (*puVar6 != 0xffffffffffffffff) {
        uVar4 = PCGPinIdHelpers::OffsetNodeIdInPinId(*puVar6,param_2);
        *puVar6 = uVar4;
      }
      puVar6 = puVar6 + 1;
    }
    pFVar8 = pFVar8 + 0x148;
  }
  return;
}

// PostCullStackCleanup @ 149cce850

void __cdecl
FPCGGraphCompiler::PostCullStackCleanup
          (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_1,FPCGStackContext *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  ForAnyElementType local_68;
  int local_60 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  
  iVar5 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar12 = pFVar9 + (longlong)iVar5 * 0x148;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar12) break;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&local_58,(int *)(pFVar9 + 0x70));
    pFVar9 = pFVar9 + 0x148;
  }
  uVar8 = (param_2->Stacks).ArrayNum;
  if (local_58.ArrayNum < (int)uVar8) {
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60[0] = 0;
    local_60[1] = 0;
    if ((int)uVar8 < 1) {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
    }
    else {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar8,&local_68,local_60,local_60 + 1);
      memset(local_68.Data + (longlong)iVar5 * 4,0,(longlong)(int)uVar8 << 2);
    }
    uVar11 = 1;
    uVar8 = (param_2->Stacks).ArrayNum - 1;
    iVar5 = local_60[0];
    if (-1 < (int)uVar8) {
      lVar14 = (longlong)(int)uVar8;
      lVar10 = lVar14 * 0x18;
      do {
        for (FVar7.Data = local_58.AllocatorInstance.Data; local_res20 = lVar10,
            FVar7.Data != local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 4;
            FVar7.Data = FVar7.Data + 4) {
          if (*(uint *)FVar7.Data == uVar8) goto LAB_149ccea6f;
        }
        uVar13 = ~uVar8 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar8 < (param_2->Stacks).ArrayNum) {
          uVar6 = uVar13;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (param_2->Stacks).AllocatorInstance.Data + lVar10;
        DestructItems<FPCGStackFrame,int>(*(FPCGStackFrame **)(pFVar9 + 8),*(int *)(pFVar9 + 0x10));
        if (*(void **)(pFVar9 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar9 + 8));
        }
        iVar5 = (param_2->Stacks).ArrayNum + ~uVar8;
        if (iVar5 != 0) {
          memmove(pFVar9,pFVar9 + 0x18,(longlong)iVar5 * 0x18);
        }
        piVar1 = &(param_2->Stacks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&(param_2->Stacks).AllocatorInstance,(param_2->Stacks).ArrayNum,
                   &(param_2->Stacks).ArrayMax);
        uVar6 = 0;
        if ((int)uVar8 < local_60[0]) {
          uVar6 = uVar13;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)(local_68.Data + lVar14 * 4) = 1;
        iVar5 = local_60[0];
LAB_149ccea6f:
        lVar10 = local_res20 + -0x18;
        lVar14 = lVar14 + -1;
        uVar8 = uVar8 - 1;
        local_res20 = lVar10;
      } while (-1 < (int)uVar8);
    }
    lVar10 = 4;
    if (1 < iVar5) {
      do {
        uVar8 = 0;
        if ((int)(uVar11 - 1) < iVar5) {
          uVar8 = -uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar5 = local_60[0], bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar2 = *(int *)(local_68.Data + lVar10 + -4);
        uVar8 = 0;
        if ((int)uVar11 < iVar5) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar11 = uVar11 + 1;
        *(int *)(local_68.Data + lVar10) = *(int *)(local_68.Data + lVar10) + iVar2;
        lVar10 = lVar10 + 4;
        iVar5 = local_60[0];
      } while ((int)uVar11 < local_60[0]);
    }
    iVar2 = param_1->ArrayNum;
    pFVar9 = (param_1->AllocatorInstance).Data;
    pFVar12 = pFVar9 + (longlong)iVar2 * 0x148;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
        iVar5 = local_60[0];
      }
      if (pFVar9 == pFVar12) break;
      uVar8 = *(uint *)(pFVar9 + 0x70);
      if (((int)uVar8 < 0) || (iVar5 <= (int)uVar8)) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8202795070391321678>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                           ,0x44e,"RemovedCounts.IsValidIndex(Task.StackIndex)");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = pFVar9 + 0x148;
        iVar5 = local_60[0];
      }
      else {
        uVar11 = 0;
        if ((int)uVar8 < iVar5) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(int *)(pFVar9 + 0x70) =
             *(int *)(pFVar9 + 0x70) - *(int *)(local_68.Data + (longlong)(int)uVar8 * 4);
        pFVar9 = pFVar9 + 0x148;
        iVar5 = local_60[0];
      }
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// ResolveGridSizes @ 149cd9080

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl
FPCGGraphCompiler::ResolveGridSizes
          (EPCGHiGenGrid param_1,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_2,
          FPCGStackContext *param_3,EPCGHiGenGrid param_4,
          TArray<EPCGHiGenGrid,TSizedDefaultAllocator<32>_> *param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId486,"FPCGGraphCompiler::ResolveGridSizes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
               ,0x1e6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId486);
  }
  if (param_2->ArrayNum != 0) {
    if ((param_5->ArrayNum == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InOutTaskGenerationGrid.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                           ,0x1ec,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_5->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(EPCGHiGenGrid *)(param_5->AllocatorInstance).Data = param_1;
    uVar6 = 1;
    iVar4 = param_2->ArrayNum;
    if (1 < iVar4) {
      lVar5 = 0x148;
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar4) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        CalculateGridRecursive
                  (*(ulong64 *)((param_2->AllocatorInstance).Data + lVar5 + 0x48),param_4,param_3,
                   param_2,param_5);
        iVar4 = param_2->ArrayNum;
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x148;
      } while ((int)uVar6 < iVar4);
    }
  }
  if (!bVar7) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// VisitTasksInExecutionOrder @ 149ce2be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPCGGraphCompiler::VisitTasksInExecutionOrder
          (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_1,
          TMap<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
          *param_2,TFunction<bool___cdecl(unsigned___int64)> *param_3)

{
  int iVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong *puVar18;
  FScriptContainerElement *pFVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  int iVar22;
  undefined8 *puVar23;
  uint *puVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_198 [32];
  ForAnyElementType local_148;
  int local_140;
  int iStack_13c;
  undefined1 local_138;
  undefined1 local_137 [7];
  ulonglong local_130;
  ulonglong local_128;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *local_120;
  uint local_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_110;
  undefined4 local_108;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  int local_f4;
  ulong64 local_f0;
  ulong64 local_e8;
  FScriptContainerElement *local_e0;
  TMap<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
  *local_d8;
  TFunction<bool___cdecl(unsigned___int64)> *local_d0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar15 = 0;
  uVar16 = param_1->ArrayNum;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  iStack_13c = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_120 = param_1;
  local_d8 = param_2;
  local_d0 = param_3;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar16,&local_148,0,&iStack_13c);
  }
  uVar16 = param_1->ArrayNum;
  if (uVar16 <= (uint)(local_98._8_4_ - local_64)) goto LAB_149ce2ea5;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar16);
  if (uVar16 < 4) {
    uVar16 = 1;
  }
  else {
    uVar14 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_f8 = (undefined4)lVar11;
    uVar16 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar16 <= (int)local_50)) goto LAB_149ce2ea5;
  local_50 = uVar16;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 != 0) {
    uVar17 = uVar16;
    if (uVar16 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar17 = 0;
        goto LAB_149ce2d19;
      }
    }
    else {
LAB_149ce2d19:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar17,4);
    }
    if (0 < (int)uVar16) {
      uVar21 = (ulonglong)uVar16;
      uVar14 = uVar15;
      do {
        FVar13.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar7 = uVar14 & (longlong)(int)uVar16 - 1U;
        uVar14 = uVar14 + 1;
        *(undefined4 *)((longlong)FVar13.Data + uVar7 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_118 = 0;
    uStack_114 = 1;
    uStack_104 = 0;
    uStack_100 = 0;
    if (local_70 != 0) {
      puVar24 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar24 = local_78;
      }
      uVar16 = *puVar24;
      uVar14 = uVar15;
      while (uVar16 == 0) {
        uStack_100 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_100;
        iVar10 = (int)uVar15;
        local_118 = iVar10 + 1;
        uVar15 = (ulonglong)local_118;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_118)
        goto LAB_149ce2e0e;
        uVar16 = puVar24[(longlong)iVar10 + 1];
      }
      uStack_114 = -uVar16 & uVar16;
      uVar15 = (ulonglong)uStack_114 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_f4 = (int)lVar11;
      uStack_104 = local_f4 + -1 + uStack_100;
      uVar15 = (ulonglong)uStack_104;
      if ((int)local_70 < (int)uStack_104) {
LAB_149ce2e0e:
        uVar15 = (ulonglong)local_70;
        uStack_104 = local_70;
      }
    }
    local_108 = 0xffffffff;
    local_c0._padding_ = CONCAT44(uStack_114,local_118);
    local_c0.CurrentBitIndex = uStack_104;
    local_c0.UnvisitedBitMask = 0xffffffff;
    local_c0._28_4_ = uStack_fc;
    local_c0.BaseBitIndex = uStack_100;
    local_c8 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               local_98;
    local_c0.Array = pTStack_110;
    if ((int)uVar15 < (int)local_70) {
      do {
        puVar23 = (undefined8 *)((longlong)(int)uVar15 * 0x10 + *(longlong *)&local_c8->Elements);
        uVar16 = (int)((ulonglong)*puVar23 >> 0x20) * 0x17 + (int)*puVar23 & local_50 - 1;
        *(uint *)((longlong)puVar23 + 0xc) = uVar16;
        FVar13.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(puVar23 + 1) = *(undefined4 *)((longlong)FVar13.Data + uVar14 * 4);
        *(int *)((longlong)FVar13.Data + uVar14 * 4) = (int)uVar15;
        local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
        uVar15 = (ulonglong)(uint)local_c0.CurrentBitIndex;
      } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
    }
  }
LAB_149ce2ea5:
  uVar15 = (ulonglong)(uint)param_1->ArrayNum;
  local_130 = 0;
  if (param_1->ArrayNum != 0) {
    do {
      uVar17 = (uint)local_130;
      uVar16 = 0;
      if ((int)uVar17 < (int)uVar15) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x148 + 8) == 0) {
        if (((local_148.Data <= (FScriptContainerElement *)&local_130) &&
            ((FScriptContainerElement *)&local_130 < local_148.Data + (longlong)iStack_13c * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (local_140 == iStack_13c) {
          local_140 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_148,&iStack_13c);
        }
        lVar11 = (longlong)local_140;
        local_140 = local_140 + 1;
        *(ulonglong *)(local_148.Data + lVar11 * 8) = local_130;
      }
      else {
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64_const_&>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_98,&local_f0,(bool *)&local_130);
      }
      uVar15 = (ulonglong)param_1->ArrayNum;
      local_130 = local_130 + 1;
    } while (local_130 < uVar15);
  }
  do {
    if (local_140 == 0) {
      if (local_98._8_4_ == local_64) {
        bVar4 = true;
        goto LAB_149ce3445;
      }
LAB_149ce302d:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    else if (local_140 < 1) goto LAB_149ce302d;
    iVar10 = local_140 + -1;
    uVar2 = *(ulong64 *)(local_148.Data + (longlong)iVar10 * 8);
    iVar22 = (local_140 - iVar10) + -1;
    if (iVar22 != 0) {
      memmove(local_148.Data + (longlong)iVar10 * 8,local_148.Data + (longlong)iVar10 * 8 + 8,
              (longlong)iVar22 << 3);
    }
    local_140 = local_140 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&local_148,local_140,&iStack_13c);
    local_e8 = uVar2;
    UE::Core::Private::Function::CheckCallable(*(void **)param_3);
    pcVar3 = *(code **)param_3;
    plVar12 = *(longlong **)&param_3->field_0x28;
    if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
      plVar12 = (longlong *)&param_3->field_0x10;
    }
    uVar8 = (**(code **)(*plVar12 + 8))();
    cVar6 = (*pcVar3)(uVar8,&local_e8);
    if (cVar6 == '\0') {
      bVar4 = false;
LAB_149ce3445:
      local_50 = 0;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data);
      }
      return bVar4;
    }
    pTVar9 = TMapBase<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                     *)param_2,uVar2);
    if (pTVar9 != (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar25 = (pTVar9->AllocatorInstance).Data;
      iVar10 = pTVar9->ArrayNum;
      local_e0 = pFVar25 + (longlong)iVar10 * 8;
      while( true ) {
        pFVar19 = local_e0;
        if (pTVar9->ArrayNum != iVar10) {
          local_138 = 0;
          `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_138);
        }
        param_2 = local_d8;
        param_3 = local_d0;
        if (pFVar25 == pFVar19) break;
        local_128 = *(ulonglong *)pFVar25;
        for (FVar13.Data = local_148.Data; FVar13.Data != local_148.Data + (longlong)local_140 * 8;
            FVar13.Data = FVar13.Data + 8) {
          if (*(ulonglong *)FVar13.Data == local_128) goto LAB_149ce3429;
        }
        if (local_98._8_4_ != local_64) {
          FVar13.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar13.Data = local_58.Data;
          }
          for (iVar22 = *(int *)((longlong)FVar13.Data +
                                ((local_128 >> 0x20) * 0x17 + local_128 & (ulonglong)(local_50 - 1))
                                * 4); iVar22 != -1;
              iVar22 = *(int *)(local_98._0_8_ + 8 + (longlong)iVar22 * 0x10)) {
            if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar22 * 0x10) == local_128)
            goto LAB_149ce31e4;
          }
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccessorQueued || RemainingTaskIds.Contains(Successor)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                           ,0x411,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
LAB_149ce31e4:
        uVar17 = (uint)local_128;
        uVar16 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar19 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x148;
        iVar22 = *(int *)(pFVar19 + 8);
        puVar18 = *(ulonglong **)pFVar19;
        puVar20 = puVar18 + (longlong)iVar22 * 0x10;
        while( true ) {
          if (*(int *)(pFVar19 + 8) != iVar22) {
            local_137[0] = 0;
            `TCheckedPointerIterator<FPCGGraphTaskInput_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_137);
          }
          if (puVar18 == puVar20) break;
          param_1 = local_120;
          if (local_148.Data != local_148.Data + (longlong)local_140 * 8) {
            FVar13.Data = local_148.Data;
            do {
              if (*(ulonglong *)FVar13.Data == *puVar18) goto LAB_149ce3429;
              FVar13.Data = FVar13.Data + 8;
            } while (FVar13.Data != local_148.Data + (longlong)local_140 * 8);
          }
          uVar15 = *puVar18;
          if (local_98._8_4_ != local_64) {
            FVar13.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar13.Data = local_58.Data;
            }
            for (iVar1 = *(int *)((longlong)FVar13.Data +
                                 ((uVar15 >> 0x20) * 0x17 + uVar15 & (ulonglong)(local_50 - 1)) * 4)
                ; iVar1 != -1; iVar1 = *(int *)(local_98._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
              if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar1 * 0x10) == uVar15)
              goto LAB_149ce3429;
            }
          }
          puVar18 = puVar18 + 0x10;
        }
        if (((local_148.Data <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 < local_148.Data + (longlong)iStack_13c * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (local_140 == iStack_13c) {
          local_140 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_148,&iStack_13c);
        }
        lVar11 = (longlong)local_140;
        local_140 = local_140 + 1;
        *(ulonglong *)(local_148.Data + lVar11 * 8) = local_128;
        param_1 = local_120;
        if (local_98._8_4_ == local_64) {
LAB_149ce3429:
          pFVar25 = pFVar25 + 8;
        }
        else {
          FVar13.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar13.Data = local_58.Data;
          }
          iVar22 = *(int *)((longlong)FVar13.Data +
                           (longlong)
                           (int)(local_50 - 1 & (int)(local_128 >> 0x20) * 0x17 + (int)local_128) *
                           4);
          if (iVar22 == -1) goto LAB_149ce3429;
          do {
            if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar22 * 0x10) == local_128) {
              TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
              RemoveByIndex((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                             *)local_98,iVar22);
              param_1 = local_120;
              goto LAB_149ce3429;
            }
            iVar22 = *(int *)(local_98._0_8_ + 8 + (longlong)iVar22 * 0x10);
          } while (iVar22 != -1);
          pFVar25 = pFVar25 + 8;
        }
      }
    }
  } while( true );
}

// operator() @ 150548630

bool __thiscall `FPCGGraphCompiler::CullTasks'::__l23::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8202795070391321475>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8202795070391321475>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

