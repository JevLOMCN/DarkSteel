// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 12

// FVideoDecoderMPEG4_Impl @ 148d00360

FVideoDecoderMPEG4_Impl * __thiscall
AVEncoder::FVideoDecoderMPEG4_Impl::FVideoDecoderMPEG4_Impl(FVideoDecoderMPEG4_Impl *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = (TNode *)0x0;
  *(undefined ***)this = &_vftable__for__AVEncoder__FVideoDecoderMPEG4__;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)&this->field_0xa8 = &_vftable__for__vdecmpeg4__VIDStreamIO__;
  *(undefined ***)&this->field_0xb0 = &_vftable__for__vdecmpeg4__VIDStreamEvents__;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  pTVar1 = ::operator_new(0x10);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Ptr = (FInDecoderData *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Ptr = (FInDecoderData *)0x0;
    pTVar2 = pTVar1;
  }
  (this->PendingDecodeData).Tail = pTVar2;
  (this->PendingDecodeData).Head = pTVar2;
  (this->CurrentAU).Ptr = (FInDecoderData *)0x0;
  (this->DecoderSetup).size = 0;
  (this->DecoderSetup).flags = 0;
  (this->DecoderSetup).width = 0;
  (this->DecoderSetup).height = 0;
  (this->DecoderSetup).numOfVidBuffers = 0;
  (this->DecoderSetup)._reserved = 0;
  this->DecoderHandle = (void *)0x0;
  (this->DecoderSetup).cbMemAlloc = (_func___cdecl_void_ptr_uint_uint *)0x0;
  (this->DecoderSetup).cbMemFree = (_func___cdecl_void_void_ptr *)0x0;
  this->LastDecoderError = 0;
  (this->DecoderSetup).cbMemAllocLockedCache = (_func___cdecl_void_ptr_uint_uint *)0x0;
  (this->DecoderSetup).cbReport = (_func___cdecl_void_char_ptr *)0x0;
  this->bIsInitialized = false;
  this->bDataReaderAttached = false;
  return this;
}

// ~FVideoDecoderMPEG4_Impl @ 148d016d0

void __thiscall
AVEncoder::FVideoDecoderMPEG4_Impl::~FVideoDecoderMPEG4_Impl(FVideoDecoderMPEG4_Impl *this)

{
  FInDecoderData *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  *(undefined ***)this = &_vftable__for__AVEncoder__FVideoDecoderMPEG4__;
  *(undefined ***)&this->field_0xa8 = &_vftable__for__vdecmpeg4__VIDStreamIO__;
  *(undefined ***)&this->field_0xb0 = &_vftable__for__vdecmpeg4__VIDStreamEvents__;
  if (this->DecoderHandle != (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!DecoderHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoderMpeg4.cpp"
                       ,0xf6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->CurrentAU).Ptr;
  if (pFVar1 != (FInDecoderData *)0x0) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x28);
  }
  TQueue<TUniquePtr<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData,TDefaultDelete<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData>_>,1>
  ::
  ~TQueue<TUniquePtr<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData,TDefaultDelete<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData>_>,1>
            (&this->PendingDecodeData);
  FVideoDecoder::~FVideoDecoder((FVideoDecoder *)this);
  return;
}

// Decode @ 148d08790

/* WARNING: Enum "Type": Some values do not have unique names */

EDecodeResult __thiscall
AVEncoder::FVideoDecoderMPEG4_Impl::Decode
          (FVideoDecoderMPEG4_Impl *this,FVideoDecoderInput *param_1)

