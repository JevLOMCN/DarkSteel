// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// Append @ 145df8300

void __thiscall FShaderKeyGenerator::Append(FShaderKeyGenerator *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  int local_res10 [2];
  int *local_res18;
  
  local_res10[0] = param_1;
  if (this->OutputType == Text) {
    ::FString::AppendfImpl(this->ResultString,L"%d");
  }
  else {
    if (this->OutputType == Binary) {
      local_res18 = local_res10;
      local_res8 = 4;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ResultFunc);
      plVar1 = *(longlong **)&(this->ResultFunc).field_0x28;
      pcVar2 = *(code **)&this->ResultFunc;
      plVar5 = (longlong *)&(this->ResultFunc).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar5 = plVar1;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_res18,&local_res8);
      return;
    }
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
  return;
}

// Append @ 145df83c0

void __thiscall FShaderKeyGenerator::Append(FShaderKeyGenerator *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  uint local_res10 [2];
  uint *local_res18;
  
  local_res10[0] = param_1;
  if (this->OutputType == Text) {
    ::FString::AppendfImpl(this->ResultString,L"%u");
  }
  else {
    if (this->OutputType == Binary) {
      local_res18 = local_res10;
      local_res8 = 4;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ResultFunc);
      plVar1 = *(longlong **)&(this->ResultFunc).field_0x28;
      pcVar2 = *(code **)&this->ResultFunc;
      plVar5 = (longlong *)&(this->ResultFunc).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar5 = plVar1;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_res18,&local_res8);
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0xff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Append @ 145df8480

void __thiscall FShaderKeyGenerator::Append(FShaderKeyGenerator *this,TStringView<wchar_t> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_res8;
  wchar_t *local_res18 [2];
  
  if (this->OutputType == Text) {
    ::FString::AppendChars(this->ResultString,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    return;
  }
  if (this->OutputType != Binary) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0xac,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    return;
  }
  local_res8 = (longlong)param_1->Size * 2;
  local_res18[0] = param_1->DataPtr;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ResultFunc);
  plVar1 = *(longlong **)&(this->ResultFunc).field_0x28;
  pcVar2 = *(code **)&this->ResultFunc;
  plVar5 = (longlong *)&(this->ResultFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,local_res18,&local_res8);
  return;
}

// Append @ 145df8540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FShaderKeyGenerator::Append(FShaderKeyGenerator *this,FName param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FName local_res10;
  undefined1 auStack_888 [32];
  longlong local_868;
  wchar_t *local_860;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_res10 = param_1;
  if (this->OutputType == Text) {
    ::FName::AppendString(&local_res10,this->ResultString);
  }
  else if (this->OutputType == Binary) {
    local_858.Base = local_838;
    local_858.CurPos = local_838;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    local_858.End = local_22;
    ::FName::AppendString(&local_res10,&local_858);
    local_860 = local_858.Base;
    local_868 = (longlong)(int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1) * 2;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ResultFunc);
    plVar1 = *(longlong **)&(this->ResultFunc).field_0x28;
    pcVar2 = *(code **)&this->ResultFunc;
    plVar5 = (longlong *)&(this->ResultFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_860,&local_868);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0xc3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// AppendBoolInt @ 145df8680

void __thiscall FShaderKeyGenerator::AppendBoolInt(FShaderKeyGenerator *this,bool param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 local_res18;
  undefined1 *local_res20;
  
  if (this->OutputType == Text) {
    ::FString::AppendChar(this->ResultString,(ushort)(byte)(param_1 + 0x30));
    return;
  }
  if (this->OutputType != Binary) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0x120,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    return;
  }
  local_res20 = local_res8;
  local_res18 = 1;
  local_res8[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ResultFunc);
  plVar1 = *(longlong **)&(this->ResultFunc).field_0x28;
  pcVar2 = *(code **)&this->ResultFunc;
  plVar5 = (longlong *)&(this->ResultFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,&local_res20,&local_res18);
  return;
}

// AppendDebugText @ 145df8740

void __thiscall
FShaderKeyGenerator::AppendDebugText(FShaderKeyGenerator *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->OutputType == Text) {
    ::FString::AppendChars(this->ResultString,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    return;
  }
  if (this->OutputType != Binary) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// AppendHex @ 145df87a0

void __thiscall FShaderKeyGenerator::AppendHex(FShaderKeyGenerator *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  uint local_res10 [2];
  uint *local_res18;
  
  local_res10[0] = param_1;
  if (this->OutputType == Text) {
    ::FString::AppendfImpl(this->ResultString,L"%X");
  }
  else {
    if (this->OutputType == Binary) {
      local_res18 = local_res10;
      local_res8 = 4;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ResultFunc);
      plVar1 = *(longlong **)&(this->ResultFunc).field_0x28;
      pcVar2 = *(code **)&this->ResultFunc;
      plVar5 = (longlong *)&(this->ResultFunc).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar5 = plVar1;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_res18,&local_res8);
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0x10e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// AppendSeparator @ 145df8860

void __thiscall FShaderKeyGenerator::AppendSeparator(FShaderKeyGenerator *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->OutputType == Text) {
    ::FString::AppendChar(this->ResultString,L'_');
    return;
  }
  if (this->OutputType != Binary) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0x13e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

