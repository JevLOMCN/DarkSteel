// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMMDeviceEnumeration
// Functions: 38

// `dynamic_initializer_for_'CVarDisableDeviceSwap'' @ 141169f80

void __cdecl _dynamic_initializer_for__CVarDisableDeviceSwap__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableDeviceSwap,L"au.DisableDeviceSwap",&DisableDeviceSwapCVar,
             L"Disable device swap handling code for Audio Mixer on Windows.\n0: Not Enabled, 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableDeviceSwap__);
  return;
}

// `dynamic_initializer_for_'CVarEnableAggregateAudioDevices'' @ 141169fd0

void __cdecl _dynamic_initializer_for__CVarEnableAggregateAudioDevices__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableAggregateAudioDevices,L"au.Wasapi.EnableAggregateAudioDevices",
             &EnableAggregateAudioDevicesCVar,
             L"Enables WASAPI aggregate audio devices.\n0: Not Enabled, 1: Enabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableAggregateAudioDevices__);
  return;
}

// `dynamic_initializer_for_'CVarEnableDetailedWindowsDeviceLogging'' @ 14116a020

void __cdecl _dynamic_initializer_for__CVarEnableDetailedWindowsDeviceLogging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableDetailedWindowsDeviceLogging,L"au.EnableDetailedWindowsDeviceLogging",
             &EnableDetailedWindowsDeviceLoggingCVar,
             L"Enables detailed windows device logging.\n0: Not Enabled, 1: Enabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableDetailedWindowsDeviceLogging__);
  return;
}

// `dynamic_initializer_for_'LogAudioEnumeration'' @ 14116a070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioEnumeration__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioEnumeration,L"LogAudioEnumeration",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioEnumeration__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWindowsMMDeviceEnumeration'' @ 14116a0b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantWindowsMMDeviceEnumeration__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WindowsMMDeviceEnumeration";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WindowsMMDeviceEnumeration",0x1a);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<Audio::FWindowsMMDeviceEnumerationModule>::
             InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 148d2cda0

void * __thiscall
Audio::FWindowsMMDeviceEnumerationModule::_scalar_deleting_destructor_
          (FWindowsMMDeviceEnumerationModule *this,uint param_1)

{
  *this = (FWindowsMMDeviceEnumerationModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ConstructItems<Audio::FAudioPlatformDeviceInfo,Audio::FAudioPlatformDeviceInfo,int> @ 148d2cde0

void __cdecl
ConstructItems<Audio::FAudioPlatformDeviceInfo,Audio::FAudioPlatformDeviceInfo,int>
          (void *param_1,FAudioPlatformDeviceInfo *param_2,int param_3)

{
  FString *pFVar1;
  byte *pbVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  int *this;
  FString *pFVar4;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 0x10);
    pFVar4 = &param_2->DeviceId;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pFVar4),
                       (FString *)(pFVar4 + -1));
      FString::FString((FString *)this,pFVar4);
      pFVar1 = (FString *)(this + 8);
      *(int *)&(((FString *)(this + 4))->Data).AllocatorInstance.Data = *(int *)(pFVar4 + 1);
      this[5] = *(int *)((longlong)(pFVar4 + 1) + 4);
      this[6] = *(int *)((longlong)(pFVar4 + 1) + 8);
      this[7] = *(Type *)((longlong)(pFVar4 + 1) + 0xc);
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = ((TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)(pFVar4 + 2))->
              ArrayNum;
      _Src = (((TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)(pFVar4 + 2))->
             AllocatorInstance).Data;
      this[10] = iVar3;
      if (iVar3 == 0) {
        this[0xb] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,this + 0xb);
        memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 << 2);
      }
      pbVar2 = (byte *)(pFVar4 + 3);
      pFVar4 = (FString *)((longlong)(pFVar4 + 4) + 8);
      *(byte *)&(((FString *)(this + 0xc))->Data).AllocatorInstance.Data =
           *(byte *)&(((FString *)(this + 0xc))->Data).AllocatorInstance.Data ^
           (*(byte *)&(((FString *)(this + 0xc))->Data).AllocatorInstance.Data ^ *pbVar2) & 1;
      this = this + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<Audio::FWindowsMMDeviceCache::FCacheEntry,int> @ 148d2cf00