{
  TUniquePtr<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData,TDefaultDelete<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData>_>
  *pTVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  TNode *pTVar5;
  M4Decoder *this_00;
  longlong lVar6;
  code *pcVar7;
  VIDImage *pVVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  EDecodeResult EVar12;
  FInDecoderData *pFVar13;
  void *pvVar14;
  long64 lVar15;
  TNode *pTVar16;
  FInDecoderData *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined8 uVar19;
  TUniquePtr<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData,TDefaultDelete<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData>_>
  *pTVar20;
  longlong *plVar21;
  FInDecoderData *pFVar22;
  int iVar23;
  FInDecoderData *pFVar24;
  VIDImage *local_res8;
  FVideoDecoderInput *local_res10;
  undefined8 local_res18;
  FInDecoderData *local_res20;
  longlong local_b8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  undefined4 local_80;
  int local_7c;
  undefined8 local_78;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  
  if (*(longlong *)&this->field_0x10 == 0) {
    return Success;
  }
  pFVar24 = (FInDecoderData *)0x0;
  EVar12 = Success;
  local_res10 = param_1;
  if (this->bIsInitialized == false) {
    bVar9 = FVideoDecoder::CreateDecoderAllocationInterface((FVideoDecoder *)this);
    this->bIsInitialized = bVar9;
    if (bVar9) {
      (this->DecoderSetup).numOfVidBuffers = 5;
      (this->DecoderSetup)._reserved = 0;
      (this->DecoderSetup).cbMemAllocLockedCache = (_func___cdecl_void_ptr_uint_uint *)0x0;
      (this->DecoderSetup).cbMemAlloc = vidMalloc;
      (this->DecoderSetup).size = 0x30;
      (this->DecoderSetup).cbMemFree = vidFree;
      (this->DecoderSetup).cbReport = vidReport;
      (this->DecoderSetup).flags = 1;
      (this->DecoderSetup).width = 0;
      (this->DecoderSetup).height = 0;
      iVar11 = vdecmpeg4::VIDCreateDecoder(&this->DecoderSetup,&this->DecoderHandle);
      this->LastDecoderError = iVar11;
      if (iVar11 == 0) {
        this->bIsInitialized = true;
      }
      else if (1 < (byte)LogVideoDecoder._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      }
    }
  }
  if (this->bIsInitialized == false) {
    return Failure;
  }
  pFVar13 = ::operator_new(0x28);
  pFVar22 = pFVar24;
  if (pFVar13 != (FInDecoderData *)0x0) {
    pFVar13->DataOffset = 0;
    pFVar13->bIsKeyframe = false;
    pFVar13->bIsComplete = false;
    *(undefined2 *)&pFVar13->field_0x26 = 0;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
    pFVar13->PTS = 0;
    pFVar13->Width = 0;
    pFVar13->Height = 0;
    pFVar22 = pFVar13;
  }
  iVar11 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
  if (0 < iVar11) {
    iVar11 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar11,(ForAnyElementType *)pFVar22,&(pFVar22->Data).ArrayNum,
               &(pFVar22->Data).ArrayMax);
    iVar11 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
    pvVar14 = (void *)(**(code **)((longlong)*param_1 + 0x18))(param_1);
    memcpy((pFVar22->Data).AllocatorInstance.Data,pvVar14,(longlong)iVar11);
    pFVar22->DataOffset = 0;
    lVar15 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
    pFVar22->PTS = lVar15;
    iVar11 = (**(code **)*param_1)(param_1);
    pFVar22->Width = iVar11;
    iVar11 = (**(code **)((longlong)*param_1 + 8))(param_1);
    pFVar22->Height = iVar11;
    bVar9 = (bool)(**(code **)((longlong)*param_1 + 0x28))(param_1);
    pFVar22->bIsKeyframe = bVar9;
    bVar9 = (bool)(**(code **)((longlong)*param_1 + 0x30))(param_1);
    pFVar22->bIsComplete = bVar9;
    pTVar16 = ::operator_new(0x10);
    if (pTVar16 != (TNode *)0x0) {
      (pTVar16->Item).Ptr = pFVar22;
      pTVar16->NextNode = (TNode *)0x0;
      pTVar5 = (this->PendingDecodeData).Head;
      (this->PendingDecodeData).Head = pTVar16;
      pTVar5->NextNode = pTVar16;
      pFVar22 = pFVar24;
    }
LAB_148d089c0:
    pTVar20 = &this->CurrentAU;
    if (pTVar20->Ptr == (FInDecoderData *)0x0) {
      pTVar16 = ((this->PendingDecodeData).Tail)->NextNode;
      if (pTVar16 == (TNode *)0x0) goto LAB_148d08e66;
      pTVar1 = &pTVar16->Item;
      if (pTVar20 != pTVar1) {
        pFVar13 = pTVar20->Ptr;
        pTVar20->Ptr = pTVar1->Ptr;
        pTVar1->Ptr = (FInDecoderData *)0x0;
        if (pFVar13 != (FInDecoderData *)0x0) {
          pFVar18 = (pFVar13->Data).AllocatorInstance.Data;
          if (pFVar18 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar18);
          }
          ::operator_delete(pFVar13,0x28);
        }
      }
      pTVar5 = (this->PendingDecodeData).Tail;
      (this->PendingDecodeData).Tail = pTVar16;
      if (pTVar1 != (TUniquePtr<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData,TDefaultDelete<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData>_>
                     *)&local_b8) {
        pFVar13 = pTVar1->Ptr;
        pTVar1->Ptr = (FInDecoderData *)0x0;
        if (pFVar13 != (FInDecoderData *)0x0) {
          pFVar18 = (pFVar13->Data).AllocatorInstance.Data;
          if (pFVar18 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar18);
          }
          ::operator_delete(pFVar13,0x28);
        }
      }
      if (pTVar5 != (TNode *)0x0) {
        pFVar13 = (pTVar5->Item).Ptr;
        if (pFVar13 != (FInDecoderData *)0x0) {
          pFVar18 = (pFVar13->Data).AllocatorInstance.Data;
          if (pFVar18 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar18);
          }
          ::operator_delete(pFVar13,0x28);
        }
        ::operator_delete(pTVar5,0x10);
      }
    }
    local_res8 = (VIDImage *)0x0;
    if (this->bDataReaderAttached == false) {
      pvVar14 = this->DecoderHandle;
      pFVar17 = (FInDecoderData *)&this->field_0xa8;
      pFVar13 = (FInDecoderData *)&this->field_0xb0;
      if (this == (FVideoDecoderMPEG4_Impl *)0x0) {
        pFVar17 = pFVar24;
        pFVar13 = pFVar24;
      }
      if ((pvVar14 == (void *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("pDecoder",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                             ,0x8f,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        EVar12 = (*pcVar7)();
        return EVar12;
      }
      *(FInDecoderData **)((longlong)pvVar14 + 0x2e0) = pFVar17;
      if (pFVar17 != (FInDecoderData *)0x0) {
        vdecmpeg4::M4Bitstream::init
                  ((M4Bitstream *)((longlong)pvVar14 + 0x50),(VIDStreamIO *)pFVar17,0x800);
        vdecmpeg4::M4BitstreamParser::reset((M4BitstreamParser *)((longlong)pvVar14 + 0xa8));
      }
      *(FInDecoderData **)((longlong)pvVar14 + 0x2e8) = pFVar13;
      this->LastDecoderError = 0;
      this->bDataReaderAttached = true;
    }
    this_00 = this->DecoderHandle;
    if ((this_00 == (M4Decoder *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("pDecoder",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\vdecmpeg4\\M4Vid.cpp"
                           ,0xa1,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      EVar12 = (*pcVar7)();
      return EVar12;
    }
    iVar11 = vdecmpeg4::M4Decoder::StreamDecode(this_00,0.0,&local_res8);
    pVVar8 = local_res8;
    this->LastDecoderError = iVar11;
    if (iVar11 == 0) {
      if (local_res8 != (VIDImage *)0x0) {
        sVar3 = local_res8->width;
        iVar23 = (int)sVar3;
        sVar4 = local_res8->height;
        iVar11 = (int)sVar4;
        pFVar17 = ::operator_new(0xd0);
        pFVar13 = pFVar24;
        if (pFVar17 != (FInDecoderData *)0x0) {
          pFVar18 = (FScriptContainerElement *)(**(code **)((longlong)*local_res10 + 0x10))();
          (pFVar17->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)&___7FVideoDecoderOutputMPEG4_AVEncoder__6B_;
          pFVar17[4].PTS = 0;
          (pFVar17->Data).ArrayNum = 0;
          (pFVar17->Data).ArrayMax = 0;
          pFVar17->PTS = 0;
          pFVar17->Width = 0;
          pFVar17->Height = 0;
          pFVar17->DataOffset = 0;
          *(undefined8 *)&pFVar17->bIsKeyframe = 0;
          *(undefined8 *)((longlong)&pFVar17[1].Data.AllocatorInstance.Data + 4) = 0;
          *(undefined8 *)&pFVar17[1].Data.ArrayMax = 0;
          *(undefined8 *)((longlong)&pFVar17[1].PTS + 4) = 0;
          pFVar17[1].Height = 0;
          pFVar17[1].DataOffset = 0;
          *(undefined8 *)&pFVar17[1].bIsKeyframe = 0;
          *(undefined8 *)((longlong)&pFVar17[2].Data.AllocatorInstance.Data + 4) = 0;
          *(undefined8 *)&pFVar17[2].Data.ArrayMax = 0;
          *(undefined8 *)((longlong)&pFVar17[2].PTS + 4) = 0;
          pFVar17[2].Height = 0;
          pFVar17[2].DataOffset = 0;
          *(undefined8 *)&pFVar17[2].bIsKeyframe = 0;
          pFVar17[3].Width = 0;
          pFVar17[3].Height = 0;
          pFVar17[3].Data.ArrayNum = 0;
          pFVar17[3].Data.ArrayMax = 0;
          pFVar17[3].PTS = 0;
          pFVar17[4].Data.ArrayNum = 0;
          pFVar17[4].Data.ArrayMax = 0;
          pFVar17[3].DataOffset = 0;
          pFVar17[3].bIsKeyframe = false;
          pFVar17[3].bIsComplete = false;
          *(undefined2 *)&pFVar17[3].field_0x26 = 0;
          pFVar17[4].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar17[4].Width = 1;
          pFVar17[4].Height = iVar23;
          pFVar17[4].DataOffset = 0;
          pFVar17[4].bIsKeyframe = (bool)(char)iVar11;
          pFVar17[4].bIsComplete = (bool)(char)((uint)iVar11 >> 8);
          *(short *)&pFVar17[4].field_0x26 = (short)((uint)iVar11 >> 0x10);
          pFVar17[5].Data.AllocatorInstance.Data = pFVar18;
          pFVar13 = pFVar17;
        }
        local_64 = 0;
        local_5c = 0;
        local_80 = 0;
        local_78 = 0x10;
        local_68 = 1;
        local_7c = (iVar11 * iVar23 * 3) / 2;
        local_70 = iVar23;
        local_6c = iVar11;
        if (((0 < sVar3) && (0 < sVar4)) && (0 < local_7c)) {
          piVar2 = &(pFVar13->Data).ArrayNum;
          if ((piVar2 == (int *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("OutBuffer",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoder.cpp"
                                 ,0x56,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            EVar12 = (*pcVar7)();
            return EVar12;
          }
          lVar6 = *(longlong *)&this->field_0xa0;
          if (lVar6 != 0) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar6 + 0x10),
                       &local_b0);
            if (((*(int *)(lVar6 + 0x20) == 0) || (*(longlong **)(lVar6 + 0x18) == (longlong *)0x0))
               || (cVar10 = (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x38))(), cVar10 == '\0'))
            {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_b0);
            }
            else {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_b0);
              lVar6 = *(longlong *)&this->field_0xa0;
              local_res18 = *(undefined8 *)(lVar6 + 8);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar6 + 0x10),
                         &local_98);
              pFVar17 = pFVar24;
              if (*(int *)(lVar6 + 0x20) != 0) {
                pFVar17 = *(FInDecoderData **)(lVar6 + 0x18);
              }
              iVar11 = (**(code **)((pFVar17->Data).AllocatorInstance.Data + 0x60))
                                 (pFVar17,local_res18,&local_80,piVar2);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_98);
              if (iVar11 == 0) {
                lVar6._0_4_ = (pFVar13->Data).ArrayNum;
                lVar6._4_4_ = (pFVar13->Data).ArrayMax;
                if ((lVar6 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("pNew->GetBuffer()->AllocatedBuffer",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoderMpeg4.cpp"
                                       ,0x204,L""), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  EVar12 = (*pcVar7)();
                  return EVar12;
                }
                iVar11 = local_70;
                if (0 < *(int *)((longlong)&pFVar13->PTS + 4)) {
                  iVar11 = pFVar13->Height;
                }
                pFVar13[4].DataOffset = iVar11;
                CopyI420ToNV12((FVideoDecoderAllocFrameBufferResult *)&(pFVar13->Data).ArrayNum,
                               pVVar8);
                (**(code **)pVVar8->_padding_)(pVVar8);
                local_res20 = pFVar13;
                UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x10);
                pcVar7 = *(code **)&this->field_0x10;
                plVar21 = (longlong *)&this->field_0x20;
                if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
                  plVar21 = *(longlong **)&this->field_0x38;
                }
                uVar19 = (**(code **)(*plVar21 + 8))();
                (*pcVar7)(uVar19,&local_res20);
                goto LAB_148d08de5;
              }
            }
          }
        }
        if (pFVar13 != (FInDecoderData *)0x0) {
          (**(code **)((pFVar13->Data).AllocatorInstance.Data + 0x78))(pFVar13,1);
        }
        goto LAB_148d08e60;
      }
    }
    else if ((iVar11 + 0x7fff0ffeU & 0xfffffffd) != 0) goto LAB_148d08e44;
