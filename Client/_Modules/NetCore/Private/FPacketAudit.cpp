// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 10

// FPacketAudit @ 1441d2070

FPacketAudit * __thiscall FPacketAudit::FPacketAudit(FPacketAudit *this,FSemaphore *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  FSemaphore *pFVar3;
  FString *pFVar4;
  FSharedMemoryRegion *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FArchiveState local_168;
  undefined8 local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  FArchiveState local_b8;
  undefined8 local_28;
  undefined4 *local_20;
  undefined4 *local_18;
  
  this->GameMutex = param_1;
  pFVar3 = FWindowsPlatformProcess::NewInterprocessSynchObject(L"UEPacketAudit",true,1);
  this->SharedMutex = pFVar3;
  bVar2 = GIsServer;
  pFVar4 = ::FString::FString(&local_178,L"UEPacketAudit");
  pwVar7 = L"Client";
  pwVar6 = L"Server";
  if (bVar2 != false) {
    pwVar7 = L"Server";
  }
  ::FString::ConcatFC(&local_1a8,pFVar4,pwVar7);
  ::FString::ConcatFC(&local_188,&local_1a8,L"Send");
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  bVar2 = GIsServer;
  pFVar4 = ::FString::FString(&local_178,L"UEPacketAudit");
  if (bVar2 != false) {
    pwVar6 = L"Client";
  }
  ::FString::ConcatFC(&local_1a8,pFVar4,pwVar6);
  ::FString::ConcatFC(&local_198,&local_1a8,L"Send");
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  pFVar5 = FWindowsPlatformMemory::MapNamedSharedMemoryRegion
                     (&local_188,true,6,0x2000000,(void *)0x0);
  this->SendSharedMemory = pFVar5;
  pFVar5 = FWindowsPlatformMemory::MapNamedSharedMemoryRegion
                     (&local_198,true,6,0x2000000,(void *)0x0);
  this->ReceiveSharedMemory = pFVar5;
  if ((this->SendSharedMemory == (FSharedMemoryRegion *)0x0) ||
     (pFVar5 == (FSharedMemoryRegion *)0x0)) {
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
               ,0x100,L"You need to run UnrealEngine as administrator, for packet auditing to work."
              );
  }
  else {
    puVar1 = this->SendSharedMemory->Address;
    local_b8._padding_ = 0;
    local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_b8._40_8_ = 0;
    local_b8.ArSerializingDefaults = 0;
    local_b8.ArPortFlags = 0;
    local_b8.ArMaxSerializeSize = 0;
    local_b8.ArUEVer.FileVersionUE4 = 0;
    local_b8.ArUEVer.FileVersionUE5 = 0;
    local_b8.ArLicenseeUEVer = 0;
    local_b8.ArEngineVer.Major = 0;
    local_b8.ArEngineVer.Minor = 0;
    local_b8.ArEngineVer.Patch = 0;
    local_b8.ArEngineVer._6_2_ = 0;
    local_b8.ArEngineVer.Changelist = 0;
    local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_b8.SerializedProperty = (FProperty *)0x0;
    local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_b8.bCustomVersionsAreReset = false;
    local_b8._129_7_ = 0;
    local_b8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_b8);
    local_18 = puVar1 + 1;
    local_28 = 0;
    local_b8._padding_ = (longlong)&___7FSharedMemoryWriter__6B_;
    local_20 = puVar1;
    FArchiveState::SetIsSaving(&local_b8,true);
    *local_20 = 0;
    puVar1 = this->ReceiveSharedMemory->Address;
    local_168._padding_ = 0;
    local_168.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_168.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_168.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_168.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_168._40_8_ = 0;
    local_168.ArSerializingDefaults = 0;
    local_168.ArPortFlags = 0;
    local_168.ArMaxSerializeSize = 0;
    local_168.ArUEVer.FileVersionUE4 = 0;
    local_168.ArUEVer.FileVersionUE5 = 0;
    local_168.ArLicenseeUEVer = 0;
    local_168.ArEngineVer.Major = 0;
    local_168.ArEngineVer.Minor = 0;
    local_168.ArEngineVer.Patch = 0;
    local_168.ArEngineVer._6_2_ = 0;
    local_168.ArEngineVer.Changelist = 0;
    local_168.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_168.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_168.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_168.SerializedProperty = (FProperty *)0x0;
    local_168.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_168.bCustomVersionsAreReset = false;
    local_168._129_7_ = 0;
    local_168.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_168);
    local_c8 = puVar1 + 1;
    local_d8 = 0;
    local_168._padding_ = (longlong)&___7FSharedMemoryWriter__6B_;
    local_d0 = puVar1;
    FArchiveState::SetIsSaving(&local_168,true);
    *local_d0 = 0;
    FArchive::~FArchive((FArchive *)&local_168);
    FArchive::~FArchive((FArchive *)&local_b8);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FPacketAudit @ 1441d4170

