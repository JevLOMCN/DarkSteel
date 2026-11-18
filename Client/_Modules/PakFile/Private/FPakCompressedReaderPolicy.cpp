// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// Serialize @ 142a9cec0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakCompressedReaderPolicy<FPakNoEncryption>::Serialize
          (FPakCompressedReaderPolicy<FPakNoEncryption> *this,long64 param_1,void *param_2,
          long64 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  FPakFile *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FNameEntryId FVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 extraout_var;
  undefined8 uVar13;
  ulonglong uVar14;
  FName FVar15;
  longlong *plVar16;
  long64 lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  size_t sVar23;
  size_t _Size;
  FScopedCompressionScratchBuffers local_1b0;
  FName local_1a8;
  uchar *local_1a0;
  size_t local_198;
  longlong local_190;
  ulonglong local_188;
  longlong local_180;
  FArchive *local_178;
  FPakFile *local_170;
  uchar *local_168 [2];
  FAsyncTaskBase local_158;
  uchar *local_e8;
  undefined8 uStack_e0;
  uchar *local_d8;
  int iStack_d0;
  FNameEntryId FStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  uchar *puStack_c0;
  longlong local_b8;
  size_t sStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  FScriptContainerElement *local_90;
  long64 local_88;
  FString local_80;
  FString local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  uVar11 = (this->PakEntry).CompressionBlockSize;
  local_188 = (ulonglong)uVar11;
  uVar12 = param_1 / (longlong)(int)uVar11;
  local_158.DoneEvent = (FEvent *)0x0;
  local_158.QueuedPool = (FQueuedThreadPool *)0x0;
  local_158._padding_ = 0;
  local_158.WorkNotFinishedCounter.Counter = 0;
  local_158.DebugName = (wchar_t *)0x0;
  lVar18 = param_1 % (longlong)local_188;
  local_a8 = 0;
  local_158._padding_ =
       (longlong)
       &___7__FAsyncTask_VFPakUncompressTask___FPakCompressedReaderPolicy_VFPakNoEncryption______6B_
  ;
  local_d8 = (uchar *)0x0;
  iStack_d0 = 0;
  uStack_a0 = 0;
  uStack_c4 = 0;
  puStack_c0 = (uchar *)0x0;
  FStack_cc.Value = 0;
  uStack_c8 = 0;
  local_158.Priority = Normal;
  local_158.Flags = None;
  local_158.RequiredMemory = -1;
  local_e8 = (uchar *)0x0;
  uStack_e0 = 0;
  local_158.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
  local_b8 = 0;
  sStack_b0 = 0;
  local_1a0 = param_2;
  local_198 = param_3;
  local_180 = lVar18;
  FScopedCompressionScratchBuffers::FScopedCompressionScratchBuffers(&local_1b0);
  uVar11 = (this->PakEntry).CompressionMethodIndex;
  pFVar3 = this->PakFile;
  bVar8 = false;
  uVar21 = 0;
  if ((int)uVar11 < (pFVar3->Info).CompressionMethods.ArrayNum) {
    uVar21 = ~uVar11 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1a8 = *(FName *)((pFVar3->Info).CompressionMethods.AllocatorInstance.Data +
                        (longlong)(int)uVar11 * 8);
  bVar7 = FCompression::IsFormatValid(local_1a8);
  if (!bVar7) {
    ::FName::ToString(&local_1a8,&local_80);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCompression::IsFormatValid(CompressionMethod)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x107d,
                       L"Attempting to use compression format %s when loading a file from a .pak, but that compression format is not available.\nIf you are running a program (like UnrealPak) you may need to pass the .uproject on the commandline so the plugin can be found.\nIt\'s also possible that a necessary compression plugin has not been loaded yet, and this file needs to be forced to use zlib compression.\nUnfortunately, the code that can check this does not have the context of the filename that is being read. You will need to look in the callstack in a debugger.\nSee ExtensionsToNotUsePluginCompression in [Pak] section of Engine.ini to add more extensions."
                      );
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (int)local_188;
  bVar7 = FCompression::GetMaximumCompressedSize(local_1a8,&local_190,(longlong)iVar9,0);
  if (!bVar7) {
    ::FName::ToString(&local_1a8,&local_70);
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
               ,0x1084,
               L"Failed to get compressed size for compression method: %s. Check plugin is loaded.")
    ;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = local_1a8;
  FVar10 = FNameEntryId::FromValidEName((EName)local_98);
  FVar15.Number = 0;
  FVar15.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
  if (FVar6 != FVar15) {
    local_190 = (longlong)((double)local_190 * __real_3ff19999a0000000);
  }
  local_88 = (local_1b0.Inner)->TempBufferSize;
  FCompressionScratchBuffers::EnsureBufferSpace(local_1b0.Inner,(longlong)iVar9,local_190 * 2);
  local_168[0] = ((local_1b0.Inner)->ScratchBuffer).Ptr;
  local_168[1] = local_168[0] + local_190;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->AcquirePakReader);
  pcVar5 = *(code **)&this->AcquirePakReader;
  plVar4 = *(longlong **)&(this->AcquirePakReader).field_0x28;
  plVar16 = (longlong *)&(this->AcquirePakReader).field_0x10;
  if (plVar4 != (longlong *)0x0) {
    plVar16 = plVar4;
  }
  uVar13 = (**(code **)(*plVar16 + 8))();
  (*pcVar5)(&local_178,uVar13);
  if (0 < param_3) {
    do {
      uVar21 = (uint)uVar12;
      uVar11 = 0;
      if ((int)uVar21 < (this->PakEntry).CompressionBlocks.ArrayNum) {
        uVar11 = ~uVar21 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_90 = (this->PakEntry).CompressionBlocks.AllocatorInstance.Data;
      uVar11 = (this->PakEntry).CompressionBlockSize;
      lVar22 = (longlong)(int)uVar21;
      uVar14 = (this->PakEntry).UncompressedSize - (ulonglong)(uVar21 * (int)local_188);
      lVar19 = *(longlong *)(local_90 + lVar22 * 0x10 + 8) - *(longlong *)(local_90 + lVar22 * 0x10)
      ;
      uVar12 = (ulonglong)uVar11;
      if ((longlong)uVar14 < (longlong)(ulonglong)uVar11) {
        uVar12 = uVar14;
      }
      if (((longlong)uVar12 < lVar19) && (5 < (byte)LogPakFile._0_1_)) {
        UE::Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_FPakCompressedReaderPolicy<FPakNoEncryption>::Serialize(__int64,void*___ptr64,__int64)const___ptr64'
                    ::__l26::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      _Size = local_198;
      if ((longlong)(uVar12 - lVar18) < (longlong)local_198) {
        _Size = uVar12 - lVar18;
      }
      if (((((local_88 < (int)local_188) || (bVar8)) ||
           ((local_1b0.Inner)->LastPakEntryOffset != (this->PakEntry).Offset)) ||
          (((pFVar3 = this->PakFile,
            *(longlong *)((local_1b0.Inner)->LastPakIndexHash).Hash !=
            *(longlong *)(pFVar3->Info).IndexHash.Hash ||
            (*(longlong *)(((local_1b0.Inner)->LastPakIndexHash).Hash + 8) !=
             *(longlong *)((pFVar3->Info).IndexHash.Hash + 8))) ||
           ((*(int *)(((local_1b0.Inner)->LastPakIndexHash).Hash + 0x10) !=
             *(int *)((pFVar3->Info).IndexHash.Hash + 0x10) ||
            ((local_1b0.Inner)->LastDecompressedBlock != uVar21)))))) ||
         ((local_180 == 0 && ((longlong)(int)local_188 <= (longlong)local_198)))) {
        if ((this->PakFile->Info).Version < 5) {
          lVar17 = 0;
        }
        else {
          lVar17 = (this->PakEntry).Offset;
        }
        (**(code **)(*(longlong *)local_178 + 0x1b8))
                  (local_178,*(longlong *)(local_90 + lVar22 * 0x10) + lVar17);
        (**(code **)(*(longlong *)local_178 + 0x188))();
        if (bVar8) {
          FAsyncTaskBase::EnsureCompletion(&local_158,true,false);
        }
        if ((local_158.WorkNotFinishedCounter.Counter != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("WorkNotFinishedCounter.GetValue() == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                               ,0x16d,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((local_158.QueuedPool != (FQueuedThreadPool *)0x0) &&
            (::FDebug::DumpStackTraceToLog(Warning),
            local_158.QueuedPool != (FQueuedThreadPool *)0x0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!QueuedPool",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                               ,0x16f,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = this->PakFile;
        local_a8._0_4_ = (pFVar3->Info).EncryptionKeyGuid.A;
        local_a8._4_4_ = (pFVar3->Info).EncryptionKeyGuid.B;
        uStack_a0._0_4_ = (pFVar3->Info).EncryptionKeyGuid.C;
        uStack_a0._4_4_ = (pFVar3->Info).EncryptionKeyGuid.D;
        iVar20 = (int)uVar12;
        iVar9 = (int)lVar19;
        FStack_cc = local_1a8.ComparisonIndex.Value;
        uStack_c8 = local_1a8.Number;
        if ((local_180 == 0) && ((longlong)(int)local_188 <= (longlong)local_198)) {
          local_e8 = local_1a0;
          if ((uVar12 != (longlong)iVar20) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_d8 = local_168[uVar21 & 1];
          uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar20);
          if ((lVar19 != iVar9) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puStack_c0 = (uchar *)0x0;
          (local_1b0.Inner)->LastDecompressedBlock = 0xffffffff;
          ((local_1b0.Inner)->LastPakIndexHash).Hash[0] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[1] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[2] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[3] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[4] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[5] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[6] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[7] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[8] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[9] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[10] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[0xb] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[0xc] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[0xd] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[0xe] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[0xf] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[0x10] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[0x11] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[0x12] = '\0';
          ((local_1b0.Inner)->LastPakIndexHash).Hash[0x13] = '\0';
          local_50 = 0;
          (local_1b0.Inner)->LastPakEntryOffset = -1;
          local_60 = 0;
          uStack_58 = 0;
        }
        else {
          local_e8 = ((local_1b0.Inner)->TempBuffer).Ptr;
          if ((uVar12 != (longlong)iVar20) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_d8 = local_168[uVar21 & 1];
          uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar20);
          if ((lVar19 != iVar9) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puStack_c0 = local_1a0;
          local_b8 = local_180;
          (local_1b0.Inner)->LastDecompressedBlock = uVar21;
          pFVar3 = this->PakFile;
          uVar13 = *(undefined8 *)((pFVar3->Info).IndexHash.Hash + 8);
          uVar2 = *(undefined4 *)((pFVar3->Info).IndexHash.Hash + 0x10);
          *(undefined8 *)((local_1b0.Inner)->LastPakIndexHash).Hash =
               *(undefined8 *)(pFVar3->Info).IndexHash.Hash;
          *(undefined8 *)(((local_1b0.Inner)->LastPakIndexHash).Hash + 8) = uVar13;
          *(undefined4 *)(((local_1b0.Inner)->LastPakIndexHash).Hash + 0x10) = uVar2;
          (local_1b0.Inner)->LastPakEntryOffset = (this->PakEntry).Offset;
          sStack_b0 = _Size;
        }
        sVar23 = local_198;
        iStack_d0 = iVar9;
        FAsyncTaskBase::Start
                  (&local_158,local_198 == _Size,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
        bVar8 = true;
      }
      else {
        memcpy(local_1a0,((local_1b0.Inner)->TempBuffer).Ptr + local_180,_Size);
        sVar23 = local_198;
      }
      local_1a0 = local_1a0 + _Size;
      local_198 = sVar23 - _Size;
      lVar18 = 0;
      uVar12 = (ulonglong)(uVar21 + 1);
      local_180 = 0;
    } while (0 < (longlong)local_198);
    if (bVar8) {
      FAsyncTaskBase::EnsureCompletion(&local_158,true,false);
    }
  }
  if (local_178 != (FArchive *)0x0) {
    FPakFile::ReturnSharedReader(local_170,local_178);
    local_178 = (FArchive *)0x0;
  }
  FScopedCompressionScratchBuffers::~FScopedCompressionScratchBuffers(&local_1b0);
  local_158._padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  if ((local_158.WorkNotFinishedCounter.Counter != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorkNotFinishedCounter.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((local_158.QueuedPool != (FQueuedThreadPool *)0x0) &&
      (::FDebug::DumpStackTraceToLog(Warning), local_158.QueuedPool != (FQueuedThreadPool *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!QueuedPool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FGenericPlatformProcess::ReturnSynchEventToPool(local_158.DoneEvent);
  local_158.DoneEvent = (FEvent *)0x0;
  local_158._padding_ = (longlong)&___7IQueuedWork__6B_;
  if ((undefined8 *)local_158._padding_ != (undefined8 *)0x0) {
    piVar1 = (int *)(local_158._padding_ + 8);
    LOCK();
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar9 == 1) && (piVar1 != (int *)0x0)) {
      (*(code *)**(undefined8 **)local_158._padding_)(local_158._padding_,1);
    }
  }
  return;
}

// Serialize @ 142a9d6d0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakCompressedReaderPolicy<FPakSimpleEncryption>::Serialize
          (FPakCompressedReaderPolicy<FPakSimpleEncryption> *this,long64 param_1,void *param_2,
          long64 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  FPakFile *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FNameEntryId FVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 extraout_var;
  undefined8 uVar13;
  ulonglong uVar14;
  FName FVar15;
  longlong *plVar16;
  long64 lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  size_t _Size;
  uint uVar21;
  longlong lVar22;
  size_t sVar23;
  FScopedCompressionScratchBuffers local_1c0;
  FName local_1b8;
  FPakCompressedReaderPolicy<FPakSimpleEncryption> *local_1b0;
  uchar *local_1a8;
  size_t local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  FArchive *local_180;
  FPakFile *local_178;
  uchar *local_170 [3];
  FAsyncTaskBase local_158;
  uchar *local_e8;
  undefined8 uStack_e0;
  uchar *local_d8;
  int iStack_d0;
  FNameEntryId FStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  uchar *puStack_c0;
  longlong local_b8;
  size_t sStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  FScriptContainerElement *local_90;
  long64 local_88;
  FString local_80;
  FString local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  uVar11 = (this->PakEntry).CompressionBlockSize;
  local_190 = (ulonglong)uVar11;
  uVar12 = param_1 / (longlong)(int)uVar11;
  local_158._padding_ = 0;
  local_158.WorkNotFinishedCounter.Counter = 0;
  local_158.DebugName = (wchar_t *)0x0;
  lVar18 = param_1 % (longlong)local_190;
  local_a8 = 0;
  local_158._padding_ =
       (longlong)
       &
       ___7__FAsyncTask_VFPakUncompressTask___FPakCompressedReaderPolicy_VFPakSimpleEncryption______6B_
  ;
  local_d8 = (uchar *)0x0;
  iStack_d0 = 0;
  uStack_a0 = 0;
  uStack_c4 = 0;
  puStack_c0 = (uchar *)0x0;
  FStack_cc.Value = 0;
  uStack_c8 = 0;
  local_158.DoneEvent = (FEvent *)0x0;
  local_158.QueuedPool = (FQueuedThreadPool *)0x0;
  local_158.Priority = Normal;
  local_158.Flags = None;
  local_158.RequiredMemory = -1;
  local_e8 = (uchar *)0x0;
  uStack_e0 = 0;
  local_158.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
  local_b8 = 0;
  sStack_b0 = 0;
  local_1b0 = this;
  local_1a8 = param_2;
  local_1a0 = param_3;
  local_188 = lVar18;
  FScopedCompressionScratchBuffers::FScopedCompressionScratchBuffers(&local_1c0);
  uVar11 = (this->PakEntry).CompressionMethodIndex;
  pFVar3 = this->PakFile;
  bVar8 = false;
  uVar21 = 0;
  if ((int)uVar11 < (pFVar3->Info).CompressionMethods.ArrayNum) {
    uVar21 = ~uVar11 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1b8 = *(FName *)((pFVar3->Info).CompressionMethods.AllocatorInstance.Data +
                        (longlong)(int)uVar11 * 8);
  bVar7 = FCompression::IsFormatValid(local_1b8);
  if (!bVar7) {
    ::FName::ToString(&local_1b8,&local_80);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCompression::IsFormatValid(CompressionMethod)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x107d,
                       L"Attempting to use compression format %s when loading a file from a .pak, but that compression format is not available.\nIf you are running a program (like UnrealPak) you may need to pass the .uproject on the commandline so the plugin can be found.\nIt\'s also possible that a necessary compression plugin has not been loaded yet, and this file needs to be forced to use zlib compression.\nUnfortunately, the code that can check this does not have the context of the filename that is being read. You will need to look in the callstack in a debugger.\nSee ExtensionsToNotUsePluginCompression in [Pak] section of Engine.ini to add more extensions."
                      );
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (int)local_190;
  bVar7 = FCompression::GetMaximumCompressedSize(local_1b8,(long64 *)&local_198,(longlong)iVar9,0);
  if (!bVar7) {
    ::FName::ToString(&local_1b8,&local_70);
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
               ,0x1084,
               L"Failed to get compressed size for compression method: %s. Check plugin is loaded.")
    ;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = local_1b8;
  FVar10 = FNameEntryId::FromValidEName((EName)local_98);
  FVar15.Number = 0;
  FVar15.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
  if (FVar6 != FVar15) {
    local_198 = (ulonglong)((double)(longlong)local_198 * __real_3ff19999a0000000);
  }
  local_198 = local_198 + 0xf & 0xfffffffffffffff0;
  local_88 = (local_1c0.Inner)->TempBufferSize;
  FCompressionScratchBuffers::EnsureBufferSpace(local_1c0.Inner,(longlong)iVar9,local_198 * 2);
  local_170[0] = ((local_1c0.Inner)->ScratchBuffer).Ptr;
  local_170[1] = local_170[0] + local_198;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->AcquirePakReader);
  pcVar5 = *(code **)&this->AcquirePakReader;
  plVar4 = *(longlong **)&(this->AcquirePakReader).field_0x28;
  plVar16 = (longlong *)&(this->AcquirePakReader).field_0x10;
  if (plVar4 != (longlong *)0x0) {
    plVar16 = plVar4;
  }
  uVar13 = (**(code **)(*plVar16 + 8))();
  (*pcVar5)(&local_180,uVar13);
  if (0 < param_3) {
    do {
      uVar21 = (uint)uVar12;
      uVar11 = 0;
      if ((int)uVar21 < (this->PakEntry).CompressionBlocks.ArrayNum) {
        uVar11 = ~uVar21 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_90 = (this->PakEntry).CompressionBlocks.AllocatorInstance.Data;
      uVar11 = (this->PakEntry).CompressionBlockSize;
      lVar22 = (longlong)(int)uVar21;
      uVar14 = (this->PakEntry).UncompressedSize - (ulonglong)(uVar21 * (int)local_190);
      lVar19 = *(longlong *)(local_90 + lVar22 * 0x10 + 8) - *(longlong *)(local_90 + lVar22 * 0x10)
      ;
      uVar12 = (ulonglong)uVar11;
      if ((longlong)uVar14 < (longlong)(ulonglong)uVar11) {
        uVar12 = uVar14;
      }
      if (((longlong)uVar12 < lVar19) && (5 < (byte)LogPakFile._0_1_)) {
        UE::Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_FPakCompressedReaderPolicy<FPakSimpleEncryption>::Serialize(__int64,void*___ptr64,__int64)const___ptr64'
                    ::__l26::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      _Size = local_1a0;
      if ((longlong)(uVar12 - lVar18) < (longlong)local_1a0) {
        _Size = uVar12 - lVar18;
      }
      if (((((local_88 < (int)local_190) || (bVar8)) ||
           ((local_1c0.Inner)->LastPakEntryOffset != (local_1b0->PakEntry).Offset)) ||
          (((pFVar3 = local_1b0->PakFile,
            *(longlong *)((local_1c0.Inner)->LastPakIndexHash).Hash !=
            *(longlong *)(pFVar3->Info).IndexHash.Hash ||
            (*(longlong *)(((local_1c0.Inner)->LastPakIndexHash).Hash + 8) !=
             *(longlong *)((pFVar3->Info).IndexHash.Hash + 8))) ||
           ((*(int *)(((local_1c0.Inner)->LastPakIndexHash).Hash + 0x10) !=
             *(int *)((pFVar3->Info).IndexHash.Hash + 0x10) ||
            ((local_1c0.Inner)->LastDecompressedBlock != uVar21)))))) ||
         ((local_188 == 0 && ((longlong)(int)local_190 <= (longlong)local_1a0)))) {
        if ((local_1b0->PakFile->Info).Version < 5) {
          lVar17 = 0;
        }
        else {
          lVar17 = (local_1b0->PakEntry).Offset;
        }
        (**(code **)(*(longlong *)local_180 + 0x1b8))
                  (local_180,*(longlong *)(local_90 + lVar22 * 0x10) + lVar17);
        (**(code **)(*(longlong *)local_180 + 0x188))();
        if (bVar8) {
          FAsyncTaskBase::EnsureCompletion(&local_158,true,false);
        }
        if ((local_158.WorkNotFinishedCounter.Counter != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("WorkNotFinishedCounter.GetValue() == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                               ,0x16d,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((local_158.QueuedPool != (FQueuedThreadPool *)0x0) &&
            (::FDebug::DumpStackTraceToLog(Warning),
            local_158.QueuedPool != (FQueuedThreadPool *)0x0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!QueuedPool",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                               ,0x16f,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this = local_1b0;
        pFVar3 = local_1b0->PakFile;
        local_a8._0_4_ = (pFVar3->Info).EncryptionKeyGuid.A;
        local_a8._4_4_ = (pFVar3->Info).EncryptionKeyGuid.B;
        uStack_a0._0_4_ = (pFVar3->Info).EncryptionKeyGuid.C;
        uStack_a0._4_4_ = (pFVar3->Info).EncryptionKeyGuid.D;
        iVar20 = (int)uVar12;
        iVar9 = (int)lVar19;
        FStack_cc = local_1b8.ComparisonIndex.Value;
        uStack_c8 = local_1b8.Number;
        if ((local_188 == 0) && ((longlong)(int)local_190 <= (longlong)local_1a0)) {
          local_e8 = local_1a8;
          if ((uVar12 != (longlong)iVar20) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_d8 = local_170[uVar21 & 1];
          uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar20);
          if ((lVar19 != iVar9) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puStack_c0 = (uchar *)0x0;
          (local_1c0.Inner)->LastDecompressedBlock = 0xffffffff;
          ((local_1c0.Inner)->LastPakIndexHash).Hash[0] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[1] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[2] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[3] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[4] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[5] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[6] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[7] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[8] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[9] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[10] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[0xb] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[0xc] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[0xd] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[0xe] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[0xf] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[0x10] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[0x11] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[0x12] = '\0';
          ((local_1c0.Inner)->LastPakIndexHash).Hash[0x13] = '\0';
          local_50 = 0;
          (local_1c0.Inner)->LastPakEntryOffset = -1;
          local_60 = 0;
          uStack_58 = 0;
        }
        else {
          local_e8 = ((local_1c0.Inner)->TempBuffer).Ptr;
          if ((uVar12 != (longlong)iVar20) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_d8 = local_170[uVar21 & 1];
          uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar20);
          if ((lVar19 != iVar9) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puStack_c0 = local_1a8;
          local_b8 = local_188;
          (local_1c0.Inner)->LastDecompressedBlock = uVar21;
          pFVar3 = this->PakFile;
          uVar13 = *(undefined8 *)((pFVar3->Info).IndexHash.Hash + 8);
          uVar2 = *(undefined4 *)((pFVar3->Info).IndexHash.Hash + 0x10);
          *(undefined8 *)((local_1c0.Inner)->LastPakIndexHash).Hash =
               *(undefined8 *)(pFVar3->Info).IndexHash.Hash;
          *(undefined8 *)(((local_1c0.Inner)->LastPakIndexHash).Hash + 8) = uVar13;
          *(undefined4 *)(((local_1c0.Inner)->LastPakIndexHash).Hash + 0x10) = uVar2;
          (local_1c0.Inner)->LastPakEntryOffset = (this->PakEntry).Offset;
          sStack_b0 = _Size;
        }
        sVar23 = local_1a0;
        iStack_d0 = iVar9;
        FAsyncTaskBase::Start
                  (&local_158,local_1a0 == _Size,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
        bVar8 = true;
      }
      else {
        memcpy(local_1a8,((local_1c0.Inner)->TempBuffer).Ptr + local_188,_Size);
        this = local_1b0;
        sVar23 = local_1a0;
      }
      local_1a8 = local_1a8 + _Size;
      local_1a0 = sVar23 - _Size;
      lVar18 = 0;
      uVar12 = (ulonglong)(uVar21 + 1);
      local_188 = 0;
    } while (0 < (longlong)local_1a0);
    if (bVar8) {
      FAsyncTaskBase::EnsureCompletion(&local_158,true,false);
    }
  }
  if (local_180 != (FArchive *)0x0) {
    FPakFile::ReturnSharedReader(local_178,local_180);
    local_180 = (FArchive *)0x0;
  }
  FScopedCompressionScratchBuffers::~FScopedCompressionScratchBuffers(&local_1c0);
  local_158._padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  if ((local_158.WorkNotFinishedCounter.Counter != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorkNotFinishedCounter.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((local_158.QueuedPool != (FQueuedThreadPool *)0x0) &&
      (::FDebug::DumpStackTraceToLog(Warning), local_158.QueuedPool != (FQueuedThreadPool *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!QueuedPool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FGenericPlatformProcess::ReturnSynchEventToPool(local_158.DoneEvent);
  local_158.DoneEvent = (FEvent *)0x0;
  local_158._padding_ = (longlong)&___7IQueuedWork__6B_;
  if ((undefined8 *)local_158._padding_ != (undefined8 *)0x0) {
    piVar1 = (int *)(local_158._padding_ + 8);
    LOCK();
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar9 == 1) && (piVar1 != (int *)0x0)) {
      (*(code *)**(undefined8 **)local_158._padding_)(local_158._padding_,1);
    }
  }
  return;
}

