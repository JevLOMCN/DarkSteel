// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 18

// StaticClass @ 14ecd4190

UClass * __cdecl UVoipListenerSynthComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVoipListenerSynthComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"VoipListenerSynthComponent",
               &Z_Registration_Info_UClass_UVoipListenerSynthComponent.InnerSingleton,
               StaticRegisterNativesUVoipListenerSynthComponent,0x920,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UVoipListenerSynthComponent>,
               InternalVTableHelperCtorCaller<UVoipListenerSynthComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVoipListenerSynthComponent.InnerSingleton;
}

// UVoipListenerSynthComponent @ 14ecda660

UVoipListenerSynthComponent * __thiscall
UVoipListenerSynthComponent::UVoipListenerSynthComponent
          (UVoipListenerSynthComponent *this,FVTableHelper *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ExternalSend).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->ExternalSend).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ExternalSend).PushCallsCounter = 0;
  (this->PacketBuffer).Ptr = (FVoicePacketBuffer *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PacketBufferCriticalSection,4000)
  ;
  return this;
}

// UVoipListenerSynthComponent @ 14ecda6d0

UVoipListenerSynthComponent * __thiscall
UVoipListenerSynthComponent::UVoipListenerSynthComponent
          (UVoipListenerSynthComponent *this,FObjectInitializer *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ExternalSend).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->ExternalSend).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ExternalSend).PushCallsCounter = 0;
  (this->PacketBuffer).Ptr = (FVoicePacketBuffer *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PacketBufferCriticalSection,4000)
  ;
  return this;
}

// ~UVoipListenerSynthComponent @ 14ecdbe40

void __thiscall
UVoipListenerSynthComponent::~UVoipListenerSynthComponent(UVoipListenerSynthComponent *this)

{
  FVoicePacketBuffer *pFVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  ClosePacketStream(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PacketBufferCriticalSection);
  pFVar1 = (this->PacketBuffer).Ptr;
  if (pFVar1 != (FVoicePacketBuffer *)0x0) {
    pTVar2 = (pFVar1->FreedIndicesQueue).Tail;
    while (pTVar2 != (TNode *)0x0) {
      (pFVar1->FreedIndicesQueue).Tail = pTVar2->NextNode;
      ::operator_delete(pTVar2,0x10);
      pTVar2 = (pFVar1->FreedIndicesQueue).Tail;
    }
    DestructItems<FSortedVoicePacketNode,int>
              ((FSortedVoicePacketNode *)(pFVar1->PacketBuffer).AllocatorInstance.Data,
               (pFVar1->PacketBuffer).ArrayNum);
    pFVar3 = (pFVar1->PacketBuffer).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x50);
  }
  Audio::FPatchInput::~FPatchInput(&this->ExternalSend);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  return;
}

// BeginDestroy @ 14ecddd10

void __thiscall UVoipListenerSynthComponent::BeginDestroy(UVoipListenerSynthComponent *this)

{
  USynthComponent::BeginDestroy((USynthComponent *)this);
  ClosePacketStream(this);
  return;
}

// ClosePacketStream @ 14ecde390

void __thiscall UVoipListenerSynthComponent::ClosePacketStream(UVoipListenerSynthComponent *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FVoicePacketBuffer *pFVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  
  lpCriticalSection = &this->PacketBufferCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->PacketBuffer).Ptr;
    if (pFVar1 != (FVoicePacketBuffer *)0x0) {
      (this->PacketBuffer).Ptr = (FVoicePacketBuffer *)0x0;
      pTVar2 = (pFVar1->FreedIndicesQueue).Tail;
      while (pTVar2 != (TNode *)0x0) {
        (pFVar1->FreedIndicesQueue).Tail = pTVar2->NextNode;
        ::operator_delete(pTVar2,0x10);
        pTVar2 = (pFVar1->FreedIndicesQueue).Tail;
      }
      DestructItems<FSortedVoicePacketNode,int>
                ((FSortedVoicePacketNode *)(pFVar1->PacketBuffer).AllocatorInstance.Data,
                 (pFVar1->PacketBuffer).ArrayNum);
      pFVar3 = (pFVar1->PacketBuffer).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pFVar1,0x50);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ecde433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConnectToSplitter @ 14ecde450

void __thiscall
UVoipListenerSynthComponent::ConnectToSplitter
          (UVoipListenerSynthComponent *this,FPatchMixerSplitter *param_1)

