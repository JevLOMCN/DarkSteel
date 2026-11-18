// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14732b470

UScriptStruct * __cdecl FStaticSwitchParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticSwitchParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticSwitchParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticSwitchParameter,(UObject *)pUVar1,
                         L"StaticSwitchParameter");
  }
  return Z_Registration_Info_UScriptStruct_FStaticSwitchParameter.OuterSingleton;
}

// Append @ 147f6e450

void __thiscall
FStaticSwitchParameter::Append(FStaticSwitchParameter *this,FShaderKeyGenerator *param_1)

{
  FShaderKeyGenerator::Append(param_1,(FName)this->_padding_);
  FShaderKeyGenerator::Append(param_1,(uint)(byte)this->_padding_);
  FShaderKeyGenerator::Append(param_1,*(int *)((longlong)&this->_padding_ + 4));
  FShaderKeyGenerator::AppendBoolInt(param_1,SUB81(this->_padding_,0));
  FShaderKeyGenerator::Append(param_1,(FGuid *)((longlong)&this->_padding_ + 4));
  FShaderKeyGenerator::Append(param_1,(uint)this->Value);
  return;
}

// AppendKeyString @ 147f6ec20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticSwitchParameter::AppendKeyString(FStaticSwitchParameter *this,FString *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  uint local_b0 [2];
  undefined4 local_a8 [2];
  uint local_a0 [2];
  undefined8 local_98;
  uint *local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  uint *local_60;
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  FString *local_28;
  EOutputType local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_58[0] = (code *)0x0;
  local_30 = (longlong *)0x0;
  local_20 = Text;
  local_28 = param_1;
  FShaderKeyGenerator::Append((FShaderKeyGenerator *)local_58,(FName)this->_padding_);
  local_b0[0] = (uint)(byte)this->_padding_;
  if (local_20 == Text) {
    ::FString::AppendfImpl(local_28,L"%d");
  }
  else if (local_20 == Binary) {
    local_90 = local_b0;
    local_98 = 4;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar2 = local_58[0];
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_90,&local_98);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0xf0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_a8[0] = *(undefined4 *)((longlong)&this->_padding_ + 4);
  if (local_20 == Text) {
    ::FString::AppendfImpl(local_28,L"%d");
  }
  else if (local_20 == Binary) {
    local_80 = local_a8;
    local_88 = 4;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar2 = local_58[0];
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_80,&local_88);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0xf0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  cVar1 = (char)this->_padding_;
  if (local_20 == Text) {
    ::FString::AppendChar(local_28,(ushort)(cVar1 != '\0') + L'0');
  }
  else if (local_20 == Binary) {
    local_70 = local_b8;
    local_b8[0] = cVar1 != '\0';
    local_78 = 1;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar2 = local_58[0];
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_70,&local_78);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0x120,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FShaderKeyGenerator::Append
            ((FShaderKeyGenerator *)local_58,(FGuid *)((longlong)&this->_padding_ + 4));
  local_a0[0] = (uint)this->Value;
  if (local_20 == Text) {
    ::FString::AppendfImpl(local_28,L"%d");
  }
  else if (local_20 == Binary) {
    local_60 = local_a0;
    local_68 = 4;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar2 = local_58[0];
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_60,&local_68);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0xf0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_58[0] != (code *)0x0) {
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

