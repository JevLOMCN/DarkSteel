// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 77

// <lambda_invoker_cdecl> @ 147608100

void __cdecl
`FAudioDeviceManager::InitSoundClasses'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (uint param_1,FAudioDevice *param_2)

{
  FAudioDevice::InitSoundClasses(param_2);
  return;
}

// <lambda_invoker_cdecl> @ 147608110

void __cdecl
`FAudioDeviceManager::InitSoundSubmixes'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (uint param_1,FAudioDevice *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147608116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2->_padding_ + 0x70))(param_2);
  return;
}

// FAudioDeviceManager @ 14761c6b0

FAudioDeviceManager * __thiscall FAudioDeviceManager::FAudioDeviceManager(FAudioDeviceManager *this)

{
  TUniquePtr<Audio::FAudioDebugger,TDefaultDelete<Audio::FAudioDebugger>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FAudioDebugger *pFVar4;
  FAudioDebugger *pFVar5;
  wchar_t *pwVar6;
  FAudioDeviceManager *pFVar7;
  ForAnyElementType FVar8;
  undefined8 local_res8;
  longlong local_38;
  FString local_30;
  
  pTVar1 = &this->AudioDebugger;
  pFVar5 = (FAudioDebugger *)0x0;
  (this->Buffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffers).ArrayNum = 0;
  (this->Buffers).ArrayMax = 0;
  *(undefined8 *)&this->WaveBufferMap = 0;
  *(undefined8 *)&(this->WaveBufferMap).field_0x8 = 0;
  *(undefined8 *)&(this->WaveBufferMap).field_0x20 = 0;
  *(undefined4 *)&(this->WaveBufferMap).field_0x28 = 0;
  *(undefined4 *)&(this->WaveBufferMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WaveBufferMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WaveBufferMap).field_0x34 = 0;
  *(undefined8 *)&(this->WaveBufferMap).field_0x40 = 0;
  *(undefined4 *)&(this->WaveBufferMap).field_0x48 = 0;
  (this->AudioFormatSettings).Ptr = (FAudioFormatSettings *)0x0;
  (this->EngineFormats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineFormats).ArrayNum = 0;
  (this->EngineFormats).ArrayMax = 0;
  this->AudioDeviceModule = (IAudioDeviceModule *)0x0;
  (this->AudioMixerModuleName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioMixerModuleName).Data.ArrayNum = 0;
  (this->AudioMixerModuleName).Data.ArrayMax = 0;
  pTVar1->Ptr = (FAudioDebugger *)0x0;
  (this->MainAudioDeviceHandle).World.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->MainAudioDeviceHandle,(FObjectPtr)&local_res8);
  (this->MainAudioDeviceHandle).Device = (FAudioDevice *)0x0;
  (this->MainAudioDeviceHandle).DeviceId = 0xffffffff;
  *(undefined8 *)&this->Devices = 0;
  *(undefined8 *)&(this->Devices).field_0x8 = 0;
  *(undefined8 *)&(this->Devices).field_0x20 = 0;
  *(undefined4 *)&(this->Devices).field_0x28 = 0;
  *(undefined4 *)&(this->Devices).field_0x2c = 0x80;
  *(undefined4 *)&(this->Devices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Devices).field_0x34 = 0;
  *(undefined8 *)&(this->Devices).field_0x40 = 0;
  *(undefined4 *)&(this->Devices).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DeviceMapCriticalSection,4000);
  *(undefined8 *)&this->DynamicSoundVolumes = 0;
  *(undefined8 *)&(this->DynamicSoundVolumes).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicSoundVolumes).field_0x20 = 0;
  this->DeviceIDCounter = 0;
  this->NextResourceID = 1;
  this->SoloDeviceHandle = 0xffffffff;
  this->ActiveAudioDeviceID = 0xffffffff;
  *(undefined4 *)&(this->DynamicSoundVolumes).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicSoundVolumes).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicSoundVolumes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicSoundVolumes).field_0x34 = 0;
  *(undefined8 *)&(this->DynamicSoundVolumes).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicSoundVolumes).field_0x48 = 0;
  this->bPlayAllDeviceAudio = false;
  (this->SyncFence).Fence.Pimpl.Reference = (FTaskBase *)0x0;
  this->InitPhase = Constructed;
  pFVar4 = ::operator_new(0x98);
  if (pFVar4 != (FAudioDebugger *)0x0) {
    pFVar5 = Audio::FAudioDebugger::FAudioDebugger(pFVar4);
  }
  if (pTVar1 == (TUniquePtr<Audio::FAudioDebugger,TDefaultDelete<Audio::FAudioDebugger>_> *)
                &local_38) {
    if (pFVar5 == (FAudioDebugger *)0x0) goto LAB_14761c884;
    Audio::FAudioDebugger::FDebugNames::~FDebugNames(&pFVar5->DebugNames);
  }
  else {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar5;
    if (pFVar4 == (FAudioDebugger *)0x0) goto LAB_14761c884;
    Audio::FAudioDebugger::FDebugNames::~FDebugNames(&pFVar4->DebugNames);
    pFVar5 = pFVar4;
  }
  ::operator_delete(pFVar5,0x98);
LAB_14761c884:
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  pwVar6 = FCommandLine::Get();
  bVar3 = FParse::Value(pwVar6,L"DebugSound=",&local_30,true,(wchar_t **)0x0);
  if (bVar3) {
    if ((pTVar1->Ptr == (FAudioDebugger *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioDebugger.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                           ,0x537,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FAudioDeviceManager *)(*pcVar2)();
      return pFVar7;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_30.Data.ArrayNum != 0) {
      FVar8.Data = local_30.Data.AllocatorInstance.Data;
    }
    Audio::FAudioDebugger::SetAudioDebugSound(pTVar1->Ptr,(wchar_t *)FVar8.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FAudioDeviceManager @ 147620e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAudioDeviceManager::~FAudioDeviceManager(FAudioDeviceManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FAudioFormatSettings *pFVar3;
  FAudioDebugger *pFVar4;
  code *pcVar5;
  FAudioDeviceManager *this_00;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  UWorld *pUVar10;
  int iVar11;
  int iVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_d0;
  undefined4 local_c0;
  FScriptContainerElement *local_b8;
  FAudioDeviceHandle local_b0;
  FAudioDeviceManager *local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uchar local_50 [4];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_98 = this;
  if (3 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->DeviceMapCriticalSection;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  this_01 = (TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&this->Devices;
  TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
              *)this_01,&local_d0);
  LeaveCriticalSection(lpCriticalSection);
  if (0 < local_d0.ArrayNum) {
    iVar11 = local_d0.ArrayNum;
    if (3 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      iVar11 = local_d0.ArrayNum;
    }
    pFVar1 = local_d0.AllocatorInstance.Data + (longlong)iVar11 * 4;
    FVar14.Data = local_d0.AllocatorInstance.Data;
    iVar12 = iVar11;
    while( true ) {
      local_b8 = FVar14.Data;
      if (iVar12 != iVar11) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_d8);
      }
      if (FVar14.Data == pFVar1) break;
      local_c0 = *(undefined4 *)FVar14.Data;
      EnterCriticalSection
                ((LPCRITICAL_SECTION)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed);
      bVar8 = false;
      FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._60_4_ =
           FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._60_4_ + 1;
      uVar15 = FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._48_4_ - 1;
      if (-1 < (int)uVar15) {
        lVar13 = (longlong)(int)uVar15 << 4;
        bVar8 = false;
        do {
          uVar9 = 0;
          if ((int)uVar15 < (int)FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._48_4_) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((*(int *)(lVar13 + 8 + FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._40_8_)
                == 0) ||
              (*(longlong **)(lVar13 + FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._40_8_)
               == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(**(longlong **)
                                     (lVar13 + FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed.
                                               _40_8_) + 0x68))(), cVar7 == '\0')) {
            bVar8 = true;
          }
          lVar13 = lVar13 + -0x10;
          uVar15 = uVar15 - 1;
          FVar14.Data = local_b8;
        } while (-1 < (int)uVar15);
      }
      FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._60_4_ =
           FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._60_4_ + -1;
      if (bVar8) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                   &FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,false);
      }
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed);
      FVar14.Data = FVar14.Data + 4;
      iVar12 = local_d0.ArrayNum;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&local_98->DeviceMapCriticalSection;
    this_01 = (TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&local_98->Devices;
    this = local_98;
  }
  FAudioThread::StopAudioThread();
  local_88._0_8_ = (void *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  EnterCriticalSection(lpCriticalSection);
  if ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)local_88 != this_01) {
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    if ((void *)local_88._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    local_88._0_8_ = *(undefined8 *)this_01;
    *(undefined8 *)this_01 = 0;
    local_88._8_8_ = *(undefined8 *)&this_01->field_0x8;
    *(undefined8 *)&this_01->field_0x8 = 0;
    if (local_88 + 0x10 != &this_01->field_0x10) {
      if (*(longlong *)&this_01->field_0x20 == 0) {
        local_88._16_8_ = *(undefined8 *)&this_01->field_0x10;
        local_88._24_8_ = *(undefined8 *)&this_01->field_0x18;
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      local_68 = *(void **)&this_01->field_0x20;
      *(undefined8 *)&this_01->field_0x20 = 0;
      local_60 = *(undefined4 *)&this_01->field_0x28;
      local_5c = *(undefined4 *)&this_01->field_0x2c;
      *(undefined8 *)&this_01->field_0x28 = 0;
    }
    local_58 = *(undefined4 *)&this_01->field_0x30;
    local_54 = *(undefined4 *)&this_01->field_0x34;
    *(undefined4 *)&this_01->field_0x34 = 0;
    *(undefined4 *)&this_01->field_0x30 = 0xffffffff;
    if (*(longlong *)&this_01[1].field_0x8 == 0) {
      local_50[0] = this_01[1].field_0x0;
      local_50[1] = this_01[1].field_0x1;
      local_50[2] = this_01[1].field_0x2;
      local_50[3] = this_01[1].field_0x3;
    }
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    local_48 = *(ForElementType<FSetElementId> *)&this_01[1].field_0x8;
    *(undefined8 *)&this_01[1].field_0x8 = 0;
    local_40 = *(int *)&this_01[1].field_0x10;
    *(undefined4 *)&this_01[1].field_0x10 = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  TSet<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>,FDefaultSetAllocator>
           *)local_88);
  local_b0.World.WeakPtr.ObjectIndex = 0;
  local_b0.World.WeakPtr.ObjectSerialNumber = 0;
  local_90 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_b0,(FObjectPtr)&local_90);
  local_b0.Device = (FAudioDevice *)0x0;
  local_b0.DeviceId = 0xffffffff;
  FAudioDeviceHandle::operator=(&this->MainAudioDeviceHandle,&local_b0);
  this_00 = Singleton;
  if (local_b0.Device != (FAudioDevice *)0x0) {
    if ((Singleton == (FAudioDeviceManager *)0x0) || (Singleton->InitPhase != Initialized)) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6883895825940871781>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                         ,0x59b,"AudioDeviceManager");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pUVar10 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_b0);
      DecrementDevice(this_00,local_b0.DeviceId,pUVar10);
    }
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationWillEnterBackgroundDelegate,this);
  this->InitPhase = Constructed;
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  FAudioCommandFence::~FAudioCommandFence(&this->SyncFence);
  *(undefined4 *)&(this->DynamicSoundVolumes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DynamicSoundVolumes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<enum_ESoundType,FName>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<enum_ESoundType,FName>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DynamicSoundVolumes);
  DeleteCriticalSection(lpCriticalSection);
  *(undefined4 *)&this_01[1].field_0x10 = 0;
  if (*(void **)&this_01[1].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this_01[1].field_0x8);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this_01);
  FAudioDeviceHandle::~FAudioDeviceHandle(&this->MainAudioDeviceHandle);
  pFVar1 = (this->AudioMixerModuleName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TPimplPtr<FSimpleAudioInfoFactory,0>,int>
            ((TPimplPtr<FSimpleAudioInfoFactory,0> *)(this->EngineFormats).AllocatorInstance.Data,
             (this->EngineFormats).ArrayNum);
  pFVar1 = (this->EngineFormats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar3 = (this->AudioFormatSettings).Ptr;
  if (pFVar3 != (FAudioFormatSettings *)0x0) {
    (**(code **)&pFVar3[-1].AudioFormatCache.field_0x40)(&pFVar3[-1].AudioFormatCache.field_0x40);
  }
  pFVar4 = (this->AudioDebugger).Ptr;
  if (pFVar4 != (FAudioDebugger *)0x0) {
    Audio::FAudioDebugger::FDebugNames::~FDebugNames(&pFVar4->DebugNames);
    ::operator_delete(pFVar4,0x98);
  }
  *(undefined4 *)&(this->WaveBufferMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WaveBufferMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FSoundBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FSoundBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FSoundBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WaveBufferMap);
  pFVar1 = (this->Buffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 147624410

void __thiscall
`FAudioDeviceManager::RemoveSoundMix'::__l2::<lambda_2>::operator()
          (void *this,uint param_1,FAudioDevice *param_2)

{
  USoundMix *pUVar1;
  USoundMix *pUVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar1 = *(USoundMix **)this;
  bVar4 = IsInAudioThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDevice.cpp"
                       ,0x9ac,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pUVar1 != (USoundMix *)0x0) {
    pUVar2 = (param_2->DefaultBaseSoundMix).field0_0x0.DebugPtr;
    if ((pUVar2 != (USoundMix *)0x0) && (pUVar2 == pUVar1)) {
      (param_2->DefaultBaseSoundMix).field0_0x0.DebugPtr = (USoundMix *)0x0;
    }
    FAudioDevice::ClearSoundMix(param_2,pUVar1);
    if (param_2->BaseSoundMix == (USoundMix *)0x0) {
      FAudioDevice::SetBaseSoundMix(param_2,(param_2->DefaultBaseSoundMix).field0_0x0.DebugPtr);
    }
  }
  return;
}

// AddReferencedObjects @ 147629340

void __thiscall
FAudioDeviceManager::AddReferencedObjects(FAudioDeviceManager *this,FReferenceCollector *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  FReferenceCollector *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAudioDeviceManager::AddReferencedObjects'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAudioDeviceManager::AddReferencedObjects'::__l2::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                ::Call;
  local_20 = param_1;
  IterateOverAllDevices(this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38)
  ;
  return;
}

// AppWillEnterBackground @ 14762a090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAudioDeviceManager::AppWillEnterBackground(FAudioDeviceManager *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_void___cdecl_FAudioDeviceManager::AppWillEnterBackground(void)_::_2_::FStat_STAT_FAudioDeviceManager_AppWillEnterBackground>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar7;
  FNameEntryId FVar8;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_68;
  code *local_58 [2];
  undefined **local_48;
  FAudioDeviceManager *local_40;
  undefined8 local_30;
  
  FVar8.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FAudioDeviceManager_AppWillEnterBackground ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FAudioDeviceManager::AppWillEnterBackground(void)_::_2_::FStat_STAT_FAudioDeviceManager_AppWillEnterBackground>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res10.s,
                                "STAT_FAudioDeviceManager_AppWillEnterBackground");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FAudioDeviceManager_AppWillEnterBackground,*pFVar5,
                   L"STAT_FAudioDeviceManager_AppWillEnterBackground","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_FAudioDeviceManager_AppWillEnterBackground;
  if (StatPtr_STAT_FAudioDeviceManager_AppWillEnterBackground ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAudioDeviceManager::AppWillEnterBackground(void)_::_2_::FStat_STAT_FAudioDeviceManager_AppWillEnterBackground>
       )0x0) {
    pFVar5 = ::FName::FName(local_res18,"STAT_FAudioDeviceManager_AppWillEnterBackground");
    FVar6 = (FThreadSafeStaticStat<_private:_void___cdecl_FAudioDeviceManager::AppWillEnterBackground(void)_::_2_::FStat_STAT_FAudioDeviceManager_AppWillEnterBackground>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FAudioDeviceManager_AppWillEnterBackground,*pFVar5,
                         L"STAT_FAudioDeviceManager_AppWillEnterBackground","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar7 = *(LARGE_INTEGER *)FVar6;
  bVar2 = false;
  bVar4 = false;
  if ((LVar7.s.LowPart != 0) || (LVar7.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.QuadPart = local_res10.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10 = LVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                   ,0x548);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = LVar7;
      FThreadStats::AddMessage((FName)LVar7.s,CycleScopeStart);
      bVar3 = true;
      FVar8.Value = LVar7.s.LowPart;
      goto LAB_14762a219;
    }
  }
  bVar3 = false;
  LVar7._0_4_ = 0;
  LVar7._4_4_ = 0;
LAB_14762a219:
  if (GCVarFlushAudioRenderCommandsOnSuspend != 0) {
    if ((this->MainAudioDeviceHandle).Device != (FAudioDevice *)0x0) {
      local_30 = 0;
      local_48 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FAudioDeviceManager::AppWillEnterBackground'::`8'::<lambda_1>,1,0>
                  ::_vftable_;
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FAudioDeviceManager::AppWillEnterBackground'::__l8::<lambda_1>,void>
                    ::Call;
      local_40 = this;
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)local_58,(TStatId)0x154f11430);
    }
    local_res10.s.LowPart = 0;
    local_res10.s.HighPart = 0;
    FAudioCommandFence::BeginFence((FAudioCommandFence *)&local_res10.s);
    FAudioCommandFence::Wait((FAudioCommandFence *)&local_res10.s,false);
    FAudioCommandFence::~FAudioCommandFence((FAudioCommandFence *)&local_res10.s);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar7.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Number = LVar7.s.HighPart & 0xffff6fffU | 0x6000;
      local_68.NameAndInfo.Index.Value = FVar8.Value;
      QueryPerformanceCounter(&local_res10);
      local_68.StatData.Pad = (uchar  [8])(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// BuildNewHandle @ 14762b8d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDeviceHandle * __thiscall
FAudioDeviceManager::BuildNewHandle
          (FAudioDeviceManager *this,FAudioDeviceHandle *__return_storage_ptr__,
          FAudioDeviceContainer *param_1,uint param_2,FAudioDeviceParams *param_3)

{
  FAudioDevice *pFVar1;
  UWorld *pUVar2;
  FAudioDeviceManager *this_00;
  
  if ((Singleton == (FAudioDeviceManager *)0x0) ||
     (this_00 = Singleton, Singleton->InitPhase != Initialized)) {
    this_00 = (FAudioDeviceManager *)0x0;
  }
  IncrementDevice(this_00,param_2);
  pFVar1 = param_1->Device;
  pUVar2 = param_3->AssociatedWorld;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (__return_storage_ptr__->World).WeakPtr = (FWeakObjectPtr)0x0;
  param_3 = (FAudioDeviceParams *)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&param_3);
  __return_storage_ptr__->Device = pFVar1;
  __return_storage_ptr__->DeviceId = param_2;
  return __return_storage_ptr__;
}

