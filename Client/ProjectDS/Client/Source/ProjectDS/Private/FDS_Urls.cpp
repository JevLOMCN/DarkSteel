// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// FDS_Urls @ 14b49fb50

FDS_Urls * __thiscall FDS_Urls::FDS_Urls(FDS_Urls *this)

{
  this->IsSend = false;
  this->IsSuccess = false;
  (this->RefreshJwtToken).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefreshJwtToken).Data.ArrayNum = 0;
  (this->RefreshJwtToken).Data.ArrayMax = 0;
  (this->FrontEndServerAddrRequest).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrontEndServerAddrRequest).Data.ArrayNum = 0;
  (this->FrontEndServerAddrRequest).Data.ArrayMax = 0;
  (this->GetServerListInfoRequest).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GetServerListInfoRequest).Data.ArrayNum = 0;
  (this->GetServerListInfoRequest).Data.ArrayMax = 0;
  (this->LoginAndRegisterPlayerRequest).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->LoginAndRegisterPlayerRequest).Data.ArrayNum = 0;
  (this->LoginAndRegisterPlayerRequest).Data.ArrayMax = 0;
  (this->PlayersByName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayersByName).Data.ArrayNum = 0;
  (this->PlayersByName).Data.ArrayMax = 0;
  (this->PlayersByUids).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayersByUids).Data.ArrayNum = 0;
  (this->PlayersByUids).Data.ArrayMax = 0;
  (this->SearchNickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchNickname).Data.ArrayNum = 0;
  (this->SearchNickname).Data.ArrayMax = 0;
  (this->PkHistory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PkHistory).Data.ArrayNum = 0;
  (this->PkHistory).Data.ArrayMax = 0;
  (this->MailList).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailList).Data.ArrayNum = 0;
  (this->MailList).Data.ArrayMax = 0;
  (this->MailRead).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailRead).Data.ArrayNum = 0;
  (this->MailRead).Data.ArrayMax = 0;
  (this->GameOption).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameOption).Data.ArrayNum = 0;
  (this->GameOption).Data.ArrayMax = 0;
  (this->UpdateGameOption).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateGameOption).Data.ArrayNum = 0;
  (this->UpdateGameOption).Data.ArrayMax = 0;
  (this->MinimapMarker).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MinimapMarker).Data.ArrayNum = 0;
  (this->MinimapMarker).Data.ArrayMax = 0;
  (this->UpdateMinimapMarker).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateMinimapMarker).Data.ArrayNum = 0;
  (this->UpdateMinimapMarker).Data.ArrayMax = 0;
  (this->GetBreach).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GetBreach).Data.ArrayNum = 0;
  (this->GetBreach).Data.ArrayMax = 0;
  (this->AcceptGuildMember).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AcceptGuildMember).Data.ArrayNum = 0;
  (this->AcceptGuildMember).Data.ArrayMax = 0;
  (this->AllGuildInfo).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllGuildInfo).Data.ArrayNum = 0;
  (this->AllGuildInfo).Data.ArrayMax = 0;
  (this->GuildInfo).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuildInfo).Data.ArrayNum = 0;
  (this->GuildInfo).Data.ArrayMax = 0;
  (this->CreateGuild).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreateGuild).Data.ArrayNum = 0;
  (this->CreateGuild).Data.ArrayMax = 0;
  (this->UpdateGuild).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateGuild).Data.ArrayNum = 0;
  (this->UpdateGuild).Data.ArrayMax = 0;
  (this->JoinGuildMember).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JoinGuildMember).Data.ArrayNum = 0;
  (this->JoinGuildMember).Data.ArrayMax = 0;
  (this->DeleteGuild).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeleteGuild).Data.ArrayNum = 0;
  (this->DeleteGuild).Data.ArrayMax = 0;
  (this->DeleteGuildMember).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeleteGuildMember).Data.ArrayNum = 0;
  (this->DeleteGuildMember).Data.ArrayMax = 0;
  (this->DelegateGuildMaster).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelegateGuildMaster).Data.ArrayNum = 0;
  (this->DelegateGuildMaster).Data.ArrayMax = 0;
  (this->ChangeGuildMemberRole).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChangeGuildMemberRole).Data.ArrayNum = 0;
  (this->ChangeGuildMemberRole).Data.ArrayMax = 0;
  (this->GuildMemberInfos).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuildMemberInfos).Data.ArrayNum = 0;
  (this->GuildMemberInfos).Data.ArrayMax = 0;
  (this->AllGuildMemberInfo).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllGuildMemberInfo).Data.ArrayNum = 0;
  (this->AllGuildMemberInfo).Data.ArrayMax = 0;
  (this->GetGuildMemberList).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GetGuildMemberList).Data.ArrayNum = 0;
  (this->GetGuildMemberList).Data.ArrayMax = 0;
  return this;
}

