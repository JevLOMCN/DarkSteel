// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 3

// FOnlineSessionIdRegistryLAN @ 14f0049b0

FOnlineSessionIdRegistryLAN * __thiscall
UE::Online::FOnlineSessionIdRegistryLAN::FOnlineSessionIdRegistryLAN
          (FOnlineSessionIdRegistryLAN *this,EOnlineServices param_1)

{
  this->field_0x10 = param_1;
  *(undefined ***)&this->field_0x8 =
       &
       ___7__TOnlineBasicIdRegistry_UFSession_OnlineIdHandleTags_Online_UE__VFString___Online_UE__6B_
  ;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x5c = 0x80;
  *(undefined4 *)&this->field_0x64 = 0;
  *(undefined4 *)&this->field_0x60 = 0xffffffff;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined4 *)&this->field_0x78 = 0;
  *(undefined ***)this = &___7FOnlineSessionIdRegistryLAN_Online_UE__6B_;
  return this;
}

// GetChecked @ 14f007b00

FOnlineSessionIdRegistryLAN * __cdecl
UE::Online::FOnlineSessionIdRegistryLAN::GetChecked(EOnlineServices param_1)

{
  code *pcVar1;
  bool bVar2;
  FOnlineIdRegistryRegistry *this;
  FOnlineSessionIdRegistryLAN *pFVar3;
  
  this = FOnlineIdRegistryRegistry::Get();
  pFVar3 = (FOnlineSessionIdRegistryLAN *)
           FOnlineIdRegistryRegistry::GetSessionIdRegistry(this,param_1);
  if ((pFVar3 == (FOnlineSessionIdRegistryLAN *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SessionIdRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommonEngineUtils\\Private\\Online\\SessionsLAN.cpp"
                         ,0x18,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnlineSessionIdRegistryLAN *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

// GetNextSessionId @ 14f007ba0

TOnlineId<UE::Online::OnlineIdHandleTags::FSession> __thiscall
UE::Online::FOnlineSessionIdRegistryLAN::GetNextSessionId(FOnlineSessionIdRegistryLAN *this)

{
  FGuid *this_00;
  FString *in_RDX;
  FString local_28;
  FGuid local_18;
  
  this_00 = FGuid::NewGuid(&local_18);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FGuid::AppendString(this_00,&local_28,Digits);
  TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::FindOrAddHandle
            ((TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString> *)
             &this->field_0x8,in_RDX);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)(uint)in_RDX;
}

