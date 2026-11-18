// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 38

// Construct<FAudioOutputDeviceInfo> @ 1464cfab0

void __cdecl UE::CoreUObject::Private::Construct<FAudioOutputDeviceInfo>(void *param_1)

{
  ::FString::FString(param_1,"");
  ::FString::FString((FString *)((longlong)param_1 + 0x10),"");
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) & 0xfd | 1;
  return;
}

// ConstructForTests<FAudioOutputDeviceInfo> @ 1464cfb00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioOutputDeviceInfo>(void *param_1)

{
  ::FString::FString(param_1,"");
  ::FString::FString((FString *)((longlong)param_1 + 0x10),"");
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) & 0xfd | 1;
  return;
}

// Destruct<FAudioOutputDeviceInfo> @ 1464cfb50

void __cdecl UE::CoreUObject::Private::Destruct<FAudioOutputDeviceInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FAudioOutputDeviceInfo> @ 1464cfba0

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioOutputDeviceInfo>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  byte bVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    *(undefined4 *)((longlong)param_1 + 0x20) =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    pFVar1 = (FString *)((longlong)param_1 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(char *)((longlong)param_1 + 0x28) = (char)*(int *)((longlong)param_2 + 0x28);
    if (pFVar1 != (FString *)((longlong)param_2 + 0x30)) {
      iVar3 = *(int *)((longlong)param_2 + 0x38);
      piVar2 = (int *)((longlong)param_1 + 0x3c);
      _Src = (((FString *)((longlong)param_2 + 0x30))->Data).AllocatorInstance.Data;
      *(int *)((longlong)param_1 + 0x38) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,*piVar2,(ForAnyElementType *)pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3);
        }
      }
    }
    bVar4 = (*(byte *)((longlong)param_1 + 0x40) ^
            *(byte *)&(((FString *)((longlong)param_2 + 0x40))->Data).AllocatorInstance.Data) & 1 ^
            *(byte *)((longlong)param_1 + 0x40);
    *(byte *)((longlong)param_1 + 0x40) = bVar4;
    *(byte *)((longlong)param_1 + 0x40) = (bVar4 ^ *(byte *)((longlong)param_2 + 0x40)) & 2 ^ bVar4;
    param_1 = (int *)((longlong)param_1 + 0x48);
    param_2 = (int *)((longlong)param_2 + 0x48);
  }
  return true;
}

// Construct<FSwapAudioOutputResult> @ 1464cfd50

void __cdecl UE::CoreUObject::Private::Construct<FSwapAudioOutputResult>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 2;
  return;
}

// ConstructForTests<FSwapAudioOutputResult> @ 1464cfd80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSwapAudioOutputResult>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FSwapAudioOutputResult> @ 1464cfda0

void __cdecl UE::CoreUObject::Private::Destruct<FSwapAudioOutputResult>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FSwapAudioOutputResult> @ 1464cfde0

bool __cdecl
UE::CoreUObject::Private::Copy<FSwapAudioOutputResult>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    pFVar1 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x20) =
         *(undefined1 *)&(pFVar1->Data).AllocatorInstance.Data;
    param_1 = (int *)((longlong)param_1 + 0x28);
  }
  return true;
}

// AddNested<UE::Tasks::TTask<void>_> @ 1464d0b80