// ~FDS_Urls @ 14b4a06e0

void __thiscall FDS_Urls::~FDS_Urls(FDS_Urls *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GetGuildMemberList).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllGuildMemberInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GuildMemberInfos).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChangeGuildMemberRole).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DelegateGuildMaster).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeleteGuildMember).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeleteGuild).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JoinGuildMember).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateGuild).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateGuild).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GuildInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllGuildInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AcceptGuildMember).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GetBreach).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateMinimapMarker).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MinimapMarker).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateGameOption).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameOption).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailRead).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailList).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PkHistory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SearchNickname).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayersByUids).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayersByName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoginAndRegisterPlayerRequest).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GetServerListInfoRequest).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrontEndServerAddrRequest).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RefreshJwtToken).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14b4a0d20

FDS_Urls * __thiscall FDS_Urls::operator=(FDS_Urls *this,FDS_Urls *param_1)

{
  this->IsSend = param_1->IsSend;
  this->IsSuccess = param_1->IsSuccess;
  ::FString::operator=(&this->RefreshJwtToken,&param_1->RefreshJwtToken);
  ::FString::operator=(&this->FrontEndServerAddrRequest,&param_1->FrontEndServerAddrRequest);
  ::FString::operator=(&this->GetServerListInfoRequest,&param_1->GetServerListInfoRequest);
  ::FString::operator=(&this->LoginAndRegisterPlayerRequest,&param_1->LoginAndRegisterPlayerRequest)
  ;
  ::FString::operator=(&this->PlayersByName,&param_1->PlayersByName);
  ::FString::operator=(&this->PlayersByUids,&param_1->PlayersByUids);
  ::FString::operator=(&this->SearchNickname,&param_1->SearchNickname);
  ::FString::operator=(&this->PkHistory,&param_1->PkHistory);
  ::FString::operator=(&this->MailList,&param_1->MailList);
  ::FString::operator=(&this->MailRead,&param_1->MailRead);
  ::FString::operator=(&this->GameOption,&param_1->GameOption);
  ::FString::operator=(&this->UpdateGameOption,&param_1->UpdateGameOption);
  ::FString::operator=(&this->MinimapMarker,&param_1->MinimapMarker);
  ::FString::operator=(&this->UpdateMinimapMarker,&param_1->UpdateMinimapMarker);
  ::FString::operator=(&this->GetBreach,&param_1->GetBreach);
  ::FString::operator=(&this->AcceptGuildMember,&param_1->AcceptGuildMember);
  ::FString::operator=(&this->AllGuildInfo,&param_1->AllGuildInfo);
  ::FString::operator=(&this->GuildInfo,&param_1->GuildInfo);
  ::FString::operator=(&this->CreateGuild,&param_1->CreateGuild);
  ::FString::operator=(&this->UpdateGuild,&param_1->UpdateGuild);
  ::FString::operator=(&this->JoinGuildMember,&param_1->JoinGuildMember);
  ::FString::operator=(&this->DeleteGuild,&param_1->DeleteGuild);
  ::FString::operator=(&this->DeleteGuildMember,&param_1->DeleteGuildMember);
  ::FString::operator=(&this->DelegateGuildMaster,&param_1->DelegateGuildMaster);
  ::FString::operator=(&this->ChangeGuildMemberRole,&param_1->ChangeGuildMemberRole);
  ::FString::operator=(&this->GuildMemberInfos,&param_1->GuildMemberInfos);
  ::FString::operator=(&this->AllGuildMemberInfo,&param_1->AllGuildMemberInfo);
  ::FString::operator=(&this->GetGuildMemberList,&param_1->GetGuildMemberList);
  return this;
}

