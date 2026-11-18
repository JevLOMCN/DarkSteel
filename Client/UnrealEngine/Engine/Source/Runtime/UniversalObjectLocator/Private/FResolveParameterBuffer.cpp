// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 3

// FResolveParameterBuffer @ 144345aa0

FResolveParameterBuffer * __thiscall
UE::UniversalObjectLocator::FResolveParameterBuffer::FResolveParameterBuffer
          (FResolveParameterBuffer *this)

{
  this->Memory = (uchar *)0x0;
  this->AllParameters = 0;
  this->Capacity = 0;
  this->Num = '\0';
  this->bCanFreeMemory = false;
  return this;
}

// ~FResolveParameterBuffer @ 144345f70

void __thiscall
UE::UniversalObjectLocator::FResolveParameterBuffer::~FResolveParameterBuffer
          (FResolveParameterBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  FRegistry *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  if (((this->Memory == (uchar *)0x0) != (this->Num == '\0')) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Memory == nullptr) == (Num == 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorResolveParams.cpp"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->Memory != (uchar *)0x0) {
    bVar9 = 0;
    for (uVar7 = this->AllParameters; uVar7 != 0; uVar7 = uVar7 & ~(1 << (uVar8 & 0x1f))) {
      uVar8 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      uVar5 = 0x20;
      if (uVar7 != 0) {
        uVar5 = uVar8;
      }
      if ((char)uVar5 == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InHandleOffset != 0xff",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorParameterTypeHandle.h"
                           ,0x1c,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        plVar6 = (longlong *)0x0;
        uVar8 = 0xff;
      }
      else {
        pFVar3 = FRegistry::Get();
        uVar8 = uVar5 & 0xff;
        if (((pFVar3->ParameterTypes).ArrayNum <= (int)uVar8) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        plVar6 = *(longlong **)
                  ((pFVar3->ParameterTypes).AllocatorInstance.Data + (ulonglong)(uVar5 & 0xff) * 8);
      }
      if ((this->Num <= bVar9) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < Num",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.h"
                             ,0xd9,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = (ulonglong)bVar9;
      bVar9 = bVar9 + 1;
      if (plVar6 == (longlong *)0x0) {
        bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8091385985260060630>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorResolveParams.cpp"
                           ,0x2a,"Type");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        (**(code **)(*plVar6 + 0x300))
                  (plVar6,this->Memory + *(ushort *)(this->Memory + uVar4 * 4),1);
      }
    }
    if (this->bCanFreeMemory != false) {
      FMemory::Free(this->Memory);
      return;
    }
  }
  return;
}

// Destroy @ 144347300

void __thiscall
UE::UniversalObjectLocator::FResolveParameterBuffer::Destroy(FResolveParameterBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  FRegistry *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  if (((this->Memory == (uchar *)0x0) != (this->Num == '\0')) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Memory == nullptr) == (Num == 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorResolveParams.cpp"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->Memory != (uchar *)0x0) {
    bVar9 = 0;
    for (uVar7 = this->AllParameters; uVar7 != 0; uVar7 = uVar7 & ~(1 << (uVar8 & 0x1f))) {
      uVar8 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      uVar5 = 0x20;
      if (uVar7 != 0) {
        uVar5 = uVar8;
      }
      if ((char)uVar5 == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InHandleOffset != 0xff",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorParameterTypeHandle.h"
                           ,0x1c,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        plVar6 = (longlong *)0x0;
        uVar8 = 0xff;
      }
      else {
        pFVar3 = FRegistry::Get();
        uVar8 = uVar5 & 0xff;
        if (((pFVar3->ParameterTypes).ArrayNum <= (int)uVar8) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        plVar6 = *(longlong **)
                  ((pFVar3->ParameterTypes).AllocatorInstance.Data + (ulonglong)(uVar5 & 0xff) * 8);
      }
      if ((this->Num <= bVar9) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < Num",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.h"
                             ,0xd9,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = (ulonglong)bVar9;
      bVar9 = bVar9 + 1;
      if (plVar6 == (longlong *)0x0) {
        bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8091385985260060630>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorResolveParams.cpp"
                           ,0x2a,"Type");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        (**(code **)(*plVar6 + 0x300))
                  (plVar6,this->Memory + *(ushort *)(this->Memory + uVar4 * 4),1);
      }
    }
    if (this->bCanFreeMemory != false) {
      FMemory::Free(this->Memory);
      return;
    }
  }
  return;
}