// CanUseAudioDevice @ 14762d290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FAudioDeviceManager::CanUseAudioDevice(FAudioDeviceParams *param_1,FAudioDeviceContainer *param_2)

{
  if (((param_2->Scope == Shared) && (param_1->AudioModule == param_2->SpecifiedModule)) &&
     (param_1->bIsNonRealtime == param_2->bIsNonRealtime)) {
    return true;
  }
  return false;
}

// CreateMainAudioDevice @ 1476315f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FAudioDeviceManager::CreateMainAudioDevice(FAudioDeviceManager *this)

{
  code *pcVar1;
  FAudioDeviceManager *this_00;
  bool bVar2;
  undefined1 uVar3;
  FAudioDeviceHandle *pFVar4;
  UWorld *pUVar5;
  FAudioDeviceHandle local_48;
  FAudioDeviceParams local_30;
  
  if ((this->MainAudioDeviceHandle).Device == (FAudioDevice *)0x0) {
    local_30.AssociatedWorld = GWorld.World;
    local_30.AudioModule = (IAudioDeviceModule *)0x0;
    local_30.BufferSizeOverride = -1;
    local_30.NumBuffersOverride = -1;
    local_30.Scope = Shared;
    local_30.bIsNonRealtime = false;
    pFVar4 = RequestAudioDevice(this,&local_48,&local_30);
    FAudioDeviceHandle::operator=(&this->MainAudioDeviceHandle,pFVar4);
    this_00 = Singleton;
    if (local_48.Device != (FAudioDevice *)0x0) {
      if ((Singleton == (FAudioDeviceManager *)0x0) || (Singleton->InitPhase != Initialized)) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6883895825940871781>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                           ,0x59b,"AudioDeviceManager");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      else {
        pUVar5 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_48);
        DecrementDevice(this_00,local_48.DeviceId,pUVar5);
      }
    }
    if ((this->MainAudioDeviceHandle).Device == (FAudioDevice *)0x0) {
      if (3 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
      return false;
    }
    if (GWorld.World != (UWorld *)0x0) {
      UWorld::SetAudioDevice(GWorld.World,&this->MainAudioDeviceHandle);
    }
    FAudioThread::StartAudioThread();
  }
  return true;
}

// CreateNewDevice @ 147631730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDeviceHandle * __thiscall
FAudioDeviceManager::CreateNewDevice
          (FAudioDeviceManager *this,FAudioDeviceHandle *__return_storage_ptr__,
          FAudioDeviceParams *param_1)

{
  TMap<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
  *this_00;
  EAudioDeviceScope EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAudioDeviceHandle *pFVar5;
  uint *puVar6;
  wchar_t *pwVar7;
  undefined1 *puVar8;
  FAudioDeviceContainer *pFVar9;
  FAudioDeviceContainer *pFVar10;
  uint local_res8 [4];
  uint local_res18 [4];
  FString local_c8;
  FAudioDeviceHandle local_b8;
  FString local_a0;
  undefined8 local_90;
  undefined8 local_88;
  uint *local_80;
  FAudioDeviceContainer *local_78;
  FAudioDeviceContainer local_70;
  
  pFVar10 = (FAudioDeviceContainer *)0x0;
  local_res8[0] = this->DeviceIDCounter + 1;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DeviceIDCounter = local_res8[0];
  EVar1 = param_1->Scope;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  if (EVar1 != Default) {
    if (EVar1 == Shared) {
      pwVar7 = L"Shared";
      goto LAB_14763179d;
    }
    if (EVar1 == Unique) {
      pwVar7 = L"Unique";
      goto LAB_14763179d;
    }
  }
  pwVar7 = L"Default";
LAB_14763179d:
  ::FString::operator=(&local_c8,pwVar7);
  ::FString::PrintfImpl(&local_a0,L"                Id: %d, Scope: %s, Realtime: %s");
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (3 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  local_80 = local_res8;
  local_78 = FAudioDeviceContainer::FAudioDeviceContainer(&local_70,param_1,local_res8[0],this);
  this_00 = &this->Devices;
  TSet<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FAudioDeviceManager::FAudioDeviceContainer_&&>_>
            ((TSet<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<unsigned_int_const_&,FAudioDeviceManager::FAudioDeviceContainer_&&> *
             )(local_res18 + 2),(bool *)&local_80);
  if ((local_70.NumberOfHandlesToThisDevice != 0) && (3 < (byte)LogAudio._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  if (local_70.Device != (FAudioDevice *)0x0) {
    (**(code **)((local_70.Device)->_padding_ + 0x40))();
    FAudioDevice::Teardown(local_70.Device);
    if (local_70.Device != (FAudioDevice *)0x0) {
      (**(code **)(local_70.Device)->_padding_)(local_70.Device,1);
    }
    local_70.Device = (FAudioDevice *)0x0;
  }
  if (local_70.WorldsUsingThisDevice.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.WorldsUsingThisDevice.AllocatorInstance.Data);
  }
  pFVar9 = pFVar10;
  if (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34) {
    puVar8 = *(undefined1 **)&(this->Devices).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Devices).field_0x38;
    }
    uVar4 = *(uint *)(puVar8 + (ulonglong)(*(int *)&(this->Devices).field_0x48 - 1U & local_res8[0])
                               * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x40 + *(longlong *)&this_00->field_0x0);
        if (*puVar6 == local_res8[0]) {
          pFVar9 = (FAudioDeviceContainer *)(puVar6 + 2);
          if (puVar6 == (uint *)0x0) {
            pFVar9 = pFVar10;
          }
          if (pFVar9 != (FAudioDeviceContainer *)0x0) goto LAB_147631938;
          break;
        }
        uVar4 = puVar6[0xe];
      } while (uVar4 != 0xffffffff);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ContainerPtr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                     ,0x203,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FAudioDeviceHandle *)(*pcVar2)();
    return pFVar5;
  }