void __cdecl
DestructItems<Audio::FWindowsMMDeviceCache::FCacheEntry,int>(FCacheEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  FPlatformRWLock *SRWLock;
  
  if (param_2 != 0) {
    SRWLock = &param_1->MutationLock;
    do {
      BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if (BVar3 == '\0') {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("!IsLocked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                           ,0x48,L"Destroying a lock that is still held!");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      pFVar1 = (((TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)(SRWLock + -2))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(SRWLock + -4))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(SRWLock + -10))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(SRWLock + -0xc))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SRWLock = SRWLock + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,`Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices'::__l5::<lambda_1>_> @ 148d2d880

void __cdecl
AlgoImpl::
HeapSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices_::__l5::<lambda_1>_>
          (FAudioPlatformDeviceInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4
          )

{
  FAudioPlatformDeviceInfo *pFVar1;
  FAudioPlatformDeviceInfo *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  Type TVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  Type TVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  FAudioPlatformDeviceInfo *pFVar27;
  <lambda_1> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,TReversePredicate<_Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices_::__l5::<lambda_1>_>_>
            (param_1,param_2,param_3,local_res20);
  iVar25 = param_2 + -1;
  lVar26 = (longlong)iVar25;
  if (0 < iVar25) {
    pFVar27 = param_1 + lVar26;
    do {
      iVar21 = (pFVar27->Name).Data.ArrayNum;
      iVar24 = (pFVar27->Name).Data.ArrayMax;
      uVar3 = *(undefined8 *)&param_1->field_0x40;
      pFVar6 = (param_1->Name).Data.AllocatorInstance.Data;
      iVar5 = (param_1->Name).Data.ArrayNum;
      iVar20 = (param_1->Name).Data.ArrayMax;
      pFVar7 = (param_1->DeviceId).Data.AllocatorInstance.Data;
      iVar10 = (param_1->DeviceId).Data.ArrayNum;
      iVar11 = (param_1->DeviceId).Data.ArrayMax;
      iVar12 = param_1->NumChannels;
      iVar13 = param_1->NumDirectOutChannels;
      iVar14 = param_1->SampleRate;
      TVar15 = param_1->Format;
      pFVar8 = (param_1->OutputChannelArray).AllocatorInstance.Data;
      iVar16 = (param_1->OutputChannelArray).ArrayNum;
      iVar17 = (param_1->OutputChannelArray).ArrayMax;
      (param_1->Name).Data.AllocatorInstance.Data = (pFVar27->Name).Data.AllocatorInstance.Data;
      (param_1->Name).Data.ArrayNum = iVar21;
      (param_1->Name).Data.ArrayMax = iVar24;
      iVar21 = (pFVar27->DeviceId).Data.ArrayNum;
      iVar24 = (pFVar27->DeviceId).Data.ArrayMax;
      (param_1->DeviceId).Data.AllocatorInstance.Data =
           (pFVar27->DeviceId).Data.AllocatorInstance.Data;
      (param_1->DeviceId).Data.ArrayNum = iVar21;
      (param_1->DeviceId).Data.ArrayMax = iVar24;
      iVar21 = pFVar27->NumDirectOutChannels;
      iVar24 = pFVar27->SampleRate;
      TVar9 = pFVar27->Format;
      param_1->NumChannels = pFVar27->NumChannels;
      param_1->NumDirectOutChannels = iVar21;
      param_1->SampleRate = iVar24;
      param_1->Format = TVar9;
      iVar21 = (pFVar27->OutputChannelArray).ArrayNum;
      iVar24 = (pFVar27->OutputChannelArray).ArrayMax;
      (param_1->OutputChannelArray).AllocatorInstance.Data =
           (pFVar27->OutputChannelArray).AllocatorInstance.Data;
      (param_1->OutputChannelArray).ArrayNum = iVar21;
      (param_1->OutputChannelArray).ArrayMax = iVar24;
      *(undefined8 *)&param_1->field_0x40 = *(undefined8 *)&pFVar27->field_0x40;
      (pFVar27->Name).Data.AllocatorInstance.Data = pFVar6;
      (pFVar27->Name).Data.ArrayNum = iVar5;
      (pFVar27->Name).Data.ArrayMax = iVar20;
      (pFVar27->DeviceId).Data.AllocatorInstance.Data = pFVar7;
      (pFVar27->DeviceId).Data.ArrayNum = iVar10;
      (pFVar27->DeviceId).Data.ArrayMax = iVar11;
      pFVar27->NumChannels = iVar12;
      pFVar27->NumDirectOutChannels = iVar13;
      pFVar27->SampleRate = iVar14;
      pFVar27->Format = TVar15;
      (pFVar27->OutputChannelArray).AllocatorInstance.Data = pFVar8;
      (pFVar27->OutputChannelArray).ArrayNum = iVar16;
      (pFVar27->OutputChannelArray).ArrayMax = iVar17;
      *(undefined8 *)&pFVar27->field_0x40 = uVar3;
      iVar21 = 0;
      if (1 < iVar25) {
        do {
          iVar5 = iVar21 * 2;
          iVar24 = iVar5 + 1;
          if (iVar5 + 2 < iVar25) {
            if (param_1[(longlong)iVar5 + 1].Name.Data.ArrayNum == 0) {
              pwVar23 = L"";
            }
            else {
              pwVar23 = (wchar_t *)param_1[(longlong)iVar5 + 1].Name.Data.AllocatorInstance.Data;
            }
            if (param_1[(longlong)iVar5 + 2].Name.Data.ArrayNum == 0) {
              pwVar22 = L"";
            }
            else {
              pwVar22 = (wchar_t *)param_1[(longlong)iVar5 + 2].Name.Data.AllocatorInstance.Data;
            }
            iVar20 = wcscmp(pwVar22,pwVar23);
            if (iVar20 < 0) {
              iVar24 = iVar5;
            }
            iVar24 = iVar24 + 1;
          }
          pFVar1 = param_1 + iVar21;
          pFVar2 = param_1 + iVar24;
          if (param_1[iVar24].Name.Data.ArrayNum == 0) {
            pwVar23 = L"";
          }
          else {
            pwVar23 = (wchar_t *)(pFVar2->Name).Data.AllocatorInstance.Data;
          }
          if ((pFVar1->Name).Data.ArrayNum == 0) {
            pwVar22 = L"";
          }
          else {
            pwVar22 = (wchar_t *)(pFVar1->Name).Data.AllocatorInstance.Data;
          }
          iVar21 = wcscmp(pwVar22,pwVar23);
          if (-1 < iVar21) break;
          iVar21 = (pFVar2->Name).Data.ArrayNum;
          iVar5 = (pFVar2->Name).Data.ArrayMax;
          pFVar6 = (pFVar1->Name).Data.AllocatorInstance.Data;
          iVar20 = (pFVar1->Name).Data.ArrayNum;
          iVar10 = (pFVar1->Name).Data.ArrayMax;
          pFVar7 = (pFVar1->DeviceId).Data.AllocatorInstance.Data;
          iVar11 = (pFVar1->DeviceId).Data.ArrayNum;
          iVar12 = (pFVar1->DeviceId).Data.ArrayMax;
          iVar13 = pFVar1->NumChannels;
          iVar14 = pFVar1->NumDirectOutChannels;
          iVar16 = pFVar1->SampleRate;
          TVar15 = pFVar1->Format;
          pFVar8 = (pFVar1->OutputChannelArray).AllocatorInstance.Data;
          iVar17 = (pFVar1->OutputChannelArray).ArrayNum;
          iVar18 = (pFVar1->OutputChannelArray).ArrayMax;
          uVar3 = *(undefined8 *)&pFVar1->field_0x40;
          (pFVar1->Name).Data.AllocatorInstance.Data = (pFVar2->Name).Data.AllocatorInstance.Data;
          (pFVar1->Name).Data.ArrayNum = iVar21;
          (pFVar1->Name).Data.ArrayMax = iVar5;
          iVar21 = (pFVar2->DeviceId).Data.ArrayNum;
          iVar5 = (pFVar2->DeviceId).Data.ArrayMax;
          (pFVar1->DeviceId).Data.AllocatorInstance.Data =
               (pFVar2->DeviceId).Data.AllocatorInstance.Data;
          (pFVar1->DeviceId).Data.ArrayNum = iVar21;
          (pFVar1->DeviceId).Data.ArrayMax = iVar5;
          iVar21 = pFVar2->NumDirectOutChannels;
          iVar5 = pFVar2->SampleRate;
          TVar9 = pFVar2->Format;
          pFVar1->NumChannels = pFVar2->NumChannels;
          pFVar1->NumDirectOutChannels = iVar21;
          pFVar1->SampleRate = iVar5;
          pFVar1->Format = TVar9;
          iVar21 = (pFVar2->OutputChannelArray).ArrayNum;
          iVar5 = (pFVar2->OutputChannelArray).ArrayMax;
          (pFVar1->OutputChannelArray).AllocatorInstance.Data =
               (pFVar2->OutputChannelArray).AllocatorInstance.Data;
          (pFVar1->OutputChannelArray).ArrayNum = iVar21;
          (pFVar1->OutputChannelArray).ArrayMax = iVar5;
          *(undefined8 *)&pFVar1->field_0x40 = *(undefined8 *)&pFVar2->field_0x40;
          (pFVar2->Name).Data.AllocatorInstance.Data = pFVar6;
          (pFVar2->Name).Data.ArrayNum = iVar20;
          (pFVar2->Name).Data.ArrayMax = iVar10;
          (pFVar2->DeviceId).Data.AllocatorInstance.Data = pFVar7;
          (pFVar2->DeviceId).Data.ArrayNum = iVar11;
          (pFVar2->DeviceId).Data.ArrayMax = iVar12;
          pFVar2->NumChannels = iVar13;
          pFVar2->NumDirectOutChannels = iVar14;
          pFVar2->SampleRate = iVar16;
          pFVar2->Format = TVar15;
          (pFVar2->OutputChannelArray).AllocatorInstance.Data = pFVar8;
          (pFVar2->OutputChannelArray).ArrayNum = iVar17;
          (pFVar2->OutputChannelArray).ArrayMax = iVar18;
          *(undefined8 *)&pFVar2->field_0x40 = uVar3;
          iVar21 = iVar24;
        } while (iVar24 * 2 + 1 < iVar25);
      }
      iVar25 = iVar25 + -1;
      lVar26 = lVar26 + -1;
      pFVar27 = pFVar27 + -1;
    } while (0 < lVar26);
  }
  return;
}

// HeapSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,`Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices'::__l2::<lambda_2>_> @ 148d2dac0

void __cdecl
AlgoImpl::
HeapSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices_::__l2::<lambda_2>_>
          (FAudioPlatformDeviceInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4
          )

{
  FAudioPlatformDeviceInfo *pFVar1;
  FAudioPlatformDeviceInfo *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  Type TVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  Type TVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  FAudioPlatformDeviceInfo *pFVar26;
  int iVar27;
  <lambda_2> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar21 = (param_2 + -2) / 2;
  iVar22 = iVar21 * 2 + 1;
  iVar27 = iVar22;
  iVar24 = iVar21;
  do {
    while (param_2 <= iVar22) {
LAB_148d2dc35:
      if (iVar24 == 0) {
        iVar22 = param_2 + -1;
        lVar25 = (longlong)iVar22;
        if (0 < iVar22) {
          pFVar26 = param_1 + lVar25;
          do {
            iVar27 = (pFVar26->Name).Data.ArrayNum;
            iVar21 = (pFVar26->Name).Data.ArrayMax;
            uVar3 = *(undefined8 *)&param_1->field_0x40;
            pFVar5 = (param_1->Name).Data.AllocatorInstance.Data;
            iVar24 = (param_1->Name).Data.ArrayNum;
            iVar23 = (param_1->Name).Data.ArrayMax;
            pFVar6 = (param_1->DeviceId).Data.AllocatorInstance.Data;
            iVar8 = (param_1->DeviceId).Data.ArrayNum;
            iVar10 = (param_1->DeviceId).Data.ArrayMax;
            iVar11 = param_1->NumChannels;
            iVar12 = param_1->NumDirectOutChannels;
            iVar13 = param_1->SampleRate;
            TVar17 = param_1->Format;
            pFVar7 = (param_1->OutputChannelArray).AllocatorInstance.Data;
            iVar14 = (param_1->OutputChannelArray).ArrayNum;
            iVar15 = (param_1->OutputChannelArray).ArrayMax;
            (param_1->Name).Data.AllocatorInstance.Data =
                 (pFVar26->Name).Data.AllocatorInstance.Data;
            (param_1->Name).Data.ArrayNum = iVar27;
            (param_1->Name).Data.ArrayMax = iVar21;
            iVar27 = (pFVar26->DeviceId).Data.ArrayNum;
            iVar21 = (pFVar26->DeviceId).Data.ArrayMax;
            (param_1->DeviceId).Data.AllocatorInstance.Data =
                 (pFVar26->DeviceId).Data.AllocatorInstance.Data;
            (param_1->DeviceId).Data.ArrayNum = iVar27;
            (param_1->DeviceId).Data.ArrayMax = iVar21;
            iVar27 = pFVar26->NumDirectOutChannels;
            iVar21 = pFVar26->SampleRate;
            TVar9 = pFVar26->Format;
            param_1->NumChannels = pFVar26->NumChannels;
            param_1->NumDirectOutChannels = iVar27;
            param_1->SampleRate = iVar21;
            param_1->Format = TVar9;
            iVar27 = (pFVar26->OutputChannelArray).ArrayNum;
            iVar21 = (pFVar26->OutputChannelArray).ArrayMax;
            (param_1->OutputChannelArray).AllocatorInstance.Data =
                 (pFVar26->OutputChannelArray).AllocatorInstance.Data;
            (param_1->OutputChannelArray).ArrayNum = iVar27;
            (param_1->OutputChannelArray).ArrayMax = iVar21;
            *(undefined8 *)&param_1->field_0x40 = *(undefined8 *)&pFVar26->field_0x40;
            (pFVar26->Name).Data.AllocatorInstance.Data = pFVar5;
            (pFVar26->Name).Data.ArrayNum = iVar24;
            (pFVar26->Name).Data.ArrayMax = iVar23;
            (pFVar26->DeviceId).Data.AllocatorInstance.Data = pFVar6;
            (pFVar26->DeviceId).Data.ArrayNum = iVar8;
            (pFVar26->DeviceId).Data.ArrayMax = iVar10;
            pFVar26->NumChannels = iVar11;
            pFVar26->NumDirectOutChannels = iVar12;
            pFVar26->SampleRate = iVar13;
            pFVar26->Format = TVar17;
            (pFVar26->OutputChannelArray).AllocatorInstance.Data = pFVar7;
            (pFVar26->OutputChannelArray).ArrayNum = iVar14;
            (pFVar26->OutputChannelArray).ArrayMax = iVar15;
            *(undefined8 *)&pFVar26->field_0x40 = uVar3;
            iVar27 = 0;
            if (1 < iVar22) {
              do {
                iVar24 = iVar27 * 2;
                iVar21 = iVar24 + 1;
                if (iVar24 + 2 < iVar22) {
                  bVar20 = `Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices'::__l2::
                           <lambda_2>::operator()
                                     (local_res20,param_1 + (iVar24 + 2),param_1 + iVar21);
                  if (bVar20) {
                    iVar21 = iVar24;
                  }
                  iVar21 = iVar21 + 1;
                }
                pFVar1 = param_1 + iVar21;
                pFVar2 = param_1 + iVar27;
                bVar20 = `Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices'::__l2::<lambda_2>
                         ::operator()(local_res20,pFVar2,pFVar1);
                if (!bVar20) break;
                iVar27 = (pFVar1->Name).Data.ArrayNum;
                iVar24 = (pFVar1->Name).Data.ArrayMax;
                uVar3 = *(undefined8 *)&pFVar2->field_0x40;
                pFVar5 = (pFVar2->Name).Data.AllocatorInstance.Data;
                iVar23 = (pFVar2->Name).Data.ArrayNum;
                iVar8 = (pFVar2->Name).Data.ArrayMax;
                pFVar6 = (pFVar2->DeviceId).Data.AllocatorInstance.Data;
                iVar10 = (pFVar2->DeviceId).Data.ArrayNum;
                iVar11 = (pFVar2->DeviceId).Data.ArrayMax;
                iVar12 = pFVar2->NumChannels;
                iVar13 = pFVar2->NumDirectOutChannels;
                iVar14 = pFVar2->SampleRate;
                TVar17 = pFVar2->Format;
                pFVar7 = (pFVar2->OutputChannelArray).AllocatorInstance.Data;
                iVar15 = (pFVar2->OutputChannelArray).ArrayNum;
                iVar16 = (pFVar2->OutputChannelArray).ArrayMax;
                (pFVar2->Name).Data.AllocatorInstance.Data =
                     (pFVar1->Name).Data.AllocatorInstance.Data;
                (pFVar2->Name).Data.ArrayNum = iVar27;
                (pFVar2->Name).Data.ArrayMax = iVar24;
                iVar27 = (pFVar1->DeviceId).Data.ArrayNum;
                iVar24 = (pFVar1->DeviceId).Data.ArrayMax;
                (pFVar2->DeviceId).Data.AllocatorInstance.Data =
                     (pFVar1->DeviceId).Data.AllocatorInstance.Data;
                (pFVar2->DeviceId).Data.ArrayNum = iVar27;
                (pFVar2->DeviceId).Data.ArrayMax = iVar24;
                iVar27 = pFVar1->NumDirectOutChannels;
                iVar24 = pFVar1->SampleRate;
                TVar9 = pFVar1->Format;
                pFVar2->NumChannels = pFVar1->NumChannels;
                pFVar2->NumDirectOutChannels = iVar27;
                pFVar2->SampleRate = iVar24;
                pFVar2->Format = TVar9;
                iVar27 = (pFVar1->OutputChannelArray).ArrayNum;
                iVar24 = (pFVar1->OutputChannelArray).ArrayMax;
                (pFVar2->OutputChannelArray).AllocatorInstance.Data =
                     (pFVar1->OutputChannelArray).AllocatorInstance.Data;
                (pFVar2->OutputChannelArray).ArrayNum = iVar27;
                (pFVar2->OutputChannelArray).ArrayMax = iVar24;
                *(undefined8 *)&pFVar2->field_0x40 = *(undefined8 *)&pFVar1->field_0x40;
                (pFVar1->Name).Data.AllocatorInstance.Data = pFVar5;
                (pFVar1->Name).Data.ArrayNum = iVar23;
                (pFVar1->Name).Data.ArrayMax = iVar8;
                (pFVar1->DeviceId).Data.AllocatorInstance.Data = pFVar6;
                (pFVar1->DeviceId).Data.ArrayNum = iVar10;
                (pFVar1->DeviceId).Data.ArrayMax = iVar11;
                pFVar1->NumChannels = iVar12;
                pFVar1->NumDirectOutChannels = iVar13;
                pFVar1->SampleRate = iVar14;
                pFVar1->Format = TVar17;
                (pFVar1->OutputChannelArray).AllocatorInstance.Data = pFVar7;
                (pFVar1->OutputChannelArray).ArrayNum = iVar15;
                (pFVar1->OutputChannelArray).ArrayMax = iVar16;
                *(undefined8 *)&pFVar1->field_0x40 = uVar3;
                iVar27 = iVar21;
              } while (iVar21 * 2 + 1 < iVar22);
            }
            iVar22 = iVar22 + -1;
            lVar25 = lVar25 + -1;
            pFVar26 = pFVar26 + -1;
          } while (0 < lVar25);
        }
        return;
      }
      iVar21 = iVar24 + -1;
      iVar22 = iVar27 + -2;
      iVar27 = iVar22;
      iVar24 = iVar21;
    }
    iVar22 = iVar21 * 2;
    iVar23 = iVar22 + 1;
    if (iVar22 + 2 < param_2) {
      bVar20 = `Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices'::__l2::<lambda_2>::
               operator()(local_res20,param_1 + (iVar22 + 2),param_1 + iVar23);
      if (bVar20) {
        iVar23 = iVar22;
      }
      iVar23 = iVar23 + 1;
    }
    pFVar26 = param_1 + iVar23;
    pFVar1 = param_1 + iVar21;
    bVar20 = `Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices'::__l2::<lambda_2>::operator()
                       (local_res20,pFVar1,pFVar26);
    if (!bVar20) goto LAB_148d2dc35;
    iVar21 = (pFVar26->Name).Data.ArrayNum;
    iVar8 = (pFVar26->Name).Data.ArrayMax;
    iVar22 = iVar23 * 2 + 1;
    uVar3 = *(undefined8 *)&pFVar1->field_0x40;
    pFVar5 = (pFVar1->Name).Data.AllocatorInstance.Data;
    iVar10 = (pFVar1->Name).Data.ArrayNum;
    iVar11 = (pFVar1->Name).Data.ArrayMax;
    pFVar6 = (pFVar1->DeviceId).Data.AllocatorInstance.Data;
    iVar12 = (pFVar1->DeviceId).Data.ArrayNum;
    iVar13 = (pFVar1->DeviceId).Data.ArrayMax;
    iVar14 = pFVar1->NumChannels;
    iVar15 = pFVar1->NumDirectOutChannels;
    iVar16 = pFVar1->SampleRate;
    TVar17 = pFVar1->Format;
    pFVar7 = (pFVar1->OutputChannelArray).AllocatorInstance.Data;
    iVar18 = (pFVar1->OutputChannelArray).ArrayNum;
    iVar19 = (pFVar1->OutputChannelArray).ArrayMax;
    (pFVar1->Name).Data.AllocatorInstance.Data = (pFVar26->Name).Data.AllocatorInstance.Data;
    (pFVar1->Name).Data.ArrayNum = iVar21;
    (pFVar1->Name).Data.ArrayMax = iVar8;
    iVar21 = (pFVar26->DeviceId).Data.ArrayNum;
    iVar8 = (pFVar26->DeviceId).Data.ArrayMax;
    (pFVar1->DeviceId).Data.AllocatorInstance.Data = (pFVar26->DeviceId).Data.AllocatorInstance.Data
    ;
    (pFVar1->DeviceId).Data.ArrayNum = iVar21;
    (pFVar1->DeviceId).Data.ArrayMax = iVar8;
    iVar21 = pFVar26->NumDirectOutChannels;
    iVar8 = pFVar26->SampleRate;
    TVar9 = pFVar26->Format;
    pFVar1->NumChannels = pFVar26->NumChannels;
    pFVar1->NumDirectOutChannels = iVar21;
    pFVar1->SampleRate = iVar8;
    pFVar1->Format = TVar9;
    iVar21 = (pFVar26->OutputChannelArray).ArrayNum;
    iVar8 = (pFVar26->OutputChannelArray).ArrayMax;
    (pFVar1->OutputChannelArray).AllocatorInstance.Data =
         (pFVar26->OutputChannelArray).AllocatorInstance.Data;
    (pFVar1->OutputChannelArray).ArrayNum = iVar21;
    (pFVar1->OutputChannelArray).ArrayMax = iVar8;
    *(undefined8 *)&pFVar1->field_0x40 = *(undefined8 *)&pFVar26->field_0x40;
    (pFVar26->Name).Data.AllocatorInstance.Data = pFVar5;
    (pFVar26->Name).Data.ArrayNum = iVar10;
    (pFVar26->Name).Data.ArrayMax = iVar11;
    (pFVar26->DeviceId).Data.AllocatorInstance.Data = pFVar6;
    (pFVar26->DeviceId).Data.ArrayNum = iVar12;
    (pFVar26->DeviceId).Data.ArrayMax = iVar13;
    pFVar26->NumChannels = iVar14;
    pFVar26->NumDirectOutChannels = iVar15;
    pFVar26->SampleRate = iVar16;
    pFVar26->Format = TVar17;
    (pFVar26->OutputChannelArray).AllocatorInstance.Data = pFVar7;
    (pFVar26->OutputChannelArray).ArrayNum = iVar18;
    (pFVar26->OutputChannelArray).ArrayMax = iVar19;
    *(undefined8 *)&pFVar26->field_0x40 = uVar3;
    iVar21 = iVar23;
  } while( true );
}

// HeapSortInternal<Audio::FWindowsMMDeviceCache::FCacheEntry,int,FIdentityFunctor,`Audio::FWindowsMMDeviceCache::GetLogicalAggregateDevices'::__l2::<lambda_1>_> @ 148d2dde0

void __cdecl
AlgoImpl::
HeapSortInternal<Audio::FWindowsMMDeviceCache::FCacheEntry,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetLogicalAggregateDevices_::__l2::<lambda_1>_>
          (FCacheEntry *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  void *pvVar9;
  void *pvVar10;
  EAudioDeviceState EVar11;
  EDeviceEndpointType EVar12;
  uint uVar13;
  FNameEntryId FVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  EAudioDeviceState EVar19;
  int iVar20;
  int iVar21;
  EDeviceEndpointType EVar22;
  uint uVar23;
  FNameEntryId FVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  wchar_t *pwVar33;
  wchar_t *pwVar34;
  FCacheEntry *pFVar35;
  FCacheEntry *pFVar36;
  int iVar37;
  int iVar38;
  longlong lVar39;
  FCacheEntry *pFVar40;
  int iVar41;
  
  if (param_2 < 0) {
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar28) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar28) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar29 = (param_2 + -2) / 2;
  iVar31 = iVar29 * 2 + 1;
  iVar38 = iVar31;
  iVar32 = iVar29;
  do {
    while (param_2 <= iVar31) {
LAB_148d2dfcc:
      if (iVar32 == 0) {
        iVar31 = param_2 + -1;
        lVar39 = (longlong)iVar31;
        if (0 < iVar31) {
          pFVar40 = param_1 + lVar39;
          do {
            pFVar2 = (pFVar40->FriendlyName).Data.AllocatorInstance.Data;
            iVar41 = 0;
            FVar3 = param_1->DeviceId;
            pFVar4 = (param_1->FriendlyName).Data.AllocatorInstance.Data;
            iVar32 = (param_1->FriendlyName).Data.ArrayNum;
            iVar37 = (param_1->FriendlyName).Data.ArrayMax;
            pFVar5 = (param_1->DeviceFriendlyName).Data.AllocatorInstance.Data;
            iVar30 = (param_1->DeviceFriendlyName).Data.ArrayNum;
            iVar15 = (param_1->DeviceFriendlyName).Data.ArrayMax;
            EVar19 = param_1->State;
            iVar16 = param_1->NumChannels;
            iVar17 = param_1->SampleRate;
            EVar22 = param_1->Type;
            uVar23 = param_1->ChannelBitmask;
            FVar24.Value = (param_1->HardwareId).ComparisonIndex.Value;
            uVar6 = *(undefined8 *)&(param_1->HardwareId).Number;
            pFVar7 = (param_1->FilterId).Data.AllocatorInstance.Data;
            iVar18 = (param_1->FilterId).Data.ArrayNum;
            iVar20 = (param_1->FilterId).Data.ArrayMax;
            pFVar8 = (param_1->OutputChannels).AllocatorInstance.Data;
            iVar21 = (param_1->OutputChannels).ArrayNum;
            iVar25 = (param_1->OutputChannels).ArrayMax;
            pvVar9 = (param_1->MutationLock).Mutex.Mutex.Ptr;
            param_1->DeviceId = pFVar40->DeviceId;
            (param_1->FriendlyName).Data.AllocatorInstance.Data = pFVar2;
            iVar38 = (pFVar40->FriendlyName).Data.ArrayMax;
            pFVar2 = (pFVar40->DeviceFriendlyName).Data.AllocatorInstance.Data;
            (param_1->FriendlyName).Data.ArrayNum = (pFVar40->FriendlyName).Data.ArrayNum;
            (param_1->FriendlyName).Data.ArrayMax = iVar38;
            (param_1->DeviceFriendlyName).Data.AllocatorInstance.Data = pFVar2;
            iVar38 = (pFVar40->DeviceFriendlyName).Data.ArrayMax;
            EVar11 = pFVar40->State;
            iVar29 = pFVar40->NumChannels;
            (param_1->DeviceFriendlyName).Data.ArrayNum =
                 (pFVar40->DeviceFriendlyName).Data.ArrayNum;
            (param_1->DeviceFriendlyName).Data.ArrayMax = iVar38;
            param_1->State = EVar11;
            param_1->NumChannels = iVar29;
            EVar12 = pFVar40->Type;
            uVar13 = pFVar40->ChannelBitmask;
            FVar14.Value = (pFVar40->HardwareId).ComparisonIndex.Value;
            param_1->SampleRate = pFVar40->SampleRate;
            param_1->Type = EVar12;
            param_1->ChannelBitmask = uVar13;
            (param_1->HardwareId).ComparisonIndex = (FNameEntryId)FVar14.Value;
            pFVar2 = (pFVar40->FilterId).Data.AllocatorInstance.Data;
            *(undefined8 *)&(param_1->HardwareId).Number =
                 *(undefined8 *)&(pFVar40->HardwareId).Number;
            (param_1->FilterId).Data.AllocatorInstance.Data = pFVar2;
            iVar38 = (pFVar40->FilterId).Data.ArrayMax;
            pFVar2 = (pFVar40->OutputChannels).AllocatorInstance.Data;
            (param_1->FilterId).Data.ArrayNum = (pFVar40->FilterId).Data.ArrayNum;
            (param_1->FilterId).Data.ArrayMax = iVar38;
            (param_1->OutputChannels).AllocatorInstance.Data = pFVar2;
            iVar38 = (pFVar40->OutputChannels).ArrayMax;
            pvVar10 = (pFVar40->MutationLock).Mutex.Mutex.Ptr;
            (param_1->OutputChannels).ArrayNum = (pFVar40->OutputChannels).ArrayNum;
            (param_1->OutputChannels).ArrayMax = iVar38;
            (param_1->MutationLock).Mutex.Mutex.Ptr = pvVar10;
            pFVar40->DeviceId = FVar3;
            (pFVar40->FriendlyName).Data.AllocatorInstance.Data = pFVar4;
            (pFVar40->FriendlyName).Data.ArrayNum = iVar32;
            (pFVar40->FriendlyName).Data.ArrayMax = iVar37;
            (pFVar40->DeviceFriendlyName).Data.AllocatorInstance.Data = pFVar5;
            (pFVar40->DeviceFriendlyName).Data.ArrayNum = iVar30;
            (pFVar40->DeviceFriendlyName).Data.ArrayMax = iVar15;
            pFVar40->State = EVar19;
            pFVar40->NumChannels = iVar16;
            pFVar40->SampleRate = iVar17;
            pFVar40->Type = EVar22;
            pFVar40->ChannelBitmask = uVar23;
            (pFVar40->HardwareId).ComparisonIndex = (FNameEntryId)FVar24.Value;
            *(undefined8 *)&(pFVar40->HardwareId).Number = uVar6;
            (pFVar40->FilterId).Data.AllocatorInstance.Data = pFVar7;
            (pFVar40->FilterId).Data.ArrayNum = iVar18;
            (pFVar40->FilterId).Data.ArrayMax = iVar20;
            (pFVar40->OutputChannels).AllocatorInstance.Data = pFVar8;
            (pFVar40->OutputChannels).ArrayNum = iVar21;
            (pFVar40->OutputChannels).ArrayMax = iVar25;
            (pFVar40->MutationLock).Mutex.Mutex.Ptr = pvVar9;
            if (1 < iVar31) {
              do {
                iVar29 = iVar41 * 2;
                iVar38 = iVar29 + 1;
                if (iVar29 + 2 < iVar31) {
                  if (param_1[(longlong)iVar29 + 1].FilterId.Data.ArrayNum == 0) {
                    pwVar34 = L"";
                  }
                  else {
                    pwVar34 = (wchar_t *)
                              param_1[(longlong)iVar29 + 1].FilterId.Data.AllocatorInstance.Data;
                  }
                  if (param_1[(longlong)iVar29 + 2].FilterId.Data.ArrayNum == 0) {
                    pwVar33 = L"";
                  }
                  else {
                    pwVar33 = (wchar_t *)
                              param_1[(longlong)iVar29 + 2].FilterId.Data.AllocatorInstance.Data;
                  }
                  iVar32 = wcscmp(pwVar33,pwVar34);
                  if (iVar32 < 0) {
                    iVar38 = iVar29;
                  }
                  iVar38 = iVar38 + 1;
                }
                pFVar36 = param_1 + iVar41;
                pFVar35 = param_1 + iVar38;
                if ((pFVar35->FilterId).Data.ArrayNum == 0) {
                  pwVar34 = L"";
                }
                else {
                  pwVar34 = (wchar_t *)(pFVar35->FilterId).Data.AllocatorInstance.Data;
                }
                if ((pFVar36->FilterId).Data.ArrayNum == 0) {
                  pwVar33 = L"";
                }
                else {
                  pwVar33 = (wchar_t *)(pFVar36->FilterId).Data.AllocatorInstance.Data;
                }
                iVar29 = wcscmp(pwVar33,pwVar34);
                if (-1 < iVar29) break;
                pFVar2 = (pFVar35->FriendlyName).Data.AllocatorInstance.Data;
                FVar3 = pFVar36->DeviceId;
                pFVar4 = (pFVar36->FriendlyName).Data.AllocatorInstance.Data;
                iVar37 = (pFVar36->FriendlyName).Data.ArrayNum;
                iVar30 = (pFVar36->FriendlyName).Data.ArrayMax;
                pFVar5 = (pFVar36->DeviceFriendlyName).Data.AllocatorInstance.Data;
                iVar15 = (pFVar36->DeviceFriendlyName).Data.ArrayNum;
                iVar16 = (pFVar36->DeviceFriendlyName).Data.ArrayMax;
                EVar19 = pFVar36->State;
                iVar17 = pFVar36->NumChannels;
                iVar18 = pFVar36->SampleRate;
                EVar22 = pFVar36->Type;
                uVar23 = pFVar36->ChannelBitmask;
                FVar24.Value = (pFVar36->HardwareId).ComparisonIndex.Value;
                uVar6 = *(undefined8 *)&(pFVar36->HardwareId).Number;
                pFVar7 = (pFVar36->FilterId).Data.AllocatorInstance.Data;
                iVar20 = (pFVar36->FilterId).Data.ArrayNum;
                iVar21 = (pFVar36->FilterId).Data.ArrayMax;
                pFVar8 = (pFVar36->OutputChannels).AllocatorInstance.Data;
                iVar25 = (pFVar36->OutputChannels).ArrayNum;
                iVar41 = (pFVar36->OutputChannels).ArrayMax;
                pvVar9 = (pFVar36->MutationLock).Mutex.Mutex.Ptr;
                pFVar36->DeviceId = pFVar35->DeviceId;
                (pFVar36->FriendlyName).Data.AllocatorInstance.Data = pFVar2;
                iVar29 = (pFVar35->FriendlyName).Data.ArrayMax;
                pFVar2 = (pFVar35->DeviceFriendlyName).Data.AllocatorInstance.Data;
                (pFVar36->FriendlyName).Data.ArrayNum = (pFVar35->FriendlyName).Data.ArrayNum;
                (pFVar36->FriendlyName).Data.ArrayMax = iVar29;
                (pFVar36->DeviceFriendlyName).Data.AllocatorInstance.Data = pFVar2;
                iVar29 = (pFVar35->DeviceFriendlyName).Data.ArrayMax;
                EVar11 = pFVar35->State;
                iVar32 = pFVar35->NumChannels;
                (pFVar36->DeviceFriendlyName).Data.ArrayNum =
                     (pFVar35->DeviceFriendlyName).Data.ArrayNum;
                (pFVar36->DeviceFriendlyName).Data.ArrayMax = iVar29;
                pFVar36->State = EVar11;
                pFVar36->NumChannels = iVar32;
                EVar12 = pFVar35->Type;
                uVar13 = pFVar35->ChannelBitmask;
                FVar14.Value = (pFVar35->HardwareId).ComparisonIndex.Value;
                pFVar36->SampleRate = pFVar35->SampleRate;
                pFVar36->Type = EVar12;
                pFVar36->ChannelBitmask = uVar13;
                (pFVar36->HardwareId).ComparisonIndex = (FNameEntryId)FVar14.Value;
                pFVar2 = (pFVar35->FilterId).Data.AllocatorInstance.Data;
                *(undefined8 *)&(pFVar36->HardwareId).Number =
                     *(undefined8 *)&(pFVar35->HardwareId).Number;
                (pFVar36->FilterId).Data.AllocatorInstance.Data = pFVar2;
                iVar29 = (pFVar35->FilterId).Data.ArrayMax;
                pFVar2 = (pFVar35->OutputChannels).AllocatorInstance.Data;
                (pFVar36->FilterId).Data.ArrayNum = (pFVar35->FilterId).Data.ArrayNum;
                (pFVar36->FilterId).Data.ArrayMax = iVar29;
                (pFVar36->OutputChannels).AllocatorInstance.Data = pFVar2;
                iVar29 = (pFVar35->OutputChannels).ArrayMax;
                pvVar10 = (pFVar35->MutationLock).Mutex.Mutex.Ptr;
                (pFVar36->OutputChannels).ArrayNum = (pFVar35->OutputChannels).ArrayNum;
                (pFVar36->OutputChannels).ArrayMax = iVar29;
                (pFVar36->MutationLock).Mutex.Mutex.Ptr = pvVar10;
                pFVar35->DeviceId = FVar3;
                (pFVar35->FriendlyName).Data.AllocatorInstance.Data = pFVar4;
                (pFVar35->FriendlyName).Data.ArrayNum = iVar37;
                (pFVar35->FriendlyName).Data.ArrayMax = iVar30;
                (pFVar35->DeviceFriendlyName).Data.AllocatorInstance.Data = pFVar5;
                (pFVar35->DeviceFriendlyName).Data.ArrayNum = iVar15;
                (pFVar35->DeviceFriendlyName).Data.ArrayMax = iVar16;
                pFVar35->State = EVar19;
                pFVar35->NumChannels = iVar17;
                pFVar35->SampleRate = iVar18;
                pFVar35->Type = EVar22;
                pFVar35->ChannelBitmask = uVar23;
                (pFVar35->HardwareId).ComparisonIndex = (FNameEntryId)FVar24.Value;
                *(undefined8 *)&(pFVar35->HardwareId).Number = uVar6;
                (pFVar35->FilterId).Data.AllocatorInstance.Data = pFVar7;
                (pFVar35->FilterId).Data.ArrayNum = iVar20;
                (pFVar35->FilterId).Data.ArrayMax = iVar21;
                (pFVar35->OutputChannels).AllocatorInstance.Data = pFVar8;
                (pFVar35->OutputChannels).ArrayNum = iVar25;
                (pFVar35->OutputChannels).ArrayMax = iVar41;
                (pFVar35->MutationLock).Mutex.Mutex.Ptr = pvVar9;
                iVar41 = iVar38;
              } while (iVar38 * 2 + 1 < iVar31);
            }
            iVar31 = iVar31 + -1;
            lVar39 = lVar39 + -1;
            pFVar40 = pFVar40 + -1;
          } while (0 < lVar39);
        }
        return;
      }
      iVar29 = iVar32 + -1;
      iVar31 = iVar38 + -2;
      iVar38 = iVar31;
      iVar32 = iVar29;
    }
    iVar31 = iVar29 * 2;
    iVar37 = iVar31 + 1;
    if (iVar31 + 2 < param_2) {
      if (param_1[(longlong)iVar31 + 1].FilterId.Data.ArrayNum == 0) {
        pwVar34 = L"";
      }
      else {
        pwVar34 = (wchar_t *)param_1[(longlong)iVar31 + 1].FilterId.Data.AllocatorInstance.Data;
      }
      if (param_1[(longlong)iVar31 + 2].FilterId.Data.ArrayNum == 0) {
        pwVar33 = L"";
      }
      else {
        pwVar33 = (wchar_t *)param_1[(longlong)iVar31 + 2].FilterId.Data.AllocatorInstance.Data;
      }
      iVar30 = wcscmp(pwVar33,pwVar34);
      if (iVar30 < 0) {
        iVar37 = iVar31;
      }
      iVar37 = iVar37 + 1;
    }
    pFVar35 = param_1 + iVar29;
    pFVar40 = param_1 + iVar37;
    if ((pFVar40->FilterId).Data.ArrayNum == 0) {
      pwVar34 = L"";
    }
    else {
      pwVar34 = (wchar_t *)(pFVar40->FilterId).Data.AllocatorInstance.Data;
    }
    if ((pFVar35->FilterId).Data.ArrayNum == 0) {
      pwVar33 = L"";
    }
    else {
      pwVar33 = (wchar_t *)(pFVar35->FilterId).Data.AllocatorInstance.Data;
    }
    iVar31 = wcscmp(pwVar33,pwVar34);
    if (-1 < iVar31) goto LAB_148d2dfcc;
    pFVar2 = (pFVar40->FriendlyName).Data.AllocatorInstance.Data;
    iVar31 = iVar37 * 2 + 1;
    FVar3 = pFVar35->DeviceId;
    pFVar4 = (pFVar35->FriendlyName).Data.AllocatorInstance.Data;
    iVar15 = (pFVar35->FriendlyName).Data.ArrayNum;
    iVar16 = (pFVar35->FriendlyName).Data.ArrayMax;
    pFVar5 = (pFVar35->DeviceFriendlyName).Data.AllocatorInstance.Data;
    iVar17 = (pFVar35->DeviceFriendlyName).Data.ArrayNum;
    iVar18 = (pFVar35->DeviceFriendlyName).Data.ArrayMax;
    EVar19 = pFVar35->State;
    iVar20 = pFVar35->NumChannels;
    iVar21 = pFVar35->SampleRate;
    EVar22 = pFVar35->Type;
    uVar23 = pFVar35->ChannelBitmask;
    FVar24.Value = (pFVar35->HardwareId).ComparisonIndex.Value;
    uVar6 = *(undefined8 *)&(pFVar35->HardwareId).Number;
    pFVar7 = (pFVar35->FilterId).Data.AllocatorInstance.Data;
    iVar25 = (pFVar35->FilterId).Data.ArrayNum;
    iVar41 = (pFVar35->FilterId).Data.ArrayMax;
    pFVar8 = (pFVar35->OutputChannels).AllocatorInstance.Data;
    iVar26 = (pFVar35->OutputChannels).ArrayNum;
    iVar27 = (pFVar35->OutputChannels).ArrayMax;
    pvVar9 = (pFVar35->MutationLock).Mutex.Mutex.Ptr;
    pFVar35->DeviceId = pFVar40->DeviceId;
    (pFVar35->FriendlyName).Data.AllocatorInstance.Data = pFVar2;
    iVar29 = (pFVar40->FriendlyName).Data.ArrayMax;
    pFVar2 = (pFVar40->DeviceFriendlyName).Data.AllocatorInstance.Data;
    (pFVar35->FriendlyName).Data.ArrayNum = (pFVar40->FriendlyName).Data.ArrayNum;
    (pFVar35->FriendlyName).Data.ArrayMax = iVar29;
    (pFVar35->DeviceFriendlyName).Data.AllocatorInstance.Data = pFVar2;
    iVar29 = (pFVar40->DeviceFriendlyName).Data.ArrayMax;
    EVar11 = pFVar40->State;
    iVar30 = pFVar40->NumChannels;
    (pFVar35->DeviceFriendlyName).Data.ArrayNum = (pFVar40->DeviceFriendlyName).Data.ArrayNum;
    (pFVar35->DeviceFriendlyName).Data.ArrayMax = iVar29;
    pFVar35->State = EVar11;
    pFVar35->NumChannels = iVar30;
    EVar12 = pFVar40->Type;
    uVar13 = pFVar40->ChannelBitmask;
    FVar14.Value = (pFVar40->HardwareId).ComparisonIndex.Value;
    pFVar35->SampleRate = pFVar40->SampleRate;
    pFVar35->Type = EVar12;
    pFVar35->ChannelBitmask = uVar13;
    (pFVar35->HardwareId).ComparisonIndex = (FNameEntryId)FVar14.Value;
    pFVar2 = (pFVar40->FilterId).Data.AllocatorInstance.Data;
    *(undefined8 *)&(pFVar35->HardwareId).Number = *(undefined8 *)&(pFVar40->HardwareId).Number;
    (pFVar35->FilterId).Data.AllocatorInstance.Data = pFVar2;
    iVar29 = (pFVar40->FilterId).Data.ArrayMax;
    pFVar2 = (pFVar40->OutputChannels).AllocatorInstance.Data;
    (pFVar35->FilterId).Data.ArrayNum = (pFVar40->FilterId).Data.ArrayNum;
    (pFVar35->FilterId).Data.ArrayMax = iVar29;
    (pFVar35->OutputChannels).AllocatorInstance.Data = pFVar2;
    iVar29 = (pFVar40->OutputChannels).ArrayMax;
    pvVar10 = (pFVar40->MutationLock).Mutex.Mutex.Ptr;
    (pFVar35->OutputChannels).ArrayNum = (pFVar40->OutputChannels).ArrayNum;
    (pFVar35->OutputChannels).ArrayMax = iVar29;
    (pFVar35->MutationLock).Mutex.Mutex.Ptr = pvVar10;
    pFVar40->DeviceId = FVar3;
    (pFVar40->FriendlyName).Data.AllocatorInstance.Data = pFVar4;
    (pFVar40->FriendlyName).Data.ArrayNum = iVar15;
    (pFVar40->FriendlyName).Data.ArrayMax = iVar16;
    (pFVar40->DeviceFriendlyName).Data.AllocatorInstance.Data = pFVar5;
    (pFVar40->DeviceFriendlyName).Data.ArrayNum = iVar17;
    (pFVar40->DeviceFriendlyName).Data.ArrayMax = iVar18;
    pFVar40->State = EVar19;
    pFVar40->NumChannels = iVar20;
    pFVar40->SampleRate = iVar21;
    pFVar40->Type = EVar22;
    pFVar40->ChannelBitmask = uVar23;
    (pFVar40->HardwareId).ComparisonIndex = (FNameEntryId)FVar24.Value;
    *(undefined8 *)&(pFVar40->HardwareId).Number = uVar6;
    (pFVar40->FilterId).Data.AllocatorInstance.Data = pFVar7;
    (pFVar40->FilterId).Data.ArrayNum = iVar25;
    (pFVar40->FilterId).Data.ArrayMax = iVar41;
    (pFVar40->OutputChannels).AllocatorInstance.Data = pFVar8;
    (pFVar40->OutputChannels).ArrayNum = iVar26;
    (pFVar40->OutputChannels).ArrayMax = iVar27;
    (pFVar40->MutationLock).Mutex.Mutex.Ptr = pvVar9;
    iVar29 = iVar37;
  } while( true );
}

// HeapifyInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,TReversePredicate<`Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices'::__l5::<lambda_1>_>_> @ 148d2e220

void __cdecl
AlgoImpl::
HeapifyInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,TReversePredicate<_Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices_::__l5::<lambda_1>_>_>
          (FAudioPlatformDeviceInfo *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_public:_virtual_class_TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_>___cdecl_Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices(void)const_::_5_::<lambda_1>_>
          param_4)

{
  FAudioPlatformDeviceInfo *pFVar1;
  FAudioPlatformDeviceInfo *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  Type TVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  Type TVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  int iVar25;
  int iVar26;
  
  if (param_2 < 0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar20 = (param_2 + -2) / 2;
  iVar22 = iVar20 * 2 + 1;
  iVar5 = iVar22;
  iVar26 = iVar20;
  do {
    while (param_2 <= iVar22) {
LAB_148d2e3a0:
      if (iVar26 == 0) {
        return;
      }
      iVar20 = iVar26 + -1;
      iVar22 = iVar5 + -2;
      iVar5 = iVar22;
      iVar26 = iVar20;
    }
    iVar22 = iVar20 * 2;
    iVar25 = iVar22 + 1;
    if (iVar22 + 2 < param_2) {
      if (param_1[(longlong)iVar22 + 1].Name.Data.ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)param_1[(longlong)iVar22 + 1].Name.Data.AllocatorInstance.Data;
      }
      if (param_1[(longlong)iVar22 + 2].Name.Data.ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)param_1[(longlong)iVar22 + 2].Name.Data.AllocatorInstance.Data;
      }
      iVar21 = wcscmp(pwVar23,pwVar24);
      if (iVar21 < 0) {
        iVar25 = iVar22;
      }
      iVar25 = iVar25 + 1;
    }
    pFVar1 = param_1 + iVar20;
    pFVar2 = param_1 + iVar25;
    if (param_1[iVar25].Name.Data.ArrayNum == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = (wchar_t *)(pFVar2->Name).Data.AllocatorInstance.Data;
    }
    if ((pFVar1->Name).Data.ArrayNum == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)(pFVar1->Name).Data.AllocatorInstance.Data;
    }
    iVar22 = wcscmp(pwVar23,pwVar24);
    if (-1 < iVar22) goto LAB_148d2e3a0;
    iVar22 = (pFVar2->Name).Data.ArrayNum;
    iVar20 = (pFVar2->Name).Data.ArrayMax;
    pFVar6 = (pFVar1->Name).Data.AllocatorInstance.Data;
    iVar21 = (pFVar1->Name).Data.ArrayNum;
    iVar10 = (pFVar1->Name).Data.ArrayMax;
    pFVar7 = (pFVar1->DeviceId).Data.AllocatorInstance.Data;
    iVar11 = (pFVar1->DeviceId).Data.ArrayNum;
    iVar12 = (pFVar1->DeviceId).Data.ArrayMax;
    iVar13 = pFVar1->NumChannels;
    iVar14 = pFVar1->NumDirectOutChannels;
    iVar15 = pFVar1->SampleRate;
    TVar16 = pFVar1->Format;
    pFVar8 = (pFVar1->OutputChannelArray).AllocatorInstance.Data;
    iVar17 = (pFVar1->OutputChannelArray).ArrayNum;
    iVar18 = (pFVar1->OutputChannelArray).ArrayMax;
    uVar3 = *(undefined8 *)&pFVar1->field_0x40;
    (pFVar1->Name).Data.AllocatorInstance.Data = (pFVar2->Name).Data.AllocatorInstance.Data;
    (pFVar1->Name).Data.ArrayNum = iVar22;
    (pFVar1->Name).Data.ArrayMax = iVar20;
    iVar22 = (pFVar2->DeviceId).Data.ArrayNum;
    iVar20 = (pFVar2->DeviceId).Data.ArrayMax;
    (pFVar1->DeviceId).Data.AllocatorInstance.Data = (pFVar2->DeviceId).Data.AllocatorInstance.Data;
    (pFVar1->DeviceId).Data.ArrayNum = iVar22;
    (pFVar1->DeviceId).Data.ArrayMax = iVar20;
    iVar22 = pFVar2->NumDirectOutChannels;
    iVar20 = pFVar2->SampleRate;
    TVar9 = pFVar2->Format;
    pFVar1->NumChannels = pFVar2->NumChannels;
    pFVar1->NumDirectOutChannels = iVar22;
    pFVar1->SampleRate = iVar20;
    pFVar1->Format = TVar9;
    iVar22 = (pFVar2->OutputChannelArray).ArrayNum;
    iVar20 = (pFVar2->OutputChannelArray).ArrayMax;
    (pFVar1->OutputChannelArray).AllocatorInstance.Data =
         (pFVar2->OutputChannelArray).AllocatorInstance.Data;
    (pFVar1->OutputChannelArray).ArrayNum = iVar22;
    (pFVar1->OutputChannelArray).ArrayMax = iVar20;
    *(undefined8 *)&pFVar1->field_0x40 = *(undefined8 *)&pFVar2->field_0x40;
    (pFVar2->Name).Data.AllocatorInstance.Data = pFVar6;
    (pFVar2->Name).Data.ArrayNum = iVar21;
    (pFVar2->Name).Data.ArrayMax = iVar10;
    (pFVar2->DeviceId).Data.AllocatorInstance.Data = pFVar7;
    (pFVar2->DeviceId).Data.ArrayNum = iVar11;
    (pFVar2->DeviceId).Data.ArrayMax = iVar12;
    pFVar2->NumChannels = iVar13;
    pFVar2->NumDirectOutChannels = iVar14;
    pFVar2->SampleRate = iVar15;
    pFVar2->Format = TVar16;
    (pFVar2->OutputChannelArray).AllocatorInstance.Data = pFVar8;
    (pFVar2->OutputChannelArray).ArrayNum = iVar17;
    (pFVar2->OutputChannelArray).ArrayMax = iVar18;
    *(undefined8 *)&pFVar2->field_0x40 = uVar3;
    iVar22 = iVar25 * 2 + 1;
    iVar20 = iVar25;
  } while( true );
}

// IID_PPV_ARGS_Helper<IMMDeviceEnumerator> @ 148d2e3e0

void ** __cdecl IID_PPV_ARGS_Helper<IMMDeviceEnumerator>(IMMDeviceEnumerator **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IMMEndpoint> @ 148d2e3f0

void ** __cdecl IID_PPV_ARGS_Helper<IMMEndpoint>(IMMEndpoint **param_1)

{
  return param_1;
}

// IntroSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,`Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices'::__l5::<lambda_1>_> @ 148d2e400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices_::__l5::<lambda_1>_>
          (FAudioPlatformDeviceInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4
          )

{
  FString *pFVar1;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  Type TVar22;
  Type TVar23;
  wchar_t *pwVar24;
  longlong lVar25;
  int iVar26;
  wchar_t *pwVar27;
  FAudioPlatformDeviceInfo *pFVar28;
  FAudioPlatformDeviceInfo *pFVar29;
  FAudioPlatformDeviceInfo *pFVar30;
  int iVar31;
  FAudioPlatformDeviceInfo **ppFVar32;
  FAudioPlatformDeviceInfo *pFVar33;
  FAudioPlatformDeviceInfo *pFVar34;
  FAudioPlatformDeviceInfo *pFVar35;
  float fVar36;
  undefined1 auStack_398 [48];
  FAudioPlatformDeviceInfo *local_368;
  FAudioPlatformDeviceInfo *local_358;
  FAudioPlatformDeviceInfo *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (1 < param_2) {
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar36 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar36;
    memset(local_340,0,0x2e8);
    ppFVar32 = &local_358;
    do {
      pFVar28 = ppFVar32[1];
      pFVar35 = *ppFVar32;
      local_368 = ppFVar32[2];
      iVar26 = (int)(((longlong)pFVar28 - (longlong)pFVar35) / 0x48) + 1;
      pFVar34 = pFVar35;
      iVar31 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_148d2e4e0:
        if (8 < iVar26) {
          iVar12 = (pFVar34->Name).Data.ArrayNum;
          iVar13 = (pFVar34->Name).Data.ArrayMax;
          pFVar29 = pFVar28 + 1;
          iVar26 = iVar26 / 2;
          pFVar35 = pFVar34 + iVar26;
          pFVar4 = (pFVar35->Name).Data.AllocatorInstance.Data;
          iVar14 = (pFVar35->Name).Data.ArrayNum;
          iVar15 = (pFVar35->Name).Data.ArrayMax;
          pFVar1 = &pFVar34[iVar26].DeviceId;
          pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
          iVar16 = (pFVar1->Data).ArrayNum;
          iVar17 = (pFVar1->Data).ArrayMax;
          pFVar35 = pFVar34 + iVar26;
          iVar18 = pFVar35->NumChannels;
          iVar19 = pFVar35->NumDirectOutChannels;
          uVar6 = *(undefined8 *)(&pFVar35->NumChannels + 2);
          pTVar2 = &pFVar34[iVar26].OutputChannelArray;
          pFVar7 = (pTVar2->AllocatorInstance).Data;
          iVar20 = pTVar2->ArrayNum;
          iVar21 = pTVar2->ArrayMax;
          uVar3 = *(undefined8 *)&pFVar34[iVar26].field_0x40;
          pFVar35 = pFVar34 + iVar26;
          (pFVar35->Name).Data.AllocatorInstance.Data = (pFVar34->Name).Data.AllocatorInstance.Data;
          (pFVar35->Name).Data.ArrayNum = iVar12;
          (pFVar35->Name).Data.ArrayMax = iVar13;
          iVar12 = (pFVar34->DeviceId).Data.ArrayNum;
          iVar13 = (pFVar34->DeviceId).Data.ArrayMax;
          pFVar1 = &pFVar34[iVar26].DeviceId;
          (pFVar1->Data).AllocatorInstance.Data = (pFVar34->DeviceId).Data.AllocatorInstance.Data;
          (pFVar1->Data).ArrayNum = iVar12;
          (pFVar1->Data).ArrayMax = iVar13;
          iVar12 = pFVar34->NumDirectOutChannels;
          uVar8 = *(undefined8 *)&pFVar34->SampleRate;
          pFVar35 = pFVar34 + iVar26;
          pFVar35->NumChannels = pFVar34->NumChannels;
          pFVar35->NumDirectOutChannels = iVar12;
          *(undefined8 *)(&pFVar35->NumChannels + 2) = uVar8;
          iVar12 = (pFVar34->OutputChannelArray).ArrayNum;
          iVar13 = (pFVar34->OutputChannelArray).ArrayMax;
          pTVar2 = &pFVar34[iVar26].OutputChannelArray;
          (pTVar2->AllocatorInstance).Data = (pFVar34->OutputChannelArray).AllocatorInstance.Data;
          pTVar2->ArrayNum = iVar12;
          pTVar2->ArrayMax = iVar13;
          *(undefined8 *)&pFVar34[iVar26].field_0x40 = *(undefined8 *)&pFVar34->field_0x40;
          (pFVar34->Name).Data.AllocatorInstance.Data = pFVar4;
          (pFVar34->Name).Data.ArrayNum = iVar14;
          (pFVar34->Name).Data.ArrayMax = iVar15;
          (pFVar34->DeviceId).Data.AllocatorInstance.Data = pFVar5;
          (pFVar34->DeviceId).Data.ArrayNum = iVar16;
          (pFVar34->DeviceId).Data.ArrayMax = iVar17;
          pFVar34->NumChannels = iVar18;
          pFVar34->NumDirectOutChannels = iVar19;
          *(undefined8 *)&pFVar34->SampleRate = uVar6;
          (pFVar34->OutputChannelArray).AllocatorInstance.Data = pFVar7;
          (pFVar34->OutputChannelArray).ArrayNum = iVar20;
          (pFVar34->OutputChannelArray).ArrayMax = iVar21;
          *(undefined8 *)&pFVar34->field_0x40 = uVar3;
          pFVar35 = pFVar34;
LAB_148d2e570:
          pFVar33 = pFVar35;
          pFVar35 = pFVar33 + 1;
          if (pFVar35 <= pFVar28) goto code_r0x000148d2e579;
          goto LAB_148d2e5b0;
        }
        for (; pFVar29 = pFVar34, pFVar35 = pFVar34, pFVar34 < pFVar28; pFVar28 = pFVar28 + -1) {
          while (pFVar33 = pFVar29, pFVar35 = pFVar35 + 1, pFVar35 <= pFVar28) {
            if ((pFVar35->Name).Data.ArrayNum == 0) {
              pwVar27 = L"";
            }
            else {
              pwVar27 = (wchar_t *)(pFVar35->Name).Data.AllocatorInstance.Data;
            }
            if ((pFVar33->Name).Data.ArrayNum == 0) {
              pwVar24 = L"";
            }
            else {
              pwVar24 = (wchar_t *)(pFVar33->Name).Data.AllocatorInstance.Data;
            }
            iVar31 = wcscmp(pwVar24,pwVar27);
            pFVar29 = pFVar35;
            if (-1 < iVar31) {
              pFVar29 = pFVar33;
            }
          }
          pFVar4 = (pFVar33->Name).Data.AllocatorInstance.Data;
          iVar12 = (pFVar33->Name).Data.ArrayNum;
          iVar13 = (pFVar33->Name).Data.ArrayMax;
          uVar3 = *(undefined8 *)&pFVar33->field_0x40;
          pFVar5 = (pFVar33->DeviceId).Data.AllocatorInstance.Data;
          iVar14 = (pFVar33->DeviceId).Data.ArrayNum;
          iVar15 = (pFVar33->DeviceId).Data.ArrayMax;
          iVar31 = (pFVar28->Name).Data.ArrayNum;
          iVar26 = (pFVar28->Name).Data.ArrayMax;
          iVar16 = pFVar33->NumChannels;
          iVar17 = pFVar33->NumDirectOutChannels;
          iVar18 = pFVar33->SampleRate;
          TVar23 = pFVar33->Format;
          pFVar7 = (pFVar33->OutputChannelArray).AllocatorInstance.Data;
          iVar19 = (pFVar33->OutputChannelArray).ArrayNum;
          iVar20 = (pFVar33->OutputChannelArray).ArrayMax;
          (pFVar33->Name).Data.AllocatorInstance.Data = (pFVar28->Name).Data.AllocatorInstance.Data;
          (pFVar33->Name).Data.ArrayNum = iVar31;
          (pFVar33->Name).Data.ArrayMax = iVar26;
          iVar31 = (pFVar28->DeviceId).Data.ArrayNum;
          iVar26 = (pFVar28->DeviceId).Data.ArrayMax;
          (pFVar33->DeviceId).Data.AllocatorInstance.Data =
               (pFVar28->DeviceId).Data.AllocatorInstance.Data;
          (pFVar33->DeviceId).Data.ArrayNum = iVar31;
          (pFVar33->DeviceId).Data.ArrayMax = iVar26;
          iVar31 = pFVar28->NumDirectOutChannels;
          iVar26 = pFVar28->SampleRate;
          TVar22 = pFVar28->Format;
          pFVar33->NumChannels = pFVar28->NumChannels;
          pFVar33->NumDirectOutChannels = iVar31;
          pFVar33->SampleRate = iVar26;
          pFVar33->Format = TVar22;
          iVar31 = (pFVar28->OutputChannelArray).ArrayNum;
          iVar26 = (pFVar28->OutputChannelArray).ArrayMax;
          (pFVar33->OutputChannelArray).AllocatorInstance.Data =
               (pFVar28->OutputChannelArray).AllocatorInstance.Data;
          (pFVar33->OutputChannelArray).ArrayNum = iVar31;
          (pFVar33->OutputChannelArray).ArrayMax = iVar26;
          *(undefined8 *)&pFVar33->field_0x40 = *(undefined8 *)&pFVar28->field_0x40;
          (pFVar28->Name).Data.AllocatorInstance.Data = pFVar4;
          (pFVar28->Name).Data.ArrayNum = iVar12;
          (pFVar28->Name).Data.ArrayMax = iVar13;
          (pFVar28->DeviceId).Data.AllocatorInstance.Data = pFVar5;
          (pFVar28->DeviceId).Data.ArrayNum = iVar14;
          (pFVar28->DeviceId).Data.ArrayMax = iVar15;
          pFVar28->NumChannels = iVar16;
          pFVar28->NumDirectOutChannels = iVar17;
          pFVar28->SampleRate = iVar18;
          pFVar28->Format = TVar23;
          (pFVar28->OutputChannelArray).AllocatorInstance.Data = pFVar7;
          (pFVar28->OutputChannelArray).ArrayNum = iVar19;
          (pFVar28->OutputChannelArray).ArrayMax = iVar20;
          *(undefined8 *)&pFVar28->field_0x40 = uVar3;
        }
        goto LAB_148d2e77a;
      }
LAB_148d2e760:
      HeapSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices_::__l5::<lambda_1>_>
                (pFVar35,iVar26,param_3,param_4);
LAB_148d2e77a:
      ppFVar32 = ppFVar32 + -3;
    } while (&local_358 <= ppFVar32);
  }
  return;
code_r0x000148d2e579:
  if (pFVar33[1].Name.Data.ArrayNum == 0) {
    pwVar27 = L"";
  }
  else {
    pwVar27 = (wchar_t *)(pFVar35->Name).Data.AllocatorInstance.Data;
  }
  if ((pFVar34->Name).Data.ArrayNum == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = (wchar_t *)(pFVar34->Name).Data.AllocatorInstance.Data;
  }
  iVar26 = wcscmp(pwVar24,pwVar27);
  if (-1 < iVar26) goto LAB_148d2e570;
LAB_148d2e5b0:
  do {
    pFVar30 = pFVar29;
    pFVar29 = pFVar30 + -1;
    if (pFVar29 <= pFVar34) break;
    if ((pFVar34->Name).Data.ArrayNum == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = (wchar_t *)(pFVar34->Name).Data.AllocatorInstance.Data;
    }
    if (pFVar30[-1].Name.Data.ArrayNum == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = (wchar_t *)(pFVar29->Name).Data.AllocatorInstance.Data;
    }
    iVar26 = wcscmp(pwVar24,pwVar27);
  } while (-1 < iVar26);
  pFVar4 = (pFVar29->Name).Data.AllocatorInstance.Data;
  uVar9 = pFVar30[-1].Name.Data.ArrayNum;
  uVar10 = pFVar30[-1].Name.Data.ArrayMax;
  if (pFVar35 <= pFVar29) {
    pFVar5 = (pFVar35->Name).Data.AllocatorInstance.Data;
    iVar13 = pFVar33[1].Name.Data.ArrayNum;
    iVar14 = pFVar33[1].Name.Data.ArrayMax;
    pFVar7 = pFVar33[1].DeviceId.Data.AllocatorInstance.Data;
    iVar15 = pFVar33[1].DeviceId.Data.ArrayNum;
    iVar16 = pFVar33[1].DeviceId.Data.ArrayMax;
    iVar17 = pFVar33[1].NumChannels;
    iVar18 = pFVar33[1].NumDirectOutChannels;
    iVar19 = pFVar33[1].SampleRate;
    TVar23 = pFVar33[1].Format;
    pFVar11 = pFVar33[1].OutputChannelArray.AllocatorInstance.Data;
    iVar20 = pFVar33[1].OutputChannelArray.ArrayNum;
    iVar21 = pFVar33[1].OutputChannelArray.ArrayMax;
    uVar3 = *(undefined8 *)&pFVar33[1].field_0x40;
    (pFVar35->Name).Data.AllocatorInstance.Data = pFVar4;
    pFVar33[1].Name.Data.ArrayNum = uVar9;
    pFVar33[1].Name.Data.ArrayMax = uVar10;
    iVar26 = pFVar30[-1].DeviceId.Data.ArrayNum;
    iVar12 = pFVar30[-1].DeviceId.Data.ArrayMax;
    pFVar33[1].DeviceId.Data.AllocatorInstance.Data =
         pFVar30[-1].DeviceId.Data.AllocatorInstance.Data;
    pFVar33[1].DeviceId.Data.ArrayNum = iVar26;
    pFVar33[1].DeviceId.Data.ArrayMax = iVar12;
    iVar26 = pFVar30[-1].NumDirectOutChannels;
    iVar12 = pFVar30[-1].SampleRate;
    TVar22 = pFVar30[-1].Format;
    pFVar33[1].NumChannels = pFVar30[-1].NumChannels;
    pFVar33[1].NumDirectOutChannels = iVar26;
    pFVar33[1].SampleRate = iVar12;
    pFVar33[1].Format = TVar22;
    iVar26 = pFVar30[-1].OutputChannelArray.ArrayNum;
    iVar12 = pFVar30[-1].OutputChannelArray.ArrayMax;
    pFVar33[1].OutputChannelArray.AllocatorInstance.Data =
         pFVar30[-1].OutputChannelArray.AllocatorInstance.Data;
    pFVar33[1].OutputChannelArray.ArrayNum = iVar26;
    pFVar33[1].OutputChannelArray.ArrayMax = iVar12;
    *(undefined8 *)&pFVar33[1].field_0x40 = *(undefined8 *)&pFVar30[-1].field_0x40;
    (pFVar29->Name).Data.AllocatorInstance.Data = pFVar5;
    pFVar30[-1].Name.Data.ArrayNum = iVar13;
    pFVar30[-1].Name.Data.ArrayMax = iVar14;
    pFVar30[-1].DeviceId.Data.AllocatorInstance.Data = pFVar7;
    pFVar30[-1].DeviceId.Data.ArrayNum = iVar15;
    pFVar30[-1].DeviceId.Data.ArrayMax = iVar16;
    pFVar30[-1].NumChannels = iVar17;
    pFVar30[-1].NumDirectOutChannels = iVar18;
    pFVar30[-1].SampleRate = iVar19;
    pFVar30[-1].Format = TVar23;
    pFVar30[-1].OutputChannelArray.AllocatorInstance.Data = pFVar11;
    pFVar30[-1].OutputChannelArray.ArrayNum = iVar20;
    pFVar30[-1].OutputChannelArray.ArrayMax = iVar21;
    *(undefined8 *)&pFVar30[-1].field_0x40 = uVar3;
    goto LAB_148d2e570;
  }
  pFVar5 = (pFVar34->Name).Data.AllocatorInstance.Data;
  iVar13 = (pFVar34->Name).Data.ArrayNum;
  iVar14 = (pFVar34->Name).Data.ArrayMax;
  pFVar7 = (pFVar34->DeviceId).Data.AllocatorInstance.Data;
  iVar15 = (pFVar34->DeviceId).Data.ArrayNum;
  iVar16 = (pFVar34->DeviceId).Data.ArrayMax;
  iVar17 = pFVar34->NumChannels;
  iVar18 = pFVar34->NumDirectOutChannels;
  iVar19 = pFVar34->SampleRate;
  TVar23 = pFVar34->Format;
  lVar25 = (longlong)pFVar29 + (-0x48 - (longlong)pFVar34);
  iVar31 = iVar31 + -1;
  pFVar11 = (pFVar34->OutputChannelArray).AllocatorInstance.Data;
  iVar20 = (pFVar34->OutputChannelArray).ArrayNum;
  iVar21 = (pFVar34->OutputChannelArray).ArrayMax;
  uVar3 = *(undefined8 *)&pFVar34->field_0x40;
  (pFVar34->Name).Data.AllocatorInstance.Data = pFVar4;
  (pFVar34->Name).Data.ArrayNum = uVar9;
  (pFVar34->Name).Data.ArrayMax = uVar10;
  iVar26 = pFVar30[-1].DeviceId.Data.ArrayNum;
  iVar12 = pFVar30[-1].DeviceId.Data.ArrayMax;
  lVar25 = lVar25 / 0x12 + (lVar25 >> 0x3f);
  (pFVar34->DeviceId).Data.AllocatorInstance.Data = pFVar30[-1].DeviceId.Data.AllocatorInstance.Data
  ;
  (pFVar34->DeviceId).Data.ArrayNum = iVar26;
  (pFVar34->DeviceId).Data.ArrayMax = iVar12;
  iVar26 = pFVar30[-1].NumDirectOutChannels;
  iVar12 = pFVar30[-1].SampleRate;
  TVar22 = pFVar30[-1].Format;
  pFVar34->NumChannels = pFVar30[-1].NumChannels;
  pFVar34->NumDirectOutChannels = iVar26;
  pFVar34->SampleRate = iVar12;
  pFVar34->Format = TVar22;
  iVar26 = pFVar30[-1].OutputChannelArray.ArrayNum;
  iVar12 = pFVar30[-1].OutputChannelArray.ArrayMax;
  (pFVar34->OutputChannelArray).AllocatorInstance.Data =
       pFVar30[-1].OutputChannelArray.AllocatorInstance.Data;
  (pFVar34->OutputChannelArray).ArrayNum = iVar26;
  (pFVar34->OutputChannelArray).ArrayMax = iVar12;
  *(undefined8 *)&pFVar34->field_0x40 = *(undefined8 *)&pFVar30[-1].field_0x40;
  (pFVar29->Name).Data.AllocatorInstance.Data = pFVar5;
  pFVar30[-1].Name.Data.ArrayNum = iVar13;
  pFVar30[-1].Name.Data.ArrayMax = iVar14;
  pFVar30[-1].DeviceId.Data.AllocatorInstance.Data = pFVar7;
  pFVar30[-1].DeviceId.Data.ArrayNum = iVar15;
  pFVar30[-1].DeviceId.Data.ArrayMax = iVar16;
  pFVar30[-1].NumChannels = iVar17;
  pFVar30[-1].NumDirectOutChannels = iVar18;
  pFVar30[-1].SampleRate = iVar19;
  pFVar30[-1].Format = TVar23;
  pFVar30[-1].OutputChannelArray.AllocatorInstance.Data = pFVar11;
  pFVar30[-1].OutputChannelArray.ArrayNum = iVar20;
  pFVar30[-1].OutputChannelArray.ArrayMax = iVar21;
  *(undefined8 *)&pFVar30[-1].field_0x40 = uVar3;
  if ((lVar25 >> 2) - (lVar25 >> 0x3f) < ((longlong)pFVar28 - (longlong)pFVar35) / 0x48) {
    if (pFVar35 < pFVar28) {
      *ppFVar32 = pFVar35;
      ppFVar32[1] = pFVar28;
      *(int *)(ppFVar32 + 2) = iVar31;
      ppFVar32 = ppFVar32 + 3;
    }
    if (pFVar29 <= pFVar34 + 1) goto LAB_148d2e77a;
    pFVar28 = pFVar30 + -2;
    pFVar35 = pFVar34;
  }
  else {
    if (pFVar34 + 1 < pFVar29) {
      *ppFVar32 = pFVar34;
      ppFVar32[1] = pFVar30 + -2;
      *(int *)(ppFVar32 + 2) = iVar31;
      ppFVar32 = ppFVar32 + 3;
    }
    if (pFVar28 <= pFVar35) goto LAB_148d2e77a;
  }
  iVar26 = (int)(((longlong)pFVar28 - (longlong)pFVar35) / 0x48) + 1;
  pFVar34 = pFVar35;
  if (iVar31 == 0) goto LAB_148d2e760;
  goto LAB_148d2e4e0;
}

// IntroSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,`Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices'::__l2::<lambda_2>_> @ 148d2e8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices_::__l2::<lambda_2>_>
          (FAudioPlatformDeviceInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4
          )

{
  FString *pFVar1;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FScriptContainerElement *pFVar11;
  FAudioPlatformDeviceInfo *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  Type TVar23;
  Type TVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  ForAnyElementType FVar28;
  ForAnyElementType FVar29;
  FAudioPlatformDeviceInfo *pFVar30;
  bool bVar31;
  FAudioPlatformDeviceInfo *pFVar32;
  FAudioPlatformDeviceInfo *pFVar33;
  FAudioPlatformDeviceInfo *pFVar34;
  FAudioPlatformDeviceInfo *pFVar35;
  float fVar36;
  undefined1 auStack_418 [32];
  <lambda_2> local_3f8;
  FIdentityFunctor local_3f7;
  FAudioPlatformDeviceInfo **local_3f0;
  int local_3e8;
  FAudioPlatformDeviceInfo *local_3e0;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388 [2];
  FAudioPlatformDeviceInfo *local_368;
  FAudioPlatformDeviceInfo *local_358;
  FAudioPlatformDeviceInfo *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (param_2 < 2) {
    return;
  }
  local_58 = __security_cookie.value ^ (ulonglong)auStack_418;
  local_350 = param_1 + (longlong)param_2 + -1;
  local_3f8 = param_4;
  local_3f7 = param_3;
  local_358 = param_1;
  fVar36 = logf((float)param_2 * (float)param_2);
  local_348 = (undefined4)(longlong)fVar36;
  memset(local_340,0,0x2e8);
  local_3f0 = &local_358;
  do {
    local_368 = local_3f0[2];
    iVar25 = (int)(((longlong)local_3f0[1] - (longlong)*local_3f0) / 0x48);
    pFVar30 = local_3f0[1];
    pFVar12 = *local_3f0;
    local_3e8 = (int)local_368;
joined_r0x000148d2e99c:
    iVar25 = iVar25 + 1;
    local_3e0 = pFVar30;
    if (local_3e8 == 0) {
      HeapSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices_::__l2::<lambda_2>_>
                (pFVar12,iVar25,param_3,param_4);
    }
    else {
      if (8 < iVar25) {
        iVar26 = (pFVar12->Name).Data.ArrayNum;
        iVar14 = (pFVar12->Name).Data.ArrayMax;
        iVar25 = iVar25 / 2;
        pFVar33 = pFVar30 + 1;
        pFVar32 = pFVar12 + iVar25;
        pFVar4 = (pFVar32->Name).Data.AllocatorInstance.Data;
        iVar15 = (pFVar32->Name).Data.ArrayNum;
        iVar16 = (pFVar32->Name).Data.ArrayMax;
        pFVar1 = &pFVar12[iVar25].DeviceId;
        pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
        iVar17 = (pFVar1->Data).ArrayNum;
        iVar18 = (pFVar1->Data).ArrayMax;
        pFVar32 = pFVar12 + iVar25;
        iVar19 = pFVar32->NumChannels;
        iVar20 = pFVar32->NumDirectOutChannels;
        uVar6 = *(undefined8 *)(&pFVar32->NumChannels + 2);
        pTVar2 = &pFVar12[iVar25].OutputChannelArray;
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        iVar21 = pTVar2->ArrayNum;
        iVar22 = pTVar2->ArrayMax;
        uVar3 = *(undefined8 *)&pFVar12[iVar25].field_0x40;
        pFVar32 = pFVar12 + iVar25;
        (pFVar32->Name).Data.AllocatorInstance.Data = (pFVar12->Name).Data.AllocatorInstance.Data;
        (pFVar32->Name).Data.ArrayNum = iVar26;
        (pFVar32->Name).Data.ArrayMax = iVar14;
        iVar26 = (pFVar12->DeviceId).Data.ArrayNum;
        iVar14 = (pFVar12->DeviceId).Data.ArrayMax;
        pFVar1 = &pFVar12[iVar25].DeviceId;
        (pFVar1->Data).AllocatorInstance.Data = (pFVar12->DeviceId).Data.AllocatorInstance.Data;
        (pFVar1->Data).ArrayNum = iVar26;
        (pFVar1->Data).ArrayMax = iVar14;
        iVar26 = pFVar12->NumDirectOutChannels;
        uVar8 = *(undefined8 *)&pFVar12->SampleRate;
        pFVar32 = pFVar12 + iVar25;
        pFVar32->NumChannels = pFVar12->NumChannels;
        pFVar32->NumDirectOutChannels = iVar26;
        *(undefined8 *)(&pFVar32->NumChannels + 2) = uVar8;
        iVar26 = (pFVar12->OutputChannelArray).ArrayNum;
        iVar14 = (pFVar12->OutputChannelArray).ArrayMax;
        pTVar2 = &pFVar12[iVar25].OutputChannelArray;
        (pTVar2->AllocatorInstance).Data = (pFVar12->OutputChannelArray).AllocatorInstance.Data;
        pTVar2->ArrayNum = iVar26;
        pTVar2->ArrayMax = iVar14;
        *(undefined8 *)&pFVar12[iVar25].field_0x40 = *(undefined8 *)&pFVar12->field_0x40;
        (pFVar12->Name).Data.AllocatorInstance.Data = pFVar4;
        (pFVar12->Name).Data.ArrayNum = iVar15;
        (pFVar12->Name).Data.ArrayMax = iVar16;
        (pFVar12->DeviceId).Data.AllocatorInstance.Data = pFVar5;
        (pFVar12->DeviceId).Data.ArrayNum = iVar17;
        (pFVar12->DeviceId).Data.ArrayMax = iVar18;
        pFVar12->NumChannels = iVar19;
        pFVar12->NumDirectOutChannels = iVar20;
        *(undefined8 *)&pFVar12->SampleRate = uVar6;
        (pFVar12->OutputChannelArray).AllocatorInstance.Data = pFVar7;
        (pFVar12->OutputChannelArray).ArrayNum = iVar21;
        (pFVar12->OutputChannelArray).ArrayMax = iVar22;
        *(undefined8 *)&pFVar12->field_0x40 = uVar3;
        pFVar32 = pFVar12;
LAB_148d2ea40:
        pFVar35 = pFVar32;
        pFVar32 = pFVar35 + 1;
        if (pFVar32 <= pFVar30) break;
        goto LAB_148d2eb00;
      }
      for (; pFVar32 = pFVar12, pFVar33 = pFVar12, pFVar12 < pFVar30; pFVar30 = pFVar30 + -1) {
        while (pFVar35 = pFVar32, pFVar33 = pFVar33 + 1, pFVar33 <= pFVar30) {
          Audio::FWindowsMMDeviceCache::ExtractAggregateDeviceName(local_388,&pFVar35->Name);
          Audio::FWindowsMMDeviceCache::ExtractAggregateDeviceName(&local_398,&pFVar33->Name);
          FVar13.Data = local_388[0].Data.AllocatorInstance.Data;
          FVar29.Data = (FScriptContainerElement *)L"";
          if (local_398.Data.ArrayNum != 0) {
            FVar29.Data = local_398.Data.AllocatorInstance.Data;
          }
          FVar28.Data = (FScriptContainerElement *)L"";
          if (local_388[0].Data.ArrayNum != 0) {
            FVar28.Data = local_388[0].Data.AllocatorInstance.Data;
          }
          iVar25 = wcscmp((wchar_t *)FVar28.Data,(wchar_t *)FVar29.Data);
          if (iVar25 == 0) {
            iVar25 = Audio::FWindowsMMDeviceCache::ExtractAggregateChannelNumber(&pFVar35->Name);
            iVar26 = Audio::FWindowsMMDeviceCache::ExtractAggregateChannelNumber(&pFVar33->Name);
            bVar31 = iVar25 < iVar26;
            FVar13.Data = local_388[0].Data.AllocatorInstance.Data;
            if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_398.Data.AllocatorInstance.Data);
              FVar13.Data = local_388[0].Data.AllocatorInstance.Data;
            }
          }
          else {
            bVar31 = SUB41((uint)iVar25 >> 0x1f,0);
            if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_398.Data.AllocatorInstance.Data);
              FVar13.Data = local_388[0].Data.AllocatorInstance.Data;
            }
          }
          if (FVar13.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar13.Data);
          }
          pFVar32 = pFVar33;
          if (bVar31 == false) {
            pFVar32 = pFVar35;
          }
        }
        pFVar4 = (pFVar35->Name).Data.AllocatorInstance.Data;
        iVar14 = (pFVar35->Name).Data.ArrayNum;
        iVar15 = (pFVar35->Name).Data.ArrayMax;
        uVar3 = *(undefined8 *)&pFVar35->field_0x40;
        pFVar5 = (pFVar35->DeviceId).Data.AllocatorInstance.Data;
        iVar16 = (pFVar35->DeviceId).Data.ArrayNum;
        iVar17 = (pFVar35->DeviceId).Data.ArrayMax;
        iVar25 = (pFVar30->Name).Data.ArrayNum;
        iVar26 = (pFVar30->Name).Data.ArrayMax;
        iVar18 = pFVar35->NumChannels;
        iVar19 = pFVar35->NumDirectOutChannels;
        iVar20 = pFVar35->SampleRate;
        TVar24 = pFVar35->Format;
        pFVar7 = (pFVar35->OutputChannelArray).AllocatorInstance.Data;
        iVar21 = (pFVar35->OutputChannelArray).ArrayNum;
        iVar22 = (pFVar35->OutputChannelArray).ArrayMax;
        (pFVar35->Name).Data.AllocatorInstance.Data = (pFVar30->Name).Data.AllocatorInstance.Data;
        (pFVar35->Name).Data.ArrayNum = iVar25;
        (pFVar35->Name).Data.ArrayMax = iVar26;
        iVar25 = (pFVar30->DeviceId).Data.ArrayNum;
        iVar26 = (pFVar30->DeviceId).Data.ArrayMax;
        (pFVar35->DeviceId).Data.AllocatorInstance.Data =
             (pFVar30->DeviceId).Data.AllocatorInstance.Data;
        (pFVar35->DeviceId).Data.ArrayNum = iVar25;
        (pFVar35->DeviceId).Data.ArrayMax = iVar26;
        iVar25 = pFVar30->NumDirectOutChannels;
        iVar26 = pFVar30->SampleRate;
        TVar23 = pFVar30->Format;
        pFVar35->NumChannels = pFVar30->NumChannels;
        pFVar35->NumDirectOutChannels = iVar25;
        pFVar35->SampleRate = iVar26;
        pFVar35->Format = TVar23;
        iVar25 = (pFVar30->OutputChannelArray).ArrayNum;
        iVar26 = (pFVar30->OutputChannelArray).ArrayMax;
        (pFVar35->OutputChannelArray).AllocatorInstance.Data =
             (pFVar30->OutputChannelArray).AllocatorInstance.Data;
        (pFVar35->OutputChannelArray).ArrayNum = iVar25;
        (pFVar35->OutputChannelArray).ArrayMax = iVar26;
        *(undefined8 *)&pFVar35->field_0x40 = *(undefined8 *)&pFVar30->field_0x40;
        (pFVar30->Name).Data.AllocatorInstance.Data = pFVar4;
        (pFVar30->Name).Data.ArrayNum = iVar14;
        (pFVar30->Name).Data.ArrayMax = iVar15;
        (pFVar30->DeviceId).Data.AllocatorInstance.Data = pFVar5;
        (pFVar30->DeviceId).Data.ArrayNum = iVar16;
        (pFVar30->DeviceId).Data.ArrayMax = iVar17;
        pFVar30->NumChannels = iVar18;
        pFVar30->NumDirectOutChannels = iVar19;
        pFVar30->SampleRate = iVar20;
        pFVar30->Format = TVar24;
        (pFVar30->OutputChannelArray).AllocatorInstance.Data = pFVar7;
        (pFVar30->OutputChannelArray).ArrayNum = iVar21;
        (pFVar30->OutputChannelArray).ArrayMax = iVar22;
        *(undefined8 *)&pFVar30->field_0x40 = uVar3;
        param_3 = local_3f7;
        param_4 = local_3f8;
      }
    }
LAB_148d2ed93:
    local_3f0 = local_3f0 + -3;
    if (local_3f0 < &local_358) {
      return;
    }
  } while( true );
  Audio::FWindowsMMDeviceCache::ExtractAggregateDeviceName(&local_3c8,&pFVar12->Name);
  Audio::FWindowsMMDeviceCache::ExtractAggregateDeviceName(&local_3d8,&pFVar32->Name);
  FVar13.Data = local_3c8.Data.AllocatorInstance.Data;
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar29.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  FVar28.Data = (FScriptContainerElement *)L"";
  if (local_3c8.Data.ArrayNum != 0) {
    FVar28.Data = local_3c8.Data.AllocatorInstance.Data;
  }
  iVar25 = wcscmp((wchar_t *)FVar28.Data,(wchar_t *)FVar29.Data);
  if (iVar25 == 0) {
    iVar25 = Audio::FWindowsMMDeviceCache::ExtractAggregateChannelNumber(&pFVar12->Name);
    iVar26 = Audio::FWindowsMMDeviceCache::ExtractAggregateChannelNumber(&pFVar32->Name);
    bVar31 = iVar25 < iVar26;
    FVar13.Data = local_3c8.Data.AllocatorInstance.Data;
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
      FVar13.Data = local_3c8.Data.AllocatorInstance.Data;
    }
  }
  else {
    bVar31 = SUB41((uint)iVar25 >> 0x1f,0);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
      FVar13.Data = local_3c8.Data.AllocatorInstance.Data;
    }
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  if (bVar31 == false) goto LAB_148d2ea40;
LAB_148d2eb00:
  do {
    pFVar34 = pFVar33;
    pFVar33 = pFVar34 + -1;
    if (pFVar33 <= pFVar12) break;
    Audio::FWindowsMMDeviceCache::ExtractAggregateDeviceName(&local_3a8,&pFVar33->Name);
    Audio::FWindowsMMDeviceCache::ExtractAggregateDeviceName(&local_3b8,&pFVar12->Name);
    FVar13.Data = local_3a8.Data.AllocatorInstance.Data;
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_3b8.Data.ArrayNum != 0) {
      FVar29.Data = local_3b8.Data.AllocatorInstance.Data;
    }
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_3a8.Data.ArrayNum != 0) {
      FVar28.Data = local_3a8.Data.AllocatorInstance.Data;
    }
    iVar25 = wcscmp((wchar_t *)FVar28.Data,(wchar_t *)FVar29.Data);
    if (iVar25 == 0) {
      iVar25 = Audio::FWindowsMMDeviceCache::ExtractAggregateChannelNumber(&pFVar33->Name);
      iVar26 = Audio::FWindowsMMDeviceCache::ExtractAggregateChannelNumber(&pFVar12->Name);
      bVar31 = iVar25 < iVar26;
      FVar13.Data = local_3a8.Data.AllocatorInstance.Data;
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        FVar13.Data = local_3a8.Data.AllocatorInstance.Data;
      }
    }
    else {
      bVar31 = SUB41((uint)iVar25 >> 0x1f,0);
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        FVar13.Data = local_3a8.Data.AllocatorInstance.Data;
      }
    }
    if (FVar13.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar13.Data);
    }
  } while (bVar31 == false);
  pFVar4 = (pFVar33->Name).Data.AllocatorInstance.Data;
  uVar9 = pFVar34[-1].Name.Data.ArrayNum;
  uVar10 = pFVar34[-1].Name.Data.ArrayMax;
  if (pFVar32 <= pFVar33) {
    pFVar5 = (pFVar32->Name).Data.AllocatorInstance.Data;
    iVar14 = pFVar35[1].Name.Data.ArrayNum;
    iVar15 = pFVar35[1].Name.Data.ArrayMax;
    pFVar7 = pFVar35[1].DeviceId.Data.AllocatorInstance.Data;
    iVar16 = pFVar35[1].DeviceId.Data.ArrayNum;
    iVar17 = pFVar35[1].DeviceId.Data.ArrayMax;
    iVar18 = pFVar35[1].NumChannels;
    iVar19 = pFVar35[1].NumDirectOutChannels;
    iVar20 = pFVar35[1].SampleRate;
    TVar24 = pFVar35[1].Format;
    pFVar11 = pFVar35[1].OutputChannelArray.AllocatorInstance.Data;
    iVar21 = pFVar35[1].OutputChannelArray.ArrayNum;
    iVar22 = pFVar35[1].OutputChannelArray.ArrayMax;
    uVar3 = *(undefined8 *)&pFVar35[1].field_0x40;
    (pFVar32->Name).Data.AllocatorInstance.Data = pFVar4;
    pFVar35[1].Name.Data.ArrayNum = uVar9;
    pFVar35[1].Name.Data.ArrayMax = uVar10;
    iVar25 = pFVar34[-1].DeviceId.Data.ArrayNum;
    iVar26 = pFVar34[-1].DeviceId.Data.ArrayMax;
    pFVar35[1].DeviceId.Data.AllocatorInstance.Data =
         pFVar34[-1].DeviceId.Data.AllocatorInstance.Data;
    pFVar35[1].DeviceId.Data.ArrayNum = iVar25;
    pFVar35[1].DeviceId.Data.ArrayMax = iVar26;
    iVar25 = pFVar34[-1].NumDirectOutChannels;
    iVar26 = pFVar34[-1].SampleRate;
    TVar23 = pFVar34[-1].Format;
    pFVar35[1].NumChannels = pFVar34[-1].NumChannels;
    pFVar35[1].NumDirectOutChannels = iVar25;
    pFVar35[1].SampleRate = iVar26;
    pFVar35[1].Format = TVar23;
    iVar25 = pFVar34[-1].OutputChannelArray.ArrayNum;
    iVar26 = pFVar34[-1].OutputChannelArray.ArrayMax;
    pFVar35[1].OutputChannelArray.AllocatorInstance.Data =
         pFVar34[-1].OutputChannelArray.AllocatorInstance.Data;
    pFVar35[1].OutputChannelArray.ArrayNum = iVar25;
    pFVar35[1].OutputChannelArray.ArrayMax = iVar26;
    *(undefined8 *)&pFVar35[1].field_0x40 = *(undefined8 *)&pFVar34[-1].field_0x40;
    (pFVar33->Name).Data.AllocatorInstance.Data = pFVar5;
    pFVar34[-1].Name.Data.ArrayNum = iVar14;
    pFVar34[-1].Name.Data.ArrayMax = iVar15;
    pFVar34[-1].DeviceId.Data.AllocatorInstance.Data = pFVar7;
    pFVar34[-1].DeviceId.Data.ArrayNum = iVar16;
    pFVar34[-1].DeviceId.Data.ArrayMax = iVar17;
    pFVar34[-1].NumChannels = iVar18;
    pFVar34[-1].NumDirectOutChannels = iVar19;
    pFVar34[-1].SampleRate = iVar20;
    pFVar34[-1].Format = TVar24;
    pFVar34[-1].OutputChannelArray.AllocatorInstance.Data = pFVar11;
    pFVar34[-1].OutputChannelArray.ArrayNum = iVar21;
    pFVar34[-1].OutputChannelArray.ArrayMax = iVar22;
    *(undefined8 *)&pFVar34[-1].field_0x40 = uVar3;
    goto LAB_148d2ea40;
  }
  pFVar5 = (pFVar12->Name).Data.AllocatorInstance.Data;
  iVar14 = (pFVar12->Name).Data.ArrayNum;
  iVar15 = (pFVar12->Name).Data.ArrayMax;
  pFVar7 = (pFVar12->DeviceId).Data.AllocatorInstance.Data;
  iVar16 = (pFVar12->DeviceId).Data.ArrayNum;
  iVar17 = (pFVar12->DeviceId).Data.ArrayMax;
  iVar18 = pFVar12->NumChannels;
  iVar19 = pFVar12->NumDirectOutChannels;
  iVar20 = pFVar12->SampleRate;
  TVar24 = pFVar12->Format;
  pFVar11 = (pFVar12->OutputChannelArray).AllocatorInstance.Data;
  iVar21 = (pFVar12->OutputChannelArray).ArrayNum;
  iVar22 = (pFVar12->OutputChannelArray).ArrayMax;
  lVar27 = (longlong)pFVar33 + (-0x48 - (longlong)pFVar12);
  local_3e8 = local_3e8 + -1;
  uVar3 = *(undefined8 *)&pFVar12->field_0x40;
  (pFVar12->Name).Data.AllocatorInstance.Data = pFVar4;
  (pFVar12->Name).Data.ArrayNum = uVar9;
  (pFVar12->Name).Data.ArrayMax = uVar10;
  iVar25 = pFVar34[-1].DeviceId.Data.ArrayNum;
  iVar26 = pFVar34[-1].DeviceId.Data.ArrayMax;
  lVar27 = lVar27 / 0x12 + (lVar27 >> 0x3f);
  (pFVar12->DeviceId).Data.AllocatorInstance.Data = pFVar34[-1].DeviceId.Data.AllocatorInstance.Data
  ;
  (pFVar12->DeviceId).Data.ArrayNum = iVar25;
  (pFVar12->DeviceId).Data.ArrayMax = iVar26;
  iVar25 = pFVar34[-1].NumDirectOutChannels;
  iVar26 = pFVar34[-1].SampleRate;
  TVar23 = pFVar34[-1].Format;
  pFVar12->NumChannels = pFVar34[-1].NumChannels;
  pFVar12->NumDirectOutChannels = iVar25;
  pFVar12->SampleRate = iVar26;
  pFVar12->Format = TVar23;
  iVar25 = pFVar34[-1].OutputChannelArray.ArrayNum;
  iVar26 = pFVar34[-1].OutputChannelArray.ArrayMax;
  (pFVar12->OutputChannelArray).AllocatorInstance.Data =
       pFVar34[-1].OutputChannelArray.AllocatorInstance.Data;
  (pFVar12->OutputChannelArray).ArrayNum = iVar25;
  (pFVar12->OutputChannelArray).ArrayMax = iVar26;
  *(undefined8 *)&pFVar12->field_0x40 = *(undefined8 *)&pFVar34[-1].field_0x40;
  (pFVar33->Name).Data.AllocatorInstance.Data = pFVar5;
  pFVar34[-1].Name.Data.ArrayNum = iVar14;
  pFVar34[-1].Name.Data.ArrayMax = iVar15;
  pFVar34[-1].DeviceId.Data.AllocatorInstance.Data = pFVar7;
  pFVar34[-1].DeviceId.Data.ArrayNum = iVar16;
  pFVar34[-1].DeviceId.Data.ArrayMax = iVar17;
  pFVar34[-1].NumChannels = iVar18;
  pFVar34[-1].NumDirectOutChannels = iVar19;
  pFVar34[-1].SampleRate = iVar20;
  pFVar34[-1].Format = TVar24;
  pFVar34[-1].OutputChannelArray.AllocatorInstance.Data = pFVar11;
  pFVar34[-1].OutputChannelArray.ArrayNum = iVar21;
  pFVar34[-1].OutputChannelArray.ArrayMax = iVar22;
  *(undefined8 *)&pFVar34[-1].field_0x40 = uVar3;
  param_4 = local_3f8;
  if ((lVar27 >> 2) - (lVar27 >> 0x3f) < ((longlong)pFVar30 - (longlong)pFVar32) / 0x48) {
    if (pFVar32 < local_3e0) {
      *local_3f0 = pFVar32;
      local_3f0[1] = local_3e0;
      *(int *)(local_3f0 + 2) = local_3e8;
      local_3f0 = local_3f0 + 3;
    }
    if (pFVar33 <= pFVar12 + 1) goto LAB_148d2ed93;
    local_3e0 = pFVar34 + -2;
    pFVar32 = pFVar12;
  }
  else {
    if (pFVar12 + 1 < pFVar33) {
      *local_3f0 = pFVar12;
      local_3f0[1] = pFVar34 + -2;
      *(int *)(local_3f0 + 2) = local_3e8;
      local_3f0 = local_3f0 + 3;
    }
    if (local_3e0 <= pFVar32) goto LAB_148d2ed93;
  }
  iVar25 = (int)(((longlong)local_3e0 - (longlong)pFVar32) / 0x48);
  pFVar30 = local_3e0;
  pFVar12 = pFVar32;
  goto joined_r0x000148d2e99c;
}