void __thiscall FPacketAudit::~FPacketAudit(FPacketAudit *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->GameMutex == (FSemaphore *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameMutex != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                       ,0x10c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->SharedMutex == (FSemaphore *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SharedMutex != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                       ,0x10d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->SendSharedMemory == (FSharedMemoryRegion *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SendSharedMemory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                       ,0x10e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ReceiveSharedMemory == (FSharedMemoryRegion *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReceiveSharedMemory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                       ,0x10f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(this->GameMutex->_padding_ + 0x10))();
  FWindowsPlatformProcess::DeleteInterprocessSynchObject(this->GameMutex);
  FWindowsPlatformProcess::DeleteInterprocessSynchObject(this->SharedMutex);
  this->GameMutex = (FSemaphore *)0x0;
  this->SharedMutex = (FSemaphore *)0x0;
  FWindowsPlatformMemory::UnmapNamedSharedMemoryRegion(this->SendSharedMemory);
  FWindowsPlatformMemory::UnmapNamedSharedMemoryRegion(this->ReceiveSharedMemory);
  return;
}

// AddStage_Internal @ 1441d65d0

void __thiscall
FPacketAudit::AddStage_Internal
          (FPacketAudit *this,FString *param_1,FBitWriter *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FBitWriter *pFVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  FString *local_res10 [2];
  TKeyInitializer<FString_const_&> local_res20;
  
  pFVar3 = param_2;
  if (((GPendingSendPacket.Writer != (FBitWriter *)0x0) &&
      (pFVar3 = GPendingSendPacket.Writer, GPendingSendPacket.Writer != param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPendingSendPacket.Writer == &OutPacket",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                         ,0x145,L""), pFVar3 = GPendingSendPacket.Writer, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  GPendingSendPacket.Writer = pFVar3;
  local_res10[0] = param_1;
  TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FString_const_&>_>
            ((TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
              *)&GPendingSendPacket.StageMap,&local_res20,(bool *)local_res10);
  uVar6 = param_2->Num;
  lVar7 = (longlong)(int)local_res20.Key * 0x20 + GPendingSendPacket.StageMap._0_8_;
  if (param_3) {
    uVar6 = uVar6 + 7 & 0xfffffffffffffff8;
  }
  if (((uVar6 != (uVar6 & 0xffffffff)) || ((longlong)uVar6 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)(lVar7 + 0x10) = (uint)uVar6;
  if (((param_2->_padding_ & 0x200) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                         ,0x49,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = PacketCRC((uchar *)(param_2->Buffer).AllocatorInstance.Data,(uint)uVar6);
  *(uint *)(lVar7 + 0x14) = uVar5;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// CheckStage_Internal @ 1441d7260

void __thiscall
FPacketAudit::CheckStage_Internal
          (FPacketAudit *this,FString *param_1,FBitReader *param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint *puVar11;
  longlong lVar12;
  uint local_res8 [2];
  FScopedAuditAccess local_res10;
  FSharedMemoryReader local_198;
  FSharedMemoryReader local_e8;
  
  local_res10.Auditor = this;
  (**(code **)this->SharedMutex->_padding_)();
  FSharedMemoryReader::FSharedMemoryReader(&local_e8,this->SendSharedMemory->Address);
  FSharedMemoryReader::FSharedMemoryReader(&local_198,this->ReceiveSharedMemory->Address);
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
            ((FArchive *)&local_e8,
             (TSet<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
              *)&GSendPacketAudits);
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
            ((FArchive *)&local_198,
             (TSet<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
              *)&GReceivePacketAudits);
  FArchive::~FArchive((FArchive *)&local_198);
  FArchive::~FArchive((FArchive *)&local_e8);
  if (GReceivePacketAudits._8_4_ != GReceivePacketAudits._52_4_) {
    lVar12 = 0x154bb3f18;
    if (GReceivePacketAudits._64_8_ != 0) {
      lVar12 = GReceivePacketAudits._64_8_;
    }
    uVar5 = *(uint *)(lVar12 + (ulonglong)(GReceivePacketAudits._72_4_ - 1 & GCurrentReceivePacket)
                               * 4);
    while (uVar5 != 0xffffffff) {
      puVar7 = (uint *)((longlong)(int)uVar5 * 0x68 + GReceivePacketAudits._0_8_);
      if (*puVar7 == GCurrentReceivePacket) {
        puVar11 = puVar7 + 2;
        if (puVar7 == (uint *)0x0) {
          puVar11 = (uint *)0x0;
        }
        if (puVar11 != (uint *)0x0) {
          iVar1 = (param_1->Data).ArrayNum;
          pwVar10 = L"";
          iVar6 = iVar1 + -1;
          if (iVar1 == 0) {
            pwVar9 = L"";
            iVar6 = 0;
          }
          else {
            pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          }
          uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
          iVar6 = TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
                              *)(puVar11 + 2),uVar5,param_1);
          if (iVar6 != -1) {
            lVar12 = (longlong)iVar6 * 0x20 + *(longlong *)(puVar11 + 2);
            puVar7 = (uint *)(lVar12 + 0x10);
            if (lVar12 == 0) {
              puVar7 = (uint *)0x0;
            }
            if (puVar7 != (uint *)0x0) {
              uVar8 = param_2->Num;
              if (param_3) {
                uVar8 = uVar8 + 7 & 0xfffffffffffffff8;
              }
              uVar8 = uVar8 - param_2->Pos;
              if (((uVar8 != (uVar8 & 0xff)) || ((longlong)uVar8 < 0)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IntFitsIn<OutType>(In)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                     ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar5 = (uint)(uVar8 & 0xff);
              if (uVar5 == *puVar7) {
                uVar5 = PacketCRC((uchar *)(param_2->Buffer).AllocatorInstance.Data,uVar5);
                if (uVar5 == puVar7[1]) {
                  if (puVar11[4] != puVar11[0xf]) {
                    iVar1 = (param_1->Data).ArrayNum;
                    iVar6 = iVar1 + -1;
                    if (iVar1 == 0) {
                      iVar6 = 0;
                    }
                    else {
                      pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
                    }
                    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
                    TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
                    ::RemoveImpl<FString>
                              ((TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
                                *)(puVar11 + 2),uVar5,param_1);
                  }
                  if (puVar11[4] == puVar11[0xf]) {
                    local_res8[0] = GCurrentReceivePacket;
                    if (GReceivePacketAudits._8_4_ != GReceivePacketAudits._52_4_) {
                      TSet<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
                      ::RemoveImpl<unsigned_int>
                                ((TSet<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
                                  *)&GReceivePacketAudits,GCurrentReceivePacket,local_res8);
                    }
                    GLastReceivePacket = GCurrentReceivePacket;
                  }
                }
                else {
                  DumpAuditData(this,&local_res10,GCurrentReceivePacket);
                  UE::Assert::Private::ProcessLowLevelFatalError
                            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                             ,0x170,L"%s: Expected Stage CRC \'%08X\', got Stage CRC \'%08X\'.");
                }
              }
              else {
                DumpAuditData(this,&local_res10,GCurrentReceivePacket);
                UE::Assert::Private::ProcessLowLevelFatalError
                          ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                           ,0x176,L"%s: Expected \'%i\' bits left, got \'%i\'.");
              }
              goto LAB_1441d7637;
            }
          }
          DumpAuditData(this,&local_res10,GCurrentReceivePacket);
          UE::Assert::Private::ProcessLowLevelFatalError
                    ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                     ,0x17c,L"%s: Could not find StageName.");
          goto LAB_1441d7637;
        }
        break;
      }
      uVar5 = puVar7[0x18];
    }
  }
  DumpAuditData(this,&local_res10,GCurrentReceivePacket);
  if (GLastReceivePacket == GCurrentReceivePacket) {
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
               ,0x185,L"%s: Already finished proccesing all stages from packet.");
  }
  else {
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
               ,0x18a,L"%s: Failed to find packet CRC: %08X. Duplicate/resent packet?");
  }
LAB_1441d7637:
  FScopedAuditAccess::~FScopedAuditAccess(&local_res10);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Destruct @ 1441d9e80

void __cdecl FPacketAudit::Destruct(void)

{
  code *pcVar1;
  FPacketAudit *pFVar2;
  bool bVar3;
  
  pFVar2 = GPacketAuditor;
  if (GPacketAuditor != (FPacketAudit *)0x0) {
    if (GPacketAuditor->GameMutex == (FSemaphore *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GameMutex != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                         ,0x10c,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (pFVar2->SharedMutex == (FSemaphore *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedMutex != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                         ,0x10d,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (pFVar2->SendSharedMemory == (FSharedMemoryRegion *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SendSharedMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                         ,0x10e,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (pFVar2->ReceiveSharedMemory == (FSharedMemoryRegion *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReceiveSharedMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                         ,0x10f,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(pFVar2->GameMutex->_padding_ + 0x10))();
    FWindowsPlatformProcess::DeleteInterprocessSynchObject(pFVar2->GameMutex);
    FWindowsPlatformProcess::DeleteInterprocessSynchObject(pFVar2->SharedMutex);
    pFVar2->GameMutex = (FSemaphore *)0x0;
    pFVar2->SharedMutex = (FSemaphore *)0x0;
    FWindowsPlatformMemory::UnmapNamedSharedMemoryRegion(pFVar2->SendSharedMemory);
    FWindowsPlatformMemory::UnmapNamedSharedMemoryRegion(pFVar2->ReceiveSharedMemory);
    ::operator_delete(pFVar2,0x20);
  }
  GPacketAuditor = (FPacketAudit *)0x0;
  return;
}

// DumpAuditData @ 1441da080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPacketAudit::DumpAuditData(FPacketAudit *this,FScopedAuditAccess *param_1,uint param_2)

{
  longlong lVar1;
  TMap<unsigned_int,FPacketAuditData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>_>
  *pTVar2;
  FString *pFVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  TMap<unsigned_int,FPacketAuditData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>_>
  *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar6 = 0;
  uVar12 = 0;
  uVar8 = 0;
  bVar13 = param_2 == 0;
  if (bVar13) {
    pFVar3 = ::FString::FString(&local_88,L"");
  }
  else {
    ::FString::PrintfImpl(&local_98,L"PacketCRC: %08X,\r\n");
    pFVar3 = &local_98;
  }
  local_a8.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_a8.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if ((bVar13) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((!bVar13) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(&local_a8,L"GSendPacketAudits:\r\n(\r\n",0x17);
  local_78.Data.ArrayMax = 1;
  iVar11 = GSendPacketAudits._40_4_;
  uVar5 = uVar6;
  local_58 = uVar8;
  if (iVar11 != 0) {
    puVar10 = (uint *)&GSendPacketAudits.field_0x10;
    if (GSendPacketAudits._32_8_ != 0) {
      puVar10 = (uint *)GSendPacketAudits._32_8_;
    }
    uVar4 = *puVar10;
    uVar9 = uVar6;
    local_58 = uVar12;
    uVar8 = uVar12;
    while (uVar4 == 0) {
      iVar7 = (int)uVar5;
      local_58 = (int)uVar9 + 0x20;
      uVar9 = (ulonglong)local_58;
      uVar8 = iVar7 + 1;
      uVar5 = (ulonglong)uVar8;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar8) {
        uVar5 = GSendPacketAudits._40_8_ & 0xffffffff;
        goto LAB_1441da1bc;
      }
      uVar4 = puVar10[(longlong)iVar7 + 1];
    }
    local_78.Data.ArrayMax = -uVar4 & uVar4;
    uVar5 = (ulonglong)(uint)local_78.Data.ArrayMax * 2 + 1;
    lVar1 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar4 = (int)lVar1 + -1 + local_58;
    uVar5 = (ulonglong)uVar4;
    if (iVar11 < (int)uVar4) {
      uVar5 = GSendPacketAudits._40_8_ & 0xffffffff;
    }
  }
LAB_1441da1bc:
  uStack_5c = (uint)uVar5;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)&GSendPacketAudits;
  local_68 = 0x154bb3ea0;
  uStack_60 = 0xffffffff;
  TStack_40._padding_ = CONCAT44(local_78.Data.ArrayMax,uVar8);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  local_48 = &GSendPacketAudits;
  TStack_40._28_4_ = uStack_5c;
  TStack_40.BaseBitIndex = local_58;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&GSendPacketAudits.field_0x10;
  local_78.Data.ArrayNum = uVar8;
  uStack_54 = uStack_5c;
  TStack_40.CurrentBitIndex = uStack_5c;
  if ((int)uStack_5c < iVar11) {
    do {
      pTVar2 = local_48;
      ::FString::PrintfImpl(&local_88,L"\tPacketCRC: %08X,\r\n");
      uVar8 = local_88.Data.ArrayNum - 1;
      if (local_88.Data.ArrayNum == 0) {
        uVar8 = uVar12;
      }
      ::FString::AppendChars(&local_a8,(wchar_t *)local_88.Data.AllocatorInstance.Data,uVar8);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(&local_a8,L"\tAuditData:\r\n",0xd);
      pFVar3 = FPacketAuditData::ToString
                         ((FPacketAuditData *)
                          (*(longlong *)pTVar2 + 8 + (longlong)(int)uVar5 * 0x68),&local_78,1);
      ::FString::ConcatFC(&local_98,pFVar3,L"\r\n");
      uVar8 = local_98.Data.ArrayNum - 1;
      if (local_98.Data.ArrayNum == 0) {
        uVar8 = uVar12;
      }
      ::FString::AppendChars(&local_a8,(wchar_t *)local_98.Data.AllocatorInstance.Data,uVar8);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if ((TMap<unsigned_int,FPacketAuditData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>_>
           *)local_78.Data.AllocatorInstance.Data !=
          (TMap<unsigned_int,FPacketAuditData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>_>
           *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
      uVar5 = (ulonglong)(uint)TStack_40.CurrentBitIndex;
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  ::FString::AppendChars(&local_a8,L"),\r\nGReceivePacketAudits:\r\n(\r\n",0x1e);
  local_78.Data.ArrayMax = 1;
  iVar11 = GReceivePacketAudits._40_4_;
  local_78.Data.ArrayNum = uVar12;
  local_58 = uVar12;
  if (iVar11 != 0) {
    puVar10 = (uint *)&GReceivePacketAudits.field_0x10;
    if (GReceivePacketAudits._32_8_ != 0) {
      puVar10 = (uint *)GReceivePacketAudits._32_8_;
    }
    uVar8 = *puVar10;
    uVar5 = uVar6;
    while (uVar8 == 0) {
      iVar7 = (int)uVar6;
      local_58 = (int)uVar5 + 0x20;
      uVar5 = (ulonglong)local_58;
      local_78.Data.ArrayNum = iVar7 + 1;
      uVar6 = (ulonglong)(uint)local_78.Data.ArrayNum;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Data.ArrayNum) {
        uVar6 = GReceivePacketAudits._40_8_ & 0xffffffff;
        goto LAB_1441da38d;
      }
      uVar8 = puVar10[(longlong)iVar7 + 1];
    }
    local_78.Data.ArrayMax = -uVar8 & uVar8;
    uVar6 = (ulonglong)(uint)local_78.Data.ArrayMax * 2 + 1;
    lVar1 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar8 = (int)lVar1 + -1 + local_58;
    uVar6 = (ulonglong)uVar8;
    if (iVar11 < (int)uVar8) {
      uVar6 = GReceivePacketAudits._40_8_ & 0xffffffff;
    }
  }
LAB_1441da38d:
  uStack_5c = (uint)uVar6;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)&GReceivePacketAudits;
  local_68 = 0x154bb3ef0;
  uStack_60 = 0xffffffff;
  TStack_40._padding_ = CONCAT44(local_78.Data.ArrayMax,local_78.Data.ArrayNum);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  local_48 = &GReceivePacketAudits;
  TStack_40._28_4_ = uStack_5c;
  TStack_40.BaseBitIndex = local_58;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&GReceivePacketAudits.field_0x10;
  uStack_54 = uStack_5c;
  TStack_40.CurrentBitIndex = uStack_5c;
  if ((int)uStack_5c < iVar11) {
    do {
      pTVar2 = local_48;
      ::FString::PrintfImpl(&local_98,L"\tPacketCRC: %08X,\r\n");
      uVar8 = local_98.Data.ArrayNum - 1;
      if (local_98.Data.ArrayNum == 0) {
        uVar8 = uVar12;
      }
      ::FString::AppendChars(&local_a8,(wchar_t *)local_98.Data.AllocatorInstance.Data,uVar8);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(&local_a8,L"\tAuditData:\r\n",0xd);
      pFVar3 = FPacketAuditData::ToString
                         ((FPacketAuditData *)
                          (*(longlong *)pTVar2 + 8 + (longlong)(int)uVar6 * 0x68),&local_78,1);
      ::FString::ConcatFC(&local_88,pFVar3,L"\r\n");
      uVar8 = local_88.Data.ArrayNum - 1;
      if (local_88.Data.ArrayNum == 0) {
        uVar8 = uVar12;
      }
      ::FString::AppendChars(&local_a8,(wchar_t *)local_88.Data.AllocatorInstance.Data,uVar8);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if ((TMap<unsigned_int,FPacketAuditData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>_>
           *)local_78.Data.AllocatorInstance.Data !=
          (TMap<unsigned_int,FPacketAuditData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>_>
           *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
      uVar6 = (ulonglong)(uint)TStack_40.CurrentBitIndex;
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  ::FString::AppendChars(&local_a8,L")",1);
  if (4 < (byte)LogNetCore._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// Init @ 1441dd720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FPacketAudit::Init(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  FSemaphore *pFVar6;
  FPacketAudit *this;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (GPacketAuditor == (FPacketAudit *)0x0) {
    pwVar4 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar4,L"PacketAudit");
    bVar1 = GIsServer;
    if (bVar2) {
      pFVar5 = ::FString::FString(&local_38,L"UEPacketAudit");
      pwVar4 = L"ClientProcess";
      if (bVar1 != false) {
        pwVar4 = L"ServerProcess";
      }
      ::FString::ConcatFC(&local_28,pFVar5,pwVar4);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      pFVar6 = FWindowsPlatformProcess::NewInterprocessSynchObject(&local_28,true,1);
      cVar3 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
      bVar1 = GIsServer;
      if (cVar3 == '\0') {
        if (4 < (byte)LogNetCore._0_1_) {
          pFVar5 = ::FString::FString(&local_18,L"Packet auditor already active for a game ");
          pwVar4 = L"client";
          if (bVar1 != false) {
            pwVar4 = L"server";
          }
          ::FString::ConcatFC(&local_38,pFVar5,pwVar4);
          ::FString::ConcatFC(&local_48,&local_38,L", can\'t start multiple instances.");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        FWindowsPlatformProcess::DeleteInterprocessSynchObject(pFVar6);
      }
      else {
        this = ::operator_new(0x20);
        if (this == (FPacketAudit *)0x0) {
          GPacketAuditor = (FPacketAudit *)0x0;
        }
        else {
          GPacketAuditor = FPacketAudit(this,pFVar6);
        }
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// NotifyLowLevelReceive_Internal @ 1441e29d0

void __thiscall FPacketAudit::NotifyLowLevelReceive_Internal(FPacketAudit *this,FBitReader *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = param_1->Num;
  if ((uVar1 != (uVar1 & 0xffffffff)) || ((longlong)uVar1 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  GCurrentReceivePacket = PacketCRC((uchar *)(param_1->Buffer).AllocatorInstance.Data,(uint)uVar1);
  GLastReceivePacket = 0;
  return;
}

// NotifyLowLevelSend_Internal @ 1441e2a50

void __thiscall FPacketAudit::NotifyLowLevelSend_Internal(FPacketAudit *this,FBitWriter *param_1)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uchar *puVar6;
  longlong lVar7;
  uint uVar8;
  uint local_res18 [2];
  TKeyInitializer<unsigned_int_const_&> local_res20;
  uint *local_18;
  FScopedAuditAccess local_10;
  
  if (GPendingSendPacket.Writer != (FBitWriter *)0x0) {
    uVar2 = param_1->Num;
    if (((uVar2 != (uVar2 & 0xffffffff)) || ((longlong)uVar2 < 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5))
    {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = (uint)uVar2;
    if (uVar8 != 0) {
      puVar6 = FBitWriter::GetData(param_1);
      local_res18[0] = PacketCRC(puVar6,uVar8);
      FScopedAuditAccess::FScopedAuditAccess(&local_10,this);
      if (GSendPacketAudits._8_4_ != GSendPacketAudits._52_4_) {
        lVar7 = 0x154bb3ec8;
        if (GSendPacketAudits._64_8_ != 0) {
          lVar7 = GSendPacketAudits._64_8_;
        }
        for (iVar1 = *(int *)(lVar7 + (ulonglong)(GSendPacketAudits._72_4_ - 1 & local_res18[0]) * 4
                             ); iVar1 != -1;
            iVar1 = *(int *)((longlong)iVar1 * 0x68 + 0x60 + GSendPacketAudits._0_8_)) {
          if (*(uint *)((longlong)iVar1 * 0x68 + GSendPacketAudits._0_8_) == local_res18[0]) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!GSendPacketAudits.Contains(OutPacketCRC)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                               ,0x1a3,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            break;
          }
        }
      }
      if ((0x7ff < (int)(GSendPacketAudits._8_4_ - GSendPacketAudits._52_4_)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("GSendPacketAudits.Num() < 2048",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                             ,0x1a6,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_18 = local_res18;
      TSet<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
                  *)&GSendPacketAudits,&local_res20,(bool *)&local_18);
      uVar4 = GSendPacketAudits._0_8_;
      *(uint *)((longlong)(int)local_res20.Key * 0x68 + 8 + GSendPacketAudits._0_8_) = uVar8;
      TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
                   *)((longlong)(int)local_res20.Key * 0x68 + uVar4 + 0x10),
                  (TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
                   *)&GPendingSendPacket.StageMap);
      FScopedAuditAccess::~FScopedAuditAccess(&local_10);
    }
    GPendingSendPacket.Writer = (FBitWriter *)0x0;
    bVar5 = 1 < (int)GPendingSendPacket.StageMap._72_4_;
    if (!bVar5) {
      TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
                        *)&GPendingSendPacket.StageMap);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&GPendingSendPacket.StageMap,0,GPendingSendPacket.StageMap._8_4_);
    GPendingSendPacket.StageMap._8_4_ = 0;
    if (GPendingSendPacket.StageMap._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&GPendingSendPacket.StageMap,0,
                 (int *)&GPendingSendPacket.StageMap.field_0xc);
    }
    GPendingSendPacket.StageMap._52_4_ = 0;
    GPendingSendPacket.StageMap._40_4_ = 0;
    GPendingSendPacket.StageMap._48_4_ = 0xffffffff;
    if (0x80 < (uint)GPendingSendPacket.StageMap._44_4_) {
      GPendingSendPacket.StageMap._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&GPendingSendPacket.StageMap.field_0x10,0);
    }
    if (bVar5) {
      GPendingSendPacket.StageMap._72_4_ = 1;
      TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
                *)&GPendingSendPacket.StageMap);
    }
  }
  return;
}

// PacketCRC @ 1441e3570

uint __cdecl FPacketAudit::PacketCRC(uchar *param_1,uint param_2)

{
  uint uVar1;
  uchar *puVar2;
  
  if (param_2 != 0) {
    uVar1 = param_2 + 7 >> 3;
    puVar2 = operator_new__((ulonglong)uVar1);
    puVar2[uVar1 - 1] = '\0';
    appBitsCpy(puVar2,0,param_1,0,param_2);
    uVar1 = (*FCrc::MemCrc32Func)(puVar2,uVar1,0);
    operator_delete__(puVar2);
    return uVar1;
  }
  return 0;
}

