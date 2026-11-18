// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 14

// PushOpaque @ 14afd1110

bool __thiscall
Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>::PushOpaque
          (TAudioDataChannel<Metasound::FMonoAudioFormat> *this,ISender *param_1)

{
  return true;
}

// PopOpaque @ 14afd1120

void __thiscall
Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>::PopOpaque
          (TAudioDataChannel<Metasound::FMonoAudioFormat> *this,IReceiver *param_1)

{
  int iVar1;
  FPatchMixerSplitter *this_00;
  FPatchMixerSplitter *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AudioBuses).ArrayNum;
  this_00 = (FPatchMixerSplitter *)(this->AudioBuses).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->AudioBuses).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FPatchMixerSplitter,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    Audio::FPatchMixerSplitter::ProcessAudio(this_00);
    this_00 = this_00 + 1;
  }
  return;
}

// CreateNewPayloadID @ 14afd1190

long64 __thiscall
Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>::CreateNewPayloadID
          (TAudioDataChannel<Metasound::FMonoAudioFormat> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// IsEmpty @ 14afd11b0

bool __thiscall
Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>::IsEmpty
          (TAudioDataChannel<Metasound::FMonoAudioFormat> *this)

{
  return false;
}

// GetDataType @ 14afd11c0

FName __thiscall
Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>::GetDataType
          (TAudioDataChannel<Metasound::FMonoAudioFormat> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// ConstructNewReceiverImplementation @ 14afd11f0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>::ConstructNewReceiverImplementation
          (TAudioDataChannel<Metasound::FMonoAudioFormat> *this,FReceiverInitParams *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  IDataChannel *pIVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar10;
  TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> TVar11;
  undefined8 *puVar12;
  TSharedRef<Metasound::IDataChannel,1> *pTVar13;
  FName *pFVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  FPatchMixerSplitter *this_00;
  undefined8 *in_R8;
  FPatchMixerSplitter *pFVar17;
  uint local_res8 [2];
  ForAnyElementType local_78;
  undefined8 local_70;
  TSharedPtr<Audio::FPatchOutput,1> local_68;
  TSharedRef<Metasound::IDataChannel,1> local_58 [2];
  
  fVar7 = __real_3f800000;
  puVar15 = (undefined8 *)0x0;
  local_res8[0] = 0;
  iVar1 = (this->AudioBuses).ArrayNum;
  this_00 = (FPatchMixerSplitter *)(this->AudioBuses).AllocatorInstance.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  pFVar17 = this_00 + iVar1;
  local_70 = 0;
  while( true ) {
    if ((this->AudioBuses).ArrayNum != iVar1) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<Audio::FPatchMixerSplitter,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar17) break;
    pTVar10 = Audio::FPatchMixerSplitter::AddNewOutput(this_00,&local_68,0x1fa0,fVar7);
    if (((local_78.Data <= pTVar10) &&
        (pTVar10 < (TSharedPtr<Audio::FPatchOutput,1> *)
                   (local_78.Data + (longlong)local_70._4_4_ * 0x10))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      TVar11.Ptr = (IReceiver *)(*pcVar5)();
      return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)TVar11.Ptr;
    }
    iVar9 = (int)local_70;
    if ((int)local_70 == local_70._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_78,(int *)((longlong)&local_70 + 4));
    }
    local_70 = CONCAT44(local_70._4_4_,iVar9 + 1);
    *(FPatchOutput **)&local_78.Data[(longlong)iVar9 * 0x10].field_0x0 = pTVar10->Object;
    *(TReferenceControllerBase<1> **)(local_78.Data + (longlong)iVar9 * 0x10 + 8) =
         (pTVar10->SharedReferenceCount).ReferenceController;
    (pTVar10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar10->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    this_00 = this_00 + 1;
  }
  puVar12 = ::operator_new(0x40);
  puVar16 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    pTVar13 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                        ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,local_58);
    pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
    pIVar3 = pTVar13->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      pFVar14 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
      FVar4 = *pFVar14;
      *puVar12 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar12 + 1) = FVar4;
      puVar12[2] = pIVar3;
      puVar12[3] = 0;
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      pFVar14 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
      FVar4 = *pFVar14;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar12 + 1) = FVar4;
      *puVar12 = &___7IReceiver_Metasound__6B_;
      puVar12[2] = pIVar3;
      puVar12[3] = pTVar2;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    *puVar12 = &___7__TAudioReceiver_VFMonoAudioFormat_Metasound___Metasound__6B_;
    puVar12[4] = local_78.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar12 + 5) = (int)local_70;
    *(int *)((longlong)puVar12 + 0x2c) = local_70._4_4_;
    local_70 = 0;
    uVar6 = in_R8[1];
    puVar12[6] = *in_R8;
    puVar12[7] = uVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    puVar15 = puVar12;
    puVar16 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar15;
  if (puVar16 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58[0].SharedReferenceCount.ReferenceController);
  }
  DestructItems<TSharedPtr<Audio::FPatchOutput,1>,int>
            ((TSharedPtr<Audio::FPatchOutput,1> *)local_78.Data,(int)local_70);
  if ((TSharedPtr<Audio::FPatchOutput,1> *)local_78.Data != (TSharedPtr<Audio::FPatchOutput,1> *)0x0
     ) {
    FMemory::Free(local_78.Data);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14afd1450

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>::ConstructNewSenderImplementation
          (TAudioDataChannel<Metasound::FMonoAudioFormat> *this,FSenderInitParams *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  IDataChannel *pIVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  FPatchInput *pFVar11;
  TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> TVar12;
  TAudioSender<Metasound::FMonoAudioFormat> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar13;
  FName *pFVar14;
  TAudioSender<Metasound::FMonoAudioFormat> *pTVar15;
  TAudioSender<Metasound::FMonoAudioFormat> *pTVar16;
  FPatchMixerSplitter *this_01;
  undefined8 *in_R8;
  FPatchMixerSplitter *pFVar17;
  uint local_res8 [2];
  ForAnyElementType local_88;
  undefined8 local_80;
  TSharedRef<Metasound::IDataChannel,1> local_78;
  FPatchInput local_68 [2];
  
  fVar8 = __real_3f800000;
  pTVar15 = (TAudioSender<Metasound::FMonoAudioFormat> *)0x0;
  local_res8[0] = 0;
  iVar1 = (this->AudioBuses).ArrayNum;
  this_01 = (FPatchMixerSplitter *)(this->AudioBuses).AllocatorInstance.Data;
  local_88.Data = (FScriptContainerElement *)0x0;
  pFVar17 = this_01 + iVar1;
  local_80 = 0;
  while( true ) {
    if ((this->AudioBuses).ArrayNum != iVar1) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<Audio::FPatchMixerSplitter,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_01 == pFVar17) break;
    pFVar11 = Audio::FPatchMixerSplitter::AddNewInput(this_01,local_68,0x1fa0,fVar8);
    if (((local_88.Data <= pFVar11) &&
        (pFVar11 < (FPatchInput *)(local_88.Data + (longlong)local_80._4_4_ * 0x18))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (ISender *)(*pcVar5)();
      return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)TVar12.Ptr;
    }
    iVar10 = (int)local_80;
    if ((int)local_80 == local_80._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_88,(int *)((longlong)&local_80 + 4));
    }
    local_80 = CONCAT44(local_80._4_4_,iVar10 + 1);
    Audio::FPatchInput::FPatchInput
              ((FPatchInput *)(local_88.Data + (longlong)iVar10 * 0x18),pFVar11);
    Audio::FPatchInput::~FPatchInput(local_68);
    this_01 = this_01 + 1;
  }
  this_00 = ::operator_new(0x70);
  pTVar16 = pTVar15;
  if (this_00 != (TAudioSender<Metasound::FMonoAudioFormat> *)0x0) {
    pTVar13 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                        ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_78);
    pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
    pIVar3 = pTVar13->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      pFVar14 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
      FVar4 = *pFVar14;
      this_00->_padding_ = (longlong)&___7ISender_Metasound__6B_;
      this_00->_padding_ = (longlong)FVar4;
      this_00->_padding_ = (longlong)pIVar3;
      this_00->_padding_ = 0;
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      pFVar14 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
      FVar4 = *pFVar14;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      this_00->_padding_ = (longlong)FVar4;
      this_00->_padding_ = (longlong)&___7ISender_Metasound__6B_;
      this_00->_padding_ = (longlong)pIVar3;
      this_00->_padding_ = (longlong)pTVar2;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    this_00->_padding_ = (longlong)&___7__TAudioSender_VFMonoAudioFormat_Metasound___Metasound__6B_;
    (this_00->DelayLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->DelayLines).ArrayNum = 0;
    (this_00->DelayLines).ArrayMax = 0;
    (this_00->DataChannelInputs).AllocatorInstance.Data = local_88.Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    (this_00->DataChannelInputs).ArrayNum = (int)local_80;
    (this_00->DataChannelInputs).ArrayMax = local_80._4_4_;
    local_80 = 0;
    (this_00->IntermediaryBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->IntermediaryBuffers).ArrayNum = 0;
    (this_00->IntermediaryBuffers).ArrayMax = 0;
    uVar6 = *in_R8;
    uVar7 = in_R8[1];
    (this_00->Params).OperatorSettings.SampleRate = (int)uVar6;
    (this_00->Params).OperatorSettings.TargetBlockRate = (float)(int)((ulonglong)uVar6 >> 0x20);
    (this_00->Params).OperatorSettings.ActualBlockRate = (float)(int)uVar7;
    (this_00->Params).OperatorSettings.NumFramesPerBlock = (int)((ulonglong)uVar7 >> 0x20);
    (this_00->Params).DelayTimeInSeconds = *(float *)(in_R8 + 2);
    TAudioSender<Metasound::FMonoAudioFormat>::SetDelay(this_00,*(float *)(in_R8 + 2));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar15 = this_00;
    pTVar16 = (TAudioSender<Metasound::FMonoAudioFormat> *)&DAT_00000001;
  }
  *(TAudioSender<Metasound::FMonoAudioFormat> **)&param_1->OperatorSettings = pTVar15;
  if (pTVar16 != (TAudioSender<Metasound::FMonoAudioFormat> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  DestructItems<Audio::FPatchInput,int>((FPatchInput *)local_88.Data,(int)local_80);
  if ((FPatchInput *)local_88.Data != (FPatchInput *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// PushOpaque @ 14afd4680

bool __thiscall
Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>::PushOpaque
          (TAudioDataChannel<Metasound::FStereoAudioFormat> *this,ISender *param_1)

{
  return true;
}

// PopOpaque @ 14afd46f0

void __thiscall
Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>::PopOpaque
          (TAudioDataChannel<Metasound::FStereoAudioFormat> *this,IReceiver *param_1)

{
  int iVar1;
  FPatchMixerSplitter *this_00;
  FPatchMixerSplitter *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AudioBuses).ArrayNum;
  this_00 = (FPatchMixerSplitter *)(this->AudioBuses).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->AudioBuses).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FPatchMixerSplitter,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    Audio::FPatchMixerSplitter::ProcessAudio(this_00);
    this_00 = this_00 + 1;
  }
  return;
}

// CreateNewPayloadID @ 14afd4760

long64 __thiscall
Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>::CreateNewPayloadID
          (TAudioDataChannel<Metasound::FStereoAudioFormat> *this)

{
  atomic<__int64> *paVar1;
  atomic<__int64> aVar2;
  
  LOCK();
  paVar1 = &this->PayloadIDCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  return (long64)aVar2;
}

// IsEmpty @ 14afd4780

bool __thiscall
Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>::IsEmpty
          (TAudioDataChannel<Metasound::FStereoAudioFormat> *this)

{
  return false;
}

// GetDataType @ 14afd4790

FName __thiscall
Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>::GetDataType
          (TAudioDataChannel<Metasound::FStereoAudioFormat> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// ConstructNewReceiverImplementation @ 14afd47c0

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>::ConstructNewReceiverImplementation
          (TAudioDataChannel<Metasound::FStereoAudioFormat> *this,FReceiverInitParams *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  IDataChannel *pIVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar10;
  TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> TVar11;
  undefined8 *puVar12;
  TSharedRef<Metasound::IDataChannel,1> *pTVar13;
  FName *pFVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  FPatchMixerSplitter *this_00;
  undefined8 *in_R8;
  FPatchMixerSplitter *pFVar17;
  uint local_res8 [2];
  ForAnyElementType local_78;
  undefined8 local_70;
  TSharedPtr<Audio::FPatchOutput,1> local_68;
  TSharedRef<Metasound::IDataChannel,1> local_58 [2];
  
  fVar7 = __real_3f800000;
  puVar15 = (undefined8 *)0x0;
  local_res8[0] = 0;
  iVar1 = (this->AudioBuses).ArrayNum;
  this_00 = (FPatchMixerSplitter *)(this->AudioBuses).AllocatorInstance.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  pFVar17 = this_00 + iVar1;
  local_70 = 0;
  while( true ) {
    if ((this->AudioBuses).ArrayNum != iVar1) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<Audio::FPatchMixerSplitter,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar17) break;
    pTVar10 = Audio::FPatchMixerSplitter::AddNewOutput(this_00,&local_68,0x1fa0,fVar7);
    if (((local_78.Data <= pTVar10) &&
        (pTVar10 < (TSharedPtr<Audio::FPatchOutput,1> *)
                   (local_78.Data + (longlong)local_70._4_4_ * 0x10))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      TVar11.Ptr = (IReceiver *)(*pcVar5)();
      return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)TVar11.Ptr;
    }
    iVar9 = (int)local_70;
    if ((int)local_70 == local_70._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_78,(int *)((longlong)&local_70 + 4));
    }
    local_70 = CONCAT44(local_70._4_4_,iVar9 + 1);
    *(FPatchOutput **)&local_78.Data[(longlong)iVar9 * 0x10].field_0x0 = pTVar10->Object;
    *(TReferenceControllerBase<1> **)(local_78.Data + (longlong)iVar9 * 0x10 + 8) =
         (pTVar10->SharedReferenceCount).ReferenceController;
    (pTVar10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar10->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    this_00 = this_00 + 1;
  }
  puVar12 = ::operator_new(0x40);
  puVar16 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    pTVar13 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                        ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,local_58);
    pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
    pIVar3 = pTVar13->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      pFVar14 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
      FVar4 = *pFVar14;
      *puVar12 = &___7IReceiver_Metasound__6B_;
      *(FName *)(puVar12 + 1) = FVar4;
      puVar12[2] = pIVar3;
      puVar12[3] = 0;
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      pFVar14 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
      FVar4 = *pFVar14;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      *(FName *)(puVar12 + 1) = FVar4;
      *puVar12 = &___7IReceiver_Metasound__6B_;
      puVar12[2] = pIVar3;
      puVar12[3] = pTVar2;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    *puVar12 = &___7__TAudioReceiver_VFStereoAudioFormat_Metasound___Metasound__6B_;
    puVar12[4] = local_78.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar12 + 5) = (int)local_70;
    *(int *)((longlong)puVar12 + 0x2c) = local_70._4_4_;
    local_70 = 0;
    uVar6 = in_R8[1];
    puVar12[6] = *in_R8;
    puVar12[7] = uVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    puVar15 = puVar12;
    puVar16 = (undefined8 *)&DAT_00000001;
  }
  *(undefined8 **)&param_1->OperatorSettings = puVar15;
  if (puVar16 != (undefined8 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58[0].SharedReferenceCount.ReferenceController);
  }
  DestructItems<TSharedPtr<Audio::FPatchOutput,1>,int>
            ((TSharedPtr<Audio::FPatchOutput,1> *)local_78.Data,(int)local_70);
  if ((TSharedPtr<Audio::FPatchOutput,1> *)local_78.Data != (TSharedPtr<Audio::FPatchOutput,1> *)0x0
     ) {
    FMemory::Free(local_78.Data);
  }
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14afd4a50

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>::ConstructNewSenderImplementation
          (TAudioDataChannel<Metasound::FStereoAudioFormat> *this,FSenderInitParams *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  IDataChannel *pIVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  FPatchInput *pFVar11;
  TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> TVar12;
  TAudioSender<Metasound::FStereoAudioFormat> *this_00;
  TSharedRef<Metasound::IDataChannel,1> *pTVar13;
  FName *pFVar14;
  TAudioSender<Metasound::FStereoAudioFormat> *pTVar15;
  TAudioSender<Metasound::FStereoAudioFormat> *pTVar16;
  FPatchMixerSplitter *this_01;
  undefined8 *in_R8;
  FPatchMixerSplitter *pFVar17;
  uint local_res8 [2];
  ForAnyElementType local_88;
  undefined8 local_80;
  TSharedRef<Metasound::IDataChannel,1> local_78;
  FPatchInput local_68 [2];
  
  fVar8 = __real_3f800000;
  pTVar15 = (TAudioSender<Metasound::FStereoAudioFormat> *)0x0;
  local_res8[0] = 0;
  iVar1 = (this->AudioBuses).ArrayNum;
  this_01 = (FPatchMixerSplitter *)(this->AudioBuses).AllocatorInstance.Data;
  local_88.Data = (FScriptContainerElement *)0x0;
  pFVar17 = this_01 + iVar1;
  local_80 = 0;
  while( true ) {
    if ((this->AudioBuses).ArrayNum != iVar1) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<Audio::FPatchMixerSplitter,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_01 == pFVar17) break;
    pFVar11 = Audio::FPatchMixerSplitter::AddNewInput(this_01,local_68,0x1fa0,fVar8);
    if (((local_88.Data <= pFVar11) &&
        (pFVar11 < (FPatchInput *)(local_88.Data + (longlong)local_80._4_4_ * 0x18))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (ISender *)(*pcVar5)();
      return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)TVar12.Ptr;
    }
    iVar10 = (int)local_80;
    if ((int)local_80 == local_80._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_88,(int *)((longlong)&local_80 + 4));
    }
    local_80 = CONCAT44(local_80._4_4_,iVar10 + 1);
    Audio::FPatchInput::FPatchInput
              ((FPatchInput *)(local_88.Data + (longlong)iVar10 * 0x18),pFVar11);
    Audio::FPatchInput::~FPatchInput(local_68);
    this_01 = this_01 + 1;
  }
  this_00 = ::operator_new(0x70);
  pTVar16 = pTVar15;
  if (this_00 != (TAudioSender<Metasound::FStereoAudioFormat> *)0x0) {
    pTVar13 = TSharedFromThis<Metasound::IDataChannel,1>::AsShared
                        ((TSharedFromThis<Metasound::IDataChannel,1> *)&this->_padding_,&local_78);
    pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
    pIVar3 = pTVar13->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      pFVar14 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
      FVar4 = *pFVar14;
      this_00->_padding_ = (longlong)&___7ISender_Metasound__6B_;
      this_00->_padding_ = (longlong)FVar4;
      this_00->_padding_ = (longlong)pIVar3;
      this_00->_padding_ = 0;
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      pFVar14 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
      FVar4 = *pFVar14;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      this_00->_padding_ = (longlong)FVar4;
      this_00->_padding_ = (longlong)&___7ISender_Metasound__6B_;
      this_00->_padding_ = (longlong)pIVar3;
      this_00->_padding_ = (longlong)pTVar2;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    this_00->_padding_ =
         (longlong)&___7__TAudioSender_VFStereoAudioFormat_Metasound___Metasound__6B_;
    (this_00->DelayLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->DelayLines).ArrayNum = 0;
    (this_00->DelayLines).ArrayMax = 0;
    (this_00->DataChannelInputs).AllocatorInstance.Data = local_88.Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    (this_00->DataChannelInputs).ArrayNum = (int)local_80;
    (this_00->DataChannelInputs).ArrayMax = local_80._4_4_;
    local_80 = 0;
    (this_00->IntermediaryBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->IntermediaryBuffers).ArrayNum = 0;
    (this_00->IntermediaryBuffers).ArrayMax = 0;
    uVar6 = *in_R8;
    uVar7 = in_R8[1];
    (this_00->Params).OperatorSettings.SampleRate = (int)uVar6;
    (this_00->Params).OperatorSettings.TargetBlockRate = (float)(int)((ulonglong)uVar6 >> 0x20);
    (this_00->Params).OperatorSettings.ActualBlockRate = (float)(int)uVar7;
    (this_00->Params).OperatorSettings.NumFramesPerBlock = (int)((ulonglong)uVar7 >> 0x20);
    (this_00->Params).DelayTimeInSeconds = *(float *)(in_R8 + 2);
    TAudioSender<Metasound::FStereoAudioFormat>::SetDelay(this_00,*(float *)(in_R8 + 2));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar15 = this_00;
    pTVar16 = (TAudioSender<Metasound::FStereoAudioFormat> *)&DAT_00000001;
  }
  *(TAudioSender<Metasound::FStereoAudioFormat> **)&param_1->OperatorSettings = pTVar15;
  if (pTVar16 != (TAudioSender<Metasound::FStereoAudioFormat> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  DestructItems<Audio::FPatchInput,int>((FPatchInput *)local_88.Data,(int)local_80);
  if ((FPatchInput *)local_88.Data != (FPatchInput *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

