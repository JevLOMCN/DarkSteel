// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 6

// FAudioMixerWasapiRunnable @ 148d42ae0

FAudioMixerWasapiRunnable * __thiscall
Audio::FAudioMixerWasapiRunnable::FAudioMixerWasapiRunnable
          (FAudioMixerWasapiRunnable *this,TFunction<void___cdecl(void)> *param_1,void **param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FAudioMixerWasapiRunnable *pFVar4;
  undefined8 *puVar5;
  
  this->_padding_ = (longlong)&___7FAudioMixerWasapiRunnable_Audio__6B_;
  this->bIsRunning = (atomic<bool>)0x0;
  (this->EventHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventHandles).ArrayNum = 0;
  (this->EventHandles).ArrayMax = 0;
  this->OutputStreamTimeoutsDetected = 0;
  lVar1 = *(longlong *)param_1;
  *(longlong *)&this->DeviceRenderCallback = lVar1;
  *(undefined8 *)&(this->DeviceRenderCallback).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar5)(puVar5,&(this->DeviceRenderCallback).field_0x10);
  }
  bVar3 = CreateEventHandles(this,1);
  if (bVar3) {
    if ((this->EventHandles).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FAudioMixerWasapiRunnable *)(*pcVar2)();
        return pFVar4;
      }
    }
    *param_2 = *(void **)(this->EventHandles).AllocatorInstance.Data;
  }
  return this;
}

// FAudioMixerWasapiRunnable @ 148d42bb0

FAudioMixerWasapiRunnable * __thiscall
Audio::FAudioMixerWasapiRunnable::FAudioMixerWasapiRunnable
          (FAudioMixerWasapiRunnable *this,TFunction<void___cdecl(void)> *param_1,
          TArray<void_*,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  TArray<void_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  bool bVar5;
  undefined8 *puVar6;
  
  this->_padding_ = (longlong)&___7FAudioMixerWasapiRunnable_Audio__6B_;
  pTVar1 = &this->EventHandles;
  this->bIsRunning = (atomic<bool>)0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->EventHandles).ArrayNum = 0;
  (this->EventHandles).ArrayMax = 0;
  this->OutputStreamTimeoutsDetected = 0;
  lVar4 = *(longlong *)param_1;
  *(longlong *)&this->DeviceRenderCallback = lVar4;
  *(undefined8 *)&(this->DeviceRenderCallback).field_0x28 = 0;
  if (lVar4 != 0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&(this->DeviceRenderCallback).field_0x10);
  }
  bVar5 = CreateEventHandles(this,param_3);
  if ((bVar5) && (param_2 != pTVar1)) {
    iVar3 = (this->EventHandles).ArrayNum;
    piVar2 = &param_2->ArrayMax;
    _Src = (pTVar1->AllocatorInstance).Data;
    param_2->ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,*piVar2,&param_2->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((param_2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
      }
    }
  }
  return this;
}

// ~FAudioMixerWasapiRunnable @ 148d43040

void __thiscall
Audio::FAudioMixerWasapiRunnable::~FAudioMixerWasapiRunnable(FAudioMixerWasapiRunnable *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->DeviceRenderCallback != 0) {
    plVar1 = *(longlong **)&(this->DeviceRenderCallback).field_0x28;
    plVar3 = (longlong *)&(this->DeviceRenderCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->EventHandles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// CreateEventHandles @ 148d44610

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapiRunnable::CreateEventHandles(FAudioMixerWasapiRunnable *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  HANDLE pvVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  TArray<void_*,TSizedDefaultAllocator<32>_> *pTVar11;
  
  if ((0x40 < param_1) && (param_1 = 0x40, 2 < (byte)LogAudioMixerWasapi._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
  }
  pTVar11 = &this->EventHandles;
  iVar6 = (this->EventHandles).ArrayNum;
  piVar1 = &(this->EventHandles).ArrayNum;
  if (iVar6 < (int)param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar6,&pTVar11->AllocatorInstance,piVar1,
                       &(this->EventHandles).ArrayMax);
    memset((pTVar11->AllocatorInstance).Data + (longlong)iVar5 * 8,0,
           (longlong)(int)(param_1 - iVar6) << 3);
  }
  else {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if ((int)param_1 < iVar6) {
      uVar10 = iVar6 - param_1;
      if (((int)(uVar10 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (uVar10 != 0) {
        _Dst = (pTVar11->AllocatorInstance).Data + (longlong)(int)param_1 * 8;
        iVar6 = (*piVar1 - uVar10) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 8,(longlong)iVar6 << 3);
        }
        *piVar1 = *piVar1 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar11->AllocatorInstance,*piVar1,&(this->EventHandles).ArrayMax);
      }
    }
  }
  uVar10 = 0;
  if (param_1 != 0) {
    do {
      pvVar7 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      if (pvVar7 == (HANDLE)0x0) {
        *piVar1 = 0;
        if ((this->EventHandles).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&pTVar11->AllocatorInstance,0,&(this->EventHandles).ArrayMax);
        }
        return false;
      }
      uVar8 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      lVar9 = (longlong)(int)uVar10;
      uVar10 = uVar10 + 1;
      *(HANDLE *)((pTVar11->AllocatorInstance).Data + lVar9 * 8) = pvVar7;
    } while (uVar10 < param_1);
  }
  return true;
}

// Run @ 148d4a640

uint __thiscall Audio::FAudioMixerWasapiRunnable::Run(FAudioMixerWasapiRunnable *this)

{
  atomic<bool> aVar1;
  uint nCount;
  FScriptContainerElement *lpHandles;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  LOCK();
  this->bIsRunning = (atomic<bool>)0x1;
  UNLOCK();
  bVar4 = FWindowsPlatformMisc::CoInitialize(Multithreaded);
  nCount = (this->EventHandles).ArrayNum;
  lpHandles = (this->EventHandles).AllocatorInstance.Data;
  aVar1 = this->bIsRunning;
  while (aVar1 != (atomic<bool>)0x0) {
    DVar5 = WaitForMultipleObjects(nCount,(HANDLE *)lpHandles,1,1000);
    if (DVar5 == 0x102) {
      this->OutputStreamTimeoutsDetected = this->OutputStreamTimeoutsDetected + 1;
    }
    else if (DVar5 < nCount) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->DeviceRenderCallback);
      plVar2 = *(longlong **)&(this->DeviceRenderCallback).field_0x28;
      pcVar3 = *(code **)&this->DeviceRenderCallback;
      plVar7 = (longlong *)&(this->DeviceRenderCallback).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar7 = plVar2;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(uVar6);
    }
    aVar1 = this->bIsRunning;
  }
  if (bVar4) {
    FWindowsPlatformMisc::CoUninitialize();
  }
  return 0;
}

// Stop @ 148d4ad40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FAudioMixerWasapiRunnable::Stop(FAudioMixerWasapiRunnable *this)

{
  LOCK();
  this->bIsRunning = (atomic<bool>)0x0;
  UNLOCK();
  if ((this->OutputStreamTimeoutsDetected != 0) && (3 < (byte)LogAudioMixerWasapi._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    return;
  }
  return;
}

