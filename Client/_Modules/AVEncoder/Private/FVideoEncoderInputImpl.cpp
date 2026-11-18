// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 27

// ~FVideoEncoderInputImpl @ 148d01d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AVEncoder::FVideoEncoderInputImpl::~FVideoEncoderInputImpl(FVideoEncoderInputImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  ID3D12Device *pIVar3;
  ID3D11DeviceContext *pIVar4;
  ID3D11Device *pIVar5;
  code *pcVar6;
  bool bVar7;
  
  lpCriticalSection = &this->ProtectFrames;
  this->_padding_ = (longlong)&___7FVideoEncoderInputImpl_AVEncoder__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((0 < (this->ActiveFrames).ArrayNum) && (1 < (byte)LogVideoEncoder._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
  }
  if (((this->ActiveFrames).ArrayNum != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveFrames.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                         ,0xb3,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DestructItems<TTuple<AVEncoder::FVideoEncoderInputFrameImpl_*,TFunction<void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)>_>,int>
            ((TTuple<AVEncoder::FVideoEncoderInputFrameImpl_*,TFunction<void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)>_>
              *)(this->UserManagedFrames).AllocatorInstance.Data,(this->UserManagedFrames).ArrayNum)
  ;
  pFVar1 = (this->UserManagedFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1>,int>
            ((TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1> *)
             (this->ActiveFrames).AllocatorInstance.Data,(this->ActiveFrames).ArrayNum);
  pFVar1 = (this->ActiveFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->AvailableFrames).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->AvailableFrames).Tail = pTVar2->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar2->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar2,0x18);
    pTVar2 = (this->AvailableFrames).Tail;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pIVar3 = (this->FrameInfoD3D).EncoderDeviceD3D12.Reference;
  if (pIVar3 != (ID3D12Device *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->FrameInfoD3D).EncoderDeviceContextD3D11.Reference;
  if (pIVar4 != (ID3D11DeviceContext *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->FrameInfoD3D).EncoderDeviceD3D11.Reference;
  if (pIVar5 != (ID3D11Device *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  DestructItems<AVEncoder::FVideoEncoderInfo,int>
            ((FVideoEncoderInfo *)(this->AvailableEncoders).AllocatorInstance.Data,
             (this->AvailableEncoders).ArrayNum);
  pFVar1 = (this->AvailableEncoders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// CollectAvailableEncoders @ 148d04350

void __thiscall
AVEncoder::FVideoEncoderInputImpl::CollectAvailableEncoders(FVideoEncoderInputImpl *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FVideoEncoderInfo *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  FVideoEncoderInfo *pFVar10;
  undefined1 local_res8 [8];
  
  DestructItems<AVEncoder::FVideoEncoderInfo,int>
            ((FVideoEncoderInfo *)(this->AvailableEncoders).AllocatorInstance.Data,
             (this->AvailableEncoders).ArrayNum);
  piVar1 = &(this->AvailableEncoders).ArrayMax;
  (this->AvailableEncoders).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->AvailableEncoders).AllocatorInstance,0,piVar1);
  }
  if (FVideoEncoderFactory::Singleton.bWasSetup == (FThreadSafeBool)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&FVideoEncoderFactory::ProtectSingleton);
    if (FVideoEncoderFactory::Singleton.bWasSetup == (FThreadSafeBool)0x0) {
      LOCK();
      FVideoEncoderFactory::Singleton.bWasSetup = (FThreadSafeBool)0x1;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&FVideoEncoderFactory::ProtectSingleton);
  }
  iVar5 = FVideoEncoderFactory::Singleton.AvailableEncoders.ArrayNum;
  pFVar10 = (FVideoEncoderInfo *)
            (FVideoEncoderFactory::Singleton.AvailableEncoders.AllocatorInstance.Data +
            (longlong)FVideoEncoderFactory::Singleton.AvailableEncoders.ArrayNum * 0x30);
  FVar9.Data = FVideoEncoderFactory::Singleton.AvailableEncoders.AllocatorInstance.Data;
  do {
    while( true ) {
      if (FVideoEncoderFactory::Singleton.AvailableEncoders.ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<AVEncoder::FVideoEncoderInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if ((FVideoEncoderInfo *)FVar9.Data == pFVar10) {
        return;
      }
      pFVar8 = (((FVideoEncoderInfo *)FVar9.Data)->SupportedInputFormats).AllocatorInstance.Data;
      pFVar2 = pFVar8 + (longlong)
                        (((FVideoEncoderInfo *)FVar9.Data)->SupportedInputFormats).ArrayNum * 4;
      if (pFVar8 != pFVar2) break;
LAB_148d044ec:
      FVar9.Data = FVar9.Data + 0x30;
    }
    do {
      if (*(int *)pFVar8 == (int)this->_padding_) {
        pFVar3 = (FVideoEncoderInfo *)(this->AvailableEncoders).AllocatorInstance.Data;
        if ((pFVar3 <= FVar9.Data) && (FVar9.Data < pFVar3 + *piVar1)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = (this->AvailableEncoders).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&(this->AvailableEncoders).AllocatorInstance,piVar1);
        }
        (this->AvailableEncoders).ArrayNum = iVar7 + 1;
        FVideoEncoderInfo::FVideoEncoderInfo
                  ((FVideoEncoderInfo *)
                   ((this->AvailableEncoders).AllocatorInstance.Data + (longlong)iVar7 * 0x30),
                   (FVideoEncoderInfo *)FVar9.Data);
        goto LAB_148d044ec;
      }
      pFVar8 = pFVar8 + 4;
    } while (pFVar8 != pFVar2);
    FVar9.Data = FVar9.Data + 0x30;
  } while( true );
}

// CreateBuffer @ 148d06050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVideoEncoderInputFrame * __thiscall
AVEncoder::FVideoEncoderInputImpl::CreateBuffer
          (FVideoEncoderInputImpl *this,
          TFunction<void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  FVideoEncoderInputFrameImpl *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar6 = CreateFrame(this);
  if (pFVar6 != (FVideoEncoderInputFrameImpl *)0x0) {
    lpCriticalSection = &this->ProtectFrames;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar5 = (this->UserManagedFrames).ArrayNum;
    piVar1 = &(this->UserManagedFrames).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1040,&(this->UserManagedFrames).AllocatorInstance,piVar1);
    }
    (this->UserManagedFrames).ArrayNum = iVar5 + 1;
    pFVar7 = (this->UserManagedFrames).AllocatorInstance.Data + (longlong)iVar5 * 0x40;
    *(FVideoEncoderInputFrameImpl **)pFVar7 = pFVar6;
    *(undefined8 *)(pFVar7 + 0x10) = *(undefined8 *)param_1;
    *(undefined8 *)(pFVar7 + 0x38) = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    uVar2 = *(undefined4 *)&param_1->field_0x14;
    uVar3 = *(undefined4 *)&param_1->field_0x18;
    uVar4 = *(undefined4 *)&param_1->field_0x1c;
    *(undefined4 *)(pFVar7 + 0x20) = *(undefined4 *)&param_1->field_0x10;
    *(undefined4 *)(pFVar7 + 0x24) = uVar2;
    *(undefined4 *)(pFVar7 + 0x28) = uVar3;
    *(undefined4 *)(pFVar7 + 0x2c) = uVar4;
    *(undefined8 *)(pFVar7 + 0x30) = *(undefined8 *)&param_1->field_0x20;
    if (*(longlong *)(pFVar7 + 0x10) != 0) {
      *(undefined8 *)param_1 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return (FVideoEncoderInputFrame *)pFVar6;
}

// CreateFrame @ 148d07800

/* WARNING: Enum "Type": Some values do not have unique names */

FVideoEncoderInputFrameImpl * __thiscall
AVEncoder::FVideoEncoderInputImpl::CreateFrame(FVideoEncoderInputImpl *this)

{
  code *pcVar1;
  bool bVar2;
  FVideoEncoderInputFrameImpl *pFVar3;
  FVideoEncoderInputFrameImpl *pFVar4;
  
  pFVar3 = ::operator_new(0x260);
  pFVar4 = (FVideoEncoderInputFrameImpl *)0x0;
  if (pFVar3 != (FVideoEncoderInputFrameImpl *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FVideoEncoderInputFrame_AVEncoder__6B_;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FVideoEncoderInputFrameImpl_AVEncoder__6B_;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    *(undefined8 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    *(undefined1 *)&pFVar3->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->Input = this;
    pFVar3->ClonedReference = (FVideoEncoderInputFrame *)0x0;
    *(undefined8 *)&pFVar3->OnCloneDestroyed = 0;
    *(undefined8 *)&(pFVar3->OnCloneDestroyed).field_0x28 = 0;
    pFVar4 = pFVar3;
  }
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  switch((int)this->_padding_) {
  case 0:
    if (1 < (byte)LogVideoEncoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
      return pFVar4;
    }
    break;
  case 1:
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 1;
    *(uint *)&pFVar4->_padding_ = (this->FrameInfoYUV420P).StrideY;
    *(uint *)((longlong)&pFVar4->_padding_ + 4) = (this->FrameInfoYUV420P).StrideU;
    *(uint *)&pFVar4->_padding_ = (this->FrameInfoYUV420P).StrideV;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    return pFVar4;
  case 2:
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 2;
    goto LAB_148d079f0;
  case 3:
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 3;
    if ((int)this->_padding_ != 2) {
      pFVar4->_padding_ = (longlong)(this->FrameInfoD3D).EncoderDeviceD3D12.Reference;
      return pFVar4;
    }
LAB_148d079f0:
    pFVar4->_padding_ = (longlong)(this->FrameInfoD3D).EncoderDeviceD3D11.Reference;
    return pFVar4;
  case 4:
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 4;
    pFVar4->_padding_ = (longlong)(this->FrameInfoCUDA).EncoderContextCUDA;
    return pFVar4;
  case 5:
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 5;
    pFVar4->_padding_ = (longlong)(this->FrameInfoVulkan).VulkanDevice;
    return pFVar4;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                       ,0x248,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVideoEncoderInputFrameImpl *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// DestroyBuffer @ 148d09620

void __thiscall
AVEncoder::FVideoEncoderInputImpl::DestroyBuffer
          (FVideoEncoderInputImpl *this,FVideoEncoderInputFrame *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *_Dst;
  uint uVar9;
  TArray<TTuple<AVEncoder::FVideoEncoderInputFrameImpl_*,TFunction<void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)>_>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  longlong lVar11;
  
  lpCriticalSection = &this->ProtectFrames;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar4 = false;
  uVar9 = (this->UserManagedFrames).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    pTVar10 = &this->UserManagedFrames;
    lVar11 = (longlong)(int)uVar9 << 6;
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar9 < (this->UserManagedFrames).ArrayNum) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*(FVideoEncoderInputFrame **)((pTVar10->AllocatorInstance).Data + lVar11) == param_1) {
        uVar5 = 0;
        if ((int)uVar9 < (this->UserManagedFrames).ArrayNum) {
          uVar5 = uVar8;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        _Dst = (pTVar10->AllocatorInstance).Data + lVar11;
        if (*(longlong *)(_Dst + 0x10) != 0) {
          pFVar7 = _Dst + 0x20;
          if (*(FScriptContainerElement **)(_Dst + 0x38) != (FScriptContainerElement *)0x0) {
            pFVar7 = *(FScriptContainerElement **)(_Dst + 0x38);
          }
          (**(code **)(*(longlong *)pFVar7 + 0x10))();
        }
        iVar6 = (this->UserManagedFrames).ArrayNum + ~uVar9;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + 0x40,(longlong)iVar6 << 6);
        }
        piVar1 = &(this->UserManagedFrames).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,&pTVar10->AllocatorInstance,(this->UserManagedFrames).ArrayNum,
                   &(this->UserManagedFrames).ArrayMax);
        bVar4 = true;
      }
      lVar11 = lVar11 + -0x40;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
    if ((bVar4) && (param_1 != (FVideoEncoderInputFrame *)0x0)) {
      (**(code **)(param_1->_padding_ + 0x10))(param_1,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d097f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Flush @ 148d0a970

void __thiscall AVEncoder::FVideoEncoderInputImpl::Flush(FVideoEncoderInputImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TNode *pTVar1;
  TNode *pTVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  lpCriticalSection = &this->ProtectFrames;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    while (pTVar1 = ((this->AvailableFrames).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
      pTVar2 = (this->AvailableFrames).Tail;
      (this->AvailableFrames).Tail = pTVar1;
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&pTVar1->Item != (TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1> *)&local_18) {
        (pTVar1->Item).Object = (FVideoEncoderInputFrameImpl *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pTVar1->Item).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
      if (pTVar2 != (TNode *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar2->Item).SharedReferenceCount.ReferenceController);
        ::operator_delete(pTVar2,0x18);
      }
    }
    *(undefined4 *)&this->_padding_ = 0;
                    /* WARNING: Could not recover jumptable at 0x000148d0aa26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetAvailableEncoders @ 148d0ae60

TArray<AVEncoder::FVideoEncoderInfo,TSizedDefaultAllocator<32>_> * __thiscall
AVEncoder::FVideoEncoderInputImpl::GetAvailableEncoders(FVideoEncoderInputImpl *this)

{
  return &this->AvailableEncoders;
}

// GetCUDAEncoderContext @ 148d0af60

CUctx_st * __thiscall
AVEncoder::FVideoEncoderInputImpl::GetCUDAEncoderContext(FVideoEncoderInputImpl *this)

{
  return (this->FrameInfoCUDA).EncoderContextCUDA;
}

// GetD3D11EncoderDevice @ 148d0b1a0

TRefCountPtr<ID3D11Device> __thiscall
AVEncoder::FVideoEncoderInputImpl::GetD3D11EncoderDevice(FVideoEncoderInputImpl *this)

{
  ID3D11Device IVar1;
  ID3D11Device *in_RDX;
  
  *in_RDX = (ID3D11Device)0x0;
  IVar1 = (ID3D11Device)(this->FrameInfoD3D).EncoderDeviceD3D11.Reference;
  *in_RDX = IVar1;
  if (IVar1 != (ID3D11Device)0x0) {
    (**(code **)(*(longlong *)IVar1 + 8))();
  }
  return (TRefCountPtr<ID3D11Device>)in_RDX;
}

// GetD3D12EncoderDevice @ 148d0b1e0

TRefCountPtr<ID3D12Device> __thiscall
AVEncoder::FVideoEncoderInputImpl::GetD3D12EncoderDevice(FVideoEncoderInputImpl *this)

{
  ID3D12Device IVar1;
  ID3D12Device *in_RDX;
  
  *in_RDX = (ID3D12Device)0x0;
  IVar1 = (ID3D12Device)(this->FrameInfoD3D).EncoderDeviceD3D12.Reference;
  *in_RDX = IVar1;
  if (IVar1 != (ID3D12Device)0x0) {
    (**(code **)(*(longlong *)IVar1 + 8))();
  }
  return (TRefCountPtr<ID3D12Device>)in_RDX;
}

// GetVulkanEncoderDevice @ 148d0beb0

void * __thiscall
AVEncoder::FVideoEncoderInputImpl::GetVulkanEncoderDevice(FVideoEncoderInputImpl *this)

{
  return &this->FrameInfoVulkan;
}

// IsUserManagedFrame @ 148d0d3a0

bool __thiscall
AVEncoder::FVideoEncoderInputImpl::IsUserManagedFrame
          (FVideoEncoderInputImpl *this,FVideoEncoderInputFrame *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  lpCriticalSection = &this->ProtectFrames;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = (this->UserManagedFrames).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar5 = (longlong)(int)uVar6 << 6;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->UserManagedFrames).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(FVideoEncoderInputFrame **)((this->UserManagedFrames).AllocatorInstance.Data + lVar5) ==
          param_1) {
        bVar2 = true;
        goto LAB_148d0d454;
      }
      lVar5 = lVar5 + -0x40;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  bVar2 = false;
LAB_148d0d454:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// ObtainInputFrame @ 148d0fa10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> * __thiscall
AVEncoder::FVideoEncoderInputImpl::ObtainInputFrame
          (FVideoEncoderInputImpl *this,
          TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1> *pTVar1;
  int *piVar2;
  TArray<TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FVideoEncoderInputFrameImpl *pFVar9;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  FVideoEncoderInputFrameImpl *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  
  lpCriticalSection = &this->ProtectFrames;
  local_48 = (FVideoEncoderInputFrameImpl *)0x0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->AvailableFrames).Tail)->NextNode == (TNode *)0x0) {
    pFVar9 = CreateFrame(this);
    local_20.ReferenceController = ::operator_new(0x18);
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      (local_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_20.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFVideoEncoderInputFrameImpl_AVEncoder__U__DefaultDeleter_VFVideoEncoderInputFrameImpl_AVEncoder___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      (local_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      local_20.ReferenceController[1]._padding_ = (longlong)pFVar9;
    }
    local_28 = 0;
    local_48 = pFVar9;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    if (5 < (byte)LogVideoEncoder._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
    }
  }
  else {
    pTVar4 = ((this->AvailableFrames).Tail)->NextNode;
    if (pTVar4 != (TNode *)0x0) {
      pTVar1 = &pTVar4->Item;
      if ((TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1> *)&local_48 != pTVar1) {
        local_48 = pTVar1->Object;
        pTVar1->Object = (FVideoEncoderInputFrameImpl *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_40,&(pTVar4->Item).SharedReferenceCount);
      }
      pTVar5 = (this->AvailableFrames).Tail;
      (this->AvailableFrames).Tail = pTVar4;
      local_38 = 0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1> *)&local_38) {
        pTVar1->Object = (FVideoEncoderInputFrameImpl *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pTVar4->Item).SharedReferenceCount,&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      if (pTVar5 != (TNode *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar5->Item).SharedReferenceCount.ReferenceController);
        ::operator_delete(pTVar5,0x18);
      }
    }
  }
  pTVar3 = &this->ActiveFrames;
  pFVar11 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar11 + (longlong)(this->ActiveFrames).ArrayMax * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  iVar8 = (this->ActiveFrames).ArrayNum;
  piVar2 = &(this->ActiveFrames).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->ActiveFrames).ArrayNum = iVar8 + 1;
  pFVar11 = (pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(FVideoEncoderInputFrameImpl **)pFVar11 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar11 + 8) = FStack_40.ReferenceController;
  if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_48 == (FVideoEncoderInputFrameImpl *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  iVar8 = (int)this->_padding_;
  *(int *)&this->_padding_ = iVar8 + 1;
  *(int *)&local_48->_padding_ = iVar8;
  if ((int)this->_padding_ == 0) {
    *(undefined4 *)&this->_padding_ = 1;
  }
  if (local_48 == (FVideoEncoderInputFrameImpl *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  LOCK();
  *(int *)&local_48->_padding_ = (int)local_48->_padding_ + 1;
  UNLOCK();
  __return_storage_ptr__->Object = (FVideoEncoderInputFrame *)local_48;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FStack_40.ReferenceController
  ;
  if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  return __return_storage_ptr__;
}

// ReleaseInputFrame @ 148d11b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AVEncoder::FVideoEncoderInputImpl::ReleaseInputFrame
          (FVideoEncoderInputImpl *this,FVideoEncoderInputFrame *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FVideoEncoderInputFrame *pFVar3;
  TNode *pTVar4;
  bool bVar5;
  undefined8 uVar6;
  TNode *pTVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res8 [8];
  FVideoEncoderInputFrame *local_res10;
  FVideoEncoderInputFrame *local_res20;
  FVideoEncoderInputFrameImpl *local_58;
  TReferenceControllerBase<1> *local_50;
  
  local_res10 = param_1;
  if (&this->ProtectFrames == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ProtectFrames);
  iVar13 = (this->UserManagedFrames).ArrayNum;
  pFVar12 = (this->UserManagedFrames).AllocatorInstance.Data;
  pFVar8 = pFVar12 + (longlong)iVar13 * 0x40;
  while( true ) {
    if ((this->UserManagedFrames).ArrayNum != iVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<AVEncoder::FVideoEncoderInputFrameImpl_*,TFunction<void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar8) {
      pFVar12 = (this->ActiveFrames).AllocatorInstance.Data;
      pFVar8 = pFVar12 + (longlong)(this->ActiveFrames).ArrayNum * 0x10;
      goto joined_r0x000148d11bf4;
    }
    if (*(FVideoEncoderInputFrame **)pFVar12 == param_1) break;
    pFVar12 = pFVar12 + 0x40;
  }
  local_res20 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)(pFVar12 + 0x10));
  pcVar1 = *(code **)(pFVar12 + 0x10);
  pFVar8 = pFVar12 + 0x20;
  if (*(FScriptContainerElement **)(pFVar12 + 0x38) != (FScriptContainerElement *)0x0) {
    pFVar8 = *(FScriptContainerElement **)(pFVar12 + 0x38);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar8 + 8))();
  (*pcVar1)(uVar6,&local_res20);
LAB_148d11ecb:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ProtectFrames);
  return;
joined_r0x000148d11bf4:
  if (pFVar12 == pFVar8) goto LAB_148d11ecb;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
  pFVar3 = *(FVideoEncoderInputFrame **)pFVar12;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pFVar3 == param_1) {
    local_58 = *(FVideoEncoderInputFrameImpl **)pFVar12;
    local_50 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    if (local_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar12 = (this->ActiveFrames).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar12 + (longlong)(this->ActiveFrames).ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar13 = (this->ActiveFrames).ArrayNum;
    lVar9 = (longlong)iVar13;
    if (iVar13 == 0) {
      iVar13 = 0;
      goto LAB_148d11db4;
    }
    pFVar12 = (this->ActiveFrames).AllocatorInstance.Data;
    iVar15 = 0;
    bVar5 = *(FVideoEncoderInputFrameImpl **)pFVar12 != local_58;
    lVar14 = 0;
    iVar10 = 0;
    do {
      lVar14 = lVar14 + 1;
      iVar11 = iVar10 + 1;
      if (lVar14 < lVar9) {
        pFVar8 = pFVar12 + lVar14 * 0x10;
        do {
          if (bVar5 != (*(FVideoEncoderInputFrameImpl **)pFVar8 != local_58)) break;
          iVar11 = iVar11 + 1;
          lVar14 = lVar14 + 1;
          pFVar8 = pFVar8 + 0x10;
        } while (lVar14 < lVar9);
      }
      iVar16 = iVar11 - iVar10;
      if (bVar5 == false) {
        DestructItems<TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1>,int>
                  ((TSharedPtr<AVEncoder::FVideoEncoderInputFrameImpl,1> *)
                   (pFVar12 + (longlong)iVar10 * 0x10),iVar16);
      }
      else {
        if (iVar15 != iVar10) {
          memmove(pFVar12 + (longlong)iVar15 * 0x10,pFVar12 + (longlong)iVar10 * 0x10,
                  (longlong)iVar16 << 4);
        }
        iVar15 = iVar15 + iVar16;
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar10 = iVar11;
    } while (lVar14 < lVar9);
    (this->ActiveFrames).ArrayNum = iVar15;
    iVar13 = iVar13 - iVar15;
    if (iVar13 != 1) {
LAB_148d11db4:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRemoved == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                         ,0x269,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (0 < iVar13) {
      if (local_res10->Format == (EVideoFrameFormat)this->_padding_) {
        if ((((this->AvailableFrames).Tail)->NextNode == (TNode *)0x0) ||
           ((uint)this->_padding_ <= *(uint *)((longlong)&this->_padding_ + 4))) {
          pTVar7 = ::operator_new(0x18);
          if (pTVar7 != (TNode *)0x0) {
            pTVar7->NextNode = (TNode *)0x0;
            (pTVar7->Item).Object = local_58;
            (pTVar7->Item).SharedReferenceCount.ReferenceController = local_50;
            if (local_50 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_50->SharedReferenceCount =
                   (atomic<int>)((int)local_50->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar4 = (this->AvailableFrames).Head;
            (this->AvailableFrames).Head = pTVar7;
            pTVar4->NextNode = pTVar7;
          }
        }
        else {
          LeaveCriticalSection((LPCRITICAL_SECTION)&this->ProtectFrames);
          *(int *)&this->_padding_ = (int)this->_padding_ + -1;
          if (5 < (byte)LogVideoEncoder._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
          }
        }
      }
      else {
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->ProtectFrames);
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
        if (5 < (byte)LogVideoEncoder._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    goto LAB_148d11ecb;
  }
  pFVar12 = pFVar12 + 0x10;
  goto joined_r0x000148d11bf4;
}

// SetupForCUDA @ 148d139b0

bool __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupForCUDA(FVideoEncoderInputImpl *this,void *param_1)

{
  (this->FrameInfoCUDA).EncoderContextCUDA = param_1;
  *(undefined4 *)&this->_padding_ = 4;
  CollectAvailableEncoders(this);
  return true;
}

// SetupForD3D11 @ 148d139e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupForD3D11(FVideoEncoderInputImpl *this,void *param_1)

{
  TRefCountPtr<ID3D11DeviceContext> *pTVar1;
  FFrameInfoD3D *pFVar2;
  code *pcVar3;
  ID3D11DeviceContext *pIVar4;
  ID3D11Device *pIVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  int iVar8;
  FString *pFVar9;
  FStaticBasicLogRecord *pFVar10;
  bool bVar11;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  longlong *local_res20;
  longlong *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_88 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  iVar8 = (*(code *)**(undefined8 **)param_1)
                    (param_1,&_GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,&local_88);
  plVar7 = local_88;
  if (iVar8 == 0) {
    pcVar3 = *(code **)(*local_88 + 0x38);
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x10))();
    }
    iVar8 = (*pcVar3)(plVar7,&local_res20);
    if (iVar8 == 0) {
      pIVar4 = (this->FrameInfoD3D).EncoderDeviceContextD3D11.Reference;
      pTVar1 = &(this->FrameInfoD3D).EncoderDeviceContextD3D11;
      local_res10[0] = 0xb000;
      if (pIVar4 != (ID3D11DeviceContext *)0x0) {
        pTVar1->Reference = (ID3D11DeviceContext *)0x0;
        (**(code **)((longlong)*pIVar4 + 0x10))();
      }
      pIVar5 = (this->FrameInfoD3D).EncoderDeviceD3D11.Reference;
      pFVar2 = &this->FrameInfoD3D;
      if (pIVar5 != (ID3D11Device *)0x0) {
        (pFVar2->EncoderDeviceD3D11).Reference = (ID3D11Device *)0x0;
        (**(code **)((longlong)*pIVar5 + 0x10))();
      }
      iVar8 = D3D11CreateDevice(local_res20,0,0,0,local_res10,1,7,pFVar2,local_res18,pTVar1);
      if (iVar8 == 0) {
        pFVar9 = ::FString::FString(&local_50,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                                   );
        FPaths::GetCleanFilename(&local_60,pFVar9);
        ::FString::FString(&local_70,"FVideoEncoderInputImpl");
        ::FString::PrintfImpl(&local_80,L"%s (%s:%d)");
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        pIVar5 = (pFVar2->EncoderDeviceD3D11).Reference;
        iVar8 = local_80.Data.ArrayNum + -1;
        FVar6.Data = local_80.Data.AllocatorInstance.Data;
        if (local_80.Data.ArrayNum == 0) {
          iVar8 = 0;
          FVar6.Data = (FScriptContainerElement *)L"";
        }
        (**(code **)((longlong)*pIVar5 + 0x118))(pIVar5,&_D3DDebugObjectNameW,iVar8 * 2,FVar6.Data);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        pFVar9 = ::FString::FString(&local_70,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                                   );
        FPaths::GetCleanFilename(&local_60,pFVar9);
        ::FString::FString(&local_50,"FVideoEncoderInputImpl");
        ::FString::PrintfImpl(&local_80,L"%s (%s:%d)");
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        iVar8 = local_80.Data.ArrayNum + -1;
        FVar6.Data = local_80.Data.AllocatorInstance.Data;
        if (local_80.Data.ArrayNum == 0) {
          iVar8 = 0;
          FVar6.Data = (FScriptContainerElement *)L"";
        }
        (**(code **)((longlong)*pTVar1->Reference + 0x28))
                  (pTVar1->Reference,&_D3DDebugObjectNameW,iVar8 * 2,FVar6.Data);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        *(undefined4 *)&this->_padding_ = 2;
        CollectAvailableEncoders(this);
        bVar11 = true;
        goto LAB_148d13d4c;
      }
      if (1 < (byte)LogVideoEncoder._0_1_) {
        GetComErrorDescription(&local_80,iVar8);
        pFVar10 = &::LOG_Static;
        goto LAB_148d13b7a;
      }
    }
    else if (1 < (byte)LogVideoEncoder._0_1_) {
      pFVar9 = GetComErrorDescription(&local_80,iVar8);
      if ((pFVar9->Data).ArrayNum == 0) {
        pFVar10 = &::LOG_Static;
      }
      else {
        pFVar10 = &::LOG_Static;
      }
      goto LAB_148d13b7a;
    }
  }
  else if (1 < (byte)LogVideoEncoder._0_1_) {
    pFVar9 = GetComErrorDescription(&local_80,iVar8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pFVar10 = &::LOG_Static;
    }
    else {
      pFVar10 = &::LOG_Static;
    }
LAB_148d13b7a:
    UE::Logging::Private::BasicLog<2>(pFVar10,(FLogCategoryBase *)&LogVideoEncoder);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  bVar11 = false;
LAB_148d13d4c:
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  return bVar11;
}

// SetupForD3D11Shared @ 148d13db0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupForD3D11Shared(FVideoEncoderInputImpl *this,void *param_1)

{
  TRefCountPtr<ID3D11DeviceContext> *pTVar1;
  FFrameInfoD3D *pFVar2;
  code *pcVar3;
  ID3D11DeviceContext *pIVar4;
  ID3D11Device *pIVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  int iVar8;
  FString *pFVar9;
  FStaticBasicLogRecord *pFVar10;
  bool bVar11;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  longlong *local_res20;
  longlong *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_88 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  iVar8 = (*(code *)**(undefined8 **)param_1)
                    (param_1,&_GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,&local_88);
  plVar7 = local_88;
  if (iVar8 == 0) {
    pcVar3 = *(code **)(*local_88 + 0x38);
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x10))();
    }
    iVar8 = (*pcVar3)(plVar7,&local_res20);
    if (iVar8 == 0) {
      pIVar4 = (this->FrameInfoD3D).EncoderDeviceContextD3D11.Reference;
      pTVar1 = &(this->FrameInfoD3D).EncoderDeviceContextD3D11;
      local_res10[0] = 0xb100;
      if (pIVar4 != (ID3D11DeviceContext *)0x0) {
        pTVar1->Reference = (ID3D11DeviceContext *)0x0;
        (**(code **)((longlong)*pIVar4 + 0x10))();
      }
      pIVar5 = (this->FrameInfoD3D).EncoderDeviceD3D11.Reference;
      pFVar2 = &this->FrameInfoD3D;
      if (pIVar5 != (ID3D11Device *)0x0) {
        (pFVar2->EncoderDeviceD3D11).Reference = (ID3D11Device *)0x0;
        (**(code **)((longlong)*pIVar5 + 0x10))();
      }
      iVar8 = D3D11CreateDevice(local_res20,0,0,0,local_res10,1,7,pFVar2,local_res18,pTVar1);
      if (iVar8 == 0) {
        pFVar9 = ::FString::FString(&local_50,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                                   );
        FPaths::GetCleanFilename(&local_60,pFVar9);
        ::FString::FString(&local_70,"FVideoEncoderInputImpl");
        ::FString::PrintfImpl(&local_80,L"%s (%s:%d)");
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        pIVar5 = (pFVar2->EncoderDeviceD3D11).Reference;
        iVar8 = local_80.Data.ArrayNum + -1;
        FVar6.Data = local_80.Data.AllocatorInstance.Data;
        if (local_80.Data.ArrayNum == 0) {
          iVar8 = 0;
          FVar6.Data = (FScriptContainerElement *)L"";
        }
        (**(code **)((longlong)*pIVar5 + 0x118))(pIVar5,&_D3DDebugObjectNameW,iVar8 * 2,FVar6.Data);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        pFVar9 = ::FString::FString(&local_70,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                                   );
        FPaths::GetCleanFilename(&local_60,pFVar9);
        ::FString::FString(&local_50,"FVideoEncoderInputImpl");
        ::FString::PrintfImpl(&local_80,L"%s (%s:%d)");
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        iVar8 = local_80.Data.ArrayNum + -1;
        FVar6.Data = local_80.Data.AllocatorInstance.Data;
        if (local_80.Data.ArrayNum == 0) {
          iVar8 = 0;
          FVar6.Data = (FScriptContainerElement *)L"";
        }
        (**(code **)((longlong)*pTVar1->Reference + 0x28))
                  (pTVar1->Reference,&_D3DDebugObjectNameW,iVar8 * 2,FVar6.Data);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        *(undefined4 *)&this->_padding_ = 2;
        CollectAvailableEncoders(this);
        bVar11 = true;
        goto LAB_148d1411c;
      }
      if (1 < (byte)LogVideoEncoder._0_1_) {
        GetComErrorDescription(&local_80,iVar8);
        pFVar10 = &::LOG_Static;
        goto LAB_148d13f4a;
      }
    }
    else if (1 < (byte)LogVideoEncoder._0_1_) {
      pFVar9 = GetComErrorDescription(&local_80,iVar8);
      if ((pFVar9->Data).ArrayNum == 0) {
        pFVar10 = &::LOG_Static;
      }
      else {
        pFVar10 = &::LOG_Static;
      }
      goto LAB_148d13f4a;
    }
  }
  else if (1 < (byte)LogVideoEncoder._0_1_) {
    pFVar9 = GetComErrorDescription(&local_80,iVar8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pFVar10 = &::LOG_Static;
    }
    else {
      pFVar10 = &::LOG_Static;
    }
LAB_148d13f4a:
    UE::Logging::Private::BasicLog<2>(pFVar10,(FLogCategoryBase *)&LogVideoEncoder);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  bVar11 = false;
LAB_148d1411c:
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  return bVar11;
}

// SetupForD3D12 @ 148d14180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupForD3D12(FVideoEncoderInputImpl *this,void *param_1)

{
  ID3D12Device *pIVar1;
  int iVar2;
  FString *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  bool bVar5;
  longlong *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  FString local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x158))(param_1,&local_res20);
  local_res18 = (longlong *)0x0;
  iVar2 = CreateDXGIFactory(&_GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a,&local_res18);
  if (iVar2 != 0) {
    if (1 < (byte)LogVideoEncoder._0_1_) {
      GetComErrorDescription(&local_18,iVar2);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
    goto LAB_148d14325;
  }
  local_res10 = (longlong *)0x0;
  iVar2 = (**(code **)(*local_res18 + 0xd0))
                    (local_res18,local_res20,&_GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
                     &local_res10);
  if (iVar2 == 0) {
    pIVar1 = (this->FrameInfoD3D).EncoderDeviceD3D12.Reference;
    if (pIVar1 != (ID3D12Device *)0x0) {
      (this->FrameInfoD3D).EncoderDeviceD3D12.Reference = (ID3D12Device *)0x0;
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    iVar2 = D3D12CreateDevice(local_res10,0xc000,&_GUID_189819f1_1db6_4b57_be54_1821339b85f7,
                              &(this->FrameInfoD3D).EncoderDeviceD3D12);
    if (iVar2 != 0) {
      if (1 < (byte)LogVideoEncoder._0_1_) {
        GetComErrorDescription(&local_18,iVar2);
        pFVar4 = &::LOG_Static;
        goto LAB_148d142e2;
      }
      goto LAB_148d14300;
    }
    *(undefined4 *)&this->_padding_ = 3;
    CollectAvailableEncoders(this);
    bVar5 = true;
  }
  else {
    if (1 < (byte)LogVideoEncoder._0_1_) {
      pFVar3 = GetComErrorDescription(&local_18,iVar2);
      if ((pFVar3->Data).ArrayNum == 0) {
        pFVar4 = &::LOG_Static;
      }
      else {
        pFVar4 = &::LOG_Static;
      }
LAB_148d142e2:
      UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogVideoEncoder);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
LAB_148d14300:
    bVar5 = false;
  }
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x10))();
  }
LAB_148d14325:
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x10))();
  }
  return bVar5;
}

// SetupForD3D12Shared @ 148d14350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupForD3D12Shared(FVideoEncoderInputImpl *this,void *param_1)

{
  TRefCountPtr<ID3D11DeviceContext> *pTVar1;
  FFrameInfoD3D *pFVar2;
  ID3D11DeviceContext *pIVar3;
  ID3D11Device *pIVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FString *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  bool bVar9;
  undefined4 local_res10 [2];
  int local_res18 [2];
  longlong *local_res20;
  longlong *local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x158))(param_1,&local_80);
  local_88 = (longlong *)0x0;
  iVar6 = CreateDXGIFactory(&_GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a,&local_88);
  if (iVar6 != 0) {
    if (1 < (byte)LogVideoEncoder._0_1_) {
      GetComErrorDescription(&local_78,iVar6);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    bVar9 = false;
    goto LAB_148d14757;
  }
  local_res20 = (longlong *)0x0;
  iVar6 = (**(code **)(*local_88 + 0xd0))
                    (local_88,local_80,&_GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,&local_res20);
  if (iVar6 == 0) {
    pIVar3 = (this->FrameInfoD3D).EncoderDeviceContextD3D11.Reference;
    pTVar1 = &(this->FrameInfoD3D).EncoderDeviceContextD3D11;
    local_res10[0] = 0xb100;
    if (pIVar3 != (ID3D11DeviceContext *)0x0) {
      pTVar1->Reference = (ID3D11DeviceContext *)0x0;
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    pIVar4 = (this->FrameInfoD3D).EncoderDeviceD3D11.Reference;
    pFVar2 = &this->FrameInfoD3D;
    if (pIVar4 != (ID3D11Device *)0x0) {
      (pFVar2->EncoderDeviceD3D11).Reference = (ID3D11Device *)0x0;
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    iVar6 = D3D11CreateDevice(local_res20,0,0,0,local_res10,1,7,pFVar2,local_res18,pTVar1);
    if (iVar6 == 0) {
      if (local_res18[0] == 0xb100) {
        pFVar7 = ::FString::FString(&local_48,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                                   );
        FPaths::GetCleanFilename(&local_58,pFVar7);
        ::FString::FString(&local_68,"FVideoEncoderInputImpl");
        ::FString::PrintfImpl(&local_78,L"%s (%s:%d)");
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pIVar4 = (pFVar2->EncoderDeviceD3D11).Reference;
        iVar6 = local_78.Data.ArrayNum + -1;
        FVar5.Data = local_78.Data.AllocatorInstance.Data;
        if (local_78.Data.ArrayNum == 0) {
          iVar6 = 0;
          FVar5.Data = (FScriptContainerElement *)L"";
        }
        (**(code **)((longlong)*pIVar4 + 0x118))(pIVar4,&_D3DDebugObjectNameW,iVar6 * 2,FVar5.Data);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        pFVar7 = ::FString::FString(&local_68,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                                   );
        FPaths::GetCleanFilename(&local_58,pFVar7);
        ::FString::FString(&local_48,"FVideoEncoderInputImpl");
        ::FString::PrintfImpl(&local_78,L"%s (%s:%d)");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        iVar6 = local_78.Data.ArrayNum + -1;
        FVar5.Data = local_78.Data.AllocatorInstance.Data;
        if (local_78.Data.ArrayNum == 0) {
          iVar6 = 0;
          FVar5.Data = (FScriptContainerElement *)L"";
        }
        (**(code **)((longlong)*pTVar1->Reference + 0x28))
                  (pTVar1->Reference,&_D3DDebugObjectNameW,iVar6 * 2,FVar5.Data);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        *(undefined4 *)&this->_padding_ = 2;
        CollectAvailableEncoders(this);
        bVar9 = true;
        goto LAB_148d14738;
      }
      if (1 < (byte)LogVideoEncoder._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
      }
      pIVar4 = (pFVar2->EncoderDeviceD3D11).Reference;
      if (pIVar4 != (ID3D11Device *)0x0) {
        (pFVar2->EncoderDeviceD3D11).Reference = (ID3D11Device *)0x0;
        (**(code **)((longlong)*pIVar4 + 0x10))();
      }
      pIVar3 = pTVar1->Reference;
      if (pIVar3 != (ID3D11DeviceContext *)0x0) {
        pTVar1->Reference = (ID3D11DeviceContext *)0x0;
        (**(code **)((longlong)*pIVar3 + 0x10))();
      }
    }
    else if (1 < (byte)LogVideoEncoder._0_1_) {
      GetComErrorDescription(&local_78,iVar6);
      pFVar8 = &::LOG_Static;
      goto LAB_148d1451a;
    }
LAB_148d14585:
    bVar9 = false;
  }
  else {
    if ((byte)LogVideoEncoder._0_1_ < 2) goto LAB_148d14585;
    pFVar7 = GetComErrorDescription(&local_78,iVar6);
    if ((pFVar7->Data).ArrayNum == 0) {
      pFVar8 = &::LOG_Static;
    }
    else {
      pFVar8 = &::LOG_Static;
    }
LAB_148d1451a:
    UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogVideoEncoder);
    if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_148d14585;
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    bVar9 = false;
  }
LAB_148d14738:
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
  }
LAB_148d14757:
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  return bVar9;
}

// SetupForDummy @ 148d147a0

bool __thiscall AVEncoder::FVideoEncoderInputImpl::SetupForDummy(FVideoEncoderInputImpl *this)

{
  *(undefined4 *)&this->_padding_ = 0;
  return true;
}

// SetupForVulkan @ 148d147b0

bool __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupForVulkan
          (FVideoEncoderInputImpl *this,VkInstance_T *param_1,VkPhysicalDevice_T *param_2,
          VkDevice_T *param_3)

{
  (this->FrameInfoVulkan).VulkanInstance = param_1;
  (this->FrameInfoVulkan).VulkanPhysicalDevice = param_2;
  (this->FrameInfoVulkan).VulkanDevice = param_3;
  *(undefined4 *)&this->_padding_ = 5;
  CollectAvailableEncoders(this);
  return true;
}

// SetupForYUV420P @ 148d147e0

bool __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupForYUV420P
          (FVideoEncoderInputImpl *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  *(undefined4 *)&this->_padding_ = 1;
  uVar1 = param_1 + 1 >> 1;
  (this->FrameInfoYUV420P).StrideU = uVar1;
  (this->FrameInfoYUV420P).StrideV = uVar1;
  (this->FrameInfoYUV420P).StrideY = param_1;
  CollectAvailableEncoders(this);
  return true;
}

// SetupFrameCUDA @ 148d14810

void __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupFrameCUDA
          (FVideoEncoderInputImpl *this,FVideoEncoderInputFrameImpl *param_1)

{
  *(int *)((longlong)&param_1->_padding_ + 4) = (int)this->_padding_;
  param_1->_padding_ = (longlong)(this->FrameInfoCUDA).EncoderContextCUDA;
  return;
}

// SetupFrameD3D11 @ 148d14830

void __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupFrameD3D11
          (FVideoEncoderInputImpl *this,FVideoEncoderInputFrameImpl *param_1)

{
  *(int *)((longlong)&param_1->_padding_ + 4) = (int)this->_padding_;
  param_1->_padding_ = (longlong)(this->FrameInfoD3D).EncoderDeviceD3D11.Reference;
  return;
}

// SetupFrameD3D12 @ 148d14850

void __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupFrameD3D12
          (FVideoEncoderInputImpl *this,FVideoEncoderInputFrameImpl *param_1)

{
  *(int *)((longlong)&param_1->_padding_ + 4) = (int)this->_padding_;
  if ((int)this->_padding_ == 2) {
    param_1->_padding_ = (longlong)(this->FrameInfoD3D).EncoderDeviceD3D11.Reference;
    return;
  }
  param_1->_padding_ = (longlong)(this->FrameInfoD3D).EncoderDeviceD3D12.Reference;
  return;
}

// SetupFrameVulkan @ 148d14880

void __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupFrameVulkan
          (FVideoEncoderInputImpl *this,FVideoEncoderInputFrameImpl *param_1)

{
  *(int *)((longlong)&param_1->_padding_ + 4) = (int)this->_padding_;
  param_1->_padding_ = (longlong)(this->FrameInfoVulkan).VulkanDevice;
  return;
}

// SetupFrameYUV420P @ 148d148a0

void __thiscall
AVEncoder::FVideoEncoderInputImpl::SetupFrameYUV420P
          (FVideoEncoderInputImpl *this,FVideoEncoderInputFrameImpl *param_1)

{
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
  *(uint *)&param_1->_padding_ = (this->FrameInfoYUV420P).StrideY;
  *(uint *)((longlong)&param_1->_padding_ + 4) = (this->FrameInfoYUV420P).StrideU;
  *(uint *)&param_1->_padding_ = (this->FrameInfoYUV420P).StrideV;
  param_1->_padding_ = 0;
  param_1->_padding_ = 0;
  param_1->_padding_ = 0;
  return;
}

