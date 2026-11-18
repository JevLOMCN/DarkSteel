// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FTexture2DMipDataProvider_IO @ 148806810

FTexture2DMipDataProvider_IO * __thiscall
FTexture2DMipDataProvider_IO::FTexture2DMipDataProvider_IO
          (FTexture2DMipDataProvider_IO *this,UTexture *param_1,bool param_2)

{
  undefined4 uVar1;
  
  this->_padding_ = (longlong)&___7FTextureMipDataProvider__6B_;
  this->_padding_ = param_1->_padding_;
  *(uint *)&this->_padding_ =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  *(uint *)((longlong)&this->_padding_ + 4) =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 6);
  (this->IORequests).AllocatorInstance.SecondaryData =
       (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0;
  this->_padding_ = (longlong)&___7FTexture2DMipDataProvider_IO__6B_;
  this->_padding_ = 0;
  (this->IORequests).ArrayNum = 0;
  *(undefined8 *)&(this->IORequests).ArrayMax = 0xf;
  (this->TextureName).Number = 0;
  *(undefined8 *)&this->AsyncFileCallBack = 0;
  *(undefined8 *)&(this->AsyncFileCallBack).field_0x28 = 0;
  this->bPrioritizedIORequest = param_2;
  this->bIORequestCancelled = false;
  this->bIORequestAborted = false;
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->TextureName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->TextureName).Number = uVar1;
  return this;
}

// ~FTexture2DMipDataProvider_IO @ 14880cb30

void __thiscall
FTexture2DMipDataProvider_IO::~FTexture2DMipDataProvider_IO(FTexture2DMipDataProvider_IO *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> FVar6;
  
  iVar1 = (this->IORequests).ArrayNum;
  this->_padding_ = (longlong)&___7FTexture2DMipDataProvider_IO__6B_;
  if (iVar1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IORequests.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DMipDataProvider_IO.cpp"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)&this->AsyncFileCallBack != 0) {
    plVar2 = *(longlong **)&(this->AsyncFileCallBack).field_0x28;
    plVar5 = (longlong *)&(this->AsyncFileCallBack).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FVar6 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
    FVar6 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)&this->IORequests;
  }
  DestructItems<FTexture2DMipDataProvider_IO::FIORequest,int>
            ((FIORequest *)FVar6,(this->IORequests).ArrayNum);
  FVar6 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  this->_padding_ = (longlong)&___7FTextureMipDataProvider__6B_;
  return;
}

// operator() @ 14880f310