// operator= @ 14bb4d340

FDS_Urls * __thiscall FDS_Urls::operator=(FDS_Urls *this,FDS_Urls *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  pFVar1 = &param_1->RefreshJwtToken;
  this->IsSend = param_1->IsSend;
  pFVar3 = &this->RefreshJwtToken;
  this->IsSuccess = param_1->IsSuccess;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RefreshJwtToken).Data.ArrayNum = (param_1->RefreshJwtToken).Data.ArrayNum;
    (this->RefreshJwtToken).Data.ArrayMax = (param_1->RefreshJwtToken).Data.ArrayMax;
    (param_1->RefreshJwtToken).Data.ArrayNum = 0;
    (param_1->RefreshJwtToken).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->FrontEndServerAddrRequest;
  pFVar3 = &this->FrontEndServerAddrRequest;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FrontEndServerAddrRequest).Data.ArrayNum =
         (param_1->FrontEndServerAddrRequest).Data.ArrayNum;
    (this->FrontEndServerAddrRequest).Data.ArrayMax =
         (param_1->FrontEndServerAddrRequest).Data.ArrayMax;
    (param_1->FrontEndServerAddrRequest).Data.ArrayNum = 0;
    (param_1->FrontEndServerAddrRequest).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->GetServerListInfoRequest;
  pFVar3 = &this->GetServerListInfoRequest;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GetServerListInfoRequest).Data.ArrayNum =
         (param_1->GetServerListInfoRequest).Data.ArrayNum;
    (this->GetServerListInfoRequest).Data.ArrayMax =
         (param_1->GetServerListInfoRequest).Data.ArrayMax;
    (param_1->GetServerListInfoRequest).Data.ArrayNum = 0;
    (param_1->GetServerListInfoRequest).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->LoginAndRegisterPlayerRequest;
  pFVar3 = &this->LoginAndRegisterPlayerRequest;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LoginAndRegisterPlayerRequest).Data.ArrayNum =
         (param_1->LoginAndRegisterPlayerRequest).Data.ArrayNum;
    (this->LoginAndRegisterPlayerRequest).Data.ArrayMax =
         (param_1->LoginAndRegisterPlayerRequest).Data.ArrayMax;
    (param_1->LoginAndRegisterPlayerRequest).Data.ArrayNum = 0;
    (param_1->LoginAndRegisterPlayerRequest).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->PlayersByName;
  pFVar3 = &this->PlayersByName;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PlayersByName).Data.ArrayNum = (param_1->PlayersByName).Data.ArrayNum;
    (this->PlayersByName).Data.ArrayMax = (param_1->PlayersByName).Data.ArrayMax;
    (param_1->PlayersByName).Data.ArrayNum = 0;
    (param_1->PlayersByName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->PlayersByUids;
  pFVar3 = &this->PlayersByUids;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PlayersByUids).Data.ArrayNum = (param_1->PlayersByUids).Data.ArrayNum;
    (this->PlayersByUids).Data.ArrayMax = (param_1->PlayersByUids).Data.ArrayMax;
    (param_1->PlayersByUids).Data.ArrayNum = 0;
    (param_1->PlayersByUids).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->SearchNickname;
  pFVar3 = &this->SearchNickname;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SearchNickname).Data.ArrayNum = (param_1->SearchNickname).Data.ArrayNum;
    (this->SearchNickname).Data.ArrayMax = (param_1->SearchNickname).Data.ArrayMax;
    (param_1->SearchNickname).Data.ArrayNum = 0;
    (param_1->SearchNickname).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->PkHistory;
  pFVar3 = &this->PkHistory;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PkHistory).Data.ArrayNum = (param_1->PkHistory).Data.ArrayNum;
    (this->PkHistory).Data.ArrayMax = (param_1->PkHistory).Data.ArrayMax;
    (param_1->PkHistory).Data.ArrayNum = 0;
    (param_1->PkHistory).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->MailList;
  pFVar3 = &this->MailList;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MailList).Data.ArrayNum = (param_1->MailList).Data.ArrayNum;
    (this->MailList).Data.ArrayMax = (param_1->MailList).Data.ArrayMax;
    (param_1->MailList).Data.ArrayNum = 0;
    (param_1->MailList).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->MailRead;
  pFVar3 = &this->MailRead;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MailRead).Data.ArrayNum = (param_1->MailRead).Data.ArrayNum;
    (this->MailRead).Data.ArrayMax = (param_1->MailRead).Data.ArrayMax;
    (param_1->MailRead).Data.ArrayNum = 0;
    (param_1->MailRead).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->GameOption;
  pFVar3 = &this->GameOption;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GameOption).Data.ArrayNum = (param_1->GameOption).Data.ArrayNum;
    (this->GameOption).Data.ArrayMax = (param_1->GameOption).Data.ArrayMax;
    (param_1->GameOption).Data.ArrayNum = 0;
    (param_1->GameOption).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->UpdateGameOption;
  pFVar3 = &this->UpdateGameOption;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UpdateGameOption).Data.ArrayNum = (param_1->UpdateGameOption).Data.ArrayNum;
    (this->UpdateGameOption).Data.ArrayMax = (param_1->UpdateGameOption).Data.ArrayMax;
    (param_1->UpdateGameOption).Data.ArrayNum = 0;
    (param_1->UpdateGameOption).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->MinimapMarker;
  pFVar3 = &this->MinimapMarker;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MinimapMarker).Data.ArrayNum = (param_1->MinimapMarker).Data.ArrayNum;
    (this->MinimapMarker).Data.ArrayMax = (param_1->MinimapMarker).Data.ArrayMax;
    (param_1->MinimapMarker).Data.ArrayNum = 0;
    (param_1->MinimapMarker).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->UpdateMinimapMarker;
  pFVar3 = &this->UpdateMinimapMarker;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UpdateMinimapMarker).Data.ArrayNum = (param_1->UpdateMinimapMarker).Data.ArrayNum;
    (this->UpdateMinimapMarker).Data.ArrayMax = (param_1->UpdateMinimapMarker).Data.ArrayMax;
    (param_1->UpdateMinimapMarker).Data.ArrayNum = 0;
    (param_1->UpdateMinimapMarker).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->GetBreach;
  pFVar3 = &this->GetBreach;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GetBreach).Data.ArrayNum = (param_1->GetBreach).Data.ArrayNum;
    (this->GetBreach).Data.ArrayMax = (param_1->GetBreach).Data.ArrayMax;
    (param_1->GetBreach).Data.ArrayNum = 0;
    (param_1->GetBreach).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->AcceptGuildMember;
  pFVar3 = &this->AcceptGuildMember;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AcceptGuildMember).Data.ArrayNum = (param_1->AcceptGuildMember).Data.ArrayNum;
    (this->AcceptGuildMember).Data.ArrayMax = (param_1->AcceptGuildMember).Data.ArrayMax;
    (param_1->AcceptGuildMember).Data.ArrayNum = 0;
    (param_1->AcceptGuildMember).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->AllGuildInfo;
  pFVar3 = &this->AllGuildInfo;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AllGuildInfo).Data.ArrayNum = (param_1->AllGuildInfo).Data.ArrayNum;
    (this->AllGuildInfo).Data.ArrayMax = (param_1->AllGuildInfo).Data.ArrayMax;
    (param_1->AllGuildInfo).Data.ArrayNum = 0;
    (param_1->AllGuildInfo).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->GuildInfo;
  pFVar3 = &this->GuildInfo;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GuildInfo).Data.ArrayNum = (param_1->GuildInfo).Data.ArrayNum;
    (this->GuildInfo).Data.ArrayMax = (param_1->GuildInfo).Data.ArrayMax;
    (param_1->GuildInfo).Data.ArrayNum = 0;
    (param_1->GuildInfo).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->CreateGuild;
  pFVar3 = &this->CreateGuild;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CreateGuild).Data.ArrayNum = (param_1->CreateGuild).Data.ArrayNum;
    (this->CreateGuild).Data.ArrayMax = (param_1->CreateGuild).Data.ArrayMax;
    (param_1->CreateGuild).Data.ArrayNum = 0;
    (param_1->CreateGuild).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->UpdateGuild;
  pFVar3 = &this->UpdateGuild;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UpdateGuild).Data.ArrayNum = (param_1->UpdateGuild).Data.ArrayNum;
    (this->UpdateGuild).Data.ArrayMax = (param_1->UpdateGuild).Data.ArrayMax;
    (param_1->UpdateGuild).Data.ArrayNum = 0;
    (param_1->UpdateGuild).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->JoinGuildMember;
  pFVar3 = &this->JoinGuildMember;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->JoinGuildMember).Data.ArrayNum = (param_1->JoinGuildMember).Data.ArrayNum;
    (this->JoinGuildMember).Data.ArrayMax = (param_1->JoinGuildMember).Data.ArrayMax;
    (param_1->JoinGuildMember).Data.ArrayNum = 0;
    (param_1->JoinGuildMember).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->DeleteGuild;
  pFVar3 = &this->DeleteGuild;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DeleteGuild).Data.ArrayNum = (param_1->DeleteGuild).Data.ArrayNum;
    (this->DeleteGuild).Data.ArrayMax = (param_1->DeleteGuild).Data.ArrayMax;
    (param_1->DeleteGuild).Data.ArrayNum = 0;
    (param_1->DeleteGuild).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->DeleteGuildMember;
  pFVar3 = &this->DeleteGuildMember;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DeleteGuildMember).Data.ArrayNum = (param_1->DeleteGuildMember).Data.ArrayNum;
    (this->DeleteGuildMember).Data.ArrayMax = (param_1->DeleteGuildMember).Data.ArrayMax;
    (param_1->DeleteGuildMember).Data.ArrayNum = 0;
    (param_1->DeleteGuildMember).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->DelegateGuildMaster;
  pFVar3 = &this->DelegateGuildMaster;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DelegateGuildMaster).Data.ArrayNum = (param_1->DelegateGuildMaster).Data.ArrayNum;
    (this->DelegateGuildMaster).Data.ArrayMax = (param_1->DelegateGuildMaster).Data.ArrayMax;
    (param_1->DelegateGuildMaster).Data.ArrayNum = 0;
    (param_1->DelegateGuildMaster).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->ChangeGuildMemberRole;
  pFVar3 = &this->ChangeGuildMemberRole;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ChangeGuildMemberRole).Data.ArrayNum = (param_1->ChangeGuildMemberRole).Data.ArrayNum;
    (this->ChangeGuildMemberRole).Data.ArrayMax = (param_1->ChangeGuildMemberRole).Data.ArrayMax;
    (param_1->ChangeGuildMemberRole).Data.ArrayNum = 0;
    (param_1->ChangeGuildMemberRole).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->GuildMemberInfos;
  pFVar3 = &this->GuildMemberInfos;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GuildMemberInfos).Data.ArrayNum = (param_1->GuildMemberInfos).Data.ArrayNum;
    (this->GuildMemberInfos).Data.ArrayMax = (param_1->GuildMemberInfos).Data.ArrayMax;
    (param_1->GuildMemberInfos).Data.ArrayNum = 0;
    (param_1->GuildMemberInfos).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->AllGuildMemberInfo;
  pFVar3 = &this->AllGuildMemberInfo;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AllGuildMemberInfo).Data.ArrayNum = (param_1->AllGuildMemberInfo).Data.ArrayNum;
    (this->AllGuildMemberInfo).Data.ArrayMax = (param_1->AllGuildMemberInfo).Data.ArrayMax;
    (param_1->AllGuildMemberInfo).Data.ArrayNum = 0;
    (param_1->AllGuildMemberInfo).Data.ArrayMax = 0;
  }
  pFVar3 = &param_1->GetGuildMemberList;
  pFVar1 = &this->GetGuildMemberList;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GetGuildMemberList).Data.ArrayNum = (param_1->GetGuildMemberList).Data.ArrayNum;
    (this->GetGuildMemberList).Data.ArrayMax = (param_1->GetGuildMemberList).Data.ArrayMax;
    (param_1->GetGuildMemberList).Data.ArrayNum = 0;
    (param_1->GetGuildMemberList).Data.ArrayMax = 0;
  }
  return this;
}

