// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Append @ 1419e0910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FShaderKeyGenerator::Append(FShaderKeyGenerator *this,FBlake3Hash *param_1)

{
  longlong *plVar1;
  FString *this_00;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  FBlake3Hash *local_160;
  FBlake3Hash *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  TArrayView<unsigned_char_const_,int> local_148;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  if (this->OutputType == Text) {
    this_00 = this->ResultString;
    local_138.Base = local_118;
    local_138.CurPos = local_118;
    local_138.End = (wchar_t *)local_18;
    uStack_150 = 0x20;
    local_148._12_4_ = uStack_14c;
    local_148.ArrayNum = 0x20;
    local_138.bIsDynamic = false;
    local_138.bIsExternal = false;
    local_158 = param_1;
    local_148.DataPtr = param_1->Hash;
    UE::String::BytesToHexLower(&local_148,&local_138);
    ::FString::AppendChars
              (this_00,local_138.Base,
               (int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1));
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  else if (this->OutputType == Binary) {
    local_168 = 0x20;
    local_160 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ResultFunc);
    plVar1 = *(longlong **)&(this->ResultFunc).field_0x28;
    pcVar2 = *(code **)&this->ResultFunc;
    plVar5 = (longlong *)&(this->ResultFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_160,&local_168);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\ShaderKeyGenerator.cpp"
                       ,0x18,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Append @ 1419e0a50

void __thiscall FShaderKeyGenerator::Append(FShaderKeyGenerator *this,FGuid *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  FGuid *local_res18 [2];
  
  if (this->OutputType == Text) {
    FGuid::AppendString(param_1,this->ResultString,Digits);
    return;
  }
  if (this->OutputType != Binary) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\ShaderKeyGenerator.cpp"
                       ,0x27,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    return;
  }
  local_res8 = 0x10;
  local_res18[0] = param_1;
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

// Append @ 1419e0b10

void __thiscall FShaderKeyGenerator::Append(FShaderKeyGenerator *this,FSHAHash *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  FSHAHash *local_res18 [2];
  
  if (this->OutputType == Text) {
    BytesToHex(param_1->Hash,0x14,this->ResultString);
    return;
  }
  if (this->OutputType != Binary) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\ShaderKeyGenerator.cpp"
                       ,0x36,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    return;
  }
  local_res8 = 0x14;
  local_res18[0] = param_1;
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

// BinaryAppend @ 1419e3810

void __thiscall
FShaderKeyGenerator::BinaryAppend(FShaderKeyGenerator *this,void *param_1,ulong64 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulong64 local_res8;
  void *local_res10;
  
  if (this->OutputType != Binary) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBinary()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = param_2;
  local_res10 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ResultFunc);
  plVar1 = *(longlong **)&(this->ResultFunc).field_0x28;
  pcVar2 = *(code **)&this->ResultFunc;
  plVar5 = (longlong *)&(this->ResultFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,&local_res10,&local_res8);
  return;
}

