// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// Execute_GetBindingName @ 147551920

FName __cdecl ICurveSourceInterface::Execute_GetBindingName(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  UObject *in_RDX;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  if ((in_RDX == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("O != 0",
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\CurveSourceInterface.gen.cpp"
                         ,0x73,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
  pUVar6 = *(UClass **)&in_RDX->field_0x10;
  pUVar4 = UCurveSourceInterface::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar6,pUVar4);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass())",
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\CurveSourceInterface.gen.cpp"
                         ,0x74,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
  local_res8 = 0;
  pUVar5 = UObject::FindFunction(in_RDX,NAME_UCurveSourceInterface_GetBindingName);
  if (pUVar5 == (UFunction *)0x0) {
    pUVar6 = UCurveSourceInterface::StaticClass();
    plVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)in_RDX,pUVar6);
    if (plVar7 != (longlong *)0x0) {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,local_res10);
      local_res8 = *puVar8;
    }
  }
  else {
    (**(code **)(*(longlong *)in_RDX + 0x260))();
  }
  *(undefined8 *)param_1 = local_res8;
  return (FName)param_1;
}

// Execute_GetCurveValue @ 147551a20

float __cdecl ICurveSourceInterface::Execute_GetCurveValue(UObject *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  float fVar7;
  FName local_18;
  float local_10;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\CurveSourceInterface.gen.cpp"
                       ,0x115,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar7 = (float)(*pcVar1)();
      return fVar7;
    }
  }
  pUVar5 = *(UClass **)&param_1->field_0x10;
  pUVar3 = UCurveSourceInterface::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar5,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\CurveSourceInterface.gen.cpp"
                       ,0x116,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar7 = (float)(*pcVar1)();
      return fVar7;
    }
  }
  local_18.ComparisonIndex.Value = 0;
  local_18.Number = 0;
  local_10 = 0.0;
  pUVar4 = UObject::FindFunction(param_1,NAME_UCurveSourceInterface_GetCurveValue);
  if (pUVar4 == (UFunction *)0x0) {
    pUVar5 = UCurveSourceInterface::StaticClass();
    plVar6 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
    if (plVar6 != (longlong *)0x0) {
      fVar7 = (float)(**(code **)(*plVar6 + 8))(plVar6,param_2);
      return fVar7;
    }
  }
  else {
    local_18 = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,&local_18);
  }
  return local_10;
}

// Execute_GetCurves @ 147551b30

void __cdecl
ICurveSourceInterface::Execute_GetCurves
          (UObject *param_1,TArray<FNamedCurveValue,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  TArray<FNamedCurveValue,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("O != 0",
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\CurveSourceInterface.gen.cpp"
                         ,0xbd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar6 = *(UClass **)&param_1->field_0x10;
  pUVar4 = UCurveSourceInterface::StaticClass();
  bVar3 = UClass::ImplementsInterface(pUVar6,pUVar4);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass())",
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\CurveSourceInterface.gen.cpp"
                         ,0xbe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  pUVar5 = UObject::FindFunction(param_1,NAME_UCurveSourceInterface_GetCurves);
  if (pUVar5 == (UFunction *)0x0) {
    pUVar6 = UCurveSourceInterface::StaticClass();
    puVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,param_2);
    }
  }
  else {
    if (&local_18 != param_2) {
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetBindingName @ 14755a710

FName __thiscall ICurveSourceInterface::GetBindingName(ICurveSourceInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_GetBindingName instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\CurveSourceInterface.gen.cpp"
                     ,0x6c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetCurveValue @ 14755b580

float __thiscall ICurveSourceInterface::GetCurveValue(ICurveSourceInterface *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_GetCurveValue instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\CurveSourceInterface.gen.cpp"
                     ,0x10e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return 0.0;
}

// GetCurves @ 14755b5c0

void __thiscall
ICurveSourceInterface::GetCurves
          (ICurveSourceInterface *this,TArray<FNamedCurveValue,TSizedDefaultAllocator<32>_> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_GetCurves instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\CurveSourceInterface.gen.cpp"
                     ,0xb8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// execGetBindingName @ 147584770

void __cdecl
ICurveSourceInterface::execGetBindingName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_res8);
  *(undefined8 *)param_3 = *puVar1;
  return;
}

// execGetCurveValue @ 1475847b0

void __cdecl
ICurveSourceInterface::execGetCurveValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 8))(param_1,local_res8);
  *(undefined4 *)param_3 = uVar2;
  return;
}

// execGetCurves @ 147584850

void __cdecl ICurveSourceInterface::execGetCurves(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
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
  ppvVar2 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (*(code *)**(undefined8 **)param_1)(param_1,ppvVar2);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