// IntroSortInternal<Audio::FWindowsMMDeviceCache::FCacheEntry,int,FIdentityFunctor,`Audio::FWindowsMMDeviceCache::GetLogicalAggregateDevices'::__l2::<lambda_1>_> @ 148d2ef50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Audio::FWindowsMMDeviceCache::FCacheEntry,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetLogicalAggregateDevices_::__l2::<lambda_1>_>
          (FCacheEntry *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  void *pvVar9;
  EAudioDeviceState EVar10;
  int iVar11;
  EDeviceEndpointType EVar12;
  uint uVar13;
  FNameEntryId FVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  EAudioDeviceState EVar19;
  int iVar20;
  int iVar21;
  EDeviceEndpointType EVar22;
  uint uVar23;
  FNameEntryId FVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  wchar_t *pwVar29;
  int iVar30;
  wchar_t *pwVar31;
  FCacheEntry *pFVar32;
  FCacheEntry *pFVar33;
  FCacheEntry *pFVar34;
  FCacheEntry **ppFVar35;
  int iVar36;
  FCacheEntry *pFVar37;
  FCacheEntry *pFVar38;
  FCacheEntry *pFVar39;
  float fVar40;
  undefined1 auStack_3b8 [48];
  FCacheEntry *local_388;
  FCacheEntry *local_378;
  FCacheEntry *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (1 < param_2) {
    local_370 = param_1 + (longlong)param_2 + -1;
    local_378 = param_1;
    fVar40 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar40;
    memset(local_360,0,0x2e8);
    ppFVar35 = &local_378;
    do {
      pFVar39 = ppFVar35[1];
      pFVar38 = *ppFVar35;
      local_388 = ppFVar35[2];
      iVar30 = (int)(((longlong)pFVar39 - (longlong)pFVar38) / 0x70) + 1;
      pFVar37 = pFVar38;
      iVar36 = (int)local_388;
      if ((int)local_388 != 0) {
LAB_148d2f040:
        if (8 < iVar30) {
          pFVar1 = (pFVar37->FriendlyName).Data.AllocatorInstance.Data;
          pFVar33 = pFVar39 + 1;
          pFVar38 = pFVar37 + iVar30 / 2;
          FVar2 = pFVar38->DeviceId;
          pFVar3 = (pFVar38->FriendlyName).Data.AllocatorInstance.Data;
          iVar15 = (pFVar38->FriendlyName).Data.ArrayNum;
          iVar16 = (pFVar38->FriendlyName).Data.ArrayMax;
          pFVar4 = (pFVar38->DeviceFriendlyName).Data.AllocatorInstance.Data;
          iVar17 = (pFVar38->DeviceFriendlyName).Data.ArrayNum;
          iVar18 = (pFVar38->DeviceFriendlyName).Data.ArrayMax;
          EVar19 = pFVar38->State;
          iVar20 = pFVar38->NumChannels;
          iVar21 = pFVar38->SampleRate;
          EVar22 = pFVar38->Type;
          uVar23 = pFVar38->ChannelBitmask;
          FVar24.Value = (pFVar38->HardwareId).ComparisonIndex.Value;
          uVar5 = *(undefined8 *)&(pFVar38->HardwareId).Number;
          pFVar6 = (pFVar38->FilterId).Data.AllocatorInstance.Data;
          iVar25 = (pFVar38->FilterId).Data.ArrayNum;
          iVar26 = (pFVar38->FilterId).Data.ArrayMax;
          pFVar7 = (pFVar38->OutputChannels).AllocatorInstance.Data;
          iVar27 = (pFVar38->OutputChannels).ArrayNum;
          iVar28 = (pFVar38->OutputChannels).ArrayMax;
          pvVar8 = (pFVar38->MutationLock).Mutex.Mutex.Ptr;
          pFVar38->DeviceId = pFVar37->DeviceId;
          (pFVar38->FriendlyName).Data.AllocatorInstance.Data = pFVar1;
          iVar30 = (pFVar37->FriendlyName).Data.ArrayMax;
          pFVar1 = (pFVar37->DeviceFriendlyName).Data.AllocatorInstance.Data;
          (pFVar38->FriendlyName).Data.ArrayNum = (pFVar37->FriendlyName).Data.ArrayNum;
          (pFVar38->FriendlyName).Data.ArrayMax = iVar30;
          (pFVar38->DeviceFriendlyName).Data.AllocatorInstance.Data = pFVar1;
          iVar30 = (pFVar37->DeviceFriendlyName).Data.ArrayMax;
          EVar10 = pFVar37->State;
          iVar11 = pFVar37->NumChannels;
          (pFVar38->DeviceFriendlyName).Data.ArrayNum = (pFVar37->DeviceFriendlyName).Data.ArrayNum;
          (pFVar38->DeviceFriendlyName).Data.ArrayMax = iVar30;
          pFVar38->State = EVar10;
          pFVar38->NumChannels = iVar11;
          EVar12 = pFVar37->Type;
          uVar13 = pFVar37->ChannelBitmask;
          FVar14.Value = (pFVar37->HardwareId).ComparisonIndex.Value;
          pFVar38->SampleRate = pFVar37->SampleRate;
          pFVar38->Type = EVar12;
          pFVar38->ChannelBitmask = uVar13;
          (pFVar38->HardwareId).ComparisonIndex = (FNameEntryId)FVar14.Value;
          pFVar1 = (pFVar37->FilterId).Data.AllocatorInstance.Data;
          *(undefined8 *)&(pFVar38->HardwareId).Number =
               *(undefined8 *)&(pFVar37->HardwareId).Number;
          (pFVar38->FilterId).Data.AllocatorInstance.Data = pFVar1;
          iVar30 = (pFVar37->FilterId).Data.ArrayMax;
          pFVar1 = (pFVar37->OutputChannels).AllocatorInstance.Data;
          (pFVar38->FilterId).Data.ArrayNum = (pFVar37->FilterId).Data.ArrayNum;
          (pFVar38->FilterId).Data.ArrayMax = iVar30;
          (pFVar38->OutputChannels).AllocatorInstance.Data = pFVar1;
          iVar30 = (pFVar37->OutputChannels).ArrayMax;
          pvVar9 = (pFVar37->MutationLock).Mutex.Mutex.Ptr;
          (pFVar38->OutputChannels).ArrayNum = (pFVar37->OutputChannels).ArrayNum;
          (pFVar38->OutputChannels).ArrayMax = iVar30;
          (pFVar38->MutationLock).Mutex.Mutex.Ptr = pvVar9;
          pFVar37->DeviceId = FVar2;
          (pFVar37->FriendlyName).Data.AllocatorInstance.Data = pFVar3;
          (pFVar37->FriendlyName).Data.ArrayNum = iVar15;
          (pFVar37->FriendlyName).Data.ArrayMax = iVar16;
          (pFVar37->DeviceFriendlyName).Data.AllocatorInstance.Data = pFVar4;
          (pFVar37->DeviceFriendlyName).Data.ArrayNum = iVar17;
          (pFVar37->DeviceFriendlyName).Data.ArrayMax = iVar18;
          pFVar37->State = EVar19;
          pFVar37->NumChannels = iVar20;
          pFVar37->SampleRate = iVar21;
          pFVar37->Type = EVar22;
          pFVar37->ChannelBitmask = uVar23;
          (pFVar37->HardwareId).ComparisonIndex = (FNameEntryId)FVar24.Value;
          *(undefined8 *)&(pFVar37->HardwareId).Number = uVar5;
          (pFVar37->FilterId).Data.AllocatorInstance.Data = pFVar6;
          (pFVar37->FilterId).Data.ArrayNum = iVar25;
          (pFVar37->FilterId).Data.ArrayMax = iVar26;
          (pFVar37->OutputChannels).AllocatorInstance.Data = pFVar7;
          (pFVar37->OutputChannels).ArrayNum = iVar27;
          (pFVar37->OutputChannels).ArrayMax = iVar28;
          (pFVar37->MutationLock).Mutex.Mutex.Ptr = pvVar8;
          pFVar38 = pFVar37;
LAB_148d2f0e0:
          pFVar32 = pFVar38;
          pFVar38 = pFVar32 + 1;
          if (pFVar38 <= pFVar39) goto code_r0x000148d2f0e9;
          goto LAB_148d2f120;
        }
        for (; pFVar38 = pFVar37, pFVar33 = pFVar37, pFVar37 < pFVar39; pFVar39 = pFVar39 + -1) {
          while (pFVar32 = pFVar38, pFVar38 = pFVar33 + 1, pFVar38 <= pFVar39) {
            if (pFVar33[1].FilterId.Data.ArrayNum == 0) {
              pwVar31 = L"";
            }
            else {
              pwVar31 = (wchar_t *)pFVar33[1].FilterId.Data.AllocatorInstance.Data;
            }
            if ((pFVar32->FilterId).Data.ArrayNum == 0) {
              pwVar29 = L"";
            }
            else {
              pwVar29 = (wchar_t *)(pFVar32->FilterId).Data.AllocatorInstance.Data;
            }
            iVar36 = wcscmp(pwVar29,pwVar31);
            pFVar33 = pFVar38;
            if (-1 < iVar36) {
              pFVar38 = pFVar32;
            }
          }
          FVar2 = pFVar32->DeviceId;
          pFVar1 = (pFVar32->FriendlyName).Data.AllocatorInstance.Data;
          iVar11 = (pFVar32->FriendlyName).Data.ArrayNum;
          iVar15 = (pFVar32->FriendlyName).Data.ArrayMax;
          pFVar3 = (pFVar32->DeviceFriendlyName).Data.AllocatorInstance.Data;
          iVar16 = (pFVar32->DeviceFriendlyName).Data.ArrayNum;
          iVar17 = (pFVar32->DeviceFriendlyName).Data.ArrayMax;
          EVar19 = pFVar32->State;
          iVar18 = pFVar32->NumChannels;
          pFVar4 = (pFVar39->FriendlyName).Data.AllocatorInstance.Data;
          iVar20 = pFVar32->SampleRate;
          EVar22 = pFVar32->Type;
          uVar23 = pFVar32->ChannelBitmask;
          FVar24.Value = (pFVar32->HardwareId).ComparisonIndex.Value;
          uVar5 = *(undefined8 *)&(pFVar32->HardwareId).Number;
          pFVar6 = (pFVar32->FilterId).Data.AllocatorInstance.Data;
          iVar21 = (pFVar32->FilterId).Data.ArrayNum;
          iVar25 = (pFVar32->FilterId).Data.ArrayMax;
          pFVar7 = (pFVar32->OutputChannels).AllocatorInstance.Data;
          iVar26 = (pFVar32->OutputChannels).ArrayNum;
          iVar27 = (pFVar32->OutputChannels).ArrayMax;
          pvVar8 = (pFVar32->MutationLock).Mutex.Mutex.Ptr;
          pFVar32->DeviceId = pFVar39->DeviceId;
          (pFVar32->FriendlyName).Data.AllocatorInstance.Data = pFVar4;
          iVar36 = (pFVar39->FriendlyName).Data.ArrayMax;
          pFVar4 = (pFVar39->DeviceFriendlyName).Data.AllocatorInstance.Data;
          (pFVar32->FriendlyName).Data.ArrayNum = (pFVar39->FriendlyName).Data.ArrayNum;
          (pFVar32->FriendlyName).Data.ArrayMax = iVar36;
          (pFVar32->DeviceFriendlyName).Data.AllocatorInstance.Data = pFVar4;
          iVar36 = (pFVar39->DeviceFriendlyName).Data.ArrayMax;
          EVar10 = pFVar39->State;
          iVar30 = pFVar39->NumChannels;
          (pFVar32->DeviceFriendlyName).Data.ArrayNum = (pFVar39->DeviceFriendlyName).Data.ArrayNum;
          (pFVar32->DeviceFriendlyName).Data.ArrayMax = iVar36;
          pFVar32->State = EVar10;
          pFVar32->NumChannels = iVar30;
          EVar12 = pFVar39->Type;
          uVar13 = pFVar39->ChannelBitmask;
          FVar14.Value = (pFVar39->HardwareId).ComparisonIndex.Value;
          pFVar32->SampleRate = pFVar39->SampleRate;
          pFVar32->Type = EVar12;
          pFVar32->ChannelBitmask = uVar13;
          (pFVar32->HardwareId).ComparisonIndex = (FNameEntryId)FVar14.Value;
          pFVar4 = (pFVar39->FilterId).Data.AllocatorInstance.Data;
          *(undefined8 *)&(pFVar32->HardwareId).Number =
               *(undefined8 *)&(pFVar39->HardwareId).Number;
          (pFVar32->FilterId).Data.AllocatorInstance.Data = pFVar4;
          iVar36 = (pFVar39->FilterId).Data.ArrayMax;
          pFVar4 = (pFVar39->OutputChannels).AllocatorInstance.Data;
          (pFVar32->FilterId).Data.ArrayNum = (pFVar39->FilterId).Data.ArrayNum;
          (pFVar32->FilterId).Data.ArrayMax = iVar36;
          (pFVar32->OutputChannels).AllocatorInstance.Data = pFVar4;
          iVar36 = (pFVar39->OutputChannels).ArrayMax;
          pvVar9 = (pFVar39->MutationLock).Mutex.Mutex.Ptr;
          (pFVar32->OutputChannels).ArrayNum = (pFVar39->OutputChannels).ArrayNum;
          (pFVar32->OutputChannels).ArrayMax = iVar36;
          (pFVar32->MutationLock).Mutex.Mutex.Ptr = pvVar9;
          pFVar39->DeviceId = FVar2;
          (pFVar39->FriendlyName).Data.AllocatorInstance.Data = pFVar1;
          (pFVar39->FriendlyName).Data.ArrayNum = iVar11;
          (pFVar39->FriendlyName).Data.ArrayMax = iVar15;
          (pFVar39->DeviceFriendlyName).Data.AllocatorInstance.Data = pFVar3;
          (pFVar39->DeviceFriendlyName).Data.ArrayNum = iVar16;
          (pFVar39->DeviceFriendlyName).Data.ArrayMax = iVar17;
          pFVar39->State = EVar19;
          pFVar39->NumChannels = iVar18;
          pFVar39->SampleRate = iVar20;
          pFVar39->Type = EVar22;
          pFVar39->ChannelBitmask = uVar23;
          (pFVar39->HardwareId).ComparisonIndex = (FNameEntryId)FVar24.Value;
          *(undefined8 *)&(pFVar39->HardwareId).Number = uVar5;
          (pFVar39->FilterId).Data.AllocatorInstance.Data = pFVar6;
          (pFVar39->FilterId).Data.ArrayNum = iVar21;
          (pFVar39->FilterId).Data.ArrayMax = iVar25;
          (pFVar39->OutputChannels).AllocatorInstance.Data = pFVar7;
          (pFVar39->OutputChannels).ArrayNum = iVar26;
          (pFVar39->OutputChannels).ArrayMax = iVar27;
          (pFVar39->MutationLock).Mutex.Mutex.Ptr = pvVar8;
        }
        goto LAB_148d2f327;
      }
LAB_148d2f30d:
      HeapSortInternal<Audio::FWindowsMMDeviceCache::FCacheEntry,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetLogicalAggregateDevices_::__l2::<lambda_1>_>
                (pFVar38,iVar30,param_3,param_4);
LAB_148d2f327:
      ppFVar35 = ppFVar35 + -3;
    } while (&local_378 <= ppFVar35);
  }
  return;
code_r0x000148d2f0e9:
  if (pFVar32[1].FilterId.Data.ArrayNum == 0) {
    pwVar31 = L"";
  }
  else {
    pwVar31 = (wchar_t *)pFVar32[1].FilterId.Data.AllocatorInstance.Data;
  }
  if ((pFVar37->FilterId).Data.ArrayNum == 0) {
    pwVar29 = L"";
  }
  else {
    pwVar29 = (wchar_t *)(pFVar37->FilterId).Data.AllocatorInstance.Data;
  }
  iVar30 = wcscmp(pwVar29,pwVar31);
  if (-1 < iVar30) goto LAB_148d2f0e0;
LAB_148d2f120:
  do {
    pFVar34 = pFVar33;
    pFVar33 = pFVar34 + -1;
    if (pFVar33 <= pFVar37) break;
    if ((pFVar37->FilterId).Data.ArrayNum == 0) {
      pwVar31 = L"";
    }
    else {
      pwVar31 = (wchar_t *)(pFVar37->FilterId).Data.AllocatorInstance.Data;
    }
    if (pFVar34[-1].FilterId.Data.ArrayNum == 0) {
      pwVar29 = L"";
    }
    else {
      pwVar29 = (wchar_t *)pFVar34[-1].FilterId.Data.AllocatorInstance.Data;
    }
    iVar30 = wcscmp(pwVar29,pwVar31);
  } while (-1 < iVar30);
  pFVar1 = pFVar34[-1].FriendlyName.Data.AllocatorInstance.Data;
  if (pFVar38 <= pFVar33) {
    FVar2 = pFVar38->DeviceId;
    pFVar3 = pFVar32[1].FriendlyName.Data.AllocatorInstance.Data;
    iVar15 = pFVar32[1].FriendlyName.Data.ArrayNum;
    iVar16 = pFVar32[1].FriendlyName.Data.ArrayMax;
    pFVar4 = pFVar32[1].DeviceFriendlyName.Data.AllocatorInstance.Data;
    iVar17 = pFVar32[1].DeviceFriendlyName.Data.ArrayNum;
    iVar18 = pFVar32[1].DeviceFriendlyName.Data.ArrayMax;
    EVar19 = pFVar32[1].State;
    iVar20 = pFVar32[1].NumChannels;
    iVar21 = pFVar32[1].SampleRate;
    EVar22 = pFVar32[1].Type;
    uVar23 = pFVar32[1].ChannelBitmask;
    FVar24.Value = pFVar32[1].HardwareId.ComparisonIndex.Value;
    uVar5 = *(undefined8 *)&pFVar32[1].HardwareId.Number;
    pFVar6 = pFVar32[1].FilterId.Data.AllocatorInstance.Data;
    iVar25 = pFVar32[1].FilterId.Data.ArrayNum;
    iVar26 = pFVar32[1].FilterId.Data.ArrayMax;
    pFVar7 = pFVar32[1].OutputChannels.AllocatorInstance.Data;
    iVar27 = pFVar32[1].OutputChannels.ArrayNum;
    iVar28 = pFVar32[1].OutputChannels.ArrayMax;
    pvVar8 = pFVar32[1].MutationLock.Mutex.Mutex.Ptr;
    pFVar38->DeviceId = pFVar33->DeviceId;
    pFVar32[1].FriendlyName.Data.AllocatorInstance.Data = pFVar1;
    iVar30 = pFVar34[-1].FriendlyName.Data.ArrayMax;
    pFVar1 = pFVar34[-1].DeviceFriendlyName.Data.AllocatorInstance.Data;
    pFVar32[1].FriendlyName.Data.ArrayNum = pFVar34[-1].FriendlyName.Data.ArrayNum;
    pFVar32[1].FriendlyName.Data.ArrayMax = iVar30;
    pFVar32[1].DeviceFriendlyName.Data.AllocatorInstance.Data = pFVar1;
    iVar30 = pFVar34[-1].DeviceFriendlyName.Data.ArrayMax;
    EVar10 = pFVar34[-1].State;
    iVar11 = pFVar34[-1].NumChannels;
    pFVar32[1].DeviceFriendlyName.Data.ArrayNum = pFVar34[-1].DeviceFriendlyName.Data.ArrayNum;
    pFVar32[1].DeviceFriendlyName.Data.ArrayMax = iVar30;
    pFVar32[1].State = EVar10;
    pFVar32[1].NumChannels = iVar11;
    EVar12 = pFVar34[-1].Type;
    uVar13 = pFVar34[-1].ChannelBitmask;
    FVar14.Value = pFVar34[-1].HardwareId.ComparisonIndex.Value;
    pFVar32[1].SampleRate = pFVar34[-1].SampleRate;
    pFVar32[1].Type = EVar12;
    pFVar32[1].ChannelBitmask = uVar13;
    pFVar32[1].HardwareId.ComparisonIndex = (FNameEntryId)FVar14.Value;
    pFVar1 = pFVar34[-1].FilterId.Data.AllocatorInstance.Data;
    *(undefined8 *)&pFVar32[1].HardwareId.Number = *(undefined8 *)&pFVar34[-1].HardwareId.Number;
    pFVar32[1].FilterId.Data.AllocatorInstance.Data = pFVar1;
    iVar30 = pFVar34[-1].FilterId.Data.ArrayMax;
    pFVar1 = pFVar34[-1].OutputChannels.AllocatorInstance.Data;
    pFVar32[1].FilterId.Data.ArrayNum = pFVar34[-1].FilterId.Data.ArrayNum;
    pFVar32[1].FilterId.Data.ArrayMax = iVar30;
    pFVar32[1].OutputChannels.AllocatorInstance.Data = pFVar1;
    iVar30 = pFVar34[-1].OutputChannels.ArrayMax;
    pvVar9 = pFVar34[-1].MutationLock.Mutex.Mutex.Ptr;
    pFVar32[1].OutputChannels.ArrayNum = pFVar34[-1].OutputChannels.ArrayNum;
    pFVar32[1].OutputChannels.ArrayMax = iVar30;
    pFVar32[1].MutationLock.Mutex.Mutex.Ptr = pvVar9;
    pFVar33->DeviceId = FVar2;
    pFVar34[-1].FriendlyName.Data.AllocatorInstance.Data = pFVar3;
    pFVar34[-1].FriendlyName.Data.ArrayNum = iVar15;
    pFVar34[-1].FriendlyName.Data.ArrayMax = iVar16;
    pFVar34[-1].DeviceFriendlyName.Data.AllocatorInstance.Data = pFVar4;
    pFVar34[-1].DeviceFriendlyName.Data.ArrayNum = iVar17;
    pFVar34[-1].DeviceFriendlyName.Data.ArrayMax = iVar18;
    pFVar34[-1].State = EVar19;
    pFVar34[-1].NumChannels = iVar20;
    pFVar34[-1].SampleRate = iVar21;
    pFVar34[-1].Type = EVar22;
    pFVar34[-1].ChannelBitmask = uVar23;
    pFVar34[-1].HardwareId.ComparisonIndex = (FNameEntryId)FVar24.Value;
    *(undefined8 *)&pFVar34[-1].HardwareId.Number = uVar5;
    pFVar34[-1].FilterId.Data.AllocatorInstance.Data = pFVar6;
    pFVar34[-1].FilterId.Data.ArrayNum = iVar25;
    pFVar34[-1].FilterId.Data.ArrayMax = iVar26;
    pFVar34[-1].OutputChannels.AllocatorInstance.Data = pFVar7;
    pFVar34[-1].OutputChannels.ArrayNum = iVar27;
    pFVar34[-1].OutputChannels.ArrayMax = iVar28;
    pFVar34[-1].MutationLock.Mutex.Mutex.Ptr = pvVar8;
    goto LAB_148d2f0e0;
  }
  FVar2 = pFVar37->DeviceId;
  pFVar3 = (pFVar37->FriendlyName).Data.AllocatorInstance.Data;
  iVar15 = (pFVar37->FriendlyName).Data.ArrayNum;
  iVar16 = (pFVar37->FriendlyName).Data.ArrayMax;
  pFVar4 = (pFVar37->DeviceFriendlyName).Data.AllocatorInstance.Data;
  iVar17 = (pFVar37->DeviceFriendlyName).Data.ArrayNum;
  iVar18 = (pFVar37->DeviceFriendlyName).Data.ArrayMax;
  EVar19 = pFVar37->State;
  iVar20 = pFVar37->NumChannels;
  iVar36 = iVar36 + -1;
  iVar21 = pFVar37->SampleRate;
  EVar22 = pFVar37->Type;
  uVar23 = pFVar37->ChannelBitmask;
  FVar24.Value = (pFVar37->HardwareId).ComparisonIndex.Value;
  uVar5 = *(undefined8 *)&(pFVar37->HardwareId).Number;
  pFVar6 = (pFVar37->FilterId).Data.AllocatorInstance.Data;
  iVar25 = (pFVar37->FilterId).Data.ArrayNum;
  iVar26 = (pFVar37->FilterId).Data.ArrayMax;
  pFVar7 = (pFVar37->OutputChannels).AllocatorInstance.Data;
  iVar27 = (pFVar37->OutputChannels).ArrayNum;
  iVar28 = (pFVar37->OutputChannels).ArrayMax;
  pvVar8 = (pFVar37->MutationLock).Mutex.Mutex.Ptr;
  pFVar37->DeviceId = pFVar33->DeviceId;
  (pFVar37->FriendlyName).Data.AllocatorInstance.Data = pFVar1;
  iVar30 = pFVar34[-1].FriendlyName.Data.ArrayMax;
  pFVar1 = pFVar34[-1].DeviceFriendlyName.Data.AllocatorInstance.Data;
  (pFVar37->FriendlyName).Data.ArrayNum = pFVar34[-1].FriendlyName.Data.ArrayNum;
  (pFVar37->FriendlyName).Data.ArrayMax = iVar30;
  (pFVar37->DeviceFriendlyName).Data.AllocatorInstance.Data = pFVar1;
  iVar30 = pFVar34[-1].DeviceFriendlyName.Data.ArrayMax;
  EVar10 = pFVar34[-1].State;
  iVar11 = pFVar34[-1].NumChannels;
  (pFVar37->DeviceFriendlyName).Data.ArrayNum = pFVar34[-1].DeviceFriendlyName.Data.ArrayNum;
  (pFVar37->DeviceFriendlyName).Data.ArrayMax = iVar30;
  pFVar37->State = EVar10;
  pFVar37->NumChannels = iVar11;
  EVar12 = pFVar34[-1].Type;
  uVar13 = pFVar34[-1].ChannelBitmask;
  FVar14.Value = pFVar34[-1].HardwareId.ComparisonIndex.Value;
  pFVar37->SampleRate = pFVar34[-1].SampleRate;
  pFVar37->Type = EVar12;
  pFVar37->ChannelBitmask = uVar13;
  (pFVar37->HardwareId).ComparisonIndex = (FNameEntryId)FVar14.Value;
  pFVar1 = pFVar34[-1].FilterId.Data.AllocatorInstance.Data;
  *(undefined8 *)&(pFVar37->HardwareId).Number = *(undefined8 *)&pFVar34[-1].HardwareId.Number;
  (pFVar37->FilterId).Data.AllocatorInstance.Data = pFVar1;
  iVar30 = pFVar34[-1].FilterId.Data.ArrayMax;
  pFVar1 = pFVar34[-1].OutputChannels.AllocatorInstance.Data;
  (pFVar37->FilterId).Data.ArrayNum = pFVar34[-1].FilterId.Data.ArrayNum;
  (pFVar37->FilterId).Data.ArrayMax = iVar30;
  (pFVar37->OutputChannels).AllocatorInstance.Data = pFVar1;
  iVar30 = pFVar34[-1].OutputChannels.ArrayMax;
  pvVar9 = pFVar34[-1].MutationLock.Mutex.Mutex.Ptr;
  (pFVar37->OutputChannels).ArrayNum = pFVar34[-1].OutputChannels.ArrayNum;
  (pFVar37->OutputChannels).ArrayMax = iVar30;
  (pFVar37->MutationLock).Mutex.Mutex.Ptr = pvVar9;
  pFVar33->DeviceId = FVar2;
  pFVar34[-1].FriendlyName.Data.AllocatorInstance.Data = pFVar3;
  pFVar34[-1].FriendlyName.Data.ArrayNum = iVar15;
  pFVar34[-1].FriendlyName.Data.ArrayMax = iVar16;
  pFVar34[-1].DeviceFriendlyName.Data.AllocatorInstance.Data = pFVar4;
  pFVar34[-1].DeviceFriendlyName.Data.ArrayNum = iVar17;
  pFVar34[-1].DeviceFriendlyName.Data.ArrayMax = iVar18;
  pFVar34[-1].State = EVar19;
  pFVar34[-1].NumChannels = iVar20;
  pFVar34[-1].SampleRate = iVar21;
  pFVar34[-1].Type = EVar22;
  pFVar34[-1].ChannelBitmask = uVar23;
  pFVar34[-1].HardwareId.ComparisonIndex = (FNameEntryId)FVar24.Value;
  *(undefined8 *)&pFVar34[-1].HardwareId.Number = uVar5;
  pFVar34[-1].FilterId.Data.AllocatorInstance.Data = pFVar6;
  pFVar34[-1].FilterId.Data.ArrayNum = iVar25;
  pFVar34[-1].FilterId.Data.ArrayMax = iVar26;
  pFVar34[-1].OutputChannels.AllocatorInstance.Data = pFVar7;
  pFVar34[-1].OutputChannels.ArrayNum = iVar27;
  pFVar34[-1].OutputChannels.ArrayMax = iVar28;
  pFVar34[-1].MutationLock.Mutex.Mutex.Ptr = pvVar8;
  if (((longlong)pFVar33 + (-0x70 - (longlong)pFVar37)) / 0x70 <
      ((longlong)pFVar39 - (longlong)pFVar38) / 0x70) {
    if (pFVar38 < pFVar39) {
      *ppFVar35 = pFVar38;
      ppFVar35[1] = pFVar39;
      *(int *)(ppFVar35 + 2) = iVar36;
      ppFVar35 = ppFVar35 + 3;
    }
    if (pFVar33 <= pFVar37 + 1) goto LAB_148d2f327;
    pFVar39 = pFVar34 + -2;
    pFVar38 = pFVar37;
  }
  else {
    if (pFVar37 + 1 < pFVar33) {
      *ppFVar35 = pFVar37;
      ppFVar35[1] = pFVar34 + -2;
      *(int *)(ppFVar35 + 2) = iVar36;
      ppFVar35 = ppFVar35 + 3;
    }
    if (pFVar39 <= pFVar38) goto LAB_148d2f327;
  }
  iVar30 = (int)(((longlong)pFVar39 - (longlong)pFVar38) / 0x70) + 1;
  pFVar37 = pFVar38;
  if (iVar36 == 0) goto LAB_148d2f30d;
  goto LAB_148d2f040;
}

