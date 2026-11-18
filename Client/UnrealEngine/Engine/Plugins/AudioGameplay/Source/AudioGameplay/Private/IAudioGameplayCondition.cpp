// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 6

// ConditionMet @ 14d98a810

bool __thiscall IAudioGameplayCondition::ConditionMet(IAudioGameplayCondition *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_ConditionMet instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayCondition.gen.cpp"
                     ,0x23,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// ConditionMet_Position @ 14d98a850

bool __thiscall
IAudioGameplayCondition::ConditionMet_Position
          (IAudioGameplayCondition *this,TVector<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_ConditionMet_Position instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayCondition.gen.cpp"
                     ,0x7b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// Execute_ConditionMet @ 14d98c000

bool __cdecl IAudioGameplayCondition::Execute_ConditionMet(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayCondition.gen.cpp"
                       ,0x2a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar6 = *(UClass **)&param_1->field_0x10;
  pUVar4 = UAudioGameplayCondition::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar6,pUVar4);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UAudioGameplayCondition::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayCondition.gen.cpp"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res8[0] = 0;
  pUVar5 = UObject::FindFunction(param_1,NAME_UAudioGameplayCondition_ConditionMet);
  if (pUVar5 == (UFunction *)0x0) {
    pUVar6 = UAudioGameplayCondition::StaticClass();
    plVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
      return (bool)uVar3;
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,local_res8);
  }
  return (bool)local_res8[0];
}

// Execute_ConditionMet_Position @ 14d98c0f0

bool __cdecl
IAudioGameplayCondition::Execute_ConditionMet_Position(UObject *param_1,TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  undefined1 local_10;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayCondition.gen.cpp"
                       ,0x82,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar6 = *(UClass **)&param_1->field_0x10;
  pUVar4 = UAudioGameplayCondition::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar6,pUVar4);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UAudioGameplayCondition::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplay\\UHT\\IAudioGameplayCondition.gen.cpp"
                       ,0x83,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_10 = 0;
  pUVar5 = UObject::FindFunction(param_1,NAME_UAudioGameplayCondition_ConditionMet_Position);
  if (pUVar5 == (UFunction *)0x0) {
    pUVar6 = UAudioGameplayCondition::StaticClass();
    plVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar7 + 0x18))(plVar7,param_2);
      return (bool)uVar3;
    }
  }
  else {
    local_28 = *(undefined4 *)&param_2->field0_0x0;
    uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    local_18 = (param_2->field0_0x0)._s_0.Z;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,&local_28);
  }
  return (bool)local_10;
}

// execConditionMet @ 14d9967f0

void __cdecl
IAudioGameplayCondition::execConditionMet(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x10))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execConditionMet_Position @ 14d996830

void __cdecl
IAudioGameplayCondition::execConditionMet_Position(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_28 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1,puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

