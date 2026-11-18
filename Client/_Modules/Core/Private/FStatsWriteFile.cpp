// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FinalizeSavingData @ 1419f8090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FStatsWriteFile::FinalizeSavingData(FStatsWriteFile *this,long64 param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined1 auStackY_c8 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [32];
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  plVar2 = &this->_padding_;
  local_70._0_8_ = (FScriptContainerElement *)0x0;
  local_70._8_8_ = 0;
  local_50 = (void *)0x0;
  local_48 = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_30 = (ForElementType<FSetElementId>)0x0;
  local_28 = 0;
  local_78 = (undefined1  [8])param_1;
  TSet<TTuple<unsigned_int,__int64>,TDefaultMapHashableKeyFuncs<unsigned_int,__int64,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,__int64>,TDefaultMapHashableKeyFuncs<unsigned_int,__int64,0>,FDefaultSetAllocator>
               *)local_70,
              (TSet<TTuple<unsigned_int,__int64>,TDefaultMapHashableKeyFuncs<unsigned_int,__int64,0>,FDefaultSetAllocator>
               *)&this->ThreadCycles);
  if (((undefined1 *)*plVar2 <= local_78) &&
     (local_78 < (undefined1 *)*plVar2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x58))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  FStatsFrameInfo::FStatsFrameInfo
            ((FStatsFrameInfo *)(*plVar2 + (longlong)iVar6 * 0x58),(FStatsFrameInfo *)local_78);
  local_28 = 0;
  if (local_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30);
  }
  iVar6 = SUB84(local_70._8_8_,4);
  local_70._8_8_ = local_70._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_70,0,(int *)(local_70 + 0xc));
  }
  uVar4 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar4) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_70 + 0x10),0);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._0_8_);
  }
  return;
}

// SetDataDelegate @ 141a1fb20

void __thiscall FStatsWriteFile::SetDataDelegate(FStatsWriteFile *this,bool param_1)

{
  FStatsThreadState *pFVar1;
  FDelegateHandle FVar2;
  
  pFVar1 = FStatsThreadState::GetLocalState();
  if (param_1) {
    FVar2 = TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
            AddRaw<FStatsWriteFile>
                      ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
                        *)&pFVar1->NewFrameDelegate,(FStatsWriteFile *)&stack0x00000018,
                       (pmf_a5adc73c *)this);
    this->_padding_ = *(longlong *)FVar2.ID;
    return;
  }
  if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&pFVar1->NewFrameDelegate,
               (FDelegateHandle)this->_padding_);
  }
  return;
}

// WriteFrame @ 141a32920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsWriteFile::WriteFrame(FStatsWriteFile *this,long64 param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FName FVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 this_00;
  TMap<unsigned_int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>_>
  *pTVar11;
  bool bVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_StreamFile> FVar15;
  FStatsThreadState *pFVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 local_res20 [8];
  FColor_u_0 local_1c8 [2];
  FName local_1c0;
  undefined8 local_1b8;
  FName local_1b0;
  FName local_1a8;
  TMap<unsigned_int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  int local_168;
  undefined1 local_164 [20];
  long64 local_150;
  TMap<unsigned_int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  longlong local_118;
  long64 *local_110;
  FName local_108 [2];
  FArchiveState local_f8;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  
  iVar18 = 0;
  FVar15 = StatPtr_STAT_StreamFile;
  if (StatPtr_STAT_StreamFile == (FThreadSafeStaticStat<FStat_STAT_StreamFile>)0x0) {
    pFVar14 = ::FName::FName(local_108,"STAT_StreamFile");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_StreamFile>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StreamFile,*pFVar14,
                        L"Stream File","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar15;
  bVar9 = false;
  bVar8 = false;
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  bVar13 = false;
  bVar12 = false;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c0.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_1c0.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1c0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                   ,400);
        bVar9 = true;
        bVar8 = true;
        bVar13 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b0 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar12 = true;
      goto LAB_141a32a96;
    }
  }
  bVar9 = bVar13;
  bVar8 = bVar12;
  bVar12 = false;
  local_1b0 = local_1a8;