// GetAcceptGuildMember @ 14bbbb340

FString * __thiscall FDS_Urls::GetAcceptGuildMember(FDS_Urls *this)

{
  return &this->AcceptGuildMember;
}

// GetAllGuildInfo @ 14bbbb7a0

FString * __thiscall FDS_Urls::GetAllGuildInfo(FDS_Urls *this)

{
  return &this->AllGuildInfo;
}

// GetAllGuildMemberInfo @ 14bbbb7b0

FString * __thiscall FDS_Urls::GetAllGuildMemberInfo(FDS_Urls *this)

{
  return &this->AllGuildMemberInfo;
}

// GetChangeGuildMemberRole @ 14bbbb9a0

FString * __thiscall FDS_Urls::GetChangeGuildMemberRole(FDS_Urls *this)

{
  return &this->ChangeGuildMemberRole;
}

// GetCreateGuild @ 14bbbc1d0

FString * __thiscall FDS_Urls::GetCreateGuild(FDS_Urls *this)

{
  return &this->CreateGuild;
}

// GetDelegateGuildMaster @ 14bbbc2e0

FString * __thiscall FDS_Urls::GetDelegateGuildMaster(FDS_Urls *this)

{
  return &this->DelegateGuildMaster;
}

// GetDeleteGuild @ 14bbbc2f0