LAB_147631938:
  if (pFVar9->Device == (FAudioDevice *)0x0) {
    if (3 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    local_res18[0] = local_res8[0];
    if (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34) {
      TSet<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>,FDefaultSetAllocator>
                  *)this_00,local_res8[0],local_res18);
    }
    (__return_storage_ptr__->World).WeakPtr = (FWeakObjectPtr)0x0;
    local_90 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_90);
    __return_storage_ptr__->Device = (FAudioDevice *)0x0;
    __return_storage_ptr__->DeviceId = 0xffffffff;
  }
  else {
    RegisterWorld(this,param_1->AssociatedWorld,local_res8[0]);
    BuildNewHandle(this,&local_b8,pFVar9,local_res8[0],param_1);
    TMulticastDelegate<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Broadcast
              (&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,local_res8[0]);
    (__return_storage_ptr__->World).WeakPtr = (FWeakObjectPtr)0x0;
    local_88 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_88);
    __return_storage_ptr__->Device = (FAudioDevice *)0x0;
    __return_storage_ptr__->DeviceId = 0xffffffff;
    FWeakObjectPtr::Get((FWeakObjectPtr *)__return_storage_ptr__);
    __return_storage_ptr__->Device = local_b8.Device;
    __return_storage_ptr__->DeviceId = local_b8.DeviceId;
    (__return_storage_ptr__->World).WeakPtr = local_b8.World.WeakPtr;
    local_b8.Device = (FAudioDevice *)0x0;
    local_b8.DeviceId = 0xffffffff;
    local_b8.World.WeakPtr.ObjectIndex = 0;
    local_b8.World.WeakPtr.ObjectSerialNumber = 0;
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DecrementDevice @ 147632910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAudioDeviceManager::DecrementDevice(FAudioDeviceManager *this,uint param_1,UWorld *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
  *this_00;
  FAudioDevice *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAudioDeviceContainer *pFVar7;
  undefined1 *puVar8;
  undefined1 local_res8 [8];
  uint local_res20 [2];
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->Devices;
  if (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34) {
    puVar8 = *(undefined1 **)&(this->Devices).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Devices).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->Devices).field_0x48 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)((longlong)iVar6 * 0x40 + *(longlong *)&this_00->field_0x0) == param_1) {
          pFVar7 = TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
                   ::FindChecked((TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
                                  *)this_00,param_1);
          if ((pFVar7->NumberOfHandlesToThisDevice < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Container.NumberOfHandlesToThisDevice > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                                 ,0x233,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar5 = false;
          if (pFVar7->NumberOfHandlesToThisDevice == 1) {
            bVar5 = true;
            TMulticastDelegate<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Broadcast
                      (&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,param_1);
            pFVar2 = pFVar7->Device;
            FSubsystemCollectionBase::Deinitialize
                      ((FSubsystemCollectionBase *)&pFVar2->SubsystemCollection);
            pUVar3 = (pFVar2->SubsystemCollectionRoot).Object;
            if (pUVar3 != (UObject *)0x0) {
              UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
              (pFVar2->SubsystemCollectionRoot).Object = (UObject *)0x0;
            }
            if (param_1 == this->ActiveAudioDeviceID) {
              SetActiveDevice(this,(this->MainAudioDeviceHandle).DeviceId);
            }
            UnregisterWorld(this,param_2,param_1);
          }
          piVar1 = &pFVar7->NumberOfHandlesToThisDevice;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            pFVar2 = pFVar7->Device;
            pFVar7->Device = (FAudioDevice *)0x0;
            local_res20[0] = param_1;
            if (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34) {
              TSet<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>,FDefaultSetAllocator>
              ::RemoveImpl<unsigned_int>
                        ((TSet<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>,FDefaultSetAllocator>
                          *)this_00,param_1,local_res20);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            if (pFVar2 == (FAudioDevice *)0x0) {
              return;
            }
            (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
            FAudioDevice::Teardown(pFVar2);
            (**(code **)pFVar2->_padding_)(pFVar2,1);
            return;
          }
          if (bVar5) {
            `FAudioDeviceManager::DecrementDevice'::__l22::<lambda_1>::operator()(local_res8);
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x40 + 0x38 + *(longlong *)&this_00->field_0x0);
      } while (iVar6 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// EnableAggregateDeviceSupport @ 147636830

void __cdecl FAudioDeviceManager::EnableAggregateDeviceSupport(bool param_1)

{
  bEnableAggregateDeviceSupport = param_1;
  return;
}

// FreeBufferResource @ 14763a080

void __thiscall
FAudioDeviceManager::FreeBufferResource(FAudioDeviceManager *this,FSoundBuffer *param_1)

{
  if (param_1 != (FSoundBuffer *)0x0) {
    (**(code **)(param_1->_padding_ + 0x48))(param_1);
    (**(code **)param_1->_padding_)(param_1,1);
  }
  return;
}

// FreeResource @ 14763a0b0

void __thiscall FAudioDeviceManager::FreeResource(FAudioDeviceManager *this,USoundWave *param_1)

{
  if (param_1->ResourceID != 0) {
    (param_1->DecompressionType).Value = '\0';
    LOCK();
    (param_1->PrecacheState).Counter = 0;
    UNLOCK();
    param_1->ResourceID = 0;
  }
  return;
}

// Get @ 14763a150

FAudioDeviceManager * __cdecl FAudioDeviceManager::Get(void)

{
  FAudioDeviceManager *pFVar1;
  
  if ((Singleton == (FAudioDeviceManager *)0x0) ||
     (pFVar1 = Singleton, Singleton->InitPhase != Initialized)) {
    pFVar1 = (FAudioDeviceManager *)0x0;
  }
  return pFVar1;
}

// GetActiveAudioDevice @ 14763a1e0

/* WARNING: Removing unreachable block (ram,0x00014763a279) */
/* WARNING: Removing unreachable block (ram,0x00014763a285) */
/* WARNING: Removing unreachable block (ram,0x00014763a2a9) */
/* WARNING: Removing unreachable block (ram,0x00014763a2d5) */
/* WARNING: Removing unreachable block (ram,0x00014763a28e) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDeviceHandle * __thiscall
FAudioDeviceManager::GetActiveAudioDevice
          (FAudioDeviceManager *this,FAudioDeviceHandle *__return_storage_ptr__)

{
  uint uVar1;
  FAudioDevice *pFVar2;
  undefined8 local_res8;
  undefined8 local_res18;
  FAudioDeviceHandle local_28;
  
  if ((this->ActiveAudioDeviceID != 0xffffffff) &&
     (GetAudioDevice(this,&local_28,this->ActiveAudioDeviceID),
     local_28.Device != (FAudioDevice *)0x0)) {
    (__return_storage_ptr__->World).WeakPtr = (FWeakObjectPtr)0x0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
    __return_storage_ptr__->Device = (FAudioDevice *)0x0;
    __return_storage_ptr__->DeviceId = 0xffffffff;
    FWeakObjectPtr::Get((FWeakObjectPtr *)__return_storage_ptr__);
    __return_storage_ptr__->Device = local_28.Device;
    __return_storage_ptr__->DeviceId = local_28.DeviceId;
    (__return_storage_ptr__->World).WeakPtr = local_28.World.WeakPtr;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res18 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res18);
  __return_storage_ptr__->Device = (FAudioDevice *)0x0;
  __return_storage_ptr__->DeviceId = 0xffffffff;
  FWeakObjectPtr::Get((FWeakObjectPtr *)__return_storage_ptr__);
  pFVar2 = (this->MainAudioDeviceHandle).Device;
  __return_storage_ptr__->Device = pFVar2;
  uVar1 = (this->MainAudioDeviceHandle).DeviceId;
  __return_storage_ptr__->DeviceId = uVar1;
  (__return_storage_ptr__->World).WeakPtr = (this->MainAudioDeviceHandle).World.WeakPtr;
  if (((Singleton != (FAudioDeviceManager *)0x0) && (Singleton->InitPhase == Initialized)) &&
     (pFVar2 != (FAudioDevice *)0x0)) {
    IncrementDevice(Singleton,uVar1);
  }
  return __return_storage_ptr__;
}

// GetAudioDevice @ 14763aa00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDeviceHandle * __thiscall
FAudioDeviceManager::GetAudioDevice
          (FAudioDeviceManager *this,FAudioDeviceHandle *__return_storage_ptr__,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FAudioDeviceContainer *pFVar2;
  undefined1 *puVar3;
  FAudioDeviceContainer *pFVar4;
  FAudioDeviceContainer *pFVar5;
  undefined8 local_res8;
  FAudioDeviceParams local_38;
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = (FAudioDeviceContainer *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34) {
    puVar3 = *(undefined1 **)&(this->Devices).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->Devices).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->Devices).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FAudioDeviceContainer *)((longlong)iVar1 * 0x40 + *(longlong *)&this->Devices);
        if (*(uint *)&pFVar2->Device == param_1) break;
        iVar1 = pFVar2[1].NumberOfHandlesToThisDevice;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar4 = (FAudioDeviceContainer *)&pFVar2->NumberOfHandlesToThisDevice;
  if (pFVar2 == (FAudioDeviceContainer *)0x0) {
    pFVar4 = pFVar5;
  }
  if (pFVar4 == (FAudioDeviceContainer *)0x0) {
    (__return_storage_ptr__->World).WeakPtr = (FWeakObjectPtr)0x0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
    __return_storage_ptr__->Device = (FAudioDevice *)0x0;
    __return_storage_ptr__->DeviceId = 0xffffffff;
  }
  else {
    local_38._10_4_ = 0;
    local_38._14_2_ = 0;
    local_38.AssociatedWorld = (UWorld *)0x0;
    local_38.Scope = Default;
    local_38.bIsNonRealtime = false;
    local_38.AudioModule = (IAudioDeviceModule *)0x0;
    local_38.BufferSizeOverride = -1;
    local_38.NumBuffersOverride = -1;
    BuildNewHandle(this,__return_storage_ptr__,pFVar4,param_1,&local_38);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetAudioDeviceFromWorldContext @ 14763ab40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDevice * __cdecl FAudioDeviceManager::GetAudioDeviceFromWorldContext(UObject *param_1)

{
  ENetMode EVar1;
  UWorld *this;
  FAudioDevice *pFVar2;
  
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if ((this != (UWorld *)0x0) && (this->bAllowAudioPlayback != '\0')) {
    EVar1 = UWorld::InternalGetNetMode(this);
    if (EVar1 != NM_DedicatedServer) {
      pFVar2 = UWorld::GetAudioDeviceRaw(this);
      return pFVar2;
    }
  }
  return (FAudioDevice *)0x0;
}

// GetAudioDeviceModule @ 14763abd0

IAudioDeviceModule * __thiscall FAudioDeviceManager::GetAudioDeviceModule(FAudioDeviceManager *this)

{
  return this->AudioDeviceModule;
}

// GetAudioDeviceRaw @ 14763abe0

FAudioDevice * __thiscall
FAudioDeviceManager::GetAudioDeviceRaw(FAudioDeviceManager *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FAudioDeviceContainer *pFVar3;
  FAudioDevice *pFVar4;
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar2 = IsValidAudioDevice(this,param_1);
  if (bVar2) {
    pFVar3 = TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
             ::FindChecked((TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
                            *)&this->Devices,param_1);
    pFVar4 = pFVar3->Device;
    if (pFVar4 == (FAudioDevice *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioDevice != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                         ,0x28e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAudioDevice *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  else {
    pFVar4 = (FAudioDevice *)0x0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar4;
}

// GetAudioDeviceRaw @ 14763ac80

FAudioDevice * __thiscall
FAudioDeviceManager::GetAudioDeviceRaw(FAudioDeviceManager *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FAudioDeviceContainer *pFVar3;
  FAudioDevice *pFVar4;
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar2 = IsValidAudioDevice(this,param_1);
  if (bVar2) {
    pFVar3 = TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
             ::FindChecked((TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
                            *)&this->Devices,param_1);
    pFVar4 = pFVar3->Device;
    if (pFVar4 == (FAudioDevice *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioDevice != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                         ,0x29c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAudioDevice *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  else {
    pFVar4 = (FAudioDevice *)0x0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar4;
}

// GetAudioDevices @ 14763ad20

TArray<FAudioDevice_*,TSizedDefaultAllocator<32>_> * __thiscall
FAudioDeviceManager::GetAudioDevices
          (FAudioDeviceManager *this,
          TArray<FAudioDevice_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  <lambda_1> local_res8;
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Algo::
    Transform<TMap<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>,TArray<FAudioDevice_*,TSizedDefaultAllocator<32>_>_&,_FAudioDeviceManager::GetAudioDevices_::__l3::<lambda_1>_>
              (&this->Devices,__return_storage_ptr__,local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetAudioFormatSettings @ 14763ada0

FAudioFormatSettings * __thiscall
FAudioDeviceManager::GetAudioFormatSettings(FAudioDeviceManager *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioFormatSettings *pFVar3;
  
  if ((this->AudioFormatSettings).Ptr != (FAudioFormatSettings *)0x0) {
    return (this->AudioFormatSettings).Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("AudioFormatSettings.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                     ,0x459,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAudioFormatSettings *)(*pcVar1)();
    return pFVar3;
  }
  return (this->AudioFormatSettings).Ptr;
}

// GetAudioMixerDeviceFromWorldContext @ 14763ae40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMixerDevice * __cdecl FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(UObject *param_1)

{
  ENetMode EVar1;
  UWorld *this;
  FMixerDevice *pFVar2;
  
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if ((this != (UWorld *)0x0) && (this->bAllowAudioPlayback != '\0')) {
    EVar1 = UWorld::InternalGetNetMode(this);
    if (EVar1 != NM_DedicatedServer) {
      pFVar2 = (FMixerDevice *)UWorld::GetAudioDeviceRaw(this);
      return pFVar2;
    }
  }
  return (FMixerDevice *)0x0;
}

// GetDebugger @ 14763c1c0

FAudioDebugger * __thiscall FAudioDeviceManager::GetDebugger(FAudioDeviceManager *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioDebugger *pFVar3;
  
  if ((this->AudioDebugger).Ptr != (FAudioDebugger *)0x0) {
    return (this->AudioDebugger).Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("AudioDebugger.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                     ,0x537,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAudioDebugger *)(*pcVar1)();
    return pFVar3;
  }
  return (this->AudioDebugger).Ptr;
}

// GetDebugger @ 14763c210

FAudioDebugger * __thiscall FAudioDeviceManager::GetDebugger(FAudioDeviceManager *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioDebugger *pFVar3;
  
  if ((this->AudioDebugger).Ptr != (FAudioDebugger *)0x0) {
    return (this->AudioDebugger).Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("AudioDebugger.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                     ,0x53e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAudioDebugger *)(*pcVar1)();
    return pFVar3;
  }
  return (this->AudioDebugger).Ptr;
}

// GetDefaultParamsForNewWorld @ 14763c440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDeviceParams * __thiscall
FAudioDeviceManager::GetDefaultParamsForNewWorld
          (FAudioDeviceManager *this,FAudioDeviceParams *__return_storage_ptr__)

{
  __return_storage_ptr__->Scope = Shared;
  __return_storage_ptr__->bIsNonRealtime = false;
  __return_storage_ptr__->AssociatedWorld = (UWorld *)0x0;
  __return_storage_ptr__->AudioModule = (IAudioDeviceModule *)0x0;
  __return_storage_ptr__->BufferSizeOverride = -1;
  __return_storage_ptr__->NumBuffersOverride = -1;
  return __return_storage_ptr__;
}

// GetDynamicSoundVolume @ 14763d400

float __thiscall
FAudioDeviceManager::GetDynamicSoundVolume
          (FAudioDeviceManager *this,ESoundType param_1,FName *param_2)

{
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  undefined1 *puVar7;
  int iVar8;
  float fVar9;
  
  bVar4 = IsInAudioThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                         ,0x4e6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar9 = (float)(*pcVar3)();
    return fVar9;
  }
  FVar2 = *param_2;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->DynamicSoundVolumes).field_0x8 !=
      *(int *)&(this->DynamicSoundVolumes).field_0x34) {
    puVar7 = *(undefined1 **)&(this->DynamicSoundVolumes).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->DynamicSoundVolumes).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->DynamicSoundVolumes).field_0x48 - 1U &
                              (FVar2.Number + (uint)param_1 * 0x40 + (uint)(param_1 >> 2) +
                               uVar5 + 0x9e3779b9 ^ (uint)param_1)) * 4);
    if (iVar8 != -1) {
      do {
        lVar1 = *(longlong *)&this->DynamicSoundVolumes + (longlong)iVar8 * 0x18;
        if ((*(ESoundType *)(*(longlong *)&this->DynamicSoundVolumes + (longlong)iVar8 * 0x18) ==
             param_1) && (*(FName *)(lVar1 + 4) == FVar2)) {
          if (iVar8 == -1) {
            return __real_3f800000;
          }
          pfVar6 = (float *)(lVar1 + 0xc);
          if (lVar1 == 0) {
            pfVar6 = (float *)0x0;
          }
          if (pfVar6 == (float *)0x0) {
            return __real_3f800000;
          }
          if (0.0 < *pfVar6) {
            return *pfVar6;
          }
          return 0.0;
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
  }
  return __real_3f800000;
}

// GetNewDeviceID @ 14763ea70

uint __thiscall FAudioDeviceManager::GetNewDeviceID(FAudioDeviceManager *this)

{
  this->DeviceIDCounter = this->DeviceIDCounter + 1;
  return this->DeviceIDCounter;
}

// GetNumActiveAudioDevices @ 14763ea90

uchar __thiscall FAudioDeviceManager::GetNumActiveAudioDevices(FAudioDeviceManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar1;
  char cVar2;
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    cVar1 = (this->Devices).field_0x8;
    cVar2 = (this->Devices).field_0x34;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return cVar1 - cVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetNumMainAudioDeviceWorlds @ 14763eb10

uchar __thiscall FAudioDeviceManager::GetNumMainAudioDeviceWorlds(FAudioDeviceManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  FAudioDeviceContainer *pFVar4;
  undefined1 *puVar5;
  uchar uVar6;
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar1 = (this->MainAudioDeviceHandle).DeviceId;
  if (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Devices).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Devices).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->Devices).field_0x48 - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->Devices;
      do {
        if (*(uint *)((longlong)iVar3 * 0x40 + lVar2) == uVar1) {
          pFVar4 = TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
                   ::FindChecked((TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
                                  *)&this->Devices,uVar1);
          uVar6 = (uchar)(pFVar4->WorldsUsingThisDevice).ArrayNum;
          goto LAB_14763eb89;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x40 + 0x38 + lVar2);
      } while (iVar3 != -1);
    }
  }
  uVar6 = '\0';
LAB_14763eb89:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar6;
}

// GetOrCreate @ 14763ec30

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioDeviceManager * __cdecl FAudioDeviceManager::GetOrCreate(void)

{
  code *pcVar1;
  bool bVar2;
  FAudioDeviceManager *this;
  IAnalyticsProviderET *pIVar3;
  wchar_t *pwVar4;
  int *piVar5;
  FAnalyticsEventAttribute *local_38;
  undefined8 local_30;
  FString local_28;
  FString local_18;
  
  if (Singleton != (FAudioDeviceManager *)0x0) {
    return Singleton;
  }
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      _thread_safe_static_guard_0__ <= *piVar5) goto LAB_14763ec70;
  _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                       _thread_safe_static_guard_0__);
  if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      _thread_safe_static_guard_0__ != -1) goto LAB_14763ec70;
  pwVar4 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar4,L"nosound");
  if (bVar2) {
    pwVar4 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar4,L"enablesound");
    if (bVar2) goto LAB_14763ee1d;
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         true;
  }
  else {
LAB_14763ee1d:
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         false;
  }
  _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                       _thread_safe_static_guard_0__);
LAB_14763ec70:
  if (*piVar5 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                _thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
    if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        _thread_safe_static_guard_1__ == -1) {
      if ((FApp::bIsBenchmarking == false) &&
         ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = false;
      }
      else {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = true;
      }
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__);
    }
  }
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio == false) &&
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      == false)) {
    this = ::operator_new(0x1a0);
    if (this != (FAudioDeviceManager *)0x0) {
      Singleton = FAudioDeviceManager(this);
      return Singleton;
    }
    Singleton = this;
    return (FAudioDeviceManager *)0x0;
  }
  if (bDoOnce == false) {
    if (3 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    local_38 = (FAnalyticsEventAttribute *)0x0;
    local_30 = 0;
    ::FString::FString(&local_18,L"AllAudioDisabled");
    if (FEngineAnalytics::Analytics.Object != (IAnalyticsProviderET *)0x0) {
      pIVar3 = FEngineAnalytics::GetProvider();
      pcVar1 = *(code **)(pIVar3->_padding_ + 0x100);
      ::FString::ConcatCF(&local_28,L"Audio.Usage.",&local_18);
      (*pcVar1)(pIVar3,&local_28,&local_38);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    DestructItems<FAnalyticsEventAttribute,int>(local_38,(int)local_30);
    if (local_38 != (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_38);
    }
    bDoOnce = true;
  }
  return Singleton;
}

// GetSoundBufferForResourceID @ 14763fa60

FSoundBuffer * __thiscall
FAudioDeviceManager::GetSoundBufferForResourceID(FAudioDeviceManager *this,uint param_1)

{
  return (FSoundBuffer *)0x0;
}

// GetWorldsUsingAudioDevice @ 147640e80

TArray<UWorld_*,TSizedDefaultAllocator<32>_> * __thiscall
FAudioDeviceManager::GetWorldsUsingAudioDevice
          (FAudioDeviceManager *this,
          TArray<UWorld_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,uint *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  longlong lVar2;
  FScriptContainerElement *_Src;
  int iVar3;
  FAudioDeviceContainer *pFVar4;
  undefined1 *puVar5;
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar1 = *param_1;
  if (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Devices).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Devices).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->Devices).field_0x48 - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->Devices;
      do {
        if (*(uint *)((longlong)iVar3 * 0x40 + lVar2) == uVar1) {
          pFVar4 = TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
                   ::FindChecked((TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
                                  *)&this->Devices,uVar1);
          (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          iVar3 = (pFVar4->WorldsUsingThisDevice).ArrayNum;
          _Src = (pFVar4->WorldsUsingThisDevice).AllocatorInstance.Data;
          __return_storage_ptr__->ArrayNum = iVar3;
          if (iVar3 == 0) {
            __return_storage_ptr__->ArrayMax = 0;
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            return __return_storage_ptr__;
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,0,&__return_storage_ptr__->AllocatorInstance,iVar3,
                     &__return_storage_ptr__->ArrayMax);
          memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return __return_storage_ptr__;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x40 + 0x38 + lVar2);
      } while (iVar3 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// IncrementDevice @ 147645730

void __thiscall FAudioDeviceManager::IncrementDevice(FAudioDeviceManager *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAudioDeviceContainer *pFVar5;
  undefined1 *puVar6;
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34) {
    puVar6 = *(undefined1 **)&(this->Devices).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Devices).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->Devices).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->Devices;
      do {
        if (*(uint *)((longlong)iVar4 * 0x40 + lVar1) == param_1) goto LAB_1476457ca;
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + lVar1);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Devices.Contains(DeviceID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                     ,0x222,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1476457ca:
  pFVar5 = TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
           ::FindChecked((TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
                          *)&this->Devices,param_1);
  pFVar5->NumberOfHandlesToThisDevice = pFVar5->NumberOfHandlesToThisDevice + 1;
                    /* WARNING: Could not recover jumptable at 0x0001476457e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// InitSoundClasses @ 147646f30

void __thiscall FAudioDeviceManager::InitSoundClasses(FAudioDeviceManager *this)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXIPEAVFAudioDevice___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `FAudioDeviceManager::InitSoundClasses'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(unsigned_int,FAudioDevice_*),void,unsigned_int,FAudioDevice_*>
                ::Call;
  IterateOverAllDevices(this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38)
  ;
  return;
}

// InitSoundEffectPresets @ 147646f80

void __thiscall FAudioDeviceManager::InitSoundEffectPresets(FAudioDeviceManager *this)

{
  return;
}

// InitSoundSubmixes @ 147647370

void __thiscall FAudioDeviceManager::InitSoundSubmixes(FAudioDeviceManager *this)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXIPEAVFAudioDevice___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `FAudioDeviceManager::InitSoundSubmixes'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(unsigned_int,FAudioDevice_*),void,unsigned_int,FAudioDevice_*>
                ::Call;
  IterateOverAllDevices(this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38)
  ;
  return;
}

// Initialize @ 1476473c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FAudioDeviceManager::Initialize(void)

{
  bool bVar1;
  FAudioDeviceManager *this;
  
  this = GetOrCreate();
  if (this != (FAudioDeviceManager *)0x0) {
    if (3 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    bVar1 = InitializeManager(this);
    if (!bVar1) {
      if (2 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
      ~FAudioDeviceManager(this);
      ::operator_delete(this,0x1a0);
      Singleton = (FAudioDeviceManager *)0x0;
      return false;
    }
    if (3 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
  }
  if ((Singleton != (FAudioDeviceManager *)0x0) && (Singleton->InitPhase == Initialized)) {
    return true;
  }
  return false;
}

// InitializeManager @ 147647980

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAudioDeviceManager::InitializeManager(FAudioDeviceManager *this)

{
  int iVar1;
  FName FVar2;
  UAudioSettings *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  FName *pFVar8;
  FModuleManager *pFVar9;
  IModuleInterface *pIVar10;
  UClass *this_01;
  IAudioParameterInterfaceRegistry *pIVar11;
  TSharedPtr<Audio::FParameterInterface,1> *pTVar12;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  TSharedPtr<Audio::FParameterInterface,1> local_68;
  TSharedPtr<Audio::FParameterInterface,1> local_58;
  TSharedPtr<Audio::FParameterInterface,1> local_48;
  TSharedPtr<Audio::FParameterInterface,1> local_38;
  
  if ((this->InitPhase == Constructed) && (bVar4 = PreInitializeManager(this), !bVar4)) {
    return false;
  }
  if (this->InitPhase == PreInitialized) {
    if ((this->AudioDeviceModule != (IAudioDeviceModule *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!AudioDeviceModule",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                           ,0x1dc,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pwVar7 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar7,L"DeterministicAudio");
    FConfigCacheIni::GetString
              (GConfig,L"Audio",L"AudioMixerModuleName",&this->AudioMixerModuleName,&GEngineIni);
    if (bVar4) {
      pFVar8 = ::FName::FName(&local_res8,L"NonRealtimeAudioRenderer");
      FVar2 = *pFVar8;
      pFVar9 = FModuleManager::Get();
      pIVar10 = FModuleManager::LoadModule(pFVar9,FVar2,None);
      this->AudioDeviceModule = (IAudioDeviceModule *)pIVar10;
    }
    else {
      iVar1 = (this->AudioMixerModuleName).Data.ArrayNum;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        if (iVar1 == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(this->AudioMixerModuleName).Data.AllocatorInstance.Data;
        }
        pFVar8 = ::FName::FName(&local_res10,pwVar7);
        FVar2 = *pFVar8;
        pFVar9 = FModuleManager::Get();
        pIVar10 = FModuleManager::LoadModule(pFVar9,FVar2,None);
        this->AudioDeviceModule = (IAudioDeviceModule *)pIVar10;
      }
      pIVar10 = (IModuleInterface *)this->AudioDeviceModule;
    }
    if (pIVar10 != (IModuleInterface *)0x0) {
      if ((pIVar10 == (IModuleInterface *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AudioDeviceModule",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                             ,0x1a5,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      this_01 = UAudioSettings::StaticClass();
      if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_01);
      }
      this_00 = (UAudioSettings *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
      if ((this_00 == (UAudioSettings *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AudioSettings",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                             ,0x1a8,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      UAudioSettings::LoadDefaultObjects(this_00);
      if (this_00->bParameterInterfacesRegistered == false) {
        if (3 < (byte)LogAudio._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        }
        this_00->bParameterInterfacesRegistered = true;
        pIVar11 = Audio::IAudioParameterInterfaceRegistry::Get();
        pcVar3 = *(code **)(pIVar11->_padding_ + 0x18);
        pTVar12 = Audio::AttenuationInterface::GetInterface(&local_68);
        (*pcVar3)(pIVar11,pTVar12);
        pcVar3 = *(code **)(pIVar11->_padding_ + 0x18);
        pTVar12 = Audio::SpatializationInterface::GetInterface(&local_58);
        (*pcVar3)(pIVar11,pTVar12);
        pcVar3 = *(code **)(pIVar11->_padding_ + 0x18);
        pTVar12 = Audio::SourceOrientationInterface::GetInterface(&local_48);
        (*pcVar3)(pIVar11,pTVar12);
        pcVar3 = *(code **)(pIVar11->_padding_ + 0x18);
        pTVar12 = Audio::ListenerOrientationInterface::GetInterface(&local_38);
        (*pcVar3)(pIVar11,pTVar12);
      }
      pFVar9 = FModuleManager::Get();
      pFVar8 = ::FName::FName(local_res18,L"AudioMixer");
      FModuleManager::LoadModuleChecked(pFVar9,*pFVar8);
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<FAudioDeviceManager>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::ApplicationWillEnterBackgroundDelegate,
                 (FAudioDeviceManager *)(local_res18 + 1),(pmf_a550e719)this);
      this->InitPhase = Initialized;
    }
  }
  return this->InitPhase == Initialized;
}

// IsAggregateDeviceSupportEnabled @ 147648730

bool __cdecl FAudioDeviceManager::IsAggregateDeviceSupportEnabled(void)

{
  return bEnableAggregateDeviceSupport;
}

// IsAlwaysPlayNonRealtimeDeviceAudio @ 147648740

bool __thiscall FAudioDeviceManager::IsAlwaysPlayNonRealtimeDeviceAudio(FAudioDeviceManager *this)

{
  return GCVarNeverMuteNonRealtimeAudioDevices != 0;
}

// IsValidAudioDevice @ 147649420

bool __thiscall FAudioDeviceManager::IsValidAudioDevice(FAudioDeviceManager *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  undefined1 *puVar2;
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34) {
    puVar2 = *(undefined1 **)&(this->Devices).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->Devices).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(*(int *)&(this->Devices).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(uint *)((longlong)iVar1 * 0x40 + *(longlong *)&this->Devices) == param_1)
        goto LAB_1476494aa;
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + 0x38 + *(longlong *)&this->Devices);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_1476494aa:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar1 != -1;
}

// IsVisualizeDebug3dEnabled @ 147649510

bool __thiscall FAudioDeviceManager::IsVisualizeDebug3dEnabled(FAudioDeviceManager *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->AudioDebugger).Ptr == (FAudioDebugger *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioDebugger.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                       ,0x53e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((((this->AudioDebugger).Ptr)->bVisualize3dDebug == 0) && (CVarIsVisualizeEnabled == 0)) {
    return false;
  }
  return true;
}

// IterateOverAllDevices @ 147649580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAudioDeviceManager::IterateOverAllDevices
          (FAudioDeviceManager *this,
          TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  FAudioDeviceManager *this_00;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  UWorld *pUVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [8];
  uint local_70 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_68;
  FAudioDevice *local_58;
  FAudioDeviceHandle local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  lpCriticalSection = &this->DeviceMapCriticalSection;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
              *)&this->Devices,&local_68);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar4 = local_68.ArrayNum;
  uVar8 = (ulonglong)local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + uVar8 * 4;
  FVar10.Data = local_68.AllocatorInstance.Data;
LAB_147649607:
  do {
    if ((int)uVar8 != iVar4) {
      local_78[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_78);
    }
    if (FVar10.Data == pFVar1) {
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      if (*(longlong *)param_1 != 0) {
        plVar9 = (longlong *)&param_1->field_0x10;
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar9 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      return;
    }
    uVar2 = *(uint *)FVar10.Data;
    GetAudioDevice(this,&local_50,uVar2);
    if (local_50.Device != (FAudioDevice *)0x0) {
      local_58 = local_50.Device;
      local_70[0] = uVar2;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar9 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar9 = (longlong *)&param_1->field_0x10;
      }
      uVar6 = (**(code **)(*plVar9 + 8))();
      (*pcVar3)(uVar6,local_70,&local_58);
      this_00 = Singleton;
      if (local_50.Device != (FAudioDevice *)0x0) {
        if ((Singleton != (FAudioDeviceManager *)0x0) && (Singleton->InitPhase == Initialized)) {
          pUVar7 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_50);
          DecrementDevice(this_00,local_50.DeviceId,pUVar7);
          uVar8 = local_68._8_8_ & 0xffffffff;
          FVar10.Data = FVar10.Data + 4;
          goto LAB_147649607;
        }
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6883895825940871781>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                           ,0x59b,"AudioDeviceManager");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    uVar8 = local_68._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 4;
  } while( true );
}

// IterateOverAllDevices @ 147649760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAudioDeviceManager::IterateOverAllDevices
          (FAudioDeviceManager *this,
          TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_const_*)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FAudioDevice *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  FAudioDeviceContainer *pFVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  uint local_60 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_58;
  FAudioDevice *local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_88;
  lpCriticalSection = &this->DeviceMapCriticalSection;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
              *)&this->Devices,&local_58);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar5 = local_58.ArrayNum;
  uVar9 = (ulonglong)local_58.ArrayNum;
  pFVar1 = local_58.AllocatorInstance.Data + uVar9 * 4;
  FVar11.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar5) {
      local_68[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_68);
    }
    if (FVar11.Data == pFVar1) break;
    uVar2 = *(uint *)FVar11.Data;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar6 = IsValidAudioDevice(this,uVar2);
    if (bVar6) {
      pFVar7 = TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
               ::FindChecked((TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
                              *)&this->Devices,uVar2);
      pFVar3 = pFVar7->Device;
      if (pFVar3 == (FAudioDevice *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioDevice != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                           ,0x29c,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (pFVar3 != (FAudioDevice *)0x0) {
        local_60[0] = uVar2;
        local_48 = pFVar3;
        UE::Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar4 = *(code **)param_1;
        plVar10 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar10 = (longlong *)&param_1->field_0x10;
        }
        uVar8 = (**(code **)(*plVar10 + 8))();
        (*pcVar4)(uVar8,local_60,&local_48);
      }
      uVar9 = local_58._8_8_ & 0xffffffff;
      FVar11.Data = FVar11.Data + 4;
    }
    else {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar9 = local_58._8_8_ & 0xffffffff;
      FVar11.Data = FVar11.Data + 4;
    }
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// LoadDefaultAudioDeviceModule @ 147649a00

bool __thiscall FAudioDeviceManager::LoadDefaultAudioDeviceModule(FAudioDeviceManager *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  FName *pFVar8;
  FModuleManager *pFVar9;
  IModuleInterface *pIVar10;
  wchar_t *pwVar11;
  FName local_res8;
  FName local_res10;
  
  pwVar11 = L"";
  if (this->AudioDeviceModule != (IAudioDeviceModule *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AudioDeviceModule",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                       ,0x1dc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pwVar7 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar7,L"DeterministicAudio");
  FConfigCacheIni::GetString
            (GConfig,L"Audio",L"AudioMixerModuleName",&this->AudioMixerModuleName,&GEngineIni);
  if (bVar4) {
    pFVar8 = ::FName::FName(&local_res8,L"NonRealtimeAudioRenderer");
    FVar2 = *pFVar8;
    pFVar9 = FModuleManager::Get();
    pIVar10 = FModuleManager::LoadModule(pFVar9,FVar2,None);
    this->AudioDeviceModule = (IAudioDeviceModule *)pIVar10;
    return pIVar10 != (IModuleInterface *)0x0;
  }
  iVar1 = (this->AudioMixerModuleName).Data.ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar1 != 0) {
      pwVar11 = (wchar_t *)(this->AudioMixerModuleName).Data.AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_res10,pwVar11);
    FVar2 = *pFVar8;
    pFVar9 = FModuleManager::Get();
    pIVar10 = FModuleManager::LoadModule(pFVar9,FVar2,None);
    this->AudioDeviceModule = (IAudioDeviceModule *)pIVar10;
  }
  return this->AudioDeviceModule != (IAudioDeviceModule *)0x0;
}

// LogListOfAudioDevices @ 14764a200

/* WARNING: Removing unreachable block (ram,0x00014764a545) */
/* WARNING: Removing unreachable block (ram,0x00014764a551) */
/* WARNING: Removing unreachable block (ram,0x00014764a49e) */
/* WARNING: Removing unreachable block (ram,0x00014764a4aa) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAudioDeviceManager::LogListOfAudioDevices(FAudioDeviceManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  TMap<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 local_res8 [2];
  int local_res10;
  TMap<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
  *local_res18;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TMap<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  FString local_78;
  TMap<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->Devices).field_0x10;
  iStack_a0 = 0;
  local_res8[0] = 0;
  local_res18 = &this->Devices;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  iVar13 = *(int *)&(this->Devices).field_0x28;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = local_88;
  if (iVar13 != 0) {
    puVar15 = *(uint **)&(this->Devices).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14764a2bf;
      uVar12 = puVar15[lVar9 + 1];
    }
    uStack_9c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_8c = local_88 + -1 + local_res10;
    if (iVar13 < iStack_8c) {
      iStack_8c = iVar13;
    }
  }
LAB_14764a2bf:
  iStack_80 = *(int *)&(this->Devices).field_0x8 - *(int *)&(this->Devices).field_0x34;
  uVar12 = *(uint *)&(this->Devices).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uVar16 = uVar12 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_8c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_8c;
  TStack_60.BaseBitIndex = local_88;
  uStack_40 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = local_res18;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_68 = local_res18;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar13 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Devices).field_0x28;
  if (uVar12 != uVar4) {
    puVar14 = *(undefined1 **)&(this->Devices).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14764a3d0;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14764a3d0:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar9 = (longlong)TStack_60.CurrentBitIndex;
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar7 == local_res18)) {
      if (3 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      return;
    }
    lVar5 = *(longlong *)pTVar7;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    cVar3 = *(char *)(lVar9 * 0x40 + 0x28 + lVar5);
    if (cVar3 == '\0') {
LAB_14764a44a:
      pwVar10 = L"Default";
    }
    else if (cVar3 == '\x01') {
      pwVar10 = L"Shared";
    }
    else {
      if (cVar3 != '\x02') goto LAB_14764a44a;
      pwVar10 = L"Unique";
    }
    ::FString::operator=(&local_d8,pwVar10);
    ::FString::PrintfImpl(&local_c8,L"                Id: %d, Scope: %s, Realtime: %s");
    if (lVar5 + 0x10 + lVar9 * 0x40 == 0) {
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    else {
      ::FString::PrintfImpl(&local_78,L", Num Handles: %d");
      iVar13 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      ::FString::AppendChars(&local_c8,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar13);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    iVar13 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    ::FString::AppendChars(&local_b8,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar13);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// PreInitialize @ 14764c240

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FAudioDeviceManager::PreInitialize(void)

{
  bool bVar1;
  FAudioDeviceManager *this;
  
  this = GetOrCreate();
  if (this != (FAudioDeviceManager *)0x0) {
    if (3 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    bVar1 = PreInitializeManager(this);
    if (!bVar1) {
      if (2 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
      ~FAudioDeviceManager(this);
      ::operator_delete(this,0x1a0);
      Singleton = (FAudioDeviceManager *)0x0;
      return false;
    }
    if (3 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
  }
  if ((Singleton != (FAudioDeviceManager *)0x0) && (Singleton->InitPhase != Constructed)) {
    return true;
  }
  return false;
}

// PreInitializeManager @ 14764c300

bool __thiscall FAudioDeviceManager::PreInitializeManager(FAudioDeviceManager *this)

{
  TPimplPtr<Audio::FAudioFormatSettings,0> *pTVar1;
  FAudioFormatSettings *pFVar2;
  FConfigCacheIni *pFVar3;
  EInitPhase EVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  longlong local_28;
  FString local_20;
  
  EVar4 = this->InitPhase;
  if (EVar4 != Constructed) goto LAB_14764c470;
  puVar5 = ::operator_new(0xd0);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = UE::Core::Private::PimplPtr::DeleterFunc<Audio::FAudioFormatSettings>;
    puVar5[1] = 0;
    ::FString::FString(&local_20,"Windows");
    pFVar3 = GConfig;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_20.Data.ArrayNum != 0) {
      FVar7.Data = local_20.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)(puVar5 + 2),(wchar_t *)FVar7.Data);
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar5 + 10),4000);
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x13] = 0;
    *(undefined4 *)(puVar5 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xa4) = 0x80;
    *(undefined4 *)(puVar5 + 0x15) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0xac) = 0;
    puVar5[0x17] = 0;
    *(undefined4 *)(puVar5 + 0x18) = 0;
    Audio::FAudioFormatSettings::ReadConfiguration
              ((FAudioFormatSettings *)(puVar5 + 2),pFVar3,&GEngineIni);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  pTVar1 = &this->AudioFormatSettings;
  if ((TPimplPtr<Audio::FAudioFormatSettings,0> *)&local_28 == pTVar1) {
    if ((FAudioFormatSettings *)(puVar5 + 2) != (FAudioFormatSettings *)0x0) {
      pcVar6 = (code *)*puVar5;
      goto LAB_14764c455;
    }
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (FAudioFormatSettings *)(puVar5 + 2);
    if (pFVar2 != (FAudioFormatSettings *)0x0) {
      pcVar6 = *(code **)&pFVar2[-1].AudioFormatCache.field_0x40;
      puVar5 = (undefined8 *)&pFVar2[-1].AudioFormatCache.field_0x40;
LAB_14764c455:
      (*pcVar6)(puVar5);
    }
  }
  RegisterAudioInfoFactories(this);
  EVar4 = PreInitialized;
  this->InitPhase = PreInitialized;
LAB_14764c470:
  return EVar4 != Constructed;
}

// RegisterAudioInfoFactories @ 14764f620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAudioDeviceManager::RegisterAudioInfoFactories(FAudioDeviceManager *this)

{
  longlong *plVar1;
  void *_Src;
  FAudioFormatSettings *pFVar2;
  code *pcVar3;
  FAudioDeviceManager *pFVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FModuleManager *this_00;
  FName *pFVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  int iVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FAudioDeviceManager *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FName local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c0;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  ForAnyElementType local_a0;
  int local_98;
  int local_94;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_res8 = this;
  iVar6 = FConfigCacheIni::GetArray(GConfig,L"Audio",L"AudioInfoModules",&local_c0,&GEngineIni);
  if (iVar6 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,5,&local_c0.AllocatorInstance,&local_c0.ArrayNum,&local_c0.ArrayMax);
    ConstructItems<FString,wchar_t_const_*,int>
              (local_c0.AllocatorInstance.Data + (longlong)iVar6 * 0x10,DefaultInfoModuleNames,5);
    if (2 < (byte)LogAudio._0_1_) {
      iVar6 = local_c0.ArrayNum;
      uVar7 = (ulonglong)local_c0.ArrayNum;
      bVar5 = true;
      pFVar15 = local_c0.AllocatorInstance.Data + uVar7 * 0x10;
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Data.ArrayNum = 0;
      local_90.Data.ArrayMax = 0;
      FVar13.Data = local_c0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar7 != iVar6) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar13.Data == pFVar15) break;
        if (bVar5) {
          bVar5 = false;
        }
        else {
          ::FString::AppendChars(&local_90,L", ",2);
        }
        local_98 = *(int *)(FVar13.Data + 8);
        lVar11 = (longlong)local_98;
        _Src = *(void **)FVar13.Data;
        local_a0.Data = (FScriptContainerElement *)0x0;
        if (local_98 == 0) {
          local_94 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_98,0,&local_a0,local_98,&local_94);
          memcpy(local_a0.Data,_Src,lVar11 * 2);
        }
        iVar12 = local_98 + -1;
        if (local_98 == 0) {
          iVar12 = 0;
        }
        ::FString::AppendChars(&local_90,(wchar_t *)local_a0.Data,iVar12);
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data);
        }
        uVar7 = local_c0._8_8_ & 0xffffffff;
        FVar13.Data = FVar13.Data + 0x10;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar12 = 0;
  iVar6 = local_c0.ArrayNum;
  uVar7 = (ulonglong)local_c0.ArrayNum;
  pFVar15 = local_c0.AllocatorInstance.Data + uVar7 * 0x10;
  FVar13.Data = local_c0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar6) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    pFVar4 = local_res8;
    if (FVar13.Data == pFVar15) break;
    this_00 = FModuleManager::Get();
    if (*(int *)(FVar13.Data + 8) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)FVar13.Data;
    }
    pFVar8 = ::FName::FName(&local_c8,pwVar10);
    FModuleManager::LoadModuleChecked(this_00,*pFVar8);
    uVar7 = local_c0._8_8_ & 0xffffffff;
    FVar13.Data = FVar13.Data + 0x10;
  }
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  iVar6 = 0;
  if ((local_res8->AudioFormatSettings).Ptr == (FAudioFormatSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioFormatSettings.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                       ,0x459,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = local_a8._4_4_;
  }
  pFVar2 = (pFVar4->AudioFormatSettings).Ptr;
  pTVar9 = &pFVar2->AllWaveFormats;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)&local_b0 != pTVar9) {
    iVar14 = (pFVar2->AllWaveFormats).ArrayNum;
    pFVar15 = (pTVar9->AllocatorInstance).Data;
    local_a8 = CONCAT44(local_a8._4_4_,iVar14);
    if (((iVar14 != 0) || (iVar6 != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar14,iVar6,&local_b0,iVar14,(int *)((longlong)&local_a8 + 4)), iVar14 != 0)
       ) {
      memcpy(local_b0.Data,pFVar15,(longlong)iVar14 << 3);
    }
  }
  iVar6 = (int)local_a8;
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8 = (FName *)(local_b0.Data + (longlong)(int)local_a8 * 8);
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  FVar13.Data = local_b0.Data;
  while( true ) {
    if ((int)local_a8 != iVar6) {
      local_res8 = (FAudioDeviceManager *)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if ((FName *)FVar13.Data == pFVar8) break;
    local_res20 = *(FName *)FVar13.Data;
    if ((*(int *)(*plVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`IAudioInfoFactoryRegistry::Get'::__l2::_dynamic_atexit_destructor_for__sInstance__);
      _Init_thread_footer(&::_TSS0);
    }
    lVar11 = (**(code **)(sInstance._padding_ + 0x18))(&sInstance,local_res20);
    if (lVar11 == 0) {
      ::FName::ToString(&local_res20,local_60);
      ::FString::PrintfImpl(&local_70,L"\'%s\' ");
      iVar14 = local_70.Data.ArrayNum + -1;
      if (local_70.Data.ArrayNum == 0) {
        iVar14 = 0;
      }
      ::FString::AppendChars(&local_80,(wchar_t *)local_70.Data.AllocatorInstance.Data,iVar14);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      iVar12 = iVar12 + 1;
    }
    FVar13.Data = FVar13.Data + 8;
  }
  if ((iVar12 != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFailedFormats == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                         ,0x186,L"Failed to find these required AudioFormats: [ %s]"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  DestructItems<FString,int>((FString *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return;
}

// RegisterSoundClass @ 14764fed0

void __thiscall
FAudioDeviceManager::RegisterSoundClass(FAudioDeviceManager *this,USoundClass *param_1)

{
  USoundClass *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  USoundClass **local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAudioDeviceManager::RegisterSoundClass'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = local_res10;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAudioDeviceManager::RegisterSoundClass'::__l2::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                ::Call;
  local_res10[0] = param_1;
  IterateOverAllDevices(this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38)
  ;
  return;
}

// RegisterSoundSubmix @ 14764ff30

void __thiscall
FAudioDeviceManager::RegisterSoundSubmix(FAudioDeviceManager *this,USoundSubmixBase *param_1)

{
  USoundSubmixBase *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  USoundSubmixBase **local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAudioDeviceManager::RegisterSoundSubmix'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = local_res10;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAudioDeviceManager::RegisterSoundSubmix'::__l2::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                ::Call;
  local_res10[0] = param_1;
  IterateOverAllDevices(this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38)
  ;
  return;
}

// RegisterWorld @ 14764fff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAudioDeviceManager::RegisterWorld(FAudioDeviceManager *this,UWorld *param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  UWorld *local_res10 [2];
  FName local_res20;
  FString local_18;
  
  if ((param_1 != (UWorld *)0x0) &&
     (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34)) {
    puVar6 = *(undefined1 **)&(this->Devices).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Devices).field_0x38;
    }
    uVar2 = *(uint *)(puVar6 + (ulonglong)(*(int *)&(this->Devices).field_0x48 - 1U & param_2) * 4);
    if (uVar2 != 0xffffffff) {
      while (puVar4 = (uint *)((longlong)(int)uVar2 * 0x40 + *(longlong *)&this->Devices),
            *puVar4 != param_2) {
        uVar2 = puVar4[0xe];
        if (uVar2 == 0xffffffff) {
          return;
        }
      }
      puVar3 = puVar4 + 2;
      if (puVar4 == (uint *)0x0) {
        puVar3 = (uint *)0x0;
      }
      if (puVar3 != (uint *)0x0) {
        plVar5 = *(longlong **)(puVar3 + 4);
        plVar1 = plVar5 + (int)puVar3[6];
        for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
          if ((UWorld *)*plVar5 == param_1) {
            return;
          }
        }
        local_res10[0] = param_1;
        if (3 < (byte)LogAudio._0_1_) {
          local_res20 = (FName)param_1->_padding_;
          ::FName::ToString(&local_res20,&local_18);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        TArray<UWorld_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UWorld_*_const_&>
                  ((TArray<UWorld_*,TSizedDefaultAllocator<32>_> *)(puVar3 + 4),local_res10);
        TMulticastDelegate<void___cdecl(UWorld_const_*,unsigned_int),FDefaultDelegateUserPolicy>::
        Broadcast(&FAudioDeviceWorldDelegates::OnWorldRegisteredToAudioDevice,local_res10[0],param_2
                 );
      }
    }
  }
  return;
}

// RemoveSoundBufferForResourceID @ 1476539f0

void __thiscall
FAudioDeviceManager::RemoveSoundBufferForResourceID(FAudioDeviceManager *this,uint param_1)

{
  return;
}

// RemoveSoundMix @ 147653aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAudioDeviceManager::RemoveSoundMix(FAudioDeviceManager *this,USoundMix *param_1)

{
  bool bVar1;
  FName *pFVar2;
  TStatId TVar3;
  FName local_res18 [2];
  code *local_48 [2];
  undefined **local_38;
  FAudioDeviceManager *local_30;
  USoundMix *local_28;
  undefined8 local_20;
  
  bVar1 = IsInAudioThread();
  if (bVar1) {
    local_20 = 0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FAudioDeviceManager::RemoveSoundMix'::`2'::<lambda_2>,1,0>::
                _vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAudioDeviceManager::RemoveSoundMix'::__l2::<lambda_2>,void,unsigned_int,FAudioDevice_*>
                  ::Call;
    local_30 = (FAudioDeviceManager *)param_1;
    IterateOverAllDevices
              (this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_48);
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_AudioRemoveSoundMix =
         (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::RemoveSoundMix(USoundMix_*)_::_5_::FStat_STAT_AudioRemoveSoundMix>
          )0x0;
    pFVar2 = ::FName::FName(local_res18,"STAT_AudioRemoveSoundMix");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioRemoveSoundMix,*pFVar2,
               L"FAudioThreadTask.RemoveSoundMix","STATGROUP_AudioThreadCommands","STATCAT_Advanced"
               ,L"Audio Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioRemoveSoundMix;
  if (StatPtr_STAT_AudioRemoveSoundMix ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::RemoveSoundMix(USoundMix_*)_::_5_::FStat_STAT_AudioRemoveSoundMix>
       )0x0) {
    pFVar2 = ::FName::FName(local_res18,"STAT_AudioRemoveSoundMix");
    TVar3.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioRemoveSoundMix,*pFVar2,
                    L"FAudioThreadTask.RemoveSoundMix","STATGROUP_AudioThreadCommands",
                    "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                    MCR_Invalid);
  }
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAudioDeviceManager::RemoveSoundMix'::`5'::<lambda_1>,1,0>::
              _vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAudioDeviceManager::RemoveSoundMix'::__l5::<lambda_1>,void>::
                Call;
  local_30 = this;
  local_28 = param_1;
  FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_48,TVar3);
  return;
}

// RequestAudioDevice @ 147658f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDeviceHandle * __thiscall
FAudioDeviceManager::RequestAudioDevice
          (FAudioDeviceManager *this,FAudioDeviceHandle *__return_storage_ptr__,
          FAudioDeviceParams *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAudioDeviceHandle *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FAudioDeviceHandle *local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  local_res10 = __return_storage_ptr__;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((param_1->Scope == Unique) &&
     (cVar3 = (**(code **)((longlong)*this->AudioDeviceModule + 0x48))(), cVar3 != '\0')) {
    CreateNewDevice(this,__return_storage_ptr__,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
  iVar12 = 0;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Devices).field_0x10;
  iVar10 = *(int *)&(this->Devices).field_0x28;
  uVar5 = 1;
  iVar14 = 0;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar10 != 0) {
    puVar11 = *(uint **)&(this->Devices).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)TStack_60.Array;
    }
    uVar15 = *puVar11;
    while (uVar15 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) {
        iVar9 = *(int *)&(this->Devices).field_0x28;
        iVar6 = iVar10;
        goto LAB_147659047;
      }
      uVar15 = puVar11[lVar8 + 1];
    }
    iVar9 = *(int *)&(this->Devices).field_0x28;
    uVar5 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = iVar14 + -1 + (int)lVar8;
    if (iVar9 < iVar6) {
      iVar6 = iVar10;
    }
  }
