// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 9

// <lambda_invoker_cdecl> @ 143270770

void __cdecl
`BuildPatchServices::FChunkDbChunkSource::CreateRequest'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (bool param_1)

{
  return;
}

// FChunkDbChunkSource @ 14327e2c0

FChunkDbChunkSource * __thiscall
BuildPatchServices::FChunkDbChunkSource::FChunkDbChunkSource
          (FChunkDbChunkSource *this,FChunkDbSourceConfig *param_1,IFileSystem *param_2,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_3,IChunkDataSerialization *param_4,
          IChunkDbChunkSourceStat *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  IFileSystem *pIVar4;
  undefined8 *puVar5;
  char cVar6;
  FOutputDeviceRedirector *this_00;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  void *local_38 [2];
  
  this->_padding_ = (longlong)&___7FChunkDbChunkSource_BuildPatchServices__6B_;
  (this->Configuration).ChunkDbFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configuration).ChunkDbFiles.AllocatorInstance.Data =
       (param_1->ChunkDbFiles).AllocatorInstance.Data;
  (param_1->ChunkDbFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configuration).ChunkDbFiles.ArrayNum = (param_1->ChunkDbFiles).ArrayNum;
  (this->Configuration).ChunkDbFiles.ArrayMax = (param_1->ChunkDbFiles).ArrayMax;
  (param_1->ChunkDbFiles).ArrayNum = 0;
  (param_1->ChunkDbFiles).ArrayMax = 0;
  (this->Configuration).bDeleteChunkDBAfterUse = param_1->bDeleteChunkDBAfterUse;
  this->FileSystem = param_2;
  (this->ChunkDbDataAccesses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkDbDataAccesses).ArrayNum = 0;
  (this->ChunkDbDataAccesses).ArrayMax = 0;
  *(undefined8 *)&this->ChunkDbDataAccessLookup = 0;
  *(undefined8 *)&(this->ChunkDbDataAccessLookup).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkDbDataAccessLookup).field_0x20 = 0;
  this->ChunkDataSerialization = param_4;
  this->ChunkReferenceTracker = (IChunkReferenceTracker *)0x0;
  this->ChunkDbChunkSourceStat = param_5;
  *(undefined4 *)&(this->ChunkDbDataAccessLookup).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkDbDataAccessLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkDbDataAccessLookup).field_0x34 = 0;
  *(undefined4 *)&(this->ChunkDbDataAccessLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChunkDbDataAccessLookup).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkDbDataAccessLookup).field_0x48 = 0;
  *(undefined8 *)&(this->AvailableChunks).Elements = 0;
  *(undefined8 *)&(this->AvailableChunks).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AvailableChunks).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AvailableChunks).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AvailableChunks).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AvailableChunks).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AvailableChunks).Elements.field_0x30 = 0xffffffff;
  (this->AvailableChunks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AvailableChunks).HashSize = 0;
  this->OriginalChunkCount = 0;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId317,"FChunkDbChunkSource_ctor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\ChunkDbChunkSource.cpp"
               ,0x13d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId317);
  }
  this->OriginalChunkCount = param_3->ArrayNum;
  LoadChunkDbFiles(&(this->Configuration).ChunkDbFiles,this->FileSystem,param_3,
                   &this->ChunkDbDataAccesses,&this->ChunkDbDataAccessLookup,&this->AvailableChunks)
  ;
  iVar2 = (this->ChunkDbDataAccesses).ArrayNum;
  pFVar8 = (this->ChunkDbDataAccesses).AllocatorInstance.Data;
  iVar3 = this->OriginalChunkCount;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x40;
  while( true ) {
    if ((this->ChunkDbDataAccesses).ArrayNum != iVar2) {
      `TCheckedPointerIterator<BuildPatchServices::FChunkDbDataAccess,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&param_5);
    }
    if (pFVar8 == pFVar9) break;
    if ((pFVar8[0x3c] == (FScriptContainerElement)0x0) && (iVar3 < *(int *)(pFVar8 + 0x38))) {
      bVar1 = (this->Configuration).bDeleteChunkDBAfterUse;
      pIVar4 = this->FileSystem;
      pFVar8[0x3c] = (FScriptContainerElement)0x1;
      (**(code **)(**(longlong **)(pFVar8 + 0x20) + 0x18))(*(longlong **)(pFVar8 + 0x20),local_38);
      puVar5 = *(undefined8 **)(pFVar8 + 0x20);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)(pFVar8 + 0x20) = 0;
        (**(code **)*puVar5)(puVar5,1);
      }
      if ((bVar1 != false) && (pIVar4 != (IFileSystem *)0x0)) {
        if (*(int *)(pFVar8 + 0x30) == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = *(wchar_t **)(pFVar8 + 0x28);
        }
        cVar6 = (**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,pwVar7);
        if (cVar6 == '\0') {
          this_00 = GetGlobalLogSingleton();
          FOutputDevice::LogfImpl
                    ((FOutputDevice *)this_00,L"Failed to delete chunkdb upon retirement: %s");
        }
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
    pFVar8 = pFVar8 + 0x40;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  DestructItems<FString,int>
            ((FString *)(param_1->ChunkDbFiles).AllocatorInstance.Data,
             (param_1->ChunkDbFiles).ArrayNum);
  pFVar8 = (param_1->ChunkDbFiles).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return this;
}

