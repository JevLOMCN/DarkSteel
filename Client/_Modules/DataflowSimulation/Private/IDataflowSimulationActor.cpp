// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 6

// Execute_PostDataflowSimulationTick @ 1462f5e90

void __cdecl
IDataflowSimulationActor::Execute_PostDataflowSimulationTick
          (UObject *param_1,float param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  float local_res8;
  float local_resc;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\DataflowSimulation\\UHT\\DataflowSimulationManager.gen.cpp"
                       ,0x76,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar5 = *(UClass **)&param_1->field_0x10;
  pUVar3 = UDataflowSimulationActor::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar5,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UDataflowSimulationActor::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\DataflowSimulation\\UHT\\DataflowSimulationManager.gen.cpp"
                       ,0x77,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UDataflowSimulationActor_PostDataflowSimulationTick);
  if (pUVar4 == (UFunction *)0x0) {
    pUVar5 = UDataflowSimulationActor::StaticClass();
    puVar6 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,param_2,param_3);
    }
  }
  else {
    local_res8 = param_2;
    local_resc = param_3;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,&local_res8);
  }
  return;
}

// Execute_PreDataflowSimulationTick @ 1462f5fa0

void __cdecl
IDataflowSimulationActor::Execute_PreDataflowSimulationTick
          (UObject *param_1,float param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  float local_res8;
  float local_resc;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\DataflowSimulation\\UHT\\DataflowSimulationManager.gen.cpp"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar5 = *(UClass **)&param_1->field_0x10;
  pUVar3 = UDataflowSimulationActor::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar5,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UDataflowSimulationActor::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\DataflowSimulation\\UHT\\DataflowSimulationManager.gen.cpp"
                       ,0xce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UDataflowSimulationActor_PreDataflowSimulationTick);
  if (pUVar4 == (UFunction *)0x0) {
    pUVar5 = UDataflowSimulationActor::StaticClass();
    plVar6 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6,param_2,param_3);
    }
  }
  else {
    local_res8 = param_2;
    local_resc = param_3;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,&local_res8);
  }
  return;
}

// PostDataflowSimulationTick @ 1462f8e50

void __thiscall
IDataflowSimulationActor::PostDataflowSimulationTick
          (IDataflowSimulationActor *this,float param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_PostDataflowSimulationTick instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\DataflowSimulation\\UHT\\DataflowSimulationManager.gen.cpp"
                     ,0x71,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PreDataflowSimulationTick @ 1462f9510

void __thiscall
IDataflowSimulationActor::PreDataflowSimulationTick
          (IDataflowSimulationActor *this,float param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_PreDataflowSimulationTick instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\DataflowSimulation\\UHT\\DataflowSimulationManager.gen.cpp"
                     ,200,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// execPostDataflowSimulationTick @ 1462ffd50

void __cdecl
IDataflowSimulationActor::execPostDataflowSimulationTick
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (*(code *)**(undefined8 **)param_1)(param_1,local_res10[0],local_res8[0]);
  return;
}

// execPreDataflowSimulationTick @ 1462ffe20

void __cdecl
IDataflowSimulationActor::execPreDataflowSimulationTick
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 8))(param_1,local_res10[0],local_res8[0]);
  return;
}