FString * __thiscall FDS_Urls::GetDeleteGuild(FDS_Urls *this)

{
  return &this->DeleteGuild;
}

// GetDeleteGuildMember @ 14bbbc300

FString * __thiscall FDS_Urls::GetDeleteGuildMember(FDS_Urls *this)

{
  return &this->DeleteGuildMember;
}

// GetFrontEndServerAddrRequest @ 14bbbc330

FString * __thiscall FDS_Urls::GetFrontEndServerAddrRequest(FDS_Urls *this)

{
  return &this->FrontEndServerAddrRequest;
}

// GetGameOption @ 14bbbc340

FString * __thiscall FDS_Urls::GetGameOption(FDS_Urls *this)

{
  return &this->GameOption;
}

// GetGetBreach @ 14bbbc350

FString * __thiscall FDS_Urls::GetGetBreach(FDS_Urls *this)

{
  return &this->GetBreach;
}

// GetGetGuildMemberList @ 14bbbc360

FString * __thiscall FDS_Urls::GetGetGuildMemberList(FDS_Urls *this)

{
  return &this->GetGuildMemberList;
}

// GetGetServerListInfoRequest @ 14bbbc370

FString * __thiscall FDS_Urls::GetGetServerListInfoRequest(FDS_Urls *this)

{
  return &this->GetServerListInfoRequest;
}