// operator() @ 1432a6a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001432a6e88) */
/* WARNING: Removing unreachable block (ram,0x0001432a6e9b) */
/* WARNING: Removing unreachable block (ram,0x0001432a6ec2) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`BuildPatchServices::FChunkDbChunkSource::CreateRequest'::__l2::<lambda_2>::operator()
          (void *this,bool param_1)

{
  atomic<unsigned_int> *paVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  atomic<unsigned_int> aVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  FTaskBase *this_00;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStackY_1a8 [32];
  FDestructionSentinel local_168;
  FRecord local_148;
  longlong local_130;
  longlong lStack_128;
  undefined1 local_120 [8];
  ForAnyElementType FStack_118;
  int local_110;
  longlong local_108;
  undefined1 local_100 [32];
  atomic<unsigned___int64> local_e0;
  ulong64 uStack_d8;
  ForElementType<UE::Tasks::Private::FTaskBase_*> local_d0;
  uchar auStack_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined1 local_88 [32];
  atomic<unsigned___int64> local_68;
  ulong64 uStack_60;
  ForElementType<UE::Tasks::Private::FTaskBase_*> local_58;
  uchar auStack_50 [24];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId339,"ChunkDbRead",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\ChunkDbChunkSource.cpp"
               ,0x153);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId339);
  }
  if (param_1) {
    bVar12 = true;
    bVar13 = false;
  }
  else {
    lVar6 = **(longlong **)this;
    plVar7 = *(longlong **)((*(longlong **)this)[1] + 0x20);
    if ((*(byte *)((longlong)plVar7 + 0x29) & 2) == 0) {
      BuildPatchServices::ISpeedRecorder::FRecord::FRecord(&local_148);
      local_148.CyclesStart = BuildPatchServices::FStatsCollector::GetCycles();
      (**(code **)(**(longlong **)((longlong)this + 0x50) + 0x10))
                (*(longlong **)((longlong)this + 0x50),(longlong)this + 8);
      (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(lVar6 + 0x10));
      BuildPatchServices::FChunkHeader::FChunkHeader((FChunkHeader *)local_88);
      local_168.AccessType = *(EAccessType *)((longlong)this + 0x18);
      local_168._4_4_ = *(undefined4 *)((longlong)this + 0x1c);
      local_168.Accessor._0_4_ = *(undefined4 *)((longlong)this + 0x20);
      local_168.Accessor._4_4_ = *(undefined4 *)((longlong)this + 0x24);
      cVar10 = (**(code **)(**(longlong **)((longlong)this + 0x48) + 0x40))
                         (*(longlong **)((longlong)this + 0x48),plVar7,&local_168);
      lVar6 = *(longlong *)(lVar6 + 0x10);
      lVar11 = (**(code **)(*plVar7 + 0x28))(plVar7);
      local_148.Size = lVar11 - lVar6;
      local_148.CyclesEnd = BuildPatchServices::FStatsCollector::GetCycles();
      (**(code **)(**(longlong **)((longlong)this + 0x50) + 0x20))
                (*(longlong **)((longlong)this + 0x50),&local_148);
      if (cVar10 == '\0') {
        local_148.CyclesEnd = BuildPatchServices::FStatsCollector::GetCycles();
        (**(code **)(**(longlong **)((longlong)this + 0x50) + 0x18))
                  (*(longlong **)((longlong)this + 0x50),(longlong)this + 8);
        TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::Execute
                  ((TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
                    *)((longlong)this + 0x30),(FGuid *)((longlong)this + 8),false,true,
                   *(void **)((longlong)this + 0x28));
      }
      else {
        local_130 = *(longlong *)((longlong)this + 8);
        lStack_128 = *(longlong *)((longlong)this + 0x10);
        uVar8 = *(undefined8 *)((longlong)this + 0x50);
        uVar9 = *(undefined8 *)((longlong)this + 0x48);
        local_110 = 0;
        local_120 = (undefined1  [8])0x0;
        FStack_118.Data = (FScriptContainerElement *)0x0;
        TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
                    *)local_120,
                   (TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
                    *)((longlong)this + 0x30));
        local_108 = *(longlong *)((longlong)this + 0x28);
        local_100._16_8_ = local_88._16_8_;
        local_100._24_8_ = local_88._24_8_;
        local_100._0_8_ = local_88._0_8_;
        local_100._8_8_ = local_88._8_8_;
        local_d0 = local_58;
        auStack_c8[0] = auStack_50[0];
        auStack_c8[1] = auStack_50[1];
        auStack_c8[2] = auStack_50[2];
        auStack_c8[3] = auStack_50[3];
        auStack_c8[4] = auStack_50[4];
        auStack_c8[5] = auStack_50[5];
        auStack_c8[6] = auStack_50[6];
        auStack_c8[7] = auStack_50[7];
        local_b8 = *(undefined8 *)((longlong)this + 0x18);
        uStack_b0 = *(undefined8 *)((longlong)this + 0x20);
        local_a0 = (longlong *)0x0;
        local_e0 = local_68;
        uStack_d8 = uStack_60;
        auStack_c8[8] = auStack_50[8];
        auStack_c8[9] = auStack_50[9];
        auStack_c8[10] = auStack_50[10];
        auStack_c8[0xb] = auStack_50[0xb];
        auStack_c8[0xc] = auStack_50[0xc];
        auStack_c8[0xd] = auStack_50[0xd];
        auStack_c8[0xe] = auStack_50[0xe];
        auStack_c8[0xf] = auStack_50[0xf];
        local_a8 = uVar9;
        local_98 = uVar8;
        this_00 = FMemory::Malloc(0x180,0x40);
        if (this_00 == (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x180);
        }
        else {
          UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
          this_00->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<``BuildPatchServices::FChunkDbChunkSource::CreateRequest'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    (this_00,L"ChunkDbDecompressionAndHash",Default,None,None);
          this_00[1]._padding_ = local_130;
          this_00[1]._padding_ = lStack_128;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00[1]._padding_,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_120);
          plVar7 = local_a0;
          this_00[1]._padding_ = local_108;
          this_00[1].RefCount = (atomic<unsigned_int>)local_100._0_4_;
          this_00[1].NumLocks = (atomic<unsigned_int>)local_100._4_4_;
          this_00[1].Pipe = (FPipe *)local_100._8_8_;
          this_00[1].StateChangeEvent = (TEventCount<unsigned_int>)local_100._16_4_;
          this_00[1].ExtendedPriority = local_100[0x14];
          this_00[1].TaskTriggered = (atomic<bool>)local_100[0x15];
          this_00[1]._padding_ = local_100._22_2_;
          this_00[1].ExecutingThreadId = (atomic<unsigned_int>)local_100._24_4_;
          this_00[1]._padding_ = local_100._28_4_;
          this_00[1].TraceId = local_e0;
          *(ulong64 *)this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData =
               uStack_d8;
          this_00[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = local_d0;
          *(undefined8 *)&this_00[1].Prerequisites.Prerequisites.ArrayNum = auStack_c8._0_8_;
          this_00[1].Prerequisites.Mutex = (FMutex)auStack_c8[8];
          this_00[1].Prerequisites.field_0x19 = auStack_c8[9];
          this_00[1].Prerequisites.field_0x1a = auStack_c8[10];
          this_00[1].Prerequisites.field_0x1b = auStack_c8[0xb];
          this_00[1].Prerequisites.field_0x1c = auStack_c8[0xc];
          this_00[1].Prerequisites.field_0x1d = auStack_c8[0xd];
          this_00[1].Prerequisites.field_0x1e = auStack_c8[0xe];
          this_00[1].Prerequisites.field_0x1f = auStack_c8[0xf];
          *(undefined8 *)&this_00[1].LowLevelTask = local_b8;
          *(undefined8 *)&this_00[1].LowLevelTask.field_0x8 = uStack_b0;
          *(undefined8 *)&this_00[1].LowLevelTask.field_0x10 = local_a8;
          local_a0 = (longlong *)0x0;
          *(longlong **)&this_00[1].LowLevelTask.field_0x18 = plVar7;
          *(undefined8 *)&this_00[1].LowLevelTask.field_0x20 = local_98;
          this_00->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<``BuildPatchServices::FChunkDbChunkSource::CreateRequest'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x180);
          LOCK();
          paVar1 = &this_00->RefCount;
          aVar4 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar4 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_00->_padding_)(this_00,1);
          }
        }
        plVar7 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_a0 + 3;
          lVar6 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (((uint)lVar6 & 0x3fffffff) == 1) {
            (**(code **)(*local_a0 + 0x10))(local_a0);
            plVar7[1] = 0;
            plVar7[2] = 0;
            LOCK();
            puVar3 = (ulonglong *)(plVar7 + 3);
            uVar5 = *puVar3;
            *puVar3 = *puVar3 - 0x40000000;
            UNLOCK();
            if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
              (**(code **)*plVar7)(plVar7,1);
            }
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_120,
                   (FWriteAccessScope *)&local_168);
        if ((local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_118.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_118,0,0,0x10)
          ;
          local_110 = 0;
        }
        if (local_168.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)
                     CONCAT44(local_168.Accessor._4_4_,local_168.Accessor._0_4_),&local_168);
        }
        if (FStack_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_118.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_120);
      }
      goto LAB_1432a6ed5;
    }
    bVar12 = false;
    bVar13 = true;
  }
  TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::Execute
            ((TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy> *)
             ((longlong)this + 0x30),(FGuid *)((longlong)this + 8),bVar12,bVar13,
             *(void **)((longlong)this + 0x28));
LAB_1432a6ed5:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateRequest @ 1432cb250

TUniqueFunction<void___cdecl(bool)> * __thiscall
BuildPatchServices::FChunkDbChunkSource::CreateRequest
          (FChunkDbChunkSource *this,TUniqueFunction<void___cdecl(bool)> *__return_storage_ptr__,
          FGuid *param_1,TMemoryView<void> *param_2,void *param_3,
          TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
          *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  IChunkDbChunkSourceStat *pIVar3;
  IChunkDataSerialization *pIVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  FDestructionSentinel local_98;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong64 uStack_60;
  void *local_58;
  undefined1 local_50 [8];
  ForAnyElementType FStack_48;
  int local_40;
  IChunkDataSerialization *local_38;
  IChunkDbChunkSourceStat *local_30;
  
  uVar6 = CityHash64((char *)param_1,0x10);
  iVar5 = TSet<TTuple<FGuid,BuildPatchServices::FChunkAccessLookup>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkAccessLookup,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,BuildPatchServices::FChunkAccessLookup>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkAccessLookup,0>,FDefaultSetAllocator>
                      *)&this->ChunkDbDataAccessLookup,(uint)uVar6,param_1);
  puVar1 = &__return_storage_ptr__->field_0x28;
  if (iVar5 != -1) {
    lVar2 = *(longlong *)&this->ChunkDbDataAccessLookup + (longlong)iVar5 * 0x28;
    lVar7 = lVar2 + 0x10;
    if (lVar2 == 0) {
      lVar7 = 0;
    }
    if (lVar7 != 0) {
      local_78._0_4_ = param_1->A;
      local_78._4_4_ = param_1->B;
      uStack_70._0_4_ = param_1->C;
      uStack_70._4_4_ = param_1->D;
      local_68 = param_2->Data;
      uStack_60 = param_2->Size;
      pIVar3 = this->ChunkDbChunkSourceStat;
      pIVar4 = this->ChunkDataSerialization;
      local_50 = (undefined1  [8])0x0;
      FStack_48.Data = (FScriptContainerElement *)0x0;
      local_58 = param_3;
      local_40 = 0;
      local_80 = lVar7;
      TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
                  *)local_50,param_4);
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)puVar1 = 0;
      local_38 = pIVar4;
      local_30 = pIVar3;
      puVar8 = FMemory::Malloc(0x60,8);
      *(undefined8 **)puVar1 = puVar8;
      *puVar8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`BuildPatchServices::FChunkDbChunkSource::CreateRequest'::`2'::<lambda_2>,1,1>
                 ::_vftable_;
      puVar8[1] = local_80;
      puVar8[2] = local_78;
      puVar8[3] = uStack_70;
      puVar8[4] = local_68;
      puVar8[5] = uStack_60;
      puVar8[6] = local_58;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar8 + 7),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
      puVar8[10] = local_38;
      puVar8[0xb] = local_30;
      if (puVar8 + 1 != (longlong *)0x0) {
        *(code **)__return_storage_ptr__ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`BuildPatchServices::FChunkDbChunkSource::CreateRequest'::__l2::<lambda_2>,void,bool>
             ::Call;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
                 (FWriteAccessScope *)&local_98);
      if ((local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_48.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
        local_40 = 0;
      }
      if (local_98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
      }
      if (FStack_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_50);
      goto LAB_1432cb446;
    }
  }
  TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::Execute
            (param_4,param_1,false,true,param_3);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &___7__TFunction_OwnedObject_P6AX_N_Z_00_0A__Function_Private_Core_UE__6B_;
  *(code **)&__return_storage_ptr__->field_0x18 =
       `BuildPatchServices::FChunkDbChunkSource::CreateRequest'::__l5::<lambda_1>::
       <lambda_invoker_cdecl>;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(bool),void,bool>::Call;
  }
LAB_1432cb446:
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  return __return_storage_ptr__;
}

// GetAvailableChunks @ 1432d34e0

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
BuildPatchServices::FChunkDbChunkSource::GetAvailableChunks(FChunkDbChunkSource *this)

{
  return &this->AvailableChunks;
}

// GetChunkDbSizesAtIndexes @ 1432d37a0

ulong64 __thiscall
BuildPatchServices::FChunkDbChunkSource::GetChunkDbSizesAtIndexes
          (FChunkDbChunkSource *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  ulong64 uVar1;
  
  uVar1 = GetChunkDbSizesAtIndexesInternal
                    (&this->ChunkDbDataAccesses,this->OriginalChunkCount,param_1,param_2);
  return uVar1;
}

// GetChunkUnavailableAt @ 1432d3c90

int __thiscall
BuildPatchServices::FChunkDbChunkSource::GetChunkUnavailableAt
          (FChunkDbChunkSource *this,FGuid *param_1)

{
  return 0x7fffffff;
}

// LoadChunkDbFiles @ 1432dc560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001432dc8b6) */
/* WARNING: Removing unreachable block (ram,0x0001432dc8c4) */
/* WARNING: Removing unreachable block (ram,0x0001432dc8d7) */