void __thiscall
`FTexture2DMipDataProvider_IO::SetAsyncFileCallback'::__l2::<lambda_1>::operator()
          (void *this,bool param_1,IBulkDataIORequest *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  LOCK();
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + -1;
  UNLOCK();
  if (param_1) {
    *(undefined1 *)(*(longlong *)this + 0x129) = 1;
  }
  if (**(int **)((longlong)this + 8) == 0) {
    if (0 < FRenderAssetStreamingSettings::ExtraIOLatency) {
      FWindowsPlatformProcess::Sleep
                ((float)FRenderAssetStreamingSettings::ExtraIOLatency * __real_3a83126f);
    }
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
    pcVar1 = *(code **)((longlong)this + 0x10);
    plVar3 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x38);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  return;
}

// AbortPollMips @ 1488168a0

void __thiscall FTexture2DMipDataProvider_IO::AbortPollMips(FTexture2DMipDataProvider_IO *this)

{
  int iVar1;
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> FVar2;
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> FVar3;
  undefined1 local_res8 [8];
  
  FVar2 = (this->IORequests).AllocatorInstance.SecondaryData;
  iVar1 = (this->IORequests).ArrayNum;
  if (FVar2 == (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
    FVar2 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)&this->IORequests;
  }
  FVar3 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)
          ((longlong)iVar1 * 0x10 + (longlong)FVar2);
  while( true ) {
    if ((this->IORequests).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTexture2DMipDataProvider_IO::FIORequest,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar2 == FVar3) break;
    if (*(longlong **)((longlong)FVar2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)FVar2 + 8) + 0x28))();
      this->bIORequestAborted = true;
    }
    FVar2 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)((longlong)FVar2 + 0x10);
  }
  return;
}

// Cancel @ 148824dc0

void __thiscall
FTexture2DMipDataProvider_IO::Cancel
          (FTexture2DMipDataProvider_IO *this,FTextureUpdateSyncOptions *param_1)

{
  TArray<FTexture2DMipDataProvider_IO::FIORequest,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> FVar5;
  longlong *plVar6;
  undefined1 auStackX_8 [8];
  
  FVar5 = (this->IORequests).AllocatorInstance.SecondaryData;
  pTVar1 = &this->IORequests;
  iVar3 = (this->IORequests).ArrayNum;
  if (FVar5 == (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
    FVar5 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)pTVar1;
  }
  plVar6 = (longlong *)((longlong)FVar5 + 8);
  while( true ) {
    if ((this->IORequests).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FTexture2DMipDataProvider_IO::FIORequest,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (plVar6 + -1 == (longlong *)((longlong)iVar3 * 0x10 + (longlong)FVar5)) break;
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      cVar4 = (**(code **)(*(longlong *)*plVar6 + 8))();
      if (cVar4 == '\0') {
        (**(code **)(*(longlong *)*plVar6 + 0x28))();
        (**(code **)(*(longlong *)*plVar6 + 0x10))((longlong *)*plVar6,0);
      }
    }
    plVar6 = plVar6 + 2;
  }
  FVar5 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
    FVar5 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)pTVar1;
  }
  DestructItems<FTexture2DMipDataProvider_IO::FIORequest,int>
            ((FIORequest *)FVar5,(this->IORequests).ArrayNum);
  piVar2 = &(this->IORequests).ArrayMax;
  (this->IORequests).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FTexture2DMipDataProvider_IO::FIORequest>_>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  return;
}

// CleanUp @ 1488296b0

void __thiscall
FTexture2DMipDataProvider_IO::CleanUp
          (FTexture2DMipDataProvider_IO *this,FTextureUpdateSyncOptions *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((uint)this->_padding_ < 6) {
    *(undefined4 *)&this->_padding_ = 5;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(uint32)NextTickState <= (uint32)InState",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                     ,0xd1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&this->_padding_ = 5;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  return;
}

// ClearIORequests @ 148829ec0

void __thiscall FTexture2DMipDataProvider_IO::ClearIORequests(FTexture2DMipDataProvider_IO *this)

{
  TArray<FTexture2DMipDataProvider_IO::FIORequest,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> FVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  FVar5 = (this->IORequests).AllocatorInstance.SecondaryData;
  pTVar1 = &this->IORequests;
  iVar3 = (this->IORequests).ArrayNum;
  if (FVar5 == (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
    FVar5 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)pTVar1;
  }
  plVar6 = (longlong *)((longlong)FVar5 + 8);
  while( true ) {
    if ((this->IORequests).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FTexture2DMipDataProvider_IO::FIORequest,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar6 + -1 == (longlong *)((longlong)iVar3 * 0x10 + (longlong)FVar5)) break;
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      cVar4 = (**(code **)(*(longlong *)*plVar6 + 8))();
      if (cVar4 == '\0') {
        (**(code **)(*(longlong *)*plVar6 + 0x28))();
        (**(code **)(*(longlong *)*plVar6 + 0x10))((longlong *)*plVar6,0);
      }
    }
    plVar6 = plVar6 + 2;
  }
  FVar5 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
    FVar5 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)pTVar1;
  }
  DestructItems<FTexture2DMipDataProvider_IO::FIORequest,int>
            ((FIORequest *)FVar5,(this->IORequests).ArrayNum);
  piVar2 = &(this->IORequests).ArrayMax;
  (this->IORequests).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FTexture2DMipDataProvider_IO::FIORequest>_>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  return;
}

// GetCancelThread @ 14883da00

ETickThread __thiscall
FTexture2DMipDataProvider_IO::GetCancelThread(FTexture2DMipDataProvider_IO *this)

{
  ETickThread EVar1;
  
  EVar1 = None;
  if ((this->IORequests).ArrayNum != 0) {
    EVar1 = Async;
  }
  return EVar1;
}

// GetMips @ 14883f480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

int __thiscall
FTexture2DMipDataProvider_IO::GetMips
          (FTexture2DMipDataProvider_IO *this,FTextureUpdateContext *param_1,int param_2,
          TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *param_3
          ,FTextureUpdateSyncOptions *param_4)

{
  FTexture2DMipMap *pFVar1;
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> FVar2;
  undefined8 uVar3;
  uchar *puVar4;
  IBulkDataIORequest *pIVar5;
  longlong lVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  TEventRef<unsigned_int> TVar14;
  long64 lVar15;
  IBulkDataIORequest *pIVar16;
  FWriteBuffer *pFVar17;
  EAsyncIOPriorityAndFlags EVar18;
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> FVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  longlong *plVar23;
  EAsyncIOPriorityAndFlags EVar24;
  undefined1 auStackY_e8 [32];
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_98;
  FTextureUpdateSyncOptions *local_90;
  FName local_88;
  FTexture2DMipMap *local_80;
  ForElementType<FTextureMipInfo> local_78;
  FTextureUpdateContext *local_70;
  FName local_68;
  undefined4 *local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar20 = (ulonglong)param_2;
  local_90 = param_4;
  local_78 = (ForElementType<FTextureMipInfo>)param_3;
  local_70 = param_1;
  SetAsyncFileCallback(this,param_4);
  if ((param_4->Counter == (FThreadSafeCounter *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SyncOptions.Counter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DMipDataProvider_IO.cpp"
                         ,0x4c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    iVar11 = (*pcVar7)();
    return iVar11;
  }
  if (param_2 < (int)this->_padding_) {
    local_b0 = uVar20 << 4;
    local_a0 = uVar20;
    lVar22 = uVar20 * 0x30;
    local_98 = lVar22;
    uVar13 = uVar20;
    while ((param_2 = (int)uVar20, -1 < param_2 && (param_2 < *(int *)((longlong)param_3 + 0x2d8))))
    {
      uVar21 = (uint)~param_2 >> 0x1f;
      uVar12 = 0;
      if (param_2 < (param_1->MipsView).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar11 = (*pcVar7)();
        return iVar11;
      }
      pFVar1 = (param_1->MipsView).DataPtr[uVar13];
      local_80 = pFVar1;
      uVar12 = 0;
      if (param_2 < *(int *)((longlong)param_3 + 0x2d8)) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar11 = (*pcVar7)();
        return iVar11;
      }
      if (*(ForElementType<FTextureMipInfo> *)((longlong)param_3 + 0x2d0) !=
          (ForElementType<FTextureMipInfo>)0x0) {
        param_3 = (TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
                   *)*(ForElementType<FTextureMipInfo> *)((longlong)param_3 + 0x2d0);
      }
      plVar23 = (longlong *)(lVar22 + (longlong)param_3);
      uVar12 = 0;
      if (param_2 < (this->IORequests).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar11 = (*pcVar7)();
        return iVar11;
      }
      FVar2 = (this->IORequests).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)&this->IORequests;
      if (FVar2 != (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
        FVar19 = FVar2;
      }
      if ((*(int *)(local_b0 + (longlong)FVar19) == 0) ||
         (((uVar20 = plVar23[1], uVar20 != 0 &&
           (uVar13 = FBulkData::GetBulkDataSize((FBulkData *)&pFVar1->BulkData), uVar20 < uVar13))
          || (*plVar23 == 0)))) break;
      LOCK();
      local_90->Counter->Counter = local_90->Counter->Counter + 1;
      UNLOCK();
      EVar24 = AIOP_Low;
      if (this->bPrioritizedIORequest != false) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
             ((IConsoleManager::SetupSingleton(),
              IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
              (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Singleton != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x4fb,L""), bVar9)))) {
            pcVar7 = (code *)swi(3);
            iVar11 = (*pcVar7)();
            return iVar11;
          }
          CVarAsyncLoadingPrecachePriority =
               (IConsoleVariable *)
               (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                         (IConsoleManager::Singleton,L"s.AsyncLoadingPrecachePriority",1);
          _Init_thread_footer(&::_TSS0);
        }
        pTVar8 = CVarStreamingLowResHandlingMode.Ref;
        bVar9 = IsInParallelGameThread();
        if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
          lVar22 = 0;
        }
        else {
          lVar22 = 4;
        }
        if ((CVarAsyncLoadingPrecachePriority == (IConsoleVariable *)0x0) ||
           (*(int *)((longlong)pTVar8->ShadowedValue + lVar22) != 2)) {
          EVar24 = AIOP_BelowNormal;
        }
        else {
          iVar11 = (**(code **)(*(longlong *)CVarAsyncLoadingPrecachePriority + 200))();
          EVar18 = AIOP_CriticalPath;
          if ((int)(iVar11 + AIOP_Low) < 5) {
            EVar18 = iVar11 + AIOP_Low;
          }
          EVar24 = AIOP_BelowNormal;
          if (2 < (int)EVar18) {
            EVar24 = EVar18;
          }
        }
      }
      if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
        local_a8 = 0;
        TVar14 = (TEventRef<unsigned_int>)&local_a8;
      }
      else {
        ::FName::FName(&local_88,"Texture2DMip");
        TVar14 = FStringTrace::GetNameRef(&local_68);
      }
      uVar3 = *(undefined8 *)TVar14;
      bVar9 = false;
      if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
        UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                  ((TLogScope<0> *)&local_60);
        bVar9 = true;
        *local_60 = (int)uVar3;
        *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_58 + 0x20);
      }
      uVar12 = 0;
      if (param_2 < (this->IORequests).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        iVar11 = (*pcVar7)();
        return iVar11;
      }
      pFVar1 = local_80;
      FVar2 = (this->IORequests).AllocatorInstance.SecondaryData;
      puVar4 = (uchar *)*plVar23;
      FVar19 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)&this->IORequests;
      if (FVar2 != (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
        FVar19 = FVar2;
      }
      lVar15 = FBulkData::GetBulkDataSize((FBulkData *)&local_80->BulkData);
      pIVar16 = FBulkData::CreateStreamingRequest
                          ((FBulkData *)&pFVar1->BulkData,0,lVar15,EVar24 | AIOP_FLAG_DONTCACHE,
                           &this->AsyncFileCallBack,puVar4);
      pIVar5 = *(IBulkDataIORequest **)(local_b0 + 8 + (longlong)FVar19);
      if ((pIVar5 != pIVar16) &&
         (*(IBulkDataIORequest **)(local_b0 + 8 + (longlong)FVar19) = pIVar16,
         pIVar5 != (IBulkDataIORequest *)0x0)) {
        (**(code **)*pIVar5)(pIVar5,1);
      }
      local_b0 = local_b0 + 0x10;
      uVar13 = local_a0 + 1;
      lVar22 = local_98 + 0x30;
      local_a0 = uVar13;
      param_2 = param_2 + 1;
      uVar20 = (ulonglong)(uint)param_2;
      local_98 = lVar22;
      if (bVar9) {
        lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar6 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar17 = *(FWriteBuffer **)(lVar6 + 0x20);
        if ((int)pFVar17 - *(int *)&pFVar17->Cursor < 1) {
          pFVar17 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar17->Cursor = '\n';
        pFVar17->Cursor = pFVar17->Cursor + 1;
        pFVar17->Committed = pFVar17->Cursor;
      }
      param_1 = local_70;
      param_3 = (TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *
                )local_78;
      if ((int)this->_padding_ <= param_2) break;
    }
  }
  if ((2 < (uint)this->_padding_) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)NextTickState <= (uint32)InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                         ,0xd1,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    iVar11 = (*pcVar7)();
    return iVar11;
  }
  this->_padding_ = 2;
  return param_2;
}

// Init @ 148844fe0

void __thiscall
FTexture2DMipDataProvider_IO::Init
          (FTexture2DMipDataProvider_IO *this,FTextureUpdateContext *param_1,
          FTextureUpdateSyncOptions *param_2)

{
  TArray<FTexture2DMipDataProvider_IO::FIORequest,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long64 lVar10;
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> FVar11;
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> FVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  
  iVar4 = (int)this->_padding_;
  pTVar1 = &this->IORequests;
  iVar8 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FTexture2DMipDataProvider_IO::FIORequest>_>
                    (0x10,8,iVar4,&pTVar1->AllocatorInstance,&(this->IORequests).ArrayNum,
                     &(this->IORequests).ArrayMax);
  FVar11 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
    FVar11 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)pTVar1;
  }
  DefaultConstructItems<FTexture2DMipDataProvider_IO::FIORequest,int>
            ((void *)((longlong)FVar11 + (longlong)iVar8 * 0x10),iVar4);
  bVar2 = *(byte *)((longlong)&this->_padding_ + 3);
  bVar3 = *(byte *)((longlong)&this->_padding_ + 2);
  if (((bVar3 < bVar2) &&
      (iVar4 = *(int *)((longlong)&this->_padding_ + 4), iVar4 < (int)((uint)bVar2 - (uint)bVar3)))
     && (uVar13 = 0, 0 < iVar4)) {
    lVar17 = 0;
    lVar16 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar13 < (param_1->MipsView).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar9 = MakeIoFilenameHash((FIoChunkId *)
                                 (*(longlong *)(lVar16 + (longlong)(param_1->MipsView).DataPtr) +
                                 0x38));
      uVar14 = 0;
      if ((int)uVar13 < (this->IORequests).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FVar11 = (this->IORequests).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)pTVar1;
      if (FVar11 != (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
        FVar12 = FVar11;
      }
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 8;
      *(uint *)(lVar17 + (longlong)FVar12) = uVar9;
      lVar17 = lVar17 + 0x10;
    } while ((int)uVar13 < *(int *)((longlong)&this->_padding_ + 4));
  }
  iVar4 = *(int *)((longlong)&this->_padding_ + 4);
  uVar15 = (ulonglong)iVar4;
  if (iVar4 < (int)this->_padding_) {
    lVar16 = uVar15 * 8;
    lVar17 = uVar15 << 4;
    do {
      uVar14 = (uint)uVar15;
      uVar13 = 0;
      if ((int)uVar14 < (param_1->MipsView).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar5 = *(longlong *)(lVar16 + (longlong)(param_1->MipsView).DataPtr);
      bVar7 = FBulkData::IsStoredCompressedOnDisk((FBulkData *)(lVar5 + 0x20));
      if (!bVar7) {
        lVar10 = FBulkData::GetBulkDataSize((FBulkData *)(lVar5 + 0x20));
        if (0 < lVar10) {
          uVar9 = MakeIoFilenameHash((FIoChunkId *)(lVar5 + 0x38));
          uVar13 = 0;
          if ((int)uVar14 < (this->IORequests).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          FVar11 = (this->IORequests).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)pTVar1;
          if (FVar11 != (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
            FVar12 = FVar11;
          }
          *(uint *)(lVar17 + (longlong)FVar12) = uVar9;
        }
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      lVar16 = lVar16 + 8;
      lVar17 = lVar17 + 0x10;
    } while ((int)(uVar14 + 1) < (int)this->_padding_);
  }
  if (1 < (uint)this->_padding_) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)NextTickState <= (uint32)InState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                       ,0xd1,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this->_padding_ = 1;
  return;
}

// PollMips @ 14884d9b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTexture2DMipDataProvider_IO::PollMips
          (FTexture2DMipDataProvider_IO *this,FTextureUpdateSyncOptions *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FStreamingManagerCollection *this_00;
  IRenderAssetStreamingManager *pIVar5;
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> FVar6;
  ForElementType<FTexture2DMipDataProvider_IO::FIORequest> FVar7;
  undefined1 local_res8 [8];
  FString local_28;
  
  if ((this->bIORequestCancelled != false) && (this->bIORequestAborted == false)) {
    this_00 = IStreamingManager::Get();
    pIVar5 = FStreamingManagerCollection::GetRenderAssetStreamingManager(this_00);
    FVar6 = (this->IORequests).AllocatorInstance.SecondaryData;
    iVar1 = (this->IORequests).ArrayNum;
    if (FVar6 == (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)0x0) {
      FVar6 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)&this->IORequests;
    }
    FVar7 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)
            ((longlong)iVar1 * 0x10 + (longlong)FVar6);
    while( true ) {
      if ((this->IORequests).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FTexture2DMipDataProvider_IO::FIORequest,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (FVar6 == FVar7) break;
      (**(code **)(*(longlong *)pIVar5 + 0x118))(pIVar5,*(undefined4 *)FVar6);
      FVar6 = (ForElementType<FTexture2DMipDataProvider_IO::FIORequest>)((longlong)FVar6 + 0x10);
    }
    if (2 < (byte)LogContentStreaming._0_1_) {
      ::FName::ToString(&this->TextureName,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  ClearIORequests(this);
  if ((5 < (uint)this->_padding_) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)NextTickState <= (uint32)InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                         ,0xd1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = this->bIORequestCancelled;
  *(undefined4 *)&this->_padding_ = 5;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  return bVar3 == false;
}

// SetAsyncFileCallback @ 148858510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTexture2DMipDataProvider_IO::SetAsyncFileCallback
          (FTexture2DMipDataProvider_IO *this,FTextureUpdateSyncOptions *param_1)

{
  FThreadSafeCounter *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_e8 [32];
  FTexture2DMipDataProvider_IO *local_c8;
  FThreadSafeCounter *local_c0;
  longlong local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar1 = param_1->Counter;
  local_58 = *(longlong *)&param_1->RescheduleCallback;
  local_30 = (longlong *)0x0;
  if (*(longlong *)&param_1->RescheduleCallback != 0) {
    puVar11 = *(undefined8 **)&(param_1->RescheduleCallback).field_0x28;
    puVar12 = (undefined8 *)&(param_1->RescheduleCallback).field_0x10;
    if (puVar11 != (undefined8 *)0x0) {
      puVar12 = puVar11;
    }
    (**(code **)*puVar12)(puVar12,local_48);
  }
  if (((pFVar1 == (FThreadSafeCounter *)0x0) || (local_58 == 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Counter && RescheduleCallback",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DMipDataProvider_IO.cpp"
                          ,0xc2,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_90 = (longlong *)0x0;
  local_c8 = this;
  local_c0 = pFVar1;
  local_b8 = local_58;
  if (local_58 != 0) {
    plVar14 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar14 = local_30;
    }
    (**(code **)*plVar14)(plVar14,&local_a8);
  }
  local_88 = (code *)0x0;
  puVar11 = FMemory::Malloc(0x50,0x10);
  *puVar11 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTexture2DMipDataProvider_IO::SetAsyncFileCallback'::`2'::<lambda_1>,0,1>
              ::_vftable_;
  puVar11[2] = local_c8;
  puVar11[3] = local_c0;
  puVar11[4] = local_b8;
  puVar11[9] = local_90;
  local_90 = (longlong *)0x0;
  puVar11[6] = local_a8;
  puVar11[7] = uStack_a0;
  puVar11[8] = local_98;
  if (puVar11[4] != 0) {
    local_b8 = 0;
  }
  lVar8 = *(longlong *)&this->AsyncFileCallBack;
  uVar9 = *(undefined8 *)&(this->AsyncFileCallBack).field_0x8;
  uVar3 = *(undefined4 *)&(this->AsyncFileCallBack).field_0x10;
  uVar4 = *(undefined4 *)&(this->AsyncFileCallBack).field_0x14;
  uVar5 = *(undefined4 *)&(this->AsyncFileCallBack).field_0x18;
  uVar6 = *(undefined4 *)&(this->AsyncFileCallBack).field_0x1c;
  uVar7 = *(undefined8 *)&(this->AsyncFileCallBack).field_0x20;
  plVar14 = *(longlong **)&(this->AsyncFileCallBack).field_0x28;
  if (puVar11 + 2 != (undefined8 *)0x0) {
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FTexture2DMipDataProvider_IO::SetAsyncFileCallback'::__l2::<lambda_1>,void,bool,IBulkDataIORequest_*>
               ::Call;
  }
  *(code **)&this->AsyncFileCallBack = local_88;
  *(undefined8 *)&(this->AsyncFileCallBack).field_0x8 = uStack_80;
  uStack_60._0_4_ = SUB84(puVar11,0);
  uStack_60._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x10 = local_78;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x14 = uStack_74;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x18 = uStack_70;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x1c = uStack_6c;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x20 = (undefined4)local_68;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x24 = local_68._4_4_;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x28 = (undefined4)uStack_60;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x2c = uStack_60._4_4_;
  local_88 = (code *)lVar8;
  uStack_80 = uVar9;
  local_78 = uVar3;
  uStack_74 = uVar4;
  uStack_70 = uVar5;
  uStack_6c = uVar6;
  local_68 = uVar7;
  uStack_60 = plVar14;
  if (lVar8 != 0) {
    plVar13 = (longlong *)&local_78;
    if (plVar14 != (longlong *)0x0) {
      plVar13 = plVar14;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_b8 != 0) {
    plVar14 = &local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar14 = local_90;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_58 != 0) {
    plVar14 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar14 = local_30;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return;
}

