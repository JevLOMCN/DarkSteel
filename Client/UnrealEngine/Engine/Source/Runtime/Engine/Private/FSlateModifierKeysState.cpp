// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147d59c50

UScriptStruct * __cdecl FSlateModifierKeysState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSlateModifierKeysState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSlateModifierKeysState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSlateModifierKeysState,(UObject *)pUVar1,
                         L"SlateModifierKeysState");
  }
  return Z_Registration_Info_UScriptStruct_FSlateModifierKeysState.OuterSingleton;
}

// FSlateModifierKeysState @ 147d790f0

FSlateModifierKeysState * __thiscall
FSlateModifierKeysState::FSlateModifierKeysState
          (FSlateModifierKeysState *this,FModifierKeysState *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = param_1->bIsLeftControlDown != 0 || param_1->bIsRightControlDown != 0;
  bVar2 = bVar3 | 2;
  if (param_1->bIsLeftAltDown == 0 && param_1->bIsRightAltDown == 0) {
    bVar2 = bVar3;
  }
  bVar1 = bVar2 | 4;
  if (param_1->bIsLeftShiftDown == 0 && param_1->bIsRightShiftDown == 0) {
    bVar1 = bVar2;
  }
  bVar2 = bVar1 | 8;
  if (param_1->bIsLeftCommandDown == 0 && param_1->bIsRightCommandDown == 0) {
    bVar2 = bVar1;
  }
  this->ModifierKeysStateMask = bVar2;
  return this;
}