LAB_141a32a96:
  local_1b8 = 0;
  local_f8._padding_ = 0;
  local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_f8._40_8_ = 0;
  local_f8.ArSerializingDefaults = 0;
  local_f8.ArPortFlags = 0;
  local_f8.ArMaxSerializeSize = 0;
  local_f8.ArUEVer.FileVersionUE4 = 0;
  local_f8.ArUEVer.FileVersionUE5 = 0;
  local_f8.ArLicenseeUEVer = 0;
  local_f8.ArEngineVer.Major = 0;
  local_f8.ArEngineVer.Minor = 0;
  local_f8.ArEngineVer.Patch = 0;
  local_f8.ArEngineVer._6_2_ = 0;
  local_f8.ArEngineVer.Changelist = 0;
  local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_f8.SerializedProperty = (FProperty *)0x0;
  local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_f8.bCustomVersionsAreReset = false;
  local_f8._129_7_ = 0;
  local_f8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_f8);
  local_68 = 0;
  local_f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_58 = 0;
  local_60 = &this->_padding_;
  FArchiveState::SetIsSaving(&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  local_68 = (longlong)(int)this->_padding_;
  local_f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FStatsWriteStream::WriteCondensedMessages
            ((FStatsWriteStream *)&this->_padding_,(FArchive *)&local_f8,param_1);
  IStatsWriteFile::WaitTask((IStatsWriteFile *)this);
  pFVar16 = FStatsThreadState::GetLocalState();
  uStack_18c = 1;
  local_178 = 0;
  puVar1 = &(pFVar16->Threads).field_0x10;
  iVar3 = *(int *)&(pFVar16->Threads).field_0x28;
  local_198 = &pFVar16->Threads;
  iStack_17c = local_178;
  if (iVar3 != 0) {
    puVar22 = *(uint **)&(pFVar16->Threads).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar19 = *puVar22;
    local_178 = 0;
    iVar18 = 0;
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar18;
      local_178 = local_178 + 0x20;
      iVar18 = iVar18 + 1;
      iStack_17c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_141a32bdd;
      uVar19 = puVar22[lVar17 + 1];
    }
    uStack_18c = -uVar19 & uVar19;
    uVar2 = (ulonglong)uStack_18c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_168 = (int)lVar17;
    iStack_17c = local_168 + -1 + local_178;
    if (iVar3 < iStack_17c) {
      iStack_17c = iVar3;
    }
  }
LAB_141a32bdd:
  iStack_170 = *(int *)&(pFVar16->Threads).field_0x8 - *(int *)&(pFVar16->Threads).field_0x34;
  uVar19 = *(uint *)&(pFVar16->Threads).field_0x28;
  uStack_180 = 0xffffffff;
  uVar23 = uVar19 & 0xffffffe0;
  TStack_140._padding_ = CONCAT44(uStack_18c,iVar18);
  TStack_140.CurrentBitIndex = iStack_17c;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar19 >> 5;
  TStack_140._28_4_ = iStack_17c;
  TStack_140.BaseBitIndex = local_178;
  uStack_120 = CONCAT44(uStack_16c,iStack_170);
  iStack_190 = iVar18;
  local_188 = puVar1;
  iStack_174 = iStack_17c;
  local_164._4_8_ = local_198;
  local_164._12_8_ = pFVar16;
  local_148 = local_198;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = local_164._12_8_;
  uVar10 = local_164._4_8_;
  uVar4 = *(uint *)&(pFVar16->Threads).field_0x28;
  if (uVar19 != uVar4) {
    puVar21 = *(undefined1 **)&(pFVar16->Threads).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar20;
      uVar23 = uVar23 + 0x20;
      iVar20 = iVar20 + 1;
      uVar19 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_141a32cf1;
      uVar19 = *(uint *)(puVar21 + lVar17 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar19 = (int)lVar17 + -1 + uVar23;
    if ((int)uVar4 < (int)uVar19) {
      uVar19 = uVar4;
    }
  }
LAB_141a32cf1:
  while( true ) {
    pTVar11 = local_148;
    if (*(int *)&local_148->field_0x8 - *(int *)&local_148->field_0x34 != (int)uStack_120) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    lVar17 = (longlong)TStack_140.CurrentBitIndex;
    if (((TStack_140.CurrentBitIndex == uVar19) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar11 ==
        (TMap<unsigned_int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>_>
         *)uVar10)) break;
    lVar6 = *(longlong *)pTVar11;
    local_150 = FStatsThreadState::GetFastThreadFrameTimeInternal
                          ((FStatsThreadState *)this_00,param_1,*(int *)(lVar6 + lVar17 * 0x14),
                           Invalid);
    local_110 = &local_150;
    local_118 = lVar6 + lVar17 * 0x14;
    TSet<TTuple<unsigned_int,__int64>,TDefaultMapHashableKeyFuncs<unsigned_int,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,__int64_const_&>_>
              ((TSet<TTuple<unsigned_int,__int64>,TDefaultMapHashableKeyFuncs<unsigned_int,__int64,0>,FDefaultSetAllocator>
                *)&this->ThreadCycles,
               (TPairInitializer<unsigned_int_const_&,__int64_const_&> *)local_164,
               (bool *)&local_118);
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  IStatsWriteFile::SendTask((IStatsWriteFile *)this);
  FArchive::~FArchive((FArchive *)&local_f8);
  FVar5 = local_1b0;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar5,CycleScopeEnd);
  }
  return;
}