LAB_148d08de5:
    pFVar13 = (this->CurrentAU).Ptr;
    if (((pFVar13->Data).ArrayNum <= pFVar13->DataOffset) && (pFVar13 != (FInDecoderData *)0x0)) {
      (this->CurrentAU).Ptr = (FInDecoderData *)0x0;
      pFVar18 = (pFVar13->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      ::operator_delete(pFVar13,0x28);
    }
    goto LAB_148d089c0;
  }
LAB_148d08e60:
  EVar12 = Failure;
LAB_148d08e66:
  if (pFVar22 != (FInDecoderData *)0x0) {
    pFVar18 = (pFVar22->Data).AllocatorInstance.Data;
    if (pFVar18 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar18);
    }
    ::operator_delete(pFVar22,0x28);
  }
  return EVar12;
LAB_148d08e44:
  if (1 < (byte)LogVideoDecoder._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
  }
  goto LAB_148d08e60;
}

// FirstUseInit @ 148d0a880

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall AVEncoder::FVideoDecoderMPEG4_Impl::FirstUseInit(FVideoDecoderMPEG4_Impl *this)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (this->bIsInitialized == false) {
    bVar1 = FVideoDecoder::CreateDecoderAllocationInterface((FVideoDecoder *)this);
    this->bIsInitialized = bVar1;
    uVar2 = 0;
    if (bVar1) {
      (this->DecoderSetup).numOfVidBuffers = 5;
      (this->DecoderSetup)._reserved = 0;
      (this->DecoderSetup).cbMemAllocLockedCache = (_func___cdecl_void_ptr_uint_uint *)0x0;
      (this->DecoderSetup).size = 0x30;
      (this->DecoderSetup).cbMemAlloc = vidMalloc;
      (this->DecoderSetup).flags = 1;
      (this->DecoderSetup).width = 0;
      (this->DecoderSetup).height = 0;
      (this->DecoderSetup).cbMemFree = vidFree;
      (this->DecoderSetup).cbReport = vidReport;
      iVar3 = vdecmpeg4::VIDCreateDecoder(&this->DecoderSetup,&this->DecoderHandle);
      this->LastDecoderError = iVar3;
      if (iVar3 == 0) {
        this->bIsInitialized = true;
      }
      else if (1 < (byte)LogVideoDecoder._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
        return this->bIsInitialized;
      }
      return this->bIsInitialized;
    }
  }
  else {
    uVar2 = this->bIsInitialized;
  }
  return (bool)uVar2;
}

