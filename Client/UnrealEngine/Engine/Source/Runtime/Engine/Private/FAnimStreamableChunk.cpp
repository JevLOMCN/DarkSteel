// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Serialize @ 147577950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimStreamableChunk::Serialize
          (FAnimStreamableChunk *this,FArchive *param_1,UAnimStreamable *param_2,int param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_void___cdecl_FAnimStreamableChunk::Serialize(FArchive_&,UAnimStreamable_*,int)_::_2_::FStat_STAT_StreamedAnimChunk_Serialize>
  FVar10;
  FCompressedAnimSequence *pFVar11;
  void *_Dst;
  undefined8 uVar12;
  undefined7 uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  bool bVar16;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  FName local_118;
  undefined8 local_110;
  FName local_108;
  FName local_f8;
  FName local_f0;
  FArchiveState local_e8;
  undefined8 local_58;
  ForAnyElementType *local_50;
  undefined8 local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_StreamedAnimChunk_Serialize ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FAnimStreamableChunk::Serialize(FArchive_&,UAnimStreamable_*,int)_::_2_::FStat_STAT_StreamedAnimChunk_Serialize>
         )0x0) {
      pFVar9 = ::FName::FName(&local_f8,"STAT_StreamedAnimChunk_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StreamedAnimChunk_Serialize,*pFVar9,
                 L"FAnimStreamableChunk::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",
                 L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_StreamedAnimChunk_Serialize;
  if (StatPtr_STAT_StreamedAnimChunk_Serialize ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FAnimStreamableChunk::Serialize(FArchive_&,UAnimStreamable_*,int)_::_2_::FStat_STAT_StreamedAnimChunk_Serialize>
       )0x0) {
    pFVar9 = ::FName::FName(&local_f0,"STAT_StreamedAnimChunk_Serialize");
    FVar10 = (FThreadSafeStaticStat<_public:_void___cdecl_FAnimStreamableChunk::Serialize(FArchive_&,UAnimStreamable_*,int)_::_2_::FStat_STAT_StreamedAnimChunk_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StreamedAnimChunk_Serialize,
                          *pFVar9,L"FAnimStreamableChunk::Serialize","STATGROUP_LoadTime",
                          "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  bVar5 = false;
  bVar7 = false;
  FVar15 = *(FName *)FVar10;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar8 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar8 == 0)) {
LAB_147577ad0:
    bVar6 = false;
    FVar15 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar14.Value;
        local_118.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimStreamable.cpp"
                   ,0x4c);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147577ad0;
    local_res8 = FVar14.Value;
    uStackX_c = uVar8;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar6 = true;
  }
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  bVar16 = SUB41(uVar8,0);
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_res8 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8 = uVar8;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,4);
    if (1 < local_res8) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar8 = local_res8;
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147577b5d;
  }
  else {
    uVar8 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  bVar16 = uVar8 != 0;
LAB_147577b5d:
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->StartTime = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->SequenceLength);
    }
  }
  else {
    this->SequenceLength = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (bVar16 != false) {
    if (param_3 == 0) {
      if ((param_1->field_0x28 & 1) != 0) {
        if ((this->CompressedAnimSequence != (FCompressedAnimSequence *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("!CompressedAnimSequence",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimStreamable.cpp"
                                ,0x5b,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar11 = ::operator_new(0x80);
        if (pFVar11 != (FCompressedAnimSequence *)0x0) {
          (pFVar11->CompressedTrackToSkeletonMapTable).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar11->CompressedTrackToSkeletonMapTable).ArrayNum = 0;
          (pFVar11->CompressedTrackToSkeletonMapTable).ArrayMax = 0;
          (pFVar11->CompressedCurveNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->CompressedCurveNames).ArrayNum = 0;
          (pFVar11->CompressedCurveNames).ArrayMax = 0;
          (pFVar11->IndexedCurveNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->IndexedCurveNames).ArrayNum = 0;
          (pFVar11->IndexedCurveNames).ArrayMax = 0;
          *(undefined8 *)&pFVar11->CompressedByteStream = 0;
          *(undefined8 *)&(pFVar11->CompressedByteStream).field_0x8 = 0;
          *(undefined8 *)&(pFVar11->CompressedByteStream).field_0x10 = 0;
          *(undefined8 *)&(pFVar11->CompressedByteStream).field_0x18 = 0;
          (pFVar11->CompressedCurveByteStream).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar11->CompressedCurveByteStream).ArrayNum = 0;
          (pFVar11->CompressedCurveByteStream).ArrayMax = 0;
          (pFVar11->CompressedDataStructure).Ptr = (ICompressedAnimData *)0x0;
          (pFVar11->BoneCompressionCodec).field0_0x0.DebugPtr = (UAnimBoneCompressionCodec *)0x0;
          (pFVar11->CurveCompressionCodec).field0_0x0.DebugPtr = (UAnimCurveCompressionCodec *)0x0;
          pFVar11->CompressedRawDataSize = 0;
        }
        this->CompressedAnimSequence = pFVar11;
      }
      FCompressedAnimSequence::SerializeCompressedData
                (this->CompressedAnimSequence,param_1,false,(UObject *)param_2,
                 (USkeleton *)param_2->_padding_,
                 (param_2->BoneCompressionSettings).field0_0x0.DebugPtr,
                 (param_2->CurveCompressionSettings).field0_0x0.DebugPtr,false);
    }
    else {
      uVar12 = 0x400;
      FBulkData::SetBulkDataFlags((FBulkData *)&this->BulkData,0x400);
      if ((param_1->field_0x28 & 4) != 0) {
        local_128.Data = (FScriptContainerElement *)0x0;
        local_11c = 0;
        uVar8 = (**(code **)(((this->CompressedAnimSequence->CompressedDataStructure).Ptr)->
                             _padding_ + 0x20))();
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        local_120 = 0;
        if (local_11c < (int)uVar8) {
          uVar12 = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar8,&local_128,0,&local_11c);
        }
        local_110 = 0;
        local_e8._padding_ = 0;
        local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_e8._40_8_ = 0;
        local_e8.ArSerializingDefaults = 0;
        local_e8.ArPortFlags = 0;
        local_e8.ArMaxSerializeSize = 0;
        local_e8.ArUEVer.FileVersionUE4 = 0;
        local_e8.ArUEVer.FileVersionUE5 = 0;
        local_e8.ArLicenseeUEVer = 0;
        local_e8.ArEngineVer.Major = 0;
        local_e8.ArEngineVer.Minor = 0;
        local_e8.ArEngineVer.Patch = 0;
        local_e8.ArEngineVer._6_2_ = 0;
        local_e8.ArEngineVer.Changelist = 0;
        local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_e8.SerializedProperty = (FProperty *)0x0;
        local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_e8.bCustomVersionsAreReset = false;
        local_e8._129_7_ = 0;
        local_e8.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_e8);
        local_58 = 0;
        local_e8._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        local_50 = &local_128;
        uVar13 = (undefined7)((ulonglong)uVar12 >> 8);
        local_48 = 0;
        FArchiveState::SetIsSaving(&local_e8,true);
        (**(code **)(local_e8._padding_ + 0x108))(&local_e8,CONCAT71(uVar13,1));
        local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
        FArchiveState::SetFilterEditorOnly(&local_e8,(bool)((byte)param_1->field_0x2b >> 4 & 1));
        FCompressedAnimSequence::SerializeCompressedData
                  (this->CompressedAnimSequence,(FArchive *)&local_e8,false,(UObject *)param_2,
                   (USkeleton *)param_2->_padding_,
                   (param_2->BoneCompressionSettings).field0_0x0.DebugPtr,
                   (param_2->CurveCompressionSettings).field0_0x0.DebugPtr,false);
        FBulkData::Lock((FBulkData *)&this->BulkData,2);
        _Dst = FBulkData::Realloc((FBulkData *)&this->BulkData,(longlong)local_120,1);
        memcpy(_Dst,local_128.Data,(longlong)local_120);
        FBulkData::Unlock((FBulkData *)&this->BulkData);
        FArchive::~FArchive((FArchive *)&local_e8);
        if (local_128.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data);
        }
      }
      FBulkData::Serialize((FBulkData *)&this->BulkData,param_1,(UObject *)param_2,false,1,None);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