LAB_147659047:
  uVar15 = *(uint *)&(this->Devices).field_0x28;
  uVar16 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar12);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Devices).field_0x8 - *(int *)&(this->Devices).field_0x34);
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FAudioDeviceHandle *)(*pcVar2)();
    return pFVar7;
  }
  uVar5 = *(uint *)&(this->Devices).field_0x28;
  if (uVar15 != uVar5) {
    puVar13 = *(undefined1 **)&(this->Devices).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->Devices).field_0x10;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar15 == 0) {
      lVar8 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147659170;
      uVar15 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar15 = (int)lVar8 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_147659170:
  do {
    if (*(int *)&(this->Devices).field_0x8 - *(int *)&(this->Devices).field_0x34 != (int)uStack_40)
    {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Devices).field_0x10)) {
      CreateNewDevice(this,local_res10,param_1);
      goto LAB_147659223;
    }
    puVar11 = (uint *)(*(longlong *)&this->Devices + (longlong)TStack_60.CurrentBitIndex * 0x40);
    if ((((char)puVar11[10] == '\x01') &&
        (param_1->AudioModule == *(IAudioDeviceModule **)(puVar11 + 0xc))) &&
       (param_1->bIsNonRealtime == (bool)*(char *)((longlong)puVar11 + 0x29))) {
      RegisterWorld(this,param_1->AssociatedWorld,*puVar11);
      BuildNewHandle(this,local_res10,(FAudioDeviceContainer *)(puVar11 + 2),*puVar11,param_1);
LAB_147659223:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return local_res10;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// ResetAllDynamicSoundVolumes @ 1476597c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAudioDeviceManager::ResetAllDynamicSoundVolumes(FAudioDeviceManager *this)

{
  bool bVar1;
  FName *pFVar2;
  TStatId TVar3;
  FName local_res10;
  code *local_38 [2];
  undefined **local_28;
  FAudioDeviceManager *local_20;
  undefined8 local_10;
  
  bVar1 = IsInAudioThread();
  if (bVar1) {
    TSet<TTuple<TTuple<enum_ESoundType,FName>,float>,TDefaultMapHashableKeyFuncs<TTuple<enum_ESoundType,FName>,float,0>,FDefaultSetAllocator>
    ::Reset(&this->DynamicSoundVolumes);
    TSet<TTuple<TTuple<enum_ESoundType,FName>,float>,TDefaultMapHashableKeyFuncs<TTuple<enum_ESoundType,FName>,float,0>,FDefaultSetAllocator>
    ::Shrink(&this->DynamicSoundVolumes);
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_ResetAllDynamicSoundVolumes =
         (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::ResetAllDynamicSoundVolumes(void)_::_5_::FStat_STAT_ResetAllDynamicSoundVolumes>
          )0x0;
    pFVar2 = ::FName::FName(&local_res10,"STAT_ResetAllDynamicSoundVolumes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResetAllDynamicSoundVolumes,*pFVar2,
               L"FAudioThreadTask.ResetAllDynamicSoundVolumes","STATGROUP_AudioThreadCommands",
               "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,MCR_Invalid
              );
    _Init_thread_footer(&::_TSS0);
  }
  TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_ResetAllDynamicSoundVolumes;
  if (StatPtr_STAT_ResetAllDynamicSoundVolumes ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::ResetAllDynamicSoundVolumes(void)_::_5_::FStat_STAT_ResetAllDynamicSoundVolumes>
       )0x0) {
    pFVar2 = ::FName::FName(&local_res10,"STAT_ResetAllDynamicSoundVolumes");
    TVar3.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResetAllDynamicSoundVolumes,*pFVar2,
                    L"FAudioThreadTask.ResetAllDynamicSoundVolumes","STATGROUP_AudioThreadCommands",
                    "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                    MCR_Invalid);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAudioDeviceManager::ResetAllDynamicSoundVolumes'::`5'::<lambda_1>,1,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAudioDeviceManager::ResetAllDynamicSoundVolumes'::__l5::<lambda_1>,void>
                ::Call;
  local_20 = this;
  FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_38,TVar3);
  return;
}

