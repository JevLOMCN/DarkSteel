// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PacketHandler
// Functions: 2

// StartupModule @ 14463d190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPacketHandlerComponentModuleInterface::StartupModule(FPacketHandlerComponentModuleInterface *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  FSemaphore *pFVar6;
  FPacketAudit *this_00;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  if (GPacketAuditor == (FPacketAudit *)0x0) {
    pwVar4 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar4,L"PacketAudit");
    bVar1 = GIsServer;
    if (bVar2) {
      pFVar5 = ::FString::FString(&FStack_38,L"UEPacketAudit");
      pwVar4 = L"ClientProcess";
      if (bVar1 != false) {
        pwVar4 = L"ServerProcess";
      }
      ::FString::ConcatFC(&FStack_28,pFVar5,pwVar4);
      if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
      }
      pFVar6 = FWindowsPlatformProcess::NewInterprocessSynchObject(&FStack_28,true,1);
      cVar3 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
      bVar1 = GIsServer;
      if (cVar3 == '\0') {
        if (4 < (byte)LogNetCore._0_1_) {
          pFVar5 = ::FString::FString(&FStack_18,L"Packet auditor already active for a game ");
          pwVar4 = L"client";
          if (bVar1 != false) {
            pwVar4 = L"server";
          }
          ::FString::ConcatFC(&FStack_38,pFVar5,pwVar4);
          ::FString::ConcatFC(&FStack_48,&FStack_38,L", can\'t start multiple instances.");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
          if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
          }
          if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
          }
          if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
          }
        }
        FWindowsPlatformProcess::DeleteInterprocessSynchObject(pFVar6);
      }
      else {
        this_00 = ::operator_new(0x20);
        if (this_00 == (FPacketAudit *)0x0) {
          GPacketAuditor = (FPacketAudit *)0x0;
        }
        else {
          GPacketAuditor = FPacketAudit::FPacketAudit(this_00,pFVar6);
        }
      }
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ShutdownModule @ 14463d1a0

void __thiscall
FPacketHandlerComponentModuleInterface::ShutdownModule(FPacketHandlerComponentModuleInterface *this)

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

