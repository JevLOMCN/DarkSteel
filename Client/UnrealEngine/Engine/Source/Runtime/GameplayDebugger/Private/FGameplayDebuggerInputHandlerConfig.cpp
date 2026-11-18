// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 3

// FGameplayDebuggerInputHandlerConfig @ 146d3fe60

FGameplayDebuggerInputHandlerConfig * __thiscall
FGameplayDebuggerInputHandlerConfig::FGameplayDebuggerInputHandlerConfig
          (FGameplayDebuggerInputHandlerConfig *this,FName param_1,FName param_2)

{
  FGameplayDebuggerInputModifier *pFVar1;
  FGameplayDebuggerInputModifier *pFVar2;
  
  pFVar2 = &this->Modifier;
  pFVar2->bShift = 0;
  pFVar2->bReleased = 0;
  pFVar2->bPressed = 1;
  pFVar2->bCmd = 0;
  pFVar2->bAlt = 0;
  pFVar2->bCtrl = 0;
  this->KeyName = param_2;
  UpdateConfig(this,param_1);
  return this;
}

// FGameplayDebuggerInputHandlerConfig @ 146d3fe90

FGameplayDebuggerInputHandlerConfig * __thiscall
FGameplayDebuggerInputHandlerConfig::FGameplayDebuggerInputHandlerConfig
          (FGameplayDebuggerInputHandlerConfig *this,FName param_1,FName param_2,
          FGameplayDebuggerInputModifier *param_3)

{
  FGameplayDebuggerInputModifier *pFVar1;
  FGameplayDebuggerInputModifier *pFVar2;
  
  pFVar2 = &this->Modifier;
  pFVar2->bShift = 0;
  pFVar2->bReleased = 0;
  pFVar2->bPressed = 1;
  pFVar2->bCmd = 0;
  pFVar2->bAlt = 0;
  pFVar2->bCtrl = 0;
  this->KeyName = param_2;
  this->Modifier = *param_3;
  UpdateConfig(this,param_1);
  return this;
}

// UpdateConfig @ 146d5e510

void __thiscall
FGameplayDebuggerInputHandlerConfig::UpdateConfig
          (FGameplayDebuggerInputHandlerConfig *this,FName param_1)

{
  UClass *pUVar1;
  UGameplayDebuggerConfig *pUVar2;
  
  if (CurrentCategoryName != (FName)0x0) {
    pUVar1 = UGameplayDebuggerConfig::StaticClass();
    pUVar2 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(pUVar1);
    UGameplayDebuggerConfig::UpdateCategoryInputConfig
              (pUVar2,CurrentCategoryName,param_1,&this->KeyName,&this->Modifier);
    return;
  }
  if (CurrentExtensionName != (FName)0x0) {
    pUVar1 = UGameplayDebuggerConfig::StaticClass();
    pUVar2 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(pUVar1);
    UGameplayDebuggerConfig::UpdateExtensionInputConfig
              (pUVar2,CurrentExtensionName,param_1,&this->KeyName,&this->Modifier);
  }
  return;
}