// ResetDynamicSoundVolume @ 147659be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioDeviceManager::ResetDynamicSoundVolume
          (FAudioDeviceManager *this,ESoundType param_1,FName *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  TStatId TVar5;
  FName local_res20;
  undefined8 local_78;
  uint uStack_70;
  FNameEntryId FStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  code *local_58 [5];
  undefined8 *local_30;
  
  bVar2 = IsInAudioThread();
  if (bVar2) {
    local_78._4_4_ = (*param_2).ComparisonIndex;
    uStack_70 = (*param_2).Number;
    uVar1 = uStack_70;
    local_78._0_1_ = param_1;
    if (*(int *)&(this->DynamicSoundVolumes).field_0x8 !=
        *(int *)&(this->DynamicSoundVolumes).field_0x34) {
      uVar3 = ::GetTypeHash(local_78._4_4_);
      TSet<TTuple<TTuple<enum_ESoundType,FName>,float>,TDefaultMapHashableKeyFuncs<TTuple<enum_ESoundType,FName>,float,0>,FDefaultSetAllocator>
      ::RemoveImpl<TTuple<enum_ESoundType,FName>_>
                (&this->DynamicSoundVolumes,
                 (uint)(param_1 >> 2) + uVar1 + (uint)param_1 * 0x40 + uVar3 + 0x9e3779b9 ^
                 (uint)param_1,(TTuple<ESoundType,FName> *)&local_78);
    }
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_ResetSoundCueTrimVolume =
         (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::ResetDynamicSoundVolume(ESoundType,FName_const_&)_::_5_::FStat_STAT_ResetSoundCueTrimVolume>
          )0x0;
    pFVar4 = ::FName::FName(&local_res20,"STAT_ResetSoundCueTrimVolume");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResetSoundCueTrimVolume,*pFVar4,
               L"FAudioThreadTask.ResetSoundCueTrimVolume","STATGROUP_AudioThreadCommands",
               "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,MCR_Invalid
              );
    _Init_thread_footer(&::_TSS0);
  }
  TVar5.StatIdPtr = (TStatIdData *)StatPtr_STAT_ResetSoundCueTrimVolume;
  if (StatPtr_STAT_ResetSoundCueTrimVolume ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::ResetDynamicSoundVolume(ESoundType,FName_const_&)_::_5_::FStat_STAT_ResetSoundCueTrimVolume>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res20,"STAT_ResetSoundCueTrimVolume");
    TVar5.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResetSoundCueTrimVolume,*pFVar4,
                    L"FAudioThreadTask.ResetSoundCueTrimVolume","STATGROUP_AudioThreadCommands",
                    "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                    MCR_Invalid);
  }
  FStack_6c = (*param_2).ComparisonIndex;
  uStack_68 = (*param_2).Number;
  uStack_70 = CONCAT31(uStack_70._1_3_,param_1);
  local_58[0] = (code *)0x0;
  local_78 = this;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAudioDeviceManager::ResetDynamicSoundVolume'::`5'::<lambda_1>,1,1>
               ::_vftable_;
  local_30[1] = local_78;
  local_30[2] = CONCAT44(FStack_6c.Value,uStack_70);
  local_30[3] = CONCAT44(uStack_64,uStack_68);
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAudioDeviceManager::ResetDynamicSoundVolume'::__l5::<lambda_1>,void>
                  ::Call;
  }
  FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar5);
  return;
}