// FoundVideoObjectLayer @ 148d0aa40

void __thiscall
AVEncoder::FVideoDecoderMPEG4_Impl::FoundVideoObjectLayer
          (FVideoDecoderMPEG4_Impl *this,VOLInfo *param_1)

{
  return;
}

// IsEof @ 148d0d370

bool __thiscall AVEncoder::FVideoDecoderMPEG4_Impl::IsEof(FVideoDecoderMPEG4_Impl *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x28;
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 8) <= *(int *)(lVar1 + 0x20);
  }
  return false;
}

// Read @ 148d10800

VIDStreamResult __thiscall
AVEncoder::FVideoDecoderMPEG4_Impl::Read
          (FVideoDecoderMPEG4_Impl *this,uchar *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  VIDStreamResult VVar4;
  uint uVar5;
  uint uVar6;
  
  *param_3 = 0;
  plVar3 = *(longlong **)&this->field_0x28;
  if (plVar3 != (longlong *)0x0) {
    iVar1 = (int)plVar3[4];
    iVar2 = (int)plVar3[1];
    if (iVar1 < iVar2) {
      uVar5 = iVar2 - iVar1;
      if ((int)uVar5 < (int)param_2) {
        memcpy(param_1,(void *)((longlong)iVar1 + *plVar3),(ulonglong)uVar5);
        uVar6 = -uVar5 & 3;
        if (uVar6 != 0) {
          memset(param_1 + uVar5,0,(ulonglong)uVar6);
        }
        *param_3 = uVar5 + uVar6;
        *(int *)(plVar3 + 4) = iVar2;
      }
      else {
        memcpy(param_1,(void *)((longlong)iVar1 + *plVar3),(ulonglong)param_2);
        *param_3 = param_2;
        *(uint *)(plVar3 + 4) = (int)plVar3[4] + param_2;
      }
      VVar4 = VID_STREAM_OK;
    }
    else {
      VVar4 = VID_STREAM_EOF;
    }
    return VVar4;
  }
  return VID_STREAM_ERROR;
}

