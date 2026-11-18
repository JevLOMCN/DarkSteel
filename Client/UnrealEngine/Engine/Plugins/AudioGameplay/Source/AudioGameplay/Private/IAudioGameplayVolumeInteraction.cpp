// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 6

// Execute_OnListenerEnter @ 14d98c210

void __cdecl IAudioGameplayVolumeInteraction::Execute_OnListenerEnter(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayVolumeInteraction.gen.cpp"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar5 = *(UClass **)&param_1->field_0x10;
  pUVar3 = UAudioGameplayVolumeInteraction::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar5,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UAudioGameplayVolumeInteraction::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayVolumeInteraction.gen.cpp"
                       ,0x1e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UAudioGameplayVolumeInteraction_OnListenerEnter);
  if (pUVar4 != (UFunction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d98c2b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x260))
              (param_1,pUVar4,0,*(code **)(*(longlong *)param_1 + 0x260));
    return;
  }
  pUVar5 = UAudioGameplayVolumeInteraction::StaticClass();
  plVar6 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return;
}

// Execute_OnListenerExit @ 14d98c2f0

void __cdecl IAudioGameplayVolumeInteraction::Execute_OnListenerExit(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayVolumeInteraction.gen.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar5 = *(UClass **)&param_1->field_0x10;
  pUVar3 = UAudioGameplayVolumeInteraction::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar5,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UAudioGameplayVolumeInteraction::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayVolumeInteraction.gen.cpp"
                       ,0x58,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UAudioGameplayVolumeInteraction_OnListenerExit);
  if (pUVar4 != (UFunction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d98c397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x260))
              (param_1,pUVar4,0,*(code **)(*(longlong *)param_1 + 0x260));
    return;
  }
  pUVar5 = UAudioGameplayVolumeInteraction::StaticClass();
  plVar6 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  return;
}

// OnListenerEnter @ 14d98ee00

void __thiscall
IAudioGameplayVolumeInteraction::OnListenerEnter(IAudioGameplayVolumeInteraction *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnListenerEnter instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayVolumeInteraction.gen.cpp"
                     ,0x18,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnListenerExit @ 14d98ee40

void __thiscall
IAudioGameplayVolumeInteraction::OnListenerExit(IAudioGameplayVolumeInteraction *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnListenerExit instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayVolumeInteraction.gen.cpp"
                     ,0x52,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// execOnListenerEnter @ 14d9974c0

void __cdecl
IAudioGameplayVolumeInteraction::execOnListenerEnter(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014d9974d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))();
  return;
}

// execOnListenerExit @ 14d9974f0

void __cdecl
IAudioGameplayVolumeInteraction::execOnListenerExit(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014d997508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x18))();
  return;
}

