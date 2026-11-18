// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 14727d860

UClass * __cdecl UHapticFeedbackEffect_SoundWave::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHapticFeedbackEffect_SoundWave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HapticFeedbackEffect_SoundWave",
               &Z_Registration_Info_UClass_UHapticFeedbackEffect_SoundWave.InnerSingleton,
               StaticRegisterNativesUHapticFeedbackEffect_SoundWave,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UHapticFeedbackEffect_SoundWave>,
               InternalVTableHelperCtorCaller<UHapticFeedbackEffect_SoundWave>,local_res8,
               UHapticFeedbackEffect_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHapticFeedbackEffect_SoundWave.InnerSingleton;
}

// UHapticFeedbackEffect_SoundWave @ 14727f930

UHapticFeedbackEffect_SoundWave * __thiscall
UHapticFeedbackEffect_SoundWave::UHapticFeedbackEffect_SoundWave
          (UHapticFeedbackEffect_SoundWave *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UHapticFeedbackEffect_SoundWave__6B_;
  (this->SoundWave).field0_0x0.DebugPtr = (USoundWave *)0x0;
  (this->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawData).ArrayNum = 0;
  (this->RawData).ArrayMax = 0;
  return this;
}

// GetPrivateStaticClass @ 147280e60

UClass * __cdecl UHapticFeedbackEffect_SoundWave::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHapticFeedbackEffect_SoundWave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HapticFeedbackEffect_SoundWave",
               &Z_Registration_Info_UClass_UHapticFeedbackEffect_SoundWave.InnerSingleton,
               StaticRegisterNativesUHapticFeedbackEffect_SoundWave,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UHapticFeedbackEffect_SoundWave>,
               InternalVTableHelperCtorCaller<UHapticFeedbackEffect_SoundWave>,local_res8,
               UHapticFeedbackEffect_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHapticFeedbackEffect_SoundWave.InnerSingleton;
}

// StaticRegisterNativesUHapticFeedbackEffect_SoundWave @ 147281540

void __cdecl
UHapticFeedbackEffect_SoundWave::StaticRegisterNativesUHapticFeedbackEffect_SoundWave(void)

{
  return;
}

// UHapticFeedbackEffect_SoundWave @ 147bbce10

UHapticFeedbackEffect_SoundWave * __thiscall
UHapticFeedbackEffect_SoundWave::UHapticFeedbackEffect_SoundWave
          (UHapticFeedbackEffect_SoundWave *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UHapticFeedbackEffect_SoundWave__6B_;
  (this->SoundWave).field0_0x0.DebugPtr = (USoundWave *)0x0;
  (this->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawData).ArrayNum = 0;
  (this->RawData).ArrayMax = 0;
  this->bPrepared = false;
  return this;
}

// ~UHapticFeedbackEffect_SoundWave @ 147bbf6a0

void __thiscall
UHapticFeedbackEffect_SoundWave::~UHapticFeedbackEffect_SoundWave
          (UHapticFeedbackEffect_SoundWave *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UHapticFeedbackEffect_SoundWave__6B_;
  piVar1 = &(this->RawData).ArrayMax;
  (this->RawData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->RawData).AllocatorInstance,0,piVar1);
  }
  pFVar2 = (this->RawData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UHapticFeedbackEffect_Base::~UHapticFeedbackEffect_Base((UHapticFeedbackEffect_Base *)this);
  return;
}

// GetDuration @ 147bdfd10

float __thiscall UHapticFeedbackEffect_SoundWave::GetDuration(UHapticFeedbackEffect_SoundWave *this)

{
  USoundWave *pUVar1;
  float fVar2;
  
  pUVar1 = (this->SoundWave).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundWave *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bdfd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x2d8))();
    return fVar2;
  }
  return 0.0;
}

// GetValues @ 147beccb0

