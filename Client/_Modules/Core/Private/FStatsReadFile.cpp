// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 21

// FStatsReadFile @ 1419cf180

FStatsReadFile * __thiscall
FStatsReadFile::FStatsReadFile(FStatsReadFile *this,wchar_t *param_1,bool param_2)

{
  this->_padding_ = (longlong)&___7FStatsReadFile__6B_;
  FStatsThreadState::FStatsThreadState((FStatsThreadState *)&this->State,0xd);
  (this->State).MinFrameSeen = -1;
  (this->State).MaxFrameSeen = 0;
  (this->Stream).Header.Version = 0;
  (this->Stream).Header.PlatformName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Stream).Header.PlatformName.Data.ArrayNum = 0;
  (this->Stream).Header.PlatformName.Data.ArrayMax = 0;
  (this->Stream).Header.FrameTableOffset = 0;
  (this->Stream).Header.FNameTableOffset = 0;
  (this->Stream).Header.NumFNames = 0;
  (this->Stream).Header.MetadataMessagesOffset = 0;
  (this->Stream).Header.NumMetadataMessages = 0;
  (this->Stream).Header.bRawStatsFile = false;
  *(undefined8 *)&(this->Stream).FNamesIndexMap = 0;
  *(undefined8 *)&(this->Stream).FNamesIndexMap.field_0x8 = 0;
  *(undefined8 *)&(this->Stream).FNamesIndexMap.field_0x20 = 0;
  *(undefined4 *)&(this->Stream).FNamesIndexMap.field_0x28 = 0;
  *(undefined4 *)&(this->Stream).FNamesIndexMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->Stream).FNamesIndexMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Stream).FNamesIndexMap.field_0x34 = 0;
  *(undefined8 *)&(this->Stream).FNamesIndexMap.field_0x40 = 0;
  *(undefined4 *)&(this->Stream).FNamesIndexMap.field_0x48 = 0;
  (this->Stream).FramesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Stream).FramesInfo.ArrayNum = 0;
  (this->Stream).FramesInfo.ArrayMax = 0;
  (this->FileInfo).TotalPacketsSize = 0;
  (this->FileInfo).TotalStatMessagesNum = 0;
  (this->FileInfo).MaximumPacketSize = 0;
  (this->FileInfo).TotalPacketsNum = 0;
  *(undefined8 *)&this->CombinedHistory = 0;
  *(undefined8 *)&(this->CombinedHistory).field_0x8 = 0;
  *(undefined8 *)&(this->CombinedHistory).field_0x20 = 0;
  this->Header = &(this->Stream).Header;
  this->Reader = (FArchive *)0x0;
  this->AsyncWork = (FAsyncTask<FAsyncStatsFile> *)0x0;
  *(undefined4 *)&(this->CombinedHistory).field_0x28 = 0;
  *(undefined4 *)&(this->CombinedHistory).field_0x2c = 0x80;
  *(undefined4 *)&(this->CombinedHistory).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CombinedHistory).field_0x34 = 0;
  *(undefined8 *)&(this->CombinedHistory).field_0x40 = 0;
  *(undefined4 *)&(this->CombinedHistory).field_0x48 = 0;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  *(undefined8 *)&(this->UObjectRawNames).Elements = 0;
  *(undefined8 *)&(this->UObjectRawNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UObjectRawNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UObjectRawNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UObjectRawNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UObjectRawNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UObjectRawNames).Elements.field_0x34 = 0;
  (this->UObjectRawNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UObjectRawNames).HashSize = 0;
  (this->ProcessingStage).Counter = 0;
  (this->StageProgress).Counter = 0;
  this->bShouldStopProcessing = (FThreadSafeBool)0x0;
  this->LastUpdateTime = 0.0;
  ::FString::FString(&this->Filename,param_1);
  this->bRawStatsFile = param_2;
  this->NumFrames = 0;
  return this;
}

// ~FStatsReadFile @ 1419d2d40

void __thiscall FStatsReadFile::~FStatsReadFile(FStatsReadFile *this)

{
  FAsyncTask<FAsyncStatsFile> *pFVar1;
  FArchive *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSetElementId> FVar4;
  void *pvVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  FStatsReadFile *local_res8;
  code *local_18;
  FStatsReadFile **local_10;
  
  fVar7 = __real_3f800000;
  this->_padding_ = (longlong)&___7FStatsReadFile__6B_;
  LOCK();
  this->bShouldStopProcessing = (FThreadSafeBool)0x1;
  UNLOCK();
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStatsReadFile::~FStatsReadFile'::__l2::<lambda_1>,bool>::Call;
  local_res8 = this;
  FGenericPlatformProcess::ConditionalSleep((TFunctionRef<bool___cdecl(void)> *)&local_18,fVar7);
  pFVar1 = this->AsyncWork;
  if (pFVar1 != (FAsyncTask<FAsyncStatsFile> *)0x0) {
    if (((FThreadSafeCounter *)&pFVar1->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar1,false);
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncWork->IsDone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                         ,0x29c,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar1 = this->AsyncWork;
    if (pFVar1 != (FAsyncTask<FAsyncStatsFile> *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    this->AsyncWork = (FAsyncTask<FAsyncStatsFile> *)0x0;
  }
  pFVar2 = this->Reader;
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  this->Reader = (FArchive *)0x0;
  pFVar3 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->UObjectRawNames).HashSize = 0;
  FVar4 = (this->UObjectRawNames).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UObjectRawNames).Elements);
  pFVar3 = (this->Frames).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->CombinedHistory).field_0x48 = 0;
  pvVar5 = *(void **)&(this->CombinedHistory).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CombinedHistory);
  FStatsReadStream::~FStatsReadStream(&this->Stream);
  FStatsThreadState::~FStatsThreadState((FStatsThreadState *)&this->State);
  return;
}

// PostProcessStats @ 141a0fff0

void __thiscall FStatsReadFile::PostProcessStats(FStatsReadFile *this)

{
  if (((this->ProcessingStage).Counter != 6) && ((this->ProcessingStage).Counter != 4)) {
    LOCK();
    (this->ProcessingStage).Counter = 4;
    UNLOCK();
    LOCK();
    (this->StageProgress).Counter = 0;
    UNLOCK();
  }
  return;
}

// PreProcessStats @ 141a10030

void __thiscall FStatsReadFile::PreProcessStats(FStatsReadFile *this)

{
  if (((this->ProcessingStage).Counter != 6) && ((this->ProcessingStage).Counter != 2)) {
    LOCK();
    (this->ProcessingStage).Counter = 2;
    UNLOCK();
    LOCK();
    (this->StageProgress).Counter = 0;
    UNLOCK();
  }
  return;
}

// PrepareLoading @ 141a10070

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FStatsReadFile::PrepareLoading(FStatsReadFile *this)