{
  FPatchInput *pFVar1;
  FPatchInput local_28;
  
  pFVar1 = Audio::FPatchMixerSplitter::AddNewInput
                     (param_1,&local_28,DefaultPatchBufferSizeCVar,DefaultPatchGainCVar);
  Audio::FPatchInput::operator=(&this->ExternalSend,pFVar1);
  Audio::FPatchInput::~FPatchInput(&local_28);
  return;
}

// ForceResync @ 14ece7000

void __thiscall UVoipListenerSynthComponent::ForceResync(UVoipListenerSynthComponent *this)

{
  uint uVar1;
  FVoicePacketBuffer *pFVar2;
  FSortedVoicePacketNode *pFVar3;
  TNode *pTVar4;
  code *pcVar5;
  bool bVar6;
  TNode *pTVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (((this->PacketBuffer).Ptr == (FVoicePacketBuffer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PacketBuffer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoipListenerSynthComponent.cpp"
                         ,0xc2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = (((this->PacketBuffer).Ptr)->NumBufferedSamples).Counter -
           ((int)ROUND((float)*(int *)&this->field_0x880 * this->JitterDelayInSeconds *
                       (this->MySampleRate + this->MySampleRate) - __real_3f000000) >> 1);
  if ((int)ROUND((float)*(int *)&this->field_0x880 * ResyncThresholdCVar *
                 (this->MySampleRate + this->MySampleRate) - __real_3f000000) >> 1 < (int)uVar10) {
    pFVar2 = (this->PacketBuffer).Ptr;
    uVar9 = 0;
    if (uVar10 != 0) {
      do {
        pFVar3 = pFVar2->ListHead;
        if (pFVar3 == (FSortedVoicePacketNode *)0x0) {
          return;
        }
        if (pFVar2->SampleCounter < pFVar3->StartSample) {
          pFVar2->SampleCounter = pFVar3->StartSample;
        }
        else {
          iVar8 = uVar10 - uVar9;
          if (iVar8 < pFVar3->SamplesLeft) {
            pFVar3->SamplesLeft = pFVar3->SamplesLeft - iVar8;
            pFVar2->SampleCounter = pFVar2->SampleCounter + (longlong)iVar8;
            pFVar2->IdleSampleCounter = 0;
            LOCK();
            pFVar2->bIsIdle = (FThreadSafeBool)0x0;
            UNLOCK();
            break;
          }
          LOCK();
          pFVar2->bIsIdle = (FThreadSafeBool)0x0;
          UNLOCK();
          pFVar3 = pFVar2->ListHead;
          uVar1 = pFVar3->SamplesLeft;
          pFVar2->SampleCounter = pFVar2->SampleCounter + (ulonglong)uVar1;
          uVar9 = uVar9 + uVar1;
          pTVar7 = ::operator_new(0x10);
          if (pTVar7 != (TNode *)0x0) {
            pTVar7->NextNode = (TNode *)0x0;
            pTVar7->Item = pFVar3->IndexInPacketBuffer;
            pTVar4 = (pFVar2->FreedIndicesQueue).Head;
            (pFVar2->FreedIndicesQueue).Head = pTVar7;
            pTVar4->NextNode = pTVar7;
          }
          pFVar2->ListHead = pFVar2->ListHead->NextPacket;
        }
      } while (uVar9 < uVar10);
    }
    LOCK();
    (pFVar2->NumBufferedSamples).Counter =
         (pFVar2->NumBufferedSamples).Counter + (pFVar2->IdleSampleCounter - uVar10);
    UNLOCK();
  }
  return;
}

// GetPrivateStaticClass @ 14ece8710

UClass * __cdecl UVoipListenerSynthComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVoipListenerSynthComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"VoipListenerSynthComponent",
               &Z_Registration_Info_UClass_UVoipListenerSynthComponent.InnerSingleton,
               StaticRegisterNativesUVoipListenerSynthComponent,0x920,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UVoipListenerSynthComponent>,
               InternalVTableHelperCtorCaller<UVoipListenerSynthComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVoipListenerSynthComponent.InnerSingleton;
}

// GetSampleCounter @ 14ece88f0

ulong64 __thiscall UVoipListenerSynthComponent::GetSampleCounter(UVoipListenerSynthComponent *this)

{
  FVoicePacketBuffer *pFVar1;
  
  pFVar1 = (this->PacketBuffer).Ptr;
  if (pFVar1 != (FVoicePacketBuffer *)0x0) {
    return pFVar1->SampleCounter;
  }
  return 0;
}

// Init @ 14ece9e10

bool __thiscall UVoipListenerSynthComponent::Init(UVoipListenerSynthComponent *this,int *param_1)

{
  int iVar1;
  
  iVar1 = UVOIPStatics::GetVoiceNumChannels();
  *(int *)&this->field_0x880 = iVar1;
  iVar1 = UVOIPStatics::GetVoiceSampleRate();
  *param_1 = iVar1;
  this->MySampleRate = (float)iVar1;
  return true;
}

// IsIdling @ 14ecea600

bool __thiscall UVoipListenerSynthComponent::IsIdling(UVoipListenerSynthComponent *this)

{
  FVoicePacketBuffer *pFVar1;
  
  pFVar1 = (this->PacketBuffer).Ptr;
  if (pFVar1 != (FVoicePacketBuffer *)0x0) {
    return pFVar1->bIsIdle != (FThreadSafeBool)0x0;
  }
  return true;
}

// OnGenerateAudio @ 14eced4a0

int __thiscall
UVoipListenerSynthComponent::OnGenerateAudio
          (UVoipListenerSynthComponent *this,float *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  if (this->PreDelaySampleCounter < 1) {
    if ((this->PacketBuffer).Ptr != (FVoicePacketBuffer *)0x0) {
      lpCriticalSection = &this->PacketBufferCriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (ShouldResyncCVar != 0) {
        ForceResync(this);
      }
      FVoicePacketBuffer::PopAudio((this->PacketBuffer).Ptr,param_1,param_2);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    this->PreDelaySampleCounter = this->PreDelaySampleCounter - param_2;
  }
  bVar1 = Audio::FPatchInput::IsOutputStillActive(&this->ExternalSend);
  if (bVar1) {
    Audio::FPatchInput::PushAudio(&this->ExternalSend,param_1,param_2);
  }
  if (MuteAudioEngineOutputCVar != 0) {
    memset(param_1,0,(longlong)param_2 << 2);
  }
  return param_2;
}

// OpenPacketStream @ 14ecf3a00

void __thiscall
UVoipListenerSynthComponent::OpenPacketStream
          (UVoipListenerSynthComponent *this,ulong64 param_1,int param_2,float param_3)

{
  int *piVar1;
  int *piVar2;
  TNode *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FVoicePacketBuffer *pFVar8;
  FVoicePacketBuffer *pFVar9;
  FVoicePacketBuffer *pFVar10;
  TNode *pTVar11;
  uint uVar12;
  FVoicePacketBuffer *pFVar13;
  float fVar14;
  
  ClosePacketStream(this);
  pFVar8 = ::operator_new(0x50);
  pFVar13 = (FVoicePacketBuffer *)0x0;
  pFVar10 = pFVar13;
  if (pFVar8 != (FVoicePacketBuffer *)0x0) {
    fVar14 = NumSecondsUntilIdling * this->MySampleRate;
    pFVar8->SampleCounter = param_1;
    piVar1 = &(pFVar8->PacketBuffer).ArrayMax;
    piVar2 = &(pFVar8->PacketBuffer).ArrayNum;
    pFVar8->ListHead = (FSortedVoicePacketNode *)0x0;
    pFVar8->IdleSampleCounter = 0;
    pFVar8->bIsIdle = (FThreadSafeBool)0x0;
    (pFVar8->PacketBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *piVar2 = 0;
    *piVar1 = 0;
    pFVar8->NumSamplesUntilIdling = (int)fVar14;
    pFVar9 = ::operator_new(0x10);
    if (pFVar9 != (FVoicePacketBuffer *)0x0) {
      pFVar9->ListHead = (FSortedVoicePacketNode *)0x0;
      pFVar9->SampleCounter = 0;
      pFVar9->ListHead = (FSortedVoicePacketNode *)0x0;
      pFVar10 = pFVar9;
    }
    (pFVar8->FreedIndicesQueue).Tail = (TNode *)pFVar10;
    (pFVar8->FreedIndicesQueue).Head = (TNode *)pFVar10;
    (pFVar8->NumBufferedSamples).Counter = 0;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,param_2,&(pFVar8->PacketBuffer).AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<FSortedVoicePacketNode,int>
              ((pFVar8->PacketBuffer).AllocatorInstance.Data + (longlong)iVar6 * 0x30,param_2);
    pFVar9 = pFVar13;
    pFVar10 = pFVar8;
    if (0 < param_2) {
      do {
        uVar12 = (uint)pFVar13;
        uVar7 = 0;
        if ((int)uVar12 < *piVar2) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(uint *)((pFVar8->PacketBuffer).AllocatorInstance.Data +
                 (longlong)&(pFVar9->PacketBuffer).AllocatorInstance) = uVar12;
        pTVar11 = ::operator_new(0x10);
        if (pTVar11 != (TNode *)0x0) {
          pTVar11->NextNode = (TNode *)0x0;
          pTVar11->Item = uVar12;
          pTVar3 = (pFVar8->FreedIndicesQueue).Head;
          (pFVar8->FreedIndicesQueue).Head = pTVar11;
          pTVar3->NextNode = pTVar11;
        }
        pFVar13 = (FVoicePacketBuffer *)(ulonglong)(uVar12 + 1);
        pFVar9 = (FVoicePacketBuffer *)&pFVar9->FreedIndicesQueue;
      } while ((int)(uVar12 + 1) < param_2);
    }
  }
  TUniquePtr<FVoicePacketBuffer,TDefaultDelete<FVoicePacketBuffer>_>::Reset
            (&this->PacketBuffer,pFVar10);
  this->JitterDelayInSeconds = param_3;
  this->PreDelaySampleCounter = (int)(param_3 * this->MySampleRate);
  return;
}

// ResetBuffer @ 14ecf94e0

void __thiscall
UVoipListenerSynthComponent::ResetBuffer
          (UVoipListenerSynthComponent *this,int param_1,float param_2)

{
  FVoicePacketBuffer *pFVar1;
  TNode *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TNode *pTVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  pFVar1 = (this->PacketBuffer).Ptr;
  if (pFVar1 != (FVoicePacketBuffer *)0x0) {
    uVar7 = 0;
    while( true ) {
      pTVar6 = ((pFVar1->FreedIndicesQueue).Tail)->NextNode;
      if (pTVar6 == (TNode *)0x0) break;
      pTVar2 = (pFVar1->FreedIndicesQueue).Tail;
      (pFVar1->FreedIndicesQueue).Tail = pTVar6;
      pTVar6->Item = 0;
      ::operator_delete(pTVar2,0x10);
    }
    uVar9 = uVar7;
    if (0 < (pFVar1->PacketBuffer).ArrayNum) {
      do {
        uVar8 = (uint)uVar9;
        uVar5 = 0;
        if ((int)uVar8 < (pFVar1->PacketBuffer).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined8 *)((pFVar1->PacketBuffer).AllocatorInstance.Data + uVar7 + 0x18) = 0;
        pTVar6 = ::operator_new(0x10);
        if (pTVar6 != (TNode *)0x0) {
          pTVar6->NextNode = (TNode *)0x0;
          pTVar6->Item = uVar8;
          pTVar2 = (pFVar1->FreedIndicesQueue).Head;
          (pFVar1->FreedIndicesQueue).Head = pTVar6;
          pTVar2->NextNode = pTVar6;
        }
        uVar7 = uVar7 + 0x30;
        uVar9 = (ulonglong)(uVar8 + 1);
      } while ((int)(uVar8 + 1) < (pFVar1->PacketBuffer).ArrayNum);
    }
    pFVar1->ListHead = (FSortedVoicePacketNode *)0x0;
    pFVar1->IdleSampleCounter = 0;
    LOCK();
    pFVar1->bIsIdle = (FThreadSafeBool)0x0;
    UNLOCK();
    pFVar1->SampleCounter = (longlong)param_1;
    this->PreDelaySampleCounter = (int)(param_2 * this->MySampleRate);
  }
  return;
}

// StaticRegisterNativesUVoipListenerSynthComponent @ 14ecfb740

void __cdecl UVoipListenerSynthComponent::StaticRegisterNativesUVoipListenerSynthComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UVoipListenerSynthComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SubmitPacket @ 14ecfbb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UVoipListenerSynthComponent::SubmitPacket
          (UVoipListenerSynthComponent *this,void *param_1,int param_2,long64 param_3,
          EVoipStreamDataFormat param_4)

{
  FVoicePacketBuffer *this_00;
  
  this_00 = (this->PacketBuffer).Ptr;
  if (this_00 != (FVoicePacketBuffer *)0x0) {
    StartSample = StartSample + ((ulonglong)(longlong)param_2 >> 1);
    FVoicePacketBuffer::PushPacket(this_00,param_1,param_2,StartSample,param_4);
    return;
  }
  if (1 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    return;
  }
  return;
}

// execIsIdling @ 14ed0a600

void __cdecl
UVoipListenerSynthComponent::execIsIdling(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x38].field_0x18 != 0) {
    *(bool *)param_3 = *(int *)(*(longlong *)&param_1[0x38].field_0x18 + 0x14) != 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

