// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// Decrypt @ 14c07d880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FDS_AESUtil::Decrypt(FString *__return_storage_ptr__,FString *param_1)

{
  ForAnyElementType FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar5;
  FString *pFVar6;
  uint uVar7;
  size_t _Size;
  int iVar8;
  undefined1 auStackY_148 [32];
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_e8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x20,&local_f8,(int *)&local_f0,(int *)((longlong)&local_f0 + 4));
  uVar7 = AES_PUBLIC_KEY.Data.ArrayNum - 1;
  FVar1 = AES_PUBLIC_KEY.Data.AllocatorInstance;
  if (AES_PUBLIC_KEY.Data.ArrayNum == 0) {
    uVar7 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  pTVar5 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
           TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                     (&local_d8,(wchar_t *)FVar1.Data);
  memcpy(local_f8.Data,pTVar5->Ptr,(longlong)(int)uVar7);
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  FBase64::Decode(param_1,&local_e8,Standard);
  FVar1.Data = local_e8.AllocatorInstance.Data;
  _Size = (size_t)local_e8.ArrayNum;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = local_e8.ArrayNum;
  if (local_e8.ArrayNum == 0) {
    local_fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_e8.ArrayNum,0,&local_108,local_e8.ArrayNum,&local_fc);
    memcpy(local_108.Data,FVar1.Data,_Size);
  }
  FAES::DecryptData((uchar *)local_108.Data,(longlong)local_100,(uchar *)local_f8.Data,
                    (uint)local_f0);
  if (0 < local_100) {
    uVar7 = 0;
    if ((int)(local_100 - 1U) < local_100) {
      uVar7 = ~(local_100 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    if ((byte)((char)local_108.Data[(longlong)local_100 + -1] - 1U) < 0x10) {
      uVar7 = (uint)(byte)local_108.Data[(longlong)local_100 + -1];
      iVar8 = local_100 - uVar7;
      if ((iVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar2)();
        return pFVar6;
      }
      iVar4 = (local_100 - iVar8) - uVar7;
      if (iVar4 != 0) {
        memmove(local_108.Data + iVar8,local_108.Data + iVar8 + uVar7,(longlong)iVar4);
      }
      local_100 = local_100 - uVar7;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,&local_108,local_100,&local_fc);
    }
  }
  iVar8 = local_100;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Reserve(__return_storage_ptr__,local_100);
  FVar1.Data = local_108.Data;
  for (; 0 < iVar8; iVar8 = iVar8 + -1) {
    ::FString::AppendChar(__return_storage_ptr__,(ushort)(byte)*FVar1.Data);
    FVar1.Data = FVar1.Data + 1;
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return __return_storage_ptr__;
}

// Encrypt @ 14c07def0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FDS_AESUtil::Encrypt(FString *__return_storage_ptr__,FString *param_1)

{
  char *_Src;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  uint uVar8;
  size_t _Size;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStackY_208 [32];
  FScriptContainerElement local_1b8 [8];
  ForAnyElementType local_1b0;
  int local_1a8;
  int iStack_1a4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1a0;
  ForAnyElementType local_190;
  uint local_188 [4];
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_178;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  iVar10 = 0;
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188[0] = 0;
  local_188[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x20,&local_190,(int *)local_188,(int *)(local_188 + 1));
  iVar4 = AES_PUBLIC_KEY.Data.ArrayNum + -1;
  FVar2 = AES_PUBLIC_KEY.Data.AllocatorInstance;
  if (AES_PUBLIC_KEY.Data.ArrayNum == 0) {
    iVar4 = iVar10;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  pTVar5 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
           TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                     (&local_178,(wchar_t *)FVar2.Data);
  memcpy(local_190.Data,pTVar5->Ptr,(longlong)iVar4);
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  iVar4 = (param_1->Data).ArrayNum;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 0;
  iStack_1a4 = 0;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar10 = iVar4 + -1;
  }
  pTVar5 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
           TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_d8,pwVar7)
  ;
  _Src = pTVar5->Ptr;
  if (((_Src == (char *)0x0) && (iVar10 != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar1)();
    return pFVar6;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar10,&local_1b0,&local_1a8,&iStack_1a4);
  if (iVar10 != 0) {
    memcpy(local_1b0.Data + iVar4,_Src,(longlong)iVar10);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  iVar10 = (param_1->Data).ArrayNum;
  uVar8 = iVar10 - 1;
  if (iVar10 == 0) {
    uVar8 = 0;
  }
  uVar8 = 0x10 - (uVar8 & 0xf);
  if (0 < (int)uVar8) {
    uVar9 = (ulonglong)uVar8;
    do {
      local_1b8[0] = SUB41(uVar8,0);
      if (((local_1b0.Data <= local_1b8) && (local_1b8 < local_1b0.Data + iStack_1a4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      if (local_1a8 == iStack_1a4) {
        local_1a8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_1b0,&iStack_1a4);
      }
      iVar10 = local_1a8 + 1;
      local_1b0.Data[local_1a8] = local_1b8[0];
      uVar9 = uVar9 - 1;
      local_1a8 = iVar10;
    } while (uVar9 != 0);
  }
  FVar2.Data = local_1b0.Data;
  _Size = (size_t)local_1a8;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = local_1a8;
  if (local_1a8 == 0) {
    local_1a0.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_1a8,0,&local_1a0.AllocatorInstance,local_1a8,&local_1a0.ArrayMax);
    memcpy(local_1a0.AllocatorInstance.Data,FVar2.Data,_Size);
  }
  FAES::EncryptData((uchar *)local_1a0.AllocatorInstance.Data,(longlong)local_1a0.ArrayNum,
                    (uchar *)local_190.Data,local_188[0]);
  FBase64::Encode(__return_storage_ptr__,&local_1a0,Standard);
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  if (local_1b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data);
  }
  if (local_190.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data);
  }
  return __return_storage_ptr__;
}