// FWindowsMMDeviceCache @ 148d2f7a0

/* WARNING: Removing unreachable block (ram,0x000148d2f97e) */
/* WARNING: Removing unreachable block (ram,0x000148d2f9b3) */
/* WARNING: Removing unreachable block (ram,0x000148d2f990) */
/* WARNING: Removing unreachable block (ram,0x000148d2f999) */
/* WARNING: Removing unreachable block (ram,0x000148d2f9b7) */
/* WARNING: Removing unreachable block (ram,0x000148d2f9c0) */
/* WARNING: Removing unreachable block (ram,0x000148d2f9fb) */
/* WARNING: Removing unreachable block (ram,0x000148d2fbed) */
/* WARNING: Removing unreachable block (ram,0x000148d2fc03) */
/* WARNING: Removing unreachable block (ram,0x000148d2fc0c) */
/* WARNING: Removing unreachable block (ram,0x000148d2fc24) */
/* WARNING: Removing unreachable block (ram,0x000148d2fc2d) */
/* WARNING: Removing unreachable block (ram,0x000148d2fa0a) */
/* WARNING: Removing unreachable block (ram,0x000148d2fa17) */
/* WARNING: Removing unreachable block (ram,0x000148d2fa20) */
/* WARNING: Removing unreachable block (ram,0x000148d2fa3c) */
/* WARNING: Removing unreachable block (ram,0x000148d2fa4b) */
/* WARNING: Removing unreachable block (ram,0x000148d2fa4f) */
/* WARNING: Removing unreachable block (ram,0x000148d2fa5f) */
/* WARNING: Removing unreachable block (ram,0x000148d2fa70) */
/* WARNING: Removing unreachable block (ram,0x000148d2fada) */
/* WARNING: Removing unreachable block (ram,0x000148d2fae6) */
/* WARNING: Removing unreachable block (ram,0x000148d2faea) */
/* WARNING: Removing unreachable block (ram,0x000148d2faef) */
/* WARNING: Removing unreachable block (ram,0x000148d2fb0b) */
/* WARNING: Removing unreachable block (ram,0x000148d2fb02) */
/* WARNING: Removing unreachable block (ram,0x000148d2fa7f) */
/* WARNING: Removing unreachable block (ram,0x000148d2fa87) */
/* WARNING: Removing unreachable block (ram,0x000148d2fa97) */
/* WARNING: Removing unreachable block (ram,0x000148d2faa5) */
/* WARNING: Removing unreachable block (ram,0x000148d2faaa) */
/* WARNING: Removing unreachable block (ram,0x000148d2fb60) */
/* WARNING: Removing unreachable block (ram,0x000148d2fab3) */
/* WARNING: Removing unreachable block (ram,0x000148d2fb57) */
/* WARNING: Removing unreachable block (ram,0x000148d2fabc) */
/* WARNING: Removing unreachable block (ram,0x000148d2fb4e) */
/* WARNING: Removing unreachable block (ram,0x000148d2fac5) */
/* WARNING: Removing unreachable block (ram,0x000148d2fb67) */
/* WARNING: Removing unreachable block (ram,0x000148d2fb83) */
/* WARNING: Removing unreachable block (ram,0x000148d2fb88) */
/* WARNING: Removing unreachable block (ram,0x000148d2fc67) */
/* WARNING: Removing unreachable block (ram,0x000148d2fc76) */
/* WARNING: Removing unreachable block (ram,0x000148d2fc83) */
/* WARNING: Removing unreachable block (ram,0x000148d2fc8c) */
/* WARNING: Removing unreachable block (ram,0x000148d2fca8) */
/* WARNING: Removing unreachable block (ram,0x000148d2fcb7) */
/* WARNING: Removing unreachable block (ram,0x000148d2fcbb) */
/* WARNING: Removing unreachable block (ram,0x000148d2fccb) */
/* WARNING: Removing unreachable block (ram,0x000148d2fcd0) */
/* WARNING: Removing unreachable block (ram,0x000148d2fd31) */
/* WARNING: Removing unreachable block (ram,0x000148d2fd3d) */
/* WARNING: Removing unreachable block (ram,0x000148d2fd41) */
/* WARNING: Removing unreachable block (ram,0x000148d2fd46) */
/* WARNING: Removing unreachable block (ram,0x000148d2fd62) */
/* WARNING: Removing unreachable block (ram,0x000148d2fd59) */
/* WARNING: Removing unreachable block (ram,0x000148d2fcdf) */
/* WARNING: Removing unreachable block (ram,0x000148d2fce7) */
/* WARNING: Removing unreachable block (ram,0x000148d2fcf7) */
/* WARNING: Removing unreachable block (ram,0x000148d2fd05) */
/* WARNING: Removing unreachable block (ram,0x000148d2fd0a) */
/* WARNING: Removing unreachable block (ram,0x000148d2fdb7) */
/* WARNING: Removing unreachable block (ram,0x000148d2fd13) */
/* WARNING: Removing unreachable block (ram,0x000148d2fdae) */
/* WARNING: Removing unreachable block (ram,0x000148d2fd1c) */
/* WARNING: Removing unreachable block (ram,0x000148d2fda5) */
/* WARNING: Removing unreachable block (ram,0x000148d2fd25) */
/* WARNING: Removing unreachable block (ram,0x000148d2fdbe) */
/* WARNING: Removing unreachable block (ram,0x000148d2fdda) */
/* WARNING: Removing unreachable block (ram,0x000148d2fddf) */
/* WARNING: Enum "Type": Some values do not have unique names */