// SetActiveDevice @ 14765dee0

void __thiscall FAudioDeviceManager::SetActiveDevice(FAudioDeviceManager *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  uint uVar2;
  FAudioDevice *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (this->SoloDeviceHandle == 0xffffffff) {
    lpCriticalSection = &this->DeviceMapCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar12 = 0;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Devices).field_0x10;
    iVar10 = *(int *)&(this->Devices).field_0x28;
    uVar5 = 1;
    iVar14 = 0;
    iVar8 = 0;
    iVar6 = 0;
    if (iVar10 != 0) {
      puVar11 = *(uint **)&(this->Devices).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_68.Array;
      }
      uVar9 = *puVar11;
      while (uVar9 == 0) {
        lVar7 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) {
          iVar8 = *(int *)&(this->Devices).field_0x28;
          iVar6 = iVar10;
          goto LAB_14765dfc5;
        }
        uVar9 = puVar11[lVar7 + 1];
      }
      iVar8 = *(int *)&(this->Devices).field_0x28;
      uVar5 = -uVar9 & uVar9;
      uVar1 = (ulonglong)uVar5 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = iVar14 + -1 + (int)lVar7;
      if (iVar8 < iVar6) {
        iVar6 = iVar10;
      }
    }
LAB_14765dfc5:
    uVar9 = *(uint *)&(this->Devices).field_0x28;
    TStack_68._padding_ = CONCAT44(uVar5,iVar12);
    uVar5 = uVar9 & 0xffffffe0;
    TStack_68.CurrentBitIndex = iVar6;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar9 >> 5;
    TStack_68._28_4_ = iVar6;
    TStack_68.BaseBitIndex = iVar14;
    uStack_48 = CONCAT44(uStack_74,
                         *(int *)&(this->Devices).field_0x8 - *(int *)&(this->Devices).field_0x34);
    if ((((int)uVar9 < 0) || (iVar8 < (int)uVar9)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = *(uint *)&(this->Devices).field_0x28;
    if (uVar9 != uVar2) {
      puVar13 = *(undefined1 **)&(this->Devices).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->Devices).field_0x10;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
      while (uVar9 == 0) {
        lVar7 = (longlong)iVar10;
        uVar5 = uVar5 + 0x20;
        iVar10 = iVar10 + 1;
        uVar9 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14765e0cf;
        uVar9 = *(uint *)(puVar13 + lVar7 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar9 = (int)lVar7 + -1 + uVar5;
      if ((int)uVar2 < (int)uVar9) {
        uVar9 = uVar2;
      }
    }
LAB_14765e0cf:
    while( true ) {
      if (*(int *)&(this->Devices).field_0x8 - *(int *)&(this->Devices).field_0x34 != (int)uStack_48
         ) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_68.CurrentBitIndex == uVar9) &&
         (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Devices).field_0x10))
      break;
      puVar11 = (uint *)(*(longlong *)&this->Devices + (longlong)TStack_68.CurrentBitIndex * 0x40);
      if ((*(longlong *)(puVar11 + 2) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DeviceContainer.Value.Device",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                             ,0x3d1,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(FAudioDevice **)(puVar11 + 2);
      uVar5 = *puVar11;
      if (uVar5 == param_1) {
        this->ActiveAudioDeviceID = param_1;
      }
      FAudioDevice::SetDeviceMuted(this_00,uVar5 != param_1);
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetAudioDevice @ 14765e290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAudioDeviceManager::SetAudioDevice(FAudioDeviceManager *this,UWorld *param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FAudioDevice *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UWorld *pUVar5;
  FAudioDeviceManager *pFVar6;
  undefined1 *puVar7;
  FAudioDeviceManager *pFVar8;
  FAudioDeviceManager *pFVar9;
  UWorld *local_res8;
  undefined8 local_res20;
  FAudioDeviceHandle local_58;
  UWorld *local_40;
  undefined2 local_38;
  undefined4 local_36;
  undefined2 local_32;
  undefined8 local_30;
  undefined8 local_28;
  
  lpCriticalSection = &this->DeviceMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar9 = (FAudioDeviceManager *)0x0;
  pFVar6 = pFVar9;
  if (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34) {
    puVar7 = *(undefined1 **)&(this->Devices).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Devices).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->Devices).field_0x48 - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        pFVar6 = (FAudioDeviceManager *)((longlong)iVar4 * 0x40 + *(longlong *)&this->Devices);
        if (*(uint *)&(pFVar6->Buffers).AllocatorInstance.Data == param_2) break;
        iVar4 = *(int *)&(pFVar6->WaveBufferMap).field_0x28;
        pFVar6 = pFVar9;
      } while (iVar4 != -1);
    }
  }
  pFVar8 = (FAudioDeviceManager *)&(pFVar6->Buffers).ArrayNum;
  if (pFVar6 == (FAudioDeviceManager *)0x0) {
    pFVar8 = pFVar9;
  }
  if (pFVar8 == (FAudioDeviceManager *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_res20 = 0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&InvalidHandle,(FObjectPtr)&local_res20);
      InvalidHandle.Device = (FAudioDevice *)0x0;
      InvalidHandle.DeviceId = 0xffffffff;
      atexit(`FAudioDeviceManager::SetAudioDevice'::__l8::
             _dynamic_atexit_destructor_for__InvalidHandle__);
      _Init_thread_footer(&::_TSS0);
    }
    UWorld::SetAudioDevice(param_1,&InvalidHandle);
  }
  else {
    local_36 = 0;
    local_32 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0xffffffffffffffff;
    if ((Singleton == (FAudioDeviceManager *)0x0) ||
       (pFVar6 = Singleton, Singleton->InitPhase != Initialized)) {
      pFVar6 = pFVar9;
    }
    local_40 = param_1;
    IncrementDevice(pFVar6,param_2);
    pFVar1 = (FAudioDevice *)(pFVar8->Buffers).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_58.World.WeakPtr.ObjectIndex = 0;
    local_58.World.WeakPtr.ObjectSerialNumber = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_58,(FObjectPtr)&local_res8);
    local_58.Device = pFVar1;
    local_58.DeviceId = param_2;
    UWorld::SetAudioDevice(param_1,&local_58);
    pFVar6 = Singleton;
    if (local_58.Device != (FAudioDevice *)0x0) {
      if ((Singleton == (FAudioDeviceManager *)0x0) || (Singleton->InitPhase != Initialized)) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6883895825940871781>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                           ,0x59b,"AudioDeviceManager");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        pUVar5 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_58);
        DecrementDevice(pFVar6,local_58.DeviceId,pUVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014765e49e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetDynamicSoundVolume @ 14765f590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioDeviceManager::SetDynamicSoundVolume
          (FAudioDeviceManager *this,ESoundType param_1,FName *param_2,float param_3)

{
  TMap<TTuple<ESoundType,FName>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<ESoundType,FName>,float,0>_>
  *this_00;
  FName FVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  TStatId TVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  int local_98 [2];
  FName local_90;
  ESoundType local_88 [4];
  FName local_84;
  FAudioDeviceManager *local_78;
  undefined4 uStack_70;
  FNameEntryId FStack_6c;
  uint uStack_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  bVar2 = IsInAudioThread();
  if (bVar2) {
    FVar1 = *param_2;
    if (__real_40800000 <= param_3) {
      param_3 = __real_40800000;
    }
    this_00 = &this->DynamicSoundVolumes;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    local_88[0] = param_1;
    local_84 = FVar1;
    uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    uVar3 = (uint)param_1 * 0x40 + FVar1.Number + (uint)(param_1 >> 2) + uVar3 + 0x9e3779b9 ^
            (uint)param_1;
    if (*(int *)&(this->DynamicSoundVolumes).field_0x8 !=
        *(int *)&(this->DynamicSoundVolumes).field_0x34) {
      puVar7 = *(undefined1 **)&(this->DynamicSoundVolumes).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->DynamicSoundVolumes).field_0x38;
      }
      iVar8 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->DynamicSoundVolumes).field_0x48 - 1U & uVar3) * 4);
      if (iVar8 != -1) {
        do {
          lVar6 = *(longlong *)this_00 + (longlong)iVar8 * 0x18;
          if ((*(ESoundType *)(*(longlong *)this_00 + (longlong)iVar8 * 0x18) == local_88[0]) &&
             (*(FName *)(lVar6 + 4) == local_84)) {
            if ((iVar8 != -1) && (lVar6 != 0)) goto LAB_14765f804;
            break;
          }
          iVar8 = *(int *)(lVar6 + 0x10);
        } while (iVar8 != -1);
      }
    }
    local_90 = (FName)local_88;
    TSet<TTuple<TTuple<enum_ESoundType,FName>,float>,TDefaultMapHashableKeyFuncs<TTuple<enum_ESoundType,FName>,float,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TTuple<enum_ESoundType,FName>_const_&>_>
              (this_00,(uint)local_98,
               (TKeyInitializer<TTuple<ESoundType,FName>_const_&> *)(ulonglong)uVar3,
               (bool *)&local_90);
    lVar6 = *(longlong *)this_00 + (longlong)local_98[0] * 0x18;
LAB_14765f804:
    *(float *)(lVar6 + 0xc) = param_3;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_SetDynamicSoundVolume =
           (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::SetDynamicSoundVolume(ESoundType,FName_const_&,float)_::_5_::FStat_STAT_SetDynamicSoundVolume>
            )0x0;
      pFVar4 = ::FName::FName(&local_90,"STAT_SetDynamicSoundVolume");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetDynamicSoundVolume,*pFVar4,
                 L"FAudioThreadTask.SetDynamicSoundVolume","STATGROUP_AudioThreadCommands",
                 "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar5.StatIdPtr = (TStatIdData *)StatPtr_STAT_SetDynamicSoundVolume;
    if (StatPtr_STAT_SetDynamicSoundVolume ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::SetDynamicSoundVolume(ESoundType,FName_const_&,float)_::_5_::FStat_STAT_SetDynamicSoundVolume>
         )0x0) {
      pFVar4 = ::FName::FName(&local_90,"STAT_SetDynamicSoundVolume");
      TVar5.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetDynamicSoundVolume,*pFVar4,
                      L"FAudioThreadTask.SetDynamicSoundVolume","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    FStack_6c = (*param_2).ComparisonIndex;
    uStack_68 = (*param_2).Number;
    uStack_70 = CONCAT31(uStack_70._1_3_,param_1);
    local_58[0] = (code *)0x0;
    local_78 = this;
    local_30 = FMemory::Malloc(0x20,8);
    *local_30 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FAudioDeviceManager::SetDynamicSoundVolume'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    local_30[1] = local_78;
    local_30[2] = CONCAT44(FStack_6c.Value,uStack_70);
    local_30[3] = CONCAT44(param_3,uStack_68);
    if (local_30 + 1 != (undefined8 *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FAudioDeviceManager::SetDynamicSoundVolume'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar5);
  }
  return;
}

// SetSoloDevice @ 147661f60

void __thiscall FAudioDeviceManager::SetSoloDevice(FAudioDeviceManager *this,uint param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FAudioDevice *this_00;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  LPCRITICAL_SECTION local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  this->SoloDeviceHandle = param_1;
  if (param_1 != 0xffffffff) {
    local_res20 = (LPCRITICAL_SECTION)&this->DeviceMapCriticalSection;
    if (local_res20 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(local_res20);
    iVar11 = 0;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Devices).field_0x10;
    iVar2 = *(int *)&(this->Devices).field_0x28;
    uVar6 = 1;
    iVar13 = 0;
    iVar7 = 0;
    if (iVar2 != 0) {
      puVar14 = *(uint **)&(this->Devices).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_70.Array;
      }
      uVar9 = *puVar14;
      while (uVar9 == 0) {
        lVar8 = (longlong)iVar11;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar11 + 1;
        iVar7 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147662040;
        uVar9 = puVar14[lVar8 + 1];
      }
      uVar6 = -uVar9 & uVar9;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = iVar13 + -1 + (int)lVar8;
      if (iVar2 < iVar7) {
        iVar7 = iVar2;
      }
    }
LAB_147662040:
    uVar9 = *(uint *)&(this->Devices).field_0x28;
    TStack_70.CurrentBitIndex = iVar7;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._padding_ = CONCAT44(uVar6,iVar11);
    uVar6 = uVar9 & 0xffffffe0;
    iVar11 = (int)uVar9 >> 5;
    TStack_70._28_4_ = iVar7;
    TStack_70.BaseBitIndex = iVar13;
    uStack_50 = CONCAT44(uStack_7c,
                         *(int *)&(this->Devices).field_0x8 - *(int *)&(this->Devices).field_0x34);
    if ((((int)uVar9 < 0) || (iVar2 < (int)uVar9)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar3 = *(uint *)&(this->Devices).field_0x28;
    if (uVar9 != uVar3) {
      puVar12 = *(undefined1 **)&(this->Devices).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->Devices).field_0x10;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
      while (uVar9 == 0) {
        lVar8 = (longlong)iVar11;
        uVar6 = uVar6 + 0x20;
        iVar11 = iVar11 + 1;
        uVar9 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14766214f;
        uVar9 = *(uint *)(puVar12 + lVar8 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res18 = (int)lVar8;
      uVar9 = local_res18 + -1 + uVar6;
      if ((int)uVar3 < (int)uVar9) {
        uVar9 = uVar3;
      }
    }
LAB_14766214f:
    while( true ) {
      if (*(int *)&(this->Devices).field_0x8 - *(int *)&(this->Devices).field_0x34 != (int)uStack_50
         ) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_70.CurrentBitIndex == uVar9) &&
         (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Devices).field_0x10))
      break;
      piVar10 = (int *)(*(longlong *)&this->Devices + (longlong)TStack_70.CurrentBitIndex * 0x40);
      if ((*(longlong *)(piVar10 + 2) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DeviceContainer.Value.Device",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                             ,0x3e9,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*piVar10 != *(int *)(*(longlong *)(piVar10 + 2) + 0xa0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DeviceContainer.Key == DeviceContainer.Value.Device->DeviceID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                             ,0x3ea,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(FAudioDevice **)(piVar10 + 2);
      bVar5 = this_00->DeviceID != param_1;
      if (!bVar5) {
        this->ActiveAudioDeviceID = param_1;
        this_00 = *(FAudioDevice **)(piVar10 + 2);
      }
      FAudioDevice::SetDeviceMuted(this_00,bVar5);
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    LeaveCriticalSection(local_res20);
  }
  return;
}

// Shutdown @ 147663890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FAudioDeviceManager::Shutdown(void)

{
  FAudioDeviceManager *pFVar1;
  
  pFVar1 = Singleton;
  if (Singleton != (FAudioDeviceManager *)0x0) {
    ~FAudioDeviceManager(Singleton);
    ::operator_delete(pFVar1,0x1a0);
    Singleton = (FAudioDeviceManager *)0x0;
    if (3 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      return;
    }
  }
  return;
}

// StopSoundsUsingResource @ 1476658e0

void __thiscall
FAudioDeviceManager::StopSoundsUsingResource
          (FAudioDeviceManager *this,USoundWave *param_1,
          TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *param_2)

{
  USoundWave *local_res10;
  TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *local_res18 [2];
  code *local_38 [2];
  undefined **local_28;
  USoundWave **local_20;
  TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> **local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAudioDeviceManager::StopSoundsUsingResource'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = &local_res10;
  local_18 = local_res18;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAudioDeviceManager::StopSoundsUsingResource'::__l2::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                ::Call;
  local_res10 = param_1;
  local_res18[0] = param_2;
  IterateOverAllDevices(this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38)
  ;
  return;
}

// StopSourcesUsingBuffer @ 147665d10

void __thiscall
FAudioDeviceManager::StopSourcesUsingBuffer(FAudioDeviceManager *this,FSoundBuffer *param_1)

{
  return;
}

// TogglePlayAllDeviceAudio @ 147667e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAudioDeviceManager::TogglePlayAllDeviceAudio(FAudioDeviceManager *this)

{
  bool bVar1;
  FName *pFVar2;
  TStatId TVar3;
  FName local_res10;
  code *local_38 [2];
  undefined **local_28;
  FAudioDeviceManager *local_20;
  undefined8 local_10;
  
  bVar1 = IsInAudioThread();
  if (bVar1) {
    this->bPlayAllDeviceAudio = this->bPlayAllDeviceAudio == false;
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TogglePlayAllDeviceAudio =
         (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::TogglePlayAllDeviceAudio(void)_::_5_::FStat_STAT_TogglePlayAllDeviceAudio>
          )0x0;
    pFVar2 = ::FName::FName(&local_res10,"STAT_TogglePlayAllDeviceAudio");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TogglePlayAllDeviceAudio,*pFVar2,
               L"FAudioThreadTask.TogglePlayAllDeviceAudio","STATGROUP_AudioThreadCommands",
               "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,MCR_Invalid
              );
    _Init_thread_footer(&::_TSS0);
  }
  TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_TogglePlayAllDeviceAudio;
  if (StatPtr_STAT_TogglePlayAllDeviceAudio ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::TogglePlayAllDeviceAudio(void)_::_5_::FStat_STAT_TogglePlayAllDeviceAudio>
       )0x0) {
    pFVar2 = ::FName::FName(&local_res10,"STAT_TogglePlayAllDeviceAudio");
    TVar3.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TogglePlayAllDeviceAudio,*pFVar2,
                    L"FAudioThreadTask.TogglePlayAllDeviceAudio","STATGROUP_AudioThreadCommands",
                    "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                    MCR_Invalid);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAudioDeviceManager::TogglePlayAllDeviceAudio'::`5'::<lambda_1>,1,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAudioDeviceManager::TogglePlayAllDeviceAudio'::__l5::<lambda_1>,void>
                ::Call;
  local_20 = this;
  FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_38,TVar3);
  return;
}

