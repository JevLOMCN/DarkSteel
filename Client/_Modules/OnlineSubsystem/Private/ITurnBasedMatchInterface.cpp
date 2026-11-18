// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 4

// Execute_OnMatchEnded @ 14ebf8090

void __cdecl ITurnBasedMatchInterface::Execute_OnMatchEnded(UObject *param_1,FString *param_2)

{
  int iVar1;
  UClass *this;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  int iVar6;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\OnlineSubsystem\\UHT\\TurnBasedMatchInterface.gen.cpp"
                       ,0x21,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar4 = UTurnBasedMatchInterface::StaticClass();
  bVar3 = UClass::ImplementsInterface(this,pUVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UTurnBasedMatchInterface::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\OnlineSubsystem\\UHT\\TurnBasedMatchInterface.gen.cpp"
                       ,0x22,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pUVar5 = UObject::FindFunction(param_1,NAME_UTurnBasedMatchInterface_OnMatchEnded);
  if (pUVar5 != (UFunction *)0x0) {
    iVar1 = (param_2->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(&local_18,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar6);
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,&local_18);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Execute_OnMatchReceivedTurn @ 14ebf81a0

void __cdecl
ITurnBasedMatchInterface::Execute_OnMatchReceivedTurn
          (UObject *param_1,FString *param_2,bool param_3)

{
  int iVar1;
  UClass *this;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  int iVar6;
  FString local_28;
  undefined1 local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\OnlineSubsystem\\UHT\\TurnBasedMatchInterface.gen.cpp"
                       ,0x62,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar4 = UTurnBasedMatchInterface::StaticClass();
  bVar3 = UClass::ImplementsInterface(this,pUVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UTurnBasedMatchInterface::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\OnlineSubsystem\\UHT\\TurnBasedMatchInterface.gen.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pUVar5 = UObject::FindFunction(param_1,NAME_UTurnBasedMatchInterface_OnMatchReceivedTurn);
  if (pUVar5 != (UFunction *)0x0) {
    iVar1 = (param_2->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(&local_28,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar6);
    local_18 = param_3;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,&local_28);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// OnMatchEnded @ 14ec0d6e0

void __thiscall
ITurnBasedMatchInterface::OnMatchEnded(ITurnBasedMatchInterface *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnMatchEnded instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\OnlineSubsystem\\UHT\\TurnBasedMatchInterface.gen.cpp"
                     ,0x1c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnMatchReceivedTurn @ 14ec0d720

void __thiscall
ITurnBasedMatchInterface::OnMatchReceivedTurn
          (ITurnBasedMatchInterface *this,FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnMatchReceivedTurn instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\OnlineSubsystem\\UHT\\TurnBasedMatchInterface.gen.cpp"
                     ,0x5d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

