// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 9

// FVoiceCaptureDeviceWindows @ 14ec3a5c0

FVoiceCaptureDeviceWindows * __thiscall
FVoiceCaptureDeviceWindows::FVoiceCaptureDeviceWindows(FVoiceCaptureDeviceWindows *this)

{
  (this->ActiveVoiceCaptures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveVoiceCaptures).ArrayNum = 0;
  (this->ActiveVoiceCaptures).ArrayMax = 0;
  this->bInitialized = false;
  this->DirectSound = (IDirectSound8 *)0x0;
  (this->HMDAudioInputDevice).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HMDAudioInputDevice).Data.ArrayNum = 0;
  (this->HMDAudioInputDevice).Data.ArrayMax = 0;
  (this->DefaultVoiceCaptureDevice).DeviceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultVoiceCaptureDevice).DeviceName.Data.ArrayNum = 0;
  (this->DefaultVoiceCaptureDevice).DeviceName.Data.ArrayMax = 0;
  *(undefined8 *)&this->Devices = 0;
  *(undefined8 *)&(this->Devices).field_0x8 = 0;
  *(undefined8 *)&(this->Devices).field_0x20 = 0;
  *(undefined4 *)&(this->Devices).field_0x28 = 0;
  *(undefined4 *)&(this->Devices).field_0x2c = 0x80;
  *(undefined4 *)&(this->Devices).field_0x34 = 0;
  *(undefined4 *)&(this->Devices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Devices).field_0x40 = 0;
  *(undefined4 *)&(this->Devices).field_0x48 = 0;
  return this;
}

// ~FVoiceCaptureDeviceWindows @ 14ec3a940

void __thiscall
FVoiceCaptureDeviceWindows::~FVoiceCaptureDeviceWindows(FVoiceCaptureDeviceWindows *this)

{
  int *piVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar7 = (this->ActiveVoiceCaptures).ArrayNum;
  uVar8 = 0;
  uVar10 = uVar8;
  if (0 < iVar7) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(**(longlong **)((this->ActiveVoiceCaptures).AllocatorInstance.Data + uVar8) +
                  0x10))();
      iVar7 = (this->ActiveVoiceCaptures).ArrayNum;
      uVar8 = uVar8 + 8;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < iVar7);
  }
  piVar1 = &(this->ActiveVoiceCaptures).ArrayMax;
  (this->ActiveVoiceCaptures).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (this->DirectSound != (IDirectSound8 *)0x0) {
    (**(code **)((longlong)*this->DirectSound + 0x10))();
    this->DirectSound = (IDirectSound8 *)0x0;
  }
  this->bInitialized = false;
  *(undefined4 *)&(this->Devices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Devices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Devices);
  pFVar3 = (this->DefaultVoiceCaptureDevice).DeviceName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->HMDAudioInputDevice).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ActiveVoiceCaptures).AllocatorInstance.Data;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar3);
  return;
}

// Create @ 14ec3b810

