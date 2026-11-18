// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 10

// FWebMAudioDecoder @ 14f119b70

FWebMAudioDecoder * __thiscall
FWebMAudioDecoder::FWebMAudioDecoder(FWebMAudioDecoder *this,IWebMSamplesSink *param_1)

{
  TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1>
  *this_00;
  TNode *pTVar1;
  TRawPtrProxy<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage>
  local_res8;
  
  this_00 = ::operator_new(0x10);
  if (this_00 ==
      (TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1>
       *)0x0) {
    this_00 = (TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1>
               *)0x0;
  }
  else {
    local_res8.Object = ::operator_new(0x60);
    if (local_res8.Object == (TStorage *)0x0) {
      local_res8.Object = (TStorage *)0x0;
    }
    else {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_res8.Object,4000);
      ((local_res8.Object)->Pool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ((local_res8.Object)->Pool).ArrayNum = 0;
      ((local_res8.Object)->Pool).ArrayMax = 0;
      pTVar1 = ::operator_new(0x10);
      if (pTVar1 == (TNode *)0x0) {
        ((local_res8.Object)->WaitReadyForReuse).Tail = (TNode *)0x0;
        ((local_res8.Object)->WaitReadyForReuse).Head = (TNode *)0x0;
        (local_res8.Object)->ObjectAllocatorInstance =
             (TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample> *)0x0;
      }
      else {
        pTVar1->NextNode = (TNode *)0x0;
        pTVar1->Item = (FWebMMediaAudioSample *)0x0;
        pTVar1->NextNode = (TNode *)0x0;
        ((local_res8.Object)->WaitReadyForReuse).Tail = pTVar1;
        ((local_res8.Object)->WaitReadyForReuse).Head = pTVar1;
        (local_res8.Object)->ObjectAllocatorInstance =
             (TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample> *)0x0;
      }
    }
    TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1>
    ::
    TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1><TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage>
              (this_00,&local_res8);
  }
  (this->AudioSamplePool).Ptr = (FWebMMediaAudioSamplePool *)this_00;
  (this->VorbisDecoder).Ptr = (FVorbisDecoder *)0x0;
  (this->AudioDecodingTask).Reference = (FBaseGraphTask *)0x0;
  (this->DecodeBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OpusDecoder = (OpusDecoder *)0x0;
  (this->DecodeBuffer).ArrayNum = 0;
  (this->DecodeBuffer).ArrayMax = 0;
  this->Samples = param_1;
  return this;
}

// ~FWebMAudioDecoder @ 14f11a170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWebMAudioDecoder::~FWebMAudioDecoder(FWebMAudioDecoder *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FScriptContainerElement *pFVar4;
  FWebMMediaAudioSamplePool *pFVar5;
  FTaskGraphInterface *this_00;
  
  pFVar3 = (this->AudioDecodingTask).Reference;
  if ((pFVar3 != (FBaseGraphTask *)0x0) && (pFVar3->field_0xd0 == '\0')) {
    this_00 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes
              (this_00,&this->AudioDecodingTask,AnyNormalThreadNormalTask);
  }
  if (this->OpusDecoder != (OpusDecoder *)0x0) {
    opus_decoder_destroy(this->OpusDecoder);
  }
  pFVar4 = (this->DecodeBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar3 = (this->AudioDecodingTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  ::operator_delete((this->VorbisDecoder).Ptr,0x138);
  pFVar5 = (this->AudioSamplePool).Ptr;
  if (pFVar5 != (FWebMMediaAudioSamplePool *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&pFVar5->field_0x8);
    ::operator_delete(pFVar5,0x10);
  }
  return;
}

// DecodeAudioFramesAsync @ 14f11d0f0

/* WARNING: Removing unreachable block (ram,0x00014f11d2df) */
/* WARNING: Removing unreachable block (ram,0x00014f11d2eb) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWebMAudioDecoder::DecodeAudioFramesAsync
          (FWebMAudioDecoder *this,
          TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  ForAnyElementType *pFVar4;
  int *piVar5;
  int iVar6;
  FBaseGraphTask *pFVar7;
  TSharedPtr<FWebMFrame,1> *pTVar8;
  FBaseGraphTask *pFVar9;
  ForAnyElementType FVar10;
  TRefCountPtr<FBaseGraphTask> TVar11;
  undefined8 *local_res8;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  code *local_58 [5];
  undefined8 *local_30;
  
  pFVar7 = (this->AudioDecodingTask).Reference;
  pTVar1 = &this->AudioDecodingTask;
  if (pFVar7 != (FBaseGraphTask *)0x0) {
    puVar2 = &pFVar7->field_0x30;
    LOCK();
    *(int *)puVar2 = *(int *)puVar2 + 1;
    UNLOCK();
    LOCK();
    *(int *)puVar2 = *(int *)puVar2 + 1;
    UNLOCK();
  }
  iVar6 = param_1->ArrayNum;
  pTVar8 = (TSharedPtr<FWebMFrame,1> *)(param_1->AllocatorInstance).Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = iVar6;
  if (iVar6 == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,&local_68,iVar6,&local_5c);
    ConstructItems<TSharedPtr<FWebMFrame,1>,TSharedPtr<FWebMFrame,1>,int>
              (local_68.Data,pTVar8,iVar6);
  }
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x28,8);
  iVar6 = local_60;
  FVar10.Data = local_68.Data;
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWebMAudioDecoder::DecodeAudioFramesAsync'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  puVar3 = local_30 + 1;
  pFVar4 = (ForAnyElementType *)(local_30 + 3);
  *puVar3 = this;
  local_30[2] = 0;
  local_30[2] = pFVar7;
  pFVar4->Data = (FScriptContainerElement *)0x0;
  *(int *)(local_30 + 4) = local_60;
  if (local_60 == 0) {
    *(int *)((longlong)local_30 + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_60,0,pFVar4,local_60,(int *)((longlong)local_30 + 0x24));
    ConstructItems<TSharedPtr<FWebMFrame,1>,TSharedPtr<FWebMFrame,1>,int>
              (pFVar4->Data,(TSharedPtr<FWebMFrame,1> *)FVar10.Data,iVar6);
  }
  if (puVar3 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWebMAudioDecoder::DecodeAudioFramesAsync'::__l2::<lambda_1>,void>
                  ::Call;
  }
  TVar11 = FFunctionGraphTask::CreateAndDispatchWhenReady
                     ((TUniqueFunction<void___cdecl(void)> *)&local_res8,(TStatIdData *)local_58,
                      (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                       *)&TStatId::TStatId_NAME_None,MainQueue);
  if ((FBaseGraphTask *)pTVar1 != TVar11.Reference) {
    pFVar9 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar11.Reference;
    *(undefined8 *)TVar11.Reference = 0;
    if (pFVar9 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar2 = &pFVar9->field_0x30;
      iVar6 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
      }
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar5 = (int *)(local_res8 + 6);
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  DestructItems<TSharedPtr<FWebMFrame,1>,int>((TSharedPtr<FWebMFrame,1> *)local_68.Data,local_60);
  if ((TSharedPtr<FWebMFrame,1> *)local_68.Data != (TSharedPtr<FWebMFrame,1> *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (pFVar7 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &pFVar7->field_0x30;
    iVar6 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
    }
  }
  return;
}

// DecodeOpus @ 14f11d340

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWebMAudioDecoder::DecodeOpus(FWebMAudioDecoder *this,TSharedPtr<FWebMFrame,1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = this->FrameSize;
  pFVar2 = (this->DecodeBuffer).AllocatorInstance.Data;
  if (param_1->Object == (FWebMFrame *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar1 = (param_1->Object->Data).ArrayNum;
  if (param_1->Object == (FWebMFrame *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = opus_decode(this->OpusDecoder,(param_1->Object->Data).AllocatorInstance.Data,iVar1,pFVar2,
                      iVar5,0);
  if ((iVar5 < 0) && (2 < (byte)LogWebMMedia._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
  }
  return iVar5;
}

// DecodeVorbis @ 14f11d6f0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWebMAudioDecoder::DecodeVorbis(FWebMAudioDecoder *this,TSharedPtr<FWebMFrame,1> *param_1)

{
  FVorbisDecoder *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FStaticBasicLogRecord *pFVar10;
  undefined2 uVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong local_res8;
  FScriptContainerElement *local_68;
  int local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  local_5c = 0;
  uStack_54 = 0;
  local_4c = 0;
  local_44 = 0;
  if ((param_1->Object == (FWebMFrame *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  local_68 = (param_1->Object->Data).AllocatorInstance.Data;
  if ((param_1->Object == (FWebMFrame *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  local_60 = (param_1->Object->Data).ArrayNum;
  iVar7 = vorbis_synthesis(&((this->VorbisDecoder).Ptr)->Block,&local_68);
  if (iVar7 == 0) {
    pFVar1 = (this->VorbisDecoder).Ptr;
    iVar7 = vorbis_synthesis_blockin(&pFVar1->DspState,&pFVar1->Block);
    if (iVar7 == 0) {
      pFVar2 = (this->DecodeBuffer).AllocatorInstance.Data;
      iVar19 = 0;
      iVar7 = vorbis_synthesis_pcmout(&((this->VorbisDecoder).Ptr)->DspState,&local_res8);
      fVar5 = __real_46fffe00;
      while (0 < iVar7) {
        iVar9 = this->Channels;
        if (this->FrameSize < iVar7) {
          iVar7 = this->FrameSize;
        }
        iVar18 = 0;
        lVar16 = (longlong)iVar7;
        if (0 < iVar9) {
          lVar17 = 0;
          do {
            lVar13 = 0;
            lVar3 = *(longlong *)(lVar17 + local_res8);
            iVar15 = iVar18;
            if (3 < lVar16) {
              lVar14 = (lVar16 - 4U >> 2) + 1;
              lVar13 = lVar14 * 4;
              pfVar12 = (float *)(lVar3 + 8);
              do {
                iVar9 = 0x8000;
                if ((int)(pfVar12[-2] * fVar5) < 0x8000) {
                  iVar9 = (int)(pfVar12[-2] * fVar5);
                }
                uVar11 = 0x8000;
                if (-0x8000 < iVar9) {
                  uVar11 = (short)iVar9;
                }
                *(undefined2 *)(pFVar2 + (longlong)(iVar15 + iVar19) * 2) = uVar11;
                iVar15 = iVar15 + this->Channels;
                iVar9 = 0x8000;
                if ((int)(pfVar12[-1] * fVar5) < 0x8000) {
                  iVar9 = (int)(pfVar12[-1] * fVar5);
                }
                uVar11 = 0x8000;
                if (-0x8000 < iVar9) {
                  uVar11 = (short)iVar9;
                }
                *(undefined2 *)(pFVar2 + (longlong)(iVar15 + iVar19) * 2) = uVar11;
                iVar15 = iVar15 + this->Channels;
                iVar9 = 0x8000;
                if ((int)(*pfVar12 * fVar5) < 0x8000) {
                  iVar9 = (int)(*pfVar12 * fVar5);
                }
                uVar11 = 0x8000;
                if (-0x8000 < iVar9) {
                  uVar11 = (short)iVar9;
                }
                *(undefined2 *)(pFVar2 + (longlong)(iVar15 + iVar19) * 2) = uVar11;
                iVar15 = iVar15 + this->Channels;
                iVar9 = 0x8000;
                if ((int)(pfVar12[1] * fVar5) < 0x8000) {
                  iVar9 = (int)(pfVar12[1] * fVar5);
                }
                uVar11 = 0x8000;
                if (-0x8000 < iVar9) {
                  uVar11 = (short)iVar9;
                }
                *(undefined2 *)(pFVar2 + (longlong)(iVar15 + iVar19) * 2) = uVar11;
                iVar9 = this->Channels;
                iVar15 = iVar15 + iVar9;
                lVar14 = lVar14 + -1;
                pfVar12 = pfVar12 + 4;
              } while (lVar14 != 0);
            }
            if (lVar13 < lVar16) {
              iVar15 = iVar19 + iVar15;
              do {
                iVar8 = (int)(*(float *)(lVar3 + lVar13 * 4) * fVar5);
                iVar9 = 0x8000;
                if (iVar8 < 0x8000) {
                  iVar9 = iVar8;
                }
                uVar11 = 0x8000;
                if (-0x8000 < iVar9) {
                  uVar11 = (short)iVar9;
                }
                lVar13 = lVar13 + 1;
                *(undefined2 *)(pFVar2 + (longlong)iVar15 * 2) = uVar11;
                iVar9 = this->Channels;
                iVar15 = iVar15 + iVar9;
              } while (lVar13 < lVar16);
            }
            iVar18 = iVar18 + 1;
            lVar17 = lVar17 + 8;
          } while (iVar18 < iVar9);
        }
        vorbis_synthesis_read(&((this->VorbisDecoder).Ptr)->DspState,iVar7);
        iVar19 = iVar19 + iVar7;
        iVar7 = vorbis_synthesis_pcmout(&((this->VorbisDecoder).Ptr)->DspState,&local_res8);
      }
      return iVar19;
    }
    if ((byte)LogWebMMedia._0_1_ < 3) {
      return -1;
    }
    pFVar10 = &::LOG_Static;
  }
  else {
    if ((byte)LogWebMMedia._0_1_ < 3) {
      return -1;
    }
    pFVar10 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&LogWebMMedia);
  return -1;
}

// DoDecodeAudioFrames @ 14f11db90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWebMAudioDecoder::DoDecodeAudioFrames
          (FWebMAudioDecoder *this,
          TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FWebMMediaAudioSamplePool *pFVar6;
  longlong lVar7;
  long64 lVar8;
  IWebMSamplesSink *pIVar9;
  IWebMSamplesSink IVar10;
  code *pcVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FWebMMediaAudioSample *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  ulonglong uVar18;
  TSharedPtr<FWebMFrame,1> *pTVar19;
  longlong *plVar20;
  TSharedPtr<FWebMFrame,1> *pTVar21;
  undefined1 local_res18 [8];
  uint local_res20;
  int *in_stack_ffffffffffffff80;
  FWebMMediaAudioSample *local_58;
  TReferenceControllerBase<1> *local_50;
  
  pTVar21 = (TSharedPtr<FWebMFrame,1> *)(param_1->AllocatorInstance).Data;
  uVar2 = param_1->ArrayNum;
  uVar18 = (ulonglong)(int)uVar2;
  pTVar19 = pTVar21 + uVar18;
  do {
    if (param_1->ArrayNum != (int)uVar18) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FWebMFrame,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pTVar21 == pTVar19) {
      return;
    }
    if (this->Codec == Opus) {
      iVar14 = this->FrameSize;
      pFVar5 = (this->DecodeBuffer).AllocatorInstance.Data;
      if ((pTVar21->Object == (FWebMFrame *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar3 = (pTVar21->Object->Data).ArrayNum;
      if ((pTVar21->Object == (FWebMFrame *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      in_stack_ffffffffffffff80 = (int *)((ulonglong)in_stack_ffffffffffffff80 & 0xffffffff00000000)
      ;
      iVar14 = opus_decode(this->OpusDecoder,(pTVar21->Object->Data).AllocatorInstance.Data,iVar3,
                           pFVar5,iVar14,in_stack_ffffffffffffff80);
      if ((iVar14 < 0) && (2 < (byte)LogWebMMedia._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
      }
    }
    else {
      iVar14 = DecodeVorbis(this,pTVar21);
    }
    if (0 < iVar14) {
      pFVar6 = (this->AudioSamplePool).Ptr;
      pFVar16 = TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>
                ::TStorage::Acquire(*(TStorage **)pFVar6,true);
      if ((pFVar16 == (FWebMMediaAudioSample *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaObjectPool.h"
                              ,0x139,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar7 = *(longlong *)pFVar6;
      plVar20 = *(longlong **)&pFVar6->field_0x8;
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar20 + 0xc) = *(int *)((longlong)plVar20 + 0xc) + 1;
        UNLOCK();
      }
      pTVar17 = ::operator_new(0x28);
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        *(longlong **)&pTVar17[1].SharedReferenceCount = plVar20;
        plVar20 = (longlong *)0x0;
        pTVar17[1]._padding_ = lVar7;
        pTVar17->SharedReferenceCount = (atomic<int>)0x1;
        pTVar17->WeakReferenceCount = (atomic<int>)0x1;
        pTVar17->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFWebMMediaAudioSample__VTDeleter___TMediaObjectPool_VFWebMMediaAudioSample__V__TMediaPoolDefaultObjectAllocator_VFWebMMediaAudioSample_______00_SharedPointerInternals__6B_
        ;
        pTVar17[2]._padding_ = (longlong)pFVar16;
      }
      if ((pFVar16 == (FWebMMediaAudioSample *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InRawPtrProxy.Object != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x115,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar20 + 8))(plVar20,1);
        }
      }
      iVar3 = this->SampleRate;
      if ((pTVar21->Object == (FWebMFrame *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar4 = this->SampleRate;
      local_res20 = this->Channels;
      lVar8 = (pTVar21->Object->Time).Ticks;
      pFVar5 = (this->DecodeBuffer).AllocatorInstance.Data;
      uVar12 = local_res20 * iVar14 * 2;
      if (((pFVar5 == (FScriptContainerElement *)0x0) || (uVar12 == 0)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InBuffer && InSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Public\\WebMMediaAudioSample.h"
                              ,0x34,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      in_stack_ffffffffffffff80 = &(pFVar16->Buffer).ArrayMax;
      piVar1 = &(pFVar16->Buffer).ArrayNum;
      *piVar1 = 0;
      if ((pFVar16->Buffer).ArrayMax < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar12,&(pFVar16->Buffer).AllocatorInstance,0,in_stack_ffffffffffffff80);
      }
      if (((pFVar5 == (FScriptContainerElement *)0x0) && (uVar12 != 0)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ptr != nullptr || Count == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x9c1,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,uVar12,&(pFVar16->Buffer).AllocatorInstance,piVar1,
                          in_stack_ffffffffffffff80);
      if (uVar12 != 0) {
        memcpy((pFVar16->Buffer).AllocatorInstance.Data + iVar15,pFVar5,(longlong)(int)uVar12);
      }
      pFVar16->Channels = local_res20;
      (pFVar16->Duration).Ticks = ((longlong)iVar14 * 10000000) / (longlong)iVar3;
      pFVar16->SampleRate = uVar4;
      (pFVar16->Time).Ticks = lVar8;
      pIVar9 = this->Samples;
      IVar10 = *pIVar9;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58 = pFVar16;
      local_50 = pTVar17;
      (**(code **)((longlong)IVar10 + 8))(pIVar9,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    }
    pTVar21 = pTVar21 + 1;
    uVar18 = (ulonglong)uVar2;
  } while( true );
}

// Initialize @ 14f11f940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FWebMAudioDecoder::Initialize
          (FWebMAudioDecoder *this,char *param_1,int param_2,int param_3,uchar *param_4,
          ulong64 param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  OpusDecoder *pOVar5;
  int local_res8 [2];
  
  if (this->OpusDecoder != (OpusDecoder *)0x0) {
    opus_decoder_destroy(this->OpusDecoder);
    this->OpusDecoder = (OpusDecoder *)0x0;
  }
  iVar4 = strcmp(param_1,"A_OPUS");
  if (iVar4 == 0) {
    this->Codec = Opus;
    this->SampleRate = param_2;
    this->Channels = param_3;
    local_res8[0] = iVar4;
    pOVar5 = (OpusDecoder *)opus_decoder_create(param_2,param_3,local_res8);
    this->OpusDecoder = pOVar5;
    if (pOVar5 == (OpusDecoder *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpusDecoder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMAudioDecoder.cpp"
                         ,0x56,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (local_res8[0] != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ErrorCode == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMAudioDecoder.cpp"
                         ,0x57,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    this->FrameSize = (this->SampleRate * 0x78) / 1000;
LAB_14f11fa54:
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->DecodeBuffer,this->Channels * this->FrameSize * 2,Default);
    bVar2 = true;
  }
  else {
    iVar4 = strcmp(param_1,"A_VORBIS");
    if (iVar4 == 0) {
      this->Codec = Vorbis;
      this->SampleRate = param_2;
      this->Channels = param_3;
      bVar2 = InitializeVorbis(this,param_4,param_5);
      if (bVar2) goto LAB_14f11fa54;
    }
    bVar2 = false;
  }
  return bVar2;
}

// InitializeOpus @ 14f11fc30

void __thiscall FWebMAudioDecoder::InitializeOpus(FWebMAudioDecoder *this)

{
  code *pcVar1;
  bool bVar2;
  OpusDecoder *pOVar3;
  int local_res8 [8];
  
  local_res8[0] = 0;
  pOVar3 = (OpusDecoder *)opus_decoder_create(this->SampleRate,this->Channels,local_res8);
  this->OpusDecoder = pOVar3;
  if (pOVar3 == (OpusDecoder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OpusDecoder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMAudioDecoder.cpp"
                       ,0x56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_res8[0] != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ErrorCode == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMAudioDecoder.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->FrameSize = (this->SampleRate * 0x78) / 1000;
  return;
}

// InitializeVorbis @ 14f11fce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWebMAudioDecoder::InitializeVorbis(FWebMAudioDecoder *this,uchar *param_1,ulong64 param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  FVorbisDecoder *pFVar4;
  FStaticBasicLogRecord *pFVar5;
  FVorbisDecoder *pFVar6;
  uint uVar7;
  FVorbisDecoder *pFVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8 [4];
  uchar *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uchar *puStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uchar *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (((param_2 < 3) || (param_1 == (uchar *)0x0)) || (*param_1 != '\x02')) {
    if ((byte)LogWebMMedia._0_1_ < 3) {
      return false;
    }
    pFVar5 = &::LOG_Static;
  }
  else {
    pFVar8 = (FVorbisDecoder *)0x0;
    local_b8[2] = 0;
    uVar3 = 1;
    local_b8[0] = 0;
    local_b8[1] = 0;
    pFVar6 = pFVar8;
    do {
      if (param_2 <= uVar3) {
        if ((byte)LogWebMMedia._0_1_ < 3) {
          return false;
        }
        pFVar5 = &::LOG_Static;
        goto LAB_14f11ff36;
      }
      bVar1 = param_1[uVar3];
      uVar3 = uVar3 + 1;
      local_b8[(longlong)pFVar6] = local_b8[(longlong)pFVar6] + (ulonglong)bVar1;
    } while ((bVar1 == 0xff) ||
            (pFVar6 = (FVorbisDecoder *)((longlong)&(pFVar6->Info).version + 1),
            (longlong)pFVar6 < 2));
    local_28 = 0;
    local_98 = param_1 + uVar3;
    puStack_70 = param_1 + local_b8[0] + uVar3;
    _iStack_90 = CONCAT44(1,(int)local_b8[0]);
    local_78 = 0;
    uStack_40 = (ulonglong)
                (uint)((((int)param_2 - (int)local_b8[1]) - (int)local_b8[0]) - (int)uVar3);
    local_48 = param_1 + local_b8[1] + local_b8[0] + uVar3;
    uStack_60 = 0;
    local_68 = local_b8[1] & 0xffffffff;
    local_88 = 0;
    uStack_80 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_38 = 0;
    uStack_30 = 0;
    pFVar4 = ::operator_new(0x138);
    pFVar6 = pFVar8;
    if (pFVar4 != (FVorbisDecoder *)0x0) {
      memset(pFVar4,0,0x138);
      pFVar6 = pFVar4;
    }
    pFVar4 = (this->VorbisDecoder).Ptr;
    if (pFVar4 != pFVar6) {
      (this->VorbisDecoder).Ptr = pFVar6;
      ::operator_delete(pFVar4,0x138);
    }
    vorbis_info_init((this->VorbisDecoder).Ptr);
    vorbis_comment_init(local_b8);
    do {
      iVar2 = vorbis_synthesis_headerin
                        ((this->VorbisDecoder).Ptr,local_b8,&local_98 + (longlong)pFVar8 * 5);
      if (iVar2 != 0) {
        if (2 < (byte)LogWebMMedia._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
        }
        vorbis_comment_clear(local_b8);
        return false;
      }
      uVar7 = (int)pFVar8 + 1;
      pFVar8 = (FVorbisDecoder *)(ulonglong)uVar7;
    } while ((int)uVar7 < 3);
    vorbis_comment_clear(local_b8);
    iVar2 = vorbis_synthesis_init(&((this->VorbisDecoder).Ptr)->DspState);
    if (iVar2 == 0) {
      pFVar6 = (this->VorbisDecoder).Ptr;
      if (((pFVar6->Info).channels == this->Channels) && ((pFVar6->Info).rate == this->SampleRate))
      {
        iVar2 = vorbis_block_init(&pFVar6->DspState,&pFVar6->Block);
        if (iVar2 == 0) {
          this->FrameSize = (int)(0x1000 / (longlong)this->Channels);
          return true;
        }
        if ((byte)LogWebMMedia._0_1_ < 3) {
          return false;
        }
        pFVar5 = (FStaticBasicLogRecord *)&PTR_u_Failed_to_initi_15314e468;
      }
      else {
        if ((byte)LogWebMMedia._0_1_ < 3) {
          return false;
        }
        pFVar5 = &::LOG_Static;
      }
    }
    else {
      if ((byte)LogWebMMedia._0_1_ < 3) {
        return false;
      }
      pFVar5 = &::LOG_Static;
    }
  }
LAB_14f11ff36:
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogWebMMedia);
  return false;
}

// IsBusy @ 14f11ff70

bool __thiscall FWebMAudioDecoder::IsBusy(FWebMAudioDecoder *this)

{
  FBaseGraphTask *pFVar1;
  
  pFVar1 = (this->AudioDecodingTask).Reference;
  if ((pFVar1 != (FBaseGraphTask *)0x0) && (pFVar1->field_0xd0 == '\0')) {
    return true;
  }
  return false;
}

