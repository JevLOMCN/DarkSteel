// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 6

// Execute_OnAcquireFromPool @ 14a7db000

void __cdecl ICommonPoolableWidgetInterface::Execute_OnAcquireFromPool(UObject *param_1)

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
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\CommonUI\\UHT\\CommonPoolableWidgetInterface.gen.cpp"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar5 = *(UClass **)&param_1->field_0x10;
  pUVar3 = UCommonPoolableWidgetInterface::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar5,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UCommonPoolableWidgetInterface::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\CommonUI\\UHT\\CommonPoolableWidgetInterface.gen.cpp"
                       ,0x1e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UCommonPoolableWidgetInterface_OnAcquireFromPool);
  if (pUVar4 != (UFunction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a7db0a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x260))
              (param_1,pUVar4,0,*(code **)(*(longlong *)param_1 + 0x260));
    return;
  }
  pUVar5 = UCommonPoolableWidgetInterface::StaticClass();
  plVar6 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  return;
}

// Execute_OnReleaseToPool @ 14a7db0e0

void __cdecl ICommonPoolableWidgetInterface::Execute_OnReleaseToPool(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\CommonUI\\UHT\\CommonPoolableWidgetInterface.gen.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar5 = *(UClass **)&param_1->field_0x10;
  pUVar3 = UCommonPoolableWidgetInterface::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar5,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UCommonPoolableWidgetInterface::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\CommonUI\\UHT\\CommonPoolableWidgetInterface.gen.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UCommonPoolableWidgetInterface_OnReleaseToPool);
  if (pUVar4 != (UFunction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a7db187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x260))
              (param_1,pUVar4,0,*(code **)(*(longlong *)param_1 + 0x260));
    return;
  }
  pUVar5 = UCommonPoolableWidgetInterface::StaticClass();
  puVar6 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
  }
  return;
}

// OnAcquireFromPool @ 14a7fbd40

void __thiscall
ICommonPoolableWidgetInterface::OnAcquireFromPool(ICommonPoolableWidgetInterface *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnAcquireFromPool instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\CommonUI\\UHT\\CommonPoolableWidgetInterface.gen.cpp"
                     ,0x18,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnReleaseToPool @ 14a7fe520

void __thiscall
ICommonPoolableWidgetInterface::OnReleaseToPool(ICommonPoolableWidgetInterface *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnReleaseToPool instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\CommonUI\\UHT\\CommonPoolableWidgetInterface.gen.cpp"
                     ,0x4f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// execOnAcquireFromPool @ 14a830a90

void __cdecl
ICommonPoolableWidgetInterface::execOnAcquireFromPool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a830aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 8))();
  return;
}

// execOnReleaseToPool @ 14a830ee0

void __cdecl
ICommonPoolableWidgetInterface::execOnReleaseToPool(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a830ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)();
  return;
}

