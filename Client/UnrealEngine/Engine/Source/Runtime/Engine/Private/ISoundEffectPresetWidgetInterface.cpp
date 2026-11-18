// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Execute_GetClass @ 147332090

/* WARNING: Removing unreachable block (ram,0x000147332159) */

TSubclassOf<USoundEffectPreset> __cdecl
ISoundEffectPresetWidgetInterface::Execute_GetClass(UObject *param_1)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  TSubclassOf<USoundEffectPreset> TVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UObject *in_RDX;
  
  if ((in_RDX == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("O != 0",
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundEffectPresetWidgetInterface.gen.cpp"
                         ,0x2b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar1)();
    return (TSubclassOf<USoundEffectPreset>)TVar3.Class.field0_0x0;
  }
  this = *(UClass **)&in_RDX->field_0x10;
  pUVar4 = USoundEffectPresetWidgetInterface::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar4);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("O->GetClass()->ImplementsInterface(USoundEffectPresetWidgetInterface::StaticClass())"
                         ,
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundEffectPresetWidgetInterface.gen.cpp"
                         ,0x2c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar1)();
    return (TSubclassOf<USoundEffectPreset>)TVar3.Class.field0_0x0;
  }
  pUVar5 = UObject::FindFunction(in_RDX,NAME_USoundEffectPresetWidgetInterface_GetClass);
  if (pUVar5 != (UFunction *)0x0) {
    (**(code **)(*(longlong *)in_RDX + 0x260))();
  }
  *(undefined8 *)param_1 = 0;
  return (TSubclassOf<USoundEffectPreset>)(TObjectPtr<UClass>)param_1;
}

// Execute_OnConstructed @ 147332180

void __cdecl
ISoundEffectPresetWidgetInterface::Execute_OnConstructed
          (UObject *param_1,USoundEffectPreset *param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  USoundEffectPreset *local_res8;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundEffectPresetWidgetInterface.gen.cpp"
                       ,0x69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = USoundEffectPresetWidgetInterface::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(USoundEffectPresetWidgetInterface::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundEffectPresetWidgetInterface.gen.cpp"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_USoundEffectPresetWidgetInterface_OnConstructed);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8 = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,&local_res8);
  }
  return;
}

// Execute_OnPropertyChanged @ 147332320

void __cdecl
ISoundEffectPresetWidgetInterface::Execute_OnPropertyChanged
          (UObject *param_1,USoundEffectPreset *param_2,FName param_3)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  USoundEffectPreset *local_18;
  FName local_10;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundEffectPresetWidgetInterface.gen.cpp"
                       ,0xa9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = USoundEffectPresetWidgetInterface::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(USoundEffectPresetWidgetInterface::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundEffectPresetWidgetInterface.gen.cpp"
                       ,0xaa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_USoundEffectPresetWidgetInterface_OnPropertyChanged);
  if (pUVar4 != (UFunction *)0x0) {
    local_18 = param_2;
    local_10 = param_3;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,&local_18);
  }
  return;
}

// GetClass @ 147332440

TSubclassOf<USoundEffectPreset> __thiscall
ISoundEffectPresetWidgetInterface::GetClass(ISoundEffectPresetWidgetInterface *this)

{
  code *pcVar1;
  bool bVar2;
  TSubclassOf<USoundEffectPreset> TVar3;
  TObjectPtr<UClass> in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_GetClass instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundEffectPresetWidgetInterface.gen.cpp"
                     ,0x24,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar1)();
    return (TSubclassOf<USoundEffectPreset>)TVar3.Class.field0_0x0;
  }
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<USoundEffectPreset>)in_RDX.field0_0x0;
}

// OnConstructed @ 147333270

void __thiscall
ISoundEffectPresetWidgetInterface::OnConstructed
          (ISoundEffectPresetWidgetInterface *this,USoundEffectPreset *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnConstructed instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundEffectPresetWidgetInterface.gen.cpp"
                     ,100,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnPropertyChanged @ 1473332f0

void __thiscall
ISoundEffectPresetWidgetInterface::OnPropertyChanged
          (ISoundEffectPresetWidgetInterface *this,USoundEffectPreset *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnPropertyChanged instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SoundEffectPresetWidgetInterface.gen.cpp"
                     ,0xa4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