FVoiceCaptureDeviceWindows * __cdecl FVoiceCaptureDeviceWindows::Create(void)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FVoiceCaptureDeviceWindows *pFVar6;
  FVoiceCaptureDeviceWindows *pFVar7;
  int iVar8;
  uint uVar9;
  FVoiceCaptureDeviceWindows *pFVar11;
  FVoiceCaptureDeviceWindows *pFVar10;
  
  pFVar7 = Singleton;
  if (Singleton == (FVoiceCaptureDeviceWindows *)0x0) {
    pFVar6 = ::operator_new(0xa8);
    pFVar7 = (FVoiceCaptureDeviceWindows *)0x0;
    Singleton = pFVar7;
    if (pFVar6 != (FVoiceCaptureDeviceWindows *)0x0) {
      (pFVar6->ActiveVoiceCaptures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->ActiveVoiceCaptures).ArrayNum = 0;
      (pFVar6->ActiveVoiceCaptures).ArrayMax = 0;
      pFVar6->bInitialized = false;
      pFVar6->DirectSound = (IDirectSound8 *)0x0;
      (pFVar6->HMDAudioInputDevice).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->HMDAudioInputDevice).Data.ArrayNum = 0;
      (pFVar6->HMDAudioInputDevice).Data.ArrayMax = 0;
      (pFVar6->DefaultVoiceCaptureDevice).DeviceName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar6->DefaultVoiceCaptureDevice).DeviceName.Data.ArrayNum = 0;
      (pFVar6->DefaultVoiceCaptureDevice).DeviceName.Data.ArrayMax = 0;
      *(undefined8 *)&pFVar6->Devices = 0;
      *(undefined8 *)&(pFVar6->Devices).field_0x8 = 0;
      *(undefined8 *)&(pFVar6->Devices).field_0x20 = 0;
      *(undefined4 *)&(pFVar6->Devices).field_0x28 = 0;
      *(undefined4 *)&(pFVar6->Devices).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar6->Devices).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar6->Devices).field_0x34 = 0;
      *(undefined8 *)&(pFVar6->Devices).field_0x40 = 0;
      *(undefined4 *)&(pFVar6->Devices).field_0x48 = 0;
      Singleton = pFVar6;
    }
    bVar4 = Init(Singleton);
    pFVar6 = Singleton;
    if (bVar4) {
      return Singleton;
    }
    if (Singleton == (FVoiceCaptureDeviceWindows *)0x0) {
      return (FVoiceCaptureDeviceWindows *)0x0;
    }
    iVar8 = (Singleton->ActiveVoiceCaptures).ArrayNum;
    pFVar10 = pFVar7;
    pFVar11 = pFVar7;
    if (0 < iVar8) {
      do {
        uVar9 = (uint)pFVar10;
        uVar5 = 0;
        if ((int)uVar9 < iVar8) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FVoiceCaptureDeviceWindows *)(*pcVar3)();
          return pFVar7;
        }
        (**(code **)(**(longlong **)
                       ((pFVar6->ActiveVoiceCaptures).AllocatorInstance.Data + -0x40 +
                       (longlong)((pFVar11->DefaultVoiceCaptureDevice).DeviceId.Data4 + -8)) + 0x10)
        )();
        iVar8 = (pFVar6->ActiveVoiceCaptures).ArrayNum;
        pFVar10 = (FVoiceCaptureDeviceWindows *)(ulonglong)(uVar9 + 1);
        pFVar11 = (FVoiceCaptureDeviceWindows *)&(pFVar11->ActiveVoiceCaptures).ArrayNum;
      } while ((int)(uVar9 + 1) < iVar8);
    }
    (pFVar6->ActiveVoiceCaptures).ArrayNum = 0;
    if ((pFVar6->ActiveVoiceCaptures).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pFVar6,0,&(pFVar6->ActiveVoiceCaptures).ArrayMax);
    }
    if (pFVar6->DirectSound != (IDirectSound8 *)0x0) {
      (**(code **)((longlong)*pFVar6->DirectSound + 0x10))();
      pFVar6->DirectSound = (IDirectSound8 *)0x0;
    }
    pFVar6->bInitialized = false;
    *(undefined4 *)&(pFVar6->Devices).field_0x48 = 0;
    pvVar1 = *(void **)&(pFVar6->Devices).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&pFVar6->Devices,0,*(int *)&(pFVar6->Devices).field_0x8);
    *(undefined4 *)&(pFVar6->Devices).field_0x8 = 0;
    if (*(int *)&(pFVar6->Devices).field_0xc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)&pFVar6->Devices,0,
                 (int *)&(pFVar6->Devices).field_0xc);
    }
    *(undefined4 *)&(pFVar6->Devices).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->Devices).field_0x34 = 0;
    iVar8 = *(int *)&(pFVar6->Devices).field_0x2c;
    *(undefined4 *)&(pFVar6->Devices).field_0x28 = 0;
    if ((iVar8 < 0) || (0x80 < iVar8)) {
      *(undefined4 *)&(pFVar6->Devices).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar6->Devices).field_0x10,0);
    }
    pvVar1 = *(void **)&(pFVar6->Devices).field_0x20;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    if (*(void **)&pFVar6->Devices != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar6->Devices);
    }
    pFVar2 = (pFVar6->DefaultVoiceCaptureDevice).DeviceName.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar6->HMDAudioInputDevice).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar6->ActiveVoiceCaptures).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar6,0xa8);
  }
  Singleton = pFVar7;
  return pFVar7;
}

