// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 4

// FHostGroup @ 14456b1a0

FHostGroup * __thiscall UE::IoStore::HTTP::FHostGroup::FHostGroup(FHostGroup *this,FHost *param_1)

{
  int *piVar1;
  byte bVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  FScriptContainerElement FVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  (this->PeerGroups).ArrayNum = 0;
  piVar1 = &(this->PeerGroups).ArrayNum;
  (this->PeerGroups).ArrayMax = 0;
  (this->PeerGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Work).List.Head = (FActivityNode *)0x0;
  (this->Work).ActiveSlots = 0;
  this->Host = param_1;
  (this->Poller).Handle = 0;
  this->BusyCount = 0;
  this->WaitTimeAccum = 0;
  bVar2 = param_1->MaxConnections;
  if (bVar2 != 0) {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,(uint)bVar2,(ForAnyElementType *)this,piVar1,
                       &(this->PeerGroups).ArrayMax);
    DefaultConstructItems<UE::IoStore::HTTP::FPeerGroup,int>
              ((this->PeerGroups).AllocatorInstance.Data + (longlong)iVar4 * 0x40,(uint)bVar2);
  }
  iVar4 = *piVar1;
  pFVar6 = (this->PeerGroups).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar4 * 0x40;
  FVar3 = (FScriptContainerElement)this->Host->MaxInflight;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<UE::IoStore::HTTP::FPeerGroup,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    FVar5 = (FScriptContainerElement)0x7f;
    if ((byte)FVar3 < 0x7f) {
      FVar5 = FVar3;
    }
    pFVar6[0x36] = FVar5;
    pFVar6 = pFVar6 + 0x40;
  }
  return this;
}

// AddActivity @ 14456f040

void __thiscall UE::IoStore::HTTP::FHostGroup::AddActivity(FHostGroup *this,FActivityNode *param_1)

{
  FWorkQueue::AddActivity(&this->Work,param_1);
  return;
}

// Tick @ 1445821c0

void __thiscall UE::IoStore::HTTP::FHostGroup::Tick(FHostGroup *this,FTickState *param_1)

