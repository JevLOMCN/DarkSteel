// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 4

// FInputDeviceScope @ 1423c1f90

FInputDeviceScope * __thiscall
FInputDeviceScope::FInputDeviceScope
          (FInputDeviceScope *this,IInputDevice *param_1,FName param_2,int param_3,FString *param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FInputDeviceScope *pFVar6;
  ForElementType<FInputDeviceScope_*> *pFVar7;
  ForElementType<FInputDeviceScope_*> *pFVar8;
  FInputDeviceScope *local_18;
  
  this->InputDevice = param_1;
  this->InputDeviceName = param_2;
  this->HardwareDeviceHandle = param_3;
  ::FString::FString(&this->HardwareDeviceIdentifier,param_4);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0xdf0) & 1) == 0) {
    *(uint *)(lVar1 + 0xdf0) = *(uint *)(lVar1 + 0xdf0) | 1;
    __tlregdtor(`UE::InputDeviceScope::Private::GetScopeStack'::__l2::
                _dynamic_atexit_destructor_for__ScopeStack__);
  }
  pFVar8 = (ForElementType<FInputDeviceScope_*> *)(lVar1 + 0xd60);
  pFVar7 = *(ForElementType<FInputDeviceScope_*> **)(lVar1 + 0xde0);
  if (*(ForElementType<FInputDeviceScope_*> **)(lVar1 + 0xde0) ==
      (ForElementType<FInputDeviceScope_*> *)0x0) {
    pFVar7 = pFVar8;
  }
  local_18 = this;
  if ((pFVar7 <= (ForElementType<FInputDeviceScope_*> *)&stack0xffffffffffffffe8) &&
     (&stack0xffffffffffffffe8 < pFVar7->InlineData + (longlong)*(int *)(lVar1 + 0xdec) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FInputDeviceScope *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = *(int *)(lVar1 + 0xde8);
  if (iVar5 == *(int *)(lVar1 + 0xdec)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FInputDeviceScope_*>_>
                      (0x808,pFVar8,(int *)(lVar1 + 0xdec));
  }
  *(int *)(lVar1 + 0xde8) = iVar5 + 1;
  pFVar7 = *(ForElementType<FInputDeviceScope_*> **)(lVar1 + 0xde0);
  if (*(ForElementType<FInputDeviceScope_*> **)(lVar1 + 0xde0) ==
      (ForElementType<FInputDeviceScope_*> *)0x0) {
    pFVar7 = pFVar8;
  }
  *(FInputDeviceScope **)(pFVar7->InlineData + (longlong)iVar5 * 8) = local_18;
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// ~FInputDeviceScope @ 1423c68c0

void __thiscall FInputDeviceScope::~FInputDeviceScope(FInputDeviceScope *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FInputDeviceScope **ppFVar7;
  FInputDeviceScope **ppFVar8;
  FInputDeviceScope *pFVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FInputDeviceScope **ppFVar14;
  undefined1 local_res10 [8];
  FInputDeviceScope *local_48 [2];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar2 + 0xdf0) & 1) == 0) {
    *(uint *)(lVar2 + 0xdf0) = *(uint *)(lVar2 + 0xdf0) | 1;
    __tlregdtor(`UE::InputDeviceScope::Private::GetScopeStack'::__l2::
                _dynamic_atexit_destructor_for__ScopeStack__);
  }
  ppFVar14 = (FInputDeviceScope **)(lVar2 + 0xd60);
  iVar1 = *(int *)(lVar2 + 0xde8);
  if (0 < iVar1) {
    uVar6 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar6 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ppFVar8 = ppFVar14;
    if (*(FInputDeviceScope ***)(lVar2 + 0xde0) != (FInputDeviceScope **)0x0) {
      ppFVar8 = *(FInputDeviceScope ***)(lVar2 + 0xde0);
    }
    if (ppFVar8[(longlong)*(int *)(lVar2 + 0xde8) + -1] == this) goto LAB_1423c69ad;
  }
  local_res10[0] = 0;
  `FInputDeviceScope::~FInputDeviceScope'::__l2::<lambda_1>::operator()(local_res10);
LAB_1423c69ad:
  ppFVar8 = *(FInputDeviceScope ***)(lVar2 + 0xde0);
  ppFVar7 = ppFVar14;
  if (ppFVar8 != (FInputDeviceScope **)0x0) {
    ppFVar7 = ppFVar8;
  }
  local_48[0] = this;
  if (ppFVar7 <= local_48) {
    ppFVar7 = ppFVar14;
    if (ppFVar8 != (FInputDeviceScope **)0x0) {
      ppFVar7 = ppFVar8;
    }
    if ((local_48 < ppFVar7 + *(int *)(lVar2 + 0xdec)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = *(int *)(lVar2 + 0xde8);
  if (iVar1 != 0) {
    if (*(FInputDeviceScope ***)(lVar2 + 0xde0) != (FInputDeviceScope **)0x0) {
      ppFVar14 = *(FInputDeviceScope ***)(lVar2 + 0xde0);
    }
    iVar13 = 0;
    bVar5 = *ppFVar14 != local_48[0];
    lVar10 = 0;
    pFVar9 = local_48[0];
    iVar11 = 0;
    do {
      iVar12 = iVar11;
      do {
        lVar10 = lVar10 + 1;
        iVar12 = iVar12 + 1;
        if (iVar1 <= lVar10) break;
      } while (bVar5 == (ppFVar14[lVar10] != pFVar9));
      if (bVar5 != false) {
        if (iVar13 != iVar11) {
          memmove(ppFVar14 + iVar13,ppFVar14 + iVar11,(longlong)(iVar12 - iVar11) << 3);
          pFVar9 = local_48[0];
        }
        iVar13 = iVar13 + (iVar12 - iVar11);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar11 = iVar12;
    } while (lVar10 < iVar1);
    *(int *)(lVar2 + 0xde8) = iVar13;
  }
  pFVar3 = (this->HardwareDeviceIdentifier).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetCurrent @ 1423ddfd0

FInputDeviceScope * __cdecl FInputDeviceScope::GetCurrent(void)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FInputDeviceScope *pFVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar2 + 0xdf0) & 1) == 0) {
    *(uint *)(lVar2 + 0xdf0) = *(uint *)(lVar2 + 0xdf0) | 1;
    __tlregdtor(`UE::InputDeviceScope::Private::GetScopeStack'::__l2::
                _dynamic_atexit_destructor_for__ScopeStack__);
  }
  iVar1 = *(int *)(lVar2 + 0xde8);
  if (0 < iVar1) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FInputDeviceScope *)(*pcVar3)();
        return pFVar6;
      }
    }
    lVar7 = *(longlong *)(lVar2 + 0xde0);
    if (*(longlong *)(lVar2 + 0xde0) == 0) {
      lVar7 = lVar2 + 0xd60;
    }
    return *(FInputDeviceScope **)(lVar7 + -8 + (longlong)*(int *)(lVar2 + 0xde8) * 8);
  }
  return (FInputDeviceScope *)0x0;
}

// operator() @ 15048b9f0

bool __thiscall `FInputDeviceScope::~FInputDeviceScope'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6412977912047206326>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6412977912047206326>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

