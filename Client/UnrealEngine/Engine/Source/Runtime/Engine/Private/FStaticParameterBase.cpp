// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14732b3b0

UScriptStruct * __cdecl FStaticParameterBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticParameterBase.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticParameterBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticParameterBase,(UObject *)pUVar1,
                         L"StaticParameterBase");
  }
  return Z_Registration_Info_UScriptStruct_FStaticParameterBase.OuterSingleton;
}

// Append @ 147f6e3f0

void __thiscall
FStaticParameterBase::Append(FStaticParameterBase *this,FShaderKeyGenerator *param_1)

{
  FShaderKeyGenerator::Append(param_1,(this->ParameterInfo).Name);
  FShaderKeyGenerator::Append(param_1,(uint)(this->ParameterInfo).Association.Value);
  FShaderKeyGenerator::Append(param_1,(this->ParameterInfo).Index);
  FShaderKeyGenerator::AppendBoolInt(param_1,this->bOverride);
  FShaderKeyGenerator::Append(param_1,&this->ExpressionGUID);
  return;
}

// AppendKeyString @ 147f6e9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FStaticParameterBase::AppendKeyString(FStaticParameterBase *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  uint local_a0 [2];
  int local_98 [2];
  undefined8 local_90;
  uint *local_88;
  undefined8 local_80;
  int *local_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  FString *local_28;
  EOutputType local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_58[0] = (code *)0x0;
  local_30 = (longlong *)0x0;
  local_20 = Text;
  local_28 = param_1;
  FShaderKeyGenerator::Append((FShaderKeyGenerator *)local_58,(this->ParameterInfo).Name);
  local_a0[0] = (uint)(this->ParameterInfo).Association.Value;
  if (local_20 == Text) {
    ::FString::AppendfImpl(local_28,L"%d");
  }
  else if (local_20 == Binary) {
    local_88 = local_a0;
    local_90 = 4;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar1 = local_58[0];
    plVar4 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_88,&local_90);
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
  local_98[0] = (this->ParameterInfo).Index;
  if (local_20 == Text) {
    ::FString::AppendfImpl(local_28,L"%d");
  }
  else if (local_20 == Binary) {
    local_78 = local_98;
    local_80 = 4;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar1 = local_58[0];
    plVar4 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_78,&local_80);
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
  if (local_20 == Text) {
    ::FString::AppendChar(local_28,(ushort)(this->bOverride != false) + L'0');
  }
  else if (local_20 == Binary) {
    local_68[0] = local_a8;
    local_a8[0] = this->bOverride != false;
    local_70 = 1;
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
                       ,0x120,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FShaderKeyGenerator::Append((FShaderKeyGenerator *)local_58,&this->ExpressionGUID);
  if (local_58[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