{
  longlong *plVar1;
  long64 lVar2;
  int iVar3;
  IFileManager *pIVar4;
  longlong lVar5;
  FArchive *pFVar6;
  FName this_00;
  undefined8 uVar7;
  FStaticBasicLogRecord *pFVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  uint local_res18;
  uint uStackX_1c;
  undefined1 local_res20 [8];
  FString local_78;
  TArray<FStatMessage,TSizedDefaultAllocator<64>_> local_68 [2];
  
  QueryPerformanceCounter(&local_res8);
  if ((this->ProcessingStage).Counter != 0) {
    LOCK();
    (this->ProcessingStage).Counter = 0;
    UNLOCK();
    LOCK();
    (this->StageProgress).Counter = 0;
    UNLOCK();
  }
  pIVar4 = IFileManager::Get();
  if ((this->Filename).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
  }
  lVar5 = (**(code **)((longlong)*pIVar4 + 0x110))(pIVar4,pwVar9);
  if (lVar5 < 4) {
    if ((byte)LogStats._0_1_ < 2) goto LAB_141a104bf;
    pFVar8 = &::LOG_Static;
  }
  else {
    pIVar4 = IFileManager::Get();
    if ((this->Filename).Data.ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
    }
    pFVar6 = (FArchive *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,pwVar9,0);
    this->Reader = pFVar6;
    if (pFVar6 == (FArchive *)0x0) {
      if ((byte)LogStats._0_1_ < 2) goto LAB_141a104bf;
      pFVar8 = &::LOG_Static;
    }
    else {
      plVar1 = *(longlong **)&pFVar6->field_0x8;
      local_res8.s.LowPart = 0;
      if ((DWORD *)plVar1[1] < (DWORD *)*plVar1 + 1) {
        if ((pFVar6->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)&local_res8.QuadPart);
        }
      }
      else {
        local_res8.s.LowPart = *(DWORD *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      if (local_res8.s.LowPart != 0x7e1b83c1) {
        if (local_res8.s.LowPart == 0xc1831b7e) {
          pFVar6->field_0x2a = pFVar6->field_0x2a | 1;
        }
        else {
          if (local_res8.s.LowPart != 0x10293847) {
            if (local_res8.s.LowPart != 0x47382910) {
              if ((byte)LogStats._0_1_ < 2) goto LAB_141a104bf;
              pFVar8 = &::LOG_Static;
              goto LAB_141a104b0;
            }
            pFVar6->field_0x2a = pFVar6->field_0x2a | 1;
          }
          ::operator<<(pFVar6,&(this->Stream).Header);
        }
      }
      if ((this->Stream).Header.bRawStatsFile == this->bRawStatsFile) {
        if ((((this->Stream).Header.NumMetadataMessages != 0) &&
            ((this->Stream).Header.MetadataMessagesOffset != 0)) &&
           ((this->Stream).Header.FrameTableOffset != 0)) {
          if (5 < (this->Stream).Header.Version) {
            local_68[0].ArrayMax = 0;
            local_68[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_68[0].ArrayNum = 0;
            FStatsReadStream::ReadFNamesAndMetadataMessages(&this->Stream,this->Reader,local_68);
            FStatsThreadState::ProcessMetaDataOnly((FStatsThreadState *)&this->State,local_68);
            lVar2 = local_68[0].ArrayNum;
            pFVar11 = local_68[0].AllocatorInstance.Data + local_68[0].ArrayNum * 0x10;
            pFVar10 = local_68[0].AllocatorInstance.Data + 0xc;
            while( true ) {
              if (local_68[0].ArrayNum != lVar2) {
                `TCheckedPointerIterator<FStatMessage,__int64,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_res8);
              }
              if (pFVar10 + -0xc == pFVar11) break;
              local_res18 = *(uint *)(pFVar10 + -4);
              uStackX_1c = *(uint *)pFVar10 & 0x1ff;
              this_00 = FStatNameAndInfo::GetShortNameFrom((FName)local_res20);
              ::FName::GetPlainNameString((FName *)this_00,&local_78);
              iVar3 = ::FString::Find(&local_78,L"/",1,IgnoreCase,FromStart,-1);
              if (iVar3 != -1) {
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                          (&this->UObjectRawNames,&local_res10,(bool *)&local_res18);
              }
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              pFVar10 = pFVar10 + 0x10;
            }
            pFVar6 = this->Reader;
            (**(code **)(*(longlong *)pFVar6 + 0x1b8))
                      (pFVar6,(this->Stream).Header.FrameTableOffset);
            TArrayPrivateFriend::Serialize<FStatsFrameInfo,TSizedDefaultAllocator<32>_>
                      (pFVar6,&(this->Stream).FramesInfo);
            pFVar6 = this->Reader;
            lVar5 = *(longlong *)pFVar6;
            if ((this->Stream).FramesInfo.ArrayNum < 1) {
              uVar7 = (**(code **)(lVar5 + 0x30))(pFVar6);
            }
            else {
              uVar7 = *(undefined8 *)(this->Stream).FramesInfo.AllocatorInstance.Data;
            }
            (**(code **)(lVar5 + 0x1b8))(pFVar6,uVar7);
            FWindowsPlatformTime::Seconds();
            if (4 < (byte)LogStats._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
            }
            if (this->bRawStatsFile == false) {
              this->NumFrames = (this->Stream).FramesInfo.ArrayNum;
            }
            if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68[0].AllocatorInstance.Data);
            }
            return true;
          }
          if (1 < (byte)LogStats._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
          }
          goto LAB_141a104bf;
        }
        if ((byte)LogStats._0_1_ < 2) goto LAB_141a104bf;
        pFVar8 = &::LOG_Static;
      }
      else {
        if ((byte)LogStats._0_1_ < 2) goto LAB_141a104bf;
        pFVar8 = &::LOG_Static;
      }
    }
  }
LAB_141a104b0:
  UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogStats);
LAB_141a104bf:
  if ((this->ProcessingStage).Counter != 7) {
    LOCK();
    (this->ProcessingStage).Counter = 7;
    UNLOCK();
    LOCK();
    (this->StageProgress).Counter = 0;
    UNLOCK();
  }
  return false;
}

// ProcessAdvanceFrameEventGameThreadOperation @ 141a10da0

void __thiscall
FStatsReadFile::ProcessAdvanceFrameEventGameThreadOperation
          (FStatsReadFile *this,FStatMessage *param_1,FStackState *param_2)

{
  return;
}

// ProcessAdvanceFrameEventRenderThreadOperation @ 141a10db0

void __thiscall
FStatsReadFile::ProcessAdvanceFrameEventRenderThreadOperation
          (FStatsReadFile *this,FStatMessage *param_1,FStackState *param_2)

{
  return;
}

// ProcessCycleScopeEndOperation @ 141a10dc0

void __thiscall
FStatsReadFile::ProcessCycleScopeEndOperation
          (FStatsReadFile *this,FStatMessage *param_1,FStackState *param_2)

{
  return;
}

// ProcessCycleScopeStartOperation @ 141a10dd0

void __thiscall
FStatsReadFile::ProcessCycleScopeStartOperation
          (FStatsReadFile *this,FStatMessage *param_1,FStackState *param_2)

{
  return;
}

// ProcessSpecialMessageMarkerOperation @ 141a11b00

void __thiscall
FStatsReadFile::ProcessSpecialMessageMarkerOperation
          (FStatsReadFile *this,FStatMessage *param_1,FStackState *param_2)

{
  return;
}

// ProcessStats @ 141a11b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsReadFile::ProcessStats(FStatsReadFile *this)

{
  FName *this_00;
  int *piVar1;
  TMap<int,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>_>
  *this_01;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  ForElementType<FSetElementId> FVar21;
  uint uVar22;
  longlong lVar23;
  uint *puVar24;
  ForAnyElementType *pFVar25;
  longlong lVar26;
  undefined1 auStackY_1c8 [32];
  uint local_178;
  uint local_174;
  int local_170;
  undefined4 local_168;
  uint uStack_164;
  int local_160;
  TKeyInitializer<FName_const_&> local_15c;
  longlong local_150;
  uint *local_148;
  undefined4 local_140;
  uint uStack_13c;
  LARGE_INTEGER local_138;
  FName *local_130;
  FName local_128;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  TSet<TTuple<FName,FStackState>,TDefaultMapHashableKeyFuncs<FName,FStackState,0>,FDefaultSetAllocator>
  local_d8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((this->bRawStatsFile != false) && ((this->ProcessingStage).Counter != 6)) {
    if ((this->ProcessingStage).Counter != 3) {
      LOCK();
      (this->ProcessingStage).Counter = 3;
      UNLOCK();
      LOCK();
      (this->StageProgress).Counter = 0;
      UNLOCK();
    }
    QueryPerformanceCounter(&local_138);
    dVar10 = __real_4000000000000000;
    dVar9 = __real_4059000000000000;
    dVar8 = __real_4170000000000000;
    local_d8.Elements._44_4_ = 0x80;
    local_170 = 0;
    local_d8.Elements._0_8_ = 0;
    local_d8.Elements._8_8_ = 0;
    local_d8.Elements._32_8_ = 0;
    local_d8.Elements._40_4_ = 0;
    iVar13 = (this->FileInfo).TotalStatMessagesNum / 200;
    local_d8.Elements._48_4_ = 0xffffffff;
    local_d8.Elements._52_4_ = 0;
    local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_d8.HashSize = 0;
    local_160 = 0;
    local_15c.Key._4_4_ = 0x10000;
    if (0x10000 < iVar13) {
      local_15c.Key._4_4_ = iVar13;
    }
    local_174 = 0;
    if (0 < (this->Frames).ArrayNum) {
      do {
        uVar12 = 0;
        if ((int)local_174 < (this->Frames).ArrayNum) {
          uVar12 = ~local_174 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = *(uint *)((this->Frames).AllocatorInstance.Data + (longlong)(int)local_174 * 4);
        if (*(int *)&(this->CombinedHistory).field_0x8 !=
            *(int *)&(this->CombinedHistory).field_0x34) {
          puVar3 = *(undefined1 **)&(this->CombinedHistory).field_0x40;
          puVar19 = &(this->CombinedHistory).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar19 = puVar3;
          }
          uVar14 = *(uint *)(puVar19 +
                            (ulonglong)(*(int *)&(this->CombinedHistory).field_0x48 - 1U & uVar12) *
                            4);
          if (uVar14 != 0xffffffff) {
            do {
              puVar24 = (uint *)((longlong)(int)uVar14 * 0x20 + *(longlong *)&this->CombinedHistory)
              ;
              if (*puVar24 == uVar12) {
                local_148 = puVar24;
                if (puVar24 != (uint *)0x0) goto LAB_141a11d5f;
                goto LAB_141a11d36;
              }
              uVar14 = puVar24[6];
            } while (uVar14 != 0xffffffff);
          }
        }
        local_148 = (uint *)0x0;
LAB_141a11d36:
        puVar24 = local_148;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_141a11d5f:
        uVar12 = puVar24[4];
        local_178 = 0;
        if (0 < (int)uVar12) {
          do {
            uVar14 = 0;
            if ((int)local_178 < (int)uVar12) {
              uVar14 = ~local_178 >> 0x1f;
            }
            if ((uVar14 == 0) &&
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
            lVar26 = 0;
            local_150 = *(longlong *)(*(longlong *)(puVar24 + 2) + (longlong)(int)local_178 * 8);
            lVar23 = lVar26;
            if ((int)(this->State)._padding_ != *(int *)((longlong)&(this->State)._padding_ + 4)) {
              plVar17 = (longlong *)(this->State)._padding_;
              plVar20 = &(this->State)._padding_;
              if (plVar17 != (longlong *)0x0) {
                plVar20 = plVar17;
              }
              iVar13 = *(int *)((longlong)plVar20 +
                               (ulonglong)
                               ((int)(this->State)._padding_ - 1U & *(uint *)(local_150 + 8)) * 4);
              if (iVar13 != -1) {
                lVar4 = (this->State)._padding_;
                do {
                  lVar23 = lVar4 + (longlong)iVar13 * 0x14;
                  if (*(uint *)(lVar4 + (longlong)iVar13 * 0x14) == *(uint *)(local_150 + 8)) {
                    if (lVar23 != 0) goto LAB_141a11e55;
                    break;
                  }
                  iVar13 = *(int *)(lVar23 + 0xc);
                  lVar23 = lVar26;
                } while (iVar13 != -1);
              }
            }
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L"");
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
LAB_141a11e55:
            this_00 = (FName *)(lVar23 + 4);
            lVar23 = *(longlong *)(lVar23 + 4);
            uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar23);
            if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
              FVar21 = (ForElementType<FSetElementId>)&local_d8.Hash;
              if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar21 = local_d8.Hash.SecondaryData;
              }
              iVar13 = *(int *)((longlong)FVar21 +
                               (ulonglong)
                               (local_d8.HashSize - 1U & (int)((ulonglong)lVar23 >> 0x20) + uVar12)
                               * 4);
              while (iVar13 != -1) {
                plVar17 = (longlong *)((longlong)iVar13 * 0x30 + local_d8.Elements._0_8_);
                if (*plVar17 == lVar23) {
                  pFVar25 = (ForAnyElementType *)(plVar17 + 1);
                  if (plVar17 == (longlong *)0x0) {
                    pFVar25 = (ForAnyElementType *)0x0;
                  }
                  if (pFVar25 != (ForAnyElementType *)0x0) goto LAB_141a11fb1;
                  break;
                }
                iVar13 = (int)plVar17[5];
              }
            }
            local_130 = this_00;
            TSet<TTuple<FName,FStackState>,TDefaultMapHashableKeyFuncs<FName,FStackState,0>,FDefaultSetAllocator>
            ::Emplace<TKeyInitializer<FName_const_&>_>(&local_d8,&local_15c,(bool *)&local_130);
            pFVar25 = (ForAnyElementType *)
                      (local_d8.Elements._0_8_ + 8 + (longlong)(int)local_15c.Key * 0x30);
            if ((((FName *)pFVar25->Data <= this_00) &&
                (this_00 < (FName *)pFVar25->Data + *(int *)((longlong)&pFVar25[1].Data + 4))) &&
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
            iVar13 = *(int *)&pFVar25[1].Data;
            piVar1 = (int *)((longlong)&pFVar25[1].Data + 4);
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,pFVar25,piVar1);
            }
            *(int *)&pFVar25[1].Data = iVar13 + 1;
            *(FName *)(pFVar25->Data + (longlong)iVar13 * 8) = *this_00;
            *(FName *)(pFVar25 + 2) = *this_00;
LAB_141a11fb1:
            iVar13 = 0;
            iVar2 = *(int *)(local_150 + 0x28);
            if (0 < iVar2) {
              do {
                local_170 = local_170 + 1;
                uVar18 = iVar13 >> 0x1f & 0xfff;
                uVar14 = iVar13 + uVar18;
                uVar22 = (int)uVar14 >> 0xc;
                uVar12 = 0;
                if ((int)uVar22 < *(int *)(local_150 + 0x20)) {
                  uVar12 = ~uVar22 >> 0x1f;
                }
                if ((uVar12 == 0) &&
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
                lVar23 = *(longlong *)(*(longlong *)(local_150 + 0x18) + (longlong)(int)uVar22 * 8)
                         + (longlong)(int)((uVar14 & 0xfff) - uVar18) * 0x10;
                local_168 = *(undefined4 *)(lVar23 + 8);
                uStack_164 = *(uint *)(lVar23 + 0xc) & 0x1ff;
                uVar12 = *(uint *)(lVar23 + 0xc) & 0xf000;
                if (uVar12 == 0x5000) {
                  if (((pFVar25->Data <= (FScriptContainerElement *)&local_168) &&
                      ((FScriptContainerElement *)&local_168 <
                       pFVar25->Data + (longlong)*(int *)((longlong)&pFVar25[1].Data + 4) * 8)) &&
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
                  iVar15 = *(int *)&pFVar25[1].Data;
                  piVar1 = (int *)((longlong)&pFVar25[1].Data + 4);
                  if (iVar15 == *piVar1) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x408,pFVar25,piVar1);
                  }
                  *(int *)&pFVar25[1].Data = iVar15 + 1;
                  *(ulonglong *)(pFVar25->Data + (longlong)iVar15 * 8) =
                       CONCAT44(uStack_164,local_168);
                  pFVar25[2].Data = (FScriptContainerElement *)CONCAT44(uStack_164,local_168);
                  (**(code **)(this->_padding_ + 0x30))(this,lVar23,pFVar25);
                }
                else if (uVar12 == 0x6000) {
                  iVar15 = *(int *)&pFVar25[1].Data;
                  if (iVar15 < 2) {
                    local_140 = *(undefined4 *)(lVar23 + 8);
                    uStack_13c = *(uint *)(lVar23 + 0xc) & 0x1ff;
                    FStatNameAndInfo::GetShortNameFrom((FName)&local_128);
                    if (2 < (byte)LogStats._0_1_) {
                      ::FName::ToString((FName *)(pFVar25 + 2),&local_f0);
                      ::FName::ToString(&local_128,&local_100);
                      ::FName::ToString(this_00,&local_110);
                      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStats)
                      ;
                      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_110.Data.AllocatorInstance.Data);
                      }
                      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_100.Data.AllocatorInstance.Data);
                      }
                      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                      }
                    }
                    *(undefined1 *)&pFVar25[3].Data = 1;
                    iVar15 = *(int *)((longlong)&pFVar25[1].Data + 4);
                    piVar1 = (int *)((longlong)&pFVar25[1].Data + 4);
                    *(undefined4 *)&pFVar25[1].Data = 0;
                    iVar16 = 0;
                    if (iVar15 != 0) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,4,0,pFVar25,0,piVar1);
                      iVar16 = *piVar1;
                    }
                    if ((((FName *)pFVar25->Data <= this_00) &&
                        (this_00 < (FName *)pFVar25->Data + iVar16)) &&
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
                    iVar15 = *(int *)&pFVar25[1].Data;
                    if (iVar15 == *piVar1) {
                      iVar15 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x408,pFVar25,piVar1);
                    }
                    *(int *)&pFVar25[1].Data = iVar15 + 1;
                    *(FName *)(pFVar25->Data + (longlong)iVar15 * 8) = *this_00;
                    *(FName *)(pFVar25 + 2) = *this_00;
                  }
                  else {
                    uVar5 = *(ulonglong *)(pFVar25->Data + (longlong)iVar15 * 8 + -8);
                    *(int *)&pFVar25[1].Data = iVar15 + -1;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,4,pFVar25,iVar15 + -1,(int *)((longlong)&pFVar25[1].Data + 4));
                    if ((uVar5 != (*(ulonglong *)(lVar23 + 8) & 0x1ffffffffff)) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("ScopeStart == ScopeEnd",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                                            ,0x396,L""), bVar11)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    uVar14 = *(int *)&pFVar25[1].Data - 1;
                    uVar12 = 0;
                    if ((int)uVar14 < *(int *)&pFVar25[1].Data) {
                      uVar12 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
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
                    pFVar25[2].Data =
                         *(FScriptContainerElement **)
                          (pFVar25->Data + (longlong)*(int *)&pFVar25[1].Data * 8 + -8);
                    *(undefined1 *)&pFVar25[3].Data = 0;
                    (**(code **)(this->_padding_ + 0x38))(this,lVar23,pFVar25);
                  }
                }
                else if (uVar12 == 0x7000) {
                  (**(code **)(this->_padding_ + 0x40))(this,lVar23,pFVar25);
                }
                iVar15 = local_160;
                if (local_160 < local_170) {
                  QueryPerformanceCounter(&local_120);
                  dVar7 = (double)local_120.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8
                  ;
                  if (this->LastUpdateTime + dVar10 < dVar7) {
                    LOCK();
                    (this->StageProgress).Counter =
                         (int)(((double)local_170 * dVar9) /
                              (double)(this->FileInfo).TotalStatMessagesNum);
                    UNLOCK();
                    if (5 < (byte)LogStats._0_1_) {
                      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats)
                      ;
                    }
                    this->LastUpdateTime = dVar7;
                  }
                  if ((this->bShouldStopProcessing != (FThreadSafeBool)0x0) &&
                     ((this->ProcessingStage).Counter != 6)) {
                    LOCK();
                    (this->ProcessingStage).Counter = 6;
                    UNLOCK();
                    LOCK();
                    (this->StageProgress).Counter = 0;
                    UNLOCK();
                  }
                  local_160 = iVar15 + local_15c.Key._4_4_;
                  if ((this->ProcessingStage).Counter == 6) {
                    iVar13 = iVar2 + 1;
                    local_178 = local_148[4] + 1;
                    local_174 = (this->Frames).ArrayNum + 1;
                  }
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < iVar2);
            }
            local_178 = local_178 + 1;
            uVar12 = local_148[4];
            puVar24 = local_148;
          } while ((int)local_178 < (int)uVar12);
        }
        local_174 = local_174 + 1;
      } while ((int)local_174 < (this->Frames).ArrayNum);
    }
    if ((this->ProcessingStage).Counter == 6) {
      if (2 < (byte)LogStats._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
    }
    else {
      LOCK();
      (this->StageProgress).Counter = 100;
      UNLOCK();
      QueryPerformanceCounter(&local_118);
      if (4 < (byte)LogStats._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
    }
    this_01 = &this->CombinedHistory;
    bVar11 = 1 < *(int *)&(this->CombinedHistory).field_0x48;
    if (!bVar11) {
      TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
                        *)this_01);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_01,0,*(int *)&(this->CombinedHistory).field_0x8);
    puVar3 = &(this->CombinedHistory).field_0xc;
    *(undefined4 *)&(this->CombinedHistory).field_0x8 = 0;
    if (*(int *)puVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar3);
    }
    *(undefined4 *)&(this->CombinedHistory).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->CombinedHistory).field_0x34 = 0;
    iVar13 = *(int *)&(this->CombinedHistory).field_0x2c;
    *(undefined4 *)&(this->CombinedHistory).field_0x28 = 0;
    if ((iVar13 < 0) || (0x80 < iVar13)) {
      *(undefined4 *)&(this->CombinedHistory).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CombinedHistory).field_0x10,0);
    }
    if (bVar11) {
      *(undefined4 *)&(this->CombinedHistory).field_0x48 = 1;
      TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
                *)this_01);
    }
    local_d8.HashSize = 0;
    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FStackState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FStackState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d8.Elements);
  }
  return;
}

// ReadAndProcessAsynchronously @ 141a12840

void __thiscall FStatsReadFile::ReadAndProcessAsynchronously(FStatsReadFile *this)

{
  FAsyncTask<FAsyncStatsFile> *pFVar1;
  FAsyncTask<FAsyncStatsFile> *this_00;
  
  pFVar1 = ::operator_new(0x78);
  this_00 = (FAsyncTask<FAsyncStatsFile> *)0x0;
  if (pFVar1 != (FAsyncTask<FAsyncStatsFile> *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
    pFVar1->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncStatsFile____6B_;
    ((TStatId *)&pFVar1->_padding_)->StatIdPtr = &TStatId::TStatId_NAME_None;
    ((FThreadSafeCounter *)&pFVar1->_padding_)->Counter = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined2 *)&pFVar1->_padding_ = 3;
    pFVar1->_padding_ = -1;
    pFVar1->_padding_ = 0;
    (pFVar1->Task).Owner = this;
    this_00 = pFVar1;
  }
  this->AsyncWork = this_00;
  FAsyncTaskBase::Start((FAsyncTaskBase *)this_00,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
  return;
}

// ReadAndProcessSynchronously @ 141a128e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsReadFile::ReadAndProcessSynchronously(FStatsReadFile *this)

{
  undefined1 *puVar1;
  TMap<int,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>_>
  *this_00;
  bool bVar2;
  int iVar3;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  if (this->bRawStatsFile == false) {
    ReadRegularStats(this);
  }
  else {
    ReadRawStats(this);
  }
  LOCK();
  (this->StageProgress).Counter = 100;
  UNLOCK();
  if ((this->ProcessingStage).Counter == 6) {
    if (2 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    if (this->bRawStatsFile != false) {
      this_00 = &this->CombinedHistory;
      bVar2 = 1 < *(int *)&(this->CombinedHistory).field_0x48;
      if (!bVar2) {
        TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->CombinedHistory).field_0x8);
      puVar1 = &(this->CombinedHistory).field_0xc;
      *(undefined4 *)&(this->CombinedHistory).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->CombinedHistory).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->CombinedHistory).field_0x34 = 0;
      iVar3 = *(int *)&(this->CombinedHistory).field_0x2c;
      *(undefined4 *)&(this->CombinedHistory).field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->CombinedHistory).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CombinedHistory).field_0x10,0);
      }
      if (bVar2) {
        *(undefined4 *)&(this->CombinedHistory).field_0x48 = 1;
        TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
  }
  else {
    QueryPerformanceCounter(&local_res8);
    if (4 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    if (this->bRawStatsFile != false) {
      UpdateCombinedHistoryStats(this);
    }
  }
  (**(code **)(this->_padding_ + 8))(this);
  ProcessStats(this);
  (**(code **)(this->_padding_ + 0x18))(this);
  iVar3 = (this->ProcessingStage).Counter;
  if ((this->ProcessingStage).Counter == 6) {
    if (iVar3 == 7) {
      return;
    }
    iVar3 = 7;
  }
  else {
    if (iVar3 == 5) {
      return;
    }
    iVar3 = 5;
  }
  LOCK();
  (this->ProcessingStage).Counter = iVar3;
  UNLOCK();
  LOCK();
  (this->StageProgress).Counter = 0;
  UNLOCK();
  return;
}

// ReadRawStats @ 141a13640

void __thiscall FStatsReadFile::ReadRawStats(FStatsReadFile *this)

{
  ForAnyElementType *pFVar1;
  TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *pTVar2;
  TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<int,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>_>
  *this_00;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  FArchive *pFVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  FStatPacket *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined8 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  FStatPacket *pFVar23;
  undefined8 *puVar24;
  int iVar25;
  FIdentityFunctor local_res8 [8];
  uint local_res10 [2];
  int local_res18 [2];
  uint *local_res20;
  FStatPacket *local_138;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_130;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_120;
  FCompressedStatsData local_110;
  FArchiveState local_f8;
  undefined8 local_68;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  if ((this->ProcessingStage).Counter != 1) {
    LOCK();
    (this->ProcessingStage).Counter = 1;
    UNLOCK();
    LOCK();
    (this->StageProgress).Counter = 0;
    UNLOCK();
  }
  pFVar6 = this->Reader;
  pcVar7 = *(code **)(*(longlong *)pFVar6 + 0x30);
  lVar12 = (**(code **)(*(longlong *)pFVar6 + 0x28))(pFVar6);
  lVar13 = (*pcVar7)(pFVar6);
  if (lVar13 <= lVar12) {
LAB_141a13b03:
    TMapBase<int,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<int,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>_>
                *)&this->CombinedHistory,&this->Frames);
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)(this->Frames).AllocatorInstance.Data,(this->Frames).ArrayNum,local_res8[0],
               (TLess<void> *)local_res8);
    iVar25 = (this->Frames).ArrayNum;
    uVar22 = iVar25 - 1;
    uVar11 = 0;
    if ((int)uVar22 < iVar25) {
      uVar11 = ~uVar22 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((*(int *)((this->Frames).AllocatorInstance.Data + (longlong)(int)uVar22 * 4) !=
         (this->Frames).ArrayNum) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Frames[Frames.Num() - 1] == Frames.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                            ,0x30a,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this->NumFrames = (this->Frames).ArrayNum;
    if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    return;
  }
LAB_141a136d3:
  pFVar6 = this->Reader;
  local_110.SrcData = &local_120;
  local_110.DestData = &local_130;
  local_110.bEndOfCompressedData = false;
  if ((pFVar6->field_0x28 & 4) == 0) {
    if ((pFVar6->field_0x28 & 1) == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Stats\\StatsFile.h"
                          ,0x95,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      FCompressedStatsData::ReadCompressed(&local_110,pFVar6);
      if (local_110.bEndOfCompressedData != false) {
        LOCK();
        (this->StageProgress).Counter = 100;
        UNLOCK();
        goto LAB_141a13b03;
      }
    }
  }
  else {
    FCompressedStatsData::WriteCompressed(&local_110,pFVar6);
  }
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
  local_60 = &local_130;
  local_68 = 0;
  local_f8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_58 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8);
  pFVar14 = ::operator_new(0x40);
  pFVar23 = (FStatPacket *)0x0;
  if (pFVar14 != (FStatPacket *)0x0) {
    pFVar14->Frame = 1;
    pFVar14->ThreadId = 0;
    pFVar14->ThreadType = Invalid;
    pFVar14->bBrokenCallstacks = false;
    TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::
    TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>(&pFVar14->StatMessages,0);
    (pFVar14->StatMessagesPresize).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar14->StatMessagesPresize).ArrayNum = 0;
    (pFVar14->StatMessagesPresize).ArrayMax = 0;
    pFVar23 = pFVar14;
  }
  local_138 = pFVar23;
  FStatsReadStream::ReadStatPacket(&this->Stream,(FArchive *)&local_f8,pFVar23);
  this_00 = &this->CombinedHistory;
  local_res10[0] = (uint)local_138->Frame;
  if (*(int *)&(this->CombinedHistory).field_0x8 != *(int *)&(this->CombinedHistory).field_0x34) {
    puVar8 = *(undefined1 **)&(this->CombinedHistory).field_0x40;
    puVar20 = &(this->CombinedHistory).field_0x38;
    if (puVar8 != (undefined1 *)0x0) {
      puVar20 = puVar8;
    }
    uVar11 = *(uint *)(puVar20 +
                      (ulonglong)(*(int *)&(this->CombinedHistory).field_0x48 - 1U & local_res10[0])
                      * 4);
    if (uVar11 != 0xffffffff) {
      do {
        puVar18 = (uint *)((longlong)(int)uVar11 * 0x20 + *(longlong *)&this_00->field_0x0);
        if (*puVar18 == local_res10[0]) {
          if (puVar18 != (uint *)0x0) goto LAB_141a138aa;
          break;
        }
        uVar11 = puVar18[6];
      } while (uVar11 != 0xffffffff);
    }
  }
  local_res20 = local_res10;
  TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            ((TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res18,(TKeyInitializer<int_const_&> *)(ulonglong)local_res10[0],
             (bool *)&local_res20);
  puVar18 = (uint *)((longlong)local_res18[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_141a138aa:
  pFVar23 = local_138;
  pFVar15 = *(FScriptContainerElement **)(puVar18 + 2);
  pFVar1 = (ForAnyElementType *)(puVar18 + 2);
  pFVar5 = pFVar15 + (longlong)(int)puVar18[4] * 8;
  if (pFVar15 != pFVar5) {
LAB_141a138c3:
    if (*(uint *)(*(longlong *)pFVar15 + 8) != local_138->ThreadId) goto code_r0x000141a138d0;
    pTVar2 = &local_138->StatMessages;
    pTVar3 = (TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)pFVar15 + 0x18);
    if ((pTVar3 != pTVar2) &&
       (pFVar14 = (FStatPacket *)0x0, 0 < (local_138->StatMessages).NumElements)) {
      do {
        iVar25 = (int)pFVar14;
        uVar19 = iVar25 >> 0x1f & 0xfff;
        uVar22 = iVar25 + uVar19;
        uVar21 = (int)uVar22 >> 0xc;
        uVar11 = 0;
        if ((int)uVar21 < (pFVar23->StatMessages).Chunks.Array.ArrayNum) {
          uVar11 = ~uVar21 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar24 = (undefined8 *)
                  ((longlong)(int)((uVar22 & 0xfff) - uVar19) * 0x10 +
                  *(longlong *)
                   ((pTVar2->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar21 * 8));
        puVar16 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>(0x10,pTVar3);
        if (puVar16 != (undefined8 *)0x0) {
          uVar9 = puVar24[1];
          *puVar16 = *puVar24;
          puVar16[1] = uVar9;
        }
        pFVar14 = (FStatPacket *)(ulonglong)(iVar25 + 1U);
      } while ((int)(iVar25 + 1U) < (pFVar23->StatMessages).NumElements);
    }
    pFVar23 = local_138;
    if (local_138 != (FStatPacket *)0x0) {
      pFVar5 = (local_138->StatMessagesPresize).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::
      ~TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
                (&(pFVar23->StatMessages).Chunks);
      ::operator_delete(pFVar23,0x40);
    }
    goto LAB_141a13992;
  }
  goto LAB_141a138dc;
code_r0x000141a138d0:
  pFVar15 = pFVar15 + 8;
  if (pFVar15 == pFVar5) goto code_r0x000141a138d9;
  goto LAB_141a138c3;
code_r0x000141a138d9:
  pFVar15 = pFVar1->Data;
LAB_141a138dc:
  if (((pFVar15 <= (FScriptContainerElement *)&local_138) &&
      ((FScriptContainerElement *)&local_138 < pFVar15 + (longlong)(int)puVar18[5] * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = puVar18[4];
  if (uVar11 == puVar18[5]) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,pFVar1,(int *)(puVar18 + 5));
  }
  puVar18[4] = uVar11 + 1;
  *(FStatPacket **)(pFVar1->Data + (longlong)(int)uVar11 * 8) = local_138;
  iVar25 = (this->FileInfo).MaximumPacketSize;
  iVar17 = ((local_138->StatMessages).Chunks.Array.ArrayNum * 0x2000 +
           (local_138->StatMessages).Chunks.Array.ArrayMax) * 8;
  if (iVar17 < iVar25) {
    iVar17 = iVar25;
  }
  (this->FileInfo).MaximumPacketSize = iVar17;
LAB_141a13992:
  UpdateReadStageProgress(this);
  if ((this->ProcessingStage).Counter == 6) {
    FArchive::~FArchive((FArchive *)&local_f8);
    goto LAB_141a13b03;
  }
  piVar4 = &(this->FileInfo).TotalPacketsNum;
  *piVar4 = *piVar4 + 1;
  FArchive::~FArchive((FArchive *)&local_f8);
  pFVar6 = this->Reader;
  pcVar7 = *(code **)(*(longlong *)pFVar6 + 0x30);
  lVar12 = (**(code **)(*(longlong *)pFVar6 + 0x28))(pFVar6);
  lVar13 = (*pcVar7)(pFVar6);
  if (lVar13 <= lVar12) goto LAB_141a13b03;
  goto LAB_141a136d3;
}

// ReadRegularStats @ 141a13c30

void __thiscall FStatsReadFile::ReadRegularStats(FStatsReadFile *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FStatNameAndInfo FVar9;
  longlong lVar10;
  uint uVar11;
  char *pcVar12;
  undefined7 uVar14;
  longlong *plVar13;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> local_188;
  ulonglong local_178;
  ulonglong uStack_170;
  undefined1 local_168 [20];
  uint uStack_154;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_150;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_140;
  FArchiveState local_128;
  longlong local_98;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_90;
  longlong local_88;
  FCompressedStatsData local_78;
  
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 0;
  local_188.ArrayMax = 0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  if ((((this->Stream).Header.NumMetadataMessages == 0) ||
      ((this->Stream).Header.MetadataMessagesOffset == 0)) ||
     ((this->Stream).Header.FrameTableOffset == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (((this->Stream).Header.Version < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bHasCompressedData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                         ,0x31b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsFinalized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                         ,0x31c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->ProcessingStage).Counter != 1) {
    LOCK();
    (this->ProcessingStage).Counter = 1;
    UNLOCK();
    LOCK();
    (this->StageProgress).Counter = 0;
    UNLOCK();
  }
  iVar1 = (this->Stream).FramesInfo.ArrayNum;
  pFVar17 = (this->Stream).FramesInfo.AllocatorInstance.Data;
  pFVar16 = pFVar17 + (longlong)iVar1 * 0x58;
  do {
    lVar15 = 0;
    if ((this->Stream).FramesInfo.ArrayNum != iVar1) {
      local_res8 = 0;
      `TCheckedPointerIterator<FStatsFrameInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&stack0x00000008);
    }
    uVar5 = local_188._8_8_;
    if (pFVar17 == pFVar16) goto LAB_141a14218;
    iVar8 = local_188.ArrayMax;
    local_188._8_8_ = (ulonglong)(uint)local_188.ArrayMax << 0x20;
    if (((longlong)uVar5 < 0) && (iVar8 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_188.AllocatorInstance,0,&local_188.ArrayMax);
    }
    (**(code **)(*(longlong *)this->Reader + 0x1b8))(this->Reader,*(undefined8 *)pFVar17);
    pcVar12 = (char *)this->Reader;
    local_78.SrcData = &local_140;
    local_78.DestData = &local_150;
    local_78.bEndOfCompressedData = false;
    if ((((FArchive *)pcVar12)->field_0x28 & 4) == 0) {
      if ((((FArchive *)pcVar12)->field_0x28 & 1) == 0) {
        pcVar12 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Stats\\StatsFile.h";
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Stats\\StatsFile.h"
                           ,0x95,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        FCompressedStatsData::ReadCompressed(&local_78,(FArchive *)pcVar12);
      }
    }
    else {
      FCompressedStatsData::WriteCompressed(&local_78,(FArchive *)pcVar12);
    }
    local_128._padding_ = 0;
    local_128.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_128.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_128.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_128.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_128._40_8_ = 0;
    local_128.ArSerializingDefaults = 0;
    local_128.ArPortFlags = 0;
    local_128.ArMaxSerializeSize = 0;
    local_128.ArUEVer.FileVersionUE4 = 0;
    local_128.ArUEVer.FileVersionUE5 = 0;
    local_128.ArLicenseeUEVer = 0;
    local_128.ArEngineVer.Major = 0;
    local_128.ArEngineVer.Minor = 0;
    local_128.ArEngineVer.Patch = 0;
    local_128.ArEngineVer._6_2_ = 0;
    local_128.ArEngineVer.Changelist = 0;
    local_128.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_128.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_128.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_128.SerializedProperty = (FProperty *)0x0;
    local_128.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_128.bCustomVersionsAreReset = false;
    local_128._129_7_ = 0;
    local_128.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_128);
    local_98 = 0;
    local_128._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_90 = &local_150;
    uVar14 = (undefined7)((ulonglong)pcVar12 >> 8);
    local_88 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_128,true);
    (**(code **)(local_128._padding_ + 0x108))(&local_128,CONCAT71(uVar14,1));
    lVar10 = local_88;
    if (local_90->ArrayNum < local_88) {
      lVar10 = (longlong)local_90->ArrayNum;
    }
    if (local_98 < lVar10) {
      do {
        FVar9 = FStatsReadStream::ReadFName
                          (&this->Stream,(FArchive *)&stack0xffffffffffffffa0,SUB81(&local_128,0));
        uStack_170 = *(ulonglong *)FVar9;
        uVar11 = (uint)((longlong)uStack_170 >> 0x29) & 7;
        local_178 = 0;
        if (uVar11 == 2) {
          local_res20 = 0;
          if ((local_128.ActiveFPLB)->EndFastPathLoadBuffer <
              (ulonglong *)((longlong)(local_128.ActiveFPLB)->StartFastPathLoadBuffer + 8)) {
            if (local_128.ArForceByteSwapping == 0) {
              (**(code **)(local_128._padding_ + 0x188))(&local_128,&stack0x00000020,8);
              local_178 = local_res20;
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)&local_128,&stack0x00000020);
              local_178 = local_res20;
            }
          }
          else {
            local_res20 = *(ulonglong *)(local_128.ActiveFPLB)->StartFastPathLoadBuffer;
            (local_128.ActiveFPLB)->StartFastPathLoadBuffer =
                 (local_128.ActiveFPLB)->StartFastPathLoadBuffer + 8;
            local_178 = local_res20;
          }
        }
        else if (uVar11 == 3) {
          local_res18 = 0;
          if ((local_128.ActiveFPLB)->EndFastPathLoadBuffer <
              (ulonglong *)((longlong)(local_128.ActiveFPLB)->StartFastPathLoadBuffer + 8)) {
            if (local_128.ArForceByteSwapping == 0) {
              (**(code **)(local_128._padding_ + 0x188))(&local_128,&stack0x00000018,8);
              local_178 = local_res18;
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)&local_128,&stack0x00000018);
              local_178 = local_res18;
            }
          }
          else {
            local_res18 = *(ulonglong *)(local_128.ActiveFPLB)->StartFastPathLoadBuffer;
            (local_128.ActiveFPLB)->StartFastPathLoadBuffer =
                 (local_128.ActiveFPLB)->StartFastPathLoadBuffer + 8;
            local_178 = local_res18;
          }
        }
        else if (uVar11 == 4) {
          FStatsReadStream::ReadFName(&this->Stream,(FArchive *)local_168,SUB81(&local_128,0));
          local_168._12_4_ = local_168._4_4_ & 0x1ff;
          local_168._16_4_ = local_168._0_4_;
          uStack_154 = local_168._4_4_ & 0x1ff;
          local_178 = CONCAT44(local_168._4_4_,local_168._0_4_) & 0x1ffffffffff;
        }
        else if (uVar11 == 5) {
          local_res10 = 0;
          if ((local_128.ActiveFPLB)->EndFastPathLoadBuffer <
              (ulonglong *)((longlong)(local_128.ActiveFPLB)->StartFastPathLoadBuffer + 8)) {
            if (local_128.ArForceByteSwapping == 0) {
              (**(code **)(local_128._padding_ + 0x188))(&local_128,&stack0x00000010,8);
              local_178 = local_res10;
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)&local_128,&stack0x00000010);
              local_178 = local_res10;
            }
          }
          else {
            local_res10 = *(ulonglong *)(local_128.ActiveFPLB)->StartFastPathLoadBuffer;
            (local_128.ActiveFPLB)->StartFastPathLoadBuffer =
                 (local_128.ActiveFPLB)->StartFastPathLoadBuffer + 8;
            local_178 = local_res10;
          }
        }
        if (((local_188.AllocatorInstance.Data <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 <
             local_188.AllocatorInstance.Data + (longlong)local_188.ArrayMax * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = local_188.ArrayNum;
        if (local_188.ArrayNum == local_188.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_188.AllocatorInstance,&local_188.ArrayMax);
        }
        local_188.ArrayNum = iVar8 + 1;
        *(ulonglong *)(local_188.AllocatorInstance.Data + (longlong)iVar8 * 0x10) = local_178;
        *(ulonglong *)(local_188.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = uStack_170;
        lVar10 = local_88;
        if (local_90->ArrayNum < local_88) {
          lVar10 = (longlong)local_90->ArrayNum;
        }
      } while (local_98 < lVar10);
    }
    FStatsLoadedState::AddFrameFromCondensedMessages(&this->State,&local_188);
    lVar10 = (this->State)._padding_;
    if ((int)(this->State)._padding_ != *(int *)((longlong)&(this->State)._padding_ + 4)) {
      plVar2 = (longlong *)(this->State)._padding_;
      plVar13 = &(this->State)._padding_;
      if (plVar2 != (longlong *)0x0) {
        plVar13 = plVar2;
      }
      iVar8 = *(int *)((longlong)plVar13 +
                      ((ulonglong)((int)(this->State)._padding_ - 1) &
                      (lVar10 >> 0x20) * 0x17 + lVar10) * 4);
      if (iVar8 != -1) {
        lVar3 = (this->State)._padding_;
        do {
          lVar15 = lVar3 + (longlong)iVar8 * 0x18;
          if (*(longlong *)(lVar3 + (longlong)iVar8 * 0x18) == lVar10) {
            if (lVar15 != 0) goto LAB_141a141d7;
            goto LAB_141a141b1;
          }
          iVar8 = *(int *)(lVar15 + 0x10);
        } while (iVar8 != -1);
        lVar15 = 0;
      }
    }
LAB_141a141b1:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_141a141d7:
    (**(code **)(this->_padding_ + 0x10))(this,*(undefined8 *)(lVar15 + 8));
    UpdateReadStageProgress(this);
    if ((this->ProcessingStage).Counter == 6) {
      FArchive::~FArchive((FArchive *)&local_128);
LAB_141a14218:
      if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
      if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
      if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
      return;
    }
    FArchive::~FArchive((FArchive *)&local_128);
    pFVar17 = pFVar17 + 0x58;
  } while( true );
}

// ReadStats @ 141a145b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsReadFile::ReadStats(FStatsReadFile *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  TMap<int,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>_>
  *this_00;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  if (this->bRawStatsFile == false) {
    ReadRegularStats(this);
  }
  else {
    ReadRawStats(this);
  }
  LOCK();
  (this->StageProgress).Counter = 100;
  UNLOCK();
  if ((this->ProcessingStage).Counter == 6) {
    if (2 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    if (this->bRawStatsFile != false) {
      this_00 = &this->CombinedHistory;
      bVar3 = 1 < *(int *)&(this->CombinedHistory).field_0x48;
      if (!bVar3) {
        TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->CombinedHistory).field_0x8);
      puVar1 = &(this->CombinedHistory).field_0xc;
      *(undefined4 *)&(this->CombinedHistory).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->CombinedHistory).field_0x34 = 0;
      *(undefined4 *)&(this->CombinedHistory).field_0x30 = 0xffffffff;
      iVar2 = *(int *)&(this->CombinedHistory).field_0x2c;
      *(undefined4 *)&(this->CombinedHistory).field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->CombinedHistory).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CombinedHistory).field_0x10,0);
      }
      if (bVar3) {
        *(undefined4 *)&(this->CombinedHistory).field_0x48 = 1;
        TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<int,FStatPacketArray>,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
  }
  else {
    QueryPerformanceCounter(&local_res8);
    if (4 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    if (this->bRawStatsFile != false) {
      UpdateCombinedHistoryStats(this);
      return;
    }
  }
  return;
}