{
  FWorkQueue *this_00;
  int iVar1;
  FActivityNode *pFVar2;
  int iVar3;
  uint uVar4;
  FPeerGroup *pFVar5;
  FPeerGroup *pFVar6;
  FOutcome_u_0 FVar7;
  undefined1 local_res8 [8];
  
  this_00 = &this->Work;
  param_1->Work = this_00;
  pFVar2 = (this_00->List).Head;
  this->BusyCount = (uint)(pFVar2 != (FActivityNode *)0x0);
  if (pFVar2 != (FActivityNode *)0x0) {
    FWorkQueue::TickCancels(this_00,param_1);
    iVar3 = (this->PeerGroups).ArrayNum;
    pFVar5 = (FPeerGroup *)(this->PeerGroups).AllocatorInstance.Data;
    pFVar6 = pFVar5 + iVar3;
    while( true ) {
      if ((this->PeerGroups).ArrayNum != iVar3) {
        `TCheckedPointerIterator<UE::IoStore::HTTP::FPeerGroup,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if ((pFVar5 == pFVar6) || ((this_00->List).Head == (FActivityNode *)0x0)) break;
      FPeerGroup::TickSend(pFVar5,param_1,this->Host,&this->Poller);
      pFVar5 = pFVar5 + 1;
    }
  }
  iVar3 = Wait(this,param_1);
  pFVar5 = (FPeerGroup *)(this->PeerGroups).AllocatorInstance.Data;
  if (iVar3 < 0) {
    iVar1 = (this->PeerGroups).ArrayNum;
    FVar7 = (FOutcome_u_0)0xffff000150d73668;
    if (iVar3 == -0x80000000) {
      FVar7 = (FOutcome_u_0)0xffff000150d73658;
    }
    pFVar6 = pFVar5 + iVar1;
    while( true ) {
      if ((this->PeerGroups).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::IoStore::HTTP::FPeerGroup,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      FPeerGroup::Fail(pFVar5,param_1,(FOutcome)FVar7);
      pFVar5 = pFVar5 + 1;
    }
  }
  else {
    iVar3 = (this->PeerGroups).ArrayNum;
    pFVar6 = pFVar5 + iVar3;
    while( true ) {
      if ((this->PeerGroups).ArrayNum != iVar3) {
        `TCheckedPointerIterator<UE::IoStore::HTTP::FPeerGroup,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      if (pFVar5->bNegotiating == false) {
        if ((pFVar5->Send).Head != (FActivityNode *)0x0) {
          FPeerGroup::SendInternal(pFVar5,param_1);
        }
      }
      else {
        FPeerGroup::Negotiate(pFVar5,param_1);
      }
      if (((pFVar5->Recv).Head != (FActivityNode *)0x0) && (*param_1->RecvAllowance != 0)) {
        FPeerGroup::RecvInternal(pFVar5,param_1);
      }
      uVar4 = (uint)((pFVar5->Send).Head != (FActivityNode *)0x0 ||
                    (pFVar5->Recv).Head != (FActivityNode *)0x0);
      if (pFVar5->IsKeepAlive != '\0') {
        uVar4 = 1;
      }
      this->BusyCount = this->BusyCount + uVar4;
      pFVar5 = pFVar5 + 1;
    }
  }
  return;
}

// Wait @ 144584b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __thiscall UE::IoStore::HTTP::FHostGroup::Wait(FHostGroup *this,FTickState *param_1)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uchar *puVar11;
  int iVar12;
  uint uVar13;
  uchar *puVar14;
  undefined1 auStack_4e8 [32];
  undefined1 *local_4c8;
  ForElementType<UE::IoStore::HTTP::FWaiter> *local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  undefined8 local_4a8;
  undefined1 local_498 [56];
  int iStack_460;
  uchar auStack_45c [4];
  TArrayView<UE::IoStore::HTTP::FWaiter,int> local_458;
  ForElementType<UE::IoStore::HTTP::FWaiter> local_448;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  uVar13 = (this->PeerGroups).ArrayNum;
  uVar10 = 0;
  uVar7 = 0;
  local_48 = 0;
  local_44 = 0x40;
  uVar9 = uVar10;
  if (uVar13 != 0) {
    do {
      iVar6 = (this->PeerGroups).ArrayNum;
      uVar5 = uVar7;
      if ((int)uVar9 < iVar6) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_4c8 = (undefined1 *)(longlong)(int)uVar9;
        local_4c0 = (ForElementType<UE::IoStore::HTTP::FWaiter> *)(longlong)iVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      pFVar2 = (this->PeerGroups).AllocatorInstance.Data;
      lVar8 = (longlong)(int)uVar9 * 0x40;
      if (pFVar2[lVar8 + 0x38] == (FScriptContainerElement)0x0) {
        local_498[8] = '\0';
        local_498[9] = '\0';
        local_498[10] = '\0';
        local_498[0xb] = '\0';
        local_498[0xc] = '\0';
        local_498[0xd] = '\0';
        local_498[0xe] = '\0';
        local_498[0xf] = '\0';
        local_498._0_8_ = -1;
      }
      else {
        local_498._0_8_ = *(undefined8 *)(pFVar2 + lVar8 + 0x10);
        local_498[0x28] = '\0';
        local_498[0x29] = '\0';
        local_498[0x2a] = (*(longlong *)(pFVar2 + lVar8 + 8) != 0) + 1;
        local_498[0x2b] = '\0';
        iVar6 = (uint)local_498[0x2a] << 0x10;
        local_498[0xc] = local_498[0x2c];
        local_498[0xd] = local_498[0x2d];
        local_498[0xe] = local_498[0x2e];
        local_498[0xf] = local_498[0x2f];
        local_498[8] = (char)iVar6;
        local_498[9] = (char)((uint)iVar6 >> 8);
        local_498[10] = (char)((uint)iVar6 >> 0x10);
        local_498[0xb] = (char)((uint)iVar6 >> 0x18);
        local_498._32_8_ = local_498._0_8_;
        if (local_498._0_8_ != -1) {
          local_498._8_2_ = (short)uVar9;
          if ((&local_448 <= (ForElementType<UE::IoStore::HTTP::FWaiter> *)local_498) &&
             (local_498 < local_448.InlineData + local_44)) {
            local_4b0 = (longlong)local_48;
            local_4a8 = 0x10;
            local_4c0 = &local_448;
            local_4c8 = local_498;
            local_4b8 = (longlong)local_44;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              iVar6 = (*pcVar3)();
              return iVar6;
            }
          }
          if (local_48 == local_44) {
            local_48 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<UE::IoStore::HTTP::FWaiter>_>
                                 (0x810,&local_448,&local_44);
          }
          lVar8 = (longlong)local_48;
          local_48 = local_48 + 1;
          *(undefined8 *)local_448.InlineData[lVar8].Pad = local_498._0_8_;
          *(undefined8 *)(local_448.InlineData[lVar8].Pad + 8) = local_498._8_8_;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar13);
    if (local_48 != 0) {
      if ((param_1->FailTimeoutMs == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("State.FailTimeoutMs",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                             ,0x336,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar12 = local_48;
      iVar6 = param_1->PollTimeoutMs;
      if (iVar6 < 0) {
        iVar6 = param_1->FailTimeoutMs;
      }
      local_498._48_8_ = &local_448;
      if ((local_48 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iStack_460 = iVar12;
      local_458._12_1_ = auStack_45c[0];
      local_458._13_1_ = auStack_45c[1];
      local_458._14_1_ = auStack_45c[2];
      local_458._15_1_ = auStack_45c[3];
      local_458.ArrayNum = iVar12;
      local_458.DataPtr = (FWaiter *)local_498._48_8_;
      uVar7 = FWaiter::Wait(&local_458,&this->Poller,iVar6);
      if ((int)uVar7 < 1) {
        iVar6 = this->WaitTimeAccum + iVar6;
        this->WaitTimeAccum = iVar6;
        if ((param_1->PollTimeoutMs < 0) || (param_1->FailTimeoutMs <= iVar6)) {
          uVar7 = 0x80000000;
        }
      }
      else {
        this->WaitTimeAccum = 0;
        local_498._16_4_ = uVar7;
        if (0 < local_48) {
          puVar11 = local_448.InlineData[0].Pad + 8;
          puVar14 = local_448.InlineData[0].Pad + 0xb;
          iVar6 = local_48;
          iVar12 = local_48;
          uVar13 = uVar10;
          do {
            uVar7 = 0;
            if ((int)uVar10 < iVar6) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if (uVar7 == 0) {
              local_4c0 = (ForElementType<UE::IoStore::HTTP::FWaiter> *)(longlong)iVar6;
              local_4c8 = (undefined1 *)(longlong)(int)uVar10;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              iVar6 = local_48;
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                iVar6 = (*pcVar3)();
                return iVar6;
              }
            }
            if (*puVar14 != '\0') {
              uVar7 = 0;
              if ((int)uVar10 < iVar6) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                local_4c0 = (ForElementType<UE::IoStore::HTTP::FWaiter> *)(longlong)iVar6;
                local_4c8 = (undefined1 *)(longlong)(int)uVar10;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  iVar6 = (*pcVar3)();
                  return iVar6;
                }
              }
              uVar1 = *(ushort *)puVar11;
              if (((uint)(this->PeerGroups).ArrayNum <= (uint)uVar1) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < uint32(PeerGroups.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                                     ,0x359,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                iVar6 = (*pcVar3)();
                return iVar6;
              }
              iVar6 = (this->PeerGroups).ArrayNum;
              if (iVar6 <= (int)(uint)uVar1) {
                local_4c8 = (undefined1 *)(longlong)(int)(uint)uVar1;
                local_4c0 = (ForElementType<UE::IoStore::HTTP::FWaiter> *)(longlong)iVar6;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  iVar6 = (*pcVar3)();
                  return iVar6;
                }
              }
              pFVar2 = (this->PeerGroups).AllocatorInstance.Data;
              if ((pFVar2[(ulonglong)uVar1 * 0x40 + 0x38] == (FScriptContainerElement)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("bWaiting",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                                     ,0x1a2,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                iVar6 = (*pcVar3)();
                return iVar6;
              }
              pFVar2[(ulonglong)uVar1 * 0x40 + 0x38] = (FScriptContainerElement)0x0;
              uVar7 = 0;
              if ((int)uVar10 < local_48) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                local_4c8 = (undefined1 *)(longlong)(int)uVar10;
                local_4c0 = (ForElementType<UE::IoStore::HTTP::FWaiter> *)(longlong)local_48;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  iVar6 = (*pcVar3)();
                  return iVar6;
                }
              }
              iVar6 = (local_48 - uVar10) + -1;
              if (1 < iVar6) {
                iVar6 = 1;
              }
              if (iVar6 != 0) {
                memmove(local_448.InlineData + (int)uVar10,local_448.InlineData + (local_48 - iVar6)
                        ,(longlong)iVar6 << 4);
              }
              iVar6 = local_48 + -1;
              iVar12 = iVar12 + -1;
              uVar10 = uVar10 - 1;
              local_48 = iVar6;
              puVar14 = puVar14 + -0x10;
              puVar11 = puVar11 + -0x10;
              uVar13 = uVar13 + 1;
            }
            uVar10 = uVar10 + 1;
            puVar14 = puVar14 + 0x10;
            puVar11 = puVar11 + 0x10;
          } while ((int)uVar10 < iVar12);
          if (uVar13 == local_498._16_4_) {
            return local_498._16_4_;
          }
        }
        uVar7 = local_498._16_4_;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count == Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x35f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
    }
  }
  return uVar7;
}

