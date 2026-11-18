// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FSoundWavePCMLoader @ 1484bc300

FSoundWavePCMLoader * __thiscall
Audio::FSoundWavePCMLoader::FSoundWavePCMLoader(FSoundWavePCMLoader *this)

{
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FSoundWavePCMLoader_Audio__6B_;
  (this->LoadingSoundWaves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadingSoundWaves).ArrayNum = 0;
  (this->LoadingSoundWaves).ArrayMax = 0;
  return this;
}

// AddReferencedObjects @ 1484c2690

void __thiscall
Audio::FSoundWavePCMLoader::AddReferencedObjects
          (FSoundWavePCMLoader *this,FReferenceCollector *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LoadingSoundWaves).ArrayNum;
  pFVar4 = (this->LoadingSoundWaves).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->LoadingSoundWaves).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FSoundWavePCMLoader::FLoadingSoundWaveInfo,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadingSoundWave.SoundWave",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SampleBufferIO.cpp"
                         ,0x5f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar4,0,0);
    pFVar4 = pFVar4 + 0x50;
  }
  return;
}

// GetReferencerName @ 1484d9f40

FString * __thiscall
Audio::FSoundWavePCMLoader::GetReferencerName
          (FSoundWavePCMLoader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSoundWavePCMLoader");
  return __return_storage_ptr__;
}

// LoadSoundWave @ 1484e1c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Audio::FSoundWavePCMLoader::LoadSoundWave
          (FSoundWavePCMLoader *this,USoundWave *param_1,
          TFunction<void___cdecl(USoundWave_const_*,Audio::TSampleBuffer<short>_const_&)> *param_2,
          bool param_3)

{
  TArray<Audio::FSoundWavePCMLoader::FLoadingSoundWaveInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  short *psVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStackY_138 [32];
  USoundWave *local_e8;
  FAudioDeviceHandle local_e0;
  TSampleBuffer<short> local_c8;
  USoundWave *local_98 [2];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  FScriptContainerElement local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FAudioDevice::GetMainAudioDevice(&local_e0);
  bVar9 = FAudioDeviceHandle::IsValid(&local_e0);
  if ((bVar9) && (param_1 != (USoundWave *)0x0)) {
    local_98[0] = (USoundWave *)0x0;
    local_88 = 0;
    plStack_60 = (longlong *)0x0;
    if ((((param_1->PrecacheState).Counter == 2) && (param_1->RawPCMData != (uchar *)0x0)) &&
       (param_1->RawPCMDataSize != 0)) {
      local_58 = (FScriptContainerElement)0x2;
    }
    else {
      local_58 = (FScriptContainerElement)0x1;
      bVar9 = FAudioDeviceHandle::IsValid(&local_e0);
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                             ,0x60,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)((local_e0.Device)->_padding_ + 0x60))(local_e0.Device,param_1,param_3,1);
    }
    if (param_3) {
      if (((param_1->PrecacheState).Counter != 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InSoundWave->GetPrecacheState() == ESoundWavePrecacheState::Done",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SampleBufferIO.cpp"
                             ,0x2f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = param_1->RawPCMDataSize;
      psVar3 = (short *)param_1->RawPCMData;
      fVar14 = USoundWave::GetSampleRateForCurrentPlatform(param_1);
      TSampleBuffer<short>::TSampleBuffer<short>
                (&local_c8,psVar3,(int)((ulonglong)(longlong)iVar10 >> 1),param_1->NumChannels,
                 (int)fVar14);
      local_e8 = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar5 = *(code **)param_2;
      plVar12 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar12 = *(longlong **)&param_2->field_0x28;
      }
      uVar11 = (**(code **)(*plVar12 + 8))();
      (*pcVar5)(uVar11,&local_e8,&local_c8);
      if (local_c8.RawPCMData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.RawPCMData.AllocatorInstance.Data);
      }
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      lVar13 = *(longlong *)param_2;
      uVar11 = *(undefined8 *)&param_2->field_0x8;
      pTVar1 = &this->LoadingSoundWaves;
      lVar6 = *(longlong *)&param_2->field_0x10;
      uVar7 = *(undefined8 *)&param_2->field_0x18;
      uVar8 = *(undefined8 *)&param_2->field_0x20;
      plVar12 = *(longlong **)&param_2->field_0x28;
      *(longlong *)param_2 = local_88;
      *(undefined8 *)&param_2->field_0x8 = uStack_80;
      *(longlong *)&param_2->field_0x10 = local_78;
      *(undefined8 *)&param_2->field_0x18 = uStack_70;
      *(undefined8 *)&param_2->field_0x20 = local_68;
      *(longlong **)&param_2->field_0x28 = plStack_60;
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      local_78 = lVar6;
      uStack_70 = uVar7;
      local_68 = uVar8;
      plStack_60 = plVar12;
      local_98[0] = param_1;
      local_88 = lVar13;
      uStack_80 = uVar11;
      if (((pFVar4 <= (FScriptContainerElement *)local_98) &&
          ((FScriptContainerElement *)local_98 <
           pFVar4 + (longlong)(this->LoadingSoundWaves).ArrayMax * 0x50)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (this->LoadingSoundWaves).ArrayNum;
      piVar2 = &(this->LoadingSoundWaves).ArrayMax;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1050,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->LoadingSoundWaves).ArrayNum = iVar10 + 1;
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      lVar13 = (longlong)iVar10 * 0x50;
      *(USoundWave **)(pFVar4 + lVar13) = local_98[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98[0] != (USoundWave *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)local_98[0]);
      }
      *(longlong *)(pFVar4 + lVar13 + 0x10) = local_88;
      *(undefined8 *)(pFVar4 + lVar13 + 0x38) = 0;
      if (local_88 != 0) {
        plVar12 = &local_78;
        if (plStack_60 != (longlong *)0x0) {
          plVar12 = plStack_60;
        }
        (**(code **)*plVar12)();
      }
      pFVar4[lVar13 + 0x40] = local_58;
    }
    if (local_88 != 0) {
      plVar12 = &local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar12 = plStack_60;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_e0);
    if (*(longlong *)param_2 == 0) {
      return;
    }
    plVar12 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_2->field_0x28;
    }
    lVar13 = *plVar12;
  }
  else {
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_e0);
    if (*(longlong *)param_2 == 0) {
      return;
    }
    plVar12 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_2->field_0x28;
    }
    lVar13 = *plVar12;
  }
  (**(code **)(lVar13 + 0x10))(plVar12);
  return;
}

