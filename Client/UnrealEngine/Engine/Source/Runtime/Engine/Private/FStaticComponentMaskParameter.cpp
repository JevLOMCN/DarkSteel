// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14732b4f0

UScriptStruct * __cdecl FStaticComponentMaskParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticComponentMaskParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticComponentMaskParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticComponentMaskParameter,(UObject *)pUVar1,
                         L"StaticComponentMaskParameter");
  }
  return Z_Registration_Info_UScriptStruct_FStaticComponentMaskParameter.OuterSingleton;
}

// Append @ 147f6e360

void __thiscall
FStaticComponentMaskParameter::Append
          (FStaticComponentMaskParameter *this,FShaderKeyGenerator *param_1)

{
  FShaderKeyGenerator::Append(param_1,(FName)this->_padding_);
  FShaderKeyGenerator::Append(param_1,(uint)(byte)this->_padding_);
  FShaderKeyGenerator::Append(param_1,*(int *)((longlong)&this->_padding_ + 4));
  FShaderKeyGenerator::AppendBoolInt(param_1,SUB81(this->_padding_,0));
  FShaderKeyGenerator::Append(param_1,(FGuid *)((longlong)&this->_padding_ + 4));
  FShaderKeyGenerator::AppendBoolInt(param_1,this->R);
  FShaderKeyGenerator::AppendBoolInt(param_1,this->G);
  FShaderKeyGenerator::AppendBoolInt(param_1,this->B);
  FShaderKeyGenerator::AppendBoolInt(param_1,this->A);
  return;
}

// AppendKeyString @ 147f6e500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticComponentMaskParameter::AppendKeyString(FStaticComponentMaskParameter *this,FString *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined1 local_e4 [4];
  uint local_e0 [2];
  undefined4 local_d8 [2];
  undefined8 local_d0;
  uint *local_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  FString *local_28;
  EOutputType local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_58[0] = (code *)0x0;
  local_30 = (longlong *)0x0;
  local_20 = Text;
  local_28 = param_1;
  FShaderKeyGenerator::Append((FShaderKeyGenerator *)local_58,(FName)this->_padding_);
  local_e0[0] = (uint)(byte)this->_padding_;
  if (local_20 == Text) {
    ::FString::AppendfImpl(local_28,L"%d");
  }
  else if (local_20 == Binary) {
    local_c8 = local_e0;
    local_d0 = 4;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar2 = local_58[0];
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_c8,&local_d0);
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
  local_d8[0] = *(undefined4 *)((longlong)&this->_padding_ + 4);
  if (local_20 == Text) {
    ::FString::AppendfImpl(local_28,L"%d");
  }
  else if (local_20 == Binary) {
    local_b8 = local_d8;
    local_c0 = 4;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar2 = local_58[0];
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_b8,&local_c0);
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
    local_a8 = &local_e8;
    local_e8 = cVar1 != '\0';
    local_b0 = 1;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar2 = local_58[0];
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_a8,&local_b0);
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
  if (local_20 == Text) {
    ::FString::AppendChar(local_28,(ushort)(this->R != false) + L'0');
  }
  else if (local_20 == Binary) {
    local_98 = &local_e7;
    local_e7 = this->R != false;
    local_a0 = 1;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar2 = local_58[0];
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_98,&local_a0);
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
  if (local_20 == Text) {
    ::FString::AppendChar(local_28,(ushort)(this->G != false) + L'0');
  }
  else if (local_20 == Binary) {
    local_88 = &local_e6;
    local_e6 = this->G != false;
    local_90 = 1;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar2 = local_58[0];
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_88,&local_90);
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
  if (local_20 == Text) {
    ::FString::AppendChar(local_28,(ushort)(this->B != false) + L'0');
  }
  else if (local_20 == Binary) {
    local_78 = &local_e5;
    local_e5 = this->B != false;
    local_80 = 1;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar2 = local_58[0];
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_78,&local_80);
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
  if (local_20 == Text) {
    ::FString::AppendChar(local_28,(ushort)(this->A != false) + L'0');
  }
  else if (local_20 == Binary) {
    local_68[0] = local_e4;
    local_e4[0] = this->A != false;
    local_70 = 1;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar2 = local_58[0];
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_68,&local_70);
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
  if (local_58[0] != (code *)0x0) {
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

