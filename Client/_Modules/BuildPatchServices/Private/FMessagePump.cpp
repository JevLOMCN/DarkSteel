// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// PumpMessages @ 1432e22d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall BuildPatchServices::FMessagePump::PumpMessages(FMessagePump *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  code *pcVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  void *pvVar8;
  uchar uVar9;
  bool bVar10;
  char cVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6;
  undefined1 local_1c5 [13];
  longlong local_1b8 [2];
  undefined1 local_1a8 [24];
  undefined8 local_190;
  longlong local_188 [2];
  undefined1 local_178 [24];
  undefined8 local_160;
  undefined1 local_158 [16];
  void *local_148;
  undefined8 local_140;
  longlong local_138;
  longlong local_128 [3];
  longlong *local_110;
  TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
  local_108;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98 [3];
  longlong *local_80;
  TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
  local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_108.CurrentSubtypeIndex = 0xff;
  while (pTVar3 = ((this->MessageQueue).Tail)->NextNode, pTVar3 != (TNode *)0x0) {
    TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
    ::operator=(&local_108,&pTVar3->Item);
    pTVar4 = (this->MessageQueue).Tail;
    (this->MessageQueue).Tail = pTVar3;
    local_78.CurrentSubtypeIndex = 0xff;
    TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
    ::operator=(&pTVar3->Item,&local_78);
    switch(local_78.CurrentSubtypeIndex) {
    case '\0':
      uVar9 = local_78.CurrentSubtypeIndex;
      break;
    case '\x01':
      uVar9 = local_78.CurrentSubtypeIndex + 0xff;
      break;
    case '\x02':
      if (local_78.CurrentSubtypeIndex != '\x02') goto switchD_1432e2370_default;
      local_78.CurrentSubtypeIndex = 0xff;
      uVar12 = local_78.Values._24_8_;
      if ((void *)local_78.Values._40_8_ != (void *)0x0) {
        FMemory::Free((void *)local_78.Values._40_8_);
        uVar12 = local_78.Values._24_8_;
      }
      goto LAB_1432e2381;
    case '\x03':
    case '\x04':
      goto joined_r0x0001432e23c2;
    case '\x05':
joined_r0x0001432e23c2:
      if (local_78.CurrentSubtypeIndex == '\x03') {
        local_78.CurrentSubtypeIndex = 0xff;
      }
    default:
      goto switchD_1432e2370_default;
    }
    if (uVar9 == '\0') {
      local_78.CurrentSubtypeIndex = 0xff;
      uVar12 = local_78.Values._8_8_;
LAB_1432e2381:
      if ((void *)uVar12 != (void *)0x0) {
        FMemory::Free((void *)uVar12);
      }
    }
switchD_1432e2370_default:
    if (pTVar4 != (TNode *)0x0) {
      TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
      ::Reset(&pTVar4->Item);
      ::operator_delete(pTVar4,0x48);
    }
    if (local_108.CurrentSubtypeIndex == '\0') {
      pFVar15 = (this->Handlers).AllocatorInstance.Data;
      iVar2 = (this->Handlers).ArrayNum;
      pFVar1 = pFVar15 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Handlers).ArrayNum != iVar2) {
          local_1c8 = 0;
          `TCheckedPointerIterator<BuildPatchServices::FMessageHandler_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_1c8);
        }
        if (pFVar15 == pFVar1) break;
        plVar14 = *(longlong **)pFVar15;
        pcVar5 = *(code **)(*plVar14 + 0x10);
        if ((local_108.CurrentSubtypeIndex != '\0') &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentSubtypeIndex == SubtypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                                ,0xa1,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*pcVar5)(plVar14,&local_108);
        pFVar15 = pFVar15 + 8;
      }
    }
    else if (local_108.CurrentSubtypeIndex == '\x01') {
      pFVar15 = (this->Handlers).AllocatorInstance.Data;
      iVar2 = (this->Handlers).ArrayNum;
      pFVar1 = pFVar15 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Handlers).ArrayNum != iVar2) {
          local_1c7 = 0;
          `TCheckedPointerIterator<BuildPatchServices::FMessageHandler_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_1c7);
        }
        if (pFVar15 == pFVar1) break;
        plVar14 = *(longlong **)pFVar15;
        pcVar5 = *(code **)(*plVar14 + 8);
        if ((local_108.CurrentSubtypeIndex != '\x01') &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentSubtypeIndex == SubtypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                                ,0xa1,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*pcVar5)(plVar14,&local_108);
        pFVar15 = pFVar15 + 8;
      }
    }
    else if (local_108.CurrentSubtypeIndex == '\x02') {
      pFVar15 = (this->Handlers).AllocatorInstance.Data;
      iVar2 = (this->Handlers).ArrayNum;
      pFVar1 = pFVar15 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Handlers).ArrayNum != iVar2) {
          local_1c6 = 0;
          `TCheckedPointerIterator<BuildPatchServices::FMessageHandler_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_1c6);
        }
        if (pFVar15 == pFVar1) break;
        plVar14 = *(longlong **)pFVar15;
        pcVar5 = *(code **)(*plVar14 + 0x18);
        if ((local_108.CurrentSubtypeIndex != '\x02') &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentSubtypeIndex == SubtypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                                ,0xa1,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*pcVar5)(plVar14,&local_108);
        pFVar15 = pFVar15 + 8;
      }
    }
  }
  local_158._0_8_ = (void *)0x0;
  local_158._8_8_ = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_138 = 0;
  local_110 = (longlong *)0x0;
LAB_1432e2570:
  pTVar6 = ((this->ChunkUriRequestQueue).Tail)->NextNode;
  if (pTVar6 != (TNode *)0x0) {
    TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>
    ::operator=((TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>
                 *)local_158,&pTVar6->Item);
    pTVar7 = (this->ChunkUriRequestQueue).Tail;
    (this->ChunkUriRequestQueue).Tail = pTVar6;
    local_98[0] = 0;
    local_98[1] = 0;
    local_a0 = 0;
    local_98[2] = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = 0;
    local_80 = (longlong *)0x0;
    TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>
    ::operator=(&pTVar6->Item,
                (TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>
                 *)&local_c8);
    if (local_a8 != 0) {
      plVar14 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar14 = local_80;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if (pTVar7 != (TNode *)0x0) {
      if (*(longlong *)&(pTVar7->Item).field_0x20 != 0) {
        plVar14 = *(longlong **)&(pTVar7->Item).field_0x48;
        plVar13 = (longlong *)&(pTVar7->Item).field_0x30;
        if (plVar14 != (longlong *)0x0) {
          plVar13 = plVar14;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      pvVar8 = *(void **)&(pTVar7->Item).field_0x10;
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
      if (*(void **)&pTVar7->Item != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar7->Item);
      }
      ::operator_delete(pTVar7,0x60);
    }
    pFVar15 = (this->Handlers).AllocatorInstance.Data;
    iVar2 = (this->Handlers).ArrayNum;
    pFVar1 = pFVar15 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Handlers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<BuildPatchServices::FMessageHandler_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1c5);
      }
      if (pFVar15 == pFVar1) break;
      plVar14 = *(longlong **)pFVar15;
      local_190 = 0;
      pcVar5 = *(code **)(*plVar14 + 0x20);
      local_1b8[0] = local_138;
      if (local_138 != 0) {
        plVar13 = local_128;
        if (local_110 != (longlong *)0x0) {
          plVar13 = local_110;
        }
        (**(code **)*plVar13)(plVar13,local_1a8);
      }
      cVar11 = (*pcVar5)(plVar14,local_158,local_1b8);
      if (cVar11 != '\0') goto LAB_1432e2570;
      pFVar15 = pFVar15 + 8;
    }
    local_160 = 0;
    pcVar5 = *(code **)(*(longlong *)&this->DefaultMessageHandler + 0x20);
    local_188[0] = local_138;
    if (local_138 != 0) {
      plVar14 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar14 = local_110;
      }
      (**(code **)*plVar14)(plVar14,local_178);
    }
    (*pcVar5)(&this->DefaultMessageHandler,local_158,local_188);
    goto LAB_1432e2570;
  }
  if (local_138 != 0) {
    plVar14 = local_128;
    if (local_110 != (longlong *)0x0) {
      plVar14 = local_110;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  if ((void *)local_158._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  switch(local_108.CurrentSubtypeIndex) {
  case '\0':
    break;
  case '\x01':
    local_108.CurrentSubtypeIndex = local_108.CurrentSubtypeIndex + 0xff;
    break;
  case '\x02':
    if (local_108.CurrentSubtypeIndex != '\x02') {
      return;
    }
    local_108.CurrentSubtypeIndex = 0xff;
    local_108.Values._8_8_ = local_108.Values._24_8_;
    if ((void *)local_108.Values._40_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108.Values._40_8_);
      local_108.Values._8_8_ = local_108.Values._24_8_;
    }
    goto LAB_1432e2787;
  default:
    goto switchD_1432e2757_caseD_3;
  }
  if (local_108.CurrentSubtypeIndex == '\0') {
    local_108.CurrentSubtypeIndex = 0xff;
LAB_1432e2787:
    if ((void *)local_108.Values._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108.Values._8_8_);
    }
  }
switchD_1432e2757_caseD_3:
  return;
}

// RegisterMessageHandler @ 1432e6640

void __thiscall
BuildPatchServices::FMessagePump::RegisterMessageHandler
          (FMessagePump *this,FMessageHandler *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMessageHandler *local_res10 [3];
  
  LOCK();
  this->MessageRequests =
       (atomic<unsigned_int>)((uint)this->MessageRequests | param_1->MessageRequests);
  UNLOCK();
  pFVar2 = (this->Handlers).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->Handlers).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Handlers).ArrayNum;
  piVar1 = &(this->Handlers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Handlers).AllocatorInstance,piVar1);
  }
  (this->Handlers).ArrayNum = iVar5 + 1;
  *(FMessageHandler **)((this->Handlers).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res10[0];
  return;
}

// SendMessage @ 1432ec930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FMessagePump::SendMessage(FMessagePump *this,FChunkSourceEvent *param_1)

{
  TQueue<TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>,0>
  *pTVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  uchar uVar4;
  TNode *pTVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [56];
  uchar local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68._0_4_ = param_1->Event;
  pTVar1 = &this->MessageQueue;
  local_30 = 0xff;
  ::FString::FString((FString *)(local_68 + 8),&param_1->Location);
  local_30 = '\0';
  pTVar5 = ::operator_new(0x48);
  if (pTVar5 != (TNode *)0x0) {
    (pTVar5->Item).CurrentSubtypeIndex = 0xff;
    pTVar5->NextNode = (TNode *)0x0;
    TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
    ::operator=(&pTVar5->Item,
                (TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
                 *)local_68);
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar5;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar5;
    UNLOCK();
  }
  switch(local_30) {
  case '\0':
    uVar4 = local_30;
    break;
  case '\x01':
    uVar4 = local_30 + 0xff;
    break;
  case '\x02':
    if (local_30 != '\x02') goto switchD_1432eca13_caseD_3;
    local_30 = 0xff;
    local_68._8_8_ = local_68._24_8_;
    if ((void *)local_68._40_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._40_8_);
      local_68._8_8_ = local_68._24_8_;
    }
    goto LAB_1432eca48;
  default:
    goto switchD_1432eca13_caseD_3;
  }
  if (uVar4 == '\0') {
    local_30 = 0xff;
LAB_1432eca48:
    if ((void *)local_68._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._8_8_);
    }
  }
switchD_1432eca13_caseD_3:
  pFVar3 = (param_1->Location).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// SendMessage @ 1432ecaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FMessagePump::SendMessage(FMessagePump *this,FGenericMessage *param_1)

{
  TQueue<TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>,0>
  *pTVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  uchar uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  TNode *pTVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [40];
  FString local_40;
  uchar local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar5 = (param_1->ChunkId).A;
  uVar6 = (param_1->ChunkId).B;
  uVar7 = (param_1->ChunkId).C;
  uVar8 = (param_1->ChunkId).D;
  local_68._0_4_ = param_1->Type;
  local_30 = 0xff;
  pTVar1 = &this->MessageQueue;
  local_68._4_4_ = uVar5;
  local_68._8_4_ = uVar6;
  local_68._12_4_ = uVar7;
  local_68._16_4_ = uVar8;
  ::FString::FString((FString *)(local_68 + 0x18),&param_1->Payload1);
  ::FString::FString(&local_40,&param_1->Payload2);
  local_30 = '\x02';
  pTVar9 = ::operator_new(0x48);
  if (pTVar9 != (TNode *)0x0) {
    pTVar9->NextNode = (TNode *)0x0;
    (pTVar9->Item).CurrentSubtypeIndex = 0xff;
    TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
    ::operator=(&pTVar9->Item,
                (TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
                 *)local_68);
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar9;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar9;
    UNLOCK();
  }
  switch(local_30) {
  case '\0':
    uVar4 = local_30;
    break;
  case '\x01':
    uVar4 = local_30 + 0xff;
    break;
  case '\x02':
    if (local_30 != '\x02') goto switchD_1432ecb7e_caseD_3;
    local_30 = 0xff;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    goto LAB_1432ecbb3;
  default:
    goto switchD_1432ecb7e_caseD_3;
  }
  if (uVar4 == '\0') {
    local_68._24_8_ = CONCAT44(local_68._12_4_,local_68._8_4_);
    local_30 = 0xff;
LAB_1432ecbb3:
    if ((void *)local_68._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._24_8_);
    }
  }
switchD_1432ecb7e_caseD_3:
  pFVar3 = (param_1->Payload2).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->Payload1).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// SendMessage @ 1432ecc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FMessagePump::SendMessage(FMessagePump *this,FInstallationFileAction *param_1)

{
  TQueue<TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>,0>
  *pTVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  uchar uVar4;
  TNode *pTVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [56];
  uchar local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68._0_4_ = param_1->Action;
  pTVar1 = &this->MessageQueue;
  local_30 = 0xff;
  ::FString::FString((FString *)(local_68 + 8),&param_1->Filename);
  local_30 = '\x01';
  pTVar5 = ::operator_new(0x48);
  if (pTVar5 != (TNode *)0x0) {
    (pTVar5->Item).CurrentSubtypeIndex = 0xff;
    pTVar5->NextNode = (TNode *)0x0;
    TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
    ::operator=(&pTVar5->Item,
                (TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
                 *)local_68);
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar5;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar5;
    UNLOCK();
  }
  switch(local_30) {
  case '\0':
    uVar4 = local_30;
    break;
  case '\x01':
    uVar4 = local_30 + 0xff;
    break;
  case '\x02':
    if (local_30 != '\x02') goto switchD_1432ecd03_caseD_3;
    local_30 = 0xff;
    local_68._8_8_ = local_68._24_8_;
    if ((void *)local_68._40_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._40_8_);
      local_68._8_8_ = local_68._24_8_;
    }
    goto LAB_1432ecd38;
  default:
    goto switchD_1432ecd03_caseD_3;
  }
  if (uVar4 == '\0') {
    local_30 = 0xff;
LAB_1432ecd38:
    if ((void *)local_68._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._8_8_);
    }
  }
switchD_1432ecd03_caseD_3:
  pFVar3 = (param_1->Filename).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// SendRequest @ 1432ece10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
BuildPatchServices::FMessagePump::SendRequest
          (FMessagePump *this,FChunkUriRequest *param_1,
          TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)> *param_2)

{
  TQueue<TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>,0>
  *pTVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TNode *pTVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  FScriptContainerElement *local_88;
  int local_80;
  int iStack_7c;
  FScriptContainerElement *local_78;
  int local_70;
  int iStack_6c;
  longlong local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (((uint)this->MessageRequests & 1) == 0) {
    pFVar3 = (param_1->RelativePath).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (param_1->CloudDirectory).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    if (*(longlong *)param_2 != 0) {
      plVar6 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar6 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    bVar4 = false;
  }
  else {
    local_88 = (param_1->CloudDirectory).Data.AllocatorInstance.Data;
    (param_1->CloudDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80 = (param_1->CloudDirectory).Data.ArrayNum;
    iStack_7c = (param_1->CloudDirectory).Data.ArrayMax;
    (param_1->CloudDirectory).Data.ArrayNum = 0;
    (param_1->CloudDirectory).Data.ArrayMax = 0;
    local_78 = (param_1->RelativePath).Data.AllocatorInstance.Data;
    (param_1->RelativePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70 = (param_1->RelativePath).Data.ArrayNum;
    iStack_6c = (param_1->RelativePath).Data.ArrayMax;
    (param_1->RelativePath).Data.ArrayNum = 0;
    (param_1->RelativePath).Data.ArrayMax = 0;
    pTVar1 = &this->ChunkUriRequestQueue;
    local_68 = *(longlong *)param_2;
    local_40 = *(longlong **)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48 = *(undefined8 *)&param_2->field_0x20;
    local_58 = *(longlong *)&param_2->field_0x10;
    uStack_50 = *(undefined8 *)&param_2->field_0x18;
    if (local_68 != 0) {
      *(undefined8 *)param_2 = 0;
    }
    pTVar5 = ::operator_new(0x60);
    if (pTVar5 != (TNode *)0x0) {
      pTVar5->NextNode = (TNode *)0x0;
      *(FScriptContainerElement **)&pTVar5->Item = local_88;
      local_88 = (FScriptContainerElement *)0x0;
      *(int *)&(pTVar5->Item).field_0x8 = local_80;
      *(int *)&(pTVar5->Item).field_0xc = iStack_7c;
      local_80 = 0;
      iStack_7c = 0;
      *(FScriptContainerElement **)&(pTVar5->Item).field_0x10 = local_78;
      local_78 = (FScriptContainerElement *)0x0;
      *(int *)&(pTVar5->Item).field_0x18 = local_70;
      *(int *)&(pTVar5->Item).field_0x1c = iStack_6c;
      local_70 = 0;
      iStack_6c = 0;
      *(longlong *)&(pTVar5->Item).field_0x20 = local_68;
      *(longlong **)&(pTVar5->Item).field_0x48 = local_40;
      local_40 = (longlong *)0x0;
      *(longlong *)&(pTVar5->Item).field_0x30 = local_58;
      *(undefined8 *)&(pTVar5->Item).field_0x38 = uStack_50;
      *(undefined8 *)&(pTVar5->Item).field_0x40 = local_48;
      if (*(longlong *)&(pTVar5->Item).field_0x20 != 0) {
        local_68 = 0;
      }
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar5;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar5;
      UNLOCK();
    }
    if (local_68 != 0) {
      plVar6 = &local_58;
      if (local_40 != (longlong *)0x0) {
        plVar6 = local_40;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_78 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
    pFVar3 = (param_1->RelativePath).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (param_1->CloudDirectory).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    if (*(longlong *)param_2 != 0) {
      plVar6 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar6 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    bVar4 = true;
  }
  return bVar4;
}

// UnregisterMessageHandler @ 1432f6240

void __thiscall
BuildPatchServices::FMessagePump::UnregisterMessageHandler
          (FMessagePump *this,FMessageHandler *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMessageHandler *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_res8 [8];
  FMessageHandler *local_res10;
  
  LOCK();
  this->MessageRequests = (atomic<unsigned_int>)0x0;
  UNLOCK();
  pFVar2 = (this->Handlers).AllocatorInstance.Data;
  local_res10 = param_1;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->Handlers).ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Handlers).ArrayNum;
  iVar10 = 0;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar2 = (this->Handlers).AllocatorInstance.Data;
    bVar4 = *(FMessageHandler **)pFVar2 != local_res10;
    lVar6 = 0;
    pFVar5 = local_res10;
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(FMessageHandler **)(pFVar2 + lVar6 * 8) != pFVar5));
      if (bVar4 != false) {
        if (iVar10 != iVar8) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                  (longlong)(iVar9 - iVar8) << 3);
          pFVar5 = local_res10;
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar6 < iVar1);
    (this->Handlers).ArrayNum = iVar10;
  }
  pFVar7 = (this->Handlers).AllocatorInstance.Data;
  pFVar2 = pFVar7 + (longlong)iVar10 * 8;
  while( true ) {
    if ((this->Handlers).ArrayNum != iVar10) {
      `TCheckedPointerIterator<BuildPatchServices::FMessageHandler_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar2) break;
    LOCK();
    this->MessageRequests =
         (atomic<unsigned_int>)((uint)this->MessageRequests | *(uint *)(*(longlong *)pFVar7 + 8));
    UNLOCK();
    pFVar7 = pFVar7 + 8;
  }
  return;
}

