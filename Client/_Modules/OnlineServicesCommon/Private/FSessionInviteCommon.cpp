// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 6

// FSessionInviteCommon @ 14ee0eac0

FSessionInviteCommon * __thiscall
UE::Online::FSessionInviteCommon::FSessionInviteCommon
          (FSessionInviteCommon *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_2,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite> *param_3,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_4)

{
  this->_padding_ = (longlong)&___7FSessionInviteCommon_Online_UE__6B_;
  (this->RecipientId).Value = param_1->Value;
  (this->SenderId).Value = param_2->Value;
  (this->InviteId).Value = param_3->Value;
  (this->SessionId).Value = param_4->Value;
  return this;
}

// GetInviteId @ 14eee01a0

TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite> __thiscall
UE::Online::FSessionInviteCommon::GetInviteId(FSessionInviteCommon *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->InviteId).Value;
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>)(uint)in_RDX;
}

// GetRecipientId @ 14eee4260

TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> __thiscall
UE::Online::FSessionInviteCommon::GetRecipientId(FSessionInviteCommon *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->RecipientId).Value;
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>)(uint)in_RDX;
}

// GetSenderId @ 14eee43f0

TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> __thiscall
UE::Online::FSessionInviteCommon::GetSenderId(FSessionInviteCommon *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->SenderId).Value;
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>)(uint)in_RDX;
}

// GetSessionId @ 14eee4a60

TOnlineId<UE::Online::OnlineIdHandleTags::FSession> __thiscall
UE::Online::FSessionInviteCommon::GetSessionId(FSessionInviteCommon *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->SessionId).Value;
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)(uint)in_RDX;
}

// ToLogString @ 14ef156f0

FString * __thiscall
UE::Online::FSessionInviteCommon::ToLogString
          (FSessionInviteCommon *this,FString *__return_storage_ptr__)

{
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  Online::ToLogString(&local_28,&this->SessionId);
  Online::ToLogString(&local_38,&this->InviteId);
  Online::ToLogString(&local_48,&this->SenderId);
  Online::ToLogString(&local_58,&this->RecipientId);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"ISessionInvite: RecipientId [%s], SenderId [%s], InviteId [%s], SessionId [%s]");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