// ReadStatsFrame @ 141a14750

void __thiscall
FStatsReadFile::ReadStatsFrame
          (FStatsReadFile *this,TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1,
          long64 param_2)

{
  return;
}

// SetHistoryFrames @ 141a20290

void __thiscall FStatsReadFile::SetHistoryFrames(FStatsReadFile *this,int param_1)

{
  *(int *)&(this->State)._padding_ = param_1;
  return;
}

// UpdateCombinedHistoryStats @ 141a2be00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsReadFile::UpdateCombinedHistoryStats(FStatsReadFile *this)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  longlong lVar19;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  
  puVar1 = &(this->CombinedHistory).field_0x10;
  iVar14 = *(int *)&(this->CombinedHistory).field_0x28;
  iVar15 = 0;
  iVar17 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar14 != 0) {
    puVar18 = *(uint **)&(this->CombinedHistory).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_141a2bead;
      uVar13 = puVar18[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar4 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar17 + -1 + (int)lVar10;
    if (iVar14 < iVar9) {
      iVar9 = iVar14;
    }
  }
LAB_141a2bead:
  uVar13 = *(uint *)&(this->CombinedHistory).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar8,iVar15);
  TStack_88.CurrentBitIndex = iVar9;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_88._28_4_ = iVar9;
  TStack_88.BaseBitIndex = iVar17;
  uStack_68 = CONCAT44(uStack_94,
                       *(int *)&(this->CombinedHistory).field_0x8 -
                       *(int *)&(this->CombinedHistory).field_0x34);
  local_res20 = uVar13;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar14 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->CombinedHistory).field_0x28;
  if (uVar13 != uVar8) {
    puVar16 = *(undefined1 **)&(this->CombinedHistory).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar15;
      uVar12 = uVar12 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar8;
      local_res20 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_141a2bfd0;
      uVar13 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    local_res20 = uVar13;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
      local_res20 = uVar8;
    }
  }
