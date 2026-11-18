// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147f0bfd0

UScriptStruct * __cdecl FFontParameterValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFontParameterValue.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FFontParameterValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFontParameterValue,(UObject *)pUVar1,
                         L"FontParameterValue");
  }
  return Z_Registration_Info_UScriptStruct_FFontParameterValue.OuterSingleton;
}

// GetValue @ 147f46ce0

UTexture * __cdecl FFontParameterValue::GetValue(FFontParameterValue *param_1)

{
  uint uVar1;
  UFont *pUVar2;
  code *pcVar3;
  bool bVar4;
  UTexture *pUVar5;
  uint uVar6;
  
  pUVar2 = (param_1->FontValue).field0_0x0.DebugPtr;
  if (pUVar2 == (UFont *)0x0) {
    return (UTexture *)0x0;
  }
  uVar1 = param_1->FontPage;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (pUVar2->Textures).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar1 < (pUVar2->Textures).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UTexture *)(*pcVar3)();
        return pUVar5;
      }
    }
    return *(UTexture **)((pUVar2->Textures).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  }
  return (UTexture *)0x0;
}