// CreateVoiceCaptureObject @ 14ec3c440

FVoiceCaptureWindows * __thiscall
FVoiceCaptureDeviceWindows::CreateVoiceCaptureObject
          (FVoiceCaptureDeviceWindows *this,FString *param_1,int param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  FVoiceCaptureWindows *pFVar7;
  FVoiceCaptureWindows *local_18 [2];
  
  if (this->bInitialized == false) {
    pFVar7 = (FVoiceCaptureWindows *)0x0;
  }
  else {
    pFVar7 = ::operator_new(0x198);
    if (pFVar7 == (FVoiceCaptureWindows *)0x0) {
      pFVar7 = (FVoiceCaptureWindows *)0x0;
    }
    else {
      pFVar7 = FVoiceCaptureWindows::FVoiceCaptureWindows(pFVar7);
    }
    cVar4 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,param_1,param_2,param_3);
    if (cVar4 == '\0') {
      pFVar7 = (FVoiceCaptureWindows *)0x0;
    }
    else {
      pFVar2 = (this->ActiveVoiceCaptures).AllocatorInstance.Data;
      local_18[0] = pFVar7;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->ActiveVoiceCaptures).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FVoiceCaptureWindows *)(*pcVar3)();
        return pFVar7;
      }
      iVar6 = (this->ActiveVoiceCaptures).ArrayNum;
      piVar1 = &(this->ActiveVoiceCaptures).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->ActiveVoiceCaptures).ArrayNum = iVar6 + 1;
      *(FVoiceCaptureWindows **)
       ((this->ActiveVoiceCaptures).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
    }
  }
  return pFVar7;
}

// Destroy @ 14ec3d640

void __cdecl FVoiceCaptureDeviceWindows::Destroy(void)

{
  if (Singleton != (FVoiceCaptureDeviceWindows *)0x0) {
    _scalar_deleting_destructor_(Singleton,1);
    Singleton = (FVoiceCaptureDeviceWindows *)0x0;
  }
  return;
}

// FreeVoiceCaptureObject @ 14ec3ea00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVoiceCaptureDeviceWindows::FreeVoiceCaptureObject
          (FVoiceCaptureDeviceWindows *this,IVoiceCapture *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  if (param_1 != (IVoiceCapture *)0x0) {
    pFVar3 = (this->ActiveVoiceCaptures).AllocatorInstance.Data;
    iVar7 = (this->ActiveVoiceCaptures).ArrayNum;
    for (pFVar9 = pFVar3; pFVar9 != pFVar3 + (longlong)iVar7 * 8; pFVar9 = pFVar9 + 8) {
      if (*(IVoiceCapture **)pFVar9 == param_1) {
        uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
        if (uVar8 != 0xffffffff) {
          uVar6 = 0;
          if ((int)uVar8 < iVar7) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar2 = (this->ActiveVoiceCaptures).ArrayNum;
          pFVar3 = (this->ActiveVoiceCaptures).AllocatorInstance.Data;
          iVar7 = iVar2 + ~uVar8;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(pFVar3 + (longlong)(int)uVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar7) * 8,
                    (longlong)iVar7 << 3);
          }
          piVar1 = &(this->ActiveVoiceCaptures).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)this,(this->ActiveVoiceCaptures).ArrayNum,
                     &(this->ActiveVoiceCaptures).ArrayMax);
          return;
        }
        break;
      }
    }
    if (2 < (byte)LogVoiceCapture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
    }
  }
  return;
}

// Get @ 14ec3eb20

FVoiceCaptureDeviceWindows * __cdecl FVoiceCaptureDeviceWindows::Get(void)

{
  return Singleton;
}

