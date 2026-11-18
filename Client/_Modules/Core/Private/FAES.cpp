// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// DecryptData @ 1418201c0

void __cdecl FAES::DecryptData(uchar *param_1,ulong64 param_2,FAESKey *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    if (*(int *)(param_3->Key + lVar3 * 4) != 0) goto LAB_141820216;
    lVar3 = lVar3 + 1;
  } while (lVar3 < 8);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Key.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                     ,0x46b,L"No valid decryption key specified");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141820216:
  if ((param_2 & 0xf) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytes % AESBlockSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                       ,0x477,L"NumBytes needs to be a multiple of 16 bytes");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014182025a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*AesDecrypt)(param_3->Key,param_1,param_2);
  return;
}

// DecryptData @ 141820270

void __cdecl FAES::DecryptData(uchar *param_1,ulong64 param_2,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  
  if (param_3 == (char *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Key != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                       ,0x471,L"No valid decryption key specified");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  sVar3 = strlen(param_3);
  DecryptData(param_1,param_2,(uchar *)param_3,(uint)sVar3);
  return;
}

// DecryptData @ 1418202f0

void __cdecl FAES::DecryptData(uchar *param_1,ulong64 param_2,uchar *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2 & 0xf) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytes % AESBlockSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                       ,0x477,L"NumBytes needs to be a multiple of 16 bytes");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_4 != 0x20) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumKeyBytes == FAESKey::KeySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                       ,0x478,L"AES-256 key needs to be 32 bytes long");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141820383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*AesDecrypt)(param_3,param_1,param_2);
  return;
}

// EncryptData @ 141821e40

void __cdecl FAES::EncryptData(uchar *param_1,ulong64 param_2,FAESKey *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    if (*(int *)(param_3->Key + lVar3 * 4) != 0) goto LAB_141821e96;
    lVar3 = lVar3 + 1;
  } while (lVar3 < 8);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Key.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                     ,0x458,L"No valid encryption key specified");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141821e96:
  if ((param_2 & 0xf) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytes % AESBlockSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                       ,0x464,L"NumBytes needs to be a multiple of 16 bytes");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141821eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*AesEncrypt)(param_3->Key,param_1,param_2);
  return;
}

// EncryptData @ 141821ef0

void __cdecl FAES::EncryptData(uchar *param_1,ulong64 param_2,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  
  if (param_3 == (char *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Key != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                       ,0x45e,L"No encryption key specified");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  sVar3 = strlen(param_3);
  EncryptData(param_1,param_2,(uchar *)param_3,(uint)sVar3);
  return;
}

// EncryptData @ 141821f70

void __cdecl FAES::EncryptData(uchar *param_1,ulong64 param_2,uchar *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2 & 0xf) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytes % AESBlockSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                       ,0x464,L"NumBytes needs to be a multiple of 16 bytes");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_4 != 0x20) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumKeyBytes == FAESKey::KeySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                       ,0x465,L"AES-256 key needs to be 32 bytes long");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141822003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*AesEncrypt)(param_3,param_1,param_2);
  return;
}

