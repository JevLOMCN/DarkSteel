// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Execute_OnConstructed @ 147332250

void __cdecl
ISoundSubmixWidgetInterface::Execute_OnConstructed(UObject *param_1,USoundSubmixBase *param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  USoundSubmixBase *local_res8;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundSubmixWidgetInterface.gen.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = USoundSubmixWidgetInterface::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(USoundSubmixWidgetInterface::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundSubmixWidgetInterface.gen.cpp"
                       ,0x23,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_USoundSubmixWidgetInterface_OnConstructed);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8 = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,&local_res8);
  }
  return;
}

// OnConstructed @ 1473332b0

void __thiscall
ISoundSubmixWidgetInterface::OnConstructed
          (ISoundSubmixWidgetInterface *this,USoundSubmixBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnConstructed instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundSubmixWidgetInterface.gen.cpp"
                     ,0x1d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