void __cdecl
BuildPatchServices::FChunkDbChunkSource::LoadChunkDbFiles
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,IFileSystem *param_2,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_3,
          TArray<BuildPatchServices::FChunkDbDataAccess,TSizedDefaultAllocator<32>_> *param_4,
          TMap<FGuid,BuildPatchServices::FChunkAccessLookup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkAccessLookup,0>_>
          *param_5,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_6)

{
  int iVar1;
  void *_Src;
  FChunkDatabaseHeader *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar7;
  TSet<TTuple<FGuid,BuildPatchServices::FChunkAccessLookup>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkAccessLookup,0>,FDefaultSetAllocator>
  *this_00;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  BOOL BVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  FOutputDeviceRedirector *pFVar17;
  ulong64 uVar18;
  FString *pFVar19;
  int *piVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  FGuid *pFVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FGuid *pFVar26;
  int *piVar27;
  wchar_t *pwVar28;
  FScriptContainerElement *pFVar29;
  bool bVar30;
  undefined1 auStackY_1e8 [32];
  undefined1 local_197;
  undefined1 local_196;
  undefined1 local_195 [5];
  FArchive *local_190;
  undefined1 local_188 [4];
  uint local_184;
  DWORD local_180 [2];
  FChunkDatabaseHeader local_178;
  FArchive *local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  undefined4 local_140;
  FScriptContainerElement local_13c;
  FScriptContainerElement *local_138;
  int local_130 [2];
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_128;
  FChunkDatabaseHeader local_120;
  undefined1 local_100 [8];
  TSet<TTuple<FGuid,BuildPatchServices::FChunkAccessLookup>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkAccessLookup,0>,FDefaultSetAllocator>
  *local_f8;
  TArray<BuildPatchServices::FChunkDbDataAccess,TSizedDefaultAllocator<32>_> *local_f0;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *local_e8;
  FString *local_e0;
  FGuid *local_d8;
  FScriptContainerElement *local_d0;
  FGuid *local_c8;
  FGuid **local_c0;
  void *local_b8 [2];
  void *local_a8 [2];
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> local_98
  ;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  bVar6 = false;
  bVar11 = false;
  local_f8 = (TSet<TTuple<FGuid,BuildPatchServices::FChunkAccessLookup>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkAccessLookup,0>,FDefaultSetAllocator>
              *)param_5;
  local_128 = param_6;
  local_184 = param_1->ArrayNum;
  uVar16 = (ulonglong)(int)local_184;
  pFVar24 = (param_1->AllocatorInstance).Data;
  pFVar29 = pFVar24 + uVar16 * 0x10;
  bVar30 = false;
  local_180[0] = 0;
  local_138 = pFVar29;
  local_f0 = param_4;
  local_e8 = param_3;
  do {
    if (param_1->ArrayNum != (int)uVar16) {
      local_197 = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_197);
    }
    this_00 = local_f8;
    this = local_128;
    if (pFVar24 == pFVar29) {
      if ((bVar11) && (bVar6)) {
        SetThreadErrorMode(local_180[0],(LPDWORD)0x0);
      }
      local_184 = param_4->ArrayNum;
      uVar16 = (ulonglong)(int)local_184;
      pFVar29 = (param_4->AllocatorInstance).Data;
      local_128 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                  (pFVar29 + uVar16 * 0x40);
      pFVar24 = pFVar29 + 0x18;
      while( true ) {
        pTVar7 = local_128;
        if (param_4->ArrayNum != (int)uVar16) {
          local_196 = 0;
          `TCheckedPointerIterator<BuildPatchServices::FChunkDbDataAccess,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_196);
        }
        pTVar8 = local_e8;
        if ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)pFVar29 == pTVar7) break;
        iVar12 = *(int *)pFVar24;
        pFVar23 = *(FGuid **)(pFVar24 + -8);
        pFVar26 = pFVar23 + (longlong)iVar12 * 2;
        while( true ) {
          if (*(int *)pFVar24 != iVar12) {
            local_195[0] = 0;
            `TCheckedPointerIterator<BuildPatchServices::FChunkLocation,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_195);
          }
          if (pFVar23 == pFVar26) break;
          uVar18 = CityHash64((char *)pFVar23,0x10);
          iVar14 = TSet<TTuple<FGuid,BuildPatchServices::FChunkAccessLookup>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkAccessLookup,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FGuid>(this_00,(uint)uVar18,pFVar23);
          if (iVar14 == -1) {
            local_c0 = &local_d8;
            local_d8 = pFVar23;
            local_d0 = pFVar29;
            local_c8 = pFVar23;
            TSet<TTuple<FGuid,BuildPatchServices::FChunkAccessLookup>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkAccessLookup,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FGuid_const_&,BuildPatchServices::FChunkAccessLookup_&&>_>
                      (this_00,(TPairInitializer<FGuid_const_&,BuildPatchServices::FChunkAccessLookup_&&>
                                *)local_100,(bool *)&local_c8);
            if (this != (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0) {
              TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                        (this,(FGuid *)(local_100 + 4),(bool *)pFVar23);
            }
          }
          pFVar23 = pFVar23 + 2;
        }
        pFVar29 = pFVar29 + 0x40;
        uVar16 = (ulonglong)local_184;
        pFVar24 = pFVar24 + 0x40;
        param_4 = local_f0;
      }
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      iVar12 = local_e8->ArrayNum;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      uVar16 = 0;
      if (0 < iVar12) {
        do {
          uVar25 = (uint)uVar16;
          uVar15 = 0;
          if ((int)uVar25 < iVar12) {
            uVar15 = ~uVar25 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar23 = (FGuid *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x10);
          uVar18 = CityHash64((char *)pFVar23,0x10);
          iVar12 = TSet<TTuple<FGuid,BuildPatchServices::FChunkAccessLookup>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkAccessLookup,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FGuid>(this_00,(uint)uVar18,pFVar23);
          if (iVar12 != -1) {
            lVar21 = *(longlong *)&this_00->Elements + (longlong)iVar12 * 0x28;
            uVar16 = lVar21 + 0x10;
            if (lVar21 == 0) {
              uVar16 = 0;
            }
            if (uVar16 != 0) {
              plVar3 = *(longlong **)(*(longlong *)(uVar16 + 8) + 0x20);
              pFVar19 = (FString *)(**(code **)(*plVar3 + 0x18))(plVar3,local_b8);
              iVar14 = (pFVar19->Data).ArrayNum;
              iVar12 = iVar14 + -1;
              if (iVar14 == 0) {
                pwVar28 = L"";
                iVar12 = 0;
              }
              else {
                pwVar28 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
              }
              uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar28);
              iVar12 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FString>(&local_98,uVar15,pFVar19);
              if ((iVar12 == -1) ||
                 (lVar21 = (longlong)iVar12 * 0x20 + local_98.Elements._0_8_, lVar21 == 0)) {
                local_e0 = pFVar19;
                TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<FString_&&>_>
                          (&local_98,(uint)local_130,
                           (TKeyInitializer<FString_&&> *)(ulonglong)uVar15,(bool *)&local_e0);
                lVar21 = (longlong)local_130[0] * 0x20 + local_98.Elements._0_8_;
              }
              *(uint *)(lVar21 + 0x10) = uVar25;
              if (local_b8[0] != (void *)0x0) {
                FMemory::Free(local_b8[0]);
              }
            }
          }
          iVar12 = pTVar8->ArrayNum;
          uVar16 = (ulonglong)(uVar25 + 1);
        } while ((int)(uVar25 + 1) < iVar12);
      }
      iVar12 = param_4->ArrayNum;
      pFVar24 = (param_4->AllocatorInstance).Data;
      pFVar29 = pFVar24 + (longlong)iVar12 * 0x40;
      while( true ) {
        if (param_4->ArrayNum != iVar12) {
          `TCheckedPointerIterator<BuildPatchServices::FChunkDbDataAccess,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_188);
        }
        iVar14 = 0;
        if (pFVar24 == pFVar29) break;
        *(int *)(pFVar24 + 0x38) = pTVar8->ArrayNum;
        pFVar19 = (FString *)
                  (**(code **)(**(longlong **)(pFVar24 + 0x20) + 0x18))
                            (*(longlong **)(pFVar24 + 0x20),local_a8);
        iVar1 = (pFVar19->Data).ArrayNum;
        if (iVar1 == 0) {
          pwVar28 = L"";
        }
        else {
          pwVar28 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
          iVar14 = iVar1 + -1;
        }
        uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar28);
        iVar14 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>(&local_98,uVar15,pFVar19);
        piVar20 = (int *)0x0;
        if (iVar14 != -1) {
          piVar20 = (int *)((longlong)iVar14 * 0x20 + local_98.Elements._0_8_);
        }
        piVar27 = piVar20 + 4;
        if (piVar20 == (int *)0x0) {
          piVar27 = (int *)0x0;
        }
        if (local_a8[0] != (void *)0x0) {
          FMemory::Free(local_a8[0]);
        }
        if (piVar27 != (int *)0x0) {
          *(int *)(pFVar24 + 0x38) = (pTVar8->ArrayNum - *piVar27) + -1;
        }
        pFVar24 = pFVar24 + 0x40;
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return;
    }
    if (*(int *)(pFVar24 + 8) == 0) {
      pwVar28 = L"";
    }
    else {
      pwVar28 = *(wchar_t **)pFVar24;
    }
    (**(code **)((longlong)*param_2 + 0x48))(param_2,&local_190,pwVar28);
    if (local_190 == (FArchive *)0x0) {
      if (!bVar11) {
        bVar11 = true;
        BVar13 = SetThreadErrorMode(1,local_180);
        bVar30 = BVar13 != 0;
        bVar6 = bVar30;
      }
    }
    else {
      FChunkDatabaseHeader::FChunkDatabaseHeader(&local_120);
      BuildPatchServices::operator<<(local_190,&local_120);
      if ((local_190->field_0x29 & 2) == 0) {
        if (local_120.Contents.ArrayNum == 0) {
          pFVar17 = GetGlobalLogSingleton();
          if (*(int *)(pFVar24 + 8) == 0) {
            FOutputDevice::LogfImpl((FOutputDevice *)pFVar17,L"Loaded empty chunkdb %s");
          }
          else {
            FOutputDevice::LogfImpl((FOutputDevice *)pFVar17,L"Loaded empty chunkdb %s");
          }
        }
        else {
          FChunkDatabaseHeader::FChunkDatabaseHeader(&local_178);
          local_158 = local_190;
          local_150.Data = (FScriptContainerElement *)0x0;
          local_148 = 0;
          local_140 = 0;
          local_13c = (FScriptContainerElement)0x0;
          local_190 = (FArchive *)0x0;
          if ((FScriptContainerElement *)&local_150 != pFVar24) {
            uVar15 = *(uint *)(pFVar24 + 8);
            _Src = *(void **)pFVar24;
            local_148 = (ulonglong)uVar15;
            pFVar29 = local_138;
            bVar6 = bVar30;
            if (uVar15 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar15,0,&local_150,uVar15,(int *)((longlong)&local_148 + 4));
              memcpy(local_150.Data,_Src,(longlong)(int)uVar15 * 2);
              pFVar29 = local_138;
            }
          }
          local_178.Version = local_120.Version;
          local_178.HeaderSize = local_120.HeaderSize;
          local_178.DataSize = local_120.DataSize;
          if (local_178.Contents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Contents.AllocatorInstance.Data);
          }
          local_178.Contents.AllocatorInstance.Data = local_120.Contents.AllocatorInstance.Data;
          uVar5._0_4_ = local_120.Contents.ArrayNum;
          uVar5._4_4_ = local_120.Contents.ArrayMax;
          local_178.Contents.ArrayNum = local_120.Contents.ArrayNum;
          local_178.Contents.ArrayMax = local_120.Contents.ArrayMax;
          local_120.Contents.ArrayNum = 0;
          local_120.Contents.ArrayMax = 0;
          local_120.Contents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar2 = (FChunkDatabaseHeader *)(param_4->AllocatorInstance).Data;
          uVar9 = uVar5;
          if (((pFVar2 <= &local_178) &&
              (uVar9 = local_178.Contents._8_8_,
              &local_178 < pFVar2 + (longlong)param_4->ArrayMax * 2)) &&
             (local_178.Contents._8_8_ = uVar5,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), uVar9 = local_178.Contents._8_8_, bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_178.Contents._8_8_ = uVar9;
          iVar12 = param_4->ArrayNum;
          if (iVar12 == param_4->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar12 + 1;
          pFVar22 = (param_4->AllocatorInstance).Data + (longlong)iVar12 * 0x40;
          *(uint *)pFVar22 = local_178.Version;
          *(uint *)(pFVar22 + 4) = local_178.HeaderSize;
          *(ulong64 *)(pFVar22 + 8) = local_178.DataSize;
          *(undefined8 *)(pFVar22 + 0x10) = 0;
          *(FScriptContainerElement **)(pFVar22 + 0x10) = local_178.Contents.AllocatorInstance.Data;
          *(int *)(pFVar22 + 0x18) = local_178.Contents.ArrayNum;
          *(int *)(pFVar22 + 0x1c) = local_178.Contents.ArrayMax;
          *(FArchive **)(pFVar22 + 0x20) = local_158;
          *(undefined8 *)(pFVar22 + 0x28) = 0;
          *(FScriptContainerElement **)(pFVar22 + 0x28) = local_150.Data;
          *(undefined4 *)(pFVar22 + 0x30) = (undefined4)local_148;
          *(undefined4 *)(pFVar22 + 0x34) = local_148._4_4_;
          *(undefined4 *)(pFVar22 + 0x38) = local_140;
          pFVar22[0x3c] = local_13c;
          local_148 = 0;
          local_150.Data = (FScriptContainerElement *)0x0;
          local_158 = (FArchive *)0x0;
          local_178.Contents.ArrayNum = 0;
          local_178.Contents.ArrayMax = 0;
          local_178.Contents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
      }
      else {
        pFVar17 = GetGlobalLogSingleton();
        if (*(int *)(pFVar24 + 8) == 0) {
          FOutputDevice::LogfImpl((FOutputDevice *)pFVar17,L"Failed to load chunkdb header for %s");
        }
        else {
          FOutputDevice::LogfImpl((FOutputDevice *)pFVar17,L"Failed to load chunkdb header for %s");
        }
      }
      if (local_120.Contents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Contents.AllocatorInstance.Data);
      }
    }
    if (local_190 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_190)();
    }
    uVar16 = (ulonglong)local_184;
    pFVar24 = pFVar24 + 0x10;
  } while( true );
}

// ReportFileCompletion @ 1432e98f0

void __thiscall
BuildPatchServices::FChunkDbChunkSource::ReportFileCompletion(FChunkDbChunkSource *this,int param_1)

{
  bool bVar1;
  int iVar2;
  IFileSystem *pIVar3;
  undefined8 *puVar4;
  char cVar5;
  FOutputDeviceRedirector *this_00;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  void *local_38 [2];
  
  iVar2 = (this->ChunkDbDataAccesses).ArrayNum;
  pFVar7 = (this->ChunkDbDataAccesses).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x40;
  while( true ) {
    if ((this->ChunkDbDataAccesses).ArrayNum != iVar2) {
      `TCheckedPointerIterator<BuildPatchServices::FChunkDbDataAccess,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if ((pFVar7[0x3c] == (FScriptContainerElement)0x0) && (param_1 < *(int *)(pFVar7 + 0x38))) {
      bVar1 = (this->Configuration).bDeleteChunkDBAfterUse;
      pIVar3 = this->FileSystem;
      pFVar7[0x3c] = (FScriptContainerElement)0x1;
      (**(code **)(**(longlong **)(pFVar7 + 0x20) + 0x18))(*(longlong **)(pFVar7 + 0x20),local_38);
      puVar4 = *(undefined8 **)(pFVar7 + 0x20);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(pFVar7 + 0x20) = 0;
        (**(code **)*puVar4)(puVar4,1);
      }
      if ((bVar1 != false) && (pIVar3 != (IFileSystem *)0x0)) {
        if (*(int *)(pFVar7 + 0x30) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = *(wchar_t **)(pFVar7 + 0x28);
        }
        cVar5 = (**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,pwVar6);
        if (cVar5 == '\0') {
          this_00 = GetGlobalLogSingleton();
          FOutputDevice::LogfImpl
                    ((FOutputDevice *)this_00,L"Failed to delete chunkdb upon retirement: %s");
        }
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
    pFVar7 = pFVar7 + 0x40;
  }
  return;
}