// Update @ 1484fe940

void __thiscall Audio::FSoundWavePCMLoader::Update(FSoundWavePCMLoader *this)

{
  FScriptContainerElement *pFVar1;
  USoundWave *this_00;
  uchar *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  USoundWave *local_res8;
  ForAnyElementType local_58;
  int local_50 [3];
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  
  uVar7 = (this->LoadingSoundWaves).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar9 = (longlong)(int)uVar7 * 0x50;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->LoadingSoundWaves).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->LoadingSoundWaves).AllocatorInstance.Data;
      this_00 = *(USoundWave **)(pFVar1 + lVar9);
      if (this_00 != (USoundWave *)0x0) {
        if ((this_00->PrecacheState).Counter == 2) {
          pFVar1[lVar9 + 0x40] = (FScriptContainerElement)0x2;
        }
        if (pFVar1[lVar9 + 0x40] == (FScriptContainerElement)0x2) {
          _Src = this_00->RawPCMData;
          uVar8 = (ulonglong)(longlong)this_00->RawPCMDataSize >> 1;
          fVar10 = USoundWave::GetSampleRateForCurrentPlatform(this_00);
          local_40 = this_00->NumChannels;
          local_50[2] = (int)uVar8;
          local_3c = (int)fVar10;
          local_58.Data = (FScriptContainerElement *)0x0;
          local_50[0] = 0;
          local_50[1] = 0;
          local_44 = (int)((longlong)
                           ((ulonglong)(uint)(local_50[2] >> 0x1f) << 0x20 | uVar8 & 0xffffffff) /
                          (longlong)local_40);
          local_38 = (float)local_44 / (float)local_3c;
          if (local_50[2] < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
          }
          if (0 < local_50[2]) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_50[2],&local_58,0,local_50 + 1);
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_50[2],&local_58,local_50,local_50 + 1);
          memcpy(local_58.Data,_Src,(longlong)local_50[2] * 2);
          local_res8 = this_00;
          UE::Core::Private::Function::CheckCallable(*(void **)(pFVar1 + lVar9 + 0x10));
          pFVar6 = *(FScriptContainerElement **)(pFVar1 + lVar9 + 0x38);
          pcVar2 = *(code **)(pFVar1 + lVar9 + 0x10);
          if (pFVar6 == (FScriptContainerElement *)0x0) {
            pFVar6 = pFVar1 + lVar9 + 0x20;
          }
          uVar5 = (**(code **)(*(longlong *)pFVar6 + 8))();
          (*pcVar2)(uVar5,&local_res8,&local_58);
          uVar4 = 0;
          if ((int)uVar7 < (this->LoadingSoundWaves).ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TArray<Audio::FSoundWavePCMLoader::FLoadingSoundWaveInfo,TSizedDefaultAllocator<32>_>::
          RemoveAtSwapImpl(&this->LoadingSoundWaves,uVar7);
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data);
          }
        }
      }
      lVar9 = lVar9 + -0x50;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return;
}

