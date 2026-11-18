// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FBase64StringTest @ 141cf1650

void __thiscall FBase64StringTest::~FBase64StringTest(FBase64StringTest *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->EncodeOutput).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EncodeInput).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetInputArray @ 141d000c0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FBase64StringTest::GetInputArray
          (FBase64StringTest *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FAutomationTestBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  FAutomationTestFramework *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  FString local_38;
  
  uVar12 = 0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  *piVar1 = 0;
  iVar3 = (this->EncodeInput).Data.ArrayNum;
  uVar14 = (ulonglong)(iVar3 - 1);
  if (iVar3 == 0) {
    uVar14 = uVar12;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(int)uVar14,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  uVar14 = uVar12;
  do {
    iVar3 = (this->EncodeInput).Data.ArrayNum;
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    uVar11 = (uint)uVar12;
    if (iVar7 <= (int)uVar11) {
      return __return_storage_ptr__;
    }
    if ((((int)uVar11 < 0) || (iVar3 == 0)) || (iVar3 + -1 <= (int)uVar11)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      pFVar13 = (this->EncodeInput).Data.AllocatorInstance.Data + uVar14 * 2;
      if (-1 < (int)uVar11) goto LAB_141d001a3;
LAB_141d001b4:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    else {
      pFVar13 = (this->EncodeInput).Data.AllocatorInstance.Data + uVar14 * 2;
LAB_141d001a3:
      iVar3 = (this->EncodeInput).Data.ArrayNum;
      iVar7 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar7 = 0;
      }
      if (iVar7 <= (int)uVar11) goto LAB_141d001b4;
    }
    if ((*(ushort *)((this->EncodeInput).Data.AllocatorInstance.Data + uVar14 * 2) & 0xff) !=
        *(ushort *)pFVar13) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_38,L"Condition failed");
      (*pcVar5)(pFVar4,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((int)uVar11 < 0) {
code_r0x000141d00279:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    else {
      iVar3 = (this->EncodeInput).Data.ArrayNum;
      iVar7 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar7 = 0;
      }
      if (iVar7 <= (int)uVar11) goto code_r0x000141d00279;
    }
    FVar2 = (this->EncodeInput).Data.AllocatorInstance.Data[uVar14 * 2];
    uVar8 = 0;
    if ((int)uVar11 < *piVar1) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    uVar12 = (ulonglong)(uVar11 + 1);
    (__return_storage_ptr__->AllocatorInstance).Data[uVar14] = FVar2;
    uVar14 = uVar14 + 1;
  } while( true );
}

