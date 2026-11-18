// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FStreamedAudioPlatformData @ 14761e130

FStreamedAudioPlatformData * __thiscall
FStreamedAudioPlatformData::FStreamedAudioPlatformData(FStreamedAudioPlatformData *this)

{
  (this->AudioFormat).ComparisonIndex = 0;
  (this->AudioFormat).Number = 0;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  (this->Chunks).Array.ArrayMax = 0;
  return this;
}

// ~FStreamedAudioPlatformData @ 147621620

void __thiscall
FStreamedAudioPlatformData::~FStreamedAudioPlatformData(FStreamedAudioPlatformData *this)

{
  TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_>(&this->Chunks);
  return;
}

// DeserializeChunkFromDDC @ 147632b30

int __thiscall
FStreamedAudioPlatformData::DeserializeChunkFromDDC
          (FStreamedAudioPlatformData *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,FStreamedAudioChunk *param_2,
          int param_3,uchar ***param_4)

{
  uchar **ppuVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  longlong lVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined7 uVar10;
  uint uVar11;
  size_t _Size;
  uint local_res10 [2];
  uint local_e8 [4];
  FArchiveState local_d8;
  longlong local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_40;
  longlong local_38;
  
  local_res10[0] = 0;
  local_d8._padding_ = 0;
  local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_d8._40_8_ = 0;
  local_d8.ArSerializingDefaults = 0;
  local_d8.ArPortFlags = 0;
  local_d8.ArMaxSerializeSize = 0;
  local_d8.ArUEVer.FileVersionUE4 = 0;
  local_d8.ArUEVer.FileVersionUE5 = 0;
  local_d8.ArLicenseeUEVer = 0;
  local_d8.ArEngineVer.Major = 0;
  local_d8.ArEngineVer.Minor = 0;
  local_d8.ArEngineVer.Patch = 0;
  local_d8.ArEngineVer._6_2_ = 0;
  local_d8.ArEngineVer.Changelist = 0;
  local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_d8.SerializedProperty = (FProperty *)0x0;
  local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_d8.bCustomVersionsAreReset = false;
  local_d8._129_7_ = 0;
  local_d8.NextProxy = (FArchiveState *)0x0;
  pTVar9 = param_1;
  FArchiveState::FArchiveState(&local_d8);
  local_48 = 0;
  local_d8._padding_ = (longlong)&___7FMemoryReader__6B_;
  uVar10 = (undefined7)((ulonglong)pTVar9 >> 8);
  local_38 = 0x7fffffffffffffff;
  local_40 = param_1;
  FArchiveState::SetIsLoading(&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar10,1));
  local_e8[0] = 0;
  if ((local_d8.ActiveFPLB)->EndFastPathLoadBuffer <
      (uint *)((longlong)(local_d8.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
    if (local_d8.ArForceByteSwapping == 0) {
      if (*(code **)(local_d8._padding_ + 0x188) == FMemoryReader::Serialize) {
        if (local_d8.ArIsError == 0) {
          lVar8 = (**(code **)(local_d8._padding_ + 0x30))(&local_d8);
          pTVar9 = local_40;
          if (lVar8 < local_48 + 4) {
            FArchiveState::SetError(&local_d8);
          }
          else {
            uVar11 = (uint)local_48;
            uVar5 = 0;
            if ((int)uVar11 < local_40->ArrayNum) {
              uVar5 = ~uVar11 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar6 = (*pcVar3)();
              return iVar6;
            }
            local_res10[0] = *(uint *)((pTVar9->AllocatorInstance).Data + (int)uVar11);
            local_48 = local_48 + 4;
          }
        }
      }
      else {
        (**(code **)(local_d8._padding_ + 0x188))(&local_d8,local_res10,4);
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)(local_d8.ActiveFPLB)->StartFastPathLoadBuffer;
    (local_d8.ActiveFPLB)->StartFastPathLoadBuffer =
         (local_d8.ActiveFPLB)->StartFastPathLoadBuffer + 4;
  }
  if ((local_d8.ActiveFPLB)->EndFastPathLoadBuffer <
      (uint *)((longlong)(local_d8.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
    if (local_d8.ArForceByteSwapping == 0) {
      if (*(code **)(local_d8._padding_ + 0x188) == FMemoryReader::Serialize) {
        if (local_d8.ArIsError == 0) {
          lVar8 = (**(code **)(local_d8._padding_ + 0x30))(&local_d8);
          pTVar9 = local_40;
          if (lVar8 < local_48 + 4) {
            FArchiveState::SetError(&local_d8);
          }
          else {
            uVar11 = (uint)local_48;
            uVar5 = 0;
            if ((int)uVar11 < local_40->ArrayNum) {
              uVar5 = ~uVar11 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar6 = (*pcVar3)();
              return iVar6;
            }
            local_e8[0] = *(uint *)((pTVar9->AllocatorInstance).Data + (int)uVar11);
            local_48 = local_48 + 4;
          }
        }
      }
      else {
        (**(code **)(local_d8._padding_ + 0x188))(&local_d8,local_e8,4);
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,local_e8);
    }
  }
  else {
    local_e8[0] = *(uint *)(local_d8.ActiveFPLB)->StartFastPathLoadBuffer;
    (local_d8.ActiveFPLB)->StartFastPathLoadBuffer =
         (local_d8.ActiveFPLB)->StartFastPathLoadBuffer + 4;
  }
  ppuVar1 = *param_4;
  if (ppuVar1 != (uchar **)0x0) {
    if (*ppuVar1 == (uchar *)0x0) {
      puVar7 = FMemory::Malloc((longlong)(int)local_res10[0],0);
      *ppuVar1 = puVar7;
    }
    _Size = (size_t)(int)local_res10[0];
    puVar7 = **param_4;
    if ((_Size != 0) && (local_d8.ArIsError == 0)) {
      if (*(code **)(local_d8._padding_ + 0x30) == FMemoryReader::TotalSize) {
        lVar8 = local_38;
        if (local_40->ArrayNum < local_38) {
          lVar8 = (longlong)local_40->ArrayNum;
        }
      }
      else {
        lVar8 = (**(code **)(local_d8._padding_ + 0x30))(&local_d8);
      }
      pTVar9 = local_40;
      if (lVar8 < (longlong)(_Size + local_48)) {
        FArchiveState::SetError(&local_d8);
      }
      else {
        uVar11 = (uint)local_48;
        uVar5 = 0;
        if ((int)uVar11 < local_40->ArrayNum) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        memcpy(puVar7,(pTVar9->AllocatorInstance).Data + (int)uVar11,_Size);
        local_48 = local_48 + _Size;
      }
    }
  }
  uVar5 = local_e8[0];
  FArchive::~FArchive((FArchive *)&local_d8);
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return uVar5;
}

// GetAudioFormat @ 14763ad90

FName __thiscall FStreamedAudioPlatformData::GetAudioFormat(FStreamedAudioPlatformData *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->AudioFormat;
  return in_RDX;
}

// GetChunkFromDDC @ 14763ba10

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FStreamedAudioPlatformData::GetChunkFromDDC
          (FStreamedAudioPlatformData *this,int param_1,uchar **param_2,bool param_3)

{
  FStreamedAudioChunk *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long64 lVar6;
  bool bVar7;
  
  if ((this->Chunks).Array.ArrayNum == 0) {
    if (3 < (byte)LogAudioDerivedData._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioDerivedData);
    }
    return 0;
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1364,"FStreamedAudioPlatformData::GetChunkFromDDC",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDerivedData.cpp"
               ,0x554);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1364);
  }
  if ((param_3) &&
     (((param_2 == (uchar **)0x0 || (*param_2 != (uchar *)0x0)) &&
      (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bMakeSureChunkIsLoaded || (OutChunkData && (*OutChunkData == nullptr))",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDerivedData.cpp"
                          ,0x558,L""), bVar2)))) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (((this->Chunks).Array.ArrayNum <= param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < GetNumChunks()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDerivedData.cpp"
                         ,0x55b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar4 = 0;
  uVar5 = uVar4;
  if (param_1 < (this->Chunks).Array.ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  this_00 = *(FStreamedAudioChunk **)
             ((this->Chunks).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
  bVar2 = FBulkData::IsBulkDataLoaded((FBulkData *)&this_00->BulkData);
  if (((bVar2) || (param_3)) && (param_2 != (uchar **)0x0)) {
    lVar6 = FBulkData::GetBulkDataSize((FBulkData *)&this_00->BulkData);
    uVar4 = (uint)lVar6;
    FStreamedAudioChunk::GetCopy(this_00,param_2);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar4;
}

// GetChunks @ 14763bbc0

TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> * __thiscall
FStreamedAudioPlatformData::GetChunks(FStreamedAudioPlatformData *this)

{
  return &this->Chunks;
}

// GetNumChunks @ 14763eb00

int __thiscall FStreamedAudioPlatformData::GetNumChunks(FStreamedAudioPlatformData *this)

{
  return (this->Chunks).Array.ArrayNum;
}

// Serialize @ 14765d800

void __thiscall
FStreamedAudioPlatformData::Serialize
          (FStreamedAudioPlatformData *this,FArchive *param_1,USoundWave *param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint local_res8 [2];
  undefined8 *local_38 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 4) != 0) {
    local_res8[0] = (this->Chunks).Array.ArrayNum;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  if ((param_1->field_0x28 & 1) != 0) {
    if ((this->AudioFormat == (FName)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!AudioFormat.IsNone()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDerivedData.cpp"
                           ,0x5eb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((int)local_res8[0] < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChunks >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDerivedData.cpp"
                           ,0x5ec,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_>::Empty
              (&this->Chunks,local_res8[0]);
    puVar10 = puVar8;
    if (0 < (int)local_res8[0]) {
      do {
        puVar6 = ::operator_new(0x40);
        local_38[0] = puVar8;
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 1) = 0xffffffff;
          puVar6[3] = 0;
          puVar6[4] = 0;
          *(undefined4 *)((longlong)puVar6 + 0x1d) = 0xffffffff;
          *(undefined1 *)((longlong)puVar6 + 0x21) = 0xff;
          puVar6[5] = FIoChunkId::InvalidChunkId.Id._0_8_;
          *(undefined4 *)(puVar6 + 6) = FIoChunkId::InvalidChunkId.Id._8_4_;
          puVar6[7] = 0;
          local_38[0] = puVar6;
        }
        pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->Chunks).Array.ArrayNum;
        if (iVar5 == (this->Chunks).Array.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&this->Chunks,&(this->Chunks).Array.ArrayMax
                            );
        }
        uVar9 = (int)puVar10 + 1;
        (this->Chunks).Array.ArrayNum = iVar5 + 1;
        *(undefined8 **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_38[0];
        puVar10 = (undefined8 *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  puVar10 = puVar8;
  if (0 < (this->Chunks).Array.ArrayNum) {
    do {
      uVar7 = (uint)puVar8;
      uVar9 = 0;
      if ((int)uVar7 < (this->Chunks).Array.ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStreamedAudioChunk::Serialize
                (*(FStreamedAudioChunk **)
                  ((longlong)puVar10 + (longlong)(this->Chunks).Array.AllocatorInstance.Data),
                 param_1,(UObject *)param_2,uVar7);
      puVar8 = (undefined8 *)(ulonglong)(uVar7 + 1);
      puVar10 = puVar10 + 1;
    } while ((int)(uVar7 + 1) < (this->Chunks).Array.ArrayNum);
  }
  return;
}

// StaticStruct @ 14867be70

UScriptStruct * __cdecl FStreamedAudioPlatformData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStreamedAudioPlatformData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStreamedAudioPlatformData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStreamedAudioPlatformData,(UObject *)pUVar1,
                         L"StreamedAudioPlatformData");
  }
  return Z_Registration_Info_UScriptStruct_FStreamedAudioPlatformData.OuterSingleton;
}

