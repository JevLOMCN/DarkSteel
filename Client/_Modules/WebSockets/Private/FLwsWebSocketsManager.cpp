// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebSockets
// Functions: 18

// FLwsWebSocketsManager @ 14b3f88b0

FLwsWebSocketsManager * __thiscall
FLwsWebSocketsManager::FLwsWebSocketsManager(FLwsWebSocketsManager *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar3 = (TNode *)0x0;
  *(undefined ***)this = &_vftable__for__IWebSocketsManager__;
  this->SslContext = (ssl_ctx_st *)0x0;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FRunnable__;
  *(undefined ***)&this->field_0x10 = &_vftable__for__FSingleThreadRunnable__;
  this->LwsContext = (lws_context *)0x0;
  (this->LwsProtocols).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LwsProtocols).ArrayNum = 0;
  (this->LwsProtocols).ArrayMax = 0;
  (this->Sockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sockets).ArrayNum = 0;
  (this->Sockets).ArrayMax = 0;
  (this->SocketsTickingOnThread).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketsTickingOnThread).ArrayNum = 0;
  (this->SocketsTickingOnThread).ArrayMax = 0;
  pTVar1 = ::operator_new(0x10);
  pTVar2 = pTVar3;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    pTVar1->Item = (FLwsWebSocket *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    pTVar2 = pTVar1;
  }
  (this->SocketsToStart).Tail = pTVar2;
  (this->SocketsToStart).Head = pTVar2;
  pTVar2 = ::operator_new(0x10);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    pTVar2->Item = (FLwsWebSocket *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    pTVar3 = pTVar2;
  }
  (this->SocketsToStop).Tail = pTVar3;
  (this->SocketsToStop).Head = pTVar3;
  this->ThreadTargetFrameTimeInSeconds = 0.03333333333333333;
  (this->SocketsDestroyedDuringService).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketsDestroyedDuringService).ArrayNum = 0;
  (this->SocketsDestroyedDuringService).ArrayMax = 0;
  (this->TickHandle).Object = (FElement *)0x0;
  (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OnChildEndFramePostForkHandle).ID = 0;
  this->Thread = (FRunnableThread *)0x0;
  (this->ExitRequest).Counter = 0;
  this->bPollService = false;
  this->ServiceTimeoutMs = 0x7fffffff;
  this->ThreadMinimumSleepTimeInSeconds = 0.0;
  this->bDisableDomainAllowlist = false;
  this->bDisableCertValidation = false;
  return this;
}

// operator() @ 14b3f8e30

void __thiscall `FLwsWebSocketsManager::InitWebSockets'::__l108::<lambda_1>::operator()(void *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  uVar1 = *(undefined8 *)(*(longlong *)this + 0xa0);
  *(undefined8 *)(*(longlong *)this + 0xa0) = 0;
  (**(code **)(**(longlong **)this + 8))();
  *(undefined8 *)(*(longlong *)this + 0xa0) = uVar1;
  puVar2 = *(undefined8 **)this;
  pcVar3 = *(code **)*puVar2;
  uVar1 = *(undefined8 *)((longlong)this + 8);
  iStack_10 = *(int *)((longlong)this + 0x10);
  if (iStack_10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28 = (undefined4)uVar1;
  uStack_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_18 = local_28;
  uStack_14 = uStack_24;
  (*pcVar3)(puVar2,&local_18);
  return;
}

// CallbackWrapper @ 14b3f9530

int __thiscall
FLwsWebSocketsManager::CallbackWrapper
          (FLwsWebSocketsManager *this,lws *param_1,lws_callback_reasons param_2,void *param_3,
          void *param_4,ulong64 param_5)

{
  int *piVar1;
  TArray<FLwsWebSocket_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSslModule *this_00;
  ISslCertificateManager *pIVar7;
  FLwsWebSocket *local_18 [2];
  
  local_18[0] = param_3;
  switch(param_2) {
  default:
    return 0;
  case LWS_CALLBACK_OPENSSL_LOAD_EXTRA_CLIENT_VERIFY_CERTS:
  case LWS_CALLBACK_OPENSSL_LOAD_EXTRA_SERVER_VERIFY_CERTS:
    this_00 = FSslModule::Get();
    pIVar7 = FSslModule::GetCertificateManager(this_00);
    (**(code **)((longlong)*pIVar7 + 8))(pIVar7,param_3);
    return 0;
  case LWS_CALLBACK_WSI_DESTROY:
    pTVar2 = &this->SocketsDestroyedDuringService;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         pFVar3 + (longlong)(this->SocketsDestroyedDuringService).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    iVar6 = (this->SocketsDestroyedDuringService).ArrayNum;
    piVar1 = &(this->SocketsDestroyedDuringService).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->SocketsDestroyedDuringService).ArrayNum = iVar6 + 1;
    *(FLwsWebSocket **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  case LWS_CALLBACK_CLIENT_CONNECTION_ERROR:
  case LWS_CALLBACK_CLIENT_ESTABLISHED:
  case LWS_CALLBACK_CLOSED:
  case LWS_CALLBACK_CLIENT_RECEIVE:
  case LWS_CALLBACK_CLIENT_WRITEABLE:
  case LWS_CALLBACK_SERVER_WRITEABLE:
  case LWS_CALLBACK_CLIENT_APPEND_HANDSHAKE_HEADER:
  case LWS_CALLBACK_WS_PEER_INITIATED_CLOSE:
    param_3 = param_4;
    break;
  case LWS_CALLBACK_OPENSSL_PERFORM_SERVER_CERT_VERIFICATION:
    local_18[0] = (FLwsWebSocket *)lws_wsi_user(param_1);
  }
  iVar6 = FLwsWebSocket::LwsCallback(local_18[0],param_1,param_2,param_3,param_5);
  return iVar6;
}

// CreateWebSocket @ 14b3fb1d0

TSharedRef<IWebSocket,1> * __thiscall
FLwsWebSocketsManager::CreateWebSocket
          (FLwsWebSocketsManager *this,TSharedRef<IWebSocket,1> *__return_storage_ptr__,
          FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  code *pcVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  bool bVar7;
  TSharedRef<IWebSocket,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar13;
  int iVar14;
  TReferenceControllerBase<1> *pTVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  FString *local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res20;
  int local_c8 [2];
  FString local_c0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  FString local_78;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  TReferenceControllerBase<1> *pTVar12;
  
  local_b0 = param_3;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  uVar11 = 0;
  puVar1 = &param_3->field_0x10;
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  uVar16 = *(uint *)&param_3->field_0x28;
  uStack_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = uStack_a8;
  local_90 = uStack_a8;
  if (uVar16 != 0) {
    puVar18 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar13 = *puVar18;
    pTVar9 = pTVar12;
    pTVar15 = pTVar12;
    local_90 = uVar11;
    uStack_a8 = uVar11;
    while (uVar13 == 0) {
      iVar14 = (int)pTVar15;
      local_90 = (int)pTVar9 + 0x20;
      pTVar9 = (TReferenceControllerBase<1> *)(ulonglong)local_90;
      uStack_a8 = iVar14 + 1;
      pTVar15 = (TReferenceControllerBase<1> *)(ulonglong)uStack_a8;
      uStack_94 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_a8)
      goto LAB_14b3fb28e;
      uVar13 = puVar18[(longlong)iVar14 + 1];
    }
    uStack_a4 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_80 = (int)lVar10;
    uStack_94 = (local_90 - 1) + local_80;
    if ((int)uVar16 < (int)uStack_94) {
      uStack_94 = uVar16;
    }
  }
LAB_14b3fb28e:
  uVar13 = *(uint *)&param_3->field_0x28;
  iStack_88 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  uVar19 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,uStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = uStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = uStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_res18 = param_1;
  local_res20 = param_2;
  local_a0 = puVar1;
  uStack_8c = uStack_94;
  local_68 = local_b0;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || ((int)uVar16 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedRef<IWebSocket,1> *)(*pcVar5)();
    return pTVar8;
  }
  uVar16 = *(uint *)&param_3->field_0x28;
  if (uVar13 != uVar16) {
    puVar17 = *(undefined1 **)&param_3->field_0x20;
    if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14b3fb3a0;
      uVar13 = *(uint *)(puVar17 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_7c = (int)lVar10;
    uVar13 = local_7c + -1 + uVar19;
    if ((int)uVar16 < (int)uVar13) {
      uVar13 = uVar16;
    }
  }
LAB_14b3fb3a0:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_3))
    break;
    ::FString::PrintfImpl(&local_78,L"%s: %s\r\n");
    uVar16 = local_78.Data.ArrayNum - 1;
    if (local_78.Data.ArrayNum == 0) {
      uVar16 = uVar11;
    }
    ::FString::AppendChars(&local_c0,(wchar_t *)local_78.Data.AllocatorInstance.Data,uVar16);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  local_c8[0] = 0x100000;
  FConfigCacheIni::GetInt(GConfig,L"WebSockets",L"TextMessageMemoryLimit",local_c8,&GEngineIni);
  pTVar9 = ::operator_new(0x210);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFLwsWebSocket___00_SharedPointerInternals__6B_;
    FLwsWebSocket::FLwsWebSocket
              ((FLwsWebSocket *)(pTVar9 + 1),param_3._0_1_,local_res18,local_res20,&local_c0,
               (longlong)local_c8[0]);
    pTVar15 = pTVar9 + 1;
    pTVar12 = pTVar9;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<IWebSocket,1> *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_14b3fb572;
    }
  }
  lVar10._0_4_ = pTVar15->SharedReferenceCount;
  lVar10._4_4_ = pTVar15->WeakReferenceCount;
  if (((lVar10 == 0) || (pTVar15[1]._padding_ == 0)) || (*(int *)(pTVar15[1]._padding_ + 8) < 1)) {
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar15->SharedReferenceCount = pTVar15;
    if (pTVar12 != (TReferenceControllerBase<1> *)pTVar15[1]._padding_) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar15[1]._padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pTVar15[1]._padding_ = (longlong)pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
LAB_14b3fb572:
  __return_storage_ptr__->Object = (IWebSocket *)pTVar15;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Exit @ 14b3fb790

void __thiscall FLwsWebSocketsManager::Exit(FLwsWebSocketsManager *this)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FLwsWebSocket *pFVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  
  piVar1 = &(this->Sockets).ArrayNum;
  puVar8 = *(undefined8 **)piVar1;
  iVar4 = *(int *)&(this->SocketsTickingOnThread).AllocatorInstance.Data;
  puVar3 = puVar8 + iVar4;
  while( true ) {
    if (*(int *)&(this->SocketsTickingOnThread).AllocatorInstance.Data != iVar4) {
      `TCheckedPointerIterator<FLwsWebSocket_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar8 == puVar3) break;
    pFVar5 = (FLwsWebSocket *)*puVar8;
    pTVar7 = ::operator_new(0x10);
    if (pTVar7 != (TNode *)0x0) {
      pTVar7->NextNode = (TNode *)0x0;
      pTVar7->Item = pFVar5;
      pTVar6 = (this->SocketsToStart).Tail;
      (this->SocketsToStart).Tail = pTVar7;
      pTVar6->NextNode = pTVar7;
    }
    puVar8 = puVar8 + 1;
  }
  piVar2 = (int *)((longlong)&(this->SocketsTickingOnThread).AllocatorInstance.Data + 4);
  *(undefined4 *)&(this->SocketsTickingOnThread).AllocatorInstance.Data = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)piVar1,0,piVar2);
  }
  return;
}

