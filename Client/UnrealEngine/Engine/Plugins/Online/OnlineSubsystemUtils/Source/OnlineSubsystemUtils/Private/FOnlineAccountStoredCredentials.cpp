// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 3

// StaticStruct @ 14ec43610

UScriptStruct * __cdecl FOnlineAccountStoredCredentials::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOnlineAccountStoredCredentials.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UScriptStruct_FOnlineAccountStoredCredentials.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials,(UObject *)pUVar1
                         ,L"OnlineAccountStoredCredentials");
  }
  return Z_Registration_Info_UScriptStruct_FOnlineAccountStoredCredentials.OuterSingleton;
}

// Decrypt @ 14ec6b5e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FOnlineAccountStoredCredentials::Decrypt(FOnlineAccountStoredCredentials *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FString *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ForAnyElementType local_28;
  int local_20 [2];
  FString local_18;
  
  iVar2 = (this->TokenBytes).ArrayNum;
  if (iVar2 < 1) {
    ::FString::Empty(&this->Token);
    return;
  }
  uVar13 = iVar2 + 0xfU & 0xfffffff0;
  uVar15 = (ulonglong)(int)uVar13;
  if ((0 < (int)uVar13) && (uVar15 == (longlong)iVar2)) {
    uVar12 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
    uVar16 = 0;
    local_20[1] = 0;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    local_20[0] = 0;
    if (uVar13 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar13,&local_28,0,local_20 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar13,&local_28,local_20,local_20 + 1);
    memcpy(local_28.Data,(this->TokenBytes).AllocatorInstance.Data,uVar15);
    uVar6 = _UNK_15307380c;
    uVar5 = _UNK_153073808;
    uVar4 = _UNK_153073804;
    uVar13 = ___xmm_deadbeefdeadbeefdeadbeefdeadbeef;
    uVar14 = (uint)(uVar15 >> 2);
    if ((0 < (int)uVar14) && (0xf < uVar14)) {
      uVar11 = uVar14 & 0x8000000f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
      }
      pFVar8 = local_28.Data + 0x20;
      uVar15 = uVar12;
      do {
        uVar16 = (int)uVar15 + 0x10;
        uVar15 = (ulonglong)uVar16;
        uVar12 = uVar12 + 0x10;
        *(uint *)(pFVar8 + -0x20) = *(uint *)(pFVar8 + -0x20) ^ uVar13;
        *(uint *)(pFVar8 + -0x1c) = *(uint *)(pFVar8 + -0x1c) ^ uVar4;
        *(uint *)(pFVar8 + -0x18) = *(uint *)(pFVar8 + -0x18) ^ uVar5;
        *(uint *)(pFVar8 + -0x14) = *(uint *)(pFVar8 + -0x14) ^ uVar6;
        *(uint *)(pFVar8 + -0x10) = uVar13 ^ *(uint *)(pFVar8 + -0x10);
        *(uint *)(pFVar8 + -0xc) = uVar4 ^ *(uint *)(pFVar8 + -0xc);
        *(uint *)(pFVar8 + -8) = uVar5 ^ *(uint *)(pFVar8 + -8);
        *(uint *)(pFVar8 + -4) = uVar6 ^ *(uint *)(pFVar8 + -4);
        *(uint *)pFVar8 = *(uint *)pFVar8 ^ uVar13;
        *(uint *)(pFVar8 + 4) = *(uint *)(pFVar8 + 4) ^ uVar4;
        *(uint *)(pFVar8 + 8) = *(uint *)(pFVar8 + 8) ^ uVar5;
        *(uint *)(pFVar8 + 0xc) = *(uint *)(pFVar8 + 0xc) ^ uVar6;
        *(uint *)(pFVar8 + 0x10) = *(uint *)(pFVar8 + 0x10) ^ uVar13;
        *(uint *)(pFVar8 + 0x14) = *(uint *)(pFVar8 + 0x14) ^ uVar4;
        *(uint *)(pFVar8 + 0x18) = *(uint *)(pFVar8 + 0x18) ^ uVar5;
        *(uint *)(pFVar8 + 0x1c) = *(uint *)(pFVar8 + 0x1c) ^ uVar6;
        pFVar8 = pFVar8 + 0x40;
      } while ((longlong)uVar12 < (longlong)(int)(uVar14 - uVar11));
    }
    for (lVar9 = (longlong)(int)uVar16; lVar9 < (int)uVar14; lVar9 = lVar9 + 1) {
      *(uint *)(local_28.Data + lVar9 * 4) = *(uint *)(local_28.Data + lVar9 * 4) ^ 0xdeadbeef;
    }
    if ((local_20[0] < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((int)(uint)(byte)*local_28.Data < local_20[0]) &&
       (*(short *)(local_28.Data + (((ulonglong)(byte)*local_28.Data & 0xfffffffffffffffe) - 1)) ==
        0)) {
      pFVar10 = ::FString::FString(&local_18,(wchar_t *)(local_28.Data + 1));
      ::FString::operator=(&this->Token,pFVar10);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else {
      ::FString::Empty(&this->Token);
      piVar1 = &(this->TokenBytes).ArrayMax;
      (this->TokenBytes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->TokenBytes).AllocatorInstance,0,piVar1);
      }
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

// Encrypt @ 14ec6d570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FOnlineAccountStoredCredentials::Encrypt(FOnlineAccountStoredCredentials *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  ulonglong uVar18;
  
  local_20 = (this->Token).Data.ArrayNum;
  lVar16 = (longlong)local_20;
  uVar14 = 0;
  iVar11 = local_20 + -1;
  if (local_20 == 0) {
    iVar11 = 0;
  }
  uVar17 = 0;
  if (iVar11 < 1) {
    piVar2 = &(this->TokenBytes).ArrayMax;
    (this->TokenBytes).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->TokenBytes).AllocatorInstance,0,piVar2);
      return;
    }
  }
  else {
    pFVar4 = (this->Token).Data.AllocatorInstance.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_20,0,&local_28,local_20,&local_1c);
      memcpy(local_28.Data,pFVar4,lVar16 * 2);
    }
    iVar11 = local_20 * 2;
    uVar15 = iVar11 + 0x10U & 0xfffffff0;
    pTVar1 = &this->TokenBytes;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar2 = &(this->TokenBytes).ArrayNum;
    piVar3 = &(this->TokenBytes).ArrayMax;
    *piVar2 = 0;
    if (*piVar3 != uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar15,&pTVar1->AllocatorInstance,0,piVar3);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar15,&pTVar1->AllocatorInstance,piVar2,piVar3);
    if ((0xfe < iVar11) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8796188688309551081>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlinePIESettings.cpp"
                            ,0x17,"SrcSize < ((uint8) 0xff)"), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*piVar2 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(pTVar1->AllocatorInstance).Data = SUB41(iVar11,0);
    memcpy((pTVar1->AllocatorInstance).Data + 1,local_28.Data,(longlong)iVar11);
    uVar9 = _UNK_15307380c;
    uVar8 = _UNK_153073808;
    uVar7 = _UNK_153073804;
    uVar6 = ___xmm_deadbeefdeadbeefdeadbeefdeadbeef;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    uVar15 = (uint)((ulonglong)(longlong)(int)uVar15 >> 2);
    if ((0 < (int)uVar15) && (0xf < uVar15)) {
      uVar13 = uVar15 & 0x8000000f;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
      }
      pFVar12 = pFVar4 + 0x20;
      uVar18 = uVar14;
      do {
        uVar17 = (int)uVar18 + 0x10;
        uVar18 = (ulonglong)uVar17;
        uVar14 = uVar14 + 0x10;
        *(uint *)(pFVar12 + -0x20) = uVar6 ^ *(uint *)(pFVar12 + -0x20);
        *(uint *)(pFVar12 + -0x1c) = uVar7 ^ *(uint *)(pFVar12 + -0x1c);
        *(uint *)(pFVar12 + -0x18) = uVar8 ^ *(uint *)(pFVar12 + -0x18);
        *(uint *)(pFVar12 + -0x14) = uVar9 ^ *(uint *)(pFVar12 + -0x14);
        *(uint *)(pFVar12 + -0x10) = uVar6 ^ *(uint *)(pFVar12 + -0x10);
        *(uint *)(pFVar12 + -0xc) = uVar7 ^ *(uint *)(pFVar12 + -0xc);
        *(uint *)(pFVar12 + -8) = uVar8 ^ *(uint *)(pFVar12 + -8);
        *(uint *)(pFVar12 + -4) = uVar9 ^ *(uint *)(pFVar12 + -4);
        *(uint *)pFVar12 = uVar6 ^ *(uint *)pFVar12;
        *(uint *)(pFVar12 + 4) = uVar7 ^ *(uint *)(pFVar12 + 4);
        *(uint *)(pFVar12 + 8) = uVar8 ^ *(uint *)(pFVar12 + 8);
        *(uint *)(pFVar12 + 0xc) = uVar9 ^ *(uint *)(pFVar12 + 0xc);
        *(uint *)(pFVar12 + 0x10) = uVar6 ^ *(uint *)(pFVar12 + 0x10);
        *(uint *)(pFVar12 + 0x14) = uVar7 ^ *(uint *)(pFVar12 + 0x14);
        *(uint *)(pFVar12 + 0x18) = uVar8 ^ *(uint *)(pFVar12 + 0x18);
        *(uint *)(pFVar12 + 0x1c) = uVar9 ^ *(uint *)(pFVar12 + 0x1c);
        pFVar12 = pFVar12 + 0x40;
      } while ((longlong)uVar14 < (longlong)(int)(uVar15 - uVar13));
    }
    for (lVar16 = (longlong)(int)uVar17; lVar16 < (int)uVar15; lVar16 = lVar16 + 1) {
      pFVar12 = pFVar4 + lVar16 * 4;
      *(uint *)pFVar12 = *(uint *)pFVar12 ^ 0xdeadbeef;
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