FWindowsMMDeviceCache * __thiscall
Audio::FWindowsMMDeviceCache::FWindowsMMDeviceCache(FWindowsMMDeviceCache *this,bool param_1)

{
  TComPtr<IMMDeviceEnumerator> *ppv;
  code *pcVar1;
  bool bVar2;
  HRESULT HVar3;
  int iVar4;
  FWindowsMMDeviceCache *pFVar5;
  int iVar6;
  
  (this->DeviceEnumerator).RawPointer = (IMMDeviceEnumerator *)0x0;
  ppv = &this->DeviceEnumerator;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioPlatformDeviceInfoCache__;
  (this->CacheMutationLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->Cache = 0;
  *(undefined8 *)&(this->Cache).field_0x8 = 0;
  *(undefined8 *)&(this->Cache).field_0x20 = 0;
  *(undefined4 *)&(this->Cache).field_0x28 = 0;
  *(undefined4 *)&(this->Cache).field_0x2c = 0x80;
  *(undefined4 *)&(this->Cache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Cache).field_0x34 = 0;
  *(undefined8 *)&(this->Cache).field_0x40 = 0;
  *(undefined4 *)&(this->Cache).field_0x48 = 0;
  this->DefaultCaptureId[0].ComparisonIndex = 0;
  this->DefaultCaptureId[0].Number = 0;
  this->DefaultCaptureId[1].ComparisonIndex = 0;
  this->DefaultCaptureId[1].Number = 0;
  this->DefaultCaptureId[2].ComparisonIndex = 0;
  this->DefaultCaptureId[2].Number = 0;
  this->DefaultRenderId[0].ComparisonIndex = 0;
  this->DefaultRenderId[0].Number = 0;
  this->DefaultRenderId[1].ComparisonIndex = 0;
  this->DefaultRenderId[1].Number = 0;
  this->DefaultRenderId[2].ComparisonIndex = 0;
  this->DefaultRenderId[2].Number = 0;
  this->bIsAggregateDeviceSupportEnabled = param_1;
  HVar3 = CoCreateInstance((IID *)&_GUID_bcde0395_e52f_467c_8e3d_c4579291692e,(LPUNKNOWN)0x0,1,
                           (IID *)&_GUID_a95664d2_9614_4f35_a746_de8db63617e6,&ppv->RawPointer);
  if (((HVar3 < 0) || (ppv->RawPointer == (IMMDeviceEnumerator *)0x0)) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8974508703872974759>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
                         ,0x59,
                         "(((HRESULT)(CoCreateInstance(__uuidof(MMDeviceEnumerator), 0, CLSCTX_INPROC_SERVER, __uuidof(**(&DeviceEnumerator)), IID_PPV_ARGS_Helper(&DeviceEnumerator)))) >= 0) && DeviceEnumerator"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FWindowsMMDeviceCache *)(*pcVar1)();
    return pFVar5;
  }
  iVar6 = 0;
  EnumerateEndpoints(this);
  if (ppv->RawPointer == (IMMDeviceEnumerator *)0x0) {
    if (2 < (byte)LogAudioEnumeration._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    }
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
    do {
      if ((ppv->RawPointer == (IMMDeviceEnumerator *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FWindowsMMDeviceCache *)(*pcVar1)();
        return pFVar5;
      }
      iVar4 = (**(code **)((longlong)*ppv->RawPointer + 0x20))(ppv->RawPointer,0,iVar6);
      if ((-1 < iVar4) && (3 < (byte)LogAudioEnumeration._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_FWindowsMMDevic_151cd4748,
                   (FLogCategoryBase *)&LogAudioEnumeration);
      }
      if ((ppv->RawPointer == (IMMDeviceEnumerator *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FWindowsMMDeviceCache *)(*pcVar1)();
        return pFVar5;
      }
      iVar4 = (**(code **)((longlong)*ppv->RawPointer + 0x20))(ppv->RawPointer,1,iVar6);
      if ((-1 < iVar4) && (3 < (byte)LogAudioEnumeration._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_FWindowsMMDevic_151cd4748,
                   (FLogCategoryBase *)&LogAudioEnumeration);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148d30d74

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FWindowsMMDeviceCache::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FWindowsMMDeviceCache::_vector_deleting_destructor__adjustor_8__
          (FWindowsMMDeviceCache *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FWindowsMMDeviceCache *)&this[-1].bIsAggregateDeviceSupportEnabled,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148d30d90

void * __thiscall
Audio::FWindowsMMDeviceCache::_scalar_deleting_destructor_(FWindowsMMDeviceCache *this,uint param_1)

{
  ~FWindowsMMDeviceCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d30dd0

void * __thiscall
Audio::IAudioPlatformDeviceInfoCache::_scalar_deleting_destructor_
          (IAudioPlatformDeviceInfoCache *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AudioClientErrorToFString @ 148d30e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl Audio::AudioClientErrorToFString(FString *__return_storage_ptr__,int param_1)

{
  wchar_t *pwVar1;
  undefined1 auStack_858 [32];
  FString local_838;
  FString local_828;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_858;
  if (param_1 < -0x7776fffe) {
    if (param_1 == -0x7776ffff) {
      pwVar1 = L"AUDCLNT_E_NOT_INITIALIZED";
    }
    else if (param_1 < -0x7ffbfeef) {
      if (param_1 == -0x7ffbfef0) {
        pwVar1 = L"CLASS_E_NOAGGREGATION";
      }
      else if (param_1 == -0x7fffbffe) {
        pwVar1 = L"E_NOINTERFACE";
      }
      else if (param_1 == -0x7fffbffd) {
        pwVar1 = L"E_POINTER";
      }
      else {
        if (param_1 != -0x7ffefef8) goto switchD_148d30f3c_caseD_8889000d;
        pwVar1 = L"RPC_E_DISCONNECTED";
      }
    }
    else if (param_1 == -0x7ffbfeac) {
      pwVar1 = L"REGDB_E_CLASSNOTREG";
    }
    else if (param_1 == -0x7ff8fff2) {
      pwVar1 = L"E_OUTOFMEMORY";
    }
    else {
      if (param_1 != -0x7ff8ffa9) goto switchD_148d30f3c_caseD_8889000d;
      pwVar1 = L"E_INVALIDARG";
    }
  }
  else if (param_1 < -0x1ffffdf4) {
    if (param_1 == -0x1ffffdf5) {
      pwVar1 = L"ERROR_NO_SUCH_DEVINST";
    }
    else {
      switch(param_1) {
      case -0x7776fffe:
        pwVar1 = L"AUDCLNT_E_ALREADY_INITIALIZED";
        break;
      case -0x7776fffd:
        pwVar1 = L"AUDCLNT_E_WRONG_ENDPOINT_TYPE";
        break;
      case -0x7776fffc:
        pwVar1 = L"AUDCLNT_E_DEVICE_INVALIDATED";
        break;
      case -0x7776fffb:
        pwVar1 = L"AUDCLNT_E_NOT_STOPPED";
        break;
      case -0x7776fffa:
        pwVar1 = L"AUDCLNT_E_BUFFER_TOO_LARGE";
        break;
      case -0x7776fff9:
        pwVar1 = L"AUDCLNT_E_OUT_OF_ORDER";
        break;
      case -0x7776fff8:
        pwVar1 = L"AUDCLNT_E_UNSUPPORTED_FORMAT";
        break;
      case -0x7776fff7:
        pwVar1 = L"AUDCLNT_E_INVALID_SIZE";
        break;
      case -0x7776fff6:
        pwVar1 = L"AUDCLNT_E_DEVICE_IN_USE";
        break;
      case -0x7776fff5:
        pwVar1 = L"AUDCLNT_E_BUFFER_OPERATION_PENDING";
        break;
      case -0x7776fff4:
        pwVar1 = L"AUDCLNT_E_THREAD_NOT_REGISTERED";
        break;
      default:
switchD_148d30f3c_caseD_8889000d:
        memset(local_818,0,0x800);
        pwVar1 = FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,param_1);
        ::FString::FString(&local_838,pwVar1);
        if (local_838.Data.ArrayNum < 2) {
          ::FString::PrintfImpl(&local_828,L"0x%x (UNKNOWN)");
          if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_838.Data.AllocatorInstance.Data);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_828.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_828.Data.ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = local_828.Data.ArrayMax;
          return __return_storage_ptr__;
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             local_838.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->Data).ArrayNum = local_838.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_838.Data.ArrayMax;
        return __return_storage_ptr__;
      case -0x7776fff2:
        pwVar1 = L"AUDCLNT_E_EXCLUSIVE_MODE_NOT_ALLOWED";
        break;
      case -0x7776fff1:
        pwVar1 = L"AUDCLNT_E_ENDPOINT_CREATE_FAILED";
        break;
      case -0x7776fff0:
        pwVar1 = L"AUDCLNT_E_SERVICE_NOT_RUNNING";
        break;
      case -0x7776ffef:
        pwVar1 = L"AUDCLNT_E_EVENTHANDLE_NOT_EXPECTED";
        break;
      case -0x7776ffee:
        pwVar1 = L"AUDCLNT_E_EXCLUSIVE_MODE_ONLY";
        break;
      case -0x7776ffed:
        pwVar1 = L"AUDCLNT_E_BUFDURATION_PERIOD_NOT_EQUAL";
        break;
      case -0x7776ffec:
        pwVar1 = L"AUDCLNT_E_EVENTHANDLE_NOT_SET";
        break;
      case -0x7776ffeb:
        pwVar1 = L"AUDCLNT_E_INCORRECT_BUFFER_SIZE";
        break;
      case -0x7776ffea:
        pwVar1 = L"AUDCLNT_E_BUFFER_SIZE_ERROR";
        break;
      case -0x7776ffe9:
        pwVar1 = L"AUDCLNT_E_CPUUSAGE_EXCEEDED";
        break;
      case -0x7776ffe8:
        pwVar1 = L"AUDCLNT_E_BUFFER_ERROR";
        break;
      case -0x7776ffe7:
        pwVar1 = L"AUDCLNT_E_BUFFER_SIZE_NOT_ALIGNED";
        break;
      case -0x7776ffe0:
        pwVar1 = L"AUDCLNT_E_INVALID_DEVICE_PERIOD";
        break;
      case -0x7776ffdf:
        pwVar1 = L"AUDCLNT_E_INVALID_STREAM_FLAG";
        break;
      case -0x7776ffde:
        pwVar1 = L"AUDCLNT_E_ENDPOINT_OFFLOAD_NOT_CAPABLE";
        break;
      case -0x7776ffdd:
        pwVar1 = L"AUDCLNT_E_OUT_OF_OFFLOAD_RESOURCES";
        break;
      case -0x7776ffdc:
        pwVar1 = L"AUDCLNT_E_OFFLOAD_MODE_ONLY";
        break;
      case -0x7776ffdb:
        pwVar1 = L"AUDCLNT_E_NONOFFLOAD_MODE_ONLY";
        break;
      case -0x7776ffda:
        pwVar1 = L"AUDCLNT_E_RESOURCES_INVALIDATED";
        break;
      case -0x7776ffd9:
        pwVar1 = L"AUDCLNT_E_RAW_MODE_UNSUPPORTED";
        break;
      case -0x7776ffd8:
        pwVar1 = L"AUDCLNT_E_ENGINE_PERIODICITY_LOCKED";
        break;
      case -0x7776ffd7:
        pwVar1 = L"AUDCLNT_E_ENGINE_FORMAT_LOCKED";
      }
    }
  }
  else if (param_1 == 0x8890001) {
    pwVar1 = L"AUDCLNT_S_BUFFER_EMPTY";
  }
  else if (param_1 == 0x8890002) {
    pwVar1 = L"AUDCLNT_S_THREAD_ALREADY_REGISTERED";
  }
  else {
    if (param_1 != 0x8890003) goto switchD_148d30f3c_caseD_8889000d;
    pwVar1 = L"AUDCLNT_S_POSITION_STALLED";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// ConvertWordToDeviceState @ 148d31630

EAudioDeviceState __cdecl Audio::ConvertWordToDeviceState(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  EAudioDeviceState EVar3;
  
  if (param_1 == 1) {
    return Active;
  }
  if (param_1 == 2) {
    return Disabled;
  }
  if (param_1 != 4) {
    if (param_1 == 8) {
      return Unplugged;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\ConversionHelpers.h"
                       ,0x1e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return NotPresent;
}

// IsAggregateDeviceSupportCVarEnabled @ 148d34c30

bool __cdecl Audio::WindowsMMCvarUtils::IsAggregateDeviceSupportCVarEnabled(void)

{
  return EnableAggregateAudioDevicesCVar != 0;
}

// ShouldIgnoreDeviceSwaps @ 148d385b0

bool __cdecl Audio::WindowsMMCvarUtils::ShouldIgnoreDeviceSwaps(void)

{
  return DisableDeviceSwapCVar != 0;
}

// ShouldLogDeviceSwaps @ 148d385d0

bool __cdecl Audio::WindowsMMCvarUtils::ShouldLogDeviceSwaps(void)

{
  return EnableDetailedWindowsDeviceLoggingCVar != 0;
}

// ToFString @ 148d38af0

FString * __cdecl
Audio::ToFString(FString *__return_storage_ptr__,
                TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *_Str;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Reserve(__return_storage_ptr__,param_1->ArrayNum * 0x12);
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_EAudioMixerChannel::Type_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    switch(*(undefined4 *)pFVar4) {
    case 0:
      _Str = L"FrontLeft";
      break;
    case 1:
      _Str = L"FrontRight";
      break;
    case 2:
      _Str = L"FrontCenter";
      break;
    case 3:
      _Str = L"LowFrequency";
      break;
    case 4:
      _Str = L"BackLeft";
      break;
    case 5:
      _Str = L"BackRight";
      break;
    case 6:
      _Str = L"FrontLeftOfCenter";
      break;
    case 7:
      _Str = L"FrontRightOfCenter";
      break;
    case 8:
      _Str = L"BackCenter";
      break;
    case 9:
      _Str = L"SideLeft";
      break;
    case 10:
      _Str = L"SideRight";
      break;
    case 0xb:
      _Str = L"TopCenter";
      break;
    case 0xc:
      _Str = L"TopFrontLeft";
      break;
    case 0xd:
      _Str = L"TopFrontCenter";
      break;
    case 0xe:
      _Str = L"TopFrontRight";
      break;
    case 0xf:
      _Str = L"TopBackLeft";
      break;
    case 0x10:
      _Str = L"TopBackCenter";
      break;
    case 0x11:
      _Str = L"TopBackRight";
      break;
    case 0x12:
      _Str = L"Unknown";
      break;
    default:
      _Str = L"UNSUPPORTED";
    }
    sVar3 = wcslen(_Str);
    ::FString::AppendChars(__return_storage_ptr__,_Str,(int)sVar3);
    ::FString::AppendChars(__return_storage_ptr__,L"|",1);
    pFVar4 = pFVar4 + 4;
  }
  return __return_storage_ptr__;
}

// ToFString @ 148d38cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl Audio::ToFString(FString *__return_storage_ptr__,_tagpropertykey *param_1)

{
  int iVar1;
  HRESULT HVar2;
  wchar_t *pwVar3;
  undefined1 auStack_a8 [32];
  WCHAR local_88 [56];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  iVar1 = memcmp(param_1,&PKEY_AudioEndpoint_PhysicalSpeakers,0x10);
  if (iVar1 == 0) {
    pwVar3 = L"PKEY_AudioEndpoint_PhysicalSpeakers";
  }
  else {
    iVar1 = memcmp(param_1,&PKEY_AudioEngine_DeviceFormat,0x10);
    if (iVar1 == 0) {
      pwVar3 = L"PKEY_AudioEngine_DeviceFormat";
    }
    else {
      iVar1 = memcmp(param_1,&PKEY_AudioEngine_OEMFormat,0x10);
      if (iVar1 == 0) {
        pwVar3 = L"PKEY_AudioEngine_OEMFormat";
      }
      else {
        iVar1 = memcmp(param_1,&PKEY_AudioEndpoint_Association,0x10);
        if (iVar1 == 0) {
          pwVar3 = L"PKEY_AudioEndpoint_Association";
        }
        else {
          iVar1 = memcmp(param_1,&PKEY_AudioEndpoint_ControlPanelPageProvider,0x10);
          if (iVar1 == 0) {
            pwVar3 = L"PKEY_AudioEndpoint_ControlPanelPageProvider";
          }
          else {
            iVar1 = memcmp(param_1,&PKEY_AudioEndpoint_Disable_SysFx,0x10);
            if (iVar1 == 0) {
              pwVar3 = L"PKEY_AudioEndpoint_Disable_SysFx";
            }
            else {
              iVar1 = memcmp(param_1,&PKEY_AudioEndpoint_FormFactor,0x10);
              if (iVar1 == 0) {
                pwVar3 = L"PKEY_AudioEndpoint_FormFactor";
              }
              else {
                iVar1 = memcmp(param_1,&PKEY_AudioEndpoint_FullRangeSpeakers,0x10);
                if (iVar1 == 0) {
                  pwVar3 = L"PKEY_AudioEndpoint_FullRangeSpeakers";
                }
                else {
                  iVar1 = memcmp(param_1,&PKEY_AudioEndpoint_GUID,0x10);
                  if (iVar1 == 0) {
                    pwVar3 = L"PKEY_AudioEndpoint_GUID";
                  }
                  else {
                    iVar1 = memcmp(param_1,&PKEY_AudioEndpoint_Supports_EventDriven_Mode,0x10);
                    if (iVar1 == 0) {
                      pwVar3 = L"PKEY_AudioEndpoint_Supports_EventDriven_Mode";
                    }
                    else {
                      HVar2 = PSStringFromPropertyKey((PROPERTYKEY *)param_1,local_88,0x32);
                      pwVar3 = local_88;
                      if (HVar2 < 0) {
                        pwVar3 = L"Unknown";
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ::FString::FString(__return_storage_ptr__,pwVar3);
  return __return_storage_ptr__;
}

// ToString @ 148d38ec0

wchar_t * __cdecl Audio::ToString(AudioSessionDisconnectReason param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case DisconnectReasonDeviceRemoval:
    return L"DisconnectReasonDeviceRemoval";
  case DisconnectReasonServerShutdown:
    return L"DisconnectReasonServerShutdown";
  case DisconnectReasonFormatChanged:
    return L"DisconnectReasonFormatChanged";
  case DisconnectReasonSessionLogoff:
    return L"DisconnectReasonSessionLogoff";
  case DisconnectReasonSessionDisconnected:
    return L"DisconnectReasonSessionDisconnected";
  case DisconnectReasonExclusiveModeOverride:
    return L"DisconnectReasonExclusiveModeOverride";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMStringUtils.cpp"
                     ,0x22,L"");
  if (!bVar2) {
    return L"Unknown";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// ToString @ 148d38f80

wchar_t * __cdecl Audio::ToString(EAudioDeviceRole param_1)

{
  if (param_1 == Console) {
    return L"Console";
  }
  if (param_1 != Multimedia) {
    if (param_1 != Communications) {
      return L"Unknown";
    }
    return L"Communications";
  }
  return L"Multimedia";
}

// ToString @ 148d38fc0

wchar_t * __cdecl Audio::ToString(EAudioDeviceState param_1)

{
  if (param_1 == Active) {
    return L"Active";
  }
  if (param_1 == Disabled) {
    return L"Disabled";
  }
  if (param_1 == NotPresent) {
    return L"NotPresent";
  }
  if (param_1 != Unplugged) {
    return L"Unknown";
  }
  return L"Unplugged";
}

// ToString @ 148d39010

wchar_t * __cdecl Audio::ToString(__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == eRender) {
    return L"eRender";
  }
  if (param_1 == eCapture) {
    return L"eCapture";
  }
  if (param_1 == eAll) {
    return L"eAll";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMStringUtils.cpp"
                     ,0x46,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"Unknown";
}

// ToString @ 148d39080

wchar_t * __cdecl Audio::ToString(__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == eConsole) {
    return L"eConsole";
  }
  if (param_1 == eMultimedia) {
    return L"eMultimedia";
  }
  if (param_1 == eCommunications) {
    return L"eCommunications";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMStringUtils.cpp"
                     ,0x34,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"Unknown";
}

// IMPLEMENT_MODULE_WindowsMMDeviceEnumeration @ 148d398c0

void __cdecl IMPLEMENT_MODULE_WindowsMMDeviceEnumeration(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableDeviceSwap'' @ 15040c430

void __cdecl _dynamic_atexit_destructor_for__CVarDisableDeviceSwap__(void)

{
  CVarDisableDeviceSwap._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableDeviceSwap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableAggregateAudioDevices'' @ 15040c450

void __cdecl _dynamic_atexit_destructor_for__CVarEnableAggregateAudioDevices__(void)

{
  CVarEnableAggregateAudioDevices._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableAggregateAudioDevices);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableDetailedWindowsDeviceLogging'' @ 15040c470

void __cdecl _dynamic_atexit_destructor_for__CVarEnableDetailedWindowsDeviceLogging__(void)

{
  CVarEnableDetailedWindowsDeviceLogging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableDetailedWindowsDeviceLogging);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioEnumeration'' @ 15040c490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioEnumeration__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioEnumeration);
  return;
}