// GetGuildInfo @ 14bbbc380

FString * __thiscall FDS_Urls::GetGuildInfo(FDS_Urls *this)

{
  return &this->GuildInfo;
}

// GetGuildMemberInfos @ 14bbbc390

FString * __thiscall FDS_Urls::GetGuildMemberInfos(FDS_Urls *this)

{
  return &this->GuildMemberInfos;
}

// GetJoinGuildMember @ 14bbbc6b0

FString * __thiscall FDS_Urls::GetJoinGuildMember(FDS_Urls *this)

{
  return &this->JoinGuildMember;
}

// GetLoginAndRegisterPlayerRequest @ 14bbbc6c0

FString * __thiscall FDS_Urls::GetLoginAndRegisterPlayerRequest(FDS_Urls *this)

{
  return &this->LoginAndRegisterPlayerRequest;
}

// GetMailList @ 14bbbc6d0

FString * __thiscall FDS_Urls::GetMailList(FDS_Urls *this)

{
  return &this->MailList;
}

// GetMailRead @ 14bbbc6e0

FString * __thiscall FDS_Urls::GetMailRead(FDS_Urls *this)

{
  return &this->MailRead;
}

// GetMinimapMarker @ 14bbbc6f0

FString * __thiscall FDS_Urls::GetMinimapMarker(FDS_Urls *this)