// Setup @ 148d137c0

bool __thiscall
AVEncoder::FVideoDecoderMPEG4_Impl::Setup(FVideoDecoderMPEG4_Impl *this,FInit *param_1)

{
  TFunction<void___cdecl(void_*,void_*_*)>::operator=
            ((TFunction<void___cdecl(void_*,void_*_*)> *)&this->field_0x40,
             &param_1->CreateDecoderAllocationInterface);
  TFunction<void___cdecl(void_*,void_*_*)>::operator=
            ((TFunction<void___cdecl(void_*,void_*_*)> *)&this->field_0x70,
             &param_1->ReleaseDecoderAllocationInterface);
  return true;
}

// Shutdown @ 148d14980

void __thiscall AVEncoder::FVideoDecoderMPEG4_Impl::Shutdown(FVideoDecoderMPEG4_Impl *this)

{
  M4Decoder *pMVar1;
  M4Decoder *local_res8 [4];
  M4MemHandler local_18;
  
  if (this->bIsInitialized != false) {
    pMVar1 = this->DecoderHandle;
    if (pMVar1 != (M4Decoder *)0x0) {
      local_18.mAllocCB = (pMVar1->mMemSys).mAllocCB;
      local_18.mFreeCB = (pMVar1->mMemSys).mFreeCB;
      local_res8[0] = pMVar1;
      vdecmpeg4::M4Decoder::destroy(local_res8,&local_18);
      this->DecoderHandle = (void *)0x0;
    }
    FVideoDecoder::ReleaseDecoderAllocationInterface((FVideoDecoder *)this);
    this->bIsInitialized = false;
  }
                    /* WARNING: Could not recover jumptable at 0x000148d149e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x28))(this,1);
  return;
}

// vidFree @ 148d1f430

void __cdecl AVEncoder::FVideoDecoderMPEG4_Impl::vidFree(void *param_1)

{
  uint uVar1;
  TMap<void_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>_>
  *this;
  
  if (param_1 != (void *)0x0) {
    this = Actives();
    uVar1 = TMap<void_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>_>
            ::FindAndRemoveChecked(this,param_1);
    sAllocSize = sAllocSize - uVar1;
    FMemory::Free(param_1);
  }
  return;
}

// vidMalloc @ 148d1f470

void * __cdecl AVEncoder::FVideoDecoderMPEG4_Impl::vidMalloc(uint param_1,uint param_2)

{
  TSet<TTuple<void_*,unsigned_int>,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>,FDefaultSetAllocator>
  *this;
  uint local_res8 [4];
  TPairInitializer<void_*_&,unsigned_int_&> local_res18;
  uint **local_18;
  uint *local_10;
  
  local_res8[0] = param_1;
  local_res18.Value = FMemory::MallocZeroed((ulonglong)param_1,param_2);
  this = (TSet<TTuple<void_*,unsigned_int>,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>,FDefaultSetAllocator>
          *)Actives();
  local_18 = &local_res18.Value;
  local_10 = local_res8;
  TSet<TTuple<void_*,unsigned_int>,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<void_*_&,unsigned_int_&>_>(this,&local_res18,(bool *)&local_18);
  sAllocSize = sAllocSize + local_res8[0];
  return local_res18.Value;
}

// vidReport @ 148d1f4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl AVEncoder::FVideoDecoderMPEG4_Impl::vidReport(char *param_1)

{
  size_t sVar1;
  undefined1 auStack_168 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138._padding_ = 0;
  if (param_1 == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar1 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_1,(int)sVar1,Yes);
  }
  ::FString::FString(&local_148,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (4 < (byte)LogVideoDecoder._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`protected:_static_void___cdecl_AVEncoder::FVideoDecoderMPEG4_Impl::vidReport(char_const*___ptr64)'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

