// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 9

// TestEqual<TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_> @ 14efdd660

bool __thiscall
FAutomationTestBase::TestEqual<TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>
          (FAutomationTestBase *this,FString *param_1,
          TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> *param_2,
          TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = UE::Online::FSchemaVariant::operator==
                    ((FSchemaVariant *)param_2,(FSchemaVariant *)param_3);
  if ((bVar2) &&
     (bVar2 = UE::Online::FSchemaVariant::operator==
                        ((FSchemaVariant *)&param_2->field_0x20,
                         (FSchemaVariant *)&param_3->field_0x20), bVar2)) {
    bVar2 = true;
  }
  else {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  return bVar2;
}

// TestEqual<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> @ 14efdd710

bool __thiscall
FAutomationTestBase::TestEqual<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          (FAutomationTestBase *this,FString *param_1,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_2,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2->Value != param_3->Value) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<TSharedRef<UE::Online::FLobby_const_,1>_> @ 14efdd790

bool __thiscall
FAutomationTestBase::TestEqual<TSharedRef<UE::Online::FLobby_const_,1>_>
          (FAutomationTestBase *this,FString *param_1,
          TSharedRef<UE::Online::FLobby_const_,1> *param_2,
          TSharedRef<UE::Online::FLobby_const_,1> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2->Object != param_3->Object) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<UE::Online::FSchemaVariant> @ 14efdd810

bool __thiscall
FAutomationTestBase::TestEqual<UE::Online::FSchemaVariant>
          (FAutomationTestBase *this,FString *param_1,FSchemaVariant *param_2,
          FSchemaVariant *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = UE::Online::FSchemaVariant::operator==(param_2,param_3);
  if (!bVar2) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<enum_UE::Online::ELobbyMemberLeaveReason> @ 14efdd8a0

bool __thiscall
FAutomationTestBase::TestEqual<enum_UE::Online::ELobbyMemberLeaveReason>
          (FAutomationTestBase *this,FString *param_1,ELobbyMemberLeaveReason *param_2,
          ELobbyMemberLeaveReason *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 != *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_> @ 14efdd920

bool __thiscall
FAutomationTestBase::TestNotNull<TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>
          (FAutomationTestBase *this,FString *param_1,
          TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<TSharedRef<UE::Online::FLobbyMember_const_,1>_> @ 14efdd9a0

bool __thiscall
FAutomationTestBase::TestNotNull<TSharedRef<UE::Online::FLobbyMember_const_,1>_>
          (FAutomationTestBase *this,FString *param_1,
          TSharedRef<UE::Online::FLobbyMember_const_,1> *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (TSharedRef<UE::Online::FLobbyMember_const_,1> *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<UE::Online::FSchemaVariant> @ 14efdda20

bool __thiscall
FAutomationTestBase::TestNotNull<UE::Online::FSchemaVariant>
          (FAutomationTestBase *this,FString *param_1,FSchemaVariant *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (FSchemaVariant *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual @ 14f0032a0

bool __thiscall
FAutomationTestBase::TestEqual(FAutomationTestBase *this,FString *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = TestEqual(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,param_2,param_3);
    return bVar1;
  }
  bVar1 = TestEqual(this,L"",param_2,param_3);
  return bVar1;
}

