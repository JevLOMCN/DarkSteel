// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// AcceptOverrideIfLastPass @ 14519ee90

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

bool __thiscall
TOverridePassSequence<enum_`AddDebugViewPostProcessingPasses'::__l2::EPass>::
AcceptOverrideIfLastPass
          (void *this,EPass param_1,FScreenPassRenderTarget *param_2,TOptional<int> *param_3)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar7 = (ulonglong)param_1;
  iVar8 = *(int *)((longlong)this + uVar7 * 0x10 + 0xa8);
  if (param_3->bIsSet == false) {
    bVar1 = 0 < iVar8;
    if ((*(char *)((longlong)this + 300) == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFinalized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                           ,0x62,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((*(EPass *)((longlong)this + 0x128) != param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextPass == Pass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                           ,99,L"Pass was accepted out of order: %s. Expected %s."), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((*(char *)((longlong)this + uVar7 * 0x10 + 0x2a) == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Passes[PassIndex].bEnabled",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                           ,100,L"Only accepted passes can be enabled: %s."), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    *(undefined1 *)((longlong)this + uVar7 * 0x10 + 0x29) = 1;
    iVar8 = *(int *)((longlong)this + 0x128) + 1;
    lVar5 = (longlong)iVar8;
    if (lVar5 < 8) {
      pcVar6 = (char *)(lVar5 * 0x10 + 0x2a + (longlong)this);
      do {
        if (*pcVar6 != '\0') {
          *(int *)((longlong)this + 0x128) = iVar8;
          break;
        }
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + 1;
        pcVar6 = pcVar6 + 0x10;
      } while (lVar5 < 8);
    }
  }
  else {
    bVar1 = param_3->TypedValue < iVar8 + -1;
  }
  if ((*(EPass *)((longlong)this + 0x124) == param_1) && (!bVar1)) {
    param_2->_padding_ = *(longlong *)this;
    param_2->_padding_ = *(longlong *)((longlong)this + 8);
    param_2->_padding_ = *(longlong *)((longlong)this + 0x10);
    param_2->LoadAction = *(ERenderTargetLoadAction *)((longlong)this + 0x18);
    return true;
  }
  return false;
}

// AcceptOverrideIfLastPass @ 14519f040

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

bool __thiscall
TOverridePassSequence<enum_`AddMobilePostProcessingPasses'::__l2::EPass>::AcceptOverrideIfLastPass
          (void *this,EPass param_1,FScreenPassRenderTarget *param_2,TOptional<int> *param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)((longlong)this + (ulonglong)param_1 * 0x10 + 0x198);
  if (param_3->bIsSet == false) {
    bVar2 = 0 < iVar1;
    AcceptPass(this,param_1);
  }
  else {
    bVar2 = param_3->TypedValue < iVar1 + -1;
  }
  if ((*(EPass *)((longlong)this + 0x304) == param_1) && (!bVar2)) {
    param_2->_padding_ = *(longlong *)this;
    param_2->_padding_ = *(longlong *)((longlong)this + 8);
    param_2->_padding_ = *(longlong *)((longlong)this + 0x10);
    param_2->LoadAction = *(ERenderTargetLoadAction *)((longlong)this + 0x18);
    return true;
  }
  return false;
}

// AcceptOverrideIfLastPass @ 14519f0f0

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