// GameThreadTick @ 14b3fc2e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLwsWebSocketsManager::GameThreadTick(FLwsWebSocketsManager *this,float param_1)

{
  TArray<TSharedRef<FLwsWebSocket,1>,TSizedDefaultAllocator<32>_> *this_00;
  FName FVar1;
  TNode *pTVar2;
  FLwsWebSocket *pFVar3;
  TNode *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  atomic<int> aVar9;
  undefined1 uVar10;
  bool bVar11;
  atomic<int> aVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_private:_bool___cdecl_FLwsWebSocketsManager::GameThreadTick(float)_::_2_::FStat_STAT_FLwsWebSocketsManager_GameThreadTick>
  FVar15;
  TReferenceControllerBase<1> *pTVar16;
  FNameEntryId FVar17;
  TReferenceControllerBase<1> *pTVar18;
  FScriptContainerElement *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  TReferenceControllerBase<1> *pTVar24;
  int iVar25;
  bool bVar26;
  uint local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20 [2];
  FName local_88;
  FName local_80;
  FLwsWebSocket *local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  TReferenceControllerBase<1> *local_50;
  TReferenceControllerBase<1> *local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FLwsWebSocketsManager_GameThreadTick ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_FLwsWebSocketsManager::GameThreadTick(float)_::_2_::FStat_STAT_FLwsWebSocketsManager_GameThreadTick>
         )0x0) {
      pFVar14 = ::FName::FName(&local_70,"STAT_FLwsWebSocketsManager_GameThreadTick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FLwsWebSocketsManager_GameThreadTick,
                 *pFVar14,L"STAT_FLwsWebSocketsManager_GameThreadTick","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_FLwsWebSocketsManager_GameThreadTick;
  if (StatPtr_STAT_FLwsWebSocketsManager_GameThreadTick ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FLwsWebSocketsManager::GameThreadTick(float)_::_2_::FStat_STAT_FLwsWebSocketsManager_GameThreadTick>
       )0x0) {
    pFVar14 = ::FName::FName(&local_68,"STAT_FLwsWebSocketsManager_GameThreadTick");
    FVar15 = (FThreadSafeStaticStat<_private:_bool___cdecl_FLwsWebSocketsManager::GameThreadTick(float)_::_2_::FStat_STAT_FLwsWebSocketsManager_GameThreadTick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FLwsWebSocketsManager_GameThreadTick,*pFVar14,
                          L"STAT_FLwsWebSocketsManager_GameThreadTick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar15;
  bVar6 = false;
  bVar8 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar17 = FVar1.ComparisonIndex.Value;
  uVar22 = FVar1.Number;
  if ((FVar17.Value != 0) || (uVar22 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar17.Value;
        local_88.Number = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocketsManager.cpp"
                   ,0x22b);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar17.Value;
      uStackX_1c = uVar22;
      local_80 = FVar1;
      FThreadStats::AddMessage(FVar1,CycleScopeStart);
      bVar7 = true;
      goto LAB_14b3fc46a;
    }
  }
  bVar7 = false;
  local_80 = local_60;
LAB_14b3fc46a:
  iVar25 = (this->Sockets).ArrayNum;
  this_00 = &this->Sockets;
  pFVar23 = (this_00->AllocatorInstance).Data;
  pFVar19 = pFVar23 + (longlong)iVar25 * 0x10;
  while( true ) {
    if ((this->Sockets).ArrayNum != iVar25) {
      local_res18 = local_res18 & 0xffffff00;
      `TCheckedPointerIterator<TSharedRef<FLwsWebSocket,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res18);
    }
    if (pFVar23 == pFVar19) break;
    FLwsWebSocket::GameThreadTick(*(FLwsWebSocket **)pFVar23);
    pFVar23 = pFVar23 + 0x10;
  }
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  do {
    FVar1 = local_80;
    pTVar2 = ((this->SocketsToStop).Tail)->NextNode;
    if (pTVar2 == (TNode *)0x0) {
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar7) {
        FThreadStats::AddMessage(FVar1,CycleScopeEnd);
      }
      return true;
    }
    pFVar3 = pTVar2->Item;
    pTVar4 = (this->SocketsToStop).Tail;
    (this->SocketsToStop).Tail = pTVar2;
    pTVar2->Item = (FLwsWebSocket *)0x0;
    local_78 = pFVar3;
    ::operator_delete(pTVar4,0x10);
    pTVar16 = (TReferenceControllerBase<1> *)pFVar3->_padding_;
    pTVar20 = pTVar18;
    pTVar24 = pTVar16;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      aVar9 = pTVar16->SharedReferenceCount;
      do {
        pTVar24 = pTVar18;
        if (aVar9 == (atomic<int>)0x0) goto LAB_14b3fc515;
        LOCK();
        aVar12 = pTVar16->SharedReferenceCount;
        bVar26 = aVar9 == aVar12;
        if (bVar26) {
          pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
          aVar12 = aVar9;
        }
        UNLOCK();
        aVar9 = aVar12;
      } while (!bVar26);
      pTVar20 = (TReferenceControllerBase<1> *)pFVar3->_padding_;
      pTVar24 = pTVar16;
    }
LAB_14b3fc515:
    pTVar16 = (TReferenceControllerBase<1> *)&pTVar20->SharedReferenceCount;
    if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
      pTVar16 = pTVar18;
    }
    if ((pTVar16 != (TReferenceControllerBase<1> *)&pFVar3->_padding_) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar26)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar26)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    local_50 = pTVar20;
    local_48 = pTVar24;
    if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar26)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar23 = (this_00->AllocatorInstance).Data;
    if (((pFVar23 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < pFVar23 + (longlong)(this->Sockets).ArrayMax * 0x10)
        ) && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar26)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    iVar25 = (this->Sockets).ArrayNum;
    bVar26 = false;
    pTVar16 = pTVar18;
    pTVar20 = pTVar18;
    if (0 < iVar25) {
      do {
        uVar21 = (uint)pTVar20;
        uVar22 = 0;
        if ((int)uVar21 < iVar25) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        uVar22 = uVar21;
        if (*(TReferenceControllerBase<1> **)
             ((longlong)&pTVar16->_padding_ + (longlong)(this_00->AllocatorInstance).Data) ==
            local_50) {
          pTVar16 = pTVar16 + -1;
          uVar22 = uVar21 - 1;
          bVar26 = true;
          uVar13 = 0;
          if ((int)uVar21 < (this->Sockets).ArrayNum) {
            uVar13 = ~uVar21 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          TArray<TSharedRef<FLwsWebSocket,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (this_00,uVar21);
        }
        iVar25 = (this->Sockets).ArrayNum;
        pTVar16 = pTVar16 + 1;
        pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)(uVar22 + 1);
      } while ((int)(uVar22 + 1) < iVar25);
      if (bVar26) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,iVar25,&(this->Sockets).ArrayMax);
      }
    }
    FLwsWebSocket::GameThreadFinalize(local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  } while( true );
}

// Get @ 14b3fc850

FLwsWebSocketsManager * __cdecl FLwsWebSocketsManager::Get(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FLwsWebSocketsManager *pFVar4;
  FName *pFVar5;
  FModuleManager *this;
  FName local_res8 [4];
  
  if (FWebSocketsModule::Singleton == (FWebSocketsModule *)0x0) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\WebSocketsModule.cpp"
                         ,0x51,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLwsWebSocketsManager *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar5 = ::FName::FName(local_res8,"WebSockets");
    FVar1 = *pFVar5;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar1);
    if (FWebSocketsModule::Singleton == (FWebSocketsModule *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\WebSocketsModule.cpp"
                         ,0x54,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLwsWebSocketsManager *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  pFVar4 = (FLwsWebSocketsManager *)FWebSocketsModule::Singleton->WebSocketsManager;
  if (pFVar4 == (FLwsWebSocketsManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Manager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocketsManager.cpp"
                       ,0x48,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FLwsWebSocketsManager *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// GetSingleThreadInterface @ 14b3fcab0

FSingleThreadRunnable * __thiscall
FLwsWebSocketsManager::GetSingleThreadInterface(FLwsWebSocketsManager *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->field_0x8;
  if (this == (FLwsWebSocketsManager *)&DAT_00000008) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// Init @ 14b3fcb30

bool __thiscall FLwsWebSocketsManager::Init(FLwsWebSocketsManager *this)

{
  return true;
}

// InitWebSockets @ 14b3fcb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLwsWebSocketsManager::InitWebSockets
          (FLwsWebSocketsManager *this,TArrayView<FString_const_,int> *param_1)

{
  TArray<lws_protocols,TSizedDefaultAllocator<32>_> *pTVar1;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FName FVar7;
  IModuleInterface IVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  TArrayView<FString_const_,int> *pTVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLwsWebSocketsManager::InitWebSockets(TArrayView<FString_const_,int>)_::_2_::FStat_STAT_FLwsWebSocketsManager_InitWebSockets>
  FVar20;
  size_t sVar21;
  char *_Dest;
  FHttpModule *pFVar22;
  FModuleManager *this_00;
  IModuleInterface *pIVar23;
  lws_context *plVar24;
  FRunnableThread *pFVar25;
  undefined8 *puVar26;
  ulong64 uVar27;
  FTSBackgroundableTicker *this_01;
  TWeakPtr<FTSTicker::FElement,1> *pTVar28;
  ForAnyElementType FVar29;
  FDelegateHandle FVar30;
  FRunnable *pFVar31;
  FNameEntryId FVar32;
  wchar_t *_Str;
  longlong lVar33;
  FName FVar34;
  uint uVar35;
  uint uVar36;
  FRunnable *pFVar37;
  FString *pFVar38;
  undefined4 uVar39;
  FString *pFVar40;
  FLwsWebSocketsManager *pFVar41;
  undefined1 auStackY_538 [32];
  uint local_4d0;
  uint uStack_4cc;
  ForAnyElementType local_4c8;
  undefined8 local_4c0;
  int local_4b8;
  int local_4b4;
  int local_4b0 [2];
  undefined1 local_4a8 [8];
  FDelegateAllocation local_4a0;
  FColor_u_0 local_490;
  int local_48c;
  FName local_488 [2];
  FLwsWebSocketsManager *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  FName local_468;
  FLwsWebSocketsManager *local_458;
  FRunnable *local_450;
  int local_448;
  undefined4 local_444;
  FString *local_440;
  TArrayView<FString_const_,int> *local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  TWeakPtr<FTSTicker::FElement,1> local_3f8;
  FDestructionSentinel local_3e8;
  char *local_3d0;
  code *pcStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  FDestructionSentinel local_398;
  FDelegateAllocation *local_380;
  FName local_378;
  FName local_370;
  FName local_368;
  undefined1 local_360 [136];
  void *local_2d8;
  undefined8 local_2d0;
  char local_2c0;
  undefined4 local_2b8 [4];
  FScriptContainerElement *local_2a8;
  undefined8 local_2a0;
  undefined8 local_268;
  undefined8 local_25c;
  uint local_254;
  ssl_ctx_st *local_238;
  undefined2 local_230;
  int local_1e0;
  int local_1dc;
  undefined2 local_1d0;
  FScriptContainerElement local_f8 [128];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_478 = this;
  local_438 = param_1;
  if (4 < (byte)LogWebSockets._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
  }
  (**(code **)(*(longlong *)this + 0x20))(this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FLwsWebSocketsManager_InitWebSockets ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLwsWebSocketsManager::InitWebSockets(TArrayView<FString_const_,int>)_::_2_::FStat_STAT_FLwsWebSocketsManager_InitWebSockets>
         )0x0) {
      pFVar19 = ::FName::FName(&local_378,"STAT_FLwsWebSocketsManager_InitWebSockets");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FLwsWebSocketsManager_InitWebSockets,
                 *pFVar19,L"STAT_FLwsWebSocketsManager_InitWebSockets","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_FLwsWebSocketsManager_InitWebSockets;
  if (StatPtr_STAT_FLwsWebSocketsManager_InitWebSockets ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLwsWebSocketsManager::InitWebSockets(TArrayView<FString_const_,int>)_::_2_::FStat_STAT_FLwsWebSocketsManager_InitWebSockets>
       )0x0) {
    pFVar19 = ::FName::FName(&local_370,"STAT_FLwsWebSocketsManager_InitWebSockets");
    FVar20 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLwsWebSocketsManager::InitWebSockets(TArrayView<FString_const_,int>)_::_2_::FStat_STAT_FLwsWebSocketsManager_InitWebSockets>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FLwsWebSocketsManager_InitWebSockets,*pFVar19,
                          L"STAT_FLwsWebSocketsManager_InitWebSockets","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar20;
  bVar12 = false;
  bVar13 = false;
  local_468.ComparisonIndex.Value = 0;
  local_468.Number = 0;
  bVar15 = false;
  bVar16 = false;
  FVar32 = FVar34.ComparisonIndex.Value;
  uVar35 = FVar34.Number;
  if ((FVar32.Value != 0) || (uVar35 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_490.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_490._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar12 = false;
      bVar13 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_488[0].ComparisonIndex.Value = FVar32.Value;
        local_488[0].Number = uVar35;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_488,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocketsManager.cpp"
                   ,0x94);
        bVar12 = true;
        bVar13 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_4d0 = FVar32.Value;
      uStack_4cc = uVar35;
      FThreadStats::AddMessage(FVar34,CycleScopeStart);
      bVar15 = true;
      goto LAB_14b3fccfa;
    }
  }
  bVar13 = bVar16;
  bVar12 = bVar15;
  bVar15 = false;
  FVar34 = local_468;
LAB_14b3fccfa:
  if (((this->Thread != (FRunnableThread *)0x0) || ((this->LwsProtocols).ArrayNum != 0)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Thread && LwsProtocols.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocketsManager.cpp"
                          ,0x95,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar18 = param_1->ArrayNum;
  pTVar1 = &this->LwsProtocols;
  uVar35 = iVar18 + 1;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  piVar3 = &(this->LwsProtocols).ArrayMax;
  if (*piVar3 < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar35,&pTVar1->AllocatorInstance,(this->LwsProtocols).ArrayNum,piVar3);
  }
  pFVar40 = param_1->DataPtr;
  pFVar38 = pFVar40 + iVar18;
  pFVar41 = this;
  local_440 = pFVar38;
  if (pFVar40 != pFVar38) {
    do {
      if ((pFVar40->Data).ArrayNum == 0) {
        _Str = L"";
LAB_14b3fcddc:
        local_78.Data = (FScriptContainerElement *)0x0;
        sVar21 = wcslen(_Str);
        local_68 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar21);
        uVar35 = local_68 + 1;
        uVar36 = uVar35;
        if (uVar35 < 0x81) {
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            uVar36 = 0;
            goto LAB_14b3fce19;
          }
        }
        else {
LAB_14b3fce19:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar36,1)
          ;
        }
        local_70 = local_f8;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          local_70 = local_78.Data;
        }
        UE::Core::Private::Convert((uchar *)local_70,uVar35,_Str,(int)sVar21 + 1);
        pFVar38 = local_440;
      }
      else {
        _Str = (wchar_t *)(pFVar40->Data).AllocatorInstance.Data;
        local_78.Data = (FScriptContainerElement *)0x0;
        if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_14b3fcddc;
        local_70 = (FScriptContainerElement *)0x0;
        local_68 = 0;
      }
      _Dest = FMemory::Malloc((longlong)local_68 + 1,0);
      lVar33 = (longlong)local_68;
      strncpy(_Dest,(char *)local_70,lVar33 + 1);
      _Dest[lVar33] = '\0';
      local_3a0 = 0;
      piVar3 = &(this->LwsProtocols).ArrayMax;
      local_3c0 = 0;
      iVar18 = (this->LwsProtocols).ArrayNum;
      local_3b0 = 0;
      uStack_3a8 = 0;
      pcStack_3c8 = StaticCallbackWrapper;
      uStack_3b8 = 0x10000;
      local_3d0 = _Dest;
      if (iVar18 == *piVar3) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar1->AllocatorInstance,piVar3);
      }
      (this->LwsProtocols).ArrayNum = iVar18 + 1;
      lVar33 = (longlong)iVar18 * 0x38;
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      *(char **)(pFVar5 + lVar33) = local_3d0;
      *(code **)(pFVar5 + lVar33 + 8) = pcStack_3c8;
      *(undefined8 *)(pFVar5 + lVar33 + 0x10) = local_3c0;
      *(undefined8 *)(pFVar5 + lVar33 + 0x10 + 8) = uStack_3b8;
      *(undefined8 *)(pFVar5 + lVar33 + 0x20) = 0;
      *(undefined8 *)(pFVar5 + lVar33 + 0x20 + 8) = 0;
      *(undefined8 *)(pFVar5 + lVar33 + 0x30) = local_3a0;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      pFVar40 = pFVar40 + 1;
      pFVar41 = local_478;
    } while (pFVar40 != pFVar38);
  }
  pFVar5 = (pFVar41->LwsProtocols).AllocatorInstance.Data;
  FVar29.Data = (FScriptContainerElement *)0x0;
  local_400 = 0;
  local_430 = 0;
  uStack_428 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_410 = 0;
  uStack_408 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_430) &&
      ((FScriptContainerElement *)&local_430 <
       pFVar5 + (longlong)(pFVar41->LwsProtocols).ArrayMax * 0x38)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar18 = (pFVar41->LwsProtocols).ArrayNum;
  if (iVar18 == (pFVar41->LwsProtocols).ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,&(pFVar41->LwsProtocols).AllocatorInstance,
                        &(this->LwsProtocols).ArrayMax);
  }
  (pFVar41->LwsProtocols).ArrayNum = iVar18 + 1;
  lVar33 = (longlong)iVar18 * 0x38;
  pFVar6 = (pFVar41->LwsProtocols).AllocatorInstance.Data;
  *(undefined8 *)(pFVar6 + lVar33) = local_430;
  *(undefined8 *)(pFVar6 + lVar33 + 8) = uStack_428;
  *(undefined8 *)(pFVar6 + lVar33 + 0x10) = local_420;
  *(undefined8 *)(pFVar6 + lVar33 + 0x10 + 8) = uStack_418;
  pFVar5 = pFVar6 + lVar33 + 0x20;
  *(undefined4 *)pFVar5 = (undefined4)local_410;
  *(undefined4 *)(pFVar5 + 4) = local_410._4_4_;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)uStack_408;
  *(undefined4 *)(pFVar5 + 0xc) = uStack_408._4_4_;
  *(undefined8 *)(pFVar6 + lVar33 + 0x30) = local_400;
  lws_set_log_level(0x7df);
  memset(local_2b8,0,0x1c0);
  local_2a8 = (pFVar41->LwsProtocols).AllocatorInstance.Data;
  local_254 = local_254 | 0x10c0;
  local_2b8[0] = 0xffffffff;
  local_25c = 0xffffffffffffffff;
  local_230 = 0;
  local_4b8 = 0x8000;
  FConfigCacheIni::GetInt
            (GConfig,L"WebSockets.LibWebSockets",L"MaxHttpHeaderData",&local_4b8,&GEngineIni);
  local_1dc = local_4b8;
  local_1e0 = local_4b8;
  uVar39 = 0;
  local_4b4 = 0;
  FConfigCacheIni::GetInt
            (GConfig,L"WebSockets.LibWebSockets",L"PingPongInterval",&local_4b4,&GEngineIni);
  local_1d0 = (undefined2)local_4b4;
  pFVar22 = FHttpModule::Get();
  local_2c0 = 0;
  bVar16 = 1 < (pFVar22->ProxyAddress).Data.ArrayNum;
  if (bVar16) {
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
              ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)(local_360 + 8),
               (wchar_t *)(pFVar22->ProxyAddress).Data.AllocatorInstance.Data);
    local_268 = local_2d0;
  }
  local_2c0 = bVar16;
  pFVar19 = ::FName::FName(&local_368,"SSL");
  FVar7 = *pFVar19;
  this_00 = FModuleManager::Get();
  pIVar23 = FModuleManager::LoadModuleChecked(this_00,FVar7);
  if ((pIVar23[2] == (IModuleInterface)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("SslManagerPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Public\\SslModule.h"
                          ,0x32,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  IVar8 = pIVar23[2];
  cVar17 = (**(code **)(*(longlong *)IVar8 + 8))(IVar8);
  if (cVar17 == '\0') {
    local_254 = local_254 | 0x1000;
  }
  else {
    local_4d0 = 0x1010400;
    local_238 = (ssl_ctx_st *)(**(code **)(*(longlong *)IVar8 + 0x18))(IVar8,&local_4d0);
    local_254 = local_254 & 0xffffefff;
    pFVar41->SslContext = local_238;
  }
  if ((local_238 == (ssl_ctx_st *)0x0) && (5 < (byte)LogWebSockets._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
  }
  local_2a0 = 0;
  plVar24 = (lws_context *)lws_create_context(local_2b8);
  pFVar41->LwsContext = plVar24;
  if (plVar24 == (lws_context *)0x0) {
    if (1 < (byte)LogWebSockets._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
  }
  else {
    LOCK();
    (pFVar41->ExitRequest).Counter = 0;
    UNLOCK();
    local_48c = 0x20000;
    FConfigCacheIni::GetInt
              (GConfig,L"WebSockets.LibWebSockets",L"ThreadStackSize",&local_48c,&GEngineIni);
    local_4b0[0] = 1;
    FConfigCacheIni::GetInt
              (GConfig,L"WebSockets.LibWebSockets",L"ThreadPriority",local_4b0,&GEngineIni);
    pFVar31 = (FRunnable *)&DAT_00000004;
    if ((longlong)local_4b0[0] < 4) {
      pFVar31 = (FRunnable *)(longlong)local_4b0[0];
    }
    pFVar37 = (FRunnable *)FVar29.Data;
    if (0 < (longlong)pFVar31) {
      pFVar37 = pFVar31;
    }
    pFVar31 = (FRunnable *)&pFVar41->field_0x8;
    if (pFVar41 == (FLwsWebSocketsManager *)0x0) {
      pFVar31 = (FRunnable *)FVar29.Data;
    }
    pFVar25 = FForkProcessHelper::CreateForkableThread
                        (pFVar31,L"LibwebsocketsThread",0x20000,
                         UE::LwsWebSocketsManager::ThreadPriorities[(longlong)pFVar37],
                         0xffffffffffffffff,None,false);
    pFVar41->Thread = pFVar25;
    if (pFVar25 == (FRunnableThread *)0x0) {
      if (1 < (byte)LogWebSockets._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
      }
      lws_context_destroy(pFVar41->LwsContext);
      pFVar41->LwsContext = (lws_context *)0x0;
    }
    else {
      uStack_470 = 0;
      local_478 = (FLwsWebSocketsManager *)GameThreadTick;
      uStack_46c = local_3f8.WeakReferenceCount.ReferenceController._4_4_;
      local_4a8 = (undefined1  [8])0x0;
      local_4a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_4a0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a8,
                 (FWriteAccessScope *)&local_398);
      local_380 = &local_4a0;
      puVar26 = UE::Core::Private::DelegateAllocate(0x30,&local_4a0);
      if (puVar26 != (undefined8 *)0x0) {
        *puVar26 = &
                   ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar27 = FDelegateHandle::GenerateNewID();
        puVar26[2] = uVar27;
        puVar26[4] = local_478;
        puVar26[5] = CONCAT44(uStack_46c,uStack_470);
        *puVar26 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_VFLwsWebSocketsManager____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar26[3] = pFVar41;
        if ((puVar26[4] == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("InUserObject != nullptr && MethodPtr != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x1d8,L""), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (local_398.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
      }
      this_01 = FTSBackgroundableTicker::GetCoreTicker();
      pTVar28 = FTSTicker::AddTicker
                          ((FTSTicker *)this_01,&local_3f8,
                           (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_4a8,
                           0.0);
      if (&pFVar41->TickHandle != pTVar28) {
        (pFVar41->TickHandle).Object = pTVar28->Object;
        pTVar28->Object = (FElement *)0x0;
        pTVar9 = (pFVar41->TickHandle).WeakReferenceCount.ReferenceController;
        (pFVar41->TickHandle).WeakReferenceCount.ReferenceController =
             (pTVar28->WeakReferenceCount).ReferenceController;
        (pTVar28->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar9->WeakReferenceCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
          }
        }
      }
      plVar11 = (longlong *)
                CONCAT44(local_3f8.WeakReferenceCount.ReferenceController._4_4_,
                         local_3f8.WeakReferenceCount.ReferenceController._0_4_);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        iVar18 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      bVar16 = FForkProcessHelper::IsForkRequested();
      pTVar14 = local_438;
      if ((bVar16) && ((pFVar41->OnChildEndFramePostForkHandle).ID == 0)) {
        local_4c8.Data = (FScriptContainerElement *)0x0;
        iVar18 = local_438->ArrayNum;
        if (iVar18 != 0) {
          local_4c0._0_4_ = iVar18;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar18,0,&local_4c8,iVar18,(int *)((longlong)&local_4c0 + 4));
          ConstructItems<FString,FString,int>(local_4c8.Data,pTVar14->DataPtr,iVar18);
          FVar29.Data = local_4c8.Data;
          iVar18 = (int)local_4c0;
          uVar39 = local_4c0._4_4_;
        }
        local_4c8.Data = (FScriptContainerElement *)0x0;
        local_4c0 = 0;
        local_458 = pFVar41;
        local_450 = (FRunnable *)FVar29.Data;
        local_448 = iVar18;
        local_444 = uVar39;
        FVar30 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
                 AddLambda<_FLwsWebSocketsManager::InitWebSockets_::__l108::<lambda_1>_>
                           ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                             *)&FCoreDelegates::OnChildEndFramePostFork,(<lambda_1> *)local_360);
        pFVar31 = local_450;
                    /* WARNING: Load size is inaccurate */
        (pFVar41->OnChildEndFramePostForkHandle).ID = *FVar30.ID;
        DestructItems<FString,int>((FString *)local_450,local_448);
        if (pFVar31 != (FRunnable *)0x0) {
          FMemory::Free(pFVar31);
        }
        DestructItems<FString,int>((FString *)local_4c8.Data,(int)local_4c0);
        if (local_4c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c8.Data);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a8,
                 (FWriteAccessScope *)&local_3e8);
      if ((local_4a0.DelegateSize != 0) &&
         (local_4a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_4a0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_4a0,0,0,0x10);
        local_4a0.DelegateSize = 0;
      }
      if (local_3e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
      }
      if (local_4a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_4a0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4a8);
    }
  }
  if ((local_2c0 != '\0') && (local_2d8 != (void *)0x0)) {
    FMemory::Free(local_2d8);
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return;
}

// Run @ 14b3fee20

uint __thiscall FLwsWebSocketsManager::Run(FLwsWebSocketsManager *this)

{
  int iVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  iVar1 = *(int *)&this->Thread;
  while (iVar1 == 0) {
    QueryPerformanceCounter(&local_res8);
    dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    (**(code **)(*(longlong *)&this->field_0x8 + 8))(&this->field_0x8);
    QueryPerformanceCounter(&local_res10);
    if (*(char *)((longlong)&this->Thread + 4) != '\0') {
      dVar2 = *(double *)&this->ServiceTimeoutMs -
              ((double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2);
      if (dVar2 <= this->ThreadTargetFrameTimeInSeconds) {
        dVar2 = this->ThreadTargetFrameTimeInSeconds;
      }
      FWindowsPlatformProcess::SleepNoStats((float)dVar2);
    }
    iVar1 = *(int *)&this->Thread;
  }
  return 0;
}

// ShutdownWebSockets @ 14b3ff310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLwsWebSocketsManager::ShutdownWebSockets(FLwsWebSocketsManager *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  TWeakPtr<FTSTicker::FElement,1> *pTVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  ulong64 uVar7;
  FRunnableThread *pFVar8;
  TNode *pTVar9;
  TNode *pTVar10;
  FName FVar11;
  IModuleInterface IVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLwsWebSocketsManager::ShutdownWebSockets(void)_::_2_::FStat_STAT_FLwsWebSocketsManager_ShutdownWebSockets>
  FVar20;
  ulong64 *puVar21;
  FModuleManager *this_00;
  IModuleInterface *pIVar22;
  FNameEntryId FVar23;
  uint uVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  FName FVar28;
  ForAnyElementType *this_01;
  ulonglong uVar29;
  uint local_res8;
  uint uStackX_c;
  undefined1 local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FDestructionSentinel local_a8;
  TWeakPtr<FTSTicker::FElement,1> local_90;
  FName local_80;
  FName local_78 [2];
  FName local_68;
  longlong local_60 [4];
  
  uVar25 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FLwsWebSocketsManager_ShutdownWebSockets ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLwsWebSocketsManager::ShutdownWebSockets(void)_::_2_::FStat_STAT_FLwsWebSocketsManager_ShutdownWebSockets>
         )0x0) {
      pFVar19 = ::FName::FName(&local_80,"STAT_FLwsWebSocketsManager_ShutdownWebSockets");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FLwsWebSocketsManager_ShutdownWebSockets
                 ,*pFVar19,L"STAT_FLwsWebSocketsManager_ShutdownWebSockets","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_FLwsWebSocketsManager_ShutdownWebSockets;
  if (StatPtr_STAT_FLwsWebSocketsManager_ShutdownWebSockets ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLwsWebSocketsManager::ShutdownWebSockets(void)_::_2_::FStat_STAT_FLwsWebSocketsManager_ShutdownWebSockets>
       )0x0) {
    pFVar19 = ::FName::FName(local_78,"STAT_FLwsWebSocketsManager_ShutdownWebSockets");
    FVar20 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLwsWebSocketsManager::ShutdownWebSockets(void)_::_2_::FStat_STAT_FLwsWebSocketsManager_ShutdownWebSockets>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FLwsWebSocketsManager_ShutdownWebSockets,*pFVar19,
                          L"STAT_FLwsWebSocketsManager_ShutdownWebSockets","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar20;
  bVar14 = false;
  bVar16 = false;
  FVar23 = FVar28.ComparisonIndex.Value;
  uVar18 = FVar28.Number;
  if ((FVar23.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar14 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar23.Value;
        local_res20.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocketsManager.cpp"
                   ,0x11c);
        bVar14 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar23.Value;
      uStackX_c = uVar18;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar15 = true;
      goto LAB_14b3ff48f;
    }
  }
  bVar15 = false;
  FVar28.ComparisonIndex.Value = 0;
  FVar28.Number = 0;
LAB_14b3ff48f:
  pTVar3 = &this->TickHandle;
  if (((pTVar3->Object != (FElement *)0x0) &&
      (pTVar6 = (this->TickHandle).WeakReferenceCount.ReferenceController,
      pTVar6 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar6->SharedReferenceCount)) {
    FTSBackgroundableTicker::GetCoreTicker();
    local_90.Object = pTVar3->Object;
    local_90.WeakReferenceCount.ReferenceController =
         (this->TickHandle).WeakReferenceCount.ReferenceController;
    if (local_90.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_90.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_90);
    if (pTVar3 != (TWeakPtr<FTSTicker::FElement,1> *)local_60) {
      pTVar6 = (this->TickHandle).WeakReferenceCount.ReferenceController;
      pTVar3->Object = (FElement *)0x0;
      (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
    }
  }
  uVar7 = (this->OnChildEndFramePostForkHandle).ID;
  if (uVar7 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnChildEndFramePostFork,(FWriteAccessScope *)&local_a8);
    uVar29 = uVar25;
    if (0 < (int)FCoreDelegates::OnChildEndFramePostFork._16_4_) {
      do {
        uVar24 = (uint)uVar25;
        uVar18 = 0;
        if ((int)uVar24 < (int)FCoreDelegates::OnChildEndFramePostFork._16_4_) {
          uVar18 = ~uVar24 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        this_01 = (ForAnyElementType *)(FCoreDelegates::OnChildEndFramePostFork._8_8_ + uVar29);
        if (((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0))
           && (puVar21 = (ulong64 *)(**(code **)(*(longlong *)this_01->Data + 0x40))(),
              *puVar21 == uVar7)) {
          local_res10 = 0;
          if ((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_01->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10);
            *(undefined4 *)&this_01[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FCoreDelegates::OnChildEndFramePostFork,false);
          break;
        }
        uVar25 = (ulonglong)(uVar24 + 1);
        uVar29 = uVar29 + 0x10;
      } while ((int)(uVar24 + 1) < (int)FCoreDelegates::OnChildEndFramePostFork._16_4_);
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    (this->OnChildEndFramePostForkHandle).ID = 0;
  }
  pFVar8 = this->Thread;
  if (pFVar8 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar8->_padding_ + 0x18))(pFVar8,1);
    pFVar8 = this->Thread;
    if (pFVar8 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar8->_padding_ + 0x30))(pFVar8,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  if (this->LwsContext != (lws_context *)0x0) {
    lws_context_destroy();
    this->LwsContext = (lws_context *)0x0;
  }
  iVar5 = (this->LwsProtocols).ArrayNum;
  pFVar26 = (this->LwsProtocols).AllocatorInstance.Data;
  pFVar27 = pFVar26 + (longlong)iVar5 * 0x38;
  while( true ) {
    if ((this->LwsProtocols).ArrayNum != iVar5) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<lws_protocols,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar26 == pFVar27) break;
    FMemory::Free(*(void **)pFVar26);
    pFVar26 = pFVar26 + 0x38;
  }
  (this->LwsProtocols).ArrayNum = 0;
  if ((this->LwsProtocols).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->LwsProtocols).AllocatorInstance,0,&(this->LwsProtocols).ArrayMax);
  }
  while (pTVar9 = ((this->SocketsToStart).Tail)->NextNode, pTVar9 != (TNode *)0x0) {
    pTVar10 = (this->SocketsToStart).Tail;
    (this->SocketsToStart).Tail = pTVar9;
    pTVar9->Item = (FLwsWebSocket *)0x0;
    ::operator_delete(pTVar10,0x10);
  }
  while (pTVar9 = ((this->SocketsToStop).Tail)->NextNode, pTVar9 != (TNode *)0x0) {
    pTVar10 = (this->SocketsToStop).Tail;
    (this->SocketsToStop).Tail = pTVar9;
    pTVar9->Item = (FLwsWebSocket *)0x0;
    ::operator_delete(pTVar10,0x10);
  }
  DestructItems<TSharedRef<FLwsWebSocket,1>,int>
            ((TSharedRef<FLwsWebSocket,1> *)(this->Sockets).AllocatorInstance.Data,
             (this->Sockets).ArrayNum);
  piVar2 = &(this->Sockets).ArrayMax;
  (this->Sockets).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Sockets).AllocatorInstance,0,piVar2);
  }
  pFVar19 = ::FName::FName(&local_68,"SSL");
  FVar11 = *pFVar19;
  this_00 = FModuleManager::Get();
  pIVar22 = FModuleManager::LoadModuleChecked(this_00,FVar11);
  if ((pIVar22[2] == (IModuleInterface)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("SslManagerPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Public\\SslModule.h"
                          ,0x32,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  IVar12 = pIVar22[2];
  if (this->SslContext != (ssl_ctx_st *)0x0) {
    (**(code **)(*(longlong *)IVar12 + 0x20))(IVar12);
    this->SslContext = (ssl_ctx_st *)0x0;
  }
  (**(code **)(*(longlong *)IVar12 + 0x10))(IVar12);
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return;
}

// StartProcessingWebSocket @ 14b3ff8d0

void __thiscall
FLwsWebSocketsManager::StartProcessingWebSocket(FLwsWebSocketsManager *this,FLwsWebSocket *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  TNode *pTVar3;
  int iVar4;
  TSharedRef<FLwsWebSocket,1> *pTVar5;
  TNode *pTVar6;
  FScriptContainerElement *pFVar7;
  TSharedRef<FLwsWebSocket,1> local_18;
  
  pTVar5 = TSharedFromThis<FLwsWebSocket,1>::AsShared
                     ((TSharedFromThis<FLwsWebSocket,1> *)&param_1->_padding_,&local_18);
  piVar1 = &(this->Sockets).ArrayMax;
  iVar4 = (this->Sockets).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Sockets).AllocatorInstance,piVar1);
  }
  (this->Sockets).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Sockets).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(FLwsWebSocket **)pFVar7 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pTVar6 = ::operator_new(0x10);
  if (pTVar6 != (TNode *)0x0) {
    pTVar6->NextNode = (TNode *)0x0;
    pTVar6->Item = param_1;
    pTVar3 = (this->SocketsToStart).Head;
    (this->SocketsToStart).Head = pTVar6;
    pTVar3->NextNode = pTVar6;
  }
  if (this->bPollService == false) {
    lws_cancel_service(this->LwsContext);
  }
  return;
}

// StaticCallbackWrapper @ 14b3ff9a0

int __cdecl
FLwsWebSocketsManager::StaticCallbackWrapper
          (lws *param_1,lws_callback_reasons param_2,void *param_3,void *param_4,ulong64 param_5)

{
  int *piVar1;
  TArray<FLwsWebSocket_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FLwsWebSocketsManager *pFVar7;
  FSslModule *this;
  ISslCertificateManager *pIVar8;
  FLwsWebSocket *local_18 [2];
  
  pFVar7 = Get();
  local_18[0] = param_3;
  switch(param_2) {
  case LWS_CALLBACK_CLIENT_CONNECTION_ERROR:
  case LWS_CALLBACK_CLIENT_ESTABLISHED:
  case LWS_CALLBACK_CLOSED:
  case LWS_CALLBACK_CLIENT_RECEIVE:
  case LWS_CALLBACK_CLIENT_WRITEABLE:
  case LWS_CALLBACK_SERVER_WRITEABLE:
  case LWS_CALLBACK_CLIENT_APPEND_HANDSHAKE_HEADER:
  case LWS_CALLBACK_WS_PEER_INITIATED_CLOSE:
    break;
  default:
    return 0;
  case LWS_CALLBACK_OPENSSL_LOAD_EXTRA_CLIENT_VERIFY_CERTS:
  case LWS_CALLBACK_OPENSSL_LOAD_EXTRA_SERVER_VERIFY_CERTS:
    this = FSslModule::Get();
    pIVar8 = FSslModule::GetCertificateManager(this);
    (**(code **)((longlong)*pIVar8 + 8))(pIVar8,param_3);
    return 0;
  case LWS_CALLBACK_WSI_DESTROY:
    pTVar2 = &pFVar7->SocketsDestroyedDuringService;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         pFVar3 + (longlong)(pFVar7->SocketsDestroyedDuringService).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    iVar6 = (pFVar7->SocketsDestroyedDuringService).ArrayNum;
    piVar1 = &(pFVar7->SocketsDestroyedDuringService).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (pFVar7->SocketsDestroyedDuringService).ArrayNum = iVar6 + 1;
    *(FLwsWebSocket **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    break;
  case LWS_CALLBACK_OPENSSL_PERFORM_SERVER_CERT_VERIFICATION:
    local_18[0] = (FLwsWebSocket *)lws_wsi_user(param_1);
    param_4 = param_3;
  }
  iVar6 = FLwsWebSocket::LwsCallback(local_18[0],param_1,param_2,param_4,param_5);
  return iVar6;
}

// Stop @ 14b3ffb60

void __thiscall FLwsWebSocketsManager::Stop(FLwsWebSocketsManager *this)

{
  LOCK();
  *(undefined4 *)&this->Thread = 1;
  UNLOCK();
  if ((this->SslContext != (ssl_ctx_st *)0x0) && (*(char *)((longlong)&this->Thread + 4) == '\0')) {
    lws_cancel_service(this->SslContext);
    return;
  }
  return;
}

// Tick @ 14b3ffb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLwsWebSocketsManager::Tick(FLwsWebSocketsManager *this)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<TSharedRef<FLwsWebSocket,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FName FVar4;
  void *pvVar5;
  lws_context *plVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  TNode *pTVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  TNode **ppTVar13;
  FLwsWebSocket *this_00;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_FLwsWebSocketsManager::Tick(void)_::_2_::FStat_STAT_FLwsWebSocketsManager_Tick>
  FVar20;
  TNode *pTVar21;
  TNode *pTVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FLwsWebSocket *local_b8;
  FLwsWebSocket *local_b0;
  FLLMScope local_a8;
  FColor_u_0 local_a4;
  uint local_a0;
  TNode *local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_70;
  TNode *local_68;
  FMemScope local_60;
  FName local_58;
  FName local_50 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FLwsWebSocketsManager_Tick ==
        (FThreadSafeStaticStat<_private:_virtual_void___cdecl_FLwsWebSocketsManager::Tick(void)_::_2_::FStat_STAT_FLwsWebSocketsManager_Tick>
         )0x0) {
      pFVar19 = ::FName::FName(&local_58,"STAT_FLwsWebSocketsManager_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FLwsWebSocketsManager_Tick,*pFVar19,
                 L"STAT_FLwsWebSocketsManager_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_FLwsWebSocketsManager_Tick;
  if (StatPtr_STAT_FLwsWebSocketsManager_Tick ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_FLwsWebSocketsManager::Tick(void)_::_2_::FStat_STAT_FLwsWebSocketsManager_Tick>
       )0x0) {
    pFVar19 = ::FName::FName(local_50,"STAT_FLwsWebSocketsManager_Tick");
    FVar20 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_FLwsWebSocketsManager::Tick(void)_::_2_::FStat_STAT_FLwsWebSocketsManager_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FLwsWebSocketsManager_Tick,
                          *pFVar19,L"STAT_FLwsWebSocketsManager_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar20;
  bVar12 = false;
  bVar11 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar15 = false;
  bVar14 = false;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar12 = false;
      bVar11 = true;
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_90.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocketsManager.cpp"
                   ,0x1e2);
        bVar12 = true;
        bVar11 = true;
        bVar15 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar14 = true;
      goto LAB_14b3ffd0a;
    }
  }
  bVar12 = bVar15;
  bVar11 = bVar14;
  bVar14 = false;
  local_88 = local_80;
LAB_14b3ffd0a:
  FLLMScope::FLLMScope(&local_a8,LLMTagDeclaration_WebSockets.UniqueName,false,None,Default,true);
  local_70 = LLMTagDeclaration_WebSockets.UniqueName;
  FMemScope::FMemScope(&local_60,&local_70,true);
LAB_14b3ffd50:
  lVar28 = **(longlong **)&this->field_0x58;
  if (lVar28 != 0) {
    local_b8 = *(FLwsWebSocket **)(lVar28 + 8);
    pvVar5 = *(void **)&this->field_0x58;
    *(longlong *)&this->field_0x58 = lVar28;
    *(undefined8 *)(lVar28 + 8) = 0;
    ::operator_delete(pvVar5,0x10);
    this_00 = local_b8;
    plVar6 = *(lws_context **)&this->field_0x10;
    if (plVar6 == (lws_context *)0x0) {
LAB_14b3ffe6f:
      pTVar21 = (this->SocketsToStop).Head;
      ppTVar13 = &pTVar21->NextNode;
      for (; pTVar21 != (TNode *)(ppTVar13 + *(int *)&(this->SocketsToStop).Tail);
          pTVar21 = (TNode *)&pTVar21->Item) {
        if ((FLwsWebSocket *)pTVar21->NextNode == local_b8) goto LAB_14b3ffd50;
      }
      pTVar21 = ::operator_new(0x10);
      if (pTVar21 != (TNode *)0x0) {
        pTVar21->NextNode = (TNode *)0x0;
        pTVar21->Item = local_b8;
        pTVar22 = (this->SocketsToStart).Head;
        (this->SocketsToStart).Head = pTVar21;
        pTVar22->NextNode = pTVar21;
      }
    }
    else {
      if ((local_b8->State != StartConnecting) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("State == EState::StartConnecting",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                              ,0x28f,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FLwsWebSocket::ConnectInternal(this_00,plVar6);
      if (this_00->State != Connecting) goto LAB_14b3ffe6f;
      pFVar7 = (this->Sockets).AllocatorInstance.Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar7 + (longlong)(this->Sockets).ArrayMax * 8))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar17 = (this->Sockets).ArrayNum;
      piVar1 = &(this->Sockets).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->Sockets).AllocatorInstance,piVar1);
      }
      (this->Sockets).ArrayNum = iVar17 + 1;
      *(FLwsWebSocket **)((this->Sockets).AllocatorInstance.Data + (longlong)iVar17 * 8) = local_b8;
    }
    goto LAB_14b3ffd50;
  }
  pFVar27 = (this->Sockets).AllocatorInstance.Data;
  iVar17 = (this->Sockets).ArrayNum;
  pFVar7 = pFVar27 + (longlong)iVar17 * 8;
  do {
    while( true ) {
      if ((this->Sockets).ArrayNum != iVar17) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FLwsWebSocket_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar27 == pFVar7) {
        if (*(longlong *)&this->field_0x10 != 0) {
          if (*(char *)((longlong)&(this->OnChildEndFramePostForkHandle).ID + 4) == '\0') {
            uVar24 = *(undefined4 *)&this->Thread;
          }
          else {
            uVar24 = 0;
          }
          lws_service(*(longlong *)&this->field_0x10,uVar24);
        }
        local_a0 = *(uint *)&(this->SocketsToStop).Tail;
        uVar23 = (ulonglong)(int)local_a0;
        pTVar2 = &this->Sockets;
        pTVar21 = (this->SocketsToStop).Head;
        local_68 = (TNode *)(&pTVar21->NextNode + uVar23);
        do {
          pTVar22 = local_68;
          local_98 = pTVar21;
          if (*(int *)&(this->SocketsToStop).Tail != (int)uVar23) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FLwsWebSocket_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          FVar4 = local_88;
          if (pTVar21 == pTVar22) {
            iVar17 = *(int *)((longlong)&(this->SocketsToStop).Tail + 4);
            *(undefined4 *)&(this->SocketsToStop).Tail = 0;
            if (iVar17 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,(ForAnyElementType *)&this->SocketsToStop,0,
                         (int *)((longlong)&(this->SocketsToStop).Tail + 4));
            }
            FMemScope::~FMemScope(&local_60);
            FLLMScope::~FLLMScope(&local_a8);
            if (bVar11) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar12) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (bVar14) {
              FThreadStats::AddMessage(FVar4,CycleScopeEnd);
            }
            return;
          }
          local_b0 = (FLwsWebSocket *)pTVar21->NextNode;
          pFVar7 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_b0) &&
              ((FScriptContainerElement *)&local_b0 <
               pFVar7 + (longlong)(this->Sockets).ArrayMax * 8)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar17 = (this->Sockets).ArrayNum;
          bVar15 = false;
          uVar26 = 0;
          if (0 < iVar17) {
            lVar28 = 0;
            do {
              uVar25 = 0;
              if ((int)uVar26 < iVar17) {
                uVar25 = ~uVar26 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uVar25 = uVar26;
              if (*(FLwsWebSocket **)((pTVar2->AllocatorInstance).Data + lVar28) == local_b0) {
                uVar25 = uVar26 - 1;
                lVar28 = lVar28 + -8;
                bVar15 = true;
                uVar18 = 0;
                if ((int)uVar26 < (this->Sockets).ArrayNum) {
                  uVar18 = ~uVar26 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                iVar3 = (this->Sockets).ArrayNum;
                pFVar7 = (pTVar2->AllocatorInstance).Data;
                iVar17 = iVar3 + ~uVar26;
                if (1 < iVar17) {
                  iVar17 = 1;
                }
                if (iVar17 != 0) {
                  memmove(pFVar7 + (longlong)(int)uVar26 * 8,pFVar7 + (longlong)(iVar3 - iVar17) * 8
                          ,(longlong)iVar17 << 3);
                }
                piVar1 = &(this->Sockets).ArrayNum;
                *piVar1 = *piVar1 + -1;
              }
              iVar17 = (this->Sockets).ArrayNum;
              uVar26 = uVar25 + 1;
              lVar28 = lVar28 + 8;
            } while ((int)uVar26 < iVar17);
            pTVar21 = local_98;
            if (bVar15) {
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&pTVar2->AllocatorInstance,iVar17,&(this->Sockets).ArrayMax);
              pTVar21 = local_98;
            }
          }
          pTVar22 = ::operator_new(0x10);
          if (pTVar22 != (TNode *)0x0) {
            pTVar22->NextNode = (TNode *)0x0;
            pTVar22->Item = local_b0;
            pTVar9 = (this->SocketsToStart).Head;
            (this->SocketsToStart).Head = pTVar22;
            pTVar9->NextNode = pTVar22;
          }
          uVar23 = (ulonglong)local_a0;
          pTVar21 = (TNode *)&pTVar21->Item;
        } while( true );
      }
      lVar28 = *(longlong *)pFVar27;
      if (*(char *)(lVar28 + 0x40) == '\x03') break;
LAB_14b400003:
      pFVar27 = pFVar27 + 8;
    }
    if ((*(longlong *)(lVar28 + 0x160) == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("LwsConnection",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                            ,0x298,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar28 + 0x18);
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)(lVar28 + 0x68) != 0) {
      *(undefined1 *)(lVar28 + 0x40) = 4;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    if (*(char *)(lVar28 + 0x40) != '\x04') {
      lVar8 = **(longlong **)(lVar28 + 0x1e8);
      if ((*(char *)(lVar28 + 0x78) != '\0') && (lVar8 != 0)) {
        lws_callback_on_writable(*(undefined8 *)(lVar28 + 0x160));
      }
      *(bool *)(lVar28 + 0x78) = lVar8 == 0;
      goto LAB_14b400003;
    }
    if (5 < (byte)LogWebSockets._0_1_) {
      FLwsWebSocket::ToString(Connected);
      FLwsWebSocket::ToString(ClosingByRequest);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    if (*(char *)(lVar28 + 0x78) == '\0') goto LAB_14b400003;
    lws_callback_on_writable(*(undefined8 *)(lVar28 + 0x160));
    pFVar27 = pFVar27 + 8;
  } while( true );
}

// UpdateConfigs @ 14b400420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLwsWebSocketsManager::UpdateConfigs(FLwsWebSocketsManager *this)

{
  bool *pbVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  pbVar1 = &this->bPollService;
  bVar2 = *pbVar1;
  *pbVar1 = false;
  FConfigCacheIni::GetBool(GConfig,L"WebSockets.LibWebSockets",L"bPollService",pbVar1,&GEngineIni);
  FConfigCacheIni::GetInt
            (GConfig,L"WebSockets.LibWebSockets",L"ServiceTimeoutMs",&this->ServiceTimeoutMs,
             &GEngineIni);
  FConfigCacheIni::GetDouble
            (GConfig,L"WebSockets.LibWebSockets",L"ThreadTargetFrameTimeInSeconds",
             &this->ThreadTargetFrameTimeInSeconds,&GEngineIni);
  FConfigCacheIni::GetDouble
            (GConfig,L"WebSockets.LibWebSockets",L"ThreadMinimumSleepTimeInSeconds",
             &this->ThreadMinimumSleepTimeInSeconds,&GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"LwsWebSocket",L"bDisableDomainAllowlist",&this->bDisableDomainAllowlist,
             &GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"LwsWebSocket",L"bDisableCertValidation",&this->bDisableCertValidation,
             &GEngineIni);
  pwVar4 = FCommandLine::Get();
  FParse::Bool(pwVar4,L"lws-insecure=",&this->bDisableCertValidation);
  if (*pbVar1 == false) {
    bVar3 = FGenericPlatformProcess::SupportsMultithreading();
    if (!bVar3) {
      bVar3 = FForkProcessHelper::IsForkedMultithreadInstance();
      if (!bVar3) {
        if (2 < (byte)LogWebSockets._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
        }
        *pbVar1 = true;
      }
    }
  }
  if (bVar2 != *pbVar1) {
    if (*pbVar1 == false) {
      if (4 < (byte)LogWebSockets._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
      }
    }
    else {
      if (4 < (byte)LogWebSockets._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
      }
      if (this->LwsContext != (lws_context *)0x0) {
        lws_cancel_service();
      }
    }
  }
  return;
}

// WakeService @ 14b400610

void __thiscall FLwsWebSocketsManager::WakeService(FLwsWebSocketsManager *this)

{
  if (this->bPollService == false) {
    lws_cancel_service(this->LwsContext);
    return;
  }
  return;
}