void __cdecl UE::Tasks::AddNested<UE::Tasks::TTask<void>_>(TTask<void> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTaskBase *this;
  
  this = Private::GetCurrentTask();
  if (this == (FTaskBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x1ff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Private::FTaskBase::AddNested(this,(FTaskBase *)*param_1);
  return;
}

// DereferenceIfNecessary<Audio::FMixerDevice,Audio::FMixerDevice_*_&> @ 1464d2310

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerDevice * __cdecl
UE::Core::Private::DereferenceIfNecessary<Audio::FMixerDevice,Audio::FMixerDevice_*_&>
          (FMixerDevice **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<Audio::FMixerSourceManager,Audio::FMixerSourceManager_*_&> @ 1464d2330

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerSourceManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<Audio::FMixerSourceManager,Audio::FMixerSourceManager_*_&>
          (FMixerSourceManager **param_1)

{
  return *param_1;
}

// Construct<FSubmixEffectReverbSettings> @ 1465353e0

void __cdecl UE::CoreUObject::Private::Construct<FSubmixEffectReverbSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3be56042;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f63d70a;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3d4ccccd;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3fbeb852;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f59999a;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f59999a;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f7e76c9;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f547ae1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3fa147ae;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  return;
}

// ConstructForTests<FSubmixEffectReverbSettings> @ 146535460

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSubmixEffectReverbSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3be56042;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f63d70a;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3d4ccccd;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3fbeb852;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f59999a;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f59999a;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f7e76c9;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f547ae1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3fa147ae;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  return;
}

// Destruct<FSubmixEffectReverbSettings> @ 1465354d0

void __cdecl UE::CoreUObject::Private::Destruct<FSubmixEffectReverbSettings>(void *param_1)

{
  return;
}

// Copy<FSubmixEffectReverbSettings> @ 1465355b0

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectReverbSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSubmixEffectSubmixEQSettings> @ 1465356e0

void __cdecl UE::CoreUObject::Private::Construct<FSubmixEffectSubmixEQSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FSubmixEffectSubmixEQSettings> @ 1465356f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSubmixEffectSubmixEQSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FSubmixEffectSubmixEQSettings> @ 146535700

void __cdecl UE::CoreUObject::Private::Destruct<FSubmixEffectSubmixEQSettings>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSubmixEffectSubmixEQSettings> @ 146535720

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectSubmixEQSettings>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 4);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSubmixEffectEQBand> @ 146535a40

void __cdecl UE::CoreUObject::Private::Construct<FSubmixEffectEQBand>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xfffffffe;
  *(undefined4 *)param_1 = 0x43fa0000;
  *(undefined8 *)((longlong)param_1 + 4) = 0x40000000;
  return;
}

// ConstructForTests<FSubmixEffectEQBand> @ 146535b20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSubmixEffectEQBand>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xfffffffe;
  *(undefined4 *)param_1 = 0x43fa0000;
  *(undefined8 *)((longlong)param_1 + 4) = 0x40000000;
  return;
}

// Destruct<FSubmixEffectEQBand> @ 146535b40

void __cdecl UE::CoreUObject::Private::Destruct<FSubmixEffectEQBand>(void *param_1)

{
  return;
}

// Copy<FSubmixEffectEQBand> @ 146535b50

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectEQBand>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSubmixEffectDynamicsProcessorSettings> @ 146535cc0

void __cdecl
UE::CoreUObject::Private::Construct<FSubmixEffectDynamicsProcessorSettings>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x44) = *(byte *)((longlong)param_1 + 0x44) & 0xfe;
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) & 0xfe;
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) & 0xf3 | 3;
  *(undefined2 *)param_1 = 0x200;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xc0c00000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x41a00000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x469c4000;
  return;
}

// ConstructForTests<FSubmixEffectDynamicsProcessorSettings> @ 146535d40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSubmixEffectDynamicsProcessorSettings>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x44) = *(byte *)((longlong)param_1 + 0x44) & 0xfe;
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) & 0xfe;
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) & 0xf3 | 3;
  *(undefined2 *)param_1 = 0x200;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xc0c00000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x41a00000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x469c4000;
  return;
}

// Destruct<FSubmixEffectDynamicsProcessorSettings> @ 146535dc0

void __cdecl
UE::CoreUObject::Private::Destruct<FSubmixEffectDynamicsProcessorSettings>(void *param_1)

{
  return;
}

// Copy<FSubmixEffectDynamicsProcessorSettings> @ 146535dd0

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectDynamicsProcessorSettings>
          (void *param_1,void *param_2,int param_3)