// Init @ 14ec3f270

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FVoiceCaptureDeviceWindows::Init(FVoiceCaptureDeviceWindows *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  HRESULT HVar7;
  IModularFeatures *pIVar8;
  IHeadMountedDisplayModule *pIVar9;
  undefined8 *puVar10;
  FStaticBasicLogRecord *pFVar11;
  bool local_res8 [8];
  longlong *local_res10;
  IMMDevice *local_res18;
  LPVOID local_res20;
  void *local_38 [3];
  
  iVar6 = DirectSoundCreate8(0,&this->DirectSound,0);
  if (iVar6 < 0) {
    if ((byte)LogVoiceCapture._0_1_ < 3) {
      return false;
    }
    pFVar11 = &::LOG_Static;
  }
  else {
    bVar4 = IsInGameThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplayModule.h"
                           ,0x5a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pIVar8 = IModularFeatures::Get();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                      ::__l2::HMDFeatureName,L"HMD");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    iVar6 = (**(code **)((longlong)*pIVar8 + 0x18))
                      (pIVar8,`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                              ::__l2::HMDFeatureName);
    if (0 < iVar6) {
      pIVar9 = IHeadMountedDisplayModule::Get();
      puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar9 + 0x68))(pIVar9,local_38);
      pFVar1 = &this->HMDAudioInputDevice;
      if (pFVar1 != (FString *)puVar10) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar10;
        *puVar10 = 0;
        (this->HMDAudioInputDevice).Data.ArrayNum = *(int *)(puVar10 + 1);
        (this->HMDAudioInputDevice).Data.ArrayMax = *(int *)((longlong)puVar10 + 0xc);
        puVar10[1] = 0;
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
    TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
             *)&this->Devices);
    iVar6 = DirectSoundCaptureEnumerateW(CaptureDeviceCallback,this);
    if (-1 < iVar6) {
      local_res8[0] = false;
      if ((GConfig != (FConfigCacheIni *)0x0) &&
         (bVar4 = FConfigCacheIni::GetBool
                            (GConfig,L"Voice",L"bDuckingOptOut",local_res8,&GEngineIni), !bVar4)) {
        local_res8[0] = false;
      }
      bVar4 = local_res8[0];
      local_res10 = (longlong *)0x0;
      HVar7 = CoCreateInstance((IID *)&_GUID_bcde0395_e52f_467c_8e3d_c4579291692e,(LPUNKNOWN)0x0,1,
                               (IID *)&_GUID_a95664d2_9614_4f35_a746_de8db63617e6,&local_res10);
      if (-1 < HVar7) {
        local_res18 = (IMMDevice *)0x0;
        iVar6 = (**(code **)(*local_res10 + 0x20))(local_res10,0,0,&local_res18);
        if (-1 < iVar6) {
          (**(code **)((longlong)*local_res18 + 0x28))(local_res18,&local_res20);
          if (3 < (byte)LogVoiceCapture._0_1_) {
            UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)
                       &`public:_static_bool___cdecl_FAudioDuckingWindows::UpdateAudioDucking(bool)'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
          }
          CoTaskMemFree(local_res20);
          FAudioDuckingWindows::EnableDuckingOptOut(local_res18,bVar4);
          (**(code **)((longlong)*local_res18 + 0x10))();
          (**(code **)(*local_res10 + 0x10))();
          this->bInitialized = true;
          return true;
        }
        (**(code **)(*local_res10 + 0x10))();
        local_res10 = (longlong *)0x0;
      }
      if (2 < (byte)LogVoiceCapture._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_static_bool___cdecl_FAudioDuckingWindows::UpdateAudioDucking(bool)'::
                    __l66::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
      }
      this->bInitialized = true;
      return true;
    }
    if ((byte)LogVoiceCapture._0_1_ < 3) {
      return false;
    }
    pFVar11 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar11,(FLogCategoryBase *)&LogVoiceCapture);
  return false;
}

// Shutdown @ 14ec41b50

void __thiscall FVoiceCaptureDeviceWindows::Shutdown(FVoiceCaptureDeviceWindows *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  iVar4 = (this->ActiveVoiceCaptures).ArrayNum;
  uVar6 = 0;
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < iVar4) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(**(longlong **)((this->ActiveVoiceCaptures).AllocatorInstance.Data + lVar5) +
                  0x10))();
      iVar4 = (this->ActiveVoiceCaptures).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar6 < iVar4);
  }
  (this->ActiveVoiceCaptures).ArrayNum = 0;
  if ((this->ActiveVoiceCaptures).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->ActiveVoiceCaptures).ArrayMax);
  }
  if (this->DirectSound != (IDirectSound8 *)0x0) {
    (**(code **)((longlong)*this->DirectSound + 0x10))();
    this->DirectSound = (IDirectSound8 *)0x0;
  }
  this->bInitialized = false;
  return;
}

