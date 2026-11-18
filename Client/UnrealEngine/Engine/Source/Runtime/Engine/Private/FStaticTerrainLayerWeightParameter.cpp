// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14732b530

UScriptStruct * __cdecl FStaticTerrainLayerWeightParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticTerrainLayerWeightParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticTerrainLayerWeightParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter,
                         (UObject *)pUVar1,L"StaticTerrainLayerWeightParameter");
  }
  return Z_Registration_Info_UScriptStruct_FStaticTerrainLayerWeightParameter.OuterSingleton;
}

// Append @ 147f6e4c0

void __thiscall
FStaticTerrainLayerWeightParameter::Append
          (FStaticTerrainLayerWeightParameter *this,FShaderKeyGenerator *param_1)

{
  FShaderKeyGenerator::Append(param_1,this->LayerName);
  FShaderKeyGenerator::Append(param_1,this->WeightmapIndex);
  return;
}

// AppendKeyString @ 147f6ef10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticTerrainLayerWeightParameter::AppendKeyString
          (FStaticTerrainLayerWeightParameter *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  int local_78 [2];
  undefined8 local_70;
  int *local_68 [2];
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  FString *local_28;
  EOutputType local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_58[0] = (code *)0x0;
  local_30 = (longlong *)0x0;
  local_20 = Text;
  local_28 = param_1;
  FShaderKeyGenerator::Append((FShaderKeyGenerator *)local_58,this->LayerName);
  local_78[0] = this->WeightmapIndex;
  if (local_20 == Text) {
    ::FString::AppendfImpl(local_28,L"%d");
  }
  else if (local_20 == Binary) {
    local_68[0] = local_78;
    local_70 = 4;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar1 = local_58[0];
    plVar4 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,local_68,&local_70);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0xf0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_58[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