{
  byte bVar1;
  void *pvVar2;
  undefined1 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = puVar3[(longlong)param_2 - (longlong)param_1];
      puVar3[1] = *(undefined1 *)((longlong)pvVar2 + 1);
      puVar3[2] = *(undefined1 *)((longlong)pvVar2 + 2);
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((longlong)pvVar2 + 4);
      *(undefined4 *)(puVar3 + 8) = *(undefined4 *)((longlong)pvVar2 + 8);
      *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)((longlong)pvVar2 + 0xc);
      *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)((longlong)pvVar2 + 0x10);
      *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)((longlong)pvVar2 + 0x14);
      *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)((longlong)pvVar2 + 0x18);
      *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)((longlong)pvVar2 + 0x1c);
      puVar3[0x20] = *(undefined1 *)((longlong)pvVar2 + 0x20);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar2 + 0x28) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar2 + 0x28));
      }
      *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)((longlong)pvVar2 + 0x28);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar2 + 0x30) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar2 + 0x30));
      }
      *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)((longlong)pvVar2 + 0x30);
      bVar1 = (puVar3[0x38] ^ *(byte *)((longlong)pvVar2 + 0x38)) & 1 ^ puVar3[0x38];
      puVar3[0x38] = bVar1;
      bVar1 = (bVar1 ^ *(byte *)((longlong)pvVar2 + 0x38)) & 2 ^ bVar1;
      puVar3[0x38] = bVar1;
      bVar1 = (bVar1 ^ *(byte *)((longlong)pvVar2 + 0x38)) & 4 ^ bVar1;
      puVar3[0x38] = bVar1;
      puVar3[0x38] = (bVar1 ^ *(byte *)((longlong)pvVar2 + 0x38)) & 8 ^ bVar1;
      *(undefined4 *)(puVar3 + 0x3c) = *(undefined4 *)((longlong)pvVar2 + 0x3c);
      *(undefined4 *)(puVar3 + 0x40) = *(undefined4 *)((longlong)pvVar2 + 0x40);
      *(undefined8 *)(puVar3 + 0x44) = *(undefined8 *)((longlong)pvVar2 + 0x44);
      *(undefined4 *)(puVar3 + 0x4c) = *(undefined4 *)((longlong)pvVar2 + 0x4c);
      *(undefined8 *)(puVar3 + 0x50) = *(undefined8 *)((longlong)pvVar2 + 0x50);
      *(undefined4 *)(puVar3 + 0x58) = *(undefined4 *)((longlong)pvVar2 + 0x58);
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x60);
      puVar3 = puVar3 + 0x60;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSubmixEffectDynamicProcessorFilterSettings> @ 146536050

void __cdecl
UE::CoreUObject::Private::Construct<FSubmixEffectDynamicProcessorFilterSettings>(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xfe;
  *(undefined8 *)((longlong)param_1 + 4) = 0x41a00000;
  return;
}

// ConstructForTests<FSubmixEffectDynamicProcessorFilterSettings> @ 146536070

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSubmixEffectDynamicProcessorFilterSettings>
          (void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xfe;
  *(undefined8 *)((longlong)param_1 + 4) = 0x41a00000;
  return;
}

// Destruct<FSubmixEffectDynamicProcessorFilterSettings> @ 146536090

void __cdecl
UE::CoreUObject::Private::Destruct<FSubmixEffectDynamicProcessorFilterSettings>(void *param_1)

{
  return;
}

// Copy<FSubmixEffectDynamicProcessorFilterSettings> @ 1465360e0

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectDynamicProcessorFilterSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TObjectPtr<UQuartzClockHandle>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UQuartzClockHandle>_>,UQuartzClockHandle_*> @ 146537700

/* WARNING: Enum "Type": Some values do not have unique names */

UQuartzClockHandle ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UQuartzClockHandle>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UQuartzClockHandle>_>,UQuartzClockHandle_*>
          (TObjectPtr<UQuartzClockHandle> *param_1)

{
  return (UQuartzClockHandle **)param_1;
}

// DereferenceIfNecessary<FSubmixEffectDynamicsProcessor,FSubmixEffectDynamicsProcessor_*_&> @ 1465377a0

FSubmixEffectDynamicsProcessor * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FSubmixEffectDynamicsProcessor,FSubmixEffectDynamicsProcessor_*_&>
          (FSubmixEffectDynamicsProcessor **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<USynthComponent,USynthComponent_*_&> @ 1465377c0

USynthComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<USynthComponent,USynthComponent_*_&>
          (USynthComponent **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<short>_> @ 14653b310

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<short>_>
          (ushort param_1,ForElementType<short> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<short>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<short>_> @ 14653b3d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<short>_>
          (uint param_1,uint param_2,ForElementType<short> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<short>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,unsigned___int64> @ 1504ecf70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,unsigned___int64>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,wchar_t **param_3,ulong64 *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  ulong64 *local_18;
  code *local_10;
  
  local_38.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_38.Name = (char *)0x0;
  local_10 = FLogField::Write<unsigned___int64>;
  local_20 = 0;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned___int64,unsigned___int64> @ 1504ecfc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned___int64,unsigned___int64>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,ulong64 *param_3,ulong64 *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  ulong64 *local_18;
  code *local_10;
  
  local_38.Name = (char *)0x0;
  local_38.WriteValue = FLogField::Write<unsigned___int64>;
  local_20 = 0;
  local_10 = FLogField::Write<unsigned___int64>;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

