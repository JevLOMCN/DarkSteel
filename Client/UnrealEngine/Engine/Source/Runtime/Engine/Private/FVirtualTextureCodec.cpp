// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FVirtualTextureCodec @ 1489b9d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVirtualTextureCodec::~FVirtualTextureCodec(FVirtualTextureCodec *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NumCodecs> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (this->Owner != (FUploadingVirtualTexture *)0x0) {
    pFVar3 = (this->CompletedEvent).Reference;
    if (((pFVar3 != (FBaseGraphTask *)0x0) && (pFVar3->field_0xd0 == '\0')) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCreationComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\UploadingVirtualTexture.cpp"
                           ,0xf4,
                           L"Codec is being released before its construction task hasn\'t finished."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((this->TaskRefs != (atomic<unsigned_int>)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllTranscodeTasksComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\UploadingVirtualTexture.cpp"
                           ,0xf5,
                           L"Codec is being released while there are tasks that still reference it."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((this->_padding_ != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsLinked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\UploadingVirtualTexture.cpp"
                           ,0xf7,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((NumCodecs == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumCodecs > 0u",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\UploadingVirtualTexture.cpp"
                           ,0xf9,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    NumCodecs = NumCodecs - 1;
    FVar8 = StatPtr_STAT_NumCodecs;
    if (StatPtr_STAT_NumCodecs == (FThreadSafeStaticStat<FStat_STAT_NumCodecs>)0x0) {
      pFVar7 = ::FName::FName(&local_res10,"STAT_NumCodecs");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NumCodecs>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumCodecs,*pFVar7,L"Num Codecs",
                         "STATGROUP_VirtualTextureMemory","STATCAT_Advanced",
                         L"Virtual Texture Memory",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar4 = *(FName *)FVar8;
    local_res8 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
      local_28.StatData.Pad[0] = '\x01';
      local_28.StatData.Pad[1] = '\0';
      local_28.StatData.Pad[2] = '\0';
      local_28.StatData.Pad[3] = '\0';
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_res8 = FVar4;
      local_28.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar3 = (this->CompletedEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  return;
}

// Init @ 1489f2f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FVirtualTextureCodec::Init(FVirtualTextureCodec *this,TRefCountPtr<IMemoryReadStream> *param_1)

{
  uint uVar1;
  int iVar2;
  FVirtualTextureBuiltData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ForElementType<unsigned_char> FVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStackY_40a8 [32];
  longlong local_4068 [2];
  ForElementType<unsigned_char> local_4058;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_40a8;
  uVar1 = this->ChunkIndex;
  pFVar3 = this->Owner->Data;
  uVar7 = 0;
  if ((int)uVar1 < (pFVar3->Chunks).ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = pFVar3->NumLayers;
  uVar13 = 0;
  pFVar4 = (pFVar3->Chunks).AllocatorInstance.Data;
  local_4058.SecondaryData = (ForElementType<unsigned_char>)0x0;
  local_50[0] = 0;
  local_50[1] = 0x4000;
  if (uVar7 != 0) {
    do {
      iVar2 = *(int *)(pFVar4 + uVar13 * 4 + (longlong)(int)uVar1 * 0x90 + 100);
      uVar8 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar8;
      lVar12 = (ulonglong)uVar8 * 4 + 100;
      if (uVar7 <= uVar8) {
        lVar12 = 0x60;
      }
      uVar11 = *(int *)(pFVar4 + lVar12 + (longlong)(int)uVar1 * 0x90) - iVar2;
      if (uVar11 != 0) {
        local_4068[0] = 0;
        uVar15 = (ulonglong)uVar11;
        (**(code **)param_1->Reference->_padding_)(param_1->Reference,local_4068,iVar2,uVar11);
        if (local_4068[0] < (longlong)uVar15) {
          if (local_50[0] < (int)uVar11) {
            UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16384,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                      (1,1,uVar11 - local_50[0],&local_4058,local_50,local_50 + 1);
          }
          else {
            if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(uVar15);
            }
            if ((int)uVar11 < local_50[0]) {
              uVar14 = local_50[0] - uVar11;
              if (((int)(uVar14 | uVar11) < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (uVar14 != 0) {
                FVar10 = (ForElementType<unsigned_char>)&local_4058;
                if (local_4058.SecondaryData != (ForElementType<unsigned_char>)0x0) {
                  FVar10 = local_4058.SecondaryData;
                }
                iVar9 = (local_50[0] - uVar14) - uVar11;
                if (iVar9 != 0) {
                  memmove((void *)((longlong)(int)uVar11 + (longlong)FVar10),
                          (void *)((longlong)(int)uVar11 + (longlong)FVar10 + (longlong)(int)uVar14)
                          ,(longlong)iVar9);
                }
                local_50[0] = local_50[0] - uVar14;
                UE::Core::Private::
                ReallocShrink<2,TSizedInlineAllocator<16384,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                          (1,1,&local_4058,local_50[0],local_50 + 1);
              }
            }
          }
          FVar10 = (ForElementType<unsigned_char>)&local_4058;
          if (local_4058.SecondaryData != (ForElementType<unsigned_char>)0x0) {
            FVar10 = local_4058.SecondaryData;
          }
          (**(code **)(param_1->Reference->_padding_ + 0x10))
                    (param_1->Reference,FVar10,iVar2,uVar15);
        }
      }
    } while (uVar8 < uVar7);
  }
  if (local_4058.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_4058.SecondaryData);
  }
  return;
}

// LinkGlobalHead @ 1489fa4a0

void __thiscall FVirtualTextureCodec::LinkGlobalHead(FVirtualTextureCodec *this)

{
  if (ListHead == (FVirtualTextureCodec *)0x0) {
    ListTail._padding_ = (longlong)ListHead;
    ListHead = &ListTail;
    ListTail._padding_ = (longlong)&ListHead;
  }
  ListHead->_padding_ = (longlong)this;
  this->_padding_ = (longlong)ListHead;
  this->_padding_ = (longlong)&ListHead;
  ListHead = this;
  return;
}

// LinkGlobalTail @ 1489fa4f0

void __thiscall FVirtualTextureCodec::LinkGlobalTail(FVirtualTextureCodec *this)

{
  FVirtualTextureCodec **ppFVar1;
  
  ppFVar1 = (FVirtualTextureCodec **)ListTail._padding_;
  if (ListHead == (FVirtualTextureCodec *)0x0) {
    ListTail._padding_ = 0;
    ppFVar1 = &ListHead;
    ListHead = &ListTail;
  }
  this->_padding_ = (longlong)ppFVar1;
  ListTail._padding_ = (longlong)this;
  this->_padding_ = (longlong)&ListTail;
  if ((undefined8 *)this->_padding_ != (undefined8 *)0x0) {
    *(undefined8 *)this->_padding_ = this;
  }
  return;
}

// RetireOldCodecs @ 148a0fad0

void __cdecl FVirtualTextureCodec::RetireOldCodecs(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FVirtualTextureCodec *pFVar4;
  FBaseGraphTask *pFVar5;
  FUploadingVirtualTexture *pFVar6;
  FScriptContainerElement *pFVar7;
  FVirtualTextureCodec *this;
  code *pcVar8;
  FVirtualTextureCodec *pFVar9;
  uint uVar10;
  TConsoleVariableData<int> *pTVar11;
  TConsoleVariableData<int> *pTVar12;
  bool bVar13;
  uint uVar14;
  
  pTVar11 = CVarVTCodecAgeThreshold.Ref;
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar12 = CVarVTCodecNumThreshold.Ref;
  uVar1 = pTVar11->ShadowedValue[1];
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = GFrameNumberRenderThread;
  uVar2 = pTVar12->ShadowedValue[1];
  pFVar9 = ListHead;
  while( true ) {
    if (((((pFVar9 == (FVirtualTextureCodec *)0x0) || (NumCodecs <= uVar2)) ||
         (pFVar4 = (FVirtualTextureCodec *)pFVar9->_padding_,
         pFVar9->Owner == (FUploadingVirtualTexture *)0x0)) ||
        ((pFVar5 = (pFVar9->CompletedEvent).Reference, pFVar5 != (FBaseGraphTask *)0x0 &&
         (pFVar5->field_0xd0 == '\0')))) || (pFVar9->TaskRefs != (atomic<unsigned_int>)0x0)) {
      return;
    }
    if ((uVar10 < pFVar9->LastFrameUsed) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentFrame >= Codec.LastFrameUsed",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\UploadingVirtualTexture.cpp"
                            ,0xae,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (uVar10 - pFVar9->LastFrameUsed <= uVar1) {
      return;
    }
    if (pFVar9->_padding_ != 0) {
      *(longlong *)(pFVar9->_padding_ + 8) = pFVar9->_padding_;
    }
    if ((longlong *)pFVar9->_padding_ != (longlong *)0x0) {
      *(longlong *)pFVar9->_padding_ = pFVar9->_padding_;
    }
    pFVar9->_padding_ = 0;
    pFVar6 = pFVar9->Owner;
    pFVar9->_padding_ = 0;
    uVar3 = pFVar9->ChunkIndex;
    uVar14 = 0;
    if ((int)uVar3 < (pFVar6->CodecPerChunk).ArrayNum) {
      uVar14 = ~uVar3 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) break;
    pFVar7 = (pFVar6->CodecPerChunk).AllocatorInstance.Data;
    this = *(FVirtualTextureCodec **)(pFVar7 + (longlong)(int)uVar3 * 8);
    pFVar9 = pFVar4;
    if (this != (FVirtualTextureCodec *)0x0) {
      *(undefined8 *)(pFVar7 + (longlong)(int)uVar3 * 8) = 0;
      ~FVirtualTextureCodec(this);
      ::operator_delete(this,0x70);
    }
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