LAB_141a2bfd0:
  while( true ) {
    if (*(int *)&(this->CombinedHistory).field_0x8 - *(int *)&(this->CombinedHistory).field_0x34 !=
        (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<int,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_88.CurrentBitIndex == uVar13) &&
       (TStack_88.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->CombinedHistory).field_0x10)) break;
    lVar10 = *(longlong *)&this->CombinedHistory;
    lVar19 = (longlong)TStack_88.CurrentBitIndex * 0x20;
    iVar14 = 0;
    iVar17 = 0;
    iVar15 = *(int *)(lVar19 + 0x10 + lVar10);
    plVar11 = *(longlong **)(lVar19 + 8 + lVar10);
    local_res10[0] = *(undefined4 *)(lVar19 + lVar10);
    plVar3 = plVar11 + iVar15;
    while( true ) {
      if (*(int *)(lVar19 + 0x10 + lVar10) != iVar15) {
        `TCheckedPointerIterator<FStatPacket_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (plVar11 == plVar3) break;
      lVar5 = *plVar11;
      iVar17 = iVar17 + *(int *)(lVar5 + 0x28);
      plVar11 = plVar11 + 1;
      iVar14 = iVar14 + (*(int *)(lVar5 + 0x20) * 0x2000 + *(int *)(lVar5 + 0x24)) * 8;
    }
    if (5 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    piVar2 = &(this->FileInfo).TotalStatMessagesNum;
    *piVar2 = *piVar2 + iVar17;
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    (this->FileInfo).TotalPacketsSize = (this->FileInfo).TotalPacketsSize + iVar14;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    uVar13 = local_res20;
  }
  if (2 < (byte)LogStats._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
  }
  return;
}

// UpdateProcessStageProgress @ 141a2c490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStatsReadFile::UpdateProcessStageProgress(FStatsReadFile *this,int param_1,int param_2,int param_3)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (this->LastUpdateTime + __real_4000000000000000 < dVar1) {
    LOCK();
    (this->StageProgress).Counter =
         (int)(((double)param_1 * __real_4059000000000000) /
              (double)(this->FileInfo).TotalStatMessagesNum);
    UNLOCK();
    if (5 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    this->LastUpdateTime = dVar1;
  }
  if ((this->bShouldStopProcessing != (FThreadSafeBool)0x0) &&
     ((this->ProcessingStage).Counter != 6)) {
    LOCK();
    (this->ProcessingStage).Counter = 6;
    UNLOCK();
    LOCK();
    (this->StageProgress).Counter = 0;
    UNLOCK();
  }
  return;
}

// UpdateReadStageProgress @ 141a2c770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsReadFile::UpdateReadStageProgress(FStatsReadFile *this)

{
  FArchive *pFVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (this->LastUpdateTime + __real_4000000000000000 < dVar3) {
    pFVar1 = this->Reader;
    lVar4 = (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1);
    dVar2 = (double)lVar4 * __real_4059000000000000;
    lVar4 = (**(code **)(*(longlong *)pFVar1 + 0x30))();
    LOCK();
    (this->StageProgress).Counter = (int)(dVar2 / (double)lVar4);
    UNLOCK();
    if (5 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    this->LastUpdateTime = dVar3;
  }
  if ((this->bShouldStopProcessing != (FThreadSafeBool)0x0) &&
     ((this->ProcessingStage).Counter != 6)) {
    LOCK();
    (this->ProcessingStage).Counter = 6;
    UNLOCK();
    LOCK();
    (this->StageProgress).Counter = 0;
    UNLOCK();
  }
  return;
}

