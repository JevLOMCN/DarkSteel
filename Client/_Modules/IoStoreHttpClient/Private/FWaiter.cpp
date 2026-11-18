// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 2

// FWaiter @ 14456b910

FWaiter * __thiscall UE::IoStore::HTTP::FWaiter::FWaiter(FWaiter *this,FWaitable *param_1)

{
  this->Socket = param_1->Socket;
  this->Index = 0;
  this->WaitOn = None;
  this->Ready = '\0';
  return this;
}

// Wait @ 1445850b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
UE::IoStore::HTTP::FWaiter::Wait
          (TArrayView<UE::IoStore::HTTP::FWaiter,int> *param_1,FPoller *param_2,int param_3)

{
  EWhat EVar1;
  short sVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FWaiter *pFVar11;
  FWaiter *pFVar12;
  longlong lVar13;
  undefined1 auStack_488 [32];
  longlong local_468;
  longlong local_460;
  undefined4 local_458;
  undefined4 local_454;
  ForElementType<UE::IoStore::HTTP::FPollFd> local_450;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_488;
  pFVar11 = param_1->DataPtr;
  uVar3 = param_1->ArrayNum;
  local_458 = 0x100001;
  pFVar12 = pFVar11 + (int)uVar3;
  local_454 = 0x3100300;
  local_50 = 0;
  local_4c = 0x40;
  iVar8 = local_50;
  for (; local_50 = iVar8, pFVar11 != pFVar12; pFVar11 = pFVar11 + 1) {
    EVar1 = pFVar11->WaitOn;
    if (iVar8 == local_4c) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<UE::IoStore::HTTP::FPollFd>_>
                        (0x810,&local_450,&local_4c);
    }
    local_50 = iVar8 + 1;
    *(ulong64 *)local_450.InlineData[iVar8].Pad = pFVar11->Socket;
    *(undefined2 *)(local_450.InlineData[iVar8].Pad + 8) =
         *(undefined2 *)((longlong)&local_458 + (ulonglong)EVar1 * 2);
    local_450.InlineData[iVar8].Pad[10] = '\0';
    local_450.InlineData[iVar8].Pad[0xb] = '\0';
    iVar8 = local_50;
  }
  iVar8 = WSAPoll(&local_450,iVar8,param_3);
  if ((0 < iVar8) && (uVar10 = 0, uVar3 != 0)) {
    do {
      local_460 = (longlong)local_50;
      uVar9 = 0;
      if ((int)uVar10 < local_50) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_468 = (longlong)(int)uVar10;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
      }
      lVar13 = (longlong)(int)uVar10;
      sVar2 = *(short *)(local_450.InlineData[lVar13].Pad + 10);
      if (sVar2 != 0) {
        bVar6 = (byte)((uint)(int)sVar2 >> 4) & 1;
        bVar7 = bVar6 | 2;
        if (((int)sVar2 & 0x300U) == 0) {
          bVar7 = bVar6;
        }
        local_460 = (longlong)param_1->ArrayNum;
        uVar9 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_468 = lVar13,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
        bVar6 = 3;
        if (bVar7 != 0) {
          bVar6 = bVar7;
        }
        param_1->DataPtr[lVar13].Ready = bVar6;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
  }
  return iVar8;
}