{
  return &this->MinimapMarker;
}

// GetPkHistory @ 14bbbcfa0

FString * __thiscall FDS_Urls::GetPkHistory(FDS_Urls *this)

{
  return &this->PkHistory;
}

// GetPlayersByName @ 14bbbcfb0

FString * __thiscall FDS_Urls::GetPlayersByName(FDS_Urls *this)

{
  return &this->PlayersByName;
}

// GetPlayersByUids @ 14bbbcfc0

FString * __thiscall FDS_Urls::GetPlayersByUids(FDS_Urls *this)

{
  return &this->PlayersByUids;
}

// GetRefreshJwtToken @ 14bbbcff0

FString * __thiscall FDS_Urls::GetRefreshJwtToken(FDS_Urls *this)

{
  return &this->RefreshJwtToken;
}

// GetSearchNickname @ 14bbbd050

FString * __thiscall FDS_Urls::GetSearchNickname(FDS_Urls *this)

{
  return &this->SearchNickname;
}

// GetUpdateGameOption @ 14bbbe580

FString * __thiscall FDS_Urls::GetUpdateGameOption(FDS_Urls *this)

{
  return &this->UpdateGameOption;
}

// GetUpdateGuild @ 14bbbe590

FString * __thiscall FDS_Urls::GetUpdateGuild(FDS_Urls *this)

{
  return &this->UpdateGuild;
}

// GetUpdateMinimapMarker @ 14bbbe5a0

FString * __thiscall FDS_Urls::GetUpdateMinimapMarker(FDS_Urls *this)

{
  return &this->UpdateMinimapMarker;
}

// OnHttpRequestSuccess @ 14bbc9fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDS_Urls::OnHttpRequestSuccess(FDS_Urls *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  IHttpResponse *pIVar1;
  size_t sVar2;
  char *pcVar3;
  undefined1 auStack_278 [32];
  FString local_258;
  UrlsResponse local_248;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_278;
  UrlsResponse::UrlsResponse(&local_248,(Arena *)0x0);
  pIVar1 = param_1->Object;
  local_248._padding_ = (longlong)&___7UrlsResponse__6B_;
  if (pIVar1 != (IHttpResponse *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x60))(pIVar1,&local_258);
    DS_JsonStringToProtoMessage<UrlsResponse>(&local_248,&local_258);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.refresh_jwt_token_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->RefreshJwtToken,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.front_end_server_addr_request_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->FrontEndServerAddrRequest,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.get_server_list_info_request_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->GetServerListInfoRequest,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.login_and_register_player_request_.tagged_ptr_.ptr_
                   & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->LoginAndRegisterPlayerRequest,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.players_by_name_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->PlayersByName,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.players_by_uids_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->PlayersByUids,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.search_nickname_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->SearchNickname,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.pk_history_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->PkHistory,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.mail_list_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->MailList,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.mail_read_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->MailRead,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.game_option_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->GameOption,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.update_game_option_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->UpdateGameOption,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.minimap_marker_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->MinimapMarker,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.update_minimap_marker_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->UpdateMinimapMarker,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.get_breach_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->GetBreach,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.accept_guild_member_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->AcceptGuildMember,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.all_guild_info_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->AllGuildInfo,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.guild_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->GuildInfo,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.create_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
  ;
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->CreateGuild,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.update_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
  ;
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->UpdateGuild,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.join_guild_member_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->JoinGuildMember,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.delete_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
  ;
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->DeleteGuild,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.delete_guild_member_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->DeleteGuildMember,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.delegate_guild_master_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->DelegateGuildMaster,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.change_guild_member_role_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->ChangeGuildMemberRole,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.guild_member_infos_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->GuildMemberInfos,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.all_guild_member_info_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->AllGuildMemberInfo,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pcVar3 = (char *)((ulonglong)local_248._impl_.get_guild_member_list_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_148._padding_ = 0;
  if (pcVar3 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar3,(int)sVar2,Yes);
  }
  ::FString::AssignRange(&this->GetGuildMemberList,local_148.Ptr,local_148.StringLength);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  this->IsSuccess = true;
  UrlsResponse::~UrlsResponse(&local_248);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

