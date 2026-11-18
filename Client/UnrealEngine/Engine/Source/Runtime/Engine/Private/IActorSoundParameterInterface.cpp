// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Execute_GetActorSoundParams @ 1476a7720

void __cdecl
IActorSoundParameterInterface::Execute_GetActorSoundParams
          (UObject *param_1,TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\ActorSoundParameterInterface.gen.cpp"
                       ,0x23,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar6 = *(UClass **)&param_1->field_0x10;
  pUVar4 = UActorSoundParameterInterface::StaticClass();
  bVar3 = UClass::ImplementsInterface(pUVar6,pUVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UActorSoundParameterInterface::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\ActorSoundParameterInterface.gen.cpp"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  pUVar5 = UObject::FindFunction(param_1,NAME_UActorSoundParameterInterface_GetActorSoundParams);
  if (pUVar5 == (UFunction *)0x0) {
    pUVar6 = UActorSoundParameterInterface::StaticClass();
    plVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,param_2);
    }
  }
  else {
    if (&local_18 != param_2) {
      DestructItems<FAudioParameter,int>
                ((FAudioParameter *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      if ((FAudioParameter *)local_18.AllocatorInstance.Data != (FAudioParameter *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      local_18.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = param_2->ArrayNum;
      local_18.ArrayMax = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
    }
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,&local_18);
    if (param_2 != &local_18) {
      DestructItems<FAudioParameter,int>
                ((FAudioParameter *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
      param_2->ArrayNum = local_18.ArrayNum;
      param_2->ArrayMax = local_18.ArrayMax;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FAudioParameter *)local_18.AllocatorInstance.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetActorSoundParams @ 1476ad710

void __thiscall
IActorSoundParameterInterface::GetActorSoundParams
          (IActorSoundParameterInterface *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_GetActorSoundParams instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\ActorSoundParameterInterface.gen.cpp"
                     ,0x1e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// execGetActorSoundParams @ 1476d05c0

void __cdecl
IActorSoundParameterInterface::execGetActorSoundParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAudioParameter **ppFVar2;
  FAudioParameter *local_18;
  undefined8 local_10;
  
  local_18 = (FAudioParameter *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppFVar2 = &local_18;
  if ((FAudioParameter **)param_2->MostRecentPropertyAddress != (FAudioParameter **)0x0) {
    ppFVar2 = (FAudioParameter **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,ppFVar2);
  DestructItems<FAudioParameter,int>(local_18,(int)local_10);
  if (local_18 != (FAudioParameter *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

