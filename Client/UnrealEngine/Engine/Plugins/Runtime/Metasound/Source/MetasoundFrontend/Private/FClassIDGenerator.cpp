// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// CreateInputID @ 14ae2c610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __thiscall
Metasound::Frontend::FClassIDGenerator::CreateInputID
          (FClassIDGenerator *this,FGuid *__return_storage_ptr__,FInput *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  undefined1 auStack_128 [32];
  uchar local_108 [16];
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined4 local_c8;
  FSHA1 local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_108[0] = 0xc0;
  local_108[1] = 0x93;
  local_108[2] = 0xe8;
  local_108[3] = 0xd9;
  local_108[4] = 0xb4;
  local_108[5] = 'L';
  local_108[6] = 0xb3;
  local_108[7] = 0x92;
  local_108[8] = '%';
  local_108[9] = 'E';
  local_108[10] = '\x06';
  local_108[0xb] = 0x83;
  local_108[0xc] = 0xdd;
  local_108[0xd] = 0xca;
  local_108[0xe] = 0xea;
  local_108[0xf] = 0xab;
  ::FName::ToString(&param_1->DataType,&local_d8);
  ::FName::ToString(&(param_1->InitValue).ParamName,&local_e8);
  ::FString::PrintfImpl(&local_f8,L"ParameterInterfaceInput.%s.%s");
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  FSHA1::FSHA1(&local_b8);
  FSHA1::Update(&local_b8,local_108,0x10);
  uVar2 = local_f8.Data.ArrayNum - 1;
  FVar1.Data = local_f8.Data.AllocatorInstance.Data;
  if (local_f8.Data.ArrayNum == 0) {
    uVar2 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  FSHA1::UpdateWithString(&local_b8,(wchar_t *)FVar1.Data,uVar2);
  FSHA1::Final(&local_b8);
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_c8 = 0;
  FSHA1::GetHash(&local_b8,(uchar *)&local_d8);
  __return_storage_ptr__->B = local_d8.Data.AllocatorInstance.Data._4_4_;
  __return_storage_ptr__->C = local_d8.Data.ArrayNum;
  __return_storage_ptr__->D = local_d8.Data.ArrayMax;
  __return_storage_ptr__->A = (uint)local_d8.Data.AllocatorInstance.Data;
  FSHA1::~FSHA1(&local_b8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateInputID @ 14ae2c7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __thiscall
Metasound::Frontend::FClassIDGenerator::CreateInputID
          (FClassIDGenerator *this,FGuid *__return_storage_ptr__,
          FMetasoundFrontendClassInput *param_1)

{
  ForAnyElementType FVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  uchar local_118 [16];
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined4 local_d8;
  FSHA1 local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_118[0] = 'n';
  local_118[1] = 0xeb;
  local_118[2] = 0x9f;
  local_118[3] = '\x14';
  local_118[4] = 0xa6;
  local_118[5] = 'G';
  local_118[6] = 0xf9;
  local_118[7] = 0xb9;
  local_118[8] = 0x86;
  local_118[9] = 0xb7;
  local_118[10] = 'O';
  local_118[0xb] = 0xad;
  local_118[0xc] = 0xe8;
  local_118[0xd] = 0xeb;
  local_118[0xe] = 0xf6;
  local_118[0xf] = 'U';
  pwVar2 = ::LexToString((EMetasoundFrontendVertexAccessType)param_1->_padding_);
  ::FName::ToString((FName *)&param_1->_padding_,&local_e8);
  ::FName::ToString((FName *)param_1,&local_f8);
  local_128 = pwVar2;
  ::FString::PrintfImpl(&local_108,L"ClassInput.%s.%s.%s");
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  FSHA1::FSHA1(&local_c8);
  FSHA1::Update(&local_c8,local_118,0x10);
  uVar3 = local_108.Data.ArrayNum - 1;
  FVar1.Data = local_108.Data.AllocatorInstance.Data;
  if (local_108.Data.ArrayNum == 0) {
    uVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  FSHA1::UpdateWithString(&local_c8,(wchar_t *)FVar1.Data,uVar3);
  FSHA1::Final(&local_c8);
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_d8 = 0;
  FSHA1::GetHash(&local_c8,(uchar *)&local_e8);
  __return_storage_ptr__->B = local_e8.Data.AllocatorInstance.Data._4_4_;
  __return_storage_ptr__->C = local_e8.Data.ArrayNum;
  __return_storage_ptr__->D = local_e8.Data.ArrayMax;
  __return_storage_ptr__->A = (uint)local_e8.Data.AllocatorInstance.Data;
  FSHA1::~FSHA1(&local_c8);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateNamespacedIDFromString @ 14ae2d460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __thiscall
Metasound::Frontend::FClassIDGenerator::CreateNamespacedIDFromString
          (FClassIDGenerator *this,FGuid *__return_storage_ptr__,FGuid *param_1,FString *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined1 auStack_f8 [32];
  uint local_d8 [8];
  FSHA1 local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FSHA1::FSHA1(&local_b8);
  FSHA1::Update(&local_b8,(uchar *)param_1,0x10);
  iVar1 = (param_2->Data).ArrayNum;
  uVar3 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar3 = 0;
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  FSHA1::UpdateWithString(&local_b8,pwVar2,uVar3);
  FSHA1::Final(&local_b8);
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[4] = 0;
  FSHA1::GetHash(&local_b8,(uchar *)local_d8);
  __return_storage_ptr__->A = local_d8[0];
  __return_storage_ptr__->B = local_d8[1];
  __return_storage_ptr__->C = local_d8[2];
  __return_storage_ptr__->D = local_d8[3];
  FSHA1::~FSHA1(&local_b8);
  return __return_storage_ptr__;
}

// CreateOutputID @ 14ae2e580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __thiscall
Metasound::Frontend::FClassIDGenerator::CreateOutputID
          (FClassIDGenerator *this,FGuid *__return_storage_ptr__,
          FMetasoundFrontendClassOutput *param_1)

{
  ForAnyElementType FVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  uchar local_118 [16];
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined4 local_d8;
  FSHA1 local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_118[0] = ',';
  local_118[1] = 0xed;
  local_118[2] = 0xb3;
  local_118[3] = 199;
  local_118[4] = '*';
  local_118[5] = 'K';
  local_118[6] = '\a';
  local_118[7] = 'D';
  local_118[8] = '\x11';
  local_118[9] = '\x7f';
  local_118[10] = 'D';
  local_118[0xb] = 0x91;
  local_118[0xc] = 0xbb;
  local_118[0xd] = '~';
  local_118[0xe] = '8';
  local_118[0xf] = '\b';
  pwVar2 = ::LexToString(*(EMetasoundFrontendVertexAccessType *)&param_1->field_0x30);
  ::FName::ToString((FName *)&param_1->field_0x8,&local_e8);
  ::FName::ToString((FName *)param_1,&local_f8);
  local_128 = pwVar2;
  ::FString::PrintfImpl(&local_108,L"ClassOutput.%s.%s.%s");
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  FSHA1::FSHA1(&local_c8);
  FSHA1::Update(&local_c8,local_118,0x10);
  uVar3 = local_108.Data.ArrayNum - 1;
  FVar1.Data = local_108.Data.AllocatorInstance.Data;
  if (local_108.Data.ArrayNum == 0) {
    uVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  FSHA1::UpdateWithString(&local_c8,(wchar_t *)FVar1.Data,uVar3);
  FSHA1::Final(&local_c8);
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_d8 = 0;
  FSHA1::GetHash(&local_c8,(uchar *)&local_e8);
  __return_storage_ptr__->B = local_e8.Data.AllocatorInstance.Data._4_4_;
  __return_storage_ptr__->C = local_e8.Data.ArrayNum;
  __return_storage_ptr__->D = local_e8.Data.ArrayMax;
  __return_storage_ptr__->A = (uint)local_e8.Data.AllocatorInstance.Data;
  FSHA1::~FSHA1(&local_c8);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateOutputID @ 14ae2e720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __thiscall
Metasound::Frontend::FClassIDGenerator::CreateOutputID
          (FClassIDGenerator *this,FGuid *__return_storage_ptr__,FOutput *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  undefined1 auStack_128 [32];
  uchar local_108 [16];
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined4 local_c8;
  FSHA1 local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_108[0] = '*';
  local_108[1] = '4';
  local_108[2] = 'A';
  local_108[3] = 'o';
  local_108[4] = 'b';
  local_108[5] = 'D';
  local_108[6] = '6';
  local_108[7] = '$';
  local_108[8] = '\x17';
  local_108[9] = 0x85;
  local_108[10] = 0xa0;
  local_108[0xb] = 0x81;
  local_108[0xc] = ')';
  local_108[0xd] = 0xb7;
  local_108[0xe] = '{';
  local_108[0xf] = 0x88;
  ::FName::ToString(&param_1->DataType,&local_d8);
  ::FName::ToString(&param_1->ParamName,&local_e8);
  ::FString::PrintfImpl(&local_f8,L"ParameterInterfaceOutput.%s.%s");
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  FSHA1::FSHA1(&local_b8);
  FSHA1::Update(&local_b8,local_108,0x10);
  uVar2 = local_f8.Data.ArrayNum - 1;
  FVar1.Data = local_f8.Data.AllocatorInstance.Data;
  if (local_f8.Data.ArrayNum == 0) {
    uVar2 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  FSHA1::UpdateWithString(&local_b8,(wchar_t *)FVar1.Data,uVar2);
  FSHA1::Final(&local_b8);
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_c8 = 0;
  FSHA1::GetHash(&local_b8,(uchar *)&local_d8);
  __return_storage_ptr__->B = local_d8.Data.AllocatorInstance.Data._4_4_;
  __return_storage_ptr__->C = local_d8.Data.ArrayNum;
  __return_storage_ptr__->D = local_d8.Data.ArrayMax;
  __return_storage_ptr__->A = (uint)local_d8.Data.AllocatorInstance.Data;
  FSHA1::~FSHA1(&local_b8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Get @ 14ae374c0

FClassIDGenerator * __cdecl Metasound::Frontend::FClassIDGenerator::Get(void)

{
  return &IDGenerator;
}