bool __thiscall
TOverridePassSequence<enum_`AddPostProcessingPasses'::__l2::EPass>::AcceptOverrideIfLastPass
          (void *this,EPass param_1,FScreenPassRenderTarget *param_2,TOptional<int> *param_3)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar7 = (ulonglong)param_1;
  iVar8 = *(int *)((longlong)this + uVar7 * 0x10 + 0x288);
  if (param_3->bIsSet == false) {
    bVar1 = 0 < iVar8;
    if ((*(char *)((longlong)this + 0x4ec) == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFinalized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                           ,0x62,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((*(EPass *)((longlong)this + 0x4e8) != param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextPass == Pass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                           ,99,L"Pass was accepted out of order: %s. Expected %s."), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((*(char *)((longlong)this + uVar7 * 0x10 + 0x2a) == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Passes[PassIndex].bEnabled",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                           ,100,L"Only accepted passes can be enabled: %s."), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    *(undefined1 *)((longlong)this + uVar7 * 0x10 + 0x29) = 1;
    iVar8 = *(int *)((longlong)this + 0x4e8) + 1;
    lVar5 = (longlong)iVar8;
    if (lVar5 < 0x26) {
      pcVar6 = (char *)(lVar5 * 0x10 + 0x2a + (longlong)this);
      do {
        if (*pcVar6 != '\0') {
          *(int *)((longlong)this + 0x4e8) = iVar8;
          break;
        }
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + 1;
        pcVar6 = pcVar6 + 0x10;
      } while (lVar5 < 0x26);
    }
  }
  else {
    bVar1 = param_3->TypedValue < iVar8 + -1;
  }
  if ((*(EPass *)((longlong)this + 0x4e4) == param_1) && (!bVar1)) {
    param_2->_padding_ = *(longlong *)this;
    param_2->_padding_ = *(longlong *)((longlong)this + 8);
    param_2->_padding_ = *(longlong *)((longlong)this + 0x10);
    param_2->LoadAction = *(ERenderTargetLoadAction *)((longlong)this + 0x18);
    return true;
  }
  return false;
}

// AcceptPass @ 14519f2a0

void __thiscall
TOverridePassSequence<enum_`AddMobilePostProcessingPasses'::__l2::EPass>::AcceptPass
          (void *this,EPass param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  
  if (*(char *)((longlong)this + 0x30c) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFinalized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                       ,0x62,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(EPass *)((longlong)this + 0x308) != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextPass == Pass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                       ,99,L"Pass was accepted out of order: %s. Expected %s.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)this + (ulonglong)param_1 * 0x10 + 0x2a) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Passes[PassIndex].bEnabled",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                       ,100,L"Only accepted passes can be enabled: %s.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined1 *)((longlong)this + (ulonglong)param_1 * 0x10 + 0x29) = 1;
  iVar5 = *(int *)((longlong)this + 0x308) + 1;
  lVar3 = (longlong)iVar5;
  if (lVar3 < 0x17) {
    pcVar4 = (char *)(lVar3 * 0x10 + 0x2a + (longlong)this);
    while (*pcVar4 == '\0') {
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 1;
      pcVar4 = pcVar4 + 0x10;
      if (0x16 < lVar3) {
        return;
      }
    }
    *(int *)((longlong)this + 0x308) = iVar5;
  }
  return;
}

// Finalize @ 1451cd7c0

void __thiscall
TOverridePassSequence<enum_`AddMobilePostProcessingPasses'::__l2::EPass>::Finalize(void *this)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)((longlong)this + 0x30c) != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFinalized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                       ,0x92,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined1 *)((longlong)this + 0x30c) = 1;
  lVar5 = (longlong)this + 0x20;
  lVar4 = 0x17;
  do {
    if (*(char *)(lVar5 + 8) == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Passes[PassIndex].bAssigned",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                         ,0x97,L"Pass was not assigned to enabled or disabled: %s.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar5 = lVar5 + 0x10;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar1 = (undefined4 *)((longlong)this + 0x304);
  bVar3 = *(char *)((longlong)this + 0x2a) == '\0';
  if (!bVar3) {
    *(undefined4 *)((longlong)this + 0x308) = 0;
    *(undefined4 *)((longlong)this + 0x300) = 0;
    *puVar1 = 0;
  }
  if (0 < *(int *)((longlong)this + 0x198)) {
    *puVar1 = 0;
  }
  if (*(char *)((longlong)this + 0x3a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 1;
    }
    bVar3 = false;
    *(undefined4 *)((longlong)this + 0x300) = 1;
    *puVar1 = 1;
  }
  if (0 < *(int *)((longlong)this + 0x1a8)) {
    *(undefined4 *)((longlong)this + 0x304) = 1;
  }
  if (*(char *)((longlong)this + 0x4a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 2;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 2;
    *(undefined4 *)((longlong)this + 0x304) = 2;
  }
  if (0 < *(int *)((longlong)this + 0x1b8)) {
    *(undefined4 *)((longlong)this + 0x304) = 2;
  }
  if (*(char *)((longlong)this + 0x5a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 3;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 3;
    *(undefined4 *)((longlong)this + 0x304) = 3;
  }
  if (0 < *(int *)((longlong)this + 0x1c8)) {
    *(undefined4 *)((longlong)this + 0x304) = 3;
  }
  if (*(char *)((longlong)this + 0x6a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 4;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 4;
    *(undefined4 *)((longlong)this + 0x304) = 4;
  }
  if (0 < *(int *)((longlong)this + 0x1d8)) {
    *(undefined4 *)((longlong)this + 0x304) = 4;
  }
  if (*(char *)((longlong)this + 0x7a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 5;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 5;
    *(undefined4 *)((longlong)this + 0x304) = 5;
  }
  if (0 < *(int *)((longlong)this + 0x1e8)) {
    *(undefined4 *)((longlong)this + 0x304) = 5;
  }
  if (*(char *)((longlong)this + 0x8a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 6;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 6;
    *(undefined4 *)((longlong)this + 0x304) = 6;
  }
  if (0 < *(int *)((longlong)this + 0x1f8)) {
    *(undefined4 *)((longlong)this + 0x304) = 6;
  }
  if (*(char *)((longlong)this + 0x9a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 7;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 7;
    *(undefined4 *)((longlong)this + 0x304) = 7;
  }
  if (0 < *(int *)((longlong)this + 0x208)) {
    *(undefined4 *)((longlong)this + 0x304) = 7;
  }
  if (*(char *)((longlong)this + 0xaa) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 8;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 8;
    *(undefined4 *)((longlong)this + 0x304) = 8;
  }
  if (0 < *(int *)((longlong)this + 0x218)) {
    *(undefined4 *)((longlong)this + 0x304) = 8;
  }
  if (*(char *)((longlong)this + 0xba) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 9;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 9;
    *(undefined4 *)((longlong)this + 0x304) = 9;
  }
  if (0 < *(int *)((longlong)this + 0x228)) {
    *(undefined4 *)((longlong)this + 0x304) = 9;
  }
  if (*(char *)((longlong)this + 0xca) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 10;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 10;
    *(undefined4 *)((longlong)this + 0x304) = 10;
  }
  if (0 < *(int *)((longlong)this + 0x238)) {
    *(undefined4 *)((longlong)this + 0x304) = 10;
  }
  if (*(char *)((longlong)this + 0xda) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0xb;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0xb;
    *(undefined4 *)((longlong)this + 0x304) = 0xb;
  }
  if (0 < *(int *)((longlong)this + 0x248)) {
    *(undefined4 *)((longlong)this + 0x304) = 0xb;
  }
  if (*(char *)((longlong)this + 0xea) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0xc;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0xc;
    *(undefined4 *)((longlong)this + 0x304) = 0xc;
  }
  if (0 < *(int *)((longlong)this + 600)) {
    *(undefined4 *)((longlong)this + 0x304) = 0xc;
  }
  if (*(char *)((longlong)this + 0xfa) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0xd;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0xd;
    *(undefined4 *)((longlong)this + 0x304) = 0xd;
  }
  if (0 < *(int *)((longlong)this + 0x268)) {
    *(undefined4 *)((longlong)this + 0x304) = 0xd;
  }
  if (*(char *)((longlong)this + 0x10a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0xe;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0xe;
    *(undefined4 *)((longlong)this + 0x304) = 0xe;
  }
  if (0 < *(int *)((longlong)this + 0x278)) {
    *(undefined4 *)((longlong)this + 0x304) = 0xe;
  }
  if (*(char *)((longlong)this + 0x11a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0xf;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0xf;
    *(undefined4 *)((longlong)this + 0x304) = 0xf;
  }
  if (0 < *(int *)((longlong)this + 0x288)) {
    *(undefined4 *)((longlong)this + 0x304) = 0xf;
  }
  if (*(char *)((longlong)this + 0x12a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0x10;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0x10;
    *(undefined4 *)((longlong)this + 0x304) = 0x10;
  }
  if (0 < *(int *)((longlong)this + 0x298)) {
    *(undefined4 *)((longlong)this + 0x304) = 0x10;
  }
  if (*(char *)((longlong)this + 0x13a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0x11;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0x11;
    *(undefined4 *)((longlong)this + 0x304) = 0x11;
  }
  if (0 < *(int *)((longlong)this + 0x2a8)) {
    *(undefined4 *)((longlong)this + 0x304) = 0x11;
  }
  if (*(char *)((longlong)this + 0x14a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0x12;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0x12;
    *(undefined4 *)((longlong)this + 0x304) = 0x12;
  }
  if (0 < *(int *)((longlong)this + 0x2b8)) {
    *(undefined4 *)((longlong)this + 0x304) = 0x12;
  }
  if (*(char *)((longlong)this + 0x15a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0x13;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0x13;
    *(undefined4 *)((longlong)this + 0x304) = 0x13;
  }
  if (0 < *(int *)((longlong)this + 0x2c8)) {
    *(undefined4 *)((longlong)this + 0x304) = 0x13;
  }
  if (*(char *)((longlong)this + 0x16a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0x14;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0x14;
    *(undefined4 *)((longlong)this + 0x304) = 0x14;
  }
  if (0 < *(int *)((longlong)this + 0x2d8)) {
    *(undefined4 *)((longlong)this + 0x304) = 0x14;
  }
  if (*(char *)((longlong)this + 0x17a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0x15;
      bVar3 = false;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0x15;
    *(undefined4 *)((longlong)this + 0x304) = 0x15;
  }
  if (0 < *(int *)((longlong)this + 0x2e8)) {
    *(undefined4 *)((longlong)this + 0x304) = 0x15;
  }
  if (*(char *)((longlong)this + 0x18a) != '\0') {
    if (bVar3) {
      *(undefined4 *)((longlong)this + 0x308) = 0x16;
    }
    *(undefined4 *)((longlong)this + 0x300) = 0x16;
    *(undefined4 *)((longlong)this + 0x304) = 0x16;
  }
  if (0 < *(int *)((longlong)this + 0x2f8)) {
    *(undefined4 *)((longlong)this + 0x304) = 0x16;
  }
  return;
}

// Finalize @ 1451cdec0

void __thiscall
TOverridePassSequence<enum_`AddPostProcessingPasses'::__l2::EPass>::Finalize(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((*(char *)((longlong)this + 0x4ec) != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bFinalized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                         ,0x92,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined1 *)((longlong)this + 0x4ec) = 1;
  lVar4 = (longlong)this + 0x20;
  lVar3 = 0x26;
  while ((*(char *)(lVar4 + 8) != '\0' ||
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Passes[PassIndex].bAssigned",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                             ,0x97,L"Pass was not assigned to enabled or disabled: %s."), !bVar2)))
  {
    lVar4 = lVar4 + 0x10;
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      bVar2 = true;
      uVar7 = 0;
      do {
        uVar6 = (uint)uVar7;
        if (*(char *)((longlong)this + uVar7 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar6;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar6;
          *(uint *)((longlong)this + 0x4e4) = uVar6;
        }
        if (0 < *(int *)((longlong)this + uVar7 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar6;
        }
        uVar5 = uVar6 + 1;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 2;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 3;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 4;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 5;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 6;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 7;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 8;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 9;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 10;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 0xb;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 0xc;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 0xd;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 0xe;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 0xf;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 0x10;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 0x11;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar5 = uVar6 + 0x12;
        if (*(char *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x2a) != '\0') {
          if (bVar2) {
            *(uint *)((longlong)this + 0x4e8) = uVar5;
            bVar2 = false;
          }
          *(uint *)((longlong)this + 0x4e0) = uVar5;
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        if (0 < *(int *)((longlong)this + (ulonglong)uVar5 * 0x10 + 0x288)) {
          *(uint *)((longlong)this + 0x4e4) = uVar5;
        }
        uVar7 = (ulonglong)(uVar6 + 0x13);
      } while ((int)(uVar6 + 0x13) < 0x26);
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// IsEnabled @ 1451e2570

bool __thiscall
TOverridePassSequence<enum_`AddPostProcessingPasses'::__l2::EPass>::IsEnabled
          (void *this,EPass param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (*(char *)((longlong)this + (ulonglong)param_1 * 0x10 + 0x28) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Passes[PassIndex].bAssigned",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                       ,0x50,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)((longlong)this + (ulonglong)param_1 * 0x10 + 0x2a);
}

// SetEnabled @ 1451e3570

void __thiscall
TOverridePassSequence<enum_`AddMobilePostProcessingPasses'::__l2::EPass>::SetEnabled
          (void *this,EPass param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(char *)((longlong)this + 0x30c) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFinalized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)this + (ulonglong)param_1 * 0x10 + 0x28) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Passes[PassIndex].bAssigned",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                       ,0x45,L"Pass cannot be assigned multiple times: %s.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined1 *)((longlong)this + (ulonglong)param_1 * 0x10 + 0x28) = 1;
  *(bool *)((longlong)this + (ulonglong)param_1 * 0x10 + 0x2a) = param_2;
  return;
}

// SetEnabled @ 1451e3620

void __thiscall
TOverridePassSequence<enum_`AddPostProcessingPasses'::__l2::EPass>::SetEnabled
          (void *this,EPass param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(char *)((longlong)this + 0x4ec) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFinalized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)this + (ulonglong)param_1 * 0x10 + 0x28) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Passes[PassIndex].bAssigned",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                       ,0x45,L"Pass cannot be assigned multiple times: %s.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined1 *)((longlong)this + (ulonglong)param_1 * 0x10 + 0x28) = 1;
  *(bool *)((longlong)this + (ulonglong)param_1 * 0x10 + 0x2a) = param_2;
  return;
}

// SetNames @ 1451e3710

void __thiscall
TOverridePassSequence<enum_`AddPostProcessingPasses'::__l2::EPass>::SetNames
          (void *this,wchar_t **param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 != 0x26) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NameCount == PassCountMax",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\OverridePassSequence.h"
                       ,0x37,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(wchar_t **)((longlong)this + 0x20) = *param_1;
  *(wchar_t **)((longlong)this + 0x30) = param_1[1];
  *(wchar_t **)((longlong)this + 0x40) = param_1[2];
  *(wchar_t **)((longlong)this + 0x50) = param_1[3];
  *(wchar_t **)((longlong)this + 0x60) = param_1[4];
  *(wchar_t **)((longlong)this + 0x70) = param_1[5];
  *(wchar_t **)((longlong)this + 0x80) = param_1[6];
  *(wchar_t **)((longlong)this + 0x90) = param_1[7];
  *(wchar_t **)((longlong)this + 0xa0) = param_1[8];
  *(wchar_t **)((longlong)this + 0xb0) = param_1[9];
  *(wchar_t **)((longlong)this + 0xc0) = param_1[10];
  *(wchar_t **)((longlong)this + 0xd0) = param_1[0xb];
  *(wchar_t **)((longlong)this + 0xe0) = param_1[0xc];
  *(wchar_t **)((longlong)this + 0xf0) = param_1[0xd];
  *(wchar_t **)((longlong)this + 0x100) = param_1[0xe];
  *(wchar_t **)((longlong)this + 0x110) = param_1[0xf];
  *(wchar_t **)((longlong)this + 0x120) = param_1[0x10];
  *(wchar_t **)((longlong)this + 0x130) = param_1[0x11];
  *(wchar_t **)((longlong)this + 0x140) = param_1[0x12];
  *(wchar_t **)((longlong)this + 0x150) = param_1[0x13];
  *(wchar_t **)((longlong)this + 0x160) = param_1[0x14];
  *(wchar_t **)((longlong)this + 0x170) = param_1[0x15];
  *(wchar_t **)((longlong)this + 0x180) = param_1[0x16];
  *(wchar_t **)((longlong)this + 400) = param_1[0x17];
  *(wchar_t **)((longlong)this + 0x1a0) = param_1[0x18];
  *(wchar_t **)((longlong)this + 0x1b0) = param_1[0x19];
  *(wchar_t **)((longlong)this + 0x1c0) = param_1[0x1a];
  *(wchar_t **)((longlong)this + 0x1d0) = param_1[0x1b];
  *(wchar_t **)((longlong)this + 0x1e0) = param_1[0x1c];
  *(wchar_t **)((longlong)this + 0x1f0) = param_1[0x1d];
  *(wchar_t **)((longlong)this + 0x200) = param_1[0x1e];
  *(wchar_t **)((longlong)this + 0x210) = param_1[0x1f];
  *(wchar_t **)((longlong)this + 0x220) = param_1[0x20];
  *(wchar_t **)((longlong)this + 0x230) = param_1[0x21];
  *(wchar_t **)((longlong)this + 0x240) = param_1[0x22];
  *(wchar_t **)((longlong)this + 0x250) = param_1[0x23];
  *(wchar_t **)((longlong)this + 0x260) = param_1[0x24];
  *(wchar_t **)((longlong)this + 0x270) = param_1[0x25];
  return;
}

