// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// Build @ 14baf5d30

FSocket * __thiscall FTcpSocketBuilder::Build(FTcpSocketBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FNameEntryId FVar4;
  FName *pFVar5;
  ISocketSubsystem *pIVar6;
  FSocket *pFVar7;
  undefined8 uVar8;
  undefined4 extraout_var;
  FOutputDeviceRedirector *this_00;
  wchar_t *pwVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20;
  undefined4 local_res24;
  FName local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  FString local_38;
  
  pFVar5 = ::FName::FName(&local_58,L"WINDOWS");
  pIVar6 = ISocketSubsystem::Get(pFVar5);
  if (pIVar6 == (ISocketSubsystem *)0x0) {
    return (FSocket *)0x0;
  }
  if ((FIPv4Endpoint::CachedSocketSubsystem == (ISocketSubsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedSocketSubsystem != nullptr && \"Networking module not loaded and initialized\""
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                         ,0x72,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FSocket *)(*pcVar1)();
    return pFVar7;
  }
  (**(code **)(FIPv4Endpoint::CachedSocketSubsystem->_padding_ + 0x90))
            (FIPv4Endpoint::CachedSocketSubsystem,&local_48);
  (**(code **)(*local_48 + 0x18))(local_48,(this->BoundEndpoint).Address.field0_0x0.Value);
  (**(code **)(*local_48 + 0x28))(local_48,(this->BoundEndpoint).Port);
  pcVar1 = *(code **)(pIVar6->_padding_ + 0x18);
  uVar8 = (**(code **)(*local_48 + 0xa8))(local_48,local_50);
  if ((this->Description).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(this->Description).Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_38,pwVar9);
  FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
  local_res20 = *(undefined4 *)CONCAT44(extraout_var,FVar4.Value);
  local_res24 = 0;
  pFVar7 = (FSocket *)(*pcVar1)(pIVar6,&local_res20,&local_38,uVar8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (pFVar7 != (FSocket *)0x0) {
    cVar3 = (**(code **)(pFVar7->_padding_ + 0xf0))(pFVar7,this->Reusable);
    if ((((cVar3 == '\0') ||
         (cVar3 = (**(code **)(pFVar7->_padding_ + 0xf8))(pFVar7,this->Linger,this->LingerTimeout),
         cVar3 == '\0')) ||
        (cVar3 = (**(code **)(pFVar7->_padding_ + 0x100))(pFVar7,1), cVar3 == '\0')) ||
       ((((this->Bound != false &&
          (cVar3 = (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7,local_48), cVar3 == '\0')) ||
         ((this->Listen != false &&
          (cVar3 = (**(code **)(pFVar7->_padding_ + 0x30))(pFVar7,this->ListenBacklog),
          cVar3 == '\0')))) ||
        (cVar3 = (**(code **)(pFVar7->_padding_ + 0xa0))(pFVar7,this->Blocking == false),
        cVar3 == '\0')))) {
      this_00 = GetGlobalLogSingleton();
      FOutputDevice::LogfImpl
                ((FOutputDevice *)this_00,
                 L"FTcpSocketBuilder: Failed to create the socket %s as configured");
      (**(code **)(pIVar6->_padding_ + 0x38))(pIVar6,pFVar7);
      pFVar7 = (FSocket *)0x0;
    }
    else {
      if (0 < this->ReceiveBufferSize) {
        (**(code **)(pFVar7->_padding_ + 0x110))(pFVar7,this->ReceiveBufferSize,local_res10);
      }
      if (0 < this->SendBufferSize) {
        (**(code **)(pFVar7->_padding_ + 0x108))(pFVar7,this->SendBufferSize,local_res10);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return pFVar7;
}