void __thiscall
UHapticFeedbackEffect_SoundWave::GetValues
          (UHapticFeedbackEffect_SoundWave *this,float param_1,FHapticFeedbackValues *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = (this->RawData).ArrayNum;
  fVar4 = (float)(**(code **)(((this->SoundWave).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
  param_2->Frequency = 1.0;
  iVar3 = (int)(((float)iVar3 * param_1) / fVar4);
  if (iVar3 < (this->RawData).ArrayNum) {
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    fVar4 = (float)(byte)(this->RawData).AllocatorInstance.Data[iVar3] * __real_3b808081;
  }
  else {
    fVar4 = 0.0;
  }
  param_2->Amplitude = fVar4;
  param_2->HapticBuffer->RawData = (uchar *)(this->RawData).AllocatorInstance.Data;
  return;
}

// Initialize @ 147befde0

void __thiscall
UHapticFeedbackEffect_SoundWave::Initialize
          (UHapticFeedbackEffect_SoundWave *this,FHapticFeedbackBuffer *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  if (this->bPrepared == false) {
    PrepareSoundWaveBuffer(this);
  }
  iVar2 = (this->RawData).ArrayNum;
  param_1->CurrentPtr = 0;
  param_1->SamplesSent = 0;
  param_1->bFinishedPlaying = false;
  param_1->BufferLength = iVar2;
  fVar3 = USoundWave::GetSampleRateForCurrentPlatform((this->SoundWave).field0_0x0.DebugPtr);
  param_1->SamplingRate = (int)fVar3;
  bVar1 = this->bUseStereo;
  param_1->CurrentSampleIndex[0] = 0;
  param_1->CurrentSampleIndex[1] = 0;
  param_1->bUseStereo = bVar1;
  return;
}

// PrepareSoundWaveBuffer @ 147bf8000

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
UHapticFeedbackEffect_SoundWave::PrepareSoundWaveBuffer(UHapticFeedbackEffect_SoundWave *this)

{
  int iVar1;
  USoundWave *pUVar2;
  uchar *_Src;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong _Size;
  FName local_res10;
  FString local_58;
  FString local_48;
  FAudioDeviceHandle local_38;
  
  UEngine::GetMainAudioDevice(GEngine,&local_38);
  bVar5 = FAudioDeviceHandle::IsValid(&local_38);
  if ((bVar5) && (pUVar2 = (this->SoundWave).field0_0x0.DebugPtr, pUVar2 != (USoundWave *)0x0)) {
    if (pUVar2->LoadingBehavior == ForceInline) {
      bVar5 = FAudioDeviceHandle::IsValid(&local_38);
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                             ,0x60,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)((local_38.Device)->_padding_ + 0x60))
                (local_38.Device,(this->SoundWave).field0_0x0.DebugPtr,1,0,1);
      pUVar2 = (this->SoundWave).field0_0x0.DebugPtr;
      _Src = pUVar2->RawPCMData;
      iVar1 = pUVar2->RawPCMDataSize;
      _Size = (ulonglong)iVar1;
      if (((_Src == (uchar *)0x0) && (iVar1 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(PCMData != nullptr) || (RawPCMDataSize == 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\HapticFeedbackEffect.cpp"
                             ,0xc5,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (this->bUseStereo == false) {
        PrepareSoundWaveMonoBuffer(this,_Src,iVar1);
      }
      else {
        pUVar2 = (this->SoundWave).field0_0x0.DebugPtr;
        if (pUVar2->NumChannels < 2) {
          if (2 < (byte)LogHaptics._0_1_) {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar2,&local_48,(UObject *)0x0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHaptics);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          if (((_Size & 1) != 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("RawPCMDataSize % (sizeof(int16)) == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\HapticFeedbackEffect.cpp"
                                 ,0xf0,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar1 = (int)(_Size >> 1);
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar1 * 4,&(this->RawData).AllocatorInstance,&(this->RawData).ArrayNum,
                     &(this->RawData).ArrayMax);
          pFVar3 = (this->RawData).AllocatorInstance.Data;
          if (0 < iVar1) {
            lVar7 = 0;
            do {
              *(undefined2 *)(pFVar3 + lVar7 * 4) = *(undefined2 *)(_Src + lVar7 * 2);
              *(undefined2 *)(pFVar3 + lVar7 * 4 + 2) = *(undefined2 *)(_Src + lVar7 * 2);
              lVar7 = lVar7 + 1;
            } while (lVar7 < iVar1);
          }
        }
        else {
          if (((_Src == (uchar *)0x0) && (iVar1 != 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ptr != nullptr || Count == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x9c1,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,iVar1,&(this->RawData).AllocatorInstance,&(this->RawData).ArrayNum,
                             &(this->RawData).ArrayMax);
          if (iVar1 != 0) {
            memcpy((this->RawData).AllocatorInstance.Data + iVar6,_Src,_Size);
          }
        }
      }
      this->bPrepared = true;
    }
    else if (1 < (byte)LogHaptics._0_1_) {
      local_res10 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_res10,&local_58);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHaptics);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_38);
  return;
}

// PrepareSoundWaveMonoBuffer @ 147bf82f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UHapticFeedbackEffect_SoundWave::PrepareSoundWaveMonoBuffer
          (UHapticFeedbackEffect_SoundWave *this,uchar *param_1,int param_2)

{
  USoundWave *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  FString local_18;
  
  uVar7 = (ulonglong)param_2;
  this_00 = (this->SoundWave).field0_0x0.DebugPtr;
  iVar5 = this_00->NumChannels;
  if (iVar5 < 2) {
    if (((param_1 == (uchar *)0x0) && (param_2 != 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_2,&(this->RawData).AllocatorInstance,&(this->RawData).ArrayNum,
                       &(this->RawData).ArrayMax);
    if (param_2 != 0) {
      memcpy((this->RawData).AllocatorInstance.Data + iVar5,param_1,uVar7);
    }
  }
  else {
    if (2 < (byte)LogHaptics._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHaptics);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if ((uVar7 % (ulonglong)((longlong)iVar5 * 2) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPCMDataSize % (sizeof(int16) * NumChannels) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\HapticFeedbackEffect.cpp"
                           ,0xd8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = (int)((uVar7 >> 1) / (ulonglong)(longlong)iVar5);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3 * 2,&(this->RawData).AllocatorInstance,&(this->RawData).ArrayNum,
               &(this->RawData).ArrayMax);
    pFVar1 = (this->RawData).AllocatorInstance.Data;
    if (0 < iVar3) {
      uVar6 = 0;
      uVar7 = uVar6;
      do {
        iVar8 = (int)uVar7;
        uVar7 = (ulonglong)(uint)(iVar8 + iVar5);
        *(undefined2 *)(pFVar1 + uVar6 * 2) = *(undefined2 *)(param_1 + (longlong)iVar8 * 2);
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)iVar3);
    }
  }
  return;
}

// PrepareSoundWaveStereoBuffer @ 147bf84b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UHapticFeedbackEffect_SoundWave::PrepareSoundWaveStereoBuffer
          (UHapticFeedbackEffect_SoundWave *this,uchar *param_1,int param_2)

{
  USoundWave *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong _Size;
  FString local_18;
  
  _Size = (ulonglong)param_2;
  this_00 = (this->SoundWave).field0_0x0.DebugPtr;
  if (this_00->NumChannels < 2) {
    if (2 < (byte)LogHaptics._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHaptics);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (((_Size & 1) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPCMDataSize % (sizeof(int16)) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\HapticFeedbackEffect.cpp"
                           ,0xf0,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (int)(_Size >> 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4 * 4,&(this->RawData).AllocatorInstance,&(this->RawData).ArrayNum,
               &(this->RawData).ArrayMax);
    pFVar1 = (this->RawData).AllocatorInstance.Data;
    if (0 < iVar4) {
      lVar5 = 0;
      do {
        *(undefined2 *)(pFVar1 + lVar5 * 4) = *(undefined2 *)(param_1 + lVar5 * 2);
        *(undefined2 *)(pFVar1 + lVar5 * 4 + 2) = *(undefined2 *)(param_1 + lVar5 * 2);
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar4);
    }
  }
  else {
    if (((param_1 == (uchar *)0x0) && (param_2 != 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_2,&(this->RawData).AllocatorInstance,&(this->RawData).ArrayNum,
                       &(this->RawData).ArrayMax);
    if (param_2 != 0) {
      memcpy((this->RawData).AllocatorInstance.Data + iVar4,param_1,_Size);
    }
  }
  return;
}