// ToggleVisualize3dDebug @ 147668080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAudioDeviceManager::ToggleVisualize3dDebug(FAudioDeviceManager *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  TStatId TVar5;
  FName local_res10;
  FName local_res18 [2];
  code *local_48 [2];
  undefined **local_38;
  FAudioDeviceManager *local_30;
  undefined8 local_20;
  
  bVar3 = IsInAudioThread();
  if (!bVar3) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_ToggleVisualize3dDebug =
           (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::ToggleVisualize3dDebug(void)_::_5_::FStat_STAT_ToggleVisualize3dDebug>
            )0x0;
      pFVar4 = ::FName::FName(&local_res10,"STAT_ToggleVisualize3dDebug");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ToggleVisualize3dDebug,*pFVar4,
                 L"FAudioThreadTask.ToggleVisualize3dDebug","STATGROUP_AudioThreadCommands",
                 "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar5.StatIdPtr = (TStatIdData *)StatPtr_STAT_ToggleVisualize3dDebug;
    if (StatPtr_STAT_ToggleVisualize3dDebug ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FAudioDeviceManager::ToggleVisualize3dDebug(void)_::_5_::FStat_STAT_ToggleVisualize3dDebug>
         )0x0) {
      pFVar4 = ::FName::FName(local_res18,"STAT_ToggleVisualize3dDebug");
      TVar5.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ToggleVisualize3dDebug,*pFVar4,
                      L"FAudioThreadTask.ToggleVisualize3dDebug","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_20 = 0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FAudioDeviceManager::ToggleVisualize3dDebug'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAudioDeviceManager::ToggleVisualize3dDebug'::__l5::<lambda_1>,void>
                  ::Call;
    local_30 = this;
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_48,TVar5);
    return;
  }
  if (((this->AudioDebugger).Ptr == (FAudioDebugger *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioDebugger.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                         ,0x537,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar1 = &((this->AudioDebugger).Ptr)->field_0x90;
  *puVar1 = *puVar1 ^ 1;
  return;
}

// TrackResource @ 1476682a0

void __thiscall
FAudioDeviceManager::TrackResource
          (FAudioDeviceManager *this,USoundWave *param_1,FSoundBuffer *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString local_18;
  
  iVar1 = this->NextResourceID;
  this->NextResourceID = iVar1 + 1;
  param_2->ResourceID = iVar1;
  param_1->ResourceID = iVar1;
  pFVar3 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
  pFVar4 = &param_2->ResourceName;
  if (pFVar4 != pFVar3) {
    pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_2->ResourceName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (param_2->ResourceName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UnregisterSoundClass @ 14766a870

void __thiscall
FAudioDeviceManager::UnregisterSoundClass(FAudioDeviceManager *this,USoundClass *param_1)

{
  USoundClass *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  USoundClass **local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAudioDeviceManager::UnregisterSoundClass'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = local_res10;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAudioDeviceManager::UnregisterSoundClass'::__l2::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                ::Call;
  local_res10[0] = param_1;
  IterateOverAllDevices(this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38)
  ;
  return;
}

// UnregisterSoundSubmix @ 14766a8d0

void __thiscall
FAudioDeviceManager::UnregisterSoundSubmix(FAudioDeviceManager *this,USoundSubmixBase *param_1)

{
  USoundSubmixBase *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  USoundSubmixBase **local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAudioDeviceManager::UnregisterSoundSubmix'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = local_res10;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAudioDeviceManager::UnregisterSoundSubmix'::__l2::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                ::Call;
  local_res10[0] = param_1;
  IterateOverAllDevices(this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38)
  ;
  return;
}

// UnregisterWorld @ 14766a990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAudioDeviceManager::UnregisterWorld(FAudioDeviceManager *this,UWorld *param_1,uint param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UWorld *pUVar5;
  uint *puVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  UWorld *local_res10;
  uint local_res18;
  FName local_res20;
  FString local_58;
  
  if ((param_1 != (UWorld *)0x0) &&
     (*(int *)&(this->Devices).field_0x8 != *(int *)&(this->Devices).field_0x34)) {
    puVar8 = *(undefined1 **)&(this->Devices).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Devices).field_0x38;
    }
    uVar4 = *(uint *)(puVar8 + (ulonglong)(*(int *)&(this->Devices).field_0x48 - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      while (puVar6 = (uint *)((longlong)(int)uVar4 * 0x40 + *(longlong *)&this->Devices),
            *puVar6 != param_2) {
        uVar4 = puVar6[0xe];
        if (uVar4 == 0xffffffff) {
          return;
        }
      }
      puVar9 = (uint *)0x0;
      puVar14 = puVar6 + 2;
      if (puVar6 == (uint *)0x0) {
        puVar14 = puVar9;
      }
      if (puVar14 != (uint *)0x0) {
        plVar7 = *(longlong **)(puVar14 + 4);
        plVar1 = plVar7 + (int)puVar14[6];
        local_res10 = param_1;
        local_res18 = param_2;
        if (plVar7 != plVar1) {
LAB_14766aa58:
          if ((UWorld *)*plVar7 != param_1) goto code_r0x00014766aa5d;
          if (3 < (byte)LogAudio._0_1_) {
            local_res20 = (FName)param_1->_padding_;
            ::FName::ToString(&local_res20,&local_58);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          if (((*(UWorld ***)(puVar14 + 4) <= &local_res10) &&
              (&local_res10 < *(UWorld ***)(puVar14 + 4) + (int)puVar14[7])) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar4 = puVar14[6];
          if (uVar4 != 0) {
            plVar1 = *(longlong **)(puVar14 + 4);
            bVar3 = (UWorld *)*plVar1 != local_res10;
            puVar6 = puVar9;
            pUVar5 = local_res10;
            puVar13 = puVar9;
            do {
              uVar10 = (uint)puVar6;
              uVar11 = uVar10;
              do {
                puVar9 = (uint *)((longlong)puVar9 + 1);
                uVar11 = uVar11 + 1;
                puVar6 = (uint *)(ulonglong)uVar11;
                if ((longlong)(int)uVar4 <= (longlong)puVar9) break;
              } while (bVar3 == ((UWorld *)plVar1[(longlong)puVar9] != pUVar5));
              if (bVar3 != false) {
                uVar12 = (uint)puVar13;
                if (uVar12 != uVar10) {
                  memmove(plVar1 + (int)uVar12,plVar1 + (int)uVar10,
                          (longlong)(int)(uVar11 - uVar10) << 3);
                  pUVar5 = local_res10;
                }
                puVar13 = (uint *)(ulonglong)(uVar12 + (uVar11 - uVar10));
              }
              bVar3 = (bool)(bVar3 ^ 1);
            } while ((longlong)puVar9 < (longlong)(int)uVar4);
            puVar14[6] = (uint)puVar13;
          }
          TMulticastDelegate<void___cdecl(UWorld_const_*,unsigned_int),FDefaultDelegateUserPolicy>::
          Broadcast(&FAudioDeviceWorldDelegates::OnWorldUnregisteredWithAudioDevice,local_res10,
                    local_res18);
        }
LAB_14766ac43:
        pUVar5 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->MainAudioDeviceHandle);
        if (pUVar5 == local_res10) {
          (this->MainAudioDeviceHandle).World.WeakPtr = (FWeakObjectPtr)0x0;
        }
      }
    }
  }
  return;
code_r0x00014766aa5d:
  plVar7 = plVar7 + 1;
  if (plVar7 == plVar1) goto LAB_14766ac43;
  goto LAB_14766aa58;
}

// UpdateActiveAudioDevices @ 14766cb20

void __thiscall
FAudioDeviceManager::UpdateActiveAudioDevices(FAudioDeviceManager *this,bool param_1)

{
  undefined1 local_res10 [24];
  code *local_38 [2];
  undefined **local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_res10[0] = param_1;
  if (GCVarEnableAudioThreadWait != 0) {
    FAudioCommandFence::Wait(&this->SyncFence,false);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAudioDeviceManager::UpdateActiveAudioDevices'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = local_res10;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAudioDeviceManager::UpdateActiveAudioDevices'::__l2::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                ::Call;
  IterateOverAllDevices(this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38)
  ;
  if (GCVarEnableAudioThreadWait != 0) {
    FAudioCommandFence::BeginFence(&this->SyncFence);
  }
  return;
}

// UpdateSourceEffectChain @ 14766fd50

void __thiscall
FAudioDeviceManager::UpdateSourceEffectChain
          (FAudioDeviceManager *this,uint param_1,
          TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  uint local_res10 [4];
  undefined1 local_res20 [8];
  code *local_38 [5];
  undefined8 *local_10;
  
  local_38[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_res20[0] = param_3;
  local_10 = FMemory::Malloc(0x20,8);
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAudioDeviceManager::UpdateSourceEffectChain'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_10[1] = local_res10;
  local_10[2] = param_2;
  local_10[3] = local_res20;
  if (local_10 + 1 != (longlong *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAudioDeviceManager::UpdateSourceEffectChain'::__l2::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                  ::Call;
  }
  IterateOverAllDevices(this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38)
  ;
  return;
}

// UpdateSubmix @ 14766fde0

void __thiscall
FAudioDeviceManager::UpdateSubmix(FAudioDeviceManager *this,USoundSubmixBase *param_1)

{
  USoundSubmixBase *local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  USoundSubmixBase **local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAudioDeviceManager::UpdateSubmix'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_20 = local_res10;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAudioDeviceManager::UpdateSubmix'::__l2::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                ::Call;
  local_res10[0] = param_1;
  IterateOverAllDevices(this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38)
  ;
  return;
}

// operator() @ 15050e0c0

bool __thiscall `FAudioDeviceManager::DecrementDevice'::__l22::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6883895825940872626>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6883895825940872626>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

