// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 324

// AnyAlgorithmFactory'' @ 140f89ca0

void __cdecl `dynamic_initializer_for_'Audio::FConvolutionFactory::AnyAlgorithmFactory__(void)

{
  ::FName::FName(&Audio::FConvolutionFactory::AnyAlgorithmFactory,L"AnyAlgorithmFactory");
  return;
}

// AnyAlgorithmFactory'' @ 140f89cc0

void __cdecl `dynamic_initializer_for_'Audio::FFFTFactory::AnyAlgorithmFactory__(void)

{
  ::FName::FName(&Audio::FFFTFactory::AnyAlgorithmFactory,L"AnyAlgorithmFactory");
  return;
}

// ListCs'' @ 140f89ce0

void __cdecl `dynamic_initializer_for_'Audio::FCheckedBufferState::ListCs__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&Audio::FCheckedBufferState::ListCs,4000);
  atexit(`dynamic_atexit_destructor_for_'Audio::FCheckedBufferState::ListCs__);
  return;
}

// `dynamic_initializer_for_'CVarAudioFloatArrayMathISPCEnabled'' @ 140f89d10

void __cdecl _dynamic_initializer_for__CVarAudioFloatArrayMathISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAudioFloatArrayMathISPCEnabled,L"au.FloatArrayMath.ISPC",
             &bAudio_FloatArrayMath_ISPC_Enabled,
             L"Whether to use ISPC optimizations in audio float array math operations",0);
  atexit(_dynamic_atexit_destructor_for__CVarAudioFloatArrayMathISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarDelayResetFadeLengthSamples'' @ 140f89d60

void __cdecl _dynamic_initializer_for__CVarDelayResetFadeLengthSamples__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDelayResetFadeLengthSamples,L"au.DSP.DelayResetFadeLengthSamples",
             &DelayResetFadeLengthSamplesCVar,
             L"Controls fade length (in samples) when clearing internal memory with ResetWithFade().\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayResetFadeLengthSamples__);
  return;
}

// `dynamic_initializer_for_'CVarFDelayInitialAllocationSeconds'' @ 140f89db0

void __cdecl _dynamic_initializer_for__CVarFDelayInitialAllocationSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFDelayInitialAllocationSeconds,L"au.DSP.InitialFDelayAllocationSeconds",
             &FDelayInitialAllocationSecondsCVar,
             L"Override the inital delay line allocation in seconds, it will grow up to InBufferLengthSec.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFDelayInitialAllocationSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarFFTMethod'' @ 140f89e00

void __cdecl _dynamic_initializer_for__CVarFFTMethod__(void)

{
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarFFTMethod,L"au.dsp.FFTMethod",&FFTMethodCVar,
             L"Determines whether we use an iterative FFT method or the DFT.\n0: Use Iterative FFT, 1:: Use DFT"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFFTMethod__);
  return;
}

// `dynamic_initializer_for_'CmdBufferDiagnostics'' @ 140f89e50

void __cdecl BufferDiagnosticsPrivate::_dynamic_initializer_for__CmdBufferDiagnostics__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = HandleDiagnosticsCmd;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x88))
                     (IConsoleManager::Singleton,L"au.debug.bufferdiagnostics",
                      L"Enables per buffer sample diagnostics (Nans/denorms/Infs)",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdBufferDiagnostics,pIVar5);
  CmdBufferDiagnostics._0_8_ = &___7FAutoConsoleCommandWithArgsAndOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__CmdBufferDiagnostics__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Audio_Dsp'' @ 140f89ff0

void __cdecl _dynamic_initializer_for___GCsvCategory_Audio_Dsp__(void)

{
  FString::operator=(&_GCsvCategory_Audio_Dsp.Name,L"Audio_Dsp");
  _GCsvCategory_Audio_Dsp.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_Audio_Dsp.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Audio_Dsp__);
  return;
}

// `scalar_deleting_destructor' @ 144499ff0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14449a040

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14449a280

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14449a2b0

void * __thiscall
FAutoConsoleCommandWithArgsAndOutputDevice::_scalar_deleting_destructor_
          (FAutoConsoleCommandWithArgsAndOutputDevice *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// BinarySearchBy<TArray<TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>,TSizedDefaultAllocator<32>_>,Audio::FBaseChannelFormatConverter::FChannelMixKey,TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>::FKeyForward,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_> @ 14449a6f0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>,TSizedDefaultAllocator<32>_>,Audio::FBaseChannelFormatConverter::FChannelMixKey,TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>::FKeyForward,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
          (TArray<TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>,TSizedDefaultAllocator<32>_>
           *param_1,FChannelMixKey *param_2,FKeyForward param_3,
          TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&> param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  uVar1 = param_1->ArrayNum;
  iVar7 = 0;
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    iVar8 = param_2->InputChannelIndex;
    uVar9 = uVar1;
    do {
      iVar3 = (uVar9 >> 1) + iVar7;
      lVar10 = (longlong)iVar3 * 0x1c;
      iVar2 = *(int *)(pFVar4 + lVar10);
      bVar11 = SBORROW4(iVar2,iVar8);
      iVar5 = iVar2 - iVar8;
      if (iVar2 == iVar8) {
        bVar11 = SBORROW4(*(int *)(pFVar4 + lVar10 + 4),param_2->OutputChannelIndex);
        iVar5 = *(int *)(pFVar4 + lVar10 + 4) - param_2->OutputChannelIndex;
      }
      if (bVar11 != iVar5 < 0) {
        iVar7 = iVar3 + (uVar9 & 1);
      }
      uVar6 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar6 != 0);
    if (iVar7 < (int)uVar1) {
      iVar8 = *(int *)(pFVar4 + (longlong)iVar7 * 0x1c);
      iVar3 = param_2->InputChannelIndex;
      bVar11 = SBORROW4(iVar3,iVar8);
      iVar2 = iVar3 - iVar8;
      if (iVar3 == iVar8) {
        bVar11 = SBORROW4(param_2->OutputChannelIndex,*(int *)(pFVar4 + (longlong)iVar7 * 0x1c + 4))
        ;
        iVar2 = param_2->OutputChannelIndex - *(int *)(pFVar4 + (longlong)iVar7 * 0x1c + 4);
      }
      iVar8 = -1;
      if (bVar11 == iVar2 < 0) {
        iVar8 = iVar7;
      }
      return iVar8;
    }
  }
  return -1;
}

// CreateConvertDeinterleave<1> @ 14449a7b0

TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> __cdecl
Audio::ConvertDeinterleavePrivate::CreateConvertDeinterleave<1>(FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<1,1> *pTVar3;
  TConvertDeinterleave<1,2> *pTVar4;
  TConvertDeinterleave<1,3> *pTVar5;
  TConvertDeinterleave<1,4> *pTVar6;
  TConvertDeinterleave<1,5> *pTVar7;
  TConvertDeinterleave<1,6> *pTVar8;
  TConvertDeinterleave<1,7> *pTVar9;
  TConvertDeinterleave<1,8> *pTVar10;
  TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> TVar11;
  FConvertDeinterleaveParams *in_RDX;
  
  switch(in_RDX->NumOutputChannels) {
  case 1:
    pTVar3 = ::operator_new(8);
    if (pTVar3 != (TConvertDeinterleave<1,1> *)0x0) {
      pTVar3 = TConvertDeinterleave<1,1>::TConvertDeinterleave<1,1>(pTVar3,in_RDX);
      *(TConvertDeinterleave<1,1> **)param_1 = pTVar3;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 2:
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 != (TConvertDeinterleave<1,2> *)0x0) {
      pTVar4 = TConvertDeinterleave<1,2>::TConvertDeinterleave<1,2>(pTVar4,in_RDX);
      *(TConvertDeinterleave<1,2> **)param_1 = pTVar4;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 3:
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 != (TConvertDeinterleave<1,3> *)0x0) {
      pTVar5 = TConvertDeinterleave<1,3>::TConvertDeinterleave<1,3>(pTVar5,in_RDX);
      *(TConvertDeinterleave<1,3> **)param_1 = pTVar5;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 4:
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TConvertDeinterleave<1,4> *)0x0) {
      pTVar6 = TConvertDeinterleave<1,4>::TConvertDeinterleave<1,4>(pTVar6,in_RDX);
      *(TConvertDeinterleave<1,4> **)param_1 = pTVar6;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 5:
    pTVar7 = ::operator_new(0x18);
    if (pTVar7 != (TConvertDeinterleave<1,5> *)0x0) {
      pTVar7 = TConvertDeinterleave<1,5>::TConvertDeinterleave<1,5>(pTVar7,in_RDX);
      *(TConvertDeinterleave<1,5> **)param_1 = pTVar7;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 6:
    pTVar8 = ::operator_new(0x18);
    if (pTVar8 != (TConvertDeinterleave<1,6> *)0x0) {
      pTVar8 = TConvertDeinterleave<1,6>::TConvertDeinterleave<1,6>(pTVar8,in_RDX);
      *(TConvertDeinterleave<1,6> **)param_1 = pTVar8;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 7:
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TConvertDeinterleave<1,7> *)0x0) {
      pTVar9 = TConvertDeinterleave<1,7>::TConvertDeinterleave<1,7>(pTVar9,in_RDX);
      *(TConvertDeinterleave<1,7> **)param_1 = pTVar9;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 8:
    pTVar10 = ::operator_new(0x18);
    if (pTVar10 != (TConvertDeinterleave<1,8> *)0x0) {
      pTVar10 = TConvertDeinterleave<1,8>::TConvertDeinterleave<1,8>(pTVar10,in_RDX);
      *(TConvertDeinterleave<1,8> **)param_1 = pTVar10;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0xd4,L"Unsupported output channel count: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar11.Ptr = (IConvertDeinterleave *)(*pcVar1)();
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             TVar11.Ptr;
    }
  }
  param_1->NumInputChannels = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
         (IConvertDeinterleave *)param_1;
}

// CreateConvertDeinterleave<2> @ 14449a9c0

TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> __cdecl
Audio::ConvertDeinterleavePrivate::CreateConvertDeinterleave<2>(FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<2,1> *pTVar3;
  TConvertDeinterleave<2,2> *pTVar4;
  TConvertDeinterleave<2,3> *pTVar5;
  TConvertDeinterleave<2,4> *pTVar6;
  TConvertDeinterleave<2,5> *pTVar7;
  TConvertDeinterleave<2,6> *pTVar8;
  TConvertDeinterleave<2,7> *pTVar9;
  TConvertDeinterleave<2,8> *pTVar10;
  TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> TVar11;
  FConvertDeinterleaveParams *in_RDX;
  
  switch(in_RDX->NumOutputChannels) {
  case 1:
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 != (TConvertDeinterleave<2,1> *)0x0) {
      pTVar3 = TConvertDeinterleave<2,1>::TConvertDeinterleave<2,1>(pTVar3,in_RDX);
      *(TConvertDeinterleave<2,1> **)param_1 = pTVar3;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 2:
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 != (TConvertDeinterleave<2,2> *)0x0) {
      pTVar4 = TConvertDeinterleave<2,2>::TConvertDeinterleave<2,2>(pTVar4,in_RDX);
      *(TConvertDeinterleave<2,2> **)param_1 = pTVar4;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 3:
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 != (TConvertDeinterleave<2,3> *)0x0) {
      pTVar5 = TConvertDeinterleave<2,3>::TConvertDeinterleave<2,3>(pTVar5,in_RDX);
      *(TConvertDeinterleave<2,3> **)param_1 = pTVar5;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 4:
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TConvertDeinterleave<2,4> *)0x0) {
      pTVar6 = TConvertDeinterleave<2,4>::TConvertDeinterleave<2,4>(pTVar6,in_RDX);
      *(TConvertDeinterleave<2,4> **)param_1 = pTVar6;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 5:
    pTVar7 = ::operator_new(0x18);
    if (pTVar7 != (TConvertDeinterleave<2,5> *)0x0) {
      pTVar7 = TConvertDeinterleave<2,5>::TConvertDeinterleave<2,5>(pTVar7,in_RDX);
      *(TConvertDeinterleave<2,5> **)param_1 = pTVar7;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 6:
    pTVar8 = ::operator_new(0x18);
    if (pTVar8 != (TConvertDeinterleave<2,6> *)0x0) {
      pTVar8 = TConvertDeinterleave<2,6>::TConvertDeinterleave<2,6>(pTVar8,in_RDX);
      *(TConvertDeinterleave<2,6> **)param_1 = pTVar8;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 7:
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TConvertDeinterleave<2,7> *)0x0) {
      pTVar9 = TConvertDeinterleave<2,7>::TConvertDeinterleave<2,7>(pTVar9,in_RDX);
      *(TConvertDeinterleave<2,7> **)param_1 = pTVar9;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 8:
    pTVar10 = ::operator_new(0x18);
    if (pTVar10 != (TConvertDeinterleave<2,8> *)0x0) {
      pTVar10 = TConvertDeinterleave<2,8>::TConvertDeinterleave<2,8>(pTVar10,in_RDX);
      *(TConvertDeinterleave<2,8> **)param_1 = pTVar10;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0xd4,L"Unsupported output channel count: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar11.Ptr = (IConvertDeinterleave *)(*pcVar1)();
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             TVar11.Ptr;
    }
  }
  param_1->NumInputChannels = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
         (IConvertDeinterleave *)param_1;
}

// CreateConvertDeinterleave<3> @ 14449abd0

TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> __cdecl
Audio::ConvertDeinterleavePrivate::CreateConvertDeinterleave<3>(FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<3,1> *pTVar3;
  TConvertDeinterleave<3,2> *pTVar4;
  TConvertDeinterleave<3,3> *pTVar5;
  TConvertDeinterleave<3,4> *pTVar6;
  TConvertDeinterleave<3,5> *pTVar7;
  TConvertDeinterleave<3,6> *pTVar8;
  TConvertDeinterleave<3,7> *pTVar9;
  TConvertDeinterleave<3,8> *pTVar10;
  TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> TVar11;
  FConvertDeinterleaveParams *in_RDX;
  
  switch(in_RDX->NumOutputChannels) {
  case 1:
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 != (TConvertDeinterleave<3,1> *)0x0) {
      pTVar3 = TConvertDeinterleave<3,1>::TConvertDeinterleave<3,1>(pTVar3,in_RDX);
      *(TConvertDeinterleave<3,1> **)param_1 = pTVar3;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 2:
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 != (TConvertDeinterleave<3,2> *)0x0) {
      pTVar4 = TConvertDeinterleave<3,2>::TConvertDeinterleave<3,2>(pTVar4,in_RDX);
      *(TConvertDeinterleave<3,2> **)param_1 = pTVar4;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 3:
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 != (TConvertDeinterleave<3,3> *)0x0) {
      pTVar5 = TConvertDeinterleave<3,3>::TConvertDeinterleave<3,3>(pTVar5,in_RDX);
      *(TConvertDeinterleave<3,3> **)param_1 = pTVar5;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 4:
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TConvertDeinterleave<3,4> *)0x0) {
      pTVar6 = TConvertDeinterleave<3,4>::TConvertDeinterleave<3,4>(pTVar6,in_RDX);
      *(TConvertDeinterleave<3,4> **)param_1 = pTVar6;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 5:
    pTVar7 = ::operator_new(0x18);
    if (pTVar7 != (TConvertDeinterleave<3,5> *)0x0) {
      pTVar7 = TConvertDeinterleave<3,5>::TConvertDeinterleave<3,5>(pTVar7,in_RDX);
      *(TConvertDeinterleave<3,5> **)param_1 = pTVar7;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 6:
    pTVar8 = ::operator_new(0x18);
    if (pTVar8 != (TConvertDeinterleave<3,6> *)0x0) {
      pTVar8 = TConvertDeinterleave<3,6>::TConvertDeinterleave<3,6>(pTVar8,in_RDX);
      *(TConvertDeinterleave<3,6> **)param_1 = pTVar8;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 7:
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TConvertDeinterleave<3,7> *)0x0) {
      pTVar9 = TConvertDeinterleave<3,7>::TConvertDeinterleave<3,7>(pTVar9,in_RDX);
      *(TConvertDeinterleave<3,7> **)param_1 = pTVar9;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 8:
    pTVar10 = ::operator_new(0x18);
    if (pTVar10 != (TConvertDeinterleave<3,8> *)0x0) {
      pTVar10 = TConvertDeinterleave<3,8>::TConvertDeinterleave<3,8>(pTVar10,in_RDX);
      *(TConvertDeinterleave<3,8> **)param_1 = pTVar10;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0xd4,L"Unsupported output channel count: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar11.Ptr = (IConvertDeinterleave *)(*pcVar1)();
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             TVar11.Ptr;
    }
  }
  param_1->NumInputChannels = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
         (IConvertDeinterleave *)param_1;
}

// CreateConvertDeinterleave<4> @ 14449ade0

TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> __cdecl
Audio::ConvertDeinterleavePrivate::CreateConvertDeinterleave<4>(FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<4,1> *pTVar3;
  TConvertDeinterleave<4,2> *pTVar4;
  TConvertDeinterleave<4,3> *pTVar5;
  TConvertDeinterleave<4,4> *pTVar6;
  TConvertDeinterleave<4,5> *pTVar7;
  TConvertDeinterleave<4,6> *pTVar8;
  TConvertDeinterleave<4,7> *pTVar9;
  TConvertDeinterleave<4,8> *pTVar10;
  TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> TVar11;
  FConvertDeinterleaveParams *in_RDX;
  
  switch(in_RDX->NumOutputChannels) {
  case 1:
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 != (TConvertDeinterleave<4,1> *)0x0) {
      pTVar3 = TConvertDeinterleave<4,1>::TConvertDeinterleave<4,1>(pTVar3,in_RDX);
      *(TConvertDeinterleave<4,1> **)param_1 = pTVar3;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 2:
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 != (TConvertDeinterleave<4,2> *)0x0) {
      pTVar4 = TConvertDeinterleave<4,2>::TConvertDeinterleave<4,2>(pTVar4,in_RDX);
      *(TConvertDeinterleave<4,2> **)param_1 = pTVar4;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 3:
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 != (TConvertDeinterleave<4,3> *)0x0) {
      pTVar5 = TConvertDeinterleave<4,3>::TConvertDeinterleave<4,3>(pTVar5,in_RDX);
      *(TConvertDeinterleave<4,3> **)param_1 = pTVar5;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 4:
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TConvertDeinterleave<4,4> *)0x0) {
      pTVar6 = TConvertDeinterleave<4,4>::TConvertDeinterleave<4,4>(pTVar6,in_RDX);
      *(TConvertDeinterleave<4,4> **)param_1 = pTVar6;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 5:
    pTVar7 = ::operator_new(0x18);
    if (pTVar7 != (TConvertDeinterleave<4,5> *)0x0) {
      pTVar7 = TConvertDeinterleave<4,5>::TConvertDeinterleave<4,5>(pTVar7,in_RDX);
      *(TConvertDeinterleave<4,5> **)param_1 = pTVar7;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 6:
    pTVar8 = ::operator_new(0x18);
    if (pTVar8 != (TConvertDeinterleave<4,6> *)0x0) {
      pTVar8 = TConvertDeinterleave<4,6>::TConvertDeinterleave<4,6>(pTVar8,in_RDX);
      *(TConvertDeinterleave<4,6> **)param_1 = pTVar8;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 7:
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TConvertDeinterleave<4,7> *)0x0) {
      pTVar9 = TConvertDeinterleave<4,7>::TConvertDeinterleave<4,7>(pTVar9,in_RDX);
      *(TConvertDeinterleave<4,7> **)param_1 = pTVar9;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 8:
    pTVar10 = ::operator_new(0x18);
    if (pTVar10 != (TConvertDeinterleave<4,8> *)0x0) {
      pTVar10 = TConvertDeinterleave<4,8>::TConvertDeinterleave<4,8>(pTVar10,in_RDX);
      *(TConvertDeinterleave<4,8> **)param_1 = pTVar10;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0xd4,L"Unsupported output channel count: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar11.Ptr = (IConvertDeinterleave *)(*pcVar1)();
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             TVar11.Ptr;
    }
  }
  param_1->NumInputChannels = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
         (IConvertDeinterleave *)param_1;
}

// CreateConvertDeinterleave<5> @ 14449aff0

TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> __cdecl
Audio::ConvertDeinterleavePrivate::CreateConvertDeinterleave<5>(FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<5,1> *pTVar3;
  TConvertDeinterleave<5,2> *pTVar4;
  TConvertDeinterleave<5,3> *pTVar5;
  TConvertDeinterleave<5,4> *pTVar6;
  TConvertDeinterleave<5,5> *pTVar7;
  TConvertDeinterleave<5,6> *pTVar8;
  TConvertDeinterleave<5,7> *pTVar9;
  TConvertDeinterleave<5,8> *pTVar10;
  TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> TVar11;
  FConvertDeinterleaveParams *in_RDX;
  
  switch(in_RDX->NumOutputChannels) {
  case 1:
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 != (TConvertDeinterleave<5,1> *)0x0) {
      pTVar3 = TConvertDeinterleave<5,1>::TConvertDeinterleave<5,1>(pTVar3,in_RDX);
      *(TConvertDeinterleave<5,1> **)param_1 = pTVar3;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 2:
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 != (TConvertDeinterleave<5,2> *)0x0) {
      pTVar4 = TConvertDeinterleave<5,2>::TConvertDeinterleave<5,2>(pTVar4,in_RDX);
      *(TConvertDeinterleave<5,2> **)param_1 = pTVar4;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 3:
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 != (TConvertDeinterleave<5,3> *)0x0) {
      pTVar5 = TConvertDeinterleave<5,3>::TConvertDeinterleave<5,3>(pTVar5,in_RDX);
      *(TConvertDeinterleave<5,3> **)param_1 = pTVar5;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 4:
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TConvertDeinterleave<5,4> *)0x0) {
      pTVar6 = TConvertDeinterleave<5,4>::TConvertDeinterleave<5,4>(pTVar6,in_RDX);
      *(TConvertDeinterleave<5,4> **)param_1 = pTVar6;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 5:
    pTVar7 = ::operator_new(0x18);
    if (pTVar7 != (TConvertDeinterleave<5,5> *)0x0) {
      pTVar7 = TConvertDeinterleave<5,5>::TConvertDeinterleave<5,5>(pTVar7,in_RDX);
      *(TConvertDeinterleave<5,5> **)param_1 = pTVar7;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 6:
    pTVar8 = ::operator_new(0x18);
    if (pTVar8 != (TConvertDeinterleave<5,6> *)0x0) {
      pTVar8 = TConvertDeinterleave<5,6>::TConvertDeinterleave<5,6>(pTVar8,in_RDX);
      *(TConvertDeinterleave<5,6> **)param_1 = pTVar8;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 7:
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TConvertDeinterleave<5,7> *)0x0) {
      pTVar9 = TConvertDeinterleave<5,7>::TConvertDeinterleave<5,7>(pTVar9,in_RDX);
      *(TConvertDeinterleave<5,7> **)param_1 = pTVar9;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 8:
    pTVar10 = ::operator_new(0x18);
    if (pTVar10 != (TConvertDeinterleave<5,8> *)0x0) {
      pTVar10 = TConvertDeinterleave<5,8>::TConvertDeinterleave<5,8>(pTVar10,in_RDX);
      *(TConvertDeinterleave<5,8> **)param_1 = pTVar10;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0xd4,L"Unsupported output channel count: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar11.Ptr = (IConvertDeinterleave *)(*pcVar1)();
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             TVar11.Ptr;
    }
  }
  param_1->NumInputChannels = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
         (IConvertDeinterleave *)param_1;
}

// CreateConvertDeinterleave<6> @ 14449b200

TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> __cdecl
Audio::ConvertDeinterleavePrivate::CreateConvertDeinterleave<6>(FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<6,1> *pTVar3;
  TConvertDeinterleave<6,2> *pTVar4;
  TConvertDeinterleave<6,3> *pTVar5;
  TConvertDeinterleave<6,4> *pTVar6;
  TConvertDeinterleave<6,5> *pTVar7;
  TConvertDeinterleave<6,6> *pTVar8;
  TConvertDeinterleave<6,7> *pTVar9;
  TConvertDeinterleave<6,8> *pTVar10;
  TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> TVar11;
  FConvertDeinterleaveParams *in_RDX;
  
  switch(in_RDX->NumOutputChannels) {
  case 1:
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 != (TConvertDeinterleave<6,1> *)0x0) {
      pTVar3 = TConvertDeinterleave<6,1>::TConvertDeinterleave<6,1>(pTVar3,in_RDX);
      *(TConvertDeinterleave<6,1> **)param_1 = pTVar3;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 2:
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 != (TConvertDeinterleave<6,2> *)0x0) {
      pTVar4 = TConvertDeinterleave<6,2>::TConvertDeinterleave<6,2>(pTVar4,in_RDX);
      *(TConvertDeinterleave<6,2> **)param_1 = pTVar4;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 3:
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 != (TConvertDeinterleave<6,3> *)0x0) {
      pTVar5 = TConvertDeinterleave<6,3>::TConvertDeinterleave<6,3>(pTVar5,in_RDX);
      *(TConvertDeinterleave<6,3> **)param_1 = pTVar5;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 4:
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TConvertDeinterleave<6,4> *)0x0) {
      pTVar6 = TConvertDeinterleave<6,4>::TConvertDeinterleave<6,4>(pTVar6,in_RDX);
      *(TConvertDeinterleave<6,4> **)param_1 = pTVar6;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 5:
    pTVar7 = ::operator_new(0x18);
    if (pTVar7 != (TConvertDeinterleave<6,5> *)0x0) {
      pTVar7 = TConvertDeinterleave<6,5>::TConvertDeinterleave<6,5>(pTVar7,in_RDX);
      *(TConvertDeinterleave<6,5> **)param_1 = pTVar7;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 6:
    pTVar8 = ::operator_new(0x18);
    if (pTVar8 != (TConvertDeinterleave<6,6> *)0x0) {
      pTVar8 = TConvertDeinterleave<6,6>::TConvertDeinterleave<6,6>(pTVar8,in_RDX);
      *(TConvertDeinterleave<6,6> **)param_1 = pTVar8;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 7:
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TConvertDeinterleave<6,7> *)0x0) {
      pTVar9 = TConvertDeinterleave<6,7>::TConvertDeinterleave<6,7>(pTVar9,in_RDX);
      *(TConvertDeinterleave<6,7> **)param_1 = pTVar9;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 8:
    pTVar10 = ::operator_new(0x18);
    if (pTVar10 != (TConvertDeinterleave<6,8> *)0x0) {
      pTVar10 = TConvertDeinterleave<6,8>::TConvertDeinterleave<6,8>(pTVar10,in_RDX);
      *(TConvertDeinterleave<6,8> **)param_1 = pTVar10;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0xd4,L"Unsupported output channel count: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar11.Ptr = (IConvertDeinterleave *)(*pcVar1)();
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             TVar11.Ptr;
    }
  }
  param_1->NumInputChannels = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
         (IConvertDeinterleave *)param_1;
}

// CreateConvertDeinterleave<7> @ 14449b410

TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> __cdecl
Audio::ConvertDeinterleavePrivate::CreateConvertDeinterleave<7>(FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<7,1> *pTVar3;
  TConvertDeinterleave<7,2> *pTVar4;
  TConvertDeinterleave<7,3> *pTVar5;
  TConvertDeinterleave<7,4> *pTVar6;
  TConvertDeinterleave<7,5> *pTVar7;
  TConvertDeinterleave<7,6> *pTVar8;
  TConvertDeinterleave<7,7> *pTVar9;
  TConvertDeinterleave<7,8> *pTVar10;
  TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> TVar11;
  FConvertDeinterleaveParams *in_RDX;
  
  switch(in_RDX->NumOutputChannels) {
  case 1:
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 != (TConvertDeinterleave<7,1> *)0x0) {
      pTVar3 = TConvertDeinterleave<7,1>::TConvertDeinterleave<7,1>(pTVar3,in_RDX);
      *(TConvertDeinterleave<7,1> **)param_1 = pTVar3;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 2:
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 != (TConvertDeinterleave<7,2> *)0x0) {
      pTVar4 = TConvertDeinterleave<7,2>::TConvertDeinterleave<7,2>(pTVar4,in_RDX);
      *(TConvertDeinterleave<7,2> **)param_1 = pTVar4;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 3:
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 != (TConvertDeinterleave<7,3> *)0x0) {
      pTVar5 = TConvertDeinterleave<7,3>::TConvertDeinterleave<7,3>(pTVar5,in_RDX);
      *(TConvertDeinterleave<7,3> **)param_1 = pTVar5;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 4:
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TConvertDeinterleave<7,4> *)0x0) {
      pTVar6 = TConvertDeinterleave<7,4>::TConvertDeinterleave<7,4>(pTVar6,in_RDX);
      *(TConvertDeinterleave<7,4> **)param_1 = pTVar6;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 5:
    pTVar7 = ::operator_new(0x18);
    if (pTVar7 != (TConvertDeinterleave<7,5> *)0x0) {
      pTVar7 = TConvertDeinterleave<7,5>::TConvertDeinterleave<7,5>(pTVar7,in_RDX);
      *(TConvertDeinterleave<7,5> **)param_1 = pTVar7;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 6:
    pTVar8 = ::operator_new(0x18);
    if (pTVar8 != (TConvertDeinterleave<7,6> *)0x0) {
      pTVar8 = TConvertDeinterleave<7,6>::TConvertDeinterleave<7,6>(pTVar8,in_RDX);
      *(TConvertDeinterleave<7,6> **)param_1 = pTVar8;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 7:
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TConvertDeinterleave<7,7> *)0x0) {
      pTVar9 = TConvertDeinterleave<7,7>::TConvertDeinterleave<7,7>(pTVar9,in_RDX);
      *(TConvertDeinterleave<7,7> **)param_1 = pTVar9;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 8:
    pTVar10 = ::operator_new(0x18);
    if (pTVar10 != (TConvertDeinterleave<7,8> *)0x0) {
      pTVar10 = TConvertDeinterleave<7,8>::TConvertDeinterleave<7,8>(pTVar10,in_RDX);
      *(TConvertDeinterleave<7,8> **)param_1 = pTVar10;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0xd4,L"Unsupported output channel count: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar11.Ptr = (IConvertDeinterleave *)(*pcVar1)();
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             TVar11.Ptr;
    }
  }
  param_1->NumInputChannels = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
         (IConvertDeinterleave *)param_1;
}

// CreateConvertDeinterleave<8> @ 14449b620

TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> __cdecl
Audio::ConvertDeinterleavePrivate::CreateConvertDeinterleave<8>(FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<8,1> *pTVar3;
  TConvertDeinterleave<8,2> *pTVar4;
  TConvertDeinterleave<8,3> *pTVar5;
  TConvertDeinterleave<8,4> *pTVar6;
  TConvertDeinterleave<8,5> *pTVar7;
  TConvertDeinterleave<8,6> *pTVar8;
  TConvertDeinterleave<8,7> *pTVar9;
  TConvertDeinterleave<8,8> *pTVar10;
  TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> TVar11;
  FConvertDeinterleaveParams *in_RDX;
  
  switch(in_RDX->NumOutputChannels) {
  case 1:
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 != (TConvertDeinterleave<8,1> *)0x0) {
      pTVar3 = TConvertDeinterleave<8,1>::TConvertDeinterleave<8,1>(pTVar3,in_RDX);
      *(TConvertDeinterleave<8,1> **)param_1 = pTVar3;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 2:
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 != (TConvertDeinterleave<8,2> *)0x0) {
      pTVar4 = TConvertDeinterleave<8,2>::TConvertDeinterleave<8,2>(pTVar4,in_RDX);
      *(TConvertDeinterleave<8,2> **)param_1 = pTVar4;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 3:
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 != (TConvertDeinterleave<8,3> *)0x0) {
      pTVar5 = TConvertDeinterleave<8,3>::TConvertDeinterleave<8,3>(pTVar5,in_RDX);
      *(TConvertDeinterleave<8,3> **)param_1 = pTVar5;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 4:
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TConvertDeinterleave<8,4> *)0x0) {
      pTVar6 = TConvertDeinterleave<8,4>::TConvertDeinterleave<8,4>(pTVar6,in_RDX);
      *(TConvertDeinterleave<8,4> **)param_1 = pTVar6;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 5:
    pTVar7 = ::operator_new(0x18);
    if (pTVar7 != (TConvertDeinterleave<8,5> *)0x0) {
      pTVar7 = TConvertDeinterleave<8,5>::TConvertDeinterleave<8,5>(pTVar7,in_RDX);
      *(TConvertDeinterleave<8,5> **)param_1 = pTVar7;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 6:
    pTVar8 = ::operator_new(0x18);
    if (pTVar8 != (TConvertDeinterleave<8,6> *)0x0) {
      pTVar8 = TConvertDeinterleave<8,6>::TConvertDeinterleave<8,6>(pTVar8,in_RDX);
      *(TConvertDeinterleave<8,6> **)param_1 = pTVar8;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 7:
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TConvertDeinterleave<8,7> *)0x0) {
      pTVar9 = TConvertDeinterleave<8,7>::TConvertDeinterleave<8,7>(pTVar9,in_RDX);
      *(TConvertDeinterleave<8,7> **)param_1 = pTVar9;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  case 8:
    pTVar10 = ::operator_new(0x18);
    if (pTVar10 != (TConvertDeinterleave<8,8> *)0x0) {
      pTVar10 = TConvertDeinterleave<8,8>::TConvertDeinterleave<8,8>(pTVar10,in_RDX);
      *(TConvertDeinterleave<8,8> **)param_1 = pTVar10;
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             (IConvertDeinterleave *)param_1;
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0xd4,L"Unsupported output channel count: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar11.Ptr = (IConvertDeinterleave *)(*pcVar1)();
      return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
             TVar11.Ptr;
    }
  }
  param_1->NumInputChannels = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
         (IConvertDeinterleave *)param_1;
}

// DefaultConstructItems<Audio::FStateVariableFilter::FFilterState,int> @ 14449b830

void __cdecl
DefaultConstructItems<Audio::FStateVariableFilter::FFilterState,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<Audio::FDynamicStateVariableFilter::FSVFState,int> @ 14449b860

void __cdecl
DefaultConstructItems<Audio::FDynamicStateVariableFilter::FSVFState,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::FStronglyConnectedComponent,int> @ 14449b890

void __cdecl
DefaultConstructItems<Audio::FStronglyConnectedComponent,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::FBiquadFilter,int> @ 14449b8c0

void __cdecl DefaultConstructItems<Audio::FBiquadFilter,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = &___7FBiquadFilter_Audio__6B_;
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x1c) = 1;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FContiguousSparse2DKernelTransform::FRow,int> @ 14449b900

void __cdecl
DestructItems<Audio::FContiguousSparse2DKernelTransform::FRow,int>(FRow *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->OffsetValues).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FRow *)(&param_1->OffsetValues + 1);
  }
  return;
}

// DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int> @ 14449b940

void __cdecl
DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TFunction<void___cdecl(unsigned_int)>,int> @ 14449b980

void __cdecl
DestructItems<TFunction<void___cdecl(unsigned_int)>,int>
          (TFunction<void___cdecl(unsigned_int)> *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FBiquadFilter,int> @ 14449b9d0

void __cdecl DestructItems<Audio::FBiquadFilter,int>(FBiquadFilter *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FBiquadFilter_Audio__6B_;
    if (param_1->Biquad != (FBiquadCoeff *)0x0) {
      operator_delete__(param_1->Biquad);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FDelay,int> @ 14449ba20

void __cdecl DestructItems<Audio::FDelay,int>(FDelay *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FDelay_Audio__6B_;
    pFVar1 = (param_1->AudioBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FIntegerDelay,int> @ 14449ba70

void __cdecl DestructItems<Audio::FIntegerDelay,int>(FIntegerDelay *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    Audio::FIntegerDelay::~FIntegerDelay(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// FindByPredicate<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,`BufferDiagnosticsPrivate::FindArg'::__l3::<lambda_1>_> @ 14449bde0

FString * __cdecl
AlgoImpl::
FindByPredicate<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,_BufferDiagnosticsPrivate::FindArg_::__l3::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *this;
  undefined1 local_res8 [8];
  size_t sVar4;
  
  iVar1 = param_1->ArrayNum;
  this = (param_1->AllocatorInstance).Data;
  pFVar5 = this + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar5) {
      return (FString *)0x0;
    }
    if (param_2.InName == (wchar_t *)0x0) {
      iVar3 = 0;
    }
    else {
      sVar4 = wcslen(param_2.InName);
      iVar3 = (int)sVar4;
    }
    bVar2 = ::FString::StartsWith((FString *)this,param_2.InName,iVar3,IgnoreCase);
    if (bVar2) break;
    this = this + 0x10;
  }
  return (FString *)this;
}

// HeapSortInternal<Audio::IConvolutionAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IConvolutionAlgorithmFactory_*,`Audio::FConvolutionFactory::NewConvolutionAlgorithm'::__l2::<lambda_4>_>_> @ 14449bf30

void __cdecl
AlgoImpl::
HeapSortInternal<Audio::IConvolutionAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IConvolutionAlgorithmFactory_*,_Audio::FConvolutionFactory::NewConvolutionAlgorithm_::__l2::<lambda_4>_>_>
          (IConvolutionAlgorithmFactory **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::IConvolutionAlgorithmFactory_*,_public:_static_class_TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>___cdecl_Audio::FConvolutionFactory::NewConvolutionAlgorithm(Audio::FConvolutionSettings_const_&,FName_const_&)_::_2_::<lambda_4>_>
          param_4)

{
  IConvolutionAlgorithmFactory *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar8 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_14449c073:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar8 = 0;
            pIVar1 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = pIVar1;
            if (1 < iVar6) {
              do {
                iVar9 = iVar8 * 2;
                iVar5 = iVar9 + 1;
                if (iVar9 + 2 < iVar6) {
                  pIVar1 = param_1[iVar5];
                  cVar4 = (**(code **)((longlong)*param_1[(longlong)iVar9 + 2] + 0x10))();
                  if ((cVar4 == '\0') ||
                     (cVar4 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1), cVar4 != '\0')) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    iVar5 = iVar9;
                  }
                  iVar5 = iVar5 + 1;
                }
                pIVar1 = param_1[iVar5];
                cVar4 = (**(code **)((longlong)*param_1[iVar8] + 0x10))();
                if ((cVar4 == '\0') ||
                   (cVar4 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1), cVar4 != '\0')) break;
                pIVar1 = param_1[iVar8];
                param_1[iVar8] = param_1[iVar5];
                param_1[iVar5] = pIVar1;
                iVar8 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar8 + -2;
      iVar8 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      pIVar1 = param_1[iVar7];
      cVar4 = (**(code **)((longlong)*param_1[(longlong)iVar6 + 2] + 0x10))();
      if ((cVar4 == '\0') ||
         (cVar4 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1), cVar4 != '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    pIVar1 = param_1[iVar7];
    cVar4 = (**(code **)((longlong)*param_1[iVar5] + 0x10))();
    if ((cVar4 == '\0') || (cVar4 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1), cVar4 != '\0'))
    goto LAB_14449c073;
    pIVar1 = param_1[iVar5];
    param_1[iVar5] = param_1[iVar7];
    iVar6 = iVar7 * 2 + 1;
    param_1[iVar7] = pIVar1;
    iVar5 = iVar7;
  } while( true );
}

// HeapSortInternal<Audio::IFFTAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IFFTAlgorithmFactory_*,`Audio::GetPrioritizedSupportingFactories'::__l2::<lambda_6>_>_> @ 14449c180

void __cdecl
AlgoImpl::
HeapSortInternal<Audio::IFFTAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IFFTAlgorithmFactory_*,_Audio::GetPrioritizedSupportingFactories_::__l2::<lambda_6>_>_>
          (IFFTAlgorithmFactory **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::IFFTAlgorithmFactory_*,,TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_>_const___cdecl_Audio::GetPrioritizedSupportingFactories(Audio::FFFTSettings_const_&,FName_const_&)_::_2_::<lambda_6>_>
          param_4)

{
  IFFTAlgorithmFactory *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14449c29e:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pIVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pIVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = `Audio::GetPrioritizedSupportingFactories'::__l2::<lambda_6>::operator()
                                    (param_4.Predicate,param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `Audio::GetPrioritizedSupportingFactories'::__l2::<lambda_6>::operator()
                                  (param_4.Predicate,param_1[iVar9],param_1[iVar4]);
                if (!bVar3) break;
                pIVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pIVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `Audio::GetPrioritizedSupportingFactories'::__l2::<lambda_6>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `Audio::GetPrioritizedSupportingFactories'::__l2::<lambda_6>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14449c29e;
    pIVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pIVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,`Audio::FLinearCurve::Sort'::__l2::<lambda_1>_>_> @ 14449c380

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,_Audio::FLinearCurve::Sort_::__l2::<lambda_1>_>_>
          (TVector2<double> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Math::TVector2<double>,_private:_void___cdecl_Audio::FLinearCurve::Sort(void)_::_2_::<lambda_1>_>
          param_4)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  TVector2<double> *pTVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14449c475:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar12 = param_1 + lVar9;
          do {
            dVar1 = (pTVar12->field0_0x0)._s_0.Y;
            iVar10 = 0;
            dVar3 = (param_1->field0_0x0)._s_0.X;
            dVar4 = (param_1->field0_0x0)._s_0.Y;
            (param_1->field0_0x0)._s_0.X = (pTVar12->field0_0x0)._s_0.X;
            (param_1->field0_0x0)._s_0.Y = dVar1;
            (pTVar12->field0_0x0)._s_0.X = dVar3;
            (pTVar12->field0_0x0)._s_0.Y = dVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  dVar1 = param_1[iVar6].field0_0x0._s_0.X;
                  if (param_1[(longlong)iVar11 + 2].field0_0x0._s_0.X <= dVar1 &&
                      dVar1 != param_1[(longlong)iVar11 + 2].field0_0x0._s_0.X) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                dVar1 = param_1[iVar6].field0_0x0._s_0.X;
                if (dVar1 < param_1[iVar10].field0_0x0._s_0.X ||
                    dVar1 == param_1[iVar10].field0_0x0._s_0.X) break;
                dVar1 = param_1[iVar10].field0_0x0._s_0.X;
                dVar3 = param_1[iVar10].field0_0x0._s_0.Y;
                dVar4 = param_1[iVar6].field0_0x0._s_0.Y;
                param_1[iVar10].field0_0x0._s_0.X = param_1[iVar6].field0_0x0._s_0.X;
                param_1[iVar10].field0_0x0._s_0.Y = dVar4;
                param_1[iVar6].field0_0x0._s_0.X = dVar1;
                param_1[iVar6].field0_0x0._s_0.Y = dVar3;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      dVar1 = param_1[iVar8].field0_0x0._s_0.X;
      if (param_1[(longlong)iVar7 + 2].field0_0x0._s_0.X <= dVar1 &&
          dVar1 != param_1[(longlong)iVar7 + 2].field0_0x0._s_0.X) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    dVar1 = param_1[iVar8].field0_0x0._s_0.X;
    if (dVar1 < param_1[iVar6].field0_0x0._s_0.X || dVar1 == param_1[iVar6].field0_0x0._s_0.X)
    goto LAB_14449c475;
    dVar1 = param_1[iVar6].field0_0x0._s_0.X;
    dVar3 = param_1[iVar6].field0_0x0._s_0.Y;
    dVar4 = param_1[iVar8].field0_0x0._s_0.Y;
    param_1[iVar6].field0_0x0._s_0.X = param_1[iVar8].field0_0x0._s_0.X;
    param_1[iVar6].field0_0x0._s_0.Y = dVar4;
    iVar7 = iVar8 * 2 + 1;
    param_1[iVar8].field0_0x0._s_0.X = dVar1;
    param_1[iVar8].field0_0x0._s_0.Y = dVar3;
    iVar6 = iVar8;
  } while( true );
}

// IndexOfByPredicate<TArrayView<float_const_,int>,`Audio::CheckBuffer'::__l5::<lambda_1>_> @ 14449c550

int __cdecl
AlgoImpl::IndexOfByPredicate<TArrayView<float_const_,int>,_Audio::CheckBuffer_::__l5::<lambda_1>_>
          (TArrayView<float_const_,int> *param_1,<lambda_1> param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar2 = param_1->ArrayNum;
  uVar5 = 0;
  pfVar3 = param_1->DataPtr;
  uVar7 = uVar5;
  if (0 < (longlong)iVar2) {
    do {
      fVar1 = pfVar3[uVar5];
      iVar6 = (int)uVar7;
      if ((((uint)fVar1 & 0x7f800000) == 0) && (((uint)fVar1 & 0x7fffff) != 0)) {
        return iVar6;
      }
      iVar4 = _finite((double)fVar1);
      if (iVar4 == 0) {
        return iVar6;
      }
      uVar5 = uVar5 + 1;
      uVar7 = (ulonglong)(iVar6 + 1);
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  return -1;
}

// IntroSortInternal<Audio::IConvolutionAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IConvolutionAlgorithmFactory_*,`Audio::FConvolutionFactory::NewConvolutionAlgorithm'::__l2::<lambda_4>_>_> @ 14449c5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Audio::IConvolutionAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IConvolutionAlgorithmFactory_*,_Audio::FConvolutionFactory::NewConvolutionAlgorithm_::__l2::<lambda_4>_>_>
          (IConvolutionAlgorithmFactory **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::IConvolutionAlgorithmFactory_*,_public:_static_class_TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>___cdecl_Audio::FConvolutionFactory::NewConvolutionAlgorithm(Audio::FConvolutionSettings_const_&,FName_const_&)_::_2_::<lambda_4>_>
          param_4)

{
  IConvolutionAlgorithmFactory *pIVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  IConvolutionAlgorithmFactory **ppIVar5;
  IConvolutionAlgorithmFactory ***pppIVar6;
  IConvolutionAlgorithmFactory **ppIVar7;
  IConvolutionAlgorithmFactory **ppIVar8;
  IConvolutionAlgorithmFactory **ppIVar9;
  IConvolutionAlgorithmFactory **ppIVar10;
  float fVar11;
  undefined1 auStack_398 [32];
  int local_378;
  IConvolutionAlgorithmFactory ***local_370;
  IConvolutionAlgorithmFactory **local_358;
  IConvolutionAlgorithmFactory **local_348;
  IConvolutionAlgorithmFactory **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    pppIVar6 = &local_348;
    do {
      ppIVar7 = pppIVar6[1];
      ppIVar5 = *pppIVar6;
      local_358 = pppIVar6[2];
      iVar4 = (int)((longlong)ppIVar7 - (longlong)ppIVar5 >> 3) + 1;
      local_378 = (int)local_358;
      ppIVar10 = ppIVar5;
      local_370 = pppIVar6;
      if ((int)local_358 != 0) {
LAB_14449c6a2:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          ppIVar8 = ppIVar7 + 1;
          pIVar1 = ppIVar10[iVar4 >> 1];
          ppIVar10[iVar4 >> 1] = *ppIVar10;
          *ppIVar10 = pIVar1;
          ppIVar5 = ppIVar10;
LAB_14449c6d0:
          ppIVar5 = ppIVar5 + 1;
          if (ppIVar5 <= ppIVar7) goto code_r0x00014449c6d9;
          goto LAB_14449c6f7;
        }
        for (; ppIVar8 = ppIVar10, ppIVar5 = ppIVar10, ppIVar10 < ppIVar7; ppIVar7 = ppIVar7 + -1) {
          while (ppIVar9 = ppIVar8, ppIVar5 = ppIVar5 + 1, ppIVar5 <= ppIVar7) {
            pIVar1 = *ppIVar5;
            cVar3 = (**(code **)((longlong)**ppIVar9 + 0x10))();
            if ((cVar3 == '\0') ||
               (cVar3 = (**(code **)((longlong)*pIVar1 + 0x10))(), cVar3 != '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            ppIVar8 = ppIVar5;
            if (!bVar2) {
              ppIVar8 = ppIVar9;
            }
          }
          pIVar1 = *ppIVar9;
          *ppIVar9 = *ppIVar7;
          *ppIVar7 = pIVar1;
          pppIVar6 = local_370;
        }
        goto LAB_14449c7dd;
      }
LAB_14449c7cc:
      HeapSortInternal<Audio::IConvolutionAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IConvolutionAlgorithmFactory_*,_Audio::FConvolutionFactory::NewConvolutionAlgorithm_::__l2::<lambda_4>_>_>
                (ppIVar5,iVar4,param_3,param_4);
LAB_14449c7dd:
      pppIVar6 = pppIVar6 + -3;
    } while (&local_348 <= pppIVar6);
  }
  return;
code_r0x00014449c6d9:
  pIVar1 = *ppIVar5;
  cVar3 = (**(code **)((longlong)**ppIVar10 + 0x10))();
  if ((cVar3 == '\0') || (cVar3 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1), cVar3 != '\0'))
  goto LAB_14449c6d0;
LAB_14449c6f7:
  do {
    ppIVar9 = ppIVar8;
    ppIVar8 = ppIVar9 + -1;
    if (ppIVar8 <= ppIVar10) break;
    pIVar1 = *ppIVar10;
    cVar3 = (**(code **)((longlong)**ppIVar8 + 0x10))();
  } while ((cVar3 == '\0') ||
          (cVar3 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1), cVar3 != '\0'));
  if (ppIVar5 <= ppIVar8) {
    pIVar1 = *ppIVar5;
    *ppIVar5 = *ppIVar8;
    *ppIVar8 = pIVar1;
    goto LAB_14449c6d0;
  }
  pIVar1 = *ppIVar10;
  *ppIVar10 = *ppIVar8;
  local_378 = local_378 + -1;
  *ppIVar8 = pIVar1;
  if ((longlong)((longlong)ppIVar8 + (-8 - (longlong)ppIVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppIVar7 - (longlong)ppIVar5 & 0xfffffffffffffff8U)) {
    if (ppIVar5 < ppIVar7) {
      *pppIVar6 = ppIVar5;
      pppIVar6[1] = ppIVar7;
      *(int *)(pppIVar6 + 2) = local_378;
      pppIVar6 = pppIVar6 + 3;
      local_370 = pppIVar6;
    }
    if (ppIVar8 <= ppIVar10 + 1) goto LAB_14449c7dd;
    ppIVar7 = ppIVar9 + -2;
    ppIVar5 = ppIVar10;
  }
  else {
    if (ppIVar10 + 1 < ppIVar8) {
      *pppIVar6 = ppIVar10;
      pppIVar6[1] = ppIVar9 + -2;
      *(int *)(pppIVar6 + 2) = local_378;
      pppIVar6 = pppIVar6 + 3;
      local_370 = pppIVar6;
    }
    if (ppIVar7 <= ppIVar5) goto LAB_14449c7dd;
  }
  iVar4 = (int)((longlong)ppIVar7 - (longlong)ppIVar5 >> 3) + 1;
  ppIVar10 = ppIVar5;
  if (local_378 == 0) goto LAB_14449c7cc;
  goto LAB_14449c6a2;
}

// IntroSortInternal<Audio::IFFTAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IFFTAlgorithmFactory_*,`Audio::GetPrioritizedSupportingFactories'::__l2::<lambda_6>_>_> @ 14449c8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Audio::IFFTAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IFFTAlgorithmFactory_*,_Audio::GetPrioritizedSupportingFactories_::__l2::<lambda_6>_>_>
          (IFFTAlgorithmFactory **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::IFFTAlgorithmFactory_*,,TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_>_const___cdecl_Audio::GetPrioritizedSupportingFactories(Audio::FFFTSettings_const_&,FName_const_&)_::_2_::<lambda_6>_>
          param_4)

{
  IFFTAlgorithmFactory *pIVar1;
  bool bVar2;
  int iVar3;
  IFFTAlgorithmFactory **ppIVar4;
  IFFTAlgorithmFactory **ppIVar5;
  int iVar6;
  IFFTAlgorithmFactory ***pppIVar7;
  IFFTAlgorithmFactory **ppIVar8;
  IFFTAlgorithmFactory **ppIVar9;
  IFFTAlgorithmFactory **ppIVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  IFFTAlgorithmFactory **local_358;
  IFFTAlgorithmFactory **local_348;
  IFFTAlgorithmFactory **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    pppIVar7 = &local_348;
    do {
      ppIVar4 = pppIVar7[1];
      ppIVar5 = *pppIVar7;
      local_358 = pppIVar7[2];
      iVar3 = (int)((longlong)ppIVar4 - (longlong)ppIVar5 >> 3) + 1;
      ppIVar10 = ppIVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14449c990:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppIVar8 = ppIVar4 + 1;
          pIVar1 = ppIVar10[iVar3 >> 1];
          ppIVar10[iVar3 >> 1] = *ppIVar10;
          *ppIVar10 = pIVar1;
          ppIVar5 = ppIVar10;
LAB_14449c9c0:
          ppIVar5 = ppIVar5 + 1;
          if (ppIVar5 <= ppIVar4) goto code_r0x00014449c9c9;
          goto LAB_14449c9e0;
        }
        for (; ppIVar8 = ppIVar10, ppIVar5 = ppIVar10, ppIVar10 < ppIVar4; ppIVar4 = ppIVar4 + -1) {
          while (ppIVar9 = ppIVar8, ppIVar5 = ppIVar5 + 1, ppIVar5 <= ppIVar4) {
            bVar2 = `Audio::GetPrioritizedSupportingFactories'::__l2::<lambda_6>::operator()
                              (param_4.Predicate,*ppIVar9,*ppIVar5);
            ppIVar8 = ppIVar5;
            if (!bVar2) {
              ppIVar8 = ppIVar9;
            }
          }
          pIVar1 = *ppIVar9;
          *ppIVar9 = *ppIVar4;
          *ppIVar4 = pIVar1;
        }
        goto LAB_14449caa6;
      }
LAB_14449ca95:
      HeapSortInternal<Audio::IFFTAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IFFTAlgorithmFactory_*,_Audio::GetPrioritizedSupportingFactories_::__l2::<lambda_6>_>_>
                (ppIVar5,iVar3,param_3,param_4);
LAB_14449caa6:
      pppIVar7 = pppIVar7 + -3;
    } while (&local_348 <= pppIVar7);
  }
  return;
code_r0x00014449c9c9:
  bVar2 = `Audio::GetPrioritizedSupportingFactories'::__l2::<lambda_6>::operator()
                    (param_4.Predicate,*ppIVar10,*ppIVar5);
  if (!bVar2) goto LAB_14449c9c0;
LAB_14449c9e0:
  do {
    ppIVar9 = ppIVar8;
    ppIVar8 = ppIVar9 + -1;
    if (ppIVar8 <= ppIVar10) break;
    bVar2 = `Audio::GetPrioritizedSupportingFactories'::__l2::<lambda_6>::operator()
                      (param_4.Predicate,*ppIVar8,*ppIVar10);
  } while (!bVar2);
  if (ppIVar5 <= ppIVar8) {
    pIVar1 = *ppIVar5;
    *ppIVar5 = *ppIVar8;
    *ppIVar8 = pIVar1;
    goto LAB_14449c9c0;
  }
  pIVar1 = *ppIVar10;
  iVar6 = iVar6 + -1;
  *ppIVar10 = *ppIVar8;
  *ppIVar8 = pIVar1;
  if ((longlong)((longlong)ppIVar8 + (-8 - (longlong)ppIVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppIVar4 - (longlong)ppIVar5 & 0xfffffffffffffff8U)) {
    if (ppIVar5 < ppIVar4) {
      *pppIVar7 = ppIVar5;
      pppIVar7[1] = ppIVar4;
      *(int *)(pppIVar7 + 2) = iVar6;
      pppIVar7 = pppIVar7 + 3;
    }
    if (ppIVar8 <= ppIVar10 + 1) goto LAB_14449caa6;
    ppIVar4 = ppIVar9 + -2;
    ppIVar5 = ppIVar10;
  }
  else {
    if (ppIVar10 + 1 < ppIVar8) {
      *pppIVar7 = ppIVar10;
      pppIVar7[1] = ppIVar9 + -2;
      *(int *)(pppIVar7 + 2) = iVar6;
      pppIVar7 = pppIVar7 + 3;
    }
    if (ppIVar4 <= ppIVar5) goto LAB_14449caa6;
  }
  iVar3 = (int)((longlong)ppIVar4 - (longlong)ppIVar5 >> 3) + 1;
  ppIVar10 = ppIVar5;
  if (iVar6 == 0) goto LAB_14449ca95;
  goto LAB_14449c990;
}

// IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,`Audio::FLinearCurve::Sort'::__l2::<lambda_1>_>_> @ 14449cb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,_Audio::FLinearCurve::Sort_::__l2::<lambda_1>_>_>
          (TVector2<double> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Math::TVector2<double>,_private:_void___cdecl_Audio::FLinearCurve::Sort(void)_::_2_::<lambda_1>_>
          param_4)

{
  TVector2<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  TVector2<double> *pTVar7;
  TVector2<double> *pTVar8;
  TVector2<double> *pTVar9;
  TVector2<double> **ppTVar10;
  TVector2<double> *pTVar11;
  TVector2<double> *pTVar12;
  TVector2<double> *pTVar13;
  float fVar14;
  undefined1 auStack_368 [48];
  TVector2<double> *local_338;
  TVector2<double> *local_328;
  TVector2<double> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar14;
    memset(local_310,0,0x2e8);
    ppTVar10 = &local_328;
    do {
      pTVar12 = ppTVar10[1];
      pTVar7 = *ppTVar10;
      pTVar1 = ppTVar10[2];
      iVar6 = (int)((longlong)pTVar12 - (longlong)pTVar7 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar13 = pTVar7;
      if ((int)local_338 != 0) {
LAB_14449cc20:
        if (8 < iVar6) {
          dVar2 = (pTVar13->field0_0x0)._s_0.Y;
          pTVar9 = pTVar12 + 1;
          dVar3 = pTVar13[iVar6 / 2].field0_0x0._s_0.X;
          dVar4 = pTVar13[iVar6 / 2].field0_0x0._s_0.Y;
          pTVar13[iVar6 / 2].field0_0x0._s_0.X = (pTVar13->field0_0x0)._s_0.X;
          pTVar13[iVar6 / 2].field0_0x0._s_0.Y = dVar2;
          (pTVar13->field0_0x0)._s_0.X = dVar3;
          (pTVar13->field0_0x0)._s_0.Y = dVar4;
          pTVar7 = pTVar13;
LAB_14449cc50:
          pTVar8 = pTVar7;
          pTVar7 = pTVar8 + 1;
          if (pTVar7 <= pTVar12) goto code_r0x00014449cc59;
          goto LAB_14449cc64;
        }
        if (pTVar13 < pTVar12) {
          pTVar1 = pTVar13 + 1;
          do {
            pTVar7 = pTVar13;
            if (pTVar1 <= pTVar12) {
              pTVar9 = pTVar1;
              if (0x3f < ((longlong)pTVar12 + (0x10 - (longlong)pTVar1) & 0xfffffffffffffff0U)) {
                do {
                  dVar3 = (pTVar7->field0_0x0)._s_0.X;
                  dVar2 = (pTVar9->field0_0x0)._s_0.X;
                  if (dVar3 < dVar2) {
                    pTVar7 = pTVar9;
                    dVar3 = dVar2;
                  }
                  dVar2 = pTVar9[2].field0_0x0._s_0.X;
                  if (dVar3 < pTVar9[1].field0_0x0._s_0.X) {
                    pTVar7 = pTVar9 + 1;
                  }
                  dVar3 = (pTVar7->field0_0x0)._s_0.X;
                  if (dVar3 < dVar2) {
                    pTVar7 = pTVar9 + 2;
                    dVar3 = dVar2;
                  }
                  if (dVar3 < pTVar9[3].field0_0x0._s_0.X) {
                    pTVar7 = pTVar9 + 3;
                  }
                  pTVar9 = pTVar9 + 4;
                } while (pTVar9 <= pTVar12 + -3);
              }
              for (; pTVar9 <= pTVar12; pTVar9 = pTVar9 + 1) {
                if ((pTVar7->field0_0x0)._s_0.X < (pTVar9->field0_0x0)._s_0.X) {
                  pTVar7 = pTVar9;
                }
              }
            }
            dVar2 = (pTVar7->field0_0x0)._s_0.X;
            dVar3 = (pTVar7->field0_0x0)._s_0.Y;
            pTVar9 = pTVar12 + -1;
            dVar4 = (pTVar12->field0_0x0)._s_0.Y;
            (pTVar7->field0_0x0)._s_0.X = (pTVar12->field0_0x0)._s_0.X;
            (pTVar7->field0_0x0)._s_0.Y = dVar4;
            (pTVar12->field0_0x0)._s_0.X = dVar2;
            (pTVar12->field0_0x0)._s_0.Y = dVar3;
            pTVar12 = pTVar9;
          } while (pTVar13 < pTVar9);
        }
        goto LAB_14449cd27;
      }
LAB_14449cd16:
      local_338 = pTVar1;
      HeapSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,_Audio::FLinearCurve::Sort_::__l2::<lambda_1>_>_>
                (pTVar7,iVar6,param_3,param_4);
LAB_14449cd27:
      ppTVar10 = ppTVar10 + -3;
    } while (&local_328 <= ppTVar10);
  }
  return;
code_r0x00014449cc59:
  dVar2 = (pTVar7->field0_0x0)._s_0.X;
  if (dVar2 < (pTVar13->field0_0x0)._s_0.X || dVar2 == (pTVar13->field0_0x0)._s_0.X)
  goto LAB_14449cc50;
LAB_14449cc64:
  do {
    pTVar11 = pTVar9;
    pTVar9 = pTVar11 + -1;
    if (pTVar9 <= pTVar13) break;
    dVar2 = (pTVar13->field0_0x0)._s_0.X;
  } while (dVar2 < (pTVar9->field0_0x0)._s_0.X || dVar2 == (pTVar9->field0_0x0)._s_0.X);
  dVar2 = (pTVar9->field0_0x0)._s_0.X;
  dVar3 = pTVar11[-1].field0_0x0._s_0.Y;
  if (pTVar7 <= pTVar9) {
    dVar4 = (pTVar7->field0_0x0)._s_0.X;
    dVar5 = pTVar8[1].field0_0x0._s_0.Y;
    (pTVar7->field0_0x0)._s_0.X = dVar2;
    pTVar8[1].field0_0x0._s_0.Y = dVar3;
    (pTVar9->field0_0x0)._s_0.X = dVar4;
    pTVar11[-1].field0_0x0._s_0.Y = dVar5;
    goto LAB_14449cc50;
  }
  dVar4 = (pTVar13->field0_0x0)._s_0.X;
  dVar5 = (pTVar13->field0_0x0)._s_0.Y;
  local_338._0_4_ = (int)local_338 + -1;
  (pTVar13->field0_0x0)._s_0.X = dVar2;
  (pTVar13->field0_0x0)._s_0.Y = dVar3;
  (pTVar9->field0_0x0)._s_0.X = dVar4;
  pTVar11[-1].field0_0x0._s_0.Y = dVar5;
  if ((longlong)((longlong)pTVar9 + (-0x10 - (longlong)pTVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar7 & 0xfffffffffffffff0U)) {
    if (pTVar7 < pTVar12) {
      *ppTVar10 = pTVar7;
      ppTVar10[1] = pTVar12;
      *(int *)(ppTVar10 + 2) = (int)local_338;
      ppTVar10 = ppTVar10 + 3;
    }
    if (pTVar9 <= pTVar13 + 1) goto LAB_14449cd27;
    pTVar12 = pTVar11 + -2;
    pTVar7 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar9) {
      *ppTVar10 = pTVar13;
      ppTVar10[1] = pTVar11 + -2;
      *(int *)(ppTVar10 + 2) = (int)local_338;
      ppTVar10 = ppTVar10 + 3;
    }
    if (pTVar12 <= pTVar7) goto LAB_14449cd27;
  }
  iVar6 = (int)((longlong)pTVar12 - (longlong)pTVar7 >> 4) + 1;
  pTVar13 = pTVar7;
  if ((int)local_338 == 0) goto LAB_14449cd16;
  goto LAB_14449cc20;
}

// LowerBoundInternal<TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>_const_,int,Audio::FBaseChannelFormatConverter::FChannelMixKey,TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>::FKeyForward,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_> @ 14449ce40

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>_const_,int,Audio::FBaseChannelFormatConverter::FChannelMixKey,TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>::FKeyForward,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
          (TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>
           *param_1,int param_2,FChannelMixKey *param_3,FKeyForward param_4,
          TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&> param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  if (0 < param_2) {
    iVar2 = param_3->InputChannelIndex;
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      iVar3 = *(int *)(param_1 + iVar1);
      bVar7 = SBORROW4(iVar3,iVar2);
      iVar4 = iVar3 - iVar2;
      if (iVar3 == iVar2) {
        bVar7 = SBORROW4(*(int *)&param_1[iVar1].field_0x4,param_3->OutputChannelIndex);
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->OutputChannelIndex;
      }
      if (bVar7 != iVar4 < 0) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar5 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar5 != 0);
  }
  return iVar6;
}

// ~TFunction_OwnedObject<`Audio::FEventQuantizer::SetBPM'::__l2::<lambda_1>,0,0> @ 1444a5d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetBPM'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FEventQuantizer::SetBPM_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FEventQuantizer::SetBPM'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FEventQuantizer::SetBeatDivision'::__l2::<lambda_1>,0,0> @ 1444a5d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetBeatDivision'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FEventQuantizer::SetBeatDivision_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FEventQuantizer::SetBeatDivision'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FEventQuantizer::SetQuantizationSettings'::__l10::<lambda_1>,0,1> @ 1444a5d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetQuantizationSettings'::__l10::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FEventQuantizer::SetQuantizationSettings_::__l10::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FEventQuantizer::SetQuantizationSettings'::`10'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// operator() @ 1444a6c80

void __thiscall
`BufferDiagnosticsPrivate::HandleDiagnosticsCmd'::__l2::<lambda_1>::operator()
          (void *this,FCheckedBufferState *param_1)

{
  FOutputDevice *this_00;
  bool bVar1;
  int iVar2;
  FString *this_01;
  size_t sVar3;
  wchar_t *_Str;
  FString local_28;
  
  **(int **)this = **(int **)this + 1;
  this_01 = ::FString::FString(&local_28,param_1->Name);
  if ((int)(*(longlong **)((longlong)this + 8))[1] == 0) {
    _Str = L"";
LAB_1444a6ccc:
    sVar3 = wcslen(_Str);
    iVar2 = ::FString::Find(this_01,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
    if (iVar2 == -1) goto LAB_1444a6cfd;
  }
  else {
    _Str = (wchar_t *)**(longlong **)((longlong)this + 8);
    if (_Str != (wchar_t *)0x0) goto LAB_1444a6ccc;
LAB_1444a6cfd:
    if (1 < *(int *)(*(longlong *)((longlong)this + 8) + 8)) {
      bVar1 = false;
      goto LAB_1444a6d0f;
    }
  }
  bVar1 = true;
LAB_1444a6d0f:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    param_1->Behavior = **(EBufferCheckBehavior **)((longlong)this + 0x10);
    param_1->CheckFlags = **(ECheckBufferFlags **)((longlong)this + 0x18);
    if (**(char **)((longlong)this + 0x20) != '\0') {
      param_1->FailFlags = None;
    }
    **(int **)((longlong)this + 0x28) = **(int **)((longlong)this + 0x28) + 1;
    if (**(char **)((longlong)this + 0x30) != '\0') {
      this_00 = *(FOutputDevice **)((longlong)this + 0x38);
      BufferDiagnosticsPrivate::LexToString(**(EBufferCheckBehavior **)((longlong)this + 0x10));
      BufferDiagnosticsPrivate::ToDelimString(&local_28,param_1->CheckFlags);
      FOutputDevice::LogfImpl
                (this_00,L"Check=\'%s\', File=\'%s:%d\', Flags=\'%s\', Behavior=\'%s\'");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 1444a6de0

bool __thiscall
`Audio::GetPrioritizedSupportingFactories'::__l2::<lambda_6>::operator()
          (void *this,IFFTAlgorithmFactory *param_1,IFFTAlgorithmFactory *param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 local_res10 [24];
  
  cVar1 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)((longlong)*param_2 + 0x10))(param_2), cVar1 == '\0'))
  {
    return true;
  }
  cVar1 = (**(code **)((longlong)*param_1 + 0x18))(param_1);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)((longlong)*param_2 + 0x18))(param_2), cVar1 == '\0'))
  {
    return true;
  }
  plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1,local_res10);
  if (InternalFFTFActoryPriority.AllocatorInstance.Data !=
      InternalFFTFActoryPriority.AllocatorInstance.Data +
      (longlong)InternalFFTFActoryPriority.ArrayNum * 8) {
    FVar5 = InternalFFTFActoryPriority.AllocatorInstance;
    do {
      if (*(longlong *)FVar5.Data == *plVar2) {
        iVar4 = (int)((longlong)FVar5.Data -
                      (longlong)InternalFFTFActoryPriority.AllocatorInstance.Data >> 3);
        goto LAB_1444a6e73;
      }
      FVar5.Data = FVar5.Data + 8;
    } while (FVar5.Data !=
             InternalFFTFActoryPriority.AllocatorInstance.Data +
             (longlong)InternalFFTFActoryPriority.ArrayNum * 8);
  }
  iVar4 = -1;
LAB_1444a6e73:
  plVar2 = (longlong *)(**(code **)((longlong)*param_2 + 8))(param_2,local_res10);
  if (InternalFFTFActoryPriority.AllocatorInstance.Data !=
      InternalFFTFActoryPriority.AllocatorInstance.Data +
      (longlong)InternalFFTFActoryPriority.ArrayNum * 8) {
    FVar5 = InternalFFTFActoryPriority.AllocatorInstance;
    do {
      if (*(longlong *)FVar5.Data == *plVar2) {
        iVar3 = (int)((longlong)FVar5.Data -
                      (longlong)InternalFFTFActoryPriority.AllocatorInstance.Data >> 3);
        goto LAB_1444a6eb3;
      }
      FVar5.Data = FVar5.Data + 8;
    } while (FVar5.Data !=
             InternalFFTFActoryPriority.AllocatorInstance.Data +
             (longlong)InternalFFTFActoryPriority.ArrayNum * 8);
  }
  iVar3 = -1;
LAB_1444a6eb3:
  if ((iVar4 != -1) && (iVar3 != -1)) {
    return iVar4 < iVar3;
  }
  return false;
}

// operator/= @ 1444a6f00

complex<float> * __thiscall
std::complex<float>::operator/=(complex<float> *this,complex<float> *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = __real_7fc00000;
  fVar3 = *(float *)param_1;
  fVar2 = *(float *)&param_1->field_0x4;
  if (((uint)ABS(fVar3) < 0x7f800001) && ((uint)ABS(fVar2) < 0x7f800001)) {
    if ((float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
        (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar4 = fVar2 / fVar3;
      fVar3 = fVar4 * fVar2 + fVar3;
      if (((uint)ABS(fVar3) < 0x7f800001) && (fVar3 != 0.0)) {
        fVar2 = *(float *)&this->field_0x4;
        fVar3 = __real_3f800000 / fVar3;
        *(float *)&this->field_0x4 = (fVar2 - *(float *)this * fVar4) * fVar3;
        *(float *)this = (fVar2 * fVar4 + *(float *)this) * fVar3;
        return this;
      }
      *(undefined4 *)&this->field_0x4 = __real_7fc00000;
      *(undefined4 *)this = uVar1;
      return this;
    }
    if (fVar2 == 0.0) {
      fVar3 = __real_3f800000 / fVar3;
      *(float *)&this->field_0x4 = fVar3 * *(float *)&this->field_0x4;
      *(float *)this = fVar3 * *(float *)this;
      return this;
    }
    fVar4 = fVar3 / fVar2;
    fVar2 = fVar4 * fVar3 + fVar2;
    if (((uint)ABS(fVar2) < 0x7f800001) && (fVar2 != 0.0)) {
      fVar3 = *(float *)&this->field_0x4;
      fVar2 = __real_3f800000 / fVar2;
      *(float *)&this->field_0x4 = (fVar3 * fVar4 - *(float *)this) * fVar2;
      *(float *)this = (*(float *)this * fVar4 + fVar3) * fVar2;
      return this;
    }
  }
  *(undefined4 *)&this->field_0x4 = 0x7fc00000;
  *(undefined4 *)this = 0x7fc00000;
  return this;
}

// `scalar_deleting_destructor' @ 1444a7070

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,1>::_scalar_deleting_destructor_
          (TConvertDeinterleave<1,1> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a70a0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,2>::_scalar_deleting_destructor_
          (TConvertDeinterleave<1,2> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a70f0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,3>::_scalar_deleting_destructor_
          (TConvertDeinterleave<1,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7140

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,4>::_scalar_deleting_destructor_
          (TConvertDeinterleave<1,4> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7190

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,5>::_scalar_deleting_destructor_
          (TConvertDeinterleave<1,5> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a71e0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,6>::_scalar_deleting_destructor_
          (TConvertDeinterleave<1,6> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7230

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,7>::_scalar_deleting_destructor_
          (TConvertDeinterleave<1,7> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7280

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,8>::_scalar_deleting_destructor_
          (TConvertDeinterleave<1,8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a72d0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,1>::_scalar_deleting_destructor_
          (TConvertDeinterleave<2,1> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7320

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,2>::_scalar_deleting_destructor_
          (TConvertDeinterleave<2,2> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7370

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,3>::_scalar_deleting_destructor_
          (TConvertDeinterleave<2,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a73c0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,4>::_scalar_deleting_destructor_
          (TConvertDeinterleave<2,4> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7410

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,5>::_scalar_deleting_destructor_
          (TConvertDeinterleave<2,5> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7460

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,6>::_scalar_deleting_destructor_
          (TConvertDeinterleave<2,6> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a74b0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,7>::_scalar_deleting_destructor_
          (TConvertDeinterleave<2,7> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7500

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,8>::_scalar_deleting_destructor_
          (TConvertDeinterleave<2,8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7550

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,1>::_scalar_deleting_destructor_
          (TConvertDeinterleave<3,1> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a75a0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,2>::_scalar_deleting_destructor_
          (TConvertDeinterleave<3,2> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a75f0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,3>::_scalar_deleting_destructor_
          (TConvertDeinterleave<3,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7640

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,4>::_scalar_deleting_destructor_
          (TConvertDeinterleave<3,4> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7690

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,5>::_scalar_deleting_destructor_
          (TConvertDeinterleave<3,5> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a76e0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,6>::_scalar_deleting_destructor_
          (TConvertDeinterleave<3,6> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7730

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,7>::_scalar_deleting_destructor_
          (TConvertDeinterleave<3,7> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7780

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,8>::_scalar_deleting_destructor_
          (TConvertDeinterleave<3,8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a77d0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,1>::_scalar_deleting_destructor_
          (TConvertDeinterleave<4,1> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7820

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,2>::_scalar_deleting_destructor_
          (TConvertDeinterleave<4,2> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7870

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,3>::_scalar_deleting_destructor_
          (TConvertDeinterleave<4,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a78c0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,4>::_scalar_deleting_destructor_
          (TConvertDeinterleave<4,4> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7910

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,5>::_scalar_deleting_destructor_
          (TConvertDeinterleave<4,5> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7960

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,6>::_scalar_deleting_destructor_
          (TConvertDeinterleave<4,6> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a79b0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,7>::_scalar_deleting_destructor_
          (TConvertDeinterleave<4,7> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7a00

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,8>::_scalar_deleting_destructor_
          (TConvertDeinterleave<4,8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7a50

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,1>::_scalar_deleting_destructor_
          (TConvertDeinterleave<5,1> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7aa0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,2>::_scalar_deleting_destructor_
          (TConvertDeinterleave<5,2> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7af0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,3>::_scalar_deleting_destructor_
          (TConvertDeinterleave<5,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7b40

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,4>::_scalar_deleting_destructor_
          (TConvertDeinterleave<5,4> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7b90

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,5>::_scalar_deleting_destructor_
          (TConvertDeinterleave<5,5> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7be0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,6>::_scalar_deleting_destructor_
          (TConvertDeinterleave<5,6> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7c30

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,7>::_scalar_deleting_destructor_
          (TConvertDeinterleave<5,7> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7c80

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,8>::_scalar_deleting_destructor_
          (TConvertDeinterleave<5,8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7cd0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,1>::_scalar_deleting_destructor_
          (TConvertDeinterleave<6,1> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7d20

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,2>::_scalar_deleting_destructor_
          (TConvertDeinterleave<6,2> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7d70

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,3>::_scalar_deleting_destructor_
          (TConvertDeinterleave<6,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7dc0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,4>::_scalar_deleting_destructor_
          (TConvertDeinterleave<6,4> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7e10

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,5>::_scalar_deleting_destructor_
          (TConvertDeinterleave<6,5> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7e60

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,6>::_scalar_deleting_destructor_
          (TConvertDeinterleave<6,6> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7eb0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,7>::_scalar_deleting_destructor_
          (TConvertDeinterleave<6,7> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7f00

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,8>::_scalar_deleting_destructor_
          (TConvertDeinterleave<6,8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7f50

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,1>::_scalar_deleting_destructor_
          (TConvertDeinterleave<7,1> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7fa0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,2>::_scalar_deleting_destructor_
          (TConvertDeinterleave<7,2> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a7ff0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,3>::_scalar_deleting_destructor_
          (TConvertDeinterleave<7,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8040

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,4>::_scalar_deleting_destructor_
          (TConvertDeinterleave<7,4> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8090

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,5>::_scalar_deleting_destructor_
          (TConvertDeinterleave<7,5> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a80e0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,6>::_scalar_deleting_destructor_
          (TConvertDeinterleave<7,6> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8130

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,7>::_scalar_deleting_destructor_
          (TConvertDeinterleave<7,7> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8180

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,8>::_scalar_deleting_destructor_
          (TConvertDeinterleave<7,8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a81d0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,1>::_scalar_deleting_destructor_
          (TConvertDeinterleave<8,1> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8220

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,2>::_scalar_deleting_destructor_
          (TConvertDeinterleave<8,2> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8270

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,3>::_scalar_deleting_destructor_
          (TConvertDeinterleave<8,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a82c0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,4>::_scalar_deleting_destructor_
          (TConvertDeinterleave<8,4> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8310

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,5>::_scalar_deleting_destructor_
          (TConvertDeinterleave<8,5> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8360

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,6>::_scalar_deleting_destructor_
          (TConvertDeinterleave<8,6> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a83b0

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,7>::_scalar_deleting_destructor_
          (TConvertDeinterleave<8,7> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8400

void * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,8>::_scalar_deleting_destructor_
          (TConvertDeinterleave<8,8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetBPM'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FEventQuantizer::SetBPM'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetBeatDivision'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FEventQuantizer::SetBeatDivision'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a84d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetQuantizationSettings'::__l10::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FEventQuantizer::SetQuantizationSettings'::`10'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8510

void * __thiscall
Audio::FBaseChannelFormatConverter::_scalar_deleting_destructor_
          (FBaseChannelFormatConverter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBaseChannelFormatConverter_Audio__6B_;
  pFVar1 = (this->ChannelMixStates).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8560

void * __thiscall
Audio::FBiquadFilter::_scalar_deleting_destructor_(FBiquadFilter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FBiquadFilter_Audio__6B_;
  if (this->Biquad != (FBiquadCoeff *)0x0) {
    operator_delete__(this->Biquad);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a85b0

void * __thiscall
Audio::FContiguousSparse2DKernelTransform::_scalar_deleting_destructor_
          (FContiguousSparse2DKernelTransform *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FContiguousSparse2DKernelTransform_Audio__6B_;
  DestructItems<Audio::FContiguousSparse2DKernelTransform::FRow,int>
            ((FRow *)(this->Kernel).AllocatorInstance.Data,(this->Kernel).ArrayNum);
  pFVar1 = (this->Kernel).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8610

void * __thiscall Audio::FDelay::_scalar_deleting_destructor_(FDelay *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDelay_Audio__6B_;
  pFVar1 = (this->AudioBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8660

void * __thiscall Audio::FDelayAPF::_scalar_deleting_destructor_(FDelayAPF *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDelay_Audio__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a86b0

void * __thiscall Audio::FEnvelope::_scalar_deleting_destructor_(FEnvelope *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FEnvelope_Audio__6B_;
  pFVar1 = (this->BiasedEnvSource).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvSource).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8720

void * __thiscall
Audio::FLadderFilter::_scalar_deleting_destructor_(FLadderFilter *this,uint param_1)

{
  FOnePoleFilter *pFVar1;
  FOnePoleFilter *pFVar2;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7FLadderFilter_Audio__6B_;
  lVar3 = 4;
  pFVar2 = (FOnePoleFilter *)this->Beta;
  do {
    pFVar1 = pFVar2 + -1;
    lVar3 = lVar3 + -1;
    pFVar1->_padding_ = (longlong)&___7FOnePoleFilter_Audio__6B_;
    if (pFVar2[-1].Z1 != (float *)0x0) {
      operator_delete__(pFVar2[-1].Z1);
    }
    pFVar1->_padding_ = (longlong)&___7IFilter_Audio__6B_;
    if ((void *)pFVar2[-1]._padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar2[-1]._padding_);
    }
    if ((void *)pFVar2[-1]._padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar2[-1]._padding_);
    }
    pFVar2 = pFVar1;
  } while (lVar3 != 0);
  this->_padding_ = (longlong)&___7IFilter_Audio__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8800

void * __thiscall Audio::FLinearCurve::_scalar_deleting_destructor_(FLinearCurve *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8850

void * __thiscall
Audio::FOnePoleFilter::_scalar_deleting_destructor_(FOnePoleFilter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FOnePoleFilter_Audio__6B_;
  if (this->Z1 != (float *)0x0) {
    operator_delete__(this->Z1);
  }
  this->_padding_ = (longlong)&___7IFilter_Audio__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a88d0

void * __thiscall
Audio::FStateVariableFilter::_scalar_deleting_destructor_(FStateVariableFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FStateVariableFilter_Audio__6B_;
  pFVar1 = (this->FilterState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IFilter_Audio__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8950

void * __thiscall
Audio::IChannelFormatConverter::_scalar_deleting_destructor_
          (IChannelFormatConverter *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8980

void * __thiscall
Audio::IConvertDeinterleave::_scalar_deleting_destructor_(IConvertDeinterleave *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a89b0

void * __thiscall
Audio::IConvolutionAlgorithmFactory::_scalar_deleting_destructor_
          (IConvolutionAlgorithmFactory *this,uint param_1)

{
  *this = (IConvolutionAlgorithmFactory)&___7IConvolutionAlgorithmFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a89f0

void * __thiscall
Audio::IFFTAlgorithm::_scalar_deleting_destructor_(IFFTAlgorithm *this,uint param_1)

{
  *this = (IFFTAlgorithm)&___7IFFTAlgorithm_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444a8a30

void * __thiscall Audio::IFilter::_scalar_deleting_destructor_(IFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7IFilter_Audio__6B_;
  pFVar1 = (this->ModQDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModCutoffFrequencyDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// Apply2ChannelGain @ 1444a9610

void __cdecl
Audio::Apply2ChannelGain
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,float *param_2,float *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined8 uVar8;
  float fVar10;
  float fVar12;
  undefined8 uVar11;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar13;
  float fVar16;
  
  iVar3 = param_1->ArrayNum;
  uVar8 = *(undefined8 *)param_2;
  pFVar4 = (param_1->AllocatorInstance).Data;
  fVar13 = (float)*(undefined8 *)param_3;
  auVar14._0_4_ = fVar13 - (float)uVar8;
  fVar6 = (float)((ulonglong)uVar8 >> 0x20);
  fVar16 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  auVar14._4_4_ = fVar16 - fVar6;
  auVar14._8_4_ = fVar13 - (float)uVar8;
  auVar14._12_4_ = fVar16 - fVar6;
  fVar6 = (float)iVar3 * __real_3e800000;
  auVar15._4_4_ = fVar6;
  auVar15._0_4_ = fVar6;
  auVar15._8_4_ = fVar6;
  auVar15._12_4_ = fVar6;
  auVar15 = divps(auVar14,auVar15);
  if (0 < iVar3) {
    lVar5 = 0;
    uVar11 = uVar8;
    do {
      pFVar1 = pFVar4 + lVar5 * 4;
      fVar6 = *(float *)(pFVar1 + 4);
      fVar13 = *(float *)(pFVar1 + 8);
      fVar16 = *(float *)(pFVar1 + 0xc);
      fVar7 = (float)uVar8;
      fVar9 = (float)((ulonglong)uVar8 >> 0x20);
      fVar10 = (float)uVar11;
      fVar12 = (float)((ulonglong)uVar11 >> 0x20);
      uVar8 = CONCAT44(fVar9 + auVar15._4_4_,fVar7 + auVar15._0_4_);
      uVar11 = CONCAT44(fVar12 + auVar15._12_4_,fVar10 + auVar15._8_4_);
      pFVar2 = pFVar4 + lVar5 * 4;
      *(float *)pFVar2 = fVar7 * *(float *)pFVar1;
      *(float *)(pFVar2 + 4) = fVar9 * fVar6;
      *(float *)(pFVar2 + 8) = fVar10 * fVar13;
      *(float *)(pFVar2 + 0xc) = fVar12 * fVar16;
      lVar5 = lVar5 + 4;
    } while (lVar5 < iVar3);
  }
  return;
}

// Apply2ChannelGain @ 1444a9680

void __cdecl
Audio::Apply2ChannelGain(TArray<float,TAlignedHeapAllocator<16>_> *param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  uVar3 = *(undefined8 *)param_2;
  iVar4 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (0 < (longlong)iVar4) {
    lVar9 = 0;
    do {
      pFVar1 = pFVar5 + lVar9 * 4;
      fVar6 = *(float *)(pFVar1 + 4);
      fVar7 = *(float *)(pFVar1 + 8);
      fVar8 = *(float *)(pFVar1 + 0xc);
      fVar10 = (float)uVar3;
      fVar11 = (float)((ulonglong)uVar3 >> 0x20);
      pFVar2 = pFVar5 + lVar9 * 4;
      *(float *)pFVar2 = *(float *)pFVar1 * fVar10;
      *(float *)(pFVar2 + 4) = fVar6 * fVar11;
      *(float *)(pFVar2 + 8) = fVar7 * fVar10;
      *(float *)(pFVar2 + 0xc) = fVar8 * fVar11;
      lVar9 = lVar9 + 4;
    } while (lVar9 < iVar4);
  }
  return;
}

// Apply2ChannelGain @ 1444a96c0

void __cdecl Audio::Apply2ChannelGain(float *param_1,int param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  float fVar8;
  float fVar10;
  undefined8 uVar9;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar11;
  float fVar14;
  
  uVar6 = *(undefined8 *)param_3;
  fVar11 = (float)*(undefined8 *)param_4;
  auVar12._0_4_ = fVar11 - (float)uVar6;
  fVar4 = (float)((ulonglong)uVar6 >> 0x20);
  fVar14 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  auVar12._4_4_ = fVar14 - fVar4;
  auVar12._8_4_ = fVar11 - (float)uVar6;
  auVar12._12_4_ = fVar14 - fVar4;
  fVar4 = (float)param_2 * __real_3e800000;
  auVar13._4_4_ = fVar4;
  auVar13._0_4_ = fVar4;
  auVar13._8_4_ = fVar4;
  auVar13._12_4_ = fVar4;
  auVar13 = divps(auVar12,auVar13);
  if (0 < param_2) {
    lVar3 = 0;
    uVar9 = uVar6;
    do {
      pfVar1 = param_1 + lVar3;
      fVar4 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar5 = (float)uVar6;
      fVar7 = (float)((ulonglong)uVar6 >> 0x20);
      fVar8 = (float)uVar9;
      fVar10 = (float)((ulonglong)uVar9 >> 0x20);
      uVar6 = CONCAT44(fVar7 + auVar13._4_4_,fVar5 + auVar13._0_4_);
      uVar9 = CONCAT44(fVar10 + auVar13._12_4_,fVar8 + auVar13._8_4_);
      pfVar2 = param_1 + lVar3;
      *pfVar2 = fVar5 * *pfVar1;
      pfVar2[1] = fVar7 * fVar4;
      pfVar2[2] = fVar8 * fVar11;
      pfVar2[3] = fVar10 * fVar14;
      lVar3 = lVar3 + 4;
    } while (lVar3 < param_2);
  }
  return;
}

// Apply2ChannelGain @ 1444a9730

void __cdecl Audio::Apply2ChannelGain(float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = *(undefined8 *)param_3;
  if (0 < param_2) {
    lVar7 = 0;
    do {
      pfVar1 = param_1 + lVar7;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      fVar8 = (float)uVar3;
      fVar9 = (float)((ulonglong)uVar3 >> 0x20);
      pfVar2 = param_1 + lVar7;
      *pfVar2 = *pfVar1 * fVar8;
      pfVar2[1] = fVar4 * fVar9;
      pfVar2[2] = fVar5 * fVar8;
      pfVar2[3] = fVar6 * fVar9;
      lVar7 = lVar7 + 4;
    } while (lVar7 < param_2);
  }
  return;
}

// Apply4ChannelGain @ 1444a9760

void __cdecl
Audio::Apply4ChannelGain
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,float *param_2,float *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = param_2[3];
  auVar13._0_4_ = *param_3 - fVar9;
  auVar13._4_4_ = param_3[1] - fVar10;
  auVar13._8_4_ = param_3[2] - fVar11;
  auVar13._12_4_ = param_3[3] - fVar12;
  fVar8 = (float)iVar2 * __real_3e800000;
  auVar14._4_4_ = fVar8;
  auVar14._0_4_ = fVar8;
  auVar14._8_4_ = fVar8;
  auVar14._12_4_ = fVar8;
  auVar14 = divps(auVar13,auVar14);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      pFVar1 = pFVar3 + lVar4 * 4;
      fVar8 = *(float *)pFVar1 * fVar9;
      fVar5 = *(float *)(pFVar1 + 4) * fVar10;
      fVar6 = *(float *)(pFVar1 + 8) * fVar11;
      fVar7 = *(float *)(pFVar1 + 0xc) * fVar12;
      fVar9 = fVar9 + auVar14._0_4_;
      fVar10 = fVar10 + auVar14._4_4_;
      fVar11 = fVar11 + auVar14._8_4_;
      fVar12 = fVar12 + auVar14._12_4_;
      pFVar1 = pFVar3 + lVar4 * 4;
      *(float *)pFVar1 = fVar8;
      *(float *)(pFVar1 + 4) = fVar5;
      *(float *)(pFVar1 + 8) = fVar6;
      *(float *)(pFVar1 + 0xc) = fVar7;
      lVar4 = lVar4 + 4;
    } while (lVar4 < iVar2);
  }
  return;
}

// Apply4ChannelGain @ 1444a97b0

void __cdecl
Audio::Apply4ChannelGain(TArray<float,TAlignedHeapAllocator<16>_> *param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (0 < (longlong)iVar3) {
    lVar12 = 0;
    do {
      pFVar1 = pFVar4 + lVar12 * 4;
      fVar9 = *(float *)(pFVar1 + 4);
      fVar10 = *(float *)(pFVar1 + 8);
      fVar11 = *(float *)(pFVar1 + 0xc);
      pFVar2 = pFVar4 + lVar12 * 4;
      *(float *)pFVar2 = *(float *)pFVar1 * fVar5;
      *(float *)(pFVar2 + 4) = fVar9 * fVar6;
      *(float *)(pFVar2 + 8) = fVar10 * fVar7;
      *(float *)(pFVar2 + 0xc) = fVar11 * fVar8;
      lVar12 = lVar12 + 4;
    } while (lVar12 < iVar3);
  }
  return;
}

// Apply4ChannelGain @ 1444a97e0

void __cdecl Audio::Apply4ChannelGain(float *param_1,int param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar11._0_4_ = *param_4 - *param_3;
  auVar11._4_4_ = param_4[1] - param_3[1];
  auVar11._8_4_ = param_4[2] - param_3[2];
  auVar11._12_4_ = param_4[3] - param_3[3];
  fVar7 = (float)param_2 * __real_3e800000;
  auVar12._4_4_ = fVar7;
  auVar12._0_4_ = fVar7;
  auVar12._8_4_ = fVar7;
  auVar12._12_4_ = fVar7;
  auVar12 = divps(auVar11,auVar12);
  if (0 < param_2) {
    lVar6 = 0;
    fVar7 = *param_3;
    fVar8 = param_3[1];
    fVar9 = param_3[2];
    fVar10 = param_3[3];
    do {
      pfVar1 = param_1 + lVar6;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar2 = param_1 + lVar6;
      *pfVar2 = fVar7 * *pfVar1;
      pfVar2[1] = fVar8 * fVar3;
      pfVar2[2] = fVar9 * fVar4;
      pfVar2[3] = fVar10 * fVar5;
      lVar6 = lVar6 + 4;
      fVar7 = fVar7 + auVar12._0_4_;
      fVar8 = fVar8 + auVar12._4_4_;
      fVar9 = fVar9 + auVar12._8_4_;
      fVar10 = fVar10 + auVar12._12_4_;
    } while (lVar6 < param_2);
  }
  return;
}

// Apply4ChannelGain @ 1444a9840

void __cdecl Audio::Apply4ChannelGain(float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  if (0 < param_2) {
    lVar10 = 0;
    do {
      pfVar1 = param_1 + lVar10;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = param_1 + lVar10;
      *pfVar2 = *pfVar1 * fVar3;
      pfVar2[1] = fVar7 * fVar4;
      pfVar2[2] = fVar8 * fVar5;
      pfVar2[3] = fVar9 * fVar6;
      lVar10 = lVar10 + 4;
    } while (lVar10 < param_2);
  }
  return;
}

// Apply6ChannelGain @ 1444a9870

void __cdecl
Audio::Apply6ChannelGain
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,float *param_2,float *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  iVar1 = param_1->ArrayNum;
  uVar16 = *(undefined8 *)(param_2 + 4);
  fVar18 = *param_2;
  fVar19 = param_2[1];
  fVar20 = param_2[2];
  fVar21 = param_2[3];
  auVar24._0_4_ = *param_3 - fVar18;
  auVar24._4_4_ = param_3[1] - fVar19;
  auVar24._8_4_ = param_3[2] - fVar20;
  auVar24._12_4_ = param_3[3] - fVar21;
  auVar22._0_4_ = (float)*(undefined8 *)(param_3 + 4) - (float)uVar16;
  auVar22._4_4_ =
       (float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20) - (float)((ulonglong)uVar16 >> 0x20)
  ;
  auVar22._8_4_ = (float)*(undefined8 *)param_3 - fVar18;
  auVar22._12_4_ = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) - fVar19;
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  fVar11 = param_2[4];
  fVar12 = param_2[5];
  auVar13._0_4_ = param_3[2] - fVar9;
  auVar13._4_4_ = param_3[3] - fVar10;
  auVar13._8_4_ = param_3[4] - fVar11;
  auVar13._12_4_ = param_3[5] - fVar12;
  fVar15 = (float)iVar1 * __real_3daaaaab;
  auVar14._4_4_ = fVar15;
  auVar14._0_4_ = fVar15;
  auVar14._8_4_ = fVar15;
  auVar14._12_4_ = fVar15;
  auVar24 = divps(auVar24,auVar14);
  auVar23._4_4_ = fVar15;
  auVar23._0_4_ = fVar15;
  auVar23._8_4_ = fVar15;
  auVar23._12_4_ = fVar15;
  auVar23 = divps(auVar22,auVar23);
  auVar2._4_4_ = fVar15;
  auVar2._0_4_ = fVar15;
  auVar2._8_4_ = fVar15;
  auVar2._12_4_ = fVar15;
  auVar14 = divps(auVar13,auVar2);
  if (0 < iVar1) {
    pFVar4 = (param_1->AllocatorInstance).Data + 0x20;
    lVar3 = ((longlong)iVar1 - 1U) / 0xc + 1;
    fVar15 = fVar18;
    fVar17 = fVar19;
    do {
      fVar5 = *(float *)(pFVar4 + -0x20) * fVar18;
      fVar6 = *(float *)(pFVar4 + -0x1c) * fVar19;
      fVar7 = *(float *)(pFVar4 + -0x18) * fVar20;
      fVar8 = *(float *)(pFVar4 + -0x14) * fVar21;
      fVar18 = fVar18 + auVar24._0_4_;
      fVar19 = fVar19 + auVar24._4_4_;
      fVar20 = fVar20 + auVar24._8_4_;
      fVar21 = fVar21 + auVar24._12_4_;
      *(float *)(pFVar4 + -0x20) = fVar5;
      *(float *)(pFVar4 + -0x1c) = fVar6;
      *(float *)(pFVar4 + -0x18) = fVar7;
      *(float *)(pFVar4 + -0x14) = fVar8;
      fVar7 = (float)uVar16;
      fVar8 = (float)((ulonglong)uVar16 >> 0x20);
      fVar5 = *(float *)(pFVar4 + -8) * fVar15;
      fVar6 = *(float *)(pFVar4 + -4) * fVar17;
      uVar16 = CONCAT44(fVar8 + auVar23._4_4_,fVar7 + auVar23._0_4_);
      fVar15 = fVar15 + auVar23._8_4_;
      fVar17 = fVar17 + auVar23._12_4_;
      *(float *)(pFVar4 + -0x10) = *(float *)(pFVar4 + -0x10) * fVar7;
      *(float *)(pFVar4 + -0xc) = *(float *)(pFVar4 + -0xc) * fVar8;
      *(float *)(pFVar4 + -8) = fVar5;
      *(float *)(pFVar4 + -4) = fVar6;
      fVar5 = *(float *)pFVar4 * fVar9;
      fVar6 = *(float *)(pFVar4 + 4) * fVar10;
      fVar7 = *(float *)(pFVar4 + 8) * fVar11;
      fVar8 = *(float *)(pFVar4 + 0xc) * fVar12;
      fVar9 = fVar9 + auVar14._0_4_;
      fVar10 = fVar10 + auVar14._4_4_;
      fVar11 = fVar11 + auVar14._8_4_;
      fVar12 = fVar12 + auVar14._12_4_;
      *(float *)pFVar4 = fVar5;
      *(float *)(pFVar4 + 4) = fVar6;
      *(float *)(pFVar4 + 8) = fVar7;
      *(float *)(pFVar4 + 0xc) = fVar8;
      pFVar4 = pFVar4 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

// Apply6ChannelGain @ 1444a9950

void __cdecl
Audio::Apply6ChannelGain(TArray<float,TAlignedHeapAllocator<16>_> *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  uVar1 = *(undefined8 *)(param_2 + 4);
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  if (0 < (longlong)param_1->ArrayNum) {
    lVar10 = ((longlong)param_1->ArrayNum - 1U) / 0xc + 1;
    pFVar11 = (param_1->AllocatorInstance).Data + 0x20;
    do {
      *(float *)(pFVar11 + -0x20) = fVar2 * *(float *)(pFVar11 + -0x20);
      *(float *)(pFVar11 + -0x1c) = fVar3 * *(float *)(pFVar11 + -0x1c);
      *(float *)(pFVar11 + -0x18) = fVar4 * *(float *)(pFVar11 + -0x18);
      *(float *)(pFVar11 + -0x14) = fVar5 * *(float *)(pFVar11 + -0x14);
      *(float *)(pFVar11 + -0x10) = *(float *)(pFVar11 + -0x10) * (float)uVar1;
      *(float *)(pFVar11 + -0xc) = *(float *)(pFVar11 + -0xc) * (float)((ulonglong)uVar1 >> 0x20);
      *(float *)(pFVar11 + -8) = *(float *)(pFVar11 + -8) * fVar2;
      *(float *)(pFVar11 + -4) = *(float *)(pFVar11 + -4) * fVar3;
      *(float *)pFVar11 = *(float *)pFVar11 * fVar6;
      *(float *)(pFVar11 + 4) = *(float *)(pFVar11 + 4) * fVar7;
      *(float *)(pFVar11 + 8) = *(float *)(pFVar11 + 8) * fVar8;
      *(float *)(pFVar11 + 0xc) = *(float *)(pFVar11 + 0xc) * fVar9;
      lVar10 = lVar10 + -1;
      pFVar11 = pFVar11 + 0x30;
    } while (lVar10 != 0);
  }
  return;
}

// Apply6ChannelGain @ 1444a99d0

void __cdecl Audio::Apply6ChannelGain(float *param_1,int param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar14 = *(undefined8 *)(param_3 + 4);
  fVar16 = *param_3;
  fVar17 = param_3[1];
  fVar18 = param_3[2];
  fVar19 = param_3[3];
  auVar22._0_4_ = *param_4 - fVar16;
  auVar22._4_4_ = param_4[1] - fVar17;
  auVar22._8_4_ = param_4[2] - fVar18;
  auVar22._12_4_ = param_4[3] - fVar19;
  auVar20._0_4_ = (float)*(undefined8 *)(param_4 + 4) - (float)uVar14;
  auVar20._4_4_ =
       (float)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20) - (float)((ulonglong)uVar14 >> 0x20)
  ;
  auVar20._8_4_ = (float)*(undefined8 *)param_4 - fVar16;
  auVar20._12_4_ = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20) - fVar17;
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  fVar10 = param_3[4];
  fVar11 = param_3[5];
  auVar23._0_4_ = param_4[2] - fVar8;
  auVar23._4_4_ = param_4[3] - fVar9;
  auVar23._8_4_ = param_4[4] - fVar10;
  auVar23._12_4_ = param_4[5] - fVar11;
  fVar13 = (float)param_2 * __real_3daaaaab;
  auVar12._4_4_ = fVar13;
  auVar12._0_4_ = fVar13;
  auVar12._8_4_ = fVar13;
  auVar12._12_4_ = fVar13;
  auVar12 = divps(auVar23,auVar12);
  auVar21._4_4_ = fVar13;
  auVar21._0_4_ = fVar13;
  auVar21._8_4_ = fVar13;
  auVar21._12_4_ = fVar13;
  auVar23 = divps(auVar22,auVar21);
  auVar1._4_4_ = fVar13;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = fVar13;
  auVar1._12_4_ = fVar13;
  auVar21 = divps(auVar20,auVar1);
  if (0 < param_2) {
    pfVar3 = param_1 + 8;
    lVar2 = ((longlong)param_2 - 1U) / 0xc + 1;
    fVar13 = fVar16;
    fVar15 = fVar17;
    do {
      fVar4 = pfVar3[-8] * fVar16;
      fVar5 = pfVar3[-7] * fVar17;
      fVar6 = pfVar3[-6] * fVar18;
      fVar7 = pfVar3[-5] * fVar19;
      fVar16 = fVar16 + auVar23._0_4_;
      fVar17 = fVar17 + auVar23._4_4_;
      fVar18 = fVar18 + auVar23._8_4_;
      fVar19 = fVar19 + auVar23._12_4_;
      pfVar3[-8] = fVar4;
      pfVar3[-7] = fVar5;
      pfVar3[-6] = fVar6;
      pfVar3[-5] = fVar7;
      fVar6 = (float)uVar14;
      fVar7 = (float)((ulonglong)uVar14 >> 0x20);
      fVar4 = pfVar3[-2] * fVar13;
      fVar5 = pfVar3[-1] * fVar15;
      uVar14 = CONCAT44(fVar7 + auVar21._4_4_,fVar6 + auVar21._0_4_);
      fVar13 = fVar13 + auVar21._8_4_;
      fVar15 = fVar15 + auVar21._12_4_;
      pfVar3[-4] = pfVar3[-4] * fVar6;
      pfVar3[-3] = pfVar3[-3] * fVar7;
      pfVar3[-2] = fVar4;
      pfVar3[-1] = fVar5;
      fVar4 = *pfVar3 * fVar8;
      fVar5 = pfVar3[1] * fVar9;
      fVar6 = pfVar3[2] * fVar10;
      fVar7 = pfVar3[3] * fVar11;
      fVar8 = fVar8 + auVar12._0_4_;
      fVar9 = fVar9 + auVar12._4_4_;
      fVar10 = fVar10 + auVar12._8_4_;
      fVar11 = fVar11 + auVar12._12_4_;
      *pfVar3 = fVar4;
      pfVar3[1] = fVar5;
      pfVar3[2] = fVar6;
      pfVar3[3] = fVar7;
      pfVar3 = pfVar3 + 0xc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// Apply6ChannelGain @ 1444a9ab0

void __cdecl Audio::Apply6ChannelGain(float *param_1,int param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  float *pfVar11;
  
  uVar1 = *(undefined8 *)(param_3 + 4);
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar8 = param_3[4];
  fVar9 = param_3[5];
  if (0 < param_2) {
    lVar10 = ((longlong)param_2 - 1U) / 0xc + 1;
    pfVar11 = param_1 + 8;
    do {
      pfVar11[-8] = pfVar11[-8] * fVar2;
      pfVar11[-7] = pfVar11[-7] * fVar3;
      pfVar11[-6] = pfVar11[-6] * fVar4;
      pfVar11[-5] = pfVar11[-5] * fVar5;
      pfVar11[-4] = pfVar11[-4] * (float)uVar1;
      pfVar11[-3] = pfVar11[-3] * (float)((ulonglong)uVar1 >> 0x20);
      pfVar11[-2] = pfVar11[-2] * fVar2;
      pfVar11[-1] = pfVar11[-1] * fVar3;
      *pfVar11 = *pfVar11 * fVar6;
      pfVar11[1] = pfVar11[1] * fVar7;
      pfVar11[2] = pfVar11[2] * fVar8;
      pfVar11[3] = pfVar11[3] * fVar9;
      lVar10 = lVar10 + -1;
      pfVar11 = pfVar11 + 0xc;
    } while (lVar10 != 0);
  }
  return;
}

// Apply8ChannelGain @ 1444a9b30

void __cdecl
Audio::Apply8ChannelGain
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,float *param_2,float *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar14 = param_2[3];
  auVar18._0_4_ = *param_3 - fVar11;
  auVar18._4_4_ = param_3[1] - fVar12;
  auVar18._8_4_ = param_3[2] - fVar13;
  auVar18._12_4_ = param_3[3] - fVar14;
  auVar20._0_4_ = param_3[4] - param_2[4];
  auVar20._4_4_ = param_3[5] - param_2[5];
  auVar20._8_4_ = param_3[6] - param_2[6];
  auVar20._12_4_ = param_3[7] - param_2[7];
  fVar10 = (float)iVar3 * __real_3e000000;
  auVar19._4_4_ = fVar10;
  auVar19._0_4_ = fVar10;
  auVar19._8_4_ = fVar10;
  auVar19._12_4_ = fVar10;
  auVar19 = divps(auVar18,auVar19);
  auVar21._4_4_ = fVar10;
  auVar21._0_4_ = fVar10;
  auVar21._8_4_ = fVar10;
  auVar21._12_4_ = fVar10;
  auVar21 = divps(auVar20,auVar21);
  if (0 < iVar3) {
    lVar5 = 0;
    fVar10 = param_2[4];
    fVar15 = param_2[5];
    fVar16 = param_2[6];
    fVar17 = param_2[7];
    do {
      pFVar1 = pFVar4 + lVar5 * 4;
      fVar6 = *(float *)pFVar1 * fVar11;
      fVar7 = *(float *)(pFVar1 + 4) * fVar12;
      fVar8 = *(float *)(pFVar1 + 8) * fVar13;
      fVar9 = *(float *)(pFVar1 + 0xc) * fVar14;
      fVar11 = fVar11 + auVar19._0_4_;
      fVar12 = fVar12 + auVar19._4_4_;
      fVar13 = fVar13 + auVar19._8_4_;
      fVar14 = fVar14 + auVar19._12_4_;
      pFVar1 = pFVar4 + lVar5 * 4;
      *(float *)pFVar1 = fVar6;
      *(float *)(pFVar1 + 4) = fVar7;
      *(float *)(pFVar1 + 8) = fVar8;
      *(float *)(pFVar1 + 0xc) = fVar9;
      pFVar1 = pFVar4 + lVar5 * 4 + 0x10;
      fVar6 = *(float *)(pFVar1 + 4);
      fVar7 = *(float *)(pFVar1 + 8);
      fVar8 = *(float *)(pFVar1 + 0xc);
      pFVar2 = pFVar4 + lVar5 * 4 + 0x10;
      *(float *)pFVar2 = fVar10 * *(float *)pFVar1;
      *(float *)(pFVar2 + 4) = fVar15 * fVar6;
      *(float *)(pFVar2 + 8) = fVar16 * fVar7;
      *(float *)(pFVar2 + 0xc) = fVar17 * fVar8;
      lVar5 = lVar5 + 8;
      fVar10 = fVar10 + auVar21._0_4_;
      fVar15 = fVar15 + auVar21._4_4_;
      fVar16 = fVar16 + auVar21._8_4_;
      fVar17 = fVar17 + auVar21._12_4_;
    } while (lVar5 < iVar3);
  }
  return;
}

// Apply8ChannelGain @ 1444a9bb0

void __cdecl
Audio::Apply8ChannelGain(TArray<float,TAlignedHeapAllocator<16>_> *param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  pFVar4 = (param_1->AllocatorInstance).Data;
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  fVar12 = param_2[7];
  iVar3 = param_1->ArrayNum;
  if (0 < (longlong)iVar3) {
    lVar16 = 0;
    do {
      pFVar1 = pFVar4 + lVar16 * 4;
      fVar13 = *(float *)(pFVar1 + 4);
      fVar14 = *(float *)(pFVar1 + 8);
      fVar15 = *(float *)(pFVar1 + 0xc);
      pFVar2 = pFVar4 + lVar16 * 4;
      *(float *)pFVar2 = *(float *)pFVar1 * fVar5;
      *(float *)(pFVar2 + 4) = fVar13 * fVar6;
      *(float *)(pFVar2 + 8) = fVar14 * fVar7;
      *(float *)(pFVar2 + 0xc) = fVar15 * fVar8;
      pFVar1 = pFVar4 + lVar16 * 4 + 0x10;
      fVar13 = *(float *)(pFVar1 + 4);
      fVar14 = *(float *)(pFVar1 + 8);
      fVar15 = *(float *)(pFVar1 + 0xc);
      pFVar2 = pFVar4 + lVar16 * 4 + 0x10;
      *(float *)pFVar2 = fVar9 * *(float *)pFVar1;
      *(float *)(pFVar2 + 4) = fVar10 * fVar13;
      *(float *)(pFVar2 + 8) = fVar11 * fVar14;
      *(float *)(pFVar2 + 0xc) = fVar12 * fVar15;
      lVar16 = lVar16 + 8;
    } while (lVar16 < iVar3);
  }
  return;
}

// Apply8ChannelGain @ 1444a9c00

void __cdecl Audio::Apply8ChannelGain(float *param_1,int param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  fVar7 = *param_3;
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar10 = param_3[3];
  fVar11 = param_3[4];
  fVar12 = param_3[5];
  fVar13 = param_3[6];
  fVar14 = param_3[7];
  auVar15._0_4_ = *param_4 - fVar7;
  auVar15._4_4_ = param_4[1] - fVar8;
  auVar15._8_4_ = param_4[2] - fVar9;
  auVar15._12_4_ = param_4[3] - fVar10;
  auVar17._0_4_ = param_4[4] - fVar11;
  auVar17._4_4_ = param_4[5] - fVar12;
  auVar17._8_4_ = param_4[6] - fVar13;
  auVar17._12_4_ = param_4[7] - fVar14;
  fVar6 = (float)param_2 * __real_3e000000;
  auVar16._4_4_ = fVar6;
  auVar16._0_4_ = fVar6;
  auVar16._8_4_ = fVar6;
  auVar16._12_4_ = fVar6;
  auVar16 = divps(auVar15,auVar16);
  auVar18._4_4_ = fVar6;
  auVar18._0_4_ = fVar6;
  auVar18._8_4_ = fVar6;
  auVar18._12_4_ = fVar6;
  auVar18 = divps(auVar17,auVar18);
  if (0 < param_2) {
    lVar2 = 0;
    do {
      pfVar1 = param_1 + lVar2;
      fVar6 = *pfVar1 * fVar7;
      fVar3 = pfVar1[1] * fVar8;
      fVar4 = pfVar1[2] * fVar9;
      fVar5 = pfVar1[3] * fVar10;
      fVar7 = fVar7 + auVar16._0_4_;
      fVar8 = fVar8 + auVar16._4_4_;
      fVar9 = fVar9 + auVar16._8_4_;
      fVar10 = fVar10 + auVar16._12_4_;
      pfVar1 = param_1 + lVar2;
      *pfVar1 = fVar6;
      pfVar1[1] = fVar3;
      pfVar1[2] = fVar4;
      pfVar1[3] = fVar5;
      pfVar1 = param_1 + lVar2 + 4;
      fVar6 = *pfVar1 * fVar11;
      fVar3 = pfVar1[1] * fVar12;
      fVar4 = pfVar1[2] * fVar13;
      fVar5 = pfVar1[3] * fVar14;
      fVar11 = fVar11 + auVar18._0_4_;
      fVar12 = fVar12 + auVar18._4_4_;
      fVar13 = fVar13 + auVar18._8_4_;
      fVar14 = fVar14 + auVar18._12_4_;
      pfVar1 = param_1 + lVar2 + 4;
      *pfVar1 = fVar6;
      pfVar1[1] = fVar3;
      pfVar1[2] = fVar4;
      pfVar1[3] = fVar5;
      lVar2 = lVar2 + 8;
    } while (lVar2 < param_2);
  }
  return;
}

// Apply8ChannelGain @ 1444a9c70

void __cdecl Audio::Apply8ChannelGain(float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_3[4];
  fVar8 = param_3[5];
  fVar9 = param_3[6];
  fVar10 = param_3[7];
  if (0 < param_2) {
    lVar18 = 0;
    do {
      pfVar1 = param_1 + lVar18;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = param_1 + lVar18 + 4;
      fVar14 = *pfVar2;
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar17 = pfVar2[3];
      pfVar2 = param_1 + lVar18;
      *pfVar2 = fVar3 * *pfVar1;
      pfVar2[1] = fVar4 * fVar11;
      pfVar2[2] = fVar5 * fVar12;
      pfVar2[3] = fVar6 * fVar13;
      pfVar1 = param_1 + lVar18 + 4;
      *pfVar1 = fVar14 * fVar7;
      pfVar1[1] = fVar15 * fVar8;
      pfVar1[2] = fVar16 * fVar9;
      pfVar1[3] = fVar17 * fVar10;
      lVar18 = lVar18 + 8;
    } while (lVar18 < param_2);
  }
  return;
}

// ArrayAPFLongDelayProcess @ 1444aa100

void __cdecl
Audio::ArrayAPFLongDelayProcess
          (float *param_1,float *param_2,int param_3,float *param_4,float *param_5,float param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (bAudio_FloatArrayMath_ISPC_Enabled) {
    ::ArrayAPFLongDelayProcess();
    return;
  }
  uVar10 = param_3 & 0x80000003;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
  }
  fVar20 = (float)((uint)param_6 ^ __xmm_80000000800000008000000080000000);
  iVar11 = param_3 - uVar10;
  if (0 < param_3) {
    lVar14 = ((longlong)param_3 - 1U >> 2) + 1;
    pfVar8 = param_1;
    do {
      pfVar1 = (float *)(((longlong)param_2 - (longlong)param_1) + (longlong)pfVar8);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar16 = pfVar1[3];
      fVar15 = fVar4 * param_6 + *pfVar8;
      fVar17 = fVar5 * param_6 + pfVar8[1];
      fVar18 = fVar6 * param_6 + pfVar8[2];
      fVar19 = fVar16 * param_6 + pfVar8[3];
      pfVar1 = (float *)((longlong)pfVar8 + ((longlong)param_5 - (longlong)param_1));
      *pfVar1 = fVar15;
      pfVar1[1] = fVar17;
      pfVar1[2] = fVar18;
      pfVar1[3] = fVar19;
      pfVar1 = (float *)((longlong)pfVar8 + ((longlong)param_4 - (longlong)param_1));
      *pfVar1 = fVar15 * fVar20 + fVar4;
      pfVar1[1] = fVar17 * fVar20 + fVar5;
      pfVar1[2] = fVar18 * fVar20 + fVar6;
      pfVar1[3] = fVar19 * fVar20 + fVar16;
      pfVar8 = pfVar8 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (iVar11 < param_3) {
    if (3 < uVar10) {
      iVar7 = param_3 + -1;
      pfVar8 = param_5 + iVar11;
      pfVar1 = param_5 + iVar7;
      if ((param_2 + iVar7 < pfVar8) || (pfVar1 < param_2 + iVar11)) {
        pfVar2 = param_4 + iVar11;
        pfVar3 = param_4 + iVar7;
        if ((pfVar3 < pfVar8) || (pfVar1 < pfVar2)) {
          pfVar9 = param_1 + iVar11;
          if ((((param_1 + iVar7 < pfVar8) || (pfVar1 < pfVar9)) &&
              ((param_2 + iVar7 < pfVar2 || (pfVar3 < param_2 + iVar11)))) &&
             ((param_1 + iVar7 < pfVar2 || (pfVar3 < pfVar9)))) {
            uVar10 = uVar10 & 0x80000003;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
            }
            do {
              pfVar8 = (float *)((longlong)pfVar9 + ((longlong)param_2 - (longlong)param_1));
              fVar20 = *pfVar8;
              fVar4 = pfVar8[1];
              fVar5 = pfVar8[2];
              fVar6 = pfVar8[3];
              iVar11 = iVar11 + 4;
              fVar16 = fVar20 * param_6 + *pfVar9;
              fVar15 = fVar4 * param_6 + pfVar9[1];
              fVar17 = fVar5 * param_6 + pfVar9[2];
              fVar18 = fVar6 * param_6 + pfVar9[3];
              pfVar8 = (float *)((longlong)pfVar9 + ((longlong)param_5 - (longlong)param_1));
              *pfVar8 = fVar16;
              pfVar8[1] = fVar15;
              pfVar8[2] = fVar17;
              pfVar8[3] = fVar18;
              pfVar8 = (float *)((longlong)pfVar9 + ((longlong)param_4 - (longlong)param_1));
              *pfVar8 = fVar20 - fVar16 * param_6;
              pfVar8[1] = fVar4 - fVar15 * param_6;
              pfVar8[2] = fVar5 - fVar17 * param_6;
              pfVar8[3] = fVar6 - fVar18 * param_6;
              pfVar9 = pfVar9 + 4;
            } while (iVar11 < (int)(param_3 - uVar10));
          }
        }
      }
    }
    if (iVar11 < param_3) {
      lVar14 = (longlong)iVar11;
      lVar13 = (longlong)param_4 - (longlong)param_2;
      if (3 < param_3 - iVar11) {
        pfVar8 = param_2 + lVar14 + 1;
        uVar10 = ((param_3 - iVar11) - 4U >> 2) + 1;
        uVar12 = (ulonglong)uVar10;
        iVar11 = iVar11 + uVar10 * 4;
        lVar14 = lVar14 + (ulonglong)uVar10 * 4;
        do {
          pfVar1 = (float *)((longlong)pfVar8 + ((longlong)param_5 - (longlong)param_2));
          fVar20 = param_6 * pfVar8[-1] +
                   *(float *)((longlong)pfVar8 + (longlong)param_1 + (-4 - (longlong)param_2));
          pfVar1[-1] = fVar20;
          *(float *)((longlong)pfVar8 + lVar13 + -4) = pfVar8[-1] - fVar20 * param_6;
          fVar20 = param_6 * *pfVar8 +
                   *(float *)((longlong)pfVar1 + ((longlong)param_1 - (longlong)param_5));
          *pfVar1 = fVar20;
          *(float *)((longlong)pfVar8 + lVar13) = *pfVar8 - fVar20 * param_6;
          fVar20 = param_6 * pfVar8[1] +
                   *(float *)((longlong)pfVar8 + (longlong)param_1 + (4 - (longlong)param_2));
          pfVar1[1] = fVar20;
          *(float *)((longlong)pfVar8 + lVar13 + 4) = pfVar8[1] - fVar20 * param_6;
          fVar20 = param_6 * pfVar8[2] +
                   *(float *)((longlong)pfVar8 + (longlong)param_1 + (8 - (longlong)param_2));
          pfVar1[2] = fVar20;
          *(float *)((longlong)pfVar8 + lVar13 + 8) = pfVar8[2] - fVar20 * param_6;
          pfVar8 = pfVar8 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        if (param_3 <= iVar11) {
          return;
        }
      }
      pfVar8 = param_2 + lVar14;
      lVar14 = (longlong)(param_3 - iVar11);
      do {
        pfVar1 = (float *)(((longlong)param_5 - (longlong)param_2) + (longlong)pfVar8);
        fVar20 = param_6 * *pfVar8 +
                 *(float *)(((longlong)param_1 - (longlong)param_5) + (longlong)pfVar1);
        *pfVar1 = fVar20;
        *(float *)(lVar13 + (longlong)pfVar8) = *pfVar8 - fVar20 * param_6;
        pfVar8 = pfVar8 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  return;
}

// ArrayAbs @ 1444aa410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Audio::ArrayAbs(TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  float *pfVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  float *pfVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  
  if (!__CsvProfilerStat553) {
    FCsvProfilerTrace::OutputInlineStat("ArrayAbs",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat553 = true;
  }
  uVar21 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayAbs",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayAbs");
  uVar5 = param_1->ArrayNum;
  lVar29 = (longlong)(int)uVar5;
  if (param_2->ArrayNum != uVar5) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("OutBuffer.Num() == Num",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x22b,L"");
    if (bVar22) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar20 = _UNK_15061cc7c;
  uVar19 = _UNK_15061cc78;
  uVar18 = _UNK_15061cc74;
  uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pfVar6 = param_1->DataPtr;
  pfVar7 = param_2->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled != false) {
    ::ArrayAbs(pfVar6,pfVar7);
    goto LAB_1444aa6b9;
  }
  uVar30 = uVar5 & 0xfffffffc;
  if ((uVar30 != 0) && (0 < (int)uVar30)) {
    lVar25 = ((longlong)(int)uVar30 - 1U >> 2) + 1;
    pfVar23 = pfVar7;
    do {
      puVar2 = (uint *)((longlong)pfVar23 + ((longlong)pfVar6 - (longlong)pfVar7));
      uVar27 = puVar2[1];
      uVar24 = puVar2[2];
      uVar9 = puVar2[3];
      *pfVar23 = (float)(*puVar2 & uVar17);
      pfVar23[1] = (float)(uVar27 & uVar18);
      pfVar23[2] = (float)(uVar24 & uVar19);
      pfVar23[3] = (float)(uVar9 & uVar20);
      lVar25 = lVar25 + -1;
      pfVar23 = pfVar23 + 4;
    } while (lVar25 != 0);
  }
  if ((uVar5 & 3) == 0) goto LAB_1444aa6b9;
  uVar27 = uVar5 - uVar30;
  if (((int)uVar30 < (int)uVar5) && (1 < uVar27)) {
    lVar25 = (longlong)(int)uVar30;
    if ((pfVar6 + (int)(uVar5 - 1) < pfVar7 + lVar25) ||
       (pfVar7 + (int)(uVar5 - 1) < pfVar6 + lVar25)) {
      if (0xf < uVar27) {
        uVar24 = uVar27 & 0x8000000f;
        if ((int)uVar24 < 0) {
          uVar24 = (uVar24 - 1 | 0xfffffff0) + 1;
        }
        lVar26 = (longlong)pfVar6 - (longlong)pfVar7;
        pfVar23 = pfVar7 + lVar25 + 4;
        do {
          puVar3 = (uint *)((longlong)pfVar23 + lVar26 + -0x10);
          uVar9 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          uVar30 = uVar30 + 0x10;
          lVar25 = lVar25 + 0x10;
          puVar2 = (uint *)((longlong)pfVar23 + lVar26);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          pfVar23[-4] = (float)(*puVar3 & uVar17);
          pfVar23[-3] = (float)(uVar9 & uVar18);
          pfVar23[-2] = (float)(uVar10 & uVar19);
          pfVar23[-1] = (float)(uVar11 & uVar20);
          puVar2 = (uint *)((longlong)pfVar23 + lVar26 + 0x10);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar16 = puVar2[3];
          *pfVar23 = (float)(uVar12 & uVar17);
          pfVar23[1] = (float)(uVar13 & uVar18);
          pfVar23[2] = (float)(uVar14 & uVar19);
          pfVar23[3] = (float)(uVar15 & uVar20);
          puVar2 = (uint *)((longlong)pfVar23 + lVar26 + 0x20);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          pfVar23[4] = (float)(uVar9 & uVar17);
          pfVar23[5] = (float)(uVar10 & uVar18);
          pfVar23[6] = (float)(uVar11 & uVar19);
          pfVar23[7] = (float)(uVar16 & uVar20);
          pfVar23[8] = (float)(uVar12 & uVar17);
          pfVar23[9] = (float)(uVar13 & uVar18);
          pfVar23[10] = (float)(uVar14 & uVar19);
          pfVar23[0xb] = (float)(uVar15 & uVar20);
          pfVar23 = pfVar23 + 0x10;
        } while (lVar25 < (int)(uVar5 - uVar24));
        if (((byte)uVar27 & 0xf) < 2) goto LAB_1444aa60e;
      }
      lVar25 = (longlong)(int)uVar30;
      uVar27 = uVar27 & 0x80000001;
      if ((int)uVar27 < 0) {
        uVar27 = (uVar27 - 1 | 0xfffffffe) + 1;
      }
      pfVar23 = pfVar7 + lVar25;
      do {
        uVar4 = *(undefined8 *)(((longlong)pfVar6 - (longlong)pfVar7) + (longlong)pfVar23);
        uVar30 = uVar30 + 2;
        lVar25 = lVar25 + 2;
        *(ulonglong *)pfVar23 =
             CONCAT44((uint)((ulonglong)uVar4 >> 0x20) & uVar18,(uint)uVar4 & uVar17);
        pfVar23 = pfVar23 + 2;
      } while (lVar25 < (int)(uVar5 - uVar27));
    }
  }
LAB_1444aa60e:
  lVar25 = (longlong)(int)uVar30;
  if (lVar25 < lVar29) {
    if (3 < lVar29 - lVar25) {
      lVar26 = lVar25 + 1;
      lVar28 = ((lVar29 - lVar25) - 4U >> 2) + 1;
      lVar25 = lVar25 + lVar28 * 4;
      pfVar23 = pfVar7 + lVar26;
      do {
        pfVar1 = pfVar23 + 4;
        pfVar23[-1] = (float)(*(uint *)((longlong)pfVar6 + (-4 - (longlong)pfVar7) +
                                       (longlong)pfVar23) & uVar17);
        *pfVar23 = (float)(*(uint *)((longlong)pfVar6 + (-0x10 - (longlong)pfVar7) +
                                    (longlong)pfVar1) & uVar17);
        pfVar23[1] = (float)(*(uint *)((longlong)pfVar6 + (-0xc - (longlong)pfVar7) +
                                      (longlong)pfVar1) & uVar17);
        pfVar23[2] = (float)(*(uint *)((longlong)pfVar6 + (-8 - (longlong)pfVar7) + (longlong)pfVar1
                                      ) & uVar17);
        lVar28 = lVar28 + -1;
        pfVar23 = pfVar1;
      } while (lVar28 != 0);
      if (lVar29 <= lVar25) goto LAB_1444aa6b9;
    }
    lVar29 = lVar29 - lVar25;
    pfVar23 = pfVar7 + lVar25;
    do {
      *pfVar23 = (float)(*(uint *)(((longlong)pfVar6 - (longlong)pfVar7) + (longlong)pfVar23) &
                        uVar17);
      lVar29 = lVar29 + -1;
      pfVar23 = pfVar23 + 1;
    } while (lVar29 != 0);
  }
LAB_1444aa6b9:
  FCsvProfiler::EndStat("ArrayAbs",uVar21);
  return;
}

// ArrayAbsInPlace @ 1444aa6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Audio::ArrayAbsInPlace(TArrayView<float,int> *param_1)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  float *pfVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  
  if (!__CsvProfilerStat593) {
    FCsvProfilerTrace::OutputInlineStat("ArrayAbsInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat593 = true;
  }
  uVar12 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayAbsInPlace",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayAbsInPlace");
  uVar11 = _UNK_15061cc7c;
  uVar10 = _UNK_15061cc78;
  uVar9 = _UNK_15061cc74;
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar2 = param_1->ArrayNum;
  lVar19 = (longlong)(int)uVar2;
  pfVar3 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled != false) {
    ::ArrayAbsInPlace(pfVar3,uVar2);
    goto LAB_1444aa8d7;
  }
  uVar17 = uVar2 & 0xfffffffc;
  if ((uVar17 != 0) && (0 < (int)uVar17)) {
    lVar13 = 0;
    do {
      pfVar14 = pfVar3 + lVar13;
      fVar4 = pfVar14[1];
      fVar5 = pfVar14[2];
      fVar6 = pfVar14[3];
      pfVar1 = pfVar3 + lVar13;
      *pfVar1 = (float)((uint)*pfVar14 & uVar8);
      pfVar1[1] = (float)((uint)fVar4 & uVar9);
      pfVar1[2] = (float)((uint)fVar5 & uVar10);
      pfVar1[3] = (float)((uint)fVar6 & uVar11);
      lVar13 = lVar13 + 4;
    } while (lVar13 < (int)uVar17);
  }
  if ((uVar2 & 3) == 0) goto LAB_1444aa8d7;
  uVar15 = uVar2 - uVar17;
  if (((int)uVar17 < (int)uVar2) && (1 < uVar15)) {
    if (0xf < uVar15) {
      lVar13 = (longlong)(int)uVar17;
      uVar18 = uVar15 & 0x8000000f;
      if ((int)uVar18 < 0) {
        uVar18 = (uVar18 - 1 | 0xfffffff0) + 1;
      }
      pfVar14 = pfVar3 + lVar13 + 8;
      do {
        uVar17 = uVar17 + 0x10;
        lVar13 = lVar13 + 0x10;
        pfVar14[-8] = (float)((uint)pfVar14[-8] & uVar8);
        pfVar14[-7] = (float)((uint)pfVar14[-7] & uVar9);
        pfVar14[-6] = (float)((uint)pfVar14[-6] & uVar10);
        pfVar14[-5] = (float)((uint)pfVar14[-5] & uVar11);
        pfVar14[-4] = (float)((uint)pfVar14[-4] & uVar8);
        pfVar14[-3] = (float)((uint)pfVar14[-3] & uVar9);
        pfVar14[-2] = (float)((uint)pfVar14[-2] & uVar10);
        pfVar14[-1] = (float)((uint)pfVar14[-1] & uVar11);
        *pfVar14 = (float)((uint)*pfVar14 & uVar8);
        pfVar14[1] = (float)((uint)pfVar14[1] & uVar9);
        pfVar14[2] = (float)((uint)pfVar14[2] & uVar10);
        pfVar14[3] = (float)((uint)pfVar14[3] & uVar11);
        pfVar14[4] = (float)((uint)pfVar14[4] & uVar8);
        pfVar14[5] = (float)((uint)pfVar14[5] & uVar9);
        pfVar14[6] = (float)((uint)pfVar14[6] & uVar10);
        pfVar14[7] = (float)((uint)pfVar14[7] & uVar11);
        pfVar14 = pfVar14 + 0x10;
      } while (lVar13 < (int)(uVar2 - uVar18));
      if (((byte)uVar15 & 0xf) < 2) goto LAB_1444aa86c;
    }
    lVar13 = (longlong)(int)uVar17;
    uVar15 = uVar15 & 0x80000001;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffffe) + 1;
    }
    do {
      uVar17 = uVar17 + 2;
      *(ulonglong *)(pfVar3 + lVar13) =
           CONCAT44((uint)((ulonglong)*(undefined8 *)(pfVar3 + lVar13) >> 0x20) & uVar9,
                    (uint)*(undefined8 *)(pfVar3 + lVar13) & uVar8);
      lVar13 = lVar13 + 2;
    } while (lVar13 < (int)(uVar2 - uVar15));
  }
LAB_1444aa86c:
  lVar13 = (longlong)(int)uVar17;
  if (lVar13 < lVar19) {
    if (3 < lVar19 - lVar13) {
      lVar7 = lVar13 + 2;
      lVar16 = ((lVar19 - lVar13) - 4U >> 2) + 1;
      lVar13 = lVar13 + lVar16 * 4;
      pfVar14 = pfVar3 + lVar7;
      do {
        pfVar14[-2] = (float)((uint)pfVar14[-2] & uVar8);
        pfVar14[-1] = (float)((uint)pfVar14[-1] & uVar9);
        *pfVar14 = (float)((uint)*pfVar14 & uVar10);
        pfVar14[1] = (float)((uint)pfVar14[1] & uVar11);
        lVar16 = lVar16 + -1;
        pfVar14 = pfVar14 + 4;
      } while (lVar16 != 0);
      if (lVar19 <= lVar13) goto LAB_1444aa8d7;
    }
    do {
      pfVar3[lVar13] = (float)((uint)pfVar3[lVar13] & uVar8);
      lVar13 = lVar13 + 1;
    } while (lVar13 < lVar19);
  }
LAB_1444aa8d7:
  FCsvProfiler::EndStat("ArrayAbsInPlace",uVar12);
  return;
}

// ArrayAddConstantInplace @ 1444aa900

void __cdecl Audio::ArrayAddConstantInplace(TArrayView<float,int> *param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  
  if (!__CsvProfilerStat1173) {
    FCsvProfilerTrace::OutputInlineStat("ArrayAddConstantInplace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1173 = true;
  }
  uVar7 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayAddConstantInplace",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayAddConstantInplace");
  uVar2 = param_1->ArrayNum;
  lVar13 = (longlong)(int)uVar2;
  pfVar3 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar12 = uVar2 & 0xfffffffc;
    if ((uVar12 != 0) && (0 < (int)uVar12)) {
      lVar8 = 0;
      do {
        pfVar9 = pfVar3 + lVar8;
        fVar4 = pfVar9[1];
        fVar5 = pfVar9[2];
        fVar6 = pfVar9[3];
        pfVar1 = pfVar3 + lVar8;
        *pfVar1 = *pfVar9 + param_2;
        pfVar1[1] = fVar4 + param_2;
        pfVar1[2] = fVar5 + param_2;
        pfVar1[3] = fVar6 + param_2;
        lVar8 = lVar8 + 4;
      } while (lVar8 < (int)uVar12);
    }
    if ((uVar2 & 3) != 0) {
      if (((int)uVar12 < (int)uVar2) && (0xf < uVar2 - uVar12)) {
        lVar8 = (longlong)(int)uVar12;
        uVar10 = uVar2 - uVar12 & 0x8000000f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
        }
        pfVar9 = pfVar3 + lVar8 + 8;
        do {
          uVar12 = uVar12 + 0x10;
          lVar8 = lVar8 + 0x10;
          pfVar9[-8] = pfVar9[-8] + param_2;
          pfVar9[-7] = pfVar9[-7] + param_2;
          pfVar9[-6] = pfVar9[-6] + param_2;
          pfVar9[-5] = pfVar9[-5] + param_2;
          pfVar9[-4] = param_2 + pfVar9[-4];
          pfVar9[-3] = param_2 + pfVar9[-3];
          pfVar9[-2] = param_2 + pfVar9[-2];
          pfVar9[-1] = param_2 + pfVar9[-1];
          *pfVar9 = *pfVar9 + param_2;
          pfVar9[1] = pfVar9[1] + param_2;
          pfVar9[2] = pfVar9[2] + param_2;
          pfVar9[3] = pfVar9[3] + param_2;
          pfVar9[4] = pfVar9[4] + param_2;
          pfVar9[5] = pfVar9[5] + param_2;
          pfVar9[6] = pfVar9[6] + param_2;
          pfVar9[7] = pfVar9[7] + param_2;
          pfVar9 = pfVar9 + 0x10;
        } while (lVar8 < (int)(uVar2 - uVar10));
      }
      lVar8 = (longlong)(int)uVar12;
      if (lVar8 < lVar13) {
        if (3 < lVar13 - lVar8) {
          pfVar9 = pfVar3 + lVar8 + 2;
          lVar11 = ((lVar13 - lVar8) - 4U >> 2) + 1;
          lVar8 = lVar8 + lVar11 * 4;
          do {
            pfVar9[-2] = param_2 + pfVar9[-2];
            pfVar9[-1] = param_2 + pfVar9[-1];
            *pfVar9 = param_2 + *pfVar9;
            pfVar9[1] = param_2 + pfVar9[1];
            pfVar9 = pfVar9 + 4;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          if (lVar13 <= lVar8) goto LAB_1444aaac8;
        }
        do {
          pfVar3[lVar8] = param_2 + pfVar3[lVar8];
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar13);
      }
    }
  }
  else {
    ::ArrayAddConstantInplace(pfVar3,uVar2,param_2);
  }
LAB_1444aaac8:
  FCsvProfiler::EndStat("ArrayAddConstantInplace",uVar7);
  return;
}

// ArrayAddInPlace @ 1444aaaf0

void __cdecl
Audio::ArrayAddInPlace(TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  bool bVar17;
  float *pfVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  
  if (!__CsvProfilerStat1129) {
    FCsvProfilerTrace::OutputInlineStat("ArrayAddInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1129 = true;
  }
  uVar16 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayAddInPlace",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayAddInPlace");
  if (param_1->ArrayNum != param_2->ArrayNum) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("InValues.Num() == InAccumulateValues.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x46b,L"");
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar4 = param_1->ArrayNum;
  lVar24 = (longlong)(int)uVar4;
  pfVar5 = param_1->DataPtr;
  pfVar6 = param_2->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled != false) {
    ::ArrayAddInPlace(pfVar5,pfVar6);
    goto LAB_1444aad9e;
  }
  uVar25 = uVar4 & 0xfffffffc;
  if ((uVar25 != 0) && (0 < (int)uVar25)) {
    lVar20 = ((longlong)(int)uVar25 - 1U >> 2) + 1;
    pfVar18 = pfVar6;
    do {
      pfVar1 = (float *)((longlong)pfVar18 + ((longlong)pfVar5 - (longlong)pfVar6));
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      *pfVar18 = *pfVar1 + *pfVar18;
      pfVar18[1] = fVar8 + pfVar18[1];
      pfVar18[2] = fVar9 + pfVar18[2];
      pfVar18[3] = fVar10 + pfVar18[3];
      pfVar18 = pfVar18 + 4;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  if ((uVar4 & 3) == 0) goto LAB_1444aad9e;
  uVar22 = uVar4 - uVar25;
  if (((int)uVar25 < (int)uVar4) && (1 < uVar22)) {
    lVar20 = (longlong)(int)uVar25;
    if ((pfVar5 + (int)(uVar4 - 1) < pfVar6 + lVar20) ||
       (pfVar6 + (int)(uVar4 - 1) < pfVar5 + lVar20)) {
      if (0xf < uVar22) {
        uVar19 = uVar22 & 0x8000000f;
        if ((int)uVar19 < 0) {
          uVar19 = (uVar19 - 1 | 0xfffffff0) + 1;
        }
        lVar21 = (longlong)pfVar5 - (longlong)pfVar6;
        pfVar18 = pfVar6 + lVar20 + 4;
        do {
          uVar25 = uVar25 + 0x10;
          lVar20 = lVar20 + 0x10;
          pfVar2 = (float *)((longlong)pfVar18 + lVar21 + -0x10);
          fVar8 = pfVar2[1];
          fVar9 = pfVar2[2];
          fVar10 = pfVar2[3];
          pfVar1 = (float *)((longlong)pfVar18 + lVar21);
          fVar11 = *pfVar1;
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar14 = pfVar1[3];
          pfVar18[-4] = *pfVar2 + pfVar18[-4];
          pfVar18[-3] = fVar8 + pfVar18[-3];
          pfVar18[-2] = fVar9 + pfVar18[-2];
          pfVar18[-1] = fVar10 + pfVar18[-1];
          pfVar1 = (float *)((longlong)pfVar18 + lVar21 + 0x10);
          fVar8 = *pfVar1;
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar15 = pfVar1[3];
          *pfVar18 = *pfVar18 + fVar11;
          pfVar18[1] = pfVar18[1] + fVar12;
          pfVar18[2] = pfVar18[2] + fVar13;
          pfVar18[3] = pfVar18[3] + fVar14;
          pfVar18[4] = fVar8 + pfVar18[4];
          pfVar18[5] = fVar9 + pfVar18[5];
          pfVar18[6] = fVar10 + pfVar18[6];
          pfVar18[7] = fVar15 + pfVar18[7];
          pfVar1 = (float *)((longlong)pfVar18 + lVar21 + 0x20);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar18[8] = *pfVar1 + pfVar18[8];
          pfVar18[9] = fVar8 + pfVar18[9];
          pfVar18[10] = fVar9 + pfVar18[10];
          pfVar18[0xb] = fVar10 + pfVar18[0xb];
          pfVar18 = pfVar18 + 0x10;
        } while (lVar20 < (int)(uVar4 - uVar19));
        if (((byte)uVar22 & 0xf) < 2) goto LAB_1444aacf1;
      }
      lVar20 = (longlong)(int)uVar25;
      uVar22 = uVar22 & 0x80000001;
      if ((int)uVar22 < 0) {
        uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
      }
      pfVar18 = pfVar6 + lVar20;
      do {
        uVar25 = uVar25 + 2;
        uVar3 = *(undefined8 *)(((longlong)pfVar5 - (longlong)pfVar6) + (longlong)pfVar18);
        lVar20 = lVar20 + 2;
        *(ulonglong *)pfVar18 =
             CONCAT44((float)((ulonglong)uVar3 >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)pfVar18 >> 0x20),
                      (float)uVar3 + (float)*(undefined8 *)pfVar18);
        pfVar18 = pfVar18 + 2;
      } while (lVar20 < (int)(uVar4 - uVar22));
    }
  }
LAB_1444aacf1:
  lVar20 = (longlong)(int)uVar25;
  if (lVar20 < lVar24) {
    if (3 < lVar24 - lVar20) {
      pfVar18 = pfVar6 + lVar20 + 1;
      lVar21 = (longlong)pfVar5 - (longlong)pfVar6;
      lVar23 = ((lVar24 - lVar20) - 4U >> 2) + 1;
      lVar20 = lVar20 + lVar23 * 4;
      do {
        pfVar18[-1] = *(float *)(lVar21 + -4 + (longlong)pfVar18) + pfVar18[-1];
        *pfVar18 = *(float *)(lVar21 + (longlong)pfVar18) + *pfVar18;
        pfVar18[1] = *(float *)(lVar21 + 4 + (longlong)pfVar18) + pfVar18[1];
        pfVar18[2] = *(float *)(lVar21 + 8 + (longlong)pfVar18) + pfVar18[2];
        pfVar18 = pfVar18 + 4;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      if (lVar24 <= lVar20) goto LAB_1444aad9e;
    }
    pfVar18 = pfVar6 + lVar20;
    lVar24 = lVar24 - lVar20;
    do {
      *pfVar18 = *(float *)(((longlong)pfVar5 - (longlong)pfVar6) + (longlong)pfVar18) + *pfVar18;
      pfVar18 = pfVar18 + 1;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
LAB_1444aad9e:
  FCsvProfiler::EndStat("ArrayAddInPlace",uVar16);
  return;
}

// ArrayClampInPlace @ 1444abec0

void __cdecl Audio::ArrayClampInPlace(TArrayView<float,int> *param_1,float param_2,float param_3)

{
  uint uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  float *pfVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  float fVar22;
  undefined1 auVar23 [16];
  ulonglong uVar21;
  
  if (!__CsvProfilerStat671) {
    FCsvProfilerTrace::OutputInlineStat("ArrayClampInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat671 = true;
  }
  uVar12 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayClampInPlace",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayClampInPlace")
  ;
  uVar1 = param_1->ArrayNum;
  lVar19 = (longlong)(int)uVar1;
  pfVar2 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar17 = 0;
    uVar20 = 0;
    if ((0 < (int)uVar1) && (0xf < uVar1)) {
      uVar15 = uVar1 & 0x8000000f;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
      }
      pauVar13 = (undefined1 (*) [16])(pfVar2 + 8);
      uVar21 = uVar17;
      do {
        uVar20 = (int)uVar21 + 0x10;
        uVar21 = (ulonglong)uVar20;
        uVar17 = uVar17 + 0x10;
        auVar23._4_4_ = param_3;
        auVar23._0_4_ = param_3;
        auVar23._8_4_ = param_3;
        auVar23._12_4_ = param_3;
        auVar23 = minps(pauVar13[-2],auVar23);
        auVar6._4_4_ = param_2;
        auVar6._0_4_ = param_2;
        auVar6._8_4_ = param_2;
        auVar6._12_4_ = param_2;
        auVar23 = maxps(auVar23,auVar6);
        pauVar13[-2] = auVar23;
        auVar3._4_4_ = param_3;
        auVar3._0_4_ = param_3;
        auVar3._8_4_ = param_3;
        auVar3._12_4_ = param_3;
        auVar23 = minps(pauVar13[-1],auVar3);
        auVar7._4_4_ = param_2;
        auVar7._0_4_ = param_2;
        auVar7._8_4_ = param_2;
        auVar7._12_4_ = param_2;
        auVar23 = maxps(auVar23,auVar7);
        pauVar13[-1] = auVar23;
        auVar4._4_4_ = param_3;
        auVar4._0_4_ = param_3;
        auVar4._8_4_ = param_3;
        auVar4._12_4_ = param_3;
        auVar23 = minps(*pauVar13,auVar4);
        auVar8._4_4_ = param_2;
        auVar8._0_4_ = param_2;
        auVar8._8_4_ = param_2;
        auVar8._12_4_ = param_2;
        auVar23 = maxps(auVar23,auVar8);
        *pauVar13 = auVar23;
        auVar5._4_4_ = param_3;
        auVar5._0_4_ = param_3;
        auVar5._8_4_ = param_3;
        auVar5._12_4_ = param_3;
        auVar23 = minps(pauVar13[1],auVar5);
        auVar9._4_4_ = param_2;
        auVar9._0_4_ = param_2;
        auVar9._8_4_ = param_2;
        auVar9._12_4_ = param_2;
        auVar23 = maxps(auVar23,auVar9);
        pauVar13[1] = auVar23;
        pauVar13 = pauVar13 + 4;
      } while ((longlong)uVar17 < (longlong)(int)(uVar1 - uVar15));
    }
    lVar18 = (longlong)(int)uVar20;
    if (lVar18 < lVar19) {
      if (3 < lVar19 - lVar18) {
        lVar11 = lVar18 + 2;
        lVar16 = ((lVar19 - lVar18) - 4U >> 2) + 1;
        lVar18 = lVar18 + lVar16 * 4;
        pfVar14 = pfVar2 + lVar11;
        do {
          fVar10 = pfVar14[-1];
          if (param_3 <= pfVar14[-1]) {
            fVar10 = param_3;
          }
          fVar22 = param_3;
          if (pfVar14[-2] <= param_3) {
            fVar22 = pfVar14[-2];
          }
          if (fVar10 <= param_2) {
            fVar10 = param_2;
          }
          if (fVar22 <= param_2) {
            fVar22 = param_2;
          }
          pfVar14[-1] = fVar10;
          pfVar14[-2] = fVar22;
          fVar10 = *pfVar14;
          if (param_3 <= *pfVar14) {
            fVar10 = param_3;
          }
          fVar22 = param_3;
          if (pfVar14[1] <= param_3) {
            fVar22 = pfVar14[1];
          }
          if (fVar10 <= param_2) {
            fVar10 = param_2;
          }
          if (fVar22 <= param_2) {
            fVar22 = param_2;
          }
          *pfVar14 = fVar10;
          pfVar14[1] = fVar22;
          lVar16 = lVar16 + -1;
          pfVar14 = pfVar14 + 4;
        } while (lVar16 != 0);
        if (lVar19 <= lVar18) goto LAB_1444ac09c;
      }
      do {
        fVar10 = pfVar2[lVar18];
        if (param_3 <= pfVar2[lVar18]) {
          fVar10 = param_3;
        }
        if (fVar10 <= param_2) {
          fVar10 = param_2;
        }
        pfVar2[lVar18] = fVar10;
        lVar18 = lVar18 + 1;
      } while (lVar18 < lVar19);
    }
  }
  else {
    ::ArrayClampInPlace(pfVar2,pfVar2,param_3);
  }
LAB_1444ac09c:
  FCsvProfiler::EndStat("ArrayClampInPlace",uVar12);
  return;
}

// ArrayClampMaxInPlace @ 1444ac0d0

void __cdecl Audio::ArrayClampMaxInPlace(TArrayView<float,int> *param_1,float param_2)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulonglong uVar14;
  
  if (!__CsvProfilerStat650) {
    FCsvProfilerTrace::OutputInlineStat("ArrayClampMaxInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat650 = true;
  }
  uVar5 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayClampMaxInPlace",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayClampMaxInPlace");
  uVar1 = param_1->ArrayNum;
  lVar12 = (longlong)(int)uVar1;
  pfVar2 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar10 = 0;
    uVar13 = 0;
    if ((0 < (int)uVar1) && (0xf < uVar1)) {
      uVar8 = uVar1 & 0x8000000f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
      }
      pauVar6 = (undefined1 (*) [16])(pfVar2 + 8);
      uVar14 = uVar10;
      do {
        uVar13 = (int)uVar14 + 0x10;
        uVar14 = (ulonglong)uVar13;
        auVar16._4_4_ = param_2;
        auVar16._0_4_ = param_2;
        auVar16._8_4_ = param_2;
        auVar16._12_4_ = param_2;
        uVar10 = uVar10 + 0x10;
        auVar16 = minps(auVar16,pauVar6[-2]);
        pauVar6[-2] = auVar16;
        auVar17._4_4_ = param_2;
        auVar17._0_4_ = param_2;
        auVar17._8_4_ = param_2;
        auVar17._12_4_ = param_2;
        auVar16 = minps(auVar17,pauVar6[-1]);
        pauVar6[-1] = auVar16;
        auVar18._4_4_ = param_2;
        auVar18._0_4_ = param_2;
        auVar18._8_4_ = param_2;
        auVar18._12_4_ = param_2;
        auVar16 = minps(auVar18,*pauVar6);
        *pauVar6 = auVar16;
        auVar19._4_4_ = param_2;
        auVar19._0_4_ = param_2;
        auVar19._8_4_ = param_2;
        auVar19._12_4_ = param_2;
        auVar16 = minps(auVar19,pauVar6[1]);
        pauVar6[1] = auVar16;
        pauVar6 = pauVar6 + 4;
      } while ((longlong)uVar10 < (longlong)(int)(uVar1 - uVar8));
    }
    lVar11 = (longlong)(int)uVar13;
    if (lVar11 < lVar12) {
      if (3 < lVar12 - lVar11) {
        lVar4 = lVar11 + 2;
        lVar9 = ((lVar12 - lVar11) - 4U >> 2) + 1;
        lVar11 = lVar11 + lVar9 * 4;
        pfVar7 = pfVar2 + lVar4;
        do {
          fVar15 = pfVar7[-2];
          if (param_2 <= pfVar7[-2]) {
            fVar15 = param_2;
          }
          fVar3 = pfVar7[-1];
          if (param_2 <= pfVar7[-1]) {
            fVar3 = param_2;
          }
          pfVar7[-2] = fVar15;
          pfVar7[-1] = fVar3;
          fVar15 = *pfVar7;
          if (param_2 <= *pfVar7) {
            fVar15 = param_2;
          }
          fVar3 = pfVar7[1];
          if (param_2 <= pfVar7[1]) {
            fVar3 = param_2;
          }
          *pfVar7 = fVar15;
          pfVar7[1] = fVar3;
          lVar9 = lVar9 + -1;
          pfVar7 = pfVar7 + 4;
        } while (lVar9 != 0);
        if (lVar12 <= lVar11) goto LAB_1444ac268;
      }
      do {
        fVar15 = pfVar2[lVar11];
        if (param_2 <= pfVar2[lVar11]) {
          fVar15 = param_2;
        }
        pfVar2[lVar11] = fVar15;
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar12);
    }
  }
  else {
    ::ArrayClampMaxInPlace(pfVar2,pfVar2,uVar1);
  }
LAB_1444ac268:
  FCsvProfiler::EndStat("ArrayClampMaxInPlace",uVar5);
  return;
}

// ArrayClampMinInPlace @ 1444ac290

void __cdecl Audio::ArrayClampMinInPlace(TArrayView<float,int> *param_1,float param_2)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulonglong uVar14;
  
  if (!__CsvProfilerStat629) {
    FCsvProfilerTrace::OutputInlineStat("ArrayClampMinInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat629 = true;
  }
  uVar5 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayClampMinInPlace",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayClampMinInPlace");
  uVar1 = param_1->ArrayNum;
  lVar12 = (longlong)(int)uVar1;
  pfVar2 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar10 = 0;
    uVar13 = 0;
    if ((0 < (int)uVar1) && (0xf < uVar1)) {
      uVar8 = uVar1 & 0x8000000f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
      }
      pauVar6 = (undefined1 (*) [16])(pfVar2 + 8);
      uVar14 = uVar10;
      do {
        uVar13 = (int)uVar14 + 0x10;
        uVar14 = (ulonglong)uVar13;
        auVar16._4_4_ = param_2;
        auVar16._0_4_ = param_2;
        auVar16._8_4_ = param_2;
        auVar16._12_4_ = param_2;
        uVar10 = uVar10 + 0x10;
        auVar16 = maxps(auVar16,pauVar6[-2]);
        pauVar6[-2] = auVar16;
        auVar17._4_4_ = param_2;
        auVar17._0_4_ = param_2;
        auVar17._8_4_ = param_2;
        auVar17._12_4_ = param_2;
        auVar16 = maxps(auVar17,pauVar6[-1]);
        pauVar6[-1] = auVar16;
        auVar18._4_4_ = param_2;
        auVar18._0_4_ = param_2;
        auVar18._8_4_ = param_2;
        auVar18._12_4_ = param_2;
        auVar16 = maxps(auVar18,*pauVar6);
        *pauVar6 = auVar16;
        auVar19._4_4_ = param_2;
        auVar19._0_4_ = param_2;
        auVar19._8_4_ = param_2;
        auVar19._12_4_ = param_2;
        auVar16 = maxps(auVar19,pauVar6[1]);
        pauVar6[1] = auVar16;
        pauVar6 = pauVar6 + 4;
      } while ((longlong)uVar10 < (longlong)(int)(uVar1 - uVar8));
    }
    lVar11 = (longlong)(int)uVar13;
    if (lVar11 < lVar12) {
      if (3 < lVar12 - lVar11) {
        lVar4 = lVar11 + 2;
        lVar9 = ((lVar12 - lVar11) - 4U >> 2) + 1;
        lVar11 = lVar11 + lVar9 * 4;
        pfVar7 = pfVar2 + lVar4;
        do {
          fVar15 = pfVar7[-2];
          if (pfVar7[-2] <= param_2) {
            fVar15 = param_2;
          }
          fVar3 = pfVar7[-1];
          if (pfVar7[-1] <= param_2) {
            fVar3 = param_2;
          }
          pfVar7[-2] = fVar15;
          pfVar7[-1] = fVar3;
          fVar15 = *pfVar7;
          if (*pfVar7 <= param_2) {
            fVar15 = param_2;
          }
          fVar3 = pfVar7[1];
          if (pfVar7[1] <= param_2) {
            fVar3 = param_2;
          }
          *pfVar7 = fVar15;
          pfVar7[1] = fVar3;
          lVar9 = lVar9 + -1;
          pfVar7 = pfVar7 + 4;
        } while (lVar9 != 0);
        if (lVar12 <= lVar11) goto LAB_1444ac428;
      }
      do {
        fVar15 = pfVar2[lVar11];
        if (pfVar2[lVar11] <= param_2) {
          fVar15 = param_2;
        }
        pfVar2[lVar11] = fVar15;
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar12);
    }
  }
  else {
    ::ArrayClampMinInPlace(pfVar2,pfVar2,uVar1);
  }
LAB_1444ac428:
  FCsvProfiler::EndStat("ArrayClampMinInPlace",uVar5);
  return;
}

// ArrayComplexConjugate @ 1444ac450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::ArrayComplexConjugate(TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  bool bVar15;
  float *pfVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  
  if (!__CsvProfilerStat1552) {
    FCsvProfilerTrace::OutputInlineStat("ArrayComplexConjugate",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1552 = true;
  }
  uVar14 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayComplexConjugate",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayComplexConjugate");
  if (param_2->ArrayNum != param_1->ArrayNum) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("OutValues.Num() == InValues.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x612,L"");
    if (bVar15) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((param_1->ArrayNum & 1) != 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InValues.Num() % 2) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x613,L"");
    if (bVar15) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar13 = _UNK_15076c64c;
  fVar12 = _UNK_15076c648;
  fVar11 = _UNK_15076c644;
  fVar10 = ___xmm_bf8000003f800000bf8000003f800000;
  uVar2 = param_1->ArrayNum;
  pfVar3 = param_1->DataPtr;
  pfVar4 = param_2->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar18 = uVar2 & 0xfffffffc;
    if ((uVar18 != 0) && (0 < (int)uVar18)) {
      lVar17 = ((longlong)(int)uVar18 - 1U >> 2) + 1;
      pfVar16 = pfVar4;
      do {
        pfVar1 = (float *)(((longlong)pfVar3 - (longlong)pfVar4) + (longlong)pfVar16);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        *pfVar16 = *pfVar1 * fVar10;
        pfVar16[1] = fVar6 * fVar11;
        pfVar16[2] = fVar7 * fVar12;
        pfVar16[3] = fVar8 * fVar13;
        lVar17 = lVar17 + -1;
        pfVar16 = pfVar16 + 4;
      } while (lVar17 != 0);
    }
    uVar9 = __xmm_80000000800000008000000080000000;
    if (((uVar2 & 3) != 0) && (lVar17 = (longlong)(int)uVar18, lVar17 < (int)uVar2)) {
      lVar19 = (((int)uVar2 - lVar17) - 1U >> 1) + 1;
      pfVar16 = pfVar4 + lVar17 + 1;
      do {
        pfVar16[-1] = *(float *)(((longlong)pfVar3 - (longlong)pfVar4) + -4 + (longlong)pfVar16);
        *pfVar16 = (float)(*(uint *)(((longlong)pfVar3 - (longlong)pfVar4) + (longlong)pfVar16) ^
                          uVar9);
        lVar19 = lVar19 + -1;
        pfVar16 = pfVar16 + 2;
      } while (lVar19 != 0);
    }
  }
  else {
    ::ArrayComplexConjugate(pfVar3,pfVar4);
  }
  FCsvProfiler::EndStat("ArrayComplexConjugate",uVar14);
  return;
}

// ArrayComplexConjugateInPlace @ 1444ac5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Audio::ArrayComplexConjugateInPlace(TArrayView<float,int> *param_1)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  float *pfVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  
  if (!__CsvProfilerStat1600) {
    FCsvProfilerTrace::OutputInlineStat
              ("ArrayComplexConjugateInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1600 = true;
  }
  uVar12 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayComplexConjugateInPlace",_GCsvCategory_Audio_Dsp.Index,
             "CSV_ArrayComplexConjugateInPlace");
  if ((param_1->ArrayNum & 1) != 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InValues.Num() % 2) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x642,L"");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar11 = _UNK_15076c64c;
  fVar10 = _UNK_15076c648;
  fVar9 = _UNK_15076c644;
  fVar8 = ___xmm_bf8000003f800000bf8000003f800000;
  uVar17 = param_1->ArrayNum;
  lVar18 = (longlong)(int)uVar17;
  pfVar2 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar19 = uVar17 & 0xfffffffc;
    if ((uVar19 != 0) && (0 < (int)uVar19)) {
      lVar15 = 0;
      do {
        pfVar16 = pfVar2 + lVar15;
        fVar4 = pfVar16[1];
        fVar5 = pfVar16[2];
        fVar6 = pfVar16[3];
        pfVar1 = pfVar2 + lVar15;
        *pfVar1 = fVar8 * *pfVar16;
        pfVar1[1] = fVar9 * fVar4;
        pfVar1[2] = fVar10 * fVar5;
        pfVar1[3] = fVar11 * fVar6;
        lVar15 = lVar15 + 4;
      } while (lVar15 < (int)uVar19);
    }
    uVar7 = __xmm_80000000800000008000000080000000;
    if (((uVar17 & 3) != 0) && (lVar15 = (longlong)(int)uVar19, lVar15 < lVar18)) {
      if (3 < lVar18 - lVar15) {
        pfVar16 = pfVar2 + lVar15 + 2;
        uVar17 = uVar19 + 2;
        lVar20 = ((lVar18 - lVar15) - 4U >> 2) + 1;
        lVar15 = lVar15 + lVar20 * 4;
        do {
          uVar14 = uVar19 & 0x80000001;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffffe) + 1;
          }
          if (uVar14 == 1) {
            pfVar16[-2] = (float)((uint)pfVar16[-2] ^ uVar7);
          }
          uVar14 = uVar17 - 1 & 0x80000001;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffffe) + 1;
          }
          if (uVar14 == 1) {
            pfVar16[-1] = (float)((uint)pfVar16[-1] ^ uVar7);
          }
          uVar14 = uVar17 & 0x80000001;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffffe) + 1;
          }
          if (uVar14 == 1) {
            *pfVar16 = (float)((uint)*pfVar16 ^ uVar7);
          }
          uVar14 = uVar17 + 1 & 0x80000001;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffffe) + 1;
          }
          if (uVar14 == 1) {
            pfVar16[1] = (float)((uint)pfVar16[1] ^ uVar7);
          }
          uVar19 = uVar19 + 4;
          uVar17 = uVar17 + 4;
          pfVar16 = pfVar16 + 4;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        if (lVar18 <= lVar15) goto LAB_1444ac7f3;
      }
      do {
        uVar17 = uVar19 & 0x80000001;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xfffffffe) + 1;
        }
        if (uVar17 == 1) {
          pfVar2[lVar15] = (float)((uint)pfVar2[lVar15] ^ uVar7);
        }
        uVar19 = uVar19 + 1;
        lVar15 = lVar15 + 1;
      } while (lVar15 < lVar18);
    }
  }
  else {
    ::ArrayComplexConjugateInPlace(pfVar2);
  }
LAB_1444ac7f3:
  FCsvProfiler::EndStat("ArrayComplexConjugateInPlace",uVar12);
  return;
}

// ArrayComplexMultiplyAdd @ 1444ac820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::ArrayComplexMultiplyAdd
          (TArrayView<float_const_,int> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<float,int> *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  bool bVar18;
  float *pfVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  
  if (!__CsvProfilerStat959) {
    FCsvProfilerTrace::OutputInlineStat("ArrayComplexMultiplyAdd",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat959 = true;
  }
  uVar17 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayComplexMultiplyAdd",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayComplexMultiplyAdd");
  if (param_1->ArrayNum != param_2->ArrayNum) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("InValues1.Num() == InValues2.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x3c1,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_3->ArrayNum != param_1->ArrayNum) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("OutArray.Num() == InValues1.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x3c2,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar16 = _UNK_150d5662c;
  fVar15 = _UNK_150d56628;
  fVar14 = _UNK_150d56624;
  fVar13 = ___xmm_3f800000bf8000003f800000bf800000;
  uVar22 = (ulonglong)param_1->ArrayNum;
  pfVar2 = param_2->DataPtr;
  pfVar3 = param_3->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar21 = uVar22 & 0xfffffffffffffffc;
    lVar20 = (longlong)param_1->DataPtr - (longlong)pfVar2;
    if (0 < (longlong)uVar21) {
      lVar23 = (uVar21 - 1 >> 2) + 1;
      pfVar19 = pfVar3;
      do {
        pfVar1 = (float *)(((longlong)pfVar2 - (longlong)pfVar3) + (longlong)pfVar19);
        fVar5 = *pfVar1;
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar1 = (float *)((longlong)pfVar19 + lVar20 + ((longlong)pfVar2 - (longlong)pfVar3));
        fVar9 = *pfVar1;
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        *pfVar19 = fVar10 * fVar6 * fVar13 + fVar5 * fVar9 + *pfVar19;
        pfVar19[1] = fVar9 * fVar6 * fVar14 + fVar5 * fVar10 + pfVar19[1];
        pfVar19[2] = fVar12 * fVar8 * fVar15 + fVar7 * fVar11 + pfVar19[2];
        pfVar19[3] = fVar11 * fVar8 * fVar16 + fVar7 * fVar12 + pfVar19[3];
        pfVar19 = pfVar19 + 4;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    if ((longlong)uVar21 < (longlong)uVar22) {
      pfVar19 = pfVar2 + uVar21 + 1;
      lVar23 = (longlong)pfVar3 - (longlong)pfVar2;
      lVar24 = ((uVar22 - uVar21) - 1 >> 1) + 1;
      do {
        *(float *)(lVar23 + -4 + (longlong)pfVar19) =
             (pfVar19[-1] * *(float *)((longlong)pfVar19 + lVar20 + -4) -
             *pfVar19 * *(float *)(lVar20 + (longlong)pfVar19)) +
             *(float *)(lVar23 + -4 + (longlong)pfVar19);
        *(float *)(lVar23 + (longlong)pfVar19) =
             pfVar19[-1] * *(float *)(lVar20 + (longlong)pfVar19) +
             *pfVar19 * *(float *)((longlong)pfVar19 + lVar20 + -4) +
             *(float *)(lVar23 + (longlong)pfVar19);
        pfVar19 = pfVar19 + 2;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
  }
  else {
    ::ArrayComplexMultiplyAdd(param_1->DataPtr,pfVar2,pfVar3,param_1->ArrayNum);
  }
  FCsvProfiler::EndStat("ArrayComplexMultiplyAdd",uVar17);
  return;
}

// ArrayComplexMultiplyInPlace @ 1444aca20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::ArrayComplexMultiplyInPlace
          (TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  bool bVar17;
  longlong lVar18;
  float *pfVar19;
  uint uVar20;
  ulonglong uVar21;
  
  if (!__CsvProfilerStat901) {
    FCsvProfilerTrace::OutputInlineStat("ArrayComplexMultiplyInPlace",_GCsvCategory_Audio_Dsp.Index)
    ;
    __CsvProfilerStat901 = true;
  }
  uVar16 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayComplexMultiplyInPlace",_GCsvCategory_Audio_Dsp.Index,
             "CSV_ArrayComplexMultiplyInPlace");
  if (param_1->ArrayNum != param_2->ArrayNum) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("InValues1.Num() == InValues2.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x386,L"");
    if (bVar17) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar5 = param_1->ArrayNum;
  uVar21 = (ulonglong)(int)uVar5;
  if ((uVar21 & 1) != 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Num % 2) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x38b,L"");
    if (bVar17) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar15 = _UNK_150d5662c;
  fVar4 = _UNK_150d56628;
  fVar3 = _UNK_150d56624;
  fVar2 = ___xmm_3f800000bf8000003f800000bf800000;
  pfVar6 = param_1->DataPtr;
  pfVar7 = param_2->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar20 = uVar5 & 0xfffffffc;
    if (uVar20 != 0) {
      if (0 < (int)uVar20) {
        lVar18 = ((longlong)(int)uVar20 - 1U >> 2) + 1;
        pfVar19 = pfVar7;
        do {
          fVar9 = *pfVar19;
          fVar10 = pfVar19[2];
          pfVar1 = (float *)(((longlong)pfVar6 - (longlong)pfVar7) + (longlong)pfVar19);
          fVar11 = *pfVar1;
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar14 = pfVar1[3];
          *pfVar19 = pfVar19[1] * fVar12 * fVar2 + fVar11 * fVar9;
          pfVar19[1] = fVar9 * fVar12 * fVar3 + fVar11 * pfVar19[1];
          pfVar19[2] = pfVar19[3] * fVar14 * fVar4 + fVar13 * fVar10;
          pfVar19[3] = fVar10 * fVar14 * fVar15 + fVar13 * pfVar19[3];
          pfVar19 = pfVar19 + 4;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
    }
    if (((uVar5 & 3) != 0) && (lVar18 = (longlong)(int)uVar20, lVar18 < (longlong)uVar21)) {
      pfVar19 = pfVar7 + lVar18 + 1;
      lVar18 = ((uVar21 - lVar18) - 1 >> 1) + 1;
      do {
        fVar2 = *(float *)(((longlong)pfVar6 - (longlong)pfVar7) + (longlong)pfVar19);
        fVar3 = *(float *)(((longlong)pfVar6 - (longlong)pfVar7) + -4 + (longlong)pfVar19);
        fVar4 = pfVar19[-1];
        pfVar19[-1] = fVar4 * fVar3 - fVar2 * *pfVar19;
        *pfVar19 = fVar3 * *pfVar19 + fVar4 * fVar2;
        pfVar19 = pfVar19 + 2;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
  else {
    ::ArrayComplexMultiplyInPlace(pfVar6,pfVar7,uVar5);
  }
  FCsvProfiler::EndStat("ArrayComplexMultiplyInPlace",uVar16);
  return;
}

// ArrayComplexToPower @ 1444acc00

void __cdecl
Audio::ArrayComplexToPower
          (TArrayView<float_const_,int> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<float,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  
  if (!__CsvProfilerStat1803) {
    FCsvProfilerTrace::OutputInlineStat("ArrayComplexToPower",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1803 = true;
  }
  uVar12 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayComplexToPower",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayComplexToPower");
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRealSamples.Num() == InImaginarySamples.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x70d,L"Input buffers must have equal number of elements"), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = param_1->ArrayNum;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar16 = uVar5 & 0xfffffffc;
    if (uVar16 != 0) {
      uVar14 = 0;
      if (0 < (int)uVar16) {
        lVar15 = 0;
        do {
          uVar17 = ~uVar14 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar18 = uVar17;
          }
          if ((uVar18 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pfVar6 = param_1->DataPtr + lVar15;
          fVar1 = *pfVar6;
          fVar2 = pfVar6[1];
          fVar3 = pfVar6[2];
          fVar4 = pfVar6[3];
          uVar18 = 0;
          if ((int)uVar14 < param_2->ArrayNum) {
            uVar18 = uVar17;
          }
          if ((uVar18 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pfVar6 = param_2->DataPtr + lVar15;
          fVar8 = *pfVar6;
          fVar9 = pfVar6[1];
          fVar10 = pfVar6[2];
          fVar11 = pfVar6[3];
          uVar18 = 0;
          if ((int)uVar14 < param_3->ArrayNum) {
            uVar18 = uVar17;
          }
          if ((uVar18 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar14 = uVar14 + 4;
          pfVar6 = param_3->DataPtr + lVar15;
          *pfVar6 = fVar8 * fVar8 + fVar1 * fVar1;
          pfVar6[1] = fVar9 * fVar9 + fVar2 * fVar2;
          pfVar6[2] = fVar10 * fVar10 + fVar3 * fVar3;
          pfVar6[3] = fVar11 * fVar11 + fVar4 * fVar4;
          lVar15 = lVar15 + 4;
        } while (lVar15 < (int)uVar16);
      }
    }
    if ((uVar5 & 3) != 0) {
      lVar15 = (longlong)(int)uVar16;
      if (lVar15 < (int)uVar5) {
        lVar19 = lVar15 * 4;
        do {
          uVar18 = ~uVar16 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar16 < param_1->ArrayNum) {
            uVar14 = uVar18;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pfVar6 = param_1->DataPtr;
          uVar14 = 0;
          if ((int)uVar16 < param_1->ArrayNum) {
            uVar14 = uVar18;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar1 = param_1->DataPtr[lVar15];
          fVar2 = *(float *)((longlong)pfVar6 + lVar19);
          uVar14 = 0;
          if ((int)uVar16 < param_2->ArrayNum) {
            uVar14 = uVar18;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pfVar6 = param_2->DataPtr;
          uVar14 = 0;
          if ((int)uVar16 < param_2->ArrayNum) {
            uVar14 = uVar18;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar3 = pfVar6[lVar15];
          fVar4 = param_2->DataPtr[lVar15];
          uVar14 = 0;
          if ((int)uVar16 < param_3->ArrayNum) {
            uVar14 = uVar18;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar16 = uVar16 + 1;
          lVar19 = lVar19 + 4;
          param_3->DataPtr[lVar15] = fVar3 * fVar4 + fVar1 * fVar2;
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)uVar5);
      }
    }
  }
  else {
    ::ArrayComplexToPower(param_1->DataPtr,param_2->DataPtr,param_3->DataPtr,uVar5);
  }
  FCsvProfiler::EndStat("ArrayComplexToPower",uVar12);
  return;
}

// ArrayComplexToPower @ 1444ad030

void __cdecl
Audio::ArrayComplexToPower(TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  uint uVar18;
  float *pfVar19;
  float *pfVar20;
  longlong lVar21;
  float *pfVar22;
  
  if (!__CsvProfilerStat1746) {
    FCsvProfilerTrace::OutputInlineStat("ArrayComplexToPower",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1746 = true;
  }
  uVar13 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayComplexToPower",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayComplexToPower");
  if ((param_1->ArrayNum & 1) != 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InComplexValues.Num() % 2) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x6d4,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (param_1->ArrayNum != param_2->ArrayNum * 2) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InComplexValues.Num() == (OutPowerValues.Num() * 2)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x6d5,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pfVar5 = param_1->DataPtr;
  pfVar17 = param_2->DataPtr;
  uVar4 = param_2->ArrayNum;
  lVar21 = (longlong)(int)uVar4;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar18 = uVar4 & 0xfffffffc;
    if ((uVar18 != 0) && (0 < (int)uVar18)) {
      lVar15 = 0;
      pfVar20 = pfVar17;
      do {
        pfVar19 = pfVar5 + lVar15 * 2;
        fVar3 = pfVar19[2];
        fVar7 = pfVar19[3];
        pfVar22 = pfVar5 + lVar15 * 2 + 4;
        fVar8 = *pfVar22;
        fVar9 = pfVar22[1];
        fVar10 = pfVar22[2];
        fVar11 = pfVar22[3];
        lVar15 = lVar15 + 4;
        *pfVar20 = pfVar19[1] * pfVar19[1] + *pfVar19 * *pfVar19;
        pfVar20[1] = fVar7 * fVar7 + fVar3 * fVar3;
        pfVar20[2] = fVar9 * fVar9 + fVar8 * fVar8;
        pfVar20[3] = fVar11 * fVar11 + fVar10 * fVar10;
        pfVar20 = pfVar20 + 4;
      } while (lVar15 < (int)uVar18);
    }
    if (((uVar4 & 3) != 0) && (lVar15 = (longlong)(int)uVar18, lVar15 < lVar21)) {
      if (3 < lVar21 - lVar15) {
        pfVar20 = pfVar17 + lVar15 + 2;
        lVar16 = ((lVar21 - lVar15) - 4U >> 2) + 1;
        pfVar19 = pfVar5 + lVar15 * 2 + 3;
        pfVar22 = pfVar5 + lVar15 * 2 + 2;
        lVar15 = lVar15 + lVar16 * 4;
        do {
          pfVar20[-2] = pfVar19[-2] * pfVar19[-2] + pfVar19[-3] * pfVar19[-3];
          fVar3 = *pfVar22;
          pfVar22 = pfVar22 + 8;
          pfVar20[-1] = *pfVar19 * *pfVar19 + fVar3 * fVar3;
          *pfVar20 = pfVar19[2] * pfVar19[2] + pfVar19[1] * pfVar19[1];
          pfVar1 = pfVar19 + 3;
          pfVar2 = pfVar19 + 4;
          pfVar19 = pfVar19 + 8;
          pfVar20[1] = *pfVar2 * *pfVar2 + *pfVar1 * *pfVar1;
          pfVar20 = pfVar20 + 4;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        if (lVar21 <= lVar15) goto LAB_1444ad252;
      }
      pfVar17 = pfVar17 + lVar15;
      do {
        lVar16 = lVar15 * 2;
        lVar12 = lVar15 * 2;
        lVar15 = lVar15 + 1;
        *pfVar17 = pfVar5[lVar16] * pfVar5[lVar16] + pfVar5[lVar12 + 1] * pfVar5[lVar12 + 1];
        pfVar17 = pfVar17 + 1;
      } while (lVar15 < lVar21);
    }
  }
  else {
    ArrayComplexToPowerInterleaved(pfVar5,pfVar17,uVar4);
  }
LAB_1444ad252:
  FCsvProfiler::EndStat("ArrayComplexToPower",uVar13);
  return;
}

// ArrayCumulativeSum @ 1444ad280

void __cdecl
Audio::ArrayCumulativeSum
          (TArrayView<float_const_,int> *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  
  iVar3 = param_1->ArrayNum;
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar3,&param_2->AllocatorInstance,&param_2->ArrayNum,piVar1);
  if (iVar3 < 1) {
    return;
  }
  if (__CsvProfilerStat141 == false) {
    FCsvProfilerTrace::OutputInlineStat("ArrayCumulativeSum",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat141 = true;
  }
  uVar4 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayCumulativeSum",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayCumulativeSum");
  pFVar7 = (param_2->AllocatorInstance).Data;
  pfVar6 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    fVar10 = *pfVar6;
    iVar9 = 1;
    pfVar6 = pfVar6 + 1;
    *(float *)pFVar7 = fVar10;
    if (1 < iVar3) {
      if (3 < iVar3 + -1) {
        uVar5 = (iVar3 - 5U >> 2) + 1;
        uVar8 = (ulonglong)uVar5;
        iVar9 = uVar5 * 4 + 1;
        do {
          fVar2 = *pfVar6;
          *(float *)(pFVar7 + 4) = fVar10 + fVar2;
          fVar10 = fVar10 + fVar2 + pfVar6[1];
          *(float *)(pFVar7 + 8) = fVar10;
          fVar10 = fVar10 + pfVar6[2];
          *(float *)(pFVar7 + 0xc) = fVar10;
          pFVar7 = pFVar7 + 0x10;
          fVar10 = fVar10 + pfVar6[3];
          pfVar6 = pfVar6 + 4;
          *(float *)pFVar7 = fVar10;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        if (iVar3 <= iVar9) goto LAB_1444ad3d4;
      }
      uVar8 = (ulonglong)(uint)(iVar3 - iVar9);
      do {
        fVar10 = fVar10 + *pfVar6;
        pFVar7 = pFVar7 + 4;
        pfVar6 = pfVar6 + 1;
        *(float *)pFVar7 = fVar10;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    ::ArrayCumulativeSum(pfVar6,pFVar7,iVar3);
  }
LAB_1444ad3d4:
  FCsvProfiler::EndStat("ArrayCumulativeSum",uVar4);
  return;
}

// ArrayDeinterleave @ 1444ad400

void __cdecl
Audio::ArrayDeinterleave
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  if (param_3 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InChannels > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                       ,0xa96,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum / param_3;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar4;
  local_18.DataPtr = (float *)pFVar1;
  ArrayDeinterleave(&local_18,param_2,param_3);
  return;
}

// ArrayDeinterleave @ 1444ad4b0

void __cdecl Audio::ArrayDeinterleave(float *param_1,float **param_2,int param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  if (!__CsvProfilerStat2743) {
    FCsvProfilerTrace::OutputInlineStat("ArrayDeinterleave",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2743 = true;
  }
  uVar2 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayDeinterleave",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayDeinterleave")
  ;
  if (0 < param_4) {
    uVar10 = (ulonglong)(uint)param_4;
    do {
      pfVar7 = *param_2;
      iVar9 = 0;
      pfVar6 = param_1;
      if (3 < param_3) {
        uVar3 = (param_3 - 4U >> 2) + 1;
        uVar8 = (ulonglong)uVar3;
        iVar9 = uVar3 * 4;
        do {
          pfVar4 = pfVar6 + param_4;
          *pfVar7 = *pfVar6;
          pfVar5 = pfVar4 + param_4;
          pfVar7[1] = *pfVar4;
          pfVar7[2] = *pfVar5;
          pfVar6 = pfVar5 + param_4 + param_4;
          pfVar7[3] = pfVar5[param_4];
          pfVar7 = pfVar7 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (iVar9 < param_3) {
        uVar8 = (ulonglong)(uint)(param_3 - iVar9);
        do {
          fVar1 = *pfVar6;
          pfVar6 = pfVar6 + param_4;
          *pfVar7 = fVar1;
          pfVar7 = pfVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FCsvProfiler::EndStat("ArrayDeinterleave",uVar2);
  return;
}

// ArrayDeinterleave @ 1444ad5f0

void __cdecl
Audio::ArrayDeinterleave
          (TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  void *_Dst;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  if (param_3 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InChannels > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                       ,0xa9f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar3 = param_1->ArrayNum;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_44[0] = 0;
  if (-1 < param_3) {
    local_48 = 0;
    if (0 < param_3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_3,&local_50,0,local_44);
    }
    iVar7 = param_2->ArrayNum;
    piVar1 = &param_2->ArrayNum;
    if (iVar7 < param_3) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,param_3 - iVar7,&param_2->AllocatorInstance,piVar1,
                         &param_2->ArrayMax);
      memset((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
             (longlong)(param_3 - iVar7) << 4);
    }
    else if (param_3 < iVar7) {
      uVar10 = iVar7 - param_3;
      if ((int)(uVar10 | param_3) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar10 != 0) {
        TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_2,param_3,uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
    local_res20 = *piVar1;
    uVar8 = (ulonglong)(int)local_res20;
    pFVar11 = (param_2->AllocatorInstance).Data;
    pFVar12 = pFVar11 + uVar8 * 0x10;
    while( true ) {
      if (*piVar1 != (int)uVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (pFVar11 == pFVar12) break;
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      pFVar2 = pFVar11 + 8;
      if (iVar7 < (int)uVar3) {
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,uVar3 - iVar7,(ForAnyElementType *)pFVar11,(int *)pFVar2,
                   (int *)(pFVar11 + 0xc));
      }
      else {
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
        if ((int)uVar3 < iVar7) {
          uVar10 = iVar7 - uVar3;
          if ((int)(uVar10 | uVar3) < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (uVar10 != 0) {
            _Dst = (void *)(*(longlong *)&pFVar11->field_0x0 + (longlong)(int)uVar3 * 4);
            iVar7 = (*(int *)&pFVar2->field_0x0 - uVar10) - uVar3;
            if (iVar7 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar10 * 4),(longlong)iVar7 << 2
                     );
            }
            *(uint *)&pFVar2->field_0x0 = *(int *)&pFVar2->field_0x0 - uVar10;
            UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar11,*(int *)&pFVar2->field_0x0,
                       (int *)(pFVar11 + 0xc));
          }
        }
      }
      local_58 = *(undefined8 *)&pFVar11->field_0x0;
      if ((local_50.Data <= (FScriptContainerElement *)&local_58) &&
         ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_44[0] * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_48 == local_44[0]) {
        local_48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_50,local_44);
      }
      lVar9 = (longlong)local_48;
      pFVar11 = pFVar11 + 0x10;
      local_48 = local_48 + 1;
      *(undefined8 *)(local_50.Data + lVar9 * 8) = local_58;
      uVar8 = (ulonglong)local_res20;
    }
    ArrayDeinterleave(param_1->DataPtr,(float **)local_50.Data,uVar3,param_3);
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
}

// ArrayDoubleSwapBytes @ 1444ad980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Audio::ArrayDoubleSwapBytes(TArrayView<double,int> *param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  longlong lVar7;
  double *pdVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (!__CsvProfilerStat2955) {
    FCsvProfilerTrace::OutputInlineStat("ArrayDoubleSwapBytes",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2955 = true;
  }
  uVar5 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayDoubleSwapBytes",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayDoubleSwapBytes");
  auVar4 = ___xmm_08090a0b0c0d0e0f0001020304050607;
  uVar11 = (ulonglong)param_1->ArrayNum;
  iVar6 = 0;
  pdVar1 = param_1->DataPtr;
  uVar9 = uVar11 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar9) {
    lVar7 = 0;
    iVar6 = (int)(uVar9 - 1 >> 2) * 4 + 4;
    do {
      auVar12 = pshufb(*(undefined1 (*) [16])(pdVar1 + lVar7),auVar4);
      auVar13 = pshufb(*(undefined1 (*) [16])(pdVar1 + lVar7 + 2),auVar4);
      *(undefined1 (*) [16])(pdVar1 + lVar7) = auVar12;
      *(undefined1 (*) [16])(pdVar1 + lVar7 + 2) = auVar13;
      lVar7 = lVar7 + 4;
    } while (lVar7 < (longlong)uVar9);
  }
  lVar7 = (longlong)iVar6;
  if (lVar7 < (longlong)uVar11) {
    if (3 < (longlong)(uVar11 - lVar7)) {
      lVar3 = lVar7 + 2;
      lVar10 = ((uVar11 - lVar7) - 4 >> 2) + 1;
      lVar7 = lVar7 + lVar10 * 4;
      pdVar8 = pdVar1 + lVar3;
      do {
        dVar2 = pdVar8[-2];
        pdVar8[-2] = (double)((ulonglong)dVar2 >> 0x38 |
                              ((ulonglong)dVar2 & 0xff000000000000) >> 0x28 |
                              ((ulonglong)dVar2 & 0xff0000000000) >> 0x18 |
                              ((ulonglong)dVar2 & 0xff00000000) >> 8 |
                              ((ulonglong)dVar2 & 0xff000000) << 8 |
                              ((ulonglong)dVar2 & 0xff0000) << 0x18 |
                              ((ulonglong)dVar2 & 0xff00) << 0x28 | (longlong)dVar2 << 0x38);
        dVar2 = pdVar8[-1];
        pdVar8[-1] = (double)((ulonglong)dVar2 >> 0x38 |
                              ((ulonglong)dVar2 & 0xff000000000000) >> 0x28 |
                              ((ulonglong)dVar2 & 0xff0000000000) >> 0x18 |
                              ((ulonglong)dVar2 & 0xff00000000) >> 8 |
                              ((ulonglong)dVar2 & 0xff000000) << 8 |
                              ((ulonglong)dVar2 & 0xff0000) << 0x18 |
                              ((ulonglong)dVar2 & 0xff00) << 0x28 | (longlong)dVar2 << 0x38);
        dVar2 = *pdVar8;
        *pdVar8 = (double)((ulonglong)dVar2 >> 0x38 | ((ulonglong)dVar2 & 0xff000000000000) >> 0x28
                           | ((ulonglong)dVar2 & 0xff0000000000) >> 0x18 |
                           ((ulonglong)dVar2 & 0xff00000000) >> 8 |
                           ((ulonglong)dVar2 & 0xff000000) << 8 |
                           ((ulonglong)dVar2 & 0xff0000) << 0x18 |
                           ((ulonglong)dVar2 & 0xff00) << 0x28 | (longlong)dVar2 << 0x38);
        dVar2 = pdVar8[1];
        pdVar8[1] = (double)((ulonglong)dVar2 >> 0x38 |
                             ((ulonglong)dVar2 & 0xff000000000000) >> 0x28 |
                             ((ulonglong)dVar2 & 0xff0000000000) >> 0x18 |
                             ((ulonglong)dVar2 & 0xff00000000) >> 8 |
                             ((ulonglong)dVar2 & 0xff000000) << 8 |
                             ((ulonglong)dVar2 & 0xff0000) << 0x18 |
                             ((ulonglong)dVar2 & 0xff00) << 0x28 | (longlong)dVar2 << 0x38);
        lVar10 = lVar10 + -1;
        pdVar8 = pdVar8 + 4;
      } while (lVar10 != 0);
      if ((longlong)uVar11 <= lVar7) goto LAB_1444adab3;
    }
    do {
      dVar2 = pdVar1[lVar7];
      pdVar1[lVar7] =
           (double)((ulonglong)dVar2 >> 0x38 | ((ulonglong)dVar2 & 0xff000000000000) >> 0x28 |
                    ((ulonglong)dVar2 & 0xff0000000000) >> 0x18 |
                    ((ulonglong)dVar2 & 0xff00000000) >> 8 | ((ulonglong)dVar2 & 0xff000000) << 8 |
                    ((ulonglong)dVar2 & 0xff0000) << 0x18 | ((ulonglong)dVar2 & 0xff00) << 0x28 |
                   (longlong)dVar2 << 0x38);
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)uVar11);
  }
LAB_1444adab3:
  FCsvProfiler::EndStat("ArrayDoubleSwapBytes",uVar5);
  return;
}

// ArrayFade @ 1444adae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::ArrayFade(TArrayView<float_const_,int> *param_1,float param_2,float param_3,
                TArrayView<float,int> *param_4)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float *_Dst;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38 [3];
  
  if (!__CsvProfilerStat2155) {
    FCsvProfilerTrace::OutputInlineStat("ArrayFade",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2155 = true;
  }
  uVar9 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayFade",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayFade");
  uVar2 = param_1->ArrayNum;
  lVar16 = (longlong)(int)uVar2;
  if (param_4->ArrayNum < (int)uVar2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= OutBuffer.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x86e,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar8 = _UNK_1509253fc;
  fVar20 = _UNK_1509253f8;
  fVar19 = _UNK_1509253f4;
  fVar18 = ___xmm_40800000408000004080000040800000;
  pfVar3 = param_1->DataPtr;
  _Dst = param_4->DataPtr;
  if (__real_322bcc77 < (float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
      fVar28 = (param_3 - param_2) / (float)(int)uVar2;
      uVar13 = uVar2 & 0xfffffffc;
      if (uVar13 != 0) {
        if (0 < (int)uVar13) {
          lVar11 = ((longlong)(int)uVar13 - 1U >> 2) + 1;
          pfVar12 = _Dst;
          fVar24 = ___xmm_40400000400000003f80000000000000;
          fVar25 = _UNK_15076be04;
          fVar26 = _UNK_15076be08;
          fVar27 = _UNK_15076be0c;
          do {
            pfVar1 = (float *)((longlong)pfVar12 + ((longlong)pfVar3 - (longlong)_Dst));
            fVar5 = pfVar1[1];
            fVar6 = pfVar1[2];
            fVar7 = pfVar1[3];
            fVar17 = fVar28 * fVar24;
            fVar21 = fVar28 * fVar25;
            fVar22 = fVar28 * fVar26;
            fVar23 = fVar28 * fVar27;
            fVar24 = fVar24 + fVar18;
            fVar25 = fVar25 + fVar19;
            fVar26 = fVar26 + fVar20;
            fVar27 = fVar27 + fVar8;
            *pfVar12 = (fVar17 + param_2) * *pfVar1;
            pfVar12[1] = (fVar21 + param_2) * fVar5;
            pfVar12[2] = (fVar22 + param_2) * fVar6;
            pfVar12[3] = (fVar23 + param_2) * fVar7;
            pfVar12 = pfVar12 + 4;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      if ((uVar2 & 3) != 0) {
        lVar11 = (longlong)(int)uVar13;
        fVar18 = (float)(int)uVar13 * fVar28 + param_2;
        if (lVar11 < lVar16) {
          if (3 < lVar16 - lVar11) {
            pfVar12 = _Dst + lVar11 + 1;
            lVar14 = (longlong)pfVar3 - (longlong)_Dst;
            lVar15 = ((lVar16 - lVar11) - 4U >> 2) + 1;
            lVar11 = lVar11 + lVar15 * 4;
            do {
              pfVar12[-1] = fVar18 * *(float *)((longlong)pfVar12 + lVar14 + -4);
              fVar19 = fVar18 + fVar28 + fVar28;
              *pfVar12 = (fVar18 + fVar28) * *(float *)((longlong)pfVar12 + lVar14);
              fVar20 = fVar19 + fVar28;
              pfVar12[1] = fVar19 * *(float *)((longlong)pfVar12 + lVar14 + 4);
              fVar18 = fVar20 + fVar28;
              pfVar12[2] = fVar20 * *(float *)((longlong)pfVar12 + lVar14 + 8);
              pfVar12 = pfVar12 + 4;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            if (lVar16 <= lVar11) goto LAB_1444add4a;
          }
          pfVar12 = _Dst + lVar11;
          lVar16 = lVar16 - lVar11;
          do {
            *pfVar12 = fVar18 * *(float *)(((longlong)pfVar3 - (longlong)_Dst) + (longlong)pfVar12);
            pfVar12 = pfVar12 + 1;
            lVar16 = lVar16 + -1;
            fVar18 = fVar18 + fVar28;
          } while (lVar16 != 0);
        }
      }
    }
    else {
      ArrayFade2(pfVar3,uVar2);
    }
  }
  else if (param_2 == 0.0) {
    memset(_Dst,0,lVar16 * 4);
  }
  else {
    local_38[0].DataPtr = param_1->DataPtr;
    local_38[0].ArrayNum = param_1->ArrayNum;
    local_38[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_48.DataPtr = param_4->DataPtr;
    local_48.ArrayNum = param_4->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_4->field_0xc;
    ArrayMultiplyByConstant(local_38,param_2,&local_48);
  }
LAB_1444add4a:
  FCsvProfiler::EndStat("ArrayFade",uVar9);
  return;
}

// ArrayFade @ 1444add80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Audio::ArrayFade(TArrayView<float,int> *param_1,float param_2,float param_3)

{
  float *pfVar1;
  uint uVar2;
  float *_Dst;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  TArrayView<float,int> local_38 [3];
  
  if (!__CsvProfilerStat2089) {
    FCsvProfilerTrace::OutputInlineStat("ArrayFade",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2089 = true;
  }
  uVar7 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayFade",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayFade");
  fVar6 = _UNK_1509253fc;
  fVar16 = _UNK_1509253f8;
  fVar15 = _UNK_1509253f4;
  fVar14 = ___xmm_40800000408000004080000040800000;
  uVar2 = param_1->ArrayNum;
  lVar10 = (longlong)(int)uVar2;
  _Dst = param_1->DataPtr;
  if (__real_322bcc77 < (float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
      fVar24 = (param_3 - param_2) / (float)(int)uVar2;
      uVar12 = uVar2 & 0xfffffffc;
      if (uVar12 != 0) {
        if (0 < (int)uVar12) {
          lVar8 = 0;
          fVar20 = ___xmm_40400000400000003f80000000000000;
          fVar21 = _UNK_15076be04;
          fVar22 = _UNK_15076be08;
          fVar23 = _UNK_15076be0c;
          do {
            pfVar9 = _Dst + lVar8;
            fVar3 = pfVar9[1];
            fVar4 = pfVar9[2];
            fVar5 = pfVar9[3];
            fVar13 = fVar24 * fVar20;
            fVar17 = fVar24 * fVar21;
            fVar18 = fVar24 * fVar22;
            fVar19 = fVar24 * fVar23;
            fVar20 = fVar20 + fVar14;
            fVar21 = fVar21 + fVar15;
            fVar22 = fVar22 + fVar16;
            fVar23 = fVar23 + fVar6;
            pfVar1 = _Dst + lVar8;
            *pfVar1 = (fVar13 + param_2) * *pfVar9;
            pfVar1[1] = (fVar17 + param_2) * fVar3;
            pfVar1[2] = (fVar18 + param_2) * fVar4;
            pfVar1[3] = (fVar19 + param_2) * fVar5;
            lVar8 = lVar8 + 4;
          } while (lVar8 < (int)uVar12);
        }
      }
      if ((uVar2 & 3) != 0) {
        lVar8 = (longlong)(int)uVar12;
        fVar14 = (float)(int)uVar12 * fVar24 + param_2;
        if (lVar8 < lVar10) {
          if (3 < lVar10 - lVar8) {
            pfVar9 = _Dst + lVar8 + 2;
            lVar11 = ((lVar10 - lVar8) - 4U >> 2) + 1;
            lVar8 = lVar8 + lVar11 * 4;
            do {
              pfVar9[-2] = fVar14 * pfVar9[-2];
              fVar15 = fVar14 + fVar24 + fVar24;
              pfVar9[-1] = (fVar14 + fVar24) * pfVar9[-1];
              fVar16 = fVar15 + fVar24;
              *pfVar9 = fVar15 * *pfVar9;
              fVar14 = fVar16 + fVar24;
              pfVar9[1] = fVar16 * pfVar9[1];
              pfVar9 = pfVar9 + 4;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            if (lVar10 <= lVar8) goto LAB_1444adf6c;
          }
          do {
            _Dst[lVar8] = fVar14 * _Dst[lVar8];
            lVar8 = lVar8 + 1;
            fVar14 = fVar14 + fVar24;
          } while (lVar8 < lVar10);
        }
      }
    }
    else {
      ::ArrayFade();
    }
  }
  else if (param_2 == 0.0) {
    memset(_Dst,0,lVar10 * 4);
  }
  else {
    local_38[0].DataPtr = param_1->DataPtr;
    local_38[0].ArrayNum = param_1->ArrayNum;
    local_38[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    ArrayMultiplyByConstantInPlace(local_38,param_2);
  }
LAB_1444adf6c:
  FCsvProfiler::EndStat("ArrayFade",uVar7);
  return;
}

// ArrayFloatSwapBytes @ 1444adfa0

void __cdecl Audio::ArrayFloatSwapBytes(TArrayView<float,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<int,int> local_18;
  
  if (!__CsvProfilerStat2948) {
    FCsvProfilerTrace::OutputInlineStat("ArrayFloatSwapBytes",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2948 = true;
  }
  uVar3 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayFloatSwapBytes",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayFloatSwapBytes");
  local_18.DataPtr = (int *)param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  ArrayInt32SwapBytes(&local_18);
  FCsvProfiler::EndStat("ArrayFloatSwapBytes",uVar3);
  return;
}

// ArrayFloatToPcm16 @ 1444ae060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::ArrayFloatToPcm16(TArrayView<float_const_,int> *param_1,TArrayView<short,int> *param_2)

{
  float *pfVar1;
  short *psVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  bool bVar14;
  ulonglong uVar15;
  short *psVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  
  if (!__CsvProfilerStat2420) {
    FCsvProfilerTrace::OutputInlineStat("ArrayFloatToPcm16",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2420 = true;
  }
  uVar13 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayFloatToPcm16",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayFloatToPcm16")
  ;
  if ((param_2->ArrayNum < param_1->ArrayNum) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutView.Num() >= InView.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x976,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar12 = _UNK_150d5666c;
  fVar11 = _UNK_150d56668;
  fVar10 = _UNK_150d56664;
  fVar9 = ___xmm_46fffe0046fffe0046fffe0046fffe00;
  uVar15 = (ulonglong)param_1->ArrayNum;
  pfVar1 = param_1->DataPtr;
  psVar2 = param_2->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    lVar17 = 0;
    iVar20 = 0;
    uVar19 = uVar15 & 0xfffffffffffffffc;
    if (0 < (longlong)uVar19) {
      iVar20 = (int)(uVar19 - 1 >> 2) * 4 + 4;
      psVar16 = psVar2 + 2;
      do {
        pfVar18 = pfVar1 + lVar17;
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[2];
        fVar6 = pfVar18[3];
        lVar17 = lVar17 + 4;
        psVar16[-2] = (short)(int)(*pfVar18 * fVar9);
        psVar16[-1] = (short)(int)(fVar4 * fVar10);
        *psVar16 = (short)(int)(fVar5 * fVar11);
        psVar16[1] = (short)(int)(fVar6 * fVar12);
        psVar16 = psVar16 + 4;
      } while (lVar17 < (longlong)uVar19);
    }
    fVar9 = __real_46fffe00;
    lVar17 = (longlong)iVar20;
    if (lVar17 < (longlong)uVar15) {
      if (3 < (longlong)(uVar15 - lVar17)) {
        lVar7 = lVar17 + 2;
        lVar8 = lVar17 + 2;
        lVar21 = ((uVar15 - lVar17) - 4 >> 2) + 1;
        lVar17 = lVar17 + lVar21 * 4;
        psVar16 = psVar2 + lVar7;
        pfVar18 = pfVar1 + lVar8;
        do {
          psVar16[-2] = (short)(int)(pfVar18[-2] * fVar9);
          psVar16[-1] = (short)(int)(pfVar18[-1] * fVar9);
          *psVar16 = (short)(int)(*pfVar18 * fVar9);
          psVar16[1] = (short)(int)(pfVar18[1] * fVar9);
          lVar21 = lVar21 + -1;
          psVar16 = psVar16 + 4;
          pfVar18 = pfVar18 + 4;
        } while (lVar21 != 0);
        if ((longlong)uVar15 <= lVar17) goto LAB_1444ae24b;
      }
      do {
        psVar2[lVar17] = (short)(int)(pfVar1[lVar17] * fVar9);
        lVar17 = lVar17 + 1;
      } while (lVar17 < (longlong)uVar15);
    }
  }
  else {
    ::ArrayFloatToPcm16(pfVar1,psVar2,param_1->ArrayNum);
  }
LAB_1444ae24b:
  FCsvProfiler::EndStat("ArrayFloatToPcm16",uVar13);
  return;
}

// ArrayFloatToPcm24 @ 1444ae270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::ArrayFloatToPcm24(TArrayView<float_const_,int> *param_1,TArrayView<signed_char,int> *param_2)

{
  int iVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  schar *psVar21;
  longlong lVar22;
  float *pfVar23;
  undefined1 auVar24 [16];
  
  if (!__CsvProfilerStat2542) {
    FCsvProfilerTrace::OutputInlineStat("ArrayFloatToPcm24",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2542 = true;
  }
  uVar12 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayFloatToPcm24",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayFloatToPcm24")
  ;
  iVar14 = param_1->ArrayNum;
  lVar17 = (longlong)iVar14;
  lVar15 = 0;
  pfVar2 = param_1->DataPtr;
  iVar1 = param_2->ArrayNum;
  pauVar3 = (undefined1 (*) [16])param_2->DataPtr;
  iVar18 = 0;
  if (iVar1 / 3 + (iVar1 >> 0x1f) +
      (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f) < iVar14) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(OutView.Num() / SizeofPCM24) >= InView.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x9fb,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  auVar11 = ___xmm_808080800e0d0c0a0908060504020100;
  fVar10 = _UNK_150d5667c;
  fVar9 = _UNK_150d56678;
  fVar8 = _UNK_150d56674;
  fVar7 = ___xmm_4afffffe4afffffe4afffffe4afffffe;
  uVar20 = (longlong)(iVar14 + -2) & 0xfffffffffffffffc;
  iVar14 = iVar18;
  if (0 < (longlong)uVar20) {
    iVar14 = (int)(uVar20 - 1 >> 2) + 1;
    iVar18 = iVar14 * 0xc;
    iVar14 = iVar14 * 4;
    pauVar16 = pauVar3;
    do {
      pfVar23 = pfVar2 + lVar15;
      lVar15 = lVar15 + 4;
      auVar24._0_4_ = (int)(*pfVar23 * fVar7);
      auVar24._4_4_ = (int)(pfVar23[1] * fVar8);
      auVar24._8_4_ = (int)(pfVar23[2] * fVar9);
      auVar24._12_4_ = (int)(pfVar23[3] * fVar10);
      auVar24 = pshufb(auVar24,auVar11);
      *pauVar16 = auVar24;
      pauVar16 = (undefined1 (*) [16])(*pauVar16 + 0xc);
    } while (lVar15 < (longlong)uVar20);
  }
  fVar7 = __real_4afffffe;
  lVar15 = (longlong)iVar14;
  if (lVar15 < lVar17) {
    lVar19 = (longlong)iVar18;
    if (3 < lVar17 - lVar15) {
      lVar6 = lVar15 + 2;
      lVar5 = lVar19 + 5;
      lVar22 = ((lVar17 - lVar15) - 4U >> 2) + 1;
      lVar19 = lVar19 + lVar22 * 0xc;
      lVar15 = lVar15 + lVar22 * 4;
      psVar21 = *pauVar3 + lVar5;
      pfVar23 = pfVar2 + lVar6;
      do {
        iVar14 = (int)(pfVar23[-2] * fVar7);
        psVar21[-5] = (schar)iVar14;
        psVar21[-4] = (schar)((uint)iVar14 >> 8);
        psVar21[-3] = (schar)((uint)iVar14 >> 0x10);
        iVar14 = (int)(pfVar23[-1] * fVar7);
        psVar21[-2] = (schar)iVar14;
        psVar21[-1] = (schar)((uint)iVar14 >> 8);
        *psVar21 = (schar)((uint)iVar14 >> 0x10);
        iVar14 = (int)(*pfVar23 * fVar7);
        psVar21[1] = (schar)iVar14;
        psVar21[2] = (schar)((uint)iVar14 >> 8);
        psVar21[3] = (schar)((uint)iVar14 >> 0x10);
        iVar14 = (int)(pfVar23[1] * fVar7);
        psVar21[4] = (schar)iVar14;
        psVar21[5] = (schar)((uint)iVar14 >> 8);
        psVar21[6] = (schar)((uint)iVar14 >> 0x10);
        lVar22 = lVar22 + -1;
        psVar21 = psVar21 + 0xc;
        pfVar23 = pfVar23 + 4;
      } while (lVar22 != 0);
      if (lVar17 <= lVar15) goto LAB_1444ae4b6;
    }
    psVar21 = *pauVar3 + lVar19 + 2;
    do {
      pfVar23 = pfVar2 + lVar15;
      lVar15 = lVar15 + 1;
      iVar14 = (int)(*pfVar23 * fVar7);
      psVar21[-2] = (schar)iVar14;
      psVar21[-1] = (schar)((uint)iVar14 >> 8);
      *psVar21 = (schar)((uint)iVar14 >> 0x10);
      psVar21 = psVar21 + 3;
    } while (lVar15 < lVar17);
  }
LAB_1444ae4b6:
  FCsvProfiler::EndStat("ArrayFloatToPcm24",uVar12);
  return;
}

// ArrayFloatToPcm32 @ 1444ae4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::ArrayFloatToPcm32(TArrayView<float_const_,int> *param_1,TArrayView<int,int> *param_2)

{
  int *piVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  bool bVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  
  if (!__CsvProfilerStat2607) {
    FCsvProfilerTrace::OutputInlineStat("ArrayFloatToPcm32",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2607 = true;
  }
  uVar14 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayFloatToPcm32",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayFloatToPcm32")
  ;
  if ((param_2->ArrayNum < param_1->ArrayNum) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutView.Num() >= InView.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0xa31,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  dVar13 = _UNK_150d56658;
  dVar12 = ___xmm_41dfffffffc0000041dfffffffc00000;
  iVar5 = param_1->ArrayNum;
  uVar18 = (ulonglong)iVar5;
  iVar21 = 0;
  pfVar6 = param_1->DataPtr;
  piVar7 = param_2->DataPtr;
  if (0 < (longlong)(uVar18 & 0xfffffffffffffffc)) {
    lVar16 = ((uVar18 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    iVar21 = (int)lVar16 * 4;
    piVar17 = piVar7;
    do {
      pfVar2 = (float *)((longlong)piVar17 + ((longlong)pfVar6 - (longlong)piVar7));
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      *piVar17 = (int)((double)*pfVar2 * dVar12);
      piVar17[1] = (int)((double)fVar9 * dVar13);
      piVar17[2] = (int)((double)fVar10 * dVar12);
      piVar17[3] = (int)((double)fVar11 * dVar13);
      lVar16 = lVar16 + -1;
      piVar17 = piVar17 + 4;
    } while (lVar16 != 0);
  }
  if ((iVar21 < iVar5) && (7 < (uint)(iVar5 - iVar21))) {
    lVar16 = (longlong)iVar21;
    if ((pfVar6 + (iVar5 + -1) < piVar7 + lVar16) || (piVar7 + (iVar5 + -1) < pfVar6 + lVar16)) {
      uVar19 = iVar5 - iVar21 & 0x80000007;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xfffffff8) + 1;
      }
      piVar17 = piVar7 + lVar16 + 2;
      do {
        uVar3 = *(undefined8 *)((longlong)pfVar6 + (-8 - (longlong)piVar7) + (longlong)piVar17);
        iVar21 = iVar21 + 8;
        piVar1 = piVar17 + 8;
        lVar16 = lVar16 + 8;
        uVar4 = *(undefined8 *)((longlong)pfVar6 + (-0x20 - (longlong)piVar7) + (longlong)piVar1);
        *(ulonglong *)(piVar17 + -2) =
             CONCAT44((int)((double)(float)((ulonglong)uVar3 >> 0x20) * dVar13),
                      (int)((double)(float)uVar3 * dVar12));
        uVar3 = *(undefined8 *)((longlong)pfVar6 + (-0x18 - (longlong)piVar7) + (longlong)piVar1);
        *(ulonglong *)piVar17 =
             CONCAT44((int)((double)(float)((ulonglong)uVar4 >> 0x20) * dVar13),
                      (int)((double)(float)uVar4 * dVar12));
        uVar4 = *(undefined8 *)((longlong)pfVar6 + (-0x10 - (longlong)piVar7) + (longlong)piVar1);
        *(ulonglong *)(piVar17 + 2) =
             CONCAT44((int)((double)(float)((ulonglong)uVar3 >> 0x20) * dVar13),
                      (int)((double)(float)uVar3 * dVar12));
        *(ulonglong *)(piVar17 + 4) =
             CONCAT44((int)((double)(float)((ulonglong)uVar4 >> 0x20) * dVar13),
                      (int)((double)(float)uVar4 * dVar12));
        piVar17 = piVar1;
      } while (lVar16 < (int)(iVar5 - uVar19));
    }
  }
  dVar12 = __real_41dfffffffc00000;
  lVar16 = (longlong)iVar21;
  if (lVar16 < (longlong)uVar18) {
    if (3 < (longlong)(uVar18 - lVar16)) {
      lVar22 = lVar16 + 1;
      lVar20 = ((uVar18 - lVar16) - 4 >> 2) + 1;
      lVar16 = lVar16 + lVar20 * 4;
      piVar17 = piVar7 + lVar22;
      do {
        piVar1 = piVar17 + 4;
        piVar17[-1] = (int)((double)*(float *)((longlong)pfVar6 + (-4 - (longlong)piVar7) +
                                              (longlong)piVar17) * dVar12);
        *piVar17 = (int)((double)*(float *)((longlong)pfVar6 + (-0x10 - (longlong)piVar7) +
                                           (longlong)piVar1) * dVar12);
        piVar17[1] = (int)((double)*(float *)((longlong)pfVar6 + (-0xc - (longlong)piVar7) +
                                             (longlong)piVar1) * dVar12);
        piVar17[2] = (int)((double)*(float *)((longlong)pfVar6 + (-8 - (longlong)piVar7) +
                                             (longlong)piVar1) * dVar12);
        lVar20 = lVar20 + -1;
        piVar17 = piVar1;
      } while (lVar20 != 0);
      if ((longlong)uVar18 <= lVar16) goto LAB_1444ae78a;
    }
    lVar22 = uVar18 - lVar16;
    piVar17 = piVar7 + lVar16;
    do {
      *piVar17 = (int)((double)*(float *)(((longlong)pfVar6 - (longlong)piVar7) + (longlong)piVar17)
                      * dVar12);
      lVar22 = lVar22 + -1;
      piVar17 = piVar17 + 1;
    } while (lVar22 != 0);
  }
LAB_1444ae78a:
  FCsvProfiler::EndStat("ArrayFloatToPcm32",uVar14);
  return;
}

// ArrayFloatToPcmDouble @ 1444ae7b0

void __cdecl
Audio::ArrayFloatToPcmDouble(TArrayView<float_const_,int> *param_1,TArrayView<double,int> *param_2)

{
  int iVar1;
  float *pfVar2;
  double *pdVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  undefined1 (*pauVar18) [16];
  double *pdVar19;
  ulonglong uVar20;
  float *pfVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  
  if (!__CsvProfilerStat2642) {
    FCsvProfilerTrace::OutputInlineStat("ArrayFloatToPcmDouble",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2642 = true;
  }
  uVar16 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayFloatToPcmDouble",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayFloatToPcmDouble");
  if ((param_2->ArrayNum < param_1->ArrayNum) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutView.Num() >= InView.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0xa54,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = param_1->ArrayNum;
  uVar25 = (ulonglong)iVar1;
  uVar20 = 0;
  pfVar2 = param_1->DataPtr;
  pdVar3 = param_2->DataPtr;
  uVar23 = uVar25 & 0xfffffffffffffffc;
  uVar27 = uVar20;
  if (0 < (longlong)uVar23) {
    uVar27 = (ulonglong)((int)(uVar23 - 1 >> 2) * 4 + 4);
    do {
      pfVar21 = pfVar2 + uVar20;
      fVar12 = pfVar21[2];
      fVar13 = pfVar21[3];
      auVar11._8_4_ = SUB84((double)pfVar21[1],0);
      auVar11._0_8_ = (double)*pfVar21;
      auVar11._12_4_ = (int)((ulonglong)(double)pfVar21[1] >> 0x20);
      *(undefined1 (*) [16])(pdVar3 + uVar20) = auVar11;
      auVar5._8_4_ = SUB84((double)fVar13,0);
      auVar5._0_8_ = (double)fVar12;
      auVar5._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
      *(undefined1 (*) [16])(pdVar3 + uVar20 + 2) = auVar5;
      uVar20 = uVar20 + 4;
    } while ((longlong)uVar20 < (longlong)uVar23);
  }
  uVar26 = (uint)uVar27;
  if (((int)uVar26 < iVar1) && (7 < iVar1 - uVar26)) {
    lVar28 = (longlong)(int)uVar26;
    if ((pfVar2 + (iVar1 + -1) < pdVar3 + lVar28) || (pdVar3 + (iVar1 + -1) < pfVar2 + lVar28)) {
      uVar22 = iVar1 - uVar26 & 0x80000007;
      if ((int)uVar22 < 0) {
        uVar22 = (uVar22 - 1 | 0xfffffff8) + 1;
      }
      pauVar18 = (undefined1 (*) [16])(pdVar3 + lVar28 + 4);
      pfVar21 = pfVar2 + lVar28 + 4;
      do {
        dVar10 = (double)(float)((ulonglong)*(undefined8 *)(pfVar21 + -4) >> 0x20);
        uVar26 = (int)uVar27 + 8;
        uVar27 = (ulonglong)uVar26;
        lVar28 = lVar28 + 8;
        auVar6._8_4_ = SUB84(dVar10,0);
        auVar6._0_8_ = (double)(float)*(undefined8 *)(pfVar21 + -4);
        auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        pauVar18[-2] = auVar6;
        dVar10 = (double)(float)((ulonglong)*(undefined8 *)(pfVar21 + -2) >> 0x20);
        auVar7._8_4_ = SUB84(dVar10,0);
        auVar7._0_8_ = (double)(float)*(undefined8 *)(pfVar21 + -2);
        auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        pauVar18[-1] = auVar7;
        dVar10 = (double)(float)((ulonglong)*(undefined8 *)pfVar21 >> 0x20);
        auVar8._8_4_ = SUB84(dVar10,0);
        auVar8._0_8_ = (double)(float)*(undefined8 *)pfVar21;
        auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *pauVar18 = auVar8;
        dVar10 = (double)(float)((ulonglong)*(undefined8 *)(pfVar21 + 2) >> 0x20);
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = (double)(float)*(undefined8 *)(pfVar21 + 2);
        auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        pauVar18[1] = auVar9;
        pauVar18 = pauVar18 + 4;
        pfVar21 = pfVar21 + 8;
      } while (lVar28 < (int)(iVar1 - uVar22));
    }
  }
  lVar28 = (longlong)(int)uVar26;
  if (lVar28 < (longlong)uVar25) {
    if (3 < (longlong)(uVar25 - lVar28)) {
      lVar14 = lVar28 + 2;
      lVar15 = lVar28 + 2;
      lVar24 = ((uVar25 - lVar28) - 4 >> 2) + 1;
      lVar28 = lVar28 + lVar24 * 4;
      pdVar19 = pdVar3 + lVar14;
      pfVar21 = pfVar2 + lVar15;
      do {
        pdVar19[-2] = (double)pfVar21[-2];
        pdVar19[-1] = (double)pfVar21[-1];
        *pdVar19 = (double)*pfVar21;
        pdVar19[1] = (double)pfVar21[1];
        lVar24 = lVar24 + -1;
        pdVar19 = pdVar19 + 4;
        pfVar21 = pfVar21 + 4;
      } while (lVar24 != 0);
      if ((longlong)uVar25 <= lVar28) goto LAB_1444ae9d7;
    }
    do {
      pdVar3[lVar28] = (double)pfVar2[lVar28];
      lVar28 = lVar28 + 1;
    } while (lVar28 < (longlong)uVar25);
  }
LAB_1444ae9d7:
  FCsvProfiler::EndStat("ArrayFloatToPcmDouble",uVar16);
  return;
}

// ArrayGetAverageAbsValue @ 1444aea00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl Audio::ArrayGetAverageAbsValue(TArrayView<float_const_,int> *param_1)

{
  float *pfVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (!__CsvProfilerStat325) {
    FCsvProfilerTrace::OutputInlineStat("ArrayGetAverageAbsValue",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat325 = true;
  }
  uVar7 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayGetAverageAbsValue",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayGetAverageAbsValue");
  uVar6 = _UNK_15061cc7c;
  uVar5 = _UNK_15061cc78;
  uVar10 = _UNK_15061cc74;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar2 = param_1->ArrayNum;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    fVar15 = 0.0;
    uVar12 = uVar2 & 0xfffffffc;
    lVar13 = (longlong)(int)uVar12;
    if (uVar12 != 0) {
      uVar11 = 0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar15 = 0.0;
      if (0 < (int)uVar12) {
        lVar14 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar11 < (int)uVar2) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            fVar15 = (float)(*pcVar3)();
            return fVar15;
          }
          uVar11 = uVar11 + 4;
          pfVar1 = param_1->DataPtr + lVar14;
          lVar14 = lVar14 + 4;
          fVar16 = fVar16 + (float)((uint)*pfVar1 & uVar4);
          fVar17 = fVar17 + (float)((uint)pfVar1[1] & uVar10);
          fVar18 = fVar18 + (float)((uint)pfVar1[2] & uVar5);
          fVar15 = fVar15 + (float)((uint)pfVar1[3] & uVar6);
        } while (lVar14 < lVar13);
      }
      fVar15 = fVar16 + fVar17 + fVar18 + fVar15;
    }
    if ((uVar2 & 3) != 0) {
      for (; lVar13 < (int)uVar2; lVar13 = lVar13 + 1) {
        uVar10 = 0;
        if ((int)uVar12 < (int)uVar2) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          fVar15 = (float)(*pcVar3)();
          return fVar15;
        }
        uVar12 = uVar12 + 1;
        fVar15 = fVar15 + (float)((uint)param_1->DataPtr[lVar13] & uVar4);
      }
    }
    fVar15 = fVar15 / (float)(int)uVar2;
  }
  else {
    fVar15 = (float)::ArrayGetAverageAbsValue(param_1->DataPtr,uVar2);
  }
  FCsvProfiler::EndStat("ArrayGetAverageAbsValue",uVar7);
  return fVar15;
}

// ArrayGetAverageValue @ 1444aec50

float __cdecl Audio::ArrayGetAverageValue(TArrayView<float_const_,int> *param_1)

{
  float *pfVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (!__CsvProfilerStat279) {
    FCsvProfilerTrace::OutputInlineStat("ArrayGetAverageValue",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat279 = true;
  }
  uVar4 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayGetAverageValue",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayGetAverageValue");
  uVar2 = param_1->ArrayNum;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    fVar11 = 0.0;
    uVar8 = uVar2 & 0xfffffffc;
    lVar9 = (longlong)(int)uVar8;
    if (uVar8 != 0) {
      uVar7 = 0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar11 = 0.0;
      if (0 < (int)uVar8) {
        lVar10 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar7 < (int)uVar2) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            fVar11 = (float)(*pcVar3)();
            return fVar11;
          }
          uVar7 = uVar7 + 4;
          pfVar1 = param_1->DataPtr + lVar10;
          lVar10 = lVar10 + 4;
          fVar12 = fVar12 + *pfVar1;
          fVar13 = fVar13 + pfVar1[1];
          fVar14 = fVar14 + pfVar1[2];
          fVar11 = fVar11 + pfVar1[3];
        } while (lVar10 < lVar9);
      }
      fVar11 = fVar12 + fVar13 + fVar14 + fVar11;
    }
    if ((uVar2 & 3) != 0) {
      for (; lVar9 < (int)uVar2; lVar9 = lVar9 + 1) {
        uVar7 = 0;
        if ((int)uVar8 < (int)uVar2) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar11 = (float)(*pcVar3)();
          return fVar11;
        }
        uVar8 = uVar8 + 1;
        fVar11 = fVar11 + param_1->DataPtr[lVar9];
      }
    }
    fVar11 = fVar11 / (float)(int)uVar2;
  }
  else {
    fVar11 = (float)::ArrayGetAverageValue(param_1->DataPtr,uVar2);
  }
  FCsvProfiler::EndStat("ArrayGetAverageValue",uVar4);
  return fVar11;
}

// ArrayGetEuclideanNorm @ 1444aee80

void __cdecl Audio::ArrayGetEuclideanNorm(TArrayView<float_const_,int> *param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  
  if (!__CsvProfilerStat526) {
    FCsvProfilerTrace::OutputInlineStat("ArrayGetEuclideanNorm",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat526 = true;
  }
  uVar4 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayGetEuclideanNorm",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayGetEuclideanNorm");
  iVar2 = param_1->ArrayNum;
  lVar6 = (longlong)iVar2;
  lVar5 = 0;
  pfVar3 = param_1->DataPtr;
  *param_2 = 0.0;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    fVar9 = 0.0;
    if (3 < lVar6) {
      pfVar8 = pfVar3 + 2;
      lVar7 = (lVar6 - 4U >> 2) + 1;
      lVar5 = lVar7 * 4;
      do {
        fVar9 = pfVar8[-2] * pfVar8[-2] + fVar9;
        *param_2 = fVar9;
        fVar9 = pfVar8[-1] * pfVar8[-1] + fVar9;
        *param_2 = fVar9;
        fVar9 = *pfVar8 * *pfVar8 + fVar9;
        *param_2 = fVar9;
        pfVar1 = pfVar8 + 1;
        pfVar8 = pfVar8 + 4;
        fVar9 = *pfVar1 * *pfVar1 + fVar9;
        *param_2 = fVar9;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    for (; lVar5 < lVar6; lVar5 = lVar5 + 1) {
      fVar9 = pfVar3[lVar5] * pfVar3[lVar5] + fVar9;
      *param_2 = fVar9;
    }
    *param_2 = SQRT(fVar9);
  }
  else {
    ::ArrayGetEuclideanNorm(pfVar3,param_2,iVar2);
  }
  FCsvProfiler::EndStat("ArrayGetEuclideanNorm",uVar4);
  return;
}

// ArrayGetMagnitude @ 1444aefc0

float __cdecl Audio::ArrayGetMagnitude(TArrayView<float_const_,int> *param_1)

{
  uint uVar1;
  float *pfVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (!__CsvProfilerStat230) {
    FCsvProfilerTrace::OutputInlineStat("ArrayGetMagnitude",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat230 = true;
  }
  uVar4 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayGetMagnitude",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayGetMagnitude")
  ;
  uVar1 = param_1->ArrayNum;
  lVar11 = (longlong)(int)uVar1;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    fVar12 = 0.0;
    uVar7 = uVar1 & 0xfffffffc;
    lVar8 = (longlong)(int)uVar7;
    if (uVar7 != 0) {
      uVar9 = 0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      fVar12 = 0.0;
      if (0 < (int)uVar7) {
        lVar10 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar9 < (int)uVar1) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            fVar12 = (float)(*pcVar3)();
            return fVar12;
          }
          __vdecl_powf4();
          uVar9 = uVar9 + 4;
          fVar13 = fVar13 + extraout_XMM0_Da;
          fVar14 = fVar14 + extraout_XMM0_Db;
          fVar15 = fVar15 + extraout_XMM0_Dc;
          fVar12 = fVar12 + extraout_XMM0_Dd;
          lVar10 = lVar10 + 4;
        } while (lVar10 < lVar8);
      }
      fVar12 = fVar13 + fVar14 + fVar15 + fVar12;
    }
    if ((uVar1 & 3) != 0) {
      for (; lVar8 < lVar11; lVar8 = lVar8 + 1) {
        uVar9 = 0;
        if ((int)uVar7 < (int)uVar1) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar12 = (float)(*pcVar3)();
          return fVar12;
        }
        uVar1 = param_1->ArrayNum;
        pfVar2 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar7 < (int)uVar1) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar12 = (float)(*pcVar3)();
          return fVar12;
        }
        uVar7 = uVar7 + 1;
        fVar12 = fVar12 + pfVar2[lVar8] * param_1->DataPtr[lVar8];
      }
    }
    fVar12 = SQRT(fVar12);
  }
  else {
    fVar12 = (float)::ArrayGetMagnitude(param_1->DataPtr,uVar1);
  }
  FCsvProfiler::EndStat("ArrayGetMagnitude",uVar4);
  return fVar12;
}

// ArrayInt16SwapBytes @ 1444af250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Audio::ArrayInt16SwapBytes(TArrayView<short,int> *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  
  if (!__CsvProfilerStat2843) {
    FCsvProfilerTrace::OutputInlineStat("ArrayInt16SwapBytes",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2843 = true;
  }
  uVar14 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayInt16SwapBytes",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayInt16SwapBytes");
  uVar13 = _UNK_150d566ac;
  uVar12 = _DAT_150d566a8;
  uVar11 = _DAT_150d566a4;
  uVar10 = ___xmm_ff00ff00ff00ff00ff00ff00ff00ff00;
  uVar9 = _UNK_1506e9cec;
  uVar21 = _UNK_1506e9ce8;
  uVar18 = _UNK_1506e9ce4;
  uVar16 = ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
  iVar3 = param_1->ArrayNum;
  uVar17 = 0;
  psVar4 = param_1->DataPtr;
  uVar22 = (longlong)iVar3 & 0xfffffffffffffff8;
  uVar19 = uVar17;
  if (0 < (longlong)uVar22) {
    uVar19 = (ulonglong)((int)(uVar22 - 1 >> 3) * 8 + 8);
    do {
      puVar1 = (uint *)(psVar4 + uVar17);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (uint *)(psVar4 + uVar17);
      *puVar2 = (*puVar1 & uVar10) >> 8 | (*puVar1 & uVar16) << 8;
      puVar2[1] = (uVar5 & uVar11) >> 8 | (uVar5 & uVar18) << 8;
      puVar2[2] = (uVar6 & uVar12) >> 8 | (uVar6 & uVar21) << 8;
      puVar2[3] = (uVar7 & uVar13) >> 8 | (uVar7 & uVar9) << 8;
      uVar17 = uVar17 + 8;
    } while ((longlong)uVar17 < (longlong)uVar22);
  }
  auVar8 = ___xmm_0e0f0c0d0a0b08090607040502030001;
  uVar18 = (uint)uVar19;
  uVar16 = iVar3 - uVar18;
  if ((((int)uVar18 < iVar3) && (3 < uVar16)) && (1 < __isa_available)) {
    if (0x1f < uVar16) {
      lVar20 = (longlong)(int)uVar18;
      uVar21 = uVar16 & 0x8000001f;
      if ((int)uVar21 < 0) {
        uVar21 = (uVar21 - 1 | 0xffffffe0) + 1;
      }
      pauVar15 = (undefined1 (*) [16])(psVar4 + lVar20 + 0x10);
      do {
        uVar18 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uVar18;
        lVar20 = lVar20 + 0x20;
        auVar23 = pshufb(pauVar15[-2],auVar8);
        pauVar15[-2] = auVar23;
        auVar23 = pshufb(pauVar15[-1],auVar8);
        pauVar15[-1] = auVar23;
        auVar23 = pshufb(*pauVar15,auVar8);
        *pauVar15 = auVar23;
        auVar23 = pshufb(pauVar15[1],auVar8);
        pauVar15[1] = auVar23;
        pauVar15 = pauVar15 + 4;
      } while (lVar20 < (int)(iVar3 - uVar21));
      if (((byte)uVar16 & 0x1f) < 4) goto LAB_1444af3ed;
    }
    lVar20 = (longlong)(int)uVar19;
    uVar16 = uVar16 & 0x80000003;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
    }
    do {
      auVar23._8_8_ = 0;
      auVar23._0_8_ = *(ulonglong *)(psVar4 + lVar20);
      uVar18 = (int)uVar19 + 4;
      uVar19 = (ulonglong)uVar18;
      auVar23 = pshufb(auVar23,auVar8);
      *(longlong *)(psVar4 + lVar20) = auVar23._0_8_;
      lVar20 = lVar20 + 4;
    } while (lVar20 < (int)(iVar3 - uVar16));
  }
LAB_1444af3ed:
  for (lVar20 = (longlong)(int)uVar18; lVar20 < iVar3; lVar20 = lVar20 + 1) {
    psVar4[lVar20] = (ushort)psVar4[lVar20] >> 8 | psVar4[lVar20] << 8;
  }
  FCsvProfiler::EndStat("ArrayInt16SwapBytes",uVar14);
  return;
}

// ArrayInt24SwapBytes @ 1444af440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Audio::ArrayInt24SwapBytes(TArrayView<signed_char,int> *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  
  if (!__CsvProfilerStat2875) {
    FCsvProfilerTrace::OutputInlineStat("ArrayInt24SwapBytes",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2875 = true;
  }
  uVar5 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayInt24SwapBytes",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayInt24SwapBytes");
  auVar4 = ___xmm_0f0c0d0e090a0b060708030405000102;
  iVar2 = param_1->ArrayNum;
  iVar9 = 0;
  pauVar3 = (undefined1 (*) [16])param_1->DataPtr;
  if (0 < iVar2 + -0x10) {
    lVar6 = ((longlong)(iVar2 + -0x10) - 1U) / 0xf + 1;
    iVar9 = (int)lVar6 * 0xf;
    pauVar7 = pauVar3;
    do {
      auVar11 = pshufb(*pauVar7,auVar4);
      *pauVar7 = auVar11;
      lVar6 = lVar6 + -1;
      pauVar7 = (undefined1 (*) [16])(*pauVar7 + 0xf);
    } while (lVar6 != 0);
  }
  lVar6 = (longlong)iVar9;
  if (lVar6 < iVar2) {
    puVar8 = *pauVar3 + lVar6;
    puVar10 = puVar8 + 2;
    lVar6 = ((iVar2 - lVar6) - 1U) / 3 + 1;
    do {
      uVar1 = *puVar8;
      *puVar8 = *puVar10;
      *puVar10 = uVar1;
      puVar10 = puVar10 + 3;
      lVar6 = lVar6 + -1;
      puVar8 = puVar8 + 3;
    } while (lVar6 != 0);
  }
  FCsvProfiler::EndStat("ArrayInt24SwapBytes",uVar5);
  return;
}

// ArrayInt32SwapBytes @ 1444af560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Audio::ArrayInt32SwapBytes(TArrayView<int,int> *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  
  if (!__CsvProfilerStat2914) {
    FCsvProfilerTrace::OutputInlineStat("ArrayInt32SwapBytes",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2914 = true;
  }
  uVar4 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayInt32SwapBytes",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayInt32SwapBytes");
  auVar3 = ___xmm_0c0d0e0f08090a0b0405060700010203;
  iVar1 = param_1->ArrayNum;
  uVar7 = 0;
  piVar2 = param_1->DataPtr;
  uVar12 = (longlong)iVar1 & 0xfffffffffffffffc;
  uVar9 = uVar7;
  if (0 < (longlong)uVar12) {
    uVar9 = (ulonglong)((int)(uVar12 - 1 >> 2) * 4 + 4);
    do {
      auVar13 = pshufb(*(undefined1 (*) [16])(piVar2 + uVar7),auVar3);
      *(undefined1 (*) [16])(piVar2 + uVar7) = auVar13;
      uVar7 = uVar7 + 4;
    } while ((longlong)uVar7 < (longlong)uVar12);
  }
  uVar8 = (uint)uVar9;
  uVar6 = iVar1 - uVar8;
  if ((((int)uVar8 < iVar1) && (1 < uVar6)) && (1 < __isa_available)) {
    if (0xf < uVar6) {
      lVar10 = (longlong)(int)uVar8;
      uVar11 = uVar6 & 0x8000000f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
      }
      pauVar5 = (undefined1 (*) [16])(piVar2 + lVar10 + 8);
      do {
        uVar8 = (int)uVar9 + 0x10;
        uVar9 = (ulonglong)uVar8;
        lVar10 = lVar10 + 0x10;
        auVar13 = pshufb(pauVar5[-2],auVar3);
        pauVar5[-2] = auVar13;
        auVar13 = pshufb(pauVar5[-1],auVar3);
        pauVar5[-1] = auVar13;
        auVar13 = pshufb(*pauVar5,auVar3);
        *pauVar5 = auVar13;
        auVar13 = pshufb(pauVar5[1],auVar3);
        pauVar5[1] = auVar13;
        pauVar5 = pauVar5 + 4;
      } while (lVar10 < (int)(iVar1 - uVar11));
      if (((byte)uVar6 & 0xf) < 2) goto LAB_1444af6ed;
    }
    lVar10 = (longlong)(int)uVar9;
    uVar6 = uVar6 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    do {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulonglong *)(piVar2 + lVar10);
      uVar8 = (int)uVar9 + 2;
      uVar9 = (ulonglong)uVar8;
      auVar13 = pshufb(auVar13,auVar3);
      *(longlong *)(piVar2 + lVar10) = auVar13._0_8_;
      lVar10 = lVar10 + 2;
    } while (lVar10 < (int)(iVar1 - uVar6));
  }
LAB_1444af6ed:
  for (lVar10 = (longlong)(int)uVar8; lVar10 < iVar1; lVar10 = lVar10 + 1) {
    uVar6 = piVar2[lVar10];
    piVar2[lVar10] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
    ;
  }
  FCsvProfiler::EndStat("ArrayInt32SwapBytes",uVar4);
  return;
}

// ArrayInterleave @ 1444af740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Audio::ArrayInterleave
          (TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_48;
  ForAnyElementType local_40;
  int local_38;
  int local_34 [3];
  
  uVar1 = param_1->ArrayNum;
  if (uVar1 != 0) {
    if (((int)uVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = *(int *)((param_1->AllocatorInstance).Data + 8);
    TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized(param_2,iVar2 * uVar1,Default);
    local_40.Data = (FScriptContainerElement *)0x0;
    local_34[0] = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    local_38 = 0;
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,&local_40,0,local_34);
    }
    iVar3 = param_1->ArrayNum;
    pFVar7 = (param_1->AllocatorInstance).Data;
    pFVar8 = pFVar7 + (longlong)iVar3 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar8) break;
      local_48 = *(undefined8 *)pFVar7;
      if (((local_40.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)local_34[0] * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_38 == local_34[0]) {
        local_38 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_40,local_34);
      }
      lVar6 = (longlong)local_38;
      pFVar7 = pFVar7 + 0x10;
      local_38 = local_38 + 1;
      *(undefined8 *)(local_40.Data + lVar6 * 8) = local_48;
    }
    ArrayInterleave((float **)local_40.Data,(float *)(param_2->AllocatorInstance).Data,iVar2,uVar1);
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  return;
}

// ArrayInterleave @ 1444af930

void __cdecl Audio::ArrayInterleave(float **param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (!__CsvProfilerStat2694) {
    FCsvProfilerTrace::OutputInlineStat("ArrayInterleave",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2694 = true;
  }
  uVar3 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayInterleave",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayInterleave");
  if (0 < param_4) {
    uVar9 = (ulonglong)(uint)param_4;
    do {
      pfVar6 = *param_1;
      iVar8 = 0;
      pfVar5 = param_2;
      if (3 < param_3) {
        uVar4 = (param_3 - 4U >> 2) + 1;
        uVar7 = (ulonglong)uVar4;
        iVar8 = uVar4 * 4;
        do {
          *pfVar5 = *pfVar6;
          pfVar5 = pfVar5 + param_4;
          *pfVar5 = pfVar6[1];
          pfVar5 = pfVar5 + param_4;
          *pfVar5 = pfVar6[2];
          pfVar1 = pfVar6 + 3;
          pfVar6 = pfVar6 + 4;
          pfVar5[param_4] = *pfVar1;
          pfVar5 = pfVar5 + param_4 + param_4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (iVar8 < param_3) {
        uVar7 = (ulonglong)(uint)(param_3 - iVar8);
        do {
          fVar2 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          *pfVar5 = fVar2;
          pfVar5 = pfVar5 + param_4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FCsvProfiler::EndStat("ArrayInterleave",uVar3);
  return;
}

// ArrayInterpolate @ 1444afa70

void __cdecl Audio::ArrayInterpolate(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [16];
  float fVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  fVar9 = __real_3f800000;
  if ((0 < param_4) && (0 < param_3)) {
    fVar16 = (float)param_3;
    fVar26 = fVar16 * (__real_3f800000 / (float)param_4);
    uVar12 = param_4 & 0xfffffffc;
    if (uVar12 != 0) {
      fVar13 = fVar26 * __real_40400000;
      fVar29 = fVar26 * __real_40800000;
      if (uVar12 != 0) {
        lVar10 = 0;
        fVar18 = 0.0;
        fVar27 = fVar26;
        fVar16 = (fVar16 + fVar16) * (__real_3f800000 / (float)param_4);
        fVar28 = fVar13;
        do {
          auVar14._4_4_ = fVar27;
          auVar14._0_4_ = fVar18;
          auVar14._8_4_ = fVar16;
          auVar14._12_4_ = fVar28;
          auVar14 = roundps(ZEXT416((uint)fVar13),auVar14,1);
          iVar17 = (int)auVar14._0_4_;
          iVar19 = (int)auVar14._4_4_;
          iVar20 = (int)auVar14._8_4_;
          iVar21 = (int)auVar14._12_4_;
          fVar22 = fVar18 - auVar14._0_4_;
          fVar23 = fVar27 - auVar14._4_4_;
          fVar24 = fVar16 - auVar14._8_4_;
          fVar25 = fVar28 - auVar14._12_4_;
          fVar2 = param_1[iVar19 + GlobalVectorConstants::IntOne.m128i_i32[1]];
          fVar7 = GlobalVectorConstants::FloatOne.m128_f32[1];
          fVar8 = GlobalVectorConstants::FloatOne.m128_f32[3];
          fVar15 = GlobalVectorConstants::FloatOne.m128_f32[2];
          fVar3 = param_1[iVar20 + GlobalVectorConstants::IntOne.m128i_i32[2]];
          fVar4 = param_1[iVar21 + GlobalVectorConstants::IntOne.m128i_i32[3]];
          fVar13 = param_1[iVar19];
          fVar5 = param_1[iVar20];
          fVar6 = param_1[iVar21];
          pfVar1 = param_2 + lVar10;
          *pfVar1 = param_1[iVar17 + GlobalVectorConstants::IntOne.m128i_i32[0]] *
                    (GlobalVectorConstants::FloatOne.m128_f32[0] - fVar22) +
                    param_1[iVar17] * fVar22;
          pfVar1[1] = fVar2 * (fVar7 - fVar23) + fVar13 * fVar23;
          pfVar1[2] = fVar3 * (fVar15 - fVar24) + fVar5 * fVar24;
          pfVar1[3] = fVar4 * (fVar8 - fVar25) + fVar6 * fVar25;
          lVar10 = lVar10 + 4;
          fVar18 = fVar18 + fVar29;
          fVar27 = fVar27 + fVar29;
          fVar16 = fVar16 + fVar29;
          fVar28 = fVar28 + fVar29;
        } while (lVar10 < (longlong)(ulonglong)uVar12);
      }
    }
    fVar13 = __real_3f000000;
    fVar16 = __real_bf000000;
    if ((param_4 & 3U) != 0) {
      uVar11 = (ulonglong)uVar12;
      fVar29 = (float)(int)uVar12 * fVar26;
      if (uVar11 < (ulonglong)(longlong)param_4) {
        do {
          iVar17 = (int)ROUND((fVar29 + fVar29) - fVar13) >> 1;
          fVar18 = fVar29 - (float)iVar17;
          param_2[uVar11] =
               (fVar9 - fVar18) * param_1[-((longlong)(int)ROUND(fVar16 - (fVar29 + fVar29)) >> 1)]
               + fVar18 * param_1[iVar17];
          uVar11 = uVar11 + 1;
          fVar29 = fVar29 + fVar26;
        } while ((longlong)uVar11 < (longlong)param_4);
      }
    }
  }
  return;
}

// ArrayLerpAddInPlace @ 1444afcf0

void __cdecl
Audio::ArrayLerpAddInPlace
          (TArrayView<float_const_,int> *param_1,float param_2,float param_3,
          TArrayView<float,int> *param_4)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (!__CsvProfilerStat1237) {
    FCsvProfilerTrace::OutputInlineStat("ArrayLerpAddInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1237 = true;
  }
  uVar6 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayLerpAddInPlace",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayLerpAddInPlace");
  if (param_1->ArrayNum != param_4->ArrayNum) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InValues.Num() == InAccumulateValues.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                       ,0x4d6,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar2 = param_1->ArrayNum;
  lVar12 = (longlong)(int)uVar2;
  pfVar3 = param_1->DataPtr;
  pfVar4 = param_4->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    fVar23 = (float)(int)(uVar2 - 1);
    if ((float)(int)(uVar2 - 1) <= __real_3f800000) {
      fVar23 = __real_3f800000;
    }
    fVar23 = (param_3 - param_2) / fVar23;
    fVar22 = fVar23 * __real_40800000;
    fVar14 = fVar23 + param_2;
    fVar15 = fVar23 * __real_40400000 + param_2;
    fVar20 = fVar23 + fVar23 + param_2;
    uVar13 = uVar2 & 0xfffffffc;
    if ((uVar13 != 0) && (0 < (int)uVar13)) {
      lVar9 = ((longlong)(int)uVar13 - 1U >> 2) + 1;
      pfVar8 = pfVar4;
      fVar21 = param_2;
      do {
        pfVar1 = (float *)((longlong)pfVar8 + ((longlong)pfVar3 - (longlong)pfVar4));
        fVar16 = *pfVar1 * fVar21;
        fVar17 = pfVar1[1] * fVar14;
        fVar18 = pfVar1[2] * fVar20;
        fVar19 = pfVar1[3] * fVar15;
        fVar21 = fVar21 + fVar22;
        fVar14 = fVar14 + fVar22;
        fVar20 = fVar20 + fVar22;
        fVar15 = fVar15 + fVar22;
        *pfVar8 = fVar16 + *pfVar8;
        pfVar8[1] = fVar17 + pfVar8[1];
        pfVar8[2] = fVar18 + pfVar8[2];
        pfVar8[3] = fVar19 + pfVar8[3];
        pfVar8 = pfVar8 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if ((uVar2 & 3) != 0) {
      lVar9 = (longlong)(int)uVar13;
      fVar14 = (float)(int)uVar13 * fVar23 + param_2;
      if (lVar9 < lVar12) {
        if (3 < lVar12 - lVar9) {
          pfVar8 = pfVar4 + lVar9 + 1;
          lVar11 = (longlong)pfVar3 - (longlong)pfVar4;
          lVar10 = ((lVar12 - lVar9) - 4U >> 2) + 1;
          lVar9 = lVar9 + lVar10 * 4;
          do {
            pfVar8[-1] = fVar14 * *(float *)((longlong)pfVar8 + lVar11 + -4) + pfVar8[-1];
            fVar15 = fVar14 + fVar23 + fVar23;
            *pfVar8 = (fVar14 + fVar23) * *(float *)((longlong)pfVar8 + lVar11) + *pfVar8;
            fVar20 = fVar15 + fVar23;
            pfVar8[1] = fVar15 * *(float *)((longlong)pfVar8 + lVar11 + 4) + pfVar8[1];
            fVar14 = fVar20 + fVar23;
            pfVar8[2] = fVar20 * *(float *)((longlong)pfVar8 + lVar11 + 8) + pfVar8[2];
            pfVar8 = pfVar8 + 4;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          if (lVar12 <= lVar9) goto LAB_1444aff41;
        }
        pfVar8 = pfVar4 + lVar9;
        lVar12 = lVar12 - lVar9;
        do {
          *pfVar8 = fVar14 * *(float *)(((longlong)pfVar3 - (longlong)pfVar4) + (longlong)pfVar8) +
                    *pfVar8;
          pfVar8 = pfVar8 + 1;
          lVar12 = lVar12 + -1;
          fVar14 = fVar14 + fVar23;
        } while (lVar12 != 0);
      }
    }
  }
  else {
    ::ArrayLerpAddInPlace(pfVar3);
  }
LAB_1444aff41:
  FCsvProfiler::EndStat("ArrayLerpAddInPlace",uVar6);
  return;
}

// ArrayLerpFractionalDelay @ 1444aff70

void __cdecl
Audio::ArrayLerpFractionalDelay
          (float *param_1,float *param_2,float *param_3,int *param_4,int *param_5,int *param_6,
          int param_7,float *param_8,float param_9)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 in_XMM0 [16];
  undefined1 auVar18 [16];
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  
  if (!bAudio_FloatArrayMath_ISPC_Enabled) {
    if (0 < (longlong)param_7) {
      lVar15 = (longlong)param_2 - (longlong)param_4;
      lVar16 = (longlong)param_8 - (longlong)param_4;
      lVar17 = ((longlong)param_7 - 1U >> 2) + 1;
      do {
        auVar24 = maxps(*(undefined1 (*) [16])((longlong)param_4 + lVar15),
                        (undefined1  [16])GlobalVectorConstants::FloatZero);
        fVar8 = GlobalVectorConstants::FloatOne.m128_f32[0];
        fVar9 = GlobalVectorConstants::FloatOne.m128_f32[1];
        fVar10 = GlobalVectorConstants::FloatOne.m128_f32[2];
        fVar11 = GlobalVectorConstants::FloatOne.m128_f32[3];
        auVar18._4_4_ = param_9;
        auVar18._0_4_ = param_9;
        auVar18._8_4_ = param_9;
        auVar18._12_4_ = param_9;
        auVar24 = minps(auVar24,auVar18);
        auVar18 = roundps(in_XMM0,auVar24,1);
        fVar23 = auVar24._0_4_ - auVar18._0_4_;
        fVar25 = auVar24._4_4_ - auVar18._4_4_;
        fVar26 = auVar24._8_4_ - auVar18._8_4_;
        fVar27 = auVar24._12_4_ - auVar18._12_4_;
        iVar19 = *param_4 - (int)auVar18._0_4_;
        iVar20 = param_4[1] - (int)auVar18._4_4_;
        iVar21 = param_4[2] - (int)auVar18._8_4_;
        iVar22 = param_4[3] - (int)auVar18._12_4_;
        *param_5 = iVar19;
        param_5[1] = iVar20;
        param_5[2] = iVar21;
        param_5[3] = iVar22;
        iVar12 = GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar13 = GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar14 = GlobalVectorConstants::IntOne.m128i_i32[3];
        *param_6 = iVar19 + GlobalVectorConstants::IntOne.m128i_i32[0];
        param_6[1] = iVar20 + iVar12;
        param_6[2] = iVar21 + iVar13;
        param_6[3] = iVar22 + iVar14;
        fVar2 = param_3[param_5[1]];
        fVar3 = param_3[param_5[2]];
        fVar4 = param_3[param_5[3]];
        fVar5 = param_3[param_6[1]];
        in_XMM0 = ZEXT416((uint)fVar5);
        fVar6 = param_3[param_6[3]];
        fVar7 = param_3[param_6[2]];
        pfVar1 = (float *)((longlong)param_4 + lVar16);
        *pfVar1 = param_3[*param_5] * fVar23 + param_3[*param_6] * (fVar8 - fVar23);
        pfVar1[1] = fVar2 * fVar25 + fVar5 * (fVar9 - fVar25);
        pfVar1[2] = fVar3 * fVar26 + fVar7 * (fVar10 - fVar26);
        pfVar1[3] = fVar4 * fVar27 + fVar6 * (fVar11 - fVar27);
        param_4 = param_4 + 4;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    return;
  }
  ::ArrayLerpFractionalDelay();
  return;
}

// ArrayMagnitudeToDecibelInPlace @ 1444b00f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Audio::ArrayMagnitudeToDecibelInPlace(TArrayView<float,int> *param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  float fVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar15;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined1 auVar16 [16];
  float extraout_XMM0_Dd_00;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  
  if (!__CsvProfilerStat1648) {
    FCsvProfilerTrace::OutputInlineStat
              ("ArrayMagnitudeToDecibelInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1648 = true;
  }
  uVar9 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayMagnitudeToDecibelInPlace",_GCsvCategory_Audio_Dsp.Index,
             "CSV_ArrayMagnitudeToDecibelInPlace");
  uVar2 = param_1->ArrayNum;
  pfVar3 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    fVar14 = expf(MathIntrinsics::Loge10 * param_2 * __real_3d4ccccd);
    fVar5 = __real_41a00000;
    auVar27._4_4_ = fVar14;
    auVar27._0_4_ = fVar14;
    auVar27._8_4_ = fVar14;
    auVar27._12_4_ = fVar14;
    fVar26 = __real_3f800000 / MathIntrinsics::Loge10;
    auVar22._0_4_ = fVar26 * __real_41a00000;
    auVar22._4_4_ = auVar22._0_4_;
    auVar22._8_4_ = auVar22._0_4_;
    auVar22._12_4_ = auVar22._0_4_;
    uVar11 = uVar2 & 0xfffffffc;
    if ((uVar11 != 0) && (0 < (int)uVar11)) {
      lVar12 = 0;
      do {
        maxps(*(undefined1 (*) [16])(pfVar3 + lVar12),auVar27);
        __vdecl_logf4();
        pfVar1 = pfVar3 + lVar12;
        *pfVar1 = extraout_XMM0_Da * auVar22._0_4_;
        pfVar1[1] = extraout_XMM0_Db * auVar22._0_4_;
        pfVar1[2] = extraout_XMM0_Dc * auVar22._0_4_;
        pfVar1[3] = extraout_XMM0_Dd * auVar22._0_4_;
        lVar12 = lVar12 + 4;
      } while (lVar12 < (int)uVar11);
    }
    fVar8 = _UNK_150d5664c;
    fVar7 = _UNK_150d56648;
    fVar6 = _UNK_150d56644;
    fVar15 = ___xmm_41a0000041a0000041a0000041a00000;
    if ((uVar2 & 3) != 0) {
      if (((int)uVar11 < (int)uVar2) && (3 < uVar2 - uVar11)) {
        uVar10 = uVar2 - uVar11 & 0x80000003;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
        }
        auVar16._4_4_ = MathIntrinsics::Loge10;
        auVar16._0_4_ = MathIntrinsics::Loge10;
        auVar16._8_4_ = MathIntrinsics::Loge10;
        auVar16._12_4_ = MathIntrinsics::Loge10;
        auVar22 = rcpps(auVar22,auVar16);
        fVar21 = auVar22._0_4_;
        fVar23 = auVar22._4_4_;
        fVar24 = auVar22._8_4_;
        fVar25 = auVar22._12_4_;
        fVar17 = fVar21 * fVar21 * MathIntrinsics::Loge10;
        fVar18 = fVar23 * fVar23 * MathIntrinsics::Loge10;
        fVar19 = fVar24 * fVar24 * MathIntrinsics::Loge10;
        fVar20 = fVar25 * fVar25 * MathIntrinsics::Loge10;
        pauVar13 = (undefined1 (*) [16])(pfVar3 + (int)uVar11);
        do {
          auVar4._4_4_ = fVar14;
          auVar4._0_4_ = fVar14;
          auVar4._8_4_ = fVar14;
          auVar4._12_4_ = fVar14;
          maxps(*pauVar13,auVar4);
          __vdecl_logf4();
          uVar11 = uVar11 + 4;
          *(float *)*pauVar13 = extraout_XMM0_Da_00 * ((fVar21 + fVar21) - fVar17) * fVar15;
          *(float *)(*pauVar13 + 4) = extraout_XMM0_Db_00 * ((fVar23 + fVar23) - fVar18) * fVar6;
          *(float *)(*pauVar13 + 8) = extraout_XMM0_Dc_00 * ((fVar24 + fVar24) - fVar19) * fVar7;
          *(float *)(*pauVar13 + 0xc) = extraout_XMM0_Dd_00 * ((fVar25 + fVar25) - fVar20) * fVar8;
          pauVar13 = pauVar13 + 1;
        } while ((int)uVar11 < (int)(uVar2 - uVar10));
      }
      for (lVar12 = (longlong)(int)uVar11; lVar12 < (int)uVar2; lVar12 = lVar12 + 1) {
        fVar15 = pfVar3[lVar12];
        if (pfVar3[lVar12] <= fVar14) {
          fVar15 = fVar14;
        }
        fVar15 = logf(fVar15);
        pfVar3[lVar12] = fVar15 * fVar5 * fVar26;
      }
    }
  }
  else {
    ::ArrayMagnitudeToDecibelInPlace(pfVar3,param_2,uVar2);
  }
  FCsvProfiler::EndStat("ArrayMagnitudeToDecibelInPlace",uVar9);
  return;
}

// ArrayMax @ 1444b0340

void __cdecl
Audio::ArrayMax(TArrayView<float_const_,int> *param_1,TArrayView<float_const_,int> *param_2,
               TArrayView<float,int> *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView1.Num() == InView2.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                         ,0x2e6,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->ArrayNum != param_3->ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView1.Num() == OutView.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                         ,0x2e7,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (__CsvProfilerStat745 == false) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMax",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat745 = true;
  }
  uVar6 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayMax",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMax");
  uVar4 = param_1->ArrayNum;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar8 = uVar4 & 0xfffffffc;
    if ((uVar8 != 0) && (uVar11 = 0, 0 < (int)uVar8)) {
      lVar9 = 0;
      do {
        uVar10 = ~uVar11 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar12 = uVar10;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        auVar13 = *(undefined1 (*) [16])(param_1->DataPtr + lVar9);
        uVar12 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar12 = uVar10;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        auVar3 = *(undefined1 (*) [16])(param_2->DataPtr + lVar9);
        uVar12 = 0;
        if ((int)uVar11 < param_3->ArrayNum) {
          uVar12 = uVar10;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = uVar11 + 4;
        auVar13 = maxps(auVar13,auVar3);
        *(undefined1 (*) [16])(param_3->DataPtr + lVar9) = auVar13;
        lVar9 = lVar9 + 4;
      } while (lVar9 < (int)uVar8);
    }
    if ((uVar4 & 3) != 0) {
      for (lVar9 = (longlong)(int)uVar8; lVar9 < (int)uVar4; lVar9 = lVar9 + 1) {
        uVar12 = ~uVar8 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar1 = param_2->DataPtr[lVar9];
        uVar11 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar2 = param_1->DataPtr[lVar9];
        if (param_1->DataPtr[lVar9] <= fVar1) {
          fVar2 = fVar1;
        }
        uVar11 = 0;
        if ((int)uVar8 < param_3->ArrayNum) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = uVar8 + 1;
        param_3->DataPtr[lVar9] = fVar2;
      }
    }
  }
  else {
    ::ArrayMax(param_1->DataPtr,param_2->DataPtr,param_3->DataPtr,uVar4);
  }
  FCsvProfiler::EndStat("ArrayMax",uVar6);
  return;
}

// ArrayMaxAbsValue @ 1444b06f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl Audio::ArrayMaxAbsValue(TArrayView<float_const_,int> *param_1)

{
  uint uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  
  if (!__CsvProfilerStat781) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMaxAbsValue",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat781 = true;
  }
  uVar4 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayMaxAbsValue",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMaxAbsValue");
  uVar1 = param_1->ArrayNum;
  lVar8 = (longlong)(int)uVar1;
  pfVar2 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar5 = uVar1 & 0xfffffffc;
    lVar10 = (longlong)(int)uVar5;
    auVar13 = ZEXT816(0);
    fVar11 = 0.0;
    if (uVar5 != 0) {
      if (0 < (int)uVar5) {
        lVar6 = 0;
        do {
          pfVar7 = pfVar2 + lVar6;
          lVar6 = lVar6 + 4;
          auVar3._4_4_ = (uint)pfVar7[1] & _UNK_15061cc74;
          auVar3._0_4_ = (uint)*pfVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff;
          auVar3._8_4_ = (uint)pfVar7[2] & _UNK_15061cc78;
          auVar3._12_4_ = (uint)pfVar7[3] & _UNK_15061cc7c;
          auVar13 = maxps(auVar13,auVar3);
        } while (lVar6 < lVar10);
      }
      fVar11 = auVar13._8_4_;
      if (auVar13._8_4_ <= auVar13._12_4_) {
        fVar11 = auVar13._12_4_;
      }
      fVar12 = auVar13._4_4_;
      if (auVar13._4_4_ <= auVar13._0_4_) {
        fVar12 = auVar13._0_4_;
      }
      if (fVar11 <= fVar12) {
        fVar11 = fVar12;
      }
    }
    if (((uVar1 & 3) != 0) && (lVar10 < lVar8)) {
      fVar12 = fVar11;
      if (3 < lVar8 - lVar10) {
        lVar6 = lVar10 + 2;
        lVar9 = ((lVar8 - lVar10) - 4U >> 2) + 1;
        lVar10 = lVar10 + lVar9 * 4;
        pfVar7 = pfVar2 + lVar6;
        do {
          fVar12 = (float)((uint)pfVar7[-2] & __xmm_7fffffff7fffffff7fffffff7fffffff);
          if ((float)((uint)pfVar7[-2] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar11) {
            fVar12 = fVar11;
          }
          if (fVar12 <= (float)((uint)pfVar7[-1] & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            fVar12 = (float)((uint)pfVar7[-1] & __xmm_7fffffff7fffffff7fffffff7fffffff);
          }
          if (fVar12 <= (float)((uint)*pfVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            fVar12 = (float)((uint)*pfVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff);
          }
          fVar11 = fVar12;
          if (fVar12 <= (float)((uint)pfVar7[1] & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            fVar11 = (float)((uint)pfVar7[1] & __xmm_7fffffff7fffffff7fffffff7fffffff);
          }
          lVar9 = lVar9 + -1;
          pfVar7 = pfVar7 + 4;
        } while (lVar9 != 0);
        fVar12 = fVar11;
        if (lVar8 <= lVar10) goto LAB_1444b0868;
      }
      do {
        pfVar7 = pfVar2 + lVar10;
        lVar10 = lVar10 + 1;
        fVar11 = (float)((uint)*pfVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        if ((float)((uint)*pfVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar12) {
          fVar11 = fVar12;
        }
        fVar12 = fVar11;
      } while (lVar10 < lVar8);
    }
  }
  else {
    fVar11 = (float)::ArrayMaxAbsValue(pfVar2);
  }
LAB_1444b0868:
  FCsvProfiler::EndStat("ArrayMaxAbsValue",uVar4);
  return fVar11;
}

// ArrayMaxFilter @ 1444b0890

void __cdecl
Audio::ArrayMaxFilter
          (TArrayView<float_const_,int> *param_1,int param_2,int param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if ((param_2 <= param_3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WindowOrigin < WindowSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                         ,0x1bf,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_3 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WindowOrigin >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                         ,0x1c0,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WindowSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                         ,0x1c1,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  iVar19 = param_2 - param_3;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar4,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
  if (0 < iVar4) {
    if (__CsvProfilerStat463 == false) {
      FCsvProfilerTrace::OutputInlineStat("ArrayMaxFilter",_GCsvCategory_Audio_Dsp.Index);
      __CsvProfilerStat463 = true;
    }
    uVar8 = _GCsvCategory_Audio_Dsp.Index;
    FCsvProfiler::BeginStat("ArrayMaxFilter",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMaxFilter");
    pfVar5 = param_1->DataPtr;
    pFVar6 = (param_4->AllocatorInstance).Data;
    iVar11 = iVar4;
    if (iVar19 < iVar4) {
      iVar11 = iVar19;
    }
    iVar14 = 0;
    lVar13 = (longlong)iVar11;
    iVar11 = 0;
    fVar23 = *pfVar5;
    lVar16 = 0;
    if (3 < lVar13) {
      pfVar12 = pfVar5 + 2;
      lVar17 = (lVar13 - 4U >> 2) + 1;
      lVar16 = lVar17 * 4;
      do {
        fVar20 = pfVar12[-2];
        fVar1 = pfVar12[-1];
        fVar2 = *pfVar12;
        fVar22 = fVar20;
        if (fVar20 <= fVar23) {
          fVar22 = fVar23;
        }
        fVar3 = pfVar12[1];
        pfVar12 = pfVar12 + 4;
        fVar21 = fVar22;
        if (fVar22 <= fVar1) {
          fVar21 = fVar1;
        }
        iVar10 = iVar11;
        if (fVar20 <= fVar23) {
          iVar10 = iVar14;
        }
        fVar20 = fVar21;
        if (fVar21 <= fVar2) {
          fVar20 = fVar2;
        }
        iVar14 = iVar11 + 1;
        if (fVar1 <= fVar22) {
          iVar14 = iVar10;
        }
        fVar23 = fVar20;
        if (fVar20 <= fVar3) {
          fVar23 = fVar3;
        }
        iVar10 = iVar11 + 2;
        if (fVar2 <= fVar21) {
          iVar10 = iVar14;
        }
        iVar14 = iVar11 + 3;
        if (fVar3 <= fVar20) {
          iVar14 = iVar10;
        }
        iVar11 = iVar11 + 4;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    for (; lVar16 < lVar13; lVar16 = lVar16 + 1) {
      iVar10 = iVar11;
      fVar20 = pfVar5[lVar16];
      if (pfVar5[lVar16] <= fVar23) {
        iVar10 = iVar14;
        fVar20 = fVar23;
      }
      iVar11 = iVar11 + 1;
      fVar23 = fVar20;
      iVar14 = iVar10;
    }
    *(float *)pFVar6 = fVar23;
    if (1 < (longlong)iVar4) {
      lVar16 = 1;
      iVar11 = -param_3;
      do {
        iVar11 = iVar11 + 1;
        iVar19 = iVar19 + 1;
        iVar10 = 0;
        if (0 < iVar11) {
          iVar10 = iVar11;
        }
        iVar15 = iVar4;
        if (iVar19 < iVar4) {
          iVar15 = iVar19;
        }
        lVar13 = (longlong)iVar15;
        if (iVar14 < iVar11) {
          iVar15 = iVar10 + 1;
          lVar17 = (longlong)iVar15;
          fVar23 = pfVar5[iVar10];
          iVar14 = iVar10;
          if (lVar17 < lVar13) {
            if (3 < lVar13 - lVar17) {
              pfVar12 = pfVar5 + lVar17 + 2;
              lVar18 = ((lVar13 - lVar17) - 4U >> 2) + 1;
              lVar17 = lVar17 + lVar18 * 4;
              do {
                fVar20 = pfVar12[-2];
                fVar1 = pfVar12[-1];
                fVar2 = *pfVar12;
                fVar22 = fVar20;
                if (fVar20 <= fVar23) {
                  fVar22 = fVar23;
                }
                fVar3 = pfVar12[1];
                pfVar12 = pfVar12 + 4;
                fVar21 = fVar22;
                if (fVar22 <= fVar1) {
                  fVar21 = fVar1;
                }
                iVar10 = iVar15;
                if (fVar20 <= fVar23) {
                  iVar10 = iVar14;
                }
                fVar20 = fVar21;
                if (fVar21 <= fVar2) {
                  fVar20 = fVar2;
                }
                iVar14 = iVar15 + 1;
                if (fVar1 <= fVar22) {
                  iVar14 = iVar10;
                }
                fVar23 = fVar20;
                if (fVar20 <= fVar3) {
                  fVar23 = fVar3;
                }
                iVar10 = iVar15 + 2;
                if (fVar2 <= fVar21) {
                  iVar10 = iVar14;
                }
                iVar14 = iVar15 + 3;
                if (fVar3 <= fVar20) {
                  iVar14 = iVar10;
                }
                iVar15 = iVar15 + 4;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
              iVar10 = iVar14;
              if (lVar13 <= lVar17) goto LAB_1444b0c0d;
            }
            do {
              iVar14 = iVar15;
              fVar20 = pfVar5[lVar17];
              if (pfVar5[lVar17] <= fVar23) {
                iVar14 = iVar10;
                fVar20 = fVar23;
              }
              fVar23 = fVar20;
              iVar15 = iVar15 + 1;
              lVar17 = lVar17 + 1;
              iVar10 = iVar14;
            } while (lVar17 < lVar13);
          }
        }
        else if (fVar23 < pfVar5[lVar13 + -1]) {
          iVar14 = iVar15 + -1;
          fVar23 = pfVar5[lVar13 + -1];
        }
LAB_1444b0c0d:
        *(float *)(pFVar6 + lVar16 * 4) = fVar23;
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar4);
    }
    FCsvProfiler::EndStat("ArrayMaxFilter",uVar8);
  }
  return;
}

// ArrayMean @ 1444b0c70

void __cdecl Audio::ArrayMean(TArrayView<float_const_,int> *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  iVar2 = param_1->ArrayNum;
  lVar8 = (longlong)iVar2;
  lVar7 = 0;
  *param_2 = 0.0;
  if (0 < iVar2) {
    if (__CsvProfilerStat175 == false) {
      FCsvProfilerTrace::OutputInlineStat("ArrayMean",_GCsvCategory_Audio_Dsp.Index);
      __CsvProfilerStat175 = true;
    }
    uVar4 = _GCsvCategory_Audio_Dsp.Index;
    FCsvProfiler::BeginStat("ArrayMean",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMean");
    pfVar3 = param_1->DataPtr;
    if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
      fVar9 = *param_2;
      if (3 < lVar8) {
        pfVar5 = pfVar3 + 2;
        lVar6 = (lVar8 - 4U >> 2) + 1;
        lVar7 = lVar6 * 4;
        do {
          fVar1 = pfVar5[-2];
          *param_2 = fVar9 + fVar1;
          fVar9 = fVar9 + fVar1 + pfVar5[-1];
          *param_2 = fVar9;
          fVar9 = fVar9 + *pfVar5;
          *param_2 = fVar9;
          fVar9 = fVar9 + pfVar5[1];
          pfVar5 = pfVar5 + 4;
          *param_2 = fVar9;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      for (; lVar7 < lVar8; lVar7 = lVar7 + 1) {
        fVar9 = fVar9 + pfVar3[lVar7];
        *param_2 = fVar9;
      }
      *param_2 = fVar9 / (float)iVar2;
    }
    else {
      ::ArrayMean(pfVar3,param_2,iVar2);
    }
    FCsvProfiler::EndStat("ArrayMean",uVar4);
  }
  return;
}

// ArrayMeanFilter @ 1444b0db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::ArrayMeanFilter
          (TArrayView<float_const_,int> *param_1,int param_2,int param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  int iVar30;
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar39;
  float fVar40;
  undefined1 in_XMM2 [16];
  undefined1 auVar35 [16];
  float fVar42;
  undefined1 auVar36 [16];
  float fVar33;
  float fVar34;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  TArrayView<float_const_,int> local_a8;
  TArray<float,TSizedDefaultAllocator<32>_> local_98 [5];
  
  if ((param_2 <= param_3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("WindowOrigin < WindowSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x174,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_3 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("WindowOrigin >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x175,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("WindowSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x176,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar17 = param_1->ArrayNum;
  piVar1 = &param_4->ArrayMax;
  iVar19 = 0;
  param_4->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar17,&param_4->AllocatorInstance,&param_4->ArrayNum,piVar1);
  if (iVar17 < 1) {
    return;
  }
  if (__CsvProfilerStat385 == false) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMeanFilter",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat385 = true;
  }
  uVar10 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayMeanFilter",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMeanFilter");
  local_98[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98[0].ArrayNum = 0;
  local_98[0].ArrayMax = 0;
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.ArrayNum = param_1->ArrayNum;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ArrayCumulativeSum(&local_a8,local_98);
  uVar21 = 0;
  if ((int)(local_98[0].ArrayNum - 1U) < local_98[0].ArrayNum) {
    uVar21 = ~(local_98[0].ArrayNum - 1U) >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  auVar38 = ___xmm_3f8000003f8000003f8000003f800000;
  iVar9 = _UNK_150631e0c;
  iVar8 = _UNK_150631e08;
  iVar7 = __xmm_00000003000000020000000100000000._4_4_;
  iVar6 = (int)__xmm_00000003000000020000000100000000;
  pFVar4 = (param_4->AllocatorInstance).Data;
  fVar3 = *(float *)(local_98[0].AllocatorInstance.Data + (longlong)(local_98[0].ArrayNum + -1) * 4)
  ;
  if (bAudio_FloatArrayMath_ISPC_Enabled != false) {
    ::ArrayMeanFilter(local_98[0].AllocatorInstance.Data,param_2,param_3,pFVar4,fVar3,iVar17);
    goto LAB_1444b162b;
  }
  uVar21 = param_3 + 1;
  iVar23 = (iVar17 - param_2) + param_3;
  uVar24 = ~param_3;
  pFVar26 = (FScriptContainerElement *)(longlong)(int)uVar24;
  if (iVar23 + 1 < (int)uVar21) {
    iVar23 = param_3;
  }
  iVar15 = param_2 - param_3;
  iVar23 = iVar23 + 1;
  local_a8.DataPtr = (float *)pFVar26;
  if (iVar15 < iVar17) {
    lVar20 = (longlong)iVar15 + -1;
    if ((0 < (int)uVar21) && (7 < uVar21)) {
      if ((local_98[0].AllocatorInstance.Data + (longlong)(param_2 + -1) * 4 < pFVar4) ||
         (pFVar4 + (longlong)param_3 * 4 < local_98[0].AllocatorInstance.Data + lVar20 * 4)) {
        uVar12 = uVar21 & 0x80000007;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
        }
        pFVar27 = local_98[0].AllocatorInstance.Data + lVar20 * 4;
        iVar16 = iVar15 + 6;
        do {
          iVar13 = iVar15 + iVar19;
          auVar31._0_4_ = (float)(iVar13 + iVar6);
          auVar31._4_4_ = (float)(iVar13 + iVar7);
          auVar31._8_4_ = (float)(iVar13 + iVar8);
          auVar31._12_4_ = (float)(iVar13 + iVar9);
          iVar19 = iVar19 + 8;
          auVar31 = maxps(auVar38,auVar31);
          auVar35 = rcpps(in_XMM2,auVar31);
          fVar32 = auVar35._0_4_;
          fVar39 = auVar35._4_4_;
          fVar40 = auVar35._8_4_;
          fVar42 = auVar35._12_4_;
          fVar33 = *(float *)(pFVar27 + 4);
          fVar34 = *(float *)(pFVar27 + 8);
          fVar41 = *(float *)(pFVar27 + 0xc);
          pFVar22 = pFVar27 + (longlong)
                              (pFVar4 + (lVar20 * -4 - (longlong)local_98[0].AllocatorInstance.Data)
                              );
          *(float *)pFVar22 =
               ((fVar32 + fVar32) - fVar32 * fVar32 * auVar31._0_4_) * *(float *)pFVar27;
          *(float *)(pFVar22 + 4) = ((fVar39 + fVar39) - fVar39 * fVar39 * auVar31._4_4_) * fVar33;
          *(float *)(pFVar22 + 8) = ((fVar40 + fVar40) - fVar40 * fVar40 * auVar31._8_4_) * fVar34;
          *(float *)(pFVar22 + 0xc) =
               ((fVar42 + fVar42) - fVar42 * fVar42 * auVar31._12_4_) * fVar41;
          auVar36._4_4_ = iVar16 + 1;
          auVar36._0_4_ = iVar16;
          auVar36._8_8_ = 0;
          auVar35._0_4_ = (float)(iVar16 + -2);
          auVar35._4_4_ = (float)(iVar16 + -1);
          auVar35._8_4_ = (float)iVar16;
          auVar35._12_4_ = (float)(iVar16 + 1);
          auVar31 = maxps(auVar38,auVar35);
          auVar35 = rcpps(auVar36,auVar31);
          fVar33 = auVar35._0_4_;
          fVar34 = auVar35._4_4_;
          fVar41 = auVar35._8_4_;
          fVar32 = auVar35._12_4_;
          in_XMM2._0_4_ =
               ((fVar33 + fVar33) - fVar33 * fVar33 * auVar31._0_4_) * *(float *)(pFVar27 + 0x10);
          in_XMM2._4_4_ =
               ((fVar34 + fVar34) - fVar34 * fVar34 * auVar31._4_4_) * *(float *)(pFVar27 + 0x14);
          in_XMM2._8_4_ =
               ((fVar41 + fVar41) - fVar41 * fVar41 * auVar31._8_4_) * *(float *)(pFVar27 + 0x18);
          in_XMM2._12_4_ =
               ((fVar32 + fVar32) - fVar32 * fVar32 * auVar31._12_4_) * *(float *)(pFVar27 + 0x1c);
          *(undefined1 (*) [16])
           (pFVar27 +
           (longlong)(pFVar4 + ((4 - lVar20) * 4 - (longlong)local_98[0].AllocatorInstance.Data))) =
               in_XMM2;
          pFVar27 = pFVar27 + 0x20;
          iVar16 = iVar16 + 8;
        } while (iVar19 < (int)(uVar21 - uVar12));
      }
    }
    fVar33 = __real_3f800000;
    lVar25 = (longlong)iVar19;
    lVar28 = (longlong)(param_3 + 1);
    if (lVar25 < lVar28) {
      if (3 < lVar28 - lVar25) {
        iVar16 = iVar15 + 2 + iVar19;
        lVar14 = (longlong)iVar15 + 1 + lVar25;
        pFVar22 = pFVar4 + (lVar20 * -4 - (longlong)local_98[0].AllocatorInstance.Data);
        local_a8.DataPtr =
             (float *)(pFVar4 + (-(longlong)local_98[0].AllocatorInstance.Data - (lVar20 * 4 + 8)));
        lVar18 = ((lVar28 - lVar25) - 4U >> 2) + 1;
        iVar19 = iVar19 + (int)lVar18 * 4;
        lVar25 = lVar25 + lVar18 * 4;
        pFVar27 = local_98[0].AllocatorInstance.Data + lVar14 * 4;
        do {
          iVar13 = iVar16 + -1;
          fVar34 = (float)(iVar16 + -2);
          if ((float)(iVar16 + -2) <= fVar33) {
            fVar34 = fVar33;
          }
          fVar41 = (float)iVar16;
          if ((float)iVar16 <= fVar33) {
            fVar41 = fVar33;
          }
          in_XMM2 = ZEXT416((uint)fVar41);
          *(float *)(pFVar27 + (longlong)local_a8.DataPtr) = *(float *)(pFVar27 + -8) / fVar34;
          iVar30 = iVar16 + 1;
          iVar16 = iVar16 + 4;
          fVar34 = (float)iVar13;
          if ((float)iVar13 <= fVar33) {
            fVar34 = fVar33;
          }
          *(float *)(pFVar27 + (longlong)(pFVar22 + -4)) = *(float *)(pFVar27 + -4) / fVar34;
          *(float *)(pFVar27 + (longlong)pFVar22) = *(float *)pFVar27 / fVar41;
          fVar34 = (float)iVar30;
          if ((float)iVar30 <= fVar33) {
            fVar34 = fVar33;
          }
          *(float *)(pFVar27 + (longlong)(pFVar22 + 4)) = *(float *)(pFVar27 + 4) / fVar34;
          lVar18 = lVar18 + -1;
          pFVar27 = pFVar27 + 0x10;
        } while (lVar18 != 0);
        if (lVar28 <= lVar25) goto LAB_1444b12c5;
      }
      lVar14 = lVar28 - lVar25;
      pFVar27 = pFVar4 + lVar25 * 4;
      iVar19 = iVar15 + iVar19;
      do {
        fVar34 = (float)iVar19;
        if ((float)iVar19 <= fVar33) {
          fVar34 = fVar33;
        }
        *(float *)pFVar27 =
             *(float *)(pFVar27 +
                       (longlong)
                       (local_98[0].AllocatorInstance.Data + (lVar20 * 4 - (longlong)pFVar4))) /
             fVar34;
        lVar14 = lVar14 + -1;
        pFVar27 = pFVar27 + 4;
        iVar19 = iVar19 + 1;
      } while (lVar14 != 0);
    }
LAB_1444b12c5:
    lVar25 = (longlong)iVar23;
    if (lVar28 < lVar25) {
      if (3 < lVar25 - lVar28) {
        lVar20 = lVar20 - (longlong)pFVar26;
        pFVar27 = local_98[0].AllocatorInstance.Data + (longlong)(pFVar26 + lVar28 + 1) * 4;
        pFVar22 = pFVar4 + ((longlong)pFVar26 * -4 - (longlong)local_98[0].AllocatorInstance.Data);
        lVar14 = ((lVar25 - (param_3 + 1)) - 4U >> 2) + 1;
        fVar34 = fVar33 / (float)param_2;
        in_XMM2 = ZEXT416((uint)fVar34);
        lVar28 = (longlong)(param_3 + 1) + lVar14 * 4;
        do {
          *(float *)(pFVar27 + (longlong)(pFVar22 + -4)) =
               (*(float *)(pFVar27 + lVar20 * 4 + -4) - *(float *)(pFVar27 + -4)) * fVar34;
          *(float *)(pFVar27 + (longlong)pFVar22) =
               (*(float *)(pFVar27 + lVar20 * 4) - *(float *)pFVar27) * fVar34;
          *(float *)(pFVar27 + (longlong)(pFVar22 + 4)) =
               (*(float *)(pFVar27 + lVar20 * 4 + 4) - *(float *)(pFVar27 + 4)) * fVar34;
          *(float *)(pFVar27 +
                    (longlong)
                    (pFVar4 + ((2 - (longlong)pFVar26) * 4 -
                              (longlong)local_98[0].AllocatorInstance.Data))) =
               (*(float *)(pFVar27 + lVar20 * 4 + 8) - *(float *)(pFVar27 + 8)) * fVar34;
          pFVar27 = pFVar27 + 0x10;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        if (lVar25 <= lVar28) goto LAB_1444b13f8;
      }
      pFVar27 = local_98[0].AllocatorInstance.Data + (longlong)(pFVar26 + lVar28) * 4;
      lVar25 = lVar25 - lVar28;
      do {
        *(float *)(pFVar27 +
                  (longlong)
                  (pFVar4 + ((longlong)pFVar26 * -4 - (longlong)local_98[0].AllocatorInstance.Data))
                  ) = (*(float *)(pFVar27 + ((longlong)iVar15 - (longlong)pFVar26) * 4 + -4) -
                      *(float *)pFVar27) * (fVar33 / (float)param_2);
        pFVar27 = pFVar27 + 4;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
  }
  else if (0 < iVar23) {
    pFVar27 = pFVar4;
    for (lVar20 = (longlong)iVar23; lVar20 != 0; lVar20 = lVar20 + -1) {
      *(float *)pFVar27 = fVar3 / (float)iVar17;
      pFVar27 = pFVar27 + 4;
    }
  }
LAB_1444b13f8:
  if ((iVar23 < iVar17) && (7 < (uint)(iVar17 - iVar23))) {
    lVar20 = (longlong)iVar23;
    if ((local_98[0].AllocatorInstance.Data + (longlong)(int)(iVar17 + -1 + uVar24) * 4 <
         pFVar4 + lVar20 * 4) ||
       (pFVar4 + (longlong)(iVar17 + -1) * 4 <
        local_98[0].AllocatorInstance.Data + (longlong)(int)(uVar24 + iVar23) * 4)) {
      uVar21 = iVar17 - iVar23 & 0x80000007;
      if ((int)uVar21 < 0) {
        uVar21 = (uVar21 - 1 | 0xfffffff8) + 1;
      }
      do {
        iVar19 = iVar23 + 4;
        iVar15 = iVar23 + iVar6;
        iVar16 = iVar23 + iVar7;
        iVar13 = iVar23 + iVar8;
        iVar30 = iVar23 + iVar9;
        iVar23 = iVar23 + 8;
        auVar38._0_4_ = (float)((iVar17 - iVar15) + param_3);
        auVar38._4_4_ = (float)((iVar17 - iVar16) + param_3);
        auVar38._8_4_ = (float)((iVar17 - iVar13) + param_3);
        auVar38._12_4_ = (float)((iVar17 - iVar30) + param_3);
        auVar31 = rcpps(in_XMM2,auVar38);
        fVar33 = auVar31._0_4_;
        fVar34 = auVar31._4_4_;
        fVar41 = auVar31._8_4_;
        fVar32 = auVar31._12_4_;
        pFVar27 = local_98[0].AllocatorInstance.Data + (longlong)(pFVar26 + lVar20) * 4;
        auVar37._0_4_ =
             ((fVar33 + fVar33) - fVar33 * fVar33 * auVar38._0_4_) * (fVar3 - *(float *)pFVar27);
        auVar37._4_4_ =
             ((fVar34 + fVar34) - fVar34 * fVar34 * auVar38._4_4_) *
             (fVar3 - *(float *)(pFVar27 + 4));
        auVar37._8_4_ =
             ((fVar41 + fVar41) - fVar41 * fVar41 * auVar38._8_4_) *
             (fVar3 - *(float *)(pFVar27 + 8));
        auVar37._12_4_ =
             ((fVar32 + fVar32) - fVar32 * fVar32 * auVar38._12_4_) *
             (fVar3 - *(float *)(pFVar27 + 0xc));
        auVar29._0_4_ = (float)((iVar17 - (iVar19 + iVar6)) + param_3);
        auVar29._4_4_ = (float)((iVar17 - (iVar19 + iVar7)) + param_3);
        auVar29._8_4_ = (float)((iVar17 - (iVar19 + iVar8)) + param_3);
        auVar29._12_4_ = (float)((iVar17 - (iVar19 + iVar9)) + param_3);
        *(undefined1 (*) [16])(pFVar4 + lVar20 * 4) = auVar37;
        auVar38 = rcpps(auVar37,auVar29);
        fVar33 = auVar38._0_4_;
        fVar34 = auVar38._4_4_;
        fVar41 = auVar38._8_4_;
        fVar32 = auVar38._12_4_;
        pFVar27 = local_98[0].AllocatorInstance.Data + (longlong)(pFVar26 + lVar20) * 4 + 0x10;
        in_XMM2._0_4_ =
             ((fVar33 + fVar33) - fVar33 * fVar33 * auVar29._0_4_) * (fVar3 - *(float *)pFVar27);
        in_XMM2._4_4_ =
             ((fVar34 + fVar34) - fVar34 * fVar34 * auVar29._4_4_) *
             (fVar3 - *(float *)(pFVar27 + 4));
        in_XMM2._8_4_ =
             ((fVar41 + fVar41) - fVar41 * fVar41 * auVar29._8_4_) *
             (fVar3 - *(float *)(pFVar27 + 8));
        in_XMM2._12_4_ =
             ((fVar32 + fVar32) - fVar32 * fVar32 * auVar29._12_4_) *
             (fVar3 - *(float *)(pFVar27 + 0xc));
        *(undefined1 (*) [16])(pFVar4 + lVar20 * 4 + 0x10) = in_XMM2;
        lVar20 = lVar20 + 8;
      } while (iVar23 < (int)(iVar17 - uVar21));
    }
  }
  lVar20 = (longlong)iVar23;
  lVar25 = (longlong)iVar17;
  if (lVar20 < lVar25) {
    if (3 < lVar25 - lVar20) {
      iVar19 = iVar17 - iVar23;
      pFVar27 = pFVar4 + lVar20 * 4 + 8;
      pFVar22 = pFVar26 + lVar20;
      iVar23 = iVar23 + (((int)(lVar25 + -3) - iVar23) - 1U & 0xfffffffc) + 4;
      iVar19 = iVar19 + -2 + param_3;
      do {
        lVar28 = (longlong)pFVar22 * 4;
        pFVar2 = pFVar26 + lVar20;
        lVar20 = lVar20 + 4;
        pFVar22 = pFVar22 + 4;
        *(float *)(pFVar27 + -8) =
             (fVar3 - *(float *)(local_98[0].AllocatorInstance.Data + lVar28)) / (float)(iVar19 + 2)
        ;
        *(float *)(pFVar27 + -4) =
             (fVar3 - *(float *)(local_98[0].AllocatorInstance.Data + (longlong)pFVar2 * 4 + 4)) /
             (float)(iVar19 + 1);
        *(float *)pFVar27 =
             (fVar3 - *(float *)(local_98[0].AllocatorInstance.Data + (longlong)pFVar2 * 4 + 8)) /
             (float)iVar19;
        *(float *)(pFVar27 + 4) =
             (fVar3 - *(float *)(local_98[0].AllocatorInstance.Data + (longlong)pFVar2 * 4 + 0xc)) /
             (float)(iVar19 + -1);
        pFVar27 = pFVar27 + 0x10;
        iVar19 = iVar19 + -4;
      } while (lVar20 < lVar25 + -3);
      if (lVar25 <= lVar20) goto LAB_1444b162b;
    }
    iVar17 = (iVar17 - iVar23) + param_3;
    do {
      *(float *)(pFVar4 + lVar20 * 4) =
           (fVar3 - *(float *)(local_98[0].AllocatorInstance.Data + (longlong)(pFVar26 + lVar20) * 4
                              )) / (float)iVar17;
      lVar20 = lVar20 + 1;
      iVar17 = iVar17 + -1;
    } while (lVar20 < lVar25);
  }
LAB_1444b162b:
  if (local_98[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98[0].AllocatorInstance.Data);
  }
  FCsvProfiler::EndStat("ArrayMeanFilter",uVar10);
  return;
}

// ArrayMeanSquared @ 1444b16a0

void __cdecl Audio::ArrayMeanSquared(TArrayView<float_const_,int> *param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  iVar2 = param_1->ArrayNum;
  lVar8 = (longlong)iVar2;
  lVar7 = 0;
  *param_2 = 0.0;
  if (0 < iVar2) {
    if (__CsvProfilerStat207 == false) {
      FCsvProfilerTrace::OutputInlineStat("ArrayMeanSquared",_GCsvCategory_Audio_Dsp.Index);
      __CsvProfilerStat207 = true;
    }
    uVar4 = _GCsvCategory_Audio_Dsp.Index;
    FCsvProfiler::BeginStat("ArrayMeanSquared",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMeanSquared")
    ;
    pfVar3 = param_1->DataPtr;
    if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
      fVar9 = *param_2;
      if (3 < lVar8) {
        pfVar6 = pfVar3 + 2;
        lVar5 = (lVar8 - 4U >> 2) + 1;
        lVar7 = lVar5 * 4;
        do {
          fVar9 = pfVar6[-2] * pfVar6[-2] + fVar9;
          *param_2 = fVar9;
          fVar9 = pfVar6[-1] * pfVar6[-1] + fVar9;
          *param_2 = fVar9;
          fVar9 = *pfVar6 * *pfVar6 + fVar9;
          *param_2 = fVar9;
          pfVar1 = pfVar6 + 1;
          pfVar6 = pfVar6 + 4;
          fVar9 = *pfVar1 * *pfVar1 + fVar9;
          *param_2 = fVar9;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      for (; lVar7 < lVar8; lVar7 = lVar7 + 1) {
        fVar9 = pfVar3[lVar7] * pfVar3[lVar7] + fVar9;
        *param_2 = fVar9;
      }
      *param_2 = fVar9 / (float)iVar2;
    }
    else {
      ::ArrayMeanSquared(pfVar3,param_2,iVar2);
    }
    FCsvProfiler::EndStat("ArrayMeanSquared",uVar4);
  }
  return;
}

// ArrayMinMaxNormalize @ 1444b1800

void __cdecl
Audio::ArrayMinMaxNormalize
          (TArrayView<float_const_,int> *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulonglong uVar19;
  
  uVar3 = param_1->ArrayNum;
  lVar15 = (longlong)(int)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  uVar16 = 0;
  uVar17 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if ((int)uVar3 < 1) {
    return;
  }
  if (__CsvProfilerStat700 == false) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMinMaxNormalize",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat700 = true;
  }
  uVar11 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayMinMaxNormalize",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMinMaxNormalize");
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar3,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
  pFVar4 = (FScriptContainerElement *)param_1->DataPtr;
  pFVar5 = (param_2->AllocatorInstance).Data;
  if (bAudio_FloatArrayMath_ISPC_Enabled != false) {
    ::ArrayMinMaxNormalize(pFVar4,pFVar5,uVar3);
    goto LAB_1444b1b3f;
  }
  fVar24 = *(float *)pFVar4;
  fVar22 = fVar24;
  if (lVar15 < 2) {
LAB_1444b19c1:
    fVar24 = fVar24 - fVar22;
  }
  else {
    lVar14 = 1;
    if (4 < lVar15) {
      pFVar13 = pFVar4 + 0xc;
      lVar18 = (lVar15 - 5U >> 2) + 1;
      lVar14 = lVar18 * 4 + 1;
      do {
        fVar25 = *(float *)(pFVar13 + -8);
        fVar21 = fVar24;
        if ((fVar22 <= fVar25) && (fVar21 = fVar25, fVar25 <= fVar24)) {
          fVar21 = fVar24;
        }
        fVar24 = *(float *)(pFVar13 + -4);
        if (fVar22 <= fVar25) {
          fVar25 = fVar22;
        }
        fVar22 = fVar21;
        if ((fVar25 <= fVar24) && (fVar22 = fVar24, fVar24 <= fVar21)) {
          fVar22 = fVar21;
        }
        fVar21 = *(float *)pFVar13;
        if (fVar24 <= fVar25) {
          fVar25 = fVar24;
        }
        fVar23 = fVar22;
        if ((fVar25 <= fVar21) && (fVar23 = fVar21, fVar21 <= fVar22)) {
          fVar23 = fVar22;
        }
        if (fVar21 <= fVar25) {
          fVar25 = fVar21;
        }
        fVar21 = *(float *)(pFVar13 + 4);
        fVar24 = fVar23;
        if ((fVar25 <= fVar21) && (fVar24 = fVar21, fVar21 <= fVar23)) {
          fVar24 = fVar23;
        }
        pFVar13 = pFVar13 + 0x10;
        fVar22 = fVar25;
        if (fVar21 <= fVar25) {
          fVar22 = fVar21;
        }
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      if (lVar15 <= lVar14) goto LAB_1444b19c1;
    }
    do {
      fVar25 = *(float *)(pFVar4 + lVar14 * 4);
      fVar21 = fVar24;
      if ((fVar22 <= fVar25) && (fVar21 = fVar25, fVar25 <= fVar24)) {
        fVar21 = fVar24;
      }
      fVar24 = fVar21;
      if (fVar22 <= fVar25) {
        fVar25 = fVar22;
      }
      fVar22 = fVar25;
      lVar14 = lVar14 + 1;
    } while (lVar14 < lVar15);
    fVar24 = fVar24 - fVar22;
  }
  if (fVar24 <= __real_322bcc77) {
    fVar24 = __real_322bcc77;
  }
  fVar24 = __real_3f800000 / fVar24;
  if ((0xf < uVar3) &&
     ((pFVar4 + (longlong)(int)(uVar3 - 1) * 4 < pFVar5 ||
      (pFVar5 + (longlong)(int)(uVar3 - 1) * 4 < pFVar4)))) {
    uVar12 = uVar3 & 0x8000000f;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffff0) + 1;
    }
    pFVar13 = pFVar5 + 0x10;
    lVar14 = (longlong)pFVar4 - (longlong)pFVar5;
    uVar19 = uVar16;
    do {
      pFVar2 = pFVar13 + lVar14 + -0x10;
      fVar25 = *(float *)(pFVar2 + 4);
      fVar21 = *(float *)(pFVar2 + 8);
      fVar23 = *(float *)(pFVar2 + 0xc);
      uVar17 = (int)uVar19 + 0x10;
      uVar19 = (ulonglong)uVar17;
      uVar16 = uVar16 + 0x10;
      pFVar1 = pFVar13 + lVar14;
      fVar6 = *(float *)pFVar1;
      fVar7 = *(float *)(pFVar1 + 4);
      fVar8 = *(float *)(pFVar1 + 8);
      fVar9 = *(float *)(pFVar1 + 0xc);
      *(float *)(pFVar13 + -0x10) = (*(float *)pFVar2 - fVar22) * fVar24;
      *(float *)(pFVar13 + -0xc) = (fVar25 - fVar22) * fVar24;
      *(float *)(pFVar13 + -8) = (fVar21 - fVar22) * fVar24;
      *(float *)(pFVar13 + -4) = (fVar23 - fVar22) * fVar24;
      pFVar1 = pFVar13 + lVar14 + 0x10;
      fVar25 = *(float *)pFVar1;
      fVar21 = *(float *)(pFVar1 + 4);
      fVar23 = *(float *)(pFVar1 + 8);
      fVar10 = *(float *)(pFVar1 + 0xc);
      *(float *)pFVar13 = (fVar6 - fVar22) * fVar24;
      *(float *)(pFVar13 + 4) = (fVar7 - fVar22) * fVar24;
      *(float *)(pFVar13 + 8) = (fVar8 - fVar22) * fVar24;
      *(float *)(pFVar13 + 0xc) = (fVar9 - fVar22) * fVar24;
      pFVar1 = pFVar13 + lVar14 + 0x20;
      fVar6 = *(float *)pFVar1;
      fVar7 = *(float *)(pFVar1 + 4);
      fVar8 = *(float *)(pFVar1 + 8);
      fVar9 = *(float *)(pFVar1 + 0xc);
      *(float *)(pFVar13 + 0x10) = (fVar25 - fVar22) * fVar24;
      *(float *)(pFVar13 + 0x14) = (fVar21 - fVar22) * fVar24;
      *(float *)(pFVar13 + 0x18) = (fVar23 - fVar22) * fVar24;
      *(float *)(pFVar13 + 0x1c) = (fVar10 - fVar22) * fVar24;
      *(float *)(pFVar13 + 0x20) = (fVar6 - fVar22) * fVar24;
      *(float *)(pFVar13 + 0x24) = (fVar7 - fVar22) * fVar24;
      *(float *)(pFVar13 + 0x28) = (fVar8 - fVar22) * fVar24;
      *(float *)(pFVar13 + 0x2c) = (fVar9 - fVar22) * fVar24;
      pFVar13 = pFVar13 + 0x40;
    } while ((longlong)uVar16 < (longlong)(int)(uVar3 - uVar12));
  }
  lVar14 = (longlong)(int)uVar17;
  if (lVar14 < lVar15) {
    if (3 < lVar15 - lVar14) {
      pFVar13 = pFVar5 + (lVar14 + 1) * 4;
      lVar18 = (longlong)pFVar4 - (longlong)pFVar5;
      lVar20 = ((lVar15 - lVar14) - 4U >> 2) + 1;
      lVar14 = lVar14 + lVar20 * 4;
      do {
        *(float *)(pFVar13 + -4) = (*(float *)(pFVar13 + lVar18 + -4) - fVar22) * fVar24;
        *(float *)pFVar13 = (*(float *)(pFVar13 + lVar18) - fVar22) * fVar24;
        *(float *)(pFVar13 + 4) = (*(float *)(pFVar13 + lVar18 + 4) - fVar22) * fVar24;
        *(float *)(pFVar13 + 8) = (*(float *)(pFVar13 + lVar18 + 8) - fVar22) * fVar24;
        pFVar13 = pFVar13 + 0x10;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      if (lVar15 <= lVar14) goto LAB_1444b1b3f;
    }
    pFVar13 = pFVar5 + lVar14 * 4;
    lVar15 = lVar15 - lVar14;
    do {
      *(float *)pFVar13 =
           (*(float *)(pFVar13 + ((longlong)pFVar4 - (longlong)pFVar5)) - fVar22) * fVar24;
      pFVar13 = pFVar13 + 4;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
LAB_1444b1b3f:
  FCsvProfiler::EndStat("ArrayMinMaxNormalize",uVar11);
  return;
}

// ArrayMixIn @ 1444b1b80

void __cdecl
Audio::ArrayMixIn(TArrayView<short_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3
                 )

{
  short *psVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  short *psVar9;
  float *pfVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  uint uVar19;
  bool bVar20;
  float *pfVar21;
  short *psVar22;
  ulonglong *puVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  float fVar42;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined2 uVar41;
  
  if (!__CsvProfilerStat2376) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMixIn",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2376 = true;
  }
  uVar19 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayMixIn",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMixIn");
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InPcm16Buffer.Num() == BufferToSumTo.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x94a,L"Buffers must be equal size"), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar8 = param_1->ArrayNum;
  lVar27 = (longlong)(int)uVar8;
  fVar42 = param_3 * __real_38000100;
  psVar9 = param_1->DataPtr;
  pfVar10 = param_2->DataPtr;
  uVar26 = uVar8 & 0xfffffffc;
  if ((uVar26 != 0) && (0 < (int)uVar26)) {
    lVar25 = 0;
    psVar22 = psVar9 + 2;
    do {
      psVar1 = psVar22 + -2;
      sVar5 = psVar22[-1];
      sVar6 = *psVar22;
      pfVar21 = pfVar10 + lVar25;
      fVar12 = pfVar21[1];
      fVar13 = pfVar21[2];
      fVar14 = pfVar21[3];
      sVar7 = psVar22[1];
      psVar22 = psVar22 + 4;
      pfVar2 = pfVar10 + lVar25;
      *pfVar2 = (float)(int)*psVar1 * fVar42 + *pfVar21;
      pfVar2[1] = (float)(int)sVar5 * fVar42 + fVar12;
      pfVar2[2] = (float)(int)sVar6 * fVar42 + fVar13;
      pfVar2[3] = (float)(int)sVar7 * fVar42 + fVar14;
      lVar25 = lVar25 + 4;
    } while (lVar25 < (int)uVar26);
  }
  if ((uVar8 & 3) != 0) {
    if (((int)uVar26 < (int)uVar8) && (0xf < uVar8 - uVar26)) {
      lVar25 = (longlong)(int)uVar26;
      if ((psVar9 + (int)(uVar8 - 1) < pfVar10 + lVar25) ||
         (pfVar10 + (int)(uVar8 - 1) < psVar9 + lVar25)) {
        uVar24 = uVar8 - uVar26 & 0x8000000f;
        if ((int)uVar24 < 0) {
          uVar24 = (uVar24 - 1 | 0xfffffff0) + 1;
        }
        puVar23 = (ulonglong *)(psVar9 + lVar25 + 8);
        pfVar21 = pfVar10 + lVar25 + 8;
        do {
          uVar3 = puVar23[-2];
          uVar26 = uVar26 + 0x10;
          uVar41 = (undefined2)(uVar3 >> 0x30);
          auVar31._8_4_ = 0;
          auVar31._0_8_ = uVar3;
          auVar31._12_2_ = uVar41;
          auVar31._14_2_ = uVar41;
          uVar41 = (undefined2)(uVar3 >> 0x20);
          auVar30._12_4_ = auVar31._12_4_;
          auVar30._8_2_ = 0;
          auVar30._0_8_ = uVar3;
          auVar30._10_2_ = uVar41;
          auVar29._10_6_ = auVar30._10_6_;
          auVar29._8_2_ = uVar41;
          auVar29._0_8_ = uVar3;
          uVar41 = (undefined2)(uVar3 >> 0x10);
          auVar15._4_8_ = auVar29._8_8_;
          auVar15._2_2_ = uVar41;
          auVar15._0_2_ = uVar41;
          lVar25 = lVar25 + 0x10;
          uVar4 = puVar23[-1];
          uVar41 = (undefined2)(uVar4 >> 0x30);
          auVar34._8_4_ = 0;
          auVar34._0_8_ = uVar4;
          auVar34._12_2_ = uVar41;
          auVar34._14_2_ = uVar41;
          uVar41 = (undefined2)(uVar4 >> 0x20);
          auVar33._12_4_ = auVar34._12_4_;
          auVar33._8_2_ = 0;
          auVar33._0_8_ = uVar4;
          auVar33._10_2_ = uVar41;
          auVar32._10_6_ = auVar33._10_6_;
          auVar32._8_2_ = uVar41;
          auVar32._0_8_ = uVar4;
          uVar41 = (undefined2)(uVar4 >> 0x10);
          auVar16._4_8_ = auVar32._8_8_;
          auVar16._2_2_ = uVar41;
          auVar16._0_2_ = uVar41;
          pfVar21[-8] = (float)(int)(short)uVar3 * fVar42 + pfVar21[-8];
          pfVar21[-7] = (float)(auVar15._0_4_ >> 0x10) * fVar42 + pfVar21[-7];
          pfVar21[-6] = (float)(auVar29._8_4_ >> 0x10) * fVar42 + pfVar21[-6];
          pfVar21[-5] = (float)(auVar30._12_4_ >> 0x10) * fVar42 + pfVar21[-5];
          uVar3 = *puVar23;
          uVar41 = (undefined2)(uVar3 >> 0x30);
          auVar37._8_4_ = 0;
          auVar37._0_8_ = uVar3;
          auVar37._12_2_ = uVar41;
          auVar37._14_2_ = uVar41;
          uVar41 = (undefined2)(uVar3 >> 0x20);
          auVar36._12_4_ = auVar37._12_4_;
          auVar36._8_2_ = 0;
          auVar36._0_8_ = uVar3;
          auVar36._10_2_ = uVar41;
          auVar35._10_6_ = auVar36._10_6_;
          auVar35._8_2_ = uVar41;
          auVar35._0_8_ = uVar3;
          uVar41 = (undefined2)(uVar3 >> 0x10);
          auVar17._4_8_ = auVar35._8_8_;
          auVar17._2_2_ = uVar41;
          auVar17._0_2_ = uVar41;
          pfVar21[-4] = (float)(int)(short)uVar4 * fVar42 + pfVar21[-4];
          pfVar21[-3] = (float)(auVar16._0_4_ >> 0x10) * fVar42 + pfVar21[-3];
          pfVar21[-2] = (float)(auVar32._8_4_ >> 0x10) * fVar42 + pfVar21[-2];
          pfVar21[-1] = (float)(auVar33._12_4_ >> 0x10) * fVar42 + pfVar21[-1];
          uVar4 = puVar23[1];
          uVar41 = (undefined2)(uVar4 >> 0x30);
          auVar40._8_4_ = 0;
          auVar40._0_8_ = uVar4;
          auVar40._12_2_ = uVar41;
          auVar40._14_2_ = uVar41;
          uVar41 = (undefined2)(uVar4 >> 0x20);
          auVar39._12_4_ = auVar40._12_4_;
          auVar39._8_2_ = 0;
          auVar39._0_8_ = uVar4;
          auVar39._10_2_ = uVar41;
          auVar38._10_6_ = auVar39._10_6_;
          auVar38._8_2_ = uVar41;
          auVar38._0_8_ = uVar4;
          uVar41 = (undefined2)(uVar4 >> 0x10);
          auVar18._4_8_ = auVar38._8_8_;
          auVar18._2_2_ = uVar41;
          auVar18._0_2_ = uVar41;
          puVar23 = puVar23 + 4;
          *pfVar21 = (float)(int)(short)uVar3 * fVar42 + *pfVar21;
          pfVar21[1] = (float)(auVar17._0_4_ >> 0x10) * fVar42 + pfVar21[1];
          pfVar21[2] = (float)(auVar35._8_4_ >> 0x10) * fVar42 + pfVar21[2];
          pfVar21[3] = (float)(auVar36._12_4_ >> 0x10) * fVar42 + pfVar21[3];
          pfVar21[4] = (float)(int)(short)uVar4 * fVar42 + pfVar21[4];
          pfVar21[5] = (float)(auVar18._0_4_ >> 0x10) * fVar42 + pfVar21[5];
          pfVar21[6] = (float)(auVar38._8_4_ >> 0x10) * fVar42 + pfVar21[6];
          pfVar21[7] = (float)(auVar39._12_4_ >> 0x10) * fVar42 + pfVar21[7];
          pfVar21 = pfVar21 + 0x10;
        } while (lVar25 < (int)(uVar8 - uVar24));
      }
    }
    lVar25 = (longlong)(int)uVar26;
    if (lVar25 < lVar27) {
      if (3 < lVar27 - lVar25) {
        pfVar21 = pfVar10 + lVar25 + 2;
        lVar28 = ((lVar27 - lVar25) - 4U >> 2) + 1;
        psVar22 = psVar9 + lVar25 + 2;
        lVar25 = lVar25 + lVar28 * 4;
        do {
          pfVar21[-2] = (float)(int)psVar22[-2] * fVar42 + pfVar21[-2];
          pfVar21[-1] = (float)(int)psVar22[-1] * fVar42 + pfVar21[-1];
          *pfVar21 = (float)(int)*psVar22 * fVar42 + *pfVar21;
          psVar1 = psVar22 + 1;
          psVar22 = psVar22 + 4;
          pfVar21[1] = (float)(int)*psVar1 * fVar42 + pfVar21[1];
          pfVar21 = pfVar21 + 4;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        if (lVar27 <= lVar25) goto LAB_1444b1ea4;
      }
      do {
        pfVar10[lVar25] = (float)(int)psVar9[lVar25] * fVar42 + pfVar10[lVar25];
        lVar25 = lVar25 + 1;
      } while (lVar25 < lVar27);
    }
  }
LAB_1444b1ea4:
  FCsvProfiler::EndStat("ArrayMixIn",uVar19);
  return;
}

// ArrayMixIn @ 1444b1ed0

void __cdecl Audio::ArrayMixIn(TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  uint uVar38;
  bool bVar39;
  float *pfVar40;
  uint uVar41;
  longlong lVar42;
  longlong lVar43;
  ulonglong uVar44;
  uint uVar45;
  int iVar46;
  longlong lVar47;
  
  if (!__CsvProfilerStat2269) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMixIn",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2269 = true;
  }
  uVar38 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayMixIn",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMixIn");
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFloatBuffer.Num() == BufferToSumTo.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x8df,L"Buffers must be equal size"), bVar39)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  uVar44 = (ulonglong)iVar4;
  pfVar5 = param_1->DataPtr;
  pfVar6 = param_2->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled != false) {
    ::ArrayMixIn(pfVar5,pfVar6,iVar4);
    goto LAB_1444b21be;
  }
  iVar46 = 0;
  if (0 < (longlong)(uVar44 & 0xfffffffffffffff0)) {
    pfVar40 = pfVar5 + 8;
    lVar47 = ((uVar44 & 0xfffffffffffffff0) - 1 >> 4) + 1;
    lVar42 = (longlong)pfVar6 - (longlong)pfVar5;
    iVar46 = (int)lVar47 << 4;
    do {
      pfVar1 = (float *)(lVar42 + -0x20 + (longlong)pfVar40);
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      fVar11 = pfVar40[-7];
      fVar12 = pfVar40[-6];
      fVar13 = pfVar40[-5];
      fVar14 = pfVar40[-4];
      fVar15 = pfVar40[-3];
      fVar16 = pfVar40[-2];
      fVar17 = pfVar40[-1];
      fVar18 = *pfVar40;
      fVar19 = pfVar40[1];
      fVar20 = pfVar40[2];
      fVar21 = pfVar40[3];
      fVar22 = pfVar40[4];
      fVar23 = pfVar40[5];
      fVar24 = pfVar40[6];
      fVar25 = pfVar40[7];
      pfVar2 = (float *)(lVar42 + -0x10 + (longlong)pfVar40);
      fVar26 = *pfVar2;
      fVar27 = pfVar2[1];
      fVar28 = pfVar2[2];
      fVar29 = pfVar2[3];
      pfVar2 = (float *)(lVar42 + (longlong)pfVar40);
      fVar30 = *pfVar2;
      fVar31 = pfVar2[1];
      fVar32 = pfVar2[2];
      fVar33 = pfVar2[3];
      pfVar2 = (float *)(lVar42 + 0x10 + (longlong)pfVar40);
      fVar34 = *pfVar2;
      fVar35 = pfVar2[1];
      fVar36 = pfVar2[2];
      fVar37 = pfVar2[3];
      pfVar2 = (float *)(lVar42 + -0x20 + (longlong)pfVar40);
      *pfVar2 = pfVar40[-8] + *pfVar1;
      pfVar2[1] = fVar11 + fVar8;
      pfVar2[2] = fVar12 + fVar9;
      pfVar2[3] = fVar13 + fVar10;
      pfVar2 = (float *)(lVar42 + -0x10 + (longlong)pfVar40);
      *pfVar2 = fVar14 + fVar26;
      pfVar2[1] = fVar15 + fVar27;
      pfVar2[2] = fVar16 + fVar28;
      pfVar2[3] = fVar17 + fVar29;
      pfVar2 = (float *)(lVar42 + (longlong)pfVar40);
      *pfVar2 = fVar18 + fVar30;
      pfVar2[1] = fVar19 + fVar31;
      pfVar2[2] = fVar20 + fVar32;
      pfVar2[3] = fVar21 + fVar33;
      pfVar2 = (float *)(lVar42 + 0x10 + (longlong)pfVar40);
      *pfVar2 = fVar22 + fVar34;
      pfVar2[1] = fVar23 + fVar35;
      pfVar2[2] = fVar24 + fVar36;
      pfVar2[3] = fVar25 + fVar37;
      pfVar40 = pfVar40 + 0x10;
      lVar47 = lVar47 + -1;
    } while (lVar47 != 0);
  }
  uVar45 = iVar4 - iVar46;
  if ((iVar46 < iVar4) && (1 < uVar45)) {
    lVar47 = (longlong)iVar46;
    if ((pfVar5 + (iVar4 + -1) < pfVar6 + lVar47) || (pfVar6 + (iVar4 + -1) < pfVar5 + lVar47)) {
      if (0xf < uVar45) {
        uVar41 = uVar45 & 0x8000000f;
        if ((int)uVar41 < 0) {
          uVar41 = (uVar41 - 1 | 0xfffffff0) + 1;
        }
        lVar42 = (longlong)pfVar5 - (longlong)pfVar6;
        pfVar40 = pfVar6 + lVar47 + 4;
        do {
          iVar46 = iVar46 + 0x10;
          lVar47 = lVar47 + 0x10;
          pfVar1 = (float *)((longlong)pfVar40 + lVar42 + -0x10);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)((longlong)pfVar40 + lVar42);
          fVar11 = *pfVar2;
          fVar12 = pfVar2[1];
          fVar13 = pfVar2[2];
          fVar14 = pfVar2[3];
          pfVar40[-4] = *pfVar1 + pfVar40[-4];
          pfVar40[-3] = fVar8 + pfVar40[-3];
          pfVar40[-2] = fVar9 + pfVar40[-2];
          pfVar40[-1] = fVar10 + pfVar40[-1];
          pfVar2 = (float *)((longlong)pfVar40 + lVar42 + 0x10);
          fVar8 = *pfVar2;
          fVar9 = pfVar2[1];
          fVar10 = pfVar2[2];
          fVar15 = pfVar2[3];
          *pfVar40 = fVar11 + *pfVar40;
          pfVar40[1] = fVar12 + pfVar40[1];
          pfVar40[2] = fVar13 + pfVar40[2];
          pfVar40[3] = fVar14 + pfVar40[3];
          pfVar40[4] = fVar8 + pfVar40[4];
          pfVar40[5] = fVar9 + pfVar40[5];
          pfVar40[6] = fVar10 + pfVar40[6];
          pfVar40[7] = fVar15 + pfVar40[7];
          pfVar2 = (float *)((longlong)pfVar40 + lVar42 + 0x20);
          fVar8 = pfVar2[1];
          fVar9 = pfVar2[2];
          fVar10 = pfVar2[3];
          pfVar40[8] = *pfVar2 + pfVar40[8];
          pfVar40[9] = fVar8 + pfVar40[9];
          pfVar40[10] = fVar9 + pfVar40[10];
          pfVar40[0xb] = fVar10 + pfVar40[0xb];
          pfVar40 = pfVar40 + 0x10;
        } while (lVar47 < (int)(iVar4 - uVar41));
        if (((byte)uVar45 & 0xf) < 2) goto LAB_1444b2106;
      }
      lVar47 = (longlong)iVar46;
      uVar45 = uVar45 & 0x80000001;
      if ((int)uVar45 < 0) {
        uVar45 = (uVar45 - 1 | 0xfffffffe) + 1;
      }
      pfVar40 = pfVar6 + lVar47;
      do {
        iVar46 = iVar46 + 2;
        uVar3 = *(undefined8 *)((longlong)pfVar40 + ((longlong)pfVar5 - (longlong)pfVar6));
        lVar47 = lVar47 + 2;
        *(ulonglong *)pfVar40 =
             CONCAT44((float)((ulonglong)uVar3 >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)pfVar40 >> 0x20),
                      (float)uVar3 + (float)*(undefined8 *)pfVar40);
        pfVar40 = pfVar40 + 2;
      } while (lVar47 < (int)(iVar4 - uVar45));
    }
  }
LAB_1444b2106:
  lVar47 = (longlong)iVar46;
  if (lVar47 < (longlong)uVar44) {
    if (3 < (longlong)(uVar44 - lVar47)) {
      pfVar40 = pfVar6 + lVar47 + 1;
      lVar42 = (longlong)pfVar5 - (longlong)pfVar6;
      lVar43 = ((uVar44 - lVar47) - 4 >> 2) + 1;
      lVar47 = lVar47 + lVar43 * 4;
      do {
        pfVar40[-1] = *(float *)((longlong)pfVar40 + lVar42 + -4) + pfVar40[-1];
        *pfVar40 = *(float *)((longlong)pfVar40 + lVar42) + *pfVar40;
        pfVar40[1] = *(float *)((longlong)pfVar40 + lVar42 + 4) + pfVar40[1];
        pfVar40[2] = *(float *)((longlong)pfVar40 + lVar42 + 8) + pfVar40[2];
        pfVar40 = pfVar40 + 4;
        lVar43 = lVar43 + -1;
      } while (lVar43 != 0);
      if ((longlong)uVar44 <= lVar47) goto LAB_1444b21be;
    }
    pfVar40 = pfVar6 + lVar47;
    lVar47 = uVar44 - lVar47;
    do {
      *pfVar40 = *(float *)(((longlong)pfVar5 - (longlong)pfVar6) + (longlong)pfVar40) + *pfVar40;
      pfVar40 = pfVar40 + 1;
      lVar47 = lVar47 + -1;
    } while (lVar47 != 0);
  }
LAB_1444b21be:
  FCsvProfiler::EndStat("ArrayMixIn",uVar38);
  return;
}

// ArrayMixIn @ 1444b21e0

void __cdecl
Audio::ArrayMixIn(TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3
                 )

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  bool bVar38;
  float *pfVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  uint uVar43;
  int iVar44;
  longlong lVar45;
  
  if (!__CsvProfilerStat2229) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMixIn",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2229 = true;
  }
  uVar37 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayMixIn",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMixIn");
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFloatBuffer.Num() == BufferToSumTo.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x8b7,L"Buffers must be equal size"), bVar38)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  uVar42 = (ulonglong)iVar3;
  pfVar4 = param_1->DataPtr;
  pfVar5 = param_2->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    iVar44 = 0;
    if (0 < (longlong)(uVar42 & 0xfffffffffffffff0)) {
      pfVar39 = pfVar4 + 8;
      lVar45 = ((uVar42 & 0xfffffffffffffff0) - 1 >> 4) + 1;
      lVar40 = (longlong)pfVar5 - (longlong)pfVar4;
      iVar44 = (int)lVar45 << 4;
      do {
        pfVar1 = (float *)(lVar40 + -0x20 + (longlong)pfVar39);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        fVar10 = pfVar39[-7];
        fVar11 = pfVar39[-6];
        fVar12 = pfVar39[-5];
        fVar13 = pfVar39[-4];
        fVar14 = pfVar39[-3];
        fVar15 = pfVar39[-2];
        fVar16 = pfVar39[-1];
        fVar17 = *pfVar39;
        fVar18 = pfVar39[1];
        fVar19 = pfVar39[2];
        fVar20 = pfVar39[3];
        fVar21 = pfVar39[4];
        fVar22 = pfVar39[5];
        fVar23 = pfVar39[6];
        fVar24 = pfVar39[7];
        pfVar2 = (float *)(lVar40 + -0x10 + (longlong)pfVar39);
        fVar25 = *pfVar2;
        fVar26 = pfVar2[1];
        fVar27 = pfVar2[2];
        fVar28 = pfVar2[3];
        pfVar2 = (float *)(lVar40 + (longlong)pfVar39);
        fVar29 = *pfVar2;
        fVar30 = pfVar2[1];
        fVar31 = pfVar2[2];
        fVar32 = pfVar2[3];
        pfVar2 = (float *)(lVar40 + 0x10 + (longlong)pfVar39);
        fVar33 = *pfVar2;
        fVar34 = pfVar2[1];
        fVar35 = pfVar2[2];
        fVar36 = pfVar2[3];
        pfVar2 = (float *)(lVar40 + -0x20 + (longlong)pfVar39);
        *pfVar2 = pfVar39[-8] * param_3 + *pfVar1;
        pfVar2[1] = fVar10 * param_3 + fVar7;
        pfVar2[2] = fVar11 * param_3 + fVar8;
        pfVar2[3] = fVar12 * param_3 + fVar9;
        pfVar2 = (float *)(lVar40 + -0x10 + (longlong)pfVar39);
        *pfVar2 = fVar13 * param_3 + fVar25;
        pfVar2[1] = fVar14 * param_3 + fVar26;
        pfVar2[2] = fVar15 * param_3 + fVar27;
        pfVar2[3] = fVar16 * param_3 + fVar28;
        pfVar2 = (float *)(lVar40 + (longlong)pfVar39);
        *pfVar2 = fVar17 * param_3 + fVar29;
        pfVar2[1] = fVar18 * param_3 + fVar30;
        pfVar2[2] = fVar19 * param_3 + fVar31;
        pfVar2[3] = fVar20 * param_3 + fVar32;
        pfVar2 = (float *)(lVar40 + 0x10 + (longlong)pfVar39);
        *pfVar2 = fVar21 * param_3 + fVar33;
        pfVar2[1] = fVar22 * param_3 + fVar34;
        pfVar2[2] = fVar23 * param_3 + fVar35;
        pfVar2[3] = fVar24 * param_3 + fVar36;
        pfVar39 = pfVar39 + 0x10;
        lVar45 = lVar45 + -1;
      } while (lVar45 != 0);
    }
    if ((iVar44 < iVar3) && (0xf < (uint)(iVar3 - iVar44))) {
      lVar45 = (longlong)iVar44;
      if ((pfVar4 + (iVar3 + -1) < pfVar5 + lVar45) || (pfVar5 + (iVar3 + -1) < pfVar4 + lVar45)) {
        uVar43 = iVar3 - iVar44 & 0x8000000f;
        if ((int)uVar43 < 0) {
          uVar43 = (uVar43 - 1 | 0xfffffff0) + 1;
        }
        lVar40 = (longlong)pfVar4 - (longlong)pfVar5;
        pfVar39 = pfVar5 + lVar45 + 4;
        do {
          iVar44 = iVar44 + 0x10;
          lVar45 = lVar45 + 0x10;
          pfVar1 = (float *)((longlong)pfVar39 + lVar40 + -0x10);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)((longlong)pfVar39 + lVar40);
          fVar10 = *pfVar2;
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar39[-4] = *pfVar1 * param_3 + pfVar39[-4];
          pfVar39[-3] = fVar7 * param_3 + pfVar39[-3];
          pfVar39[-2] = fVar8 * param_3 + pfVar39[-2];
          pfVar39[-1] = fVar9 * param_3 + pfVar39[-1];
          *pfVar39 = param_3 * fVar10 + *pfVar39;
          pfVar39[1] = param_3 * fVar11 + pfVar39[1];
          pfVar39[2] = param_3 * fVar12 + pfVar39[2];
          pfVar39[3] = param_3 * fVar13 + pfVar39[3];
          pfVar2 = (float *)((longlong)pfVar39 + lVar40 + 0x10);
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar39[4] = *pfVar2 * param_3 + pfVar39[4];
          pfVar39[5] = fVar7 * param_3 + pfVar39[5];
          pfVar39[6] = fVar8 * param_3 + pfVar39[6];
          pfVar39[7] = fVar9 * param_3 + pfVar39[7];
          pfVar2 = (float *)((longlong)pfVar39 + lVar40 + 0x20);
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar39[8] = *pfVar2 * param_3 + pfVar39[8];
          pfVar39[9] = fVar7 * param_3 + pfVar39[9];
          pfVar39[10] = fVar8 * param_3 + pfVar39[10];
          pfVar39[0xb] = fVar9 * param_3 + pfVar39[0xb];
          pfVar39 = pfVar39 + 0x10;
        } while (lVar45 < (int)(iVar3 - uVar43));
      }
    }
    lVar45 = (longlong)iVar44;
    if (lVar45 < (longlong)uVar42) {
      if (3 < (longlong)(uVar42 - lVar45)) {
        pfVar39 = pfVar5 + lVar45 + 1;
        lVar40 = (longlong)pfVar4 - (longlong)pfVar5;
        lVar41 = ((uVar42 - lVar45) - 4 >> 2) + 1;
        lVar45 = lVar45 + lVar41 * 4;
        do {
          pfVar39[-1] = param_3 * *(float *)((longlong)pfVar39 + lVar40 + -4) + pfVar39[-1];
          *pfVar39 = param_3 * *(float *)((longlong)pfVar39 + lVar40) + *pfVar39;
          pfVar39[1] = param_3 * *(float *)((longlong)pfVar39 + lVar40 + 4) + pfVar39[1];
          pfVar39[2] = param_3 * *(float *)((longlong)pfVar39 + lVar40 + 8) + pfVar39[2];
          pfVar39 = pfVar39 + 4;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
        if ((longlong)uVar42 <= lVar45) goto LAB_1444b24bd;
      }
      pfVar39 = pfVar5 + lVar45;
      lVar45 = uVar42 - lVar45;
      do {
        *pfVar39 = param_3 * *(float *)(((longlong)pfVar4 - (longlong)pfVar5) + (longlong)pfVar39) +
                   *pfVar39;
        pfVar39 = pfVar39 + 1;
        lVar45 = lVar45 + -1;
      } while (lVar45 != 0);
    }
  }
  else {
    ArrayMixInWithGain(pfVar4,pfVar5,iVar3,param_3);
  }
LAB_1444b24bd:
  FCsvProfiler::EndStat("ArrayMixIn",uVar37);
  return;
}

// ArrayMixIn @ 1444b24f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::ArrayMixIn(TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3
                 ,float param_4)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  float *pfVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  TArrayView<float,int> local_b8;
  TArrayView<float_const_,int> local_a8 [9];
  
  if (!__CsvProfilerStat2308) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMixIn",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2308 = true;
  }
  uVar13 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayMixIn",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMixIn");
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFloatBuffer.Num() == BufferToSumTo.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x906,L"Buffers must be equal size"), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar12 = _UNK_1509253fc;
  fVar11 = _UNK_1509253f8;
  fVar20 = _UNK_1509253f4;
  fVar22 = ___xmm_40800000408000004080000040800000;
  uVar1 = param_1->ArrayNum;
  if (__real_322bcc77 < (float)((uint)(param_3 - param_4) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
      fVar26 = (param_4 - param_3) / (float)(int)uVar1;
      uVar17 = uVar1 & 0xfffffffc;
      if ((uVar17 != 0) &&
         (iVar18 = 0, fVar27 = ___xmm_40400000400000003f80000000000000, fVar28 = _UNK_15076be04,
         fVar29 = _UNK_15076be08, fVar30 = _UNK_15076be0c, 0 < (int)uVar17)) {
        do {
          pfVar16 = TArrayView<float_const_,int>::operator[](param_1,iVar18);
          fVar3 = *pfVar16;
          fVar4 = pfVar16[1];
          fVar5 = pfVar16[2];
          fVar6 = pfVar16[3];
          pfVar16 = TArrayView<float,int>::operator[](param_2,iVar18);
          fVar21 = fVar26 * fVar27;
          fVar23 = fVar26 * fVar28;
          fVar24 = fVar26 * fVar29;
          fVar25 = fVar26 * fVar30;
          fVar7 = *pfVar16;
          fVar8 = pfVar16[1];
          fVar9 = pfVar16[2];
          fVar10 = pfVar16[3];
          fVar27 = fVar27 + fVar22;
          fVar28 = fVar28 + fVar20;
          fVar29 = fVar29 + fVar11;
          fVar30 = fVar30 + fVar12;
          pfVar16 = TArrayView<float,int>::operator[](param_2,iVar18);
          iVar18 = iVar18 + 4;
          *pfVar16 = (fVar21 + param_3) * fVar3 + fVar7;
          pfVar16[1] = (fVar23 + param_3) * fVar4 + fVar8;
          pfVar16[2] = (fVar24 + param_3) * fVar5 + fVar9;
          pfVar16[3] = (fVar25 + param_3) * fVar6 + fVar10;
        } while (iVar18 < (int)uVar17);
      }
      if ((uVar1 & 3) != 0) {
        fVar22 = (float)(int)uVar17 * fVar26 + param_3;
        for (lVar19 = (longlong)(int)uVar17; lVar19 < (int)uVar1; lVar19 = lVar19 + 1) {
          uVar15 = 0;
          if ((int)uVar17 < param_1->ArrayNum) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          fVar20 = fVar22 * param_1->DataPtr[lVar19];
          uVar15 = 0;
          if ((int)uVar17 < param_2->ArrayNum) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          fVar22 = fVar22 + fVar26;
          uVar17 = uVar17 + 1;
          param_2->DataPtr[lVar19] = fVar20 + param_2->DataPtr[lVar19];
        }
      }
    }
    else {
      ArrayMixInWithDelta(param_1->DataPtr,param_2->DataPtr,uVar1,param_3,param_4);
    }
  }
  else if (param_3 != 0.0) {
    local_b8.DataPtr = param_2->DataPtr;
    local_b8.ArrayNum = param_2->ArrayNum;
    local_b8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_a8[0].DataPtr = param_1->DataPtr;
    local_a8[0].ArrayNum = param_1->ArrayNum;
    local_a8[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    ArrayMixIn(local_a8,&local_b8,param_3);
  }
  FCsvProfiler::EndStat("ArrayMixIn",uVar13);
  return;
}

// ArrayMultiply @ 1444b2840

void __cdecl
Audio::ArrayMultiply
          (TArrayView<float_const_,int> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<float,int> *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  
  if (!__CsvProfilerStat828) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMultiply",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat828 = true;
  }
  uVar12 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayMultiply",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMultiply");
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum != param_3->ArrayNum)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InFloatBufferA.Num() == InFloatBufferB.Num()) && (InFloatBufferA.Num() == OutBuffer.Num())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x33d,L"Input buffers must be equal length"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = param_1->ArrayNum;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar14 = 0;
    uVar17 = uVar3 & 0xfffffffc;
    if (0 < (int)uVar17) {
      lVar16 = 0;
      do {
        uVar18 = ~uVar14 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar15 = uVar18;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pfVar4 = param_1->DataPtr + lVar16;
        fVar1 = *pfVar4;
        fVar2 = pfVar4[1];
        fVar6 = pfVar4[2];
        fVar7 = pfVar4[3];
        uVar15 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar15 = uVar18;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pfVar4 = param_2->DataPtr + lVar16;
        fVar8 = *pfVar4;
        fVar9 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        uVar15 = 0;
        if ((int)uVar14 < param_3->ArrayNum) {
          uVar15 = uVar18;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar14 = uVar14 + 4;
        pfVar4 = param_3->DataPtr + lVar16;
        *pfVar4 = fVar8 * fVar1;
        pfVar4[1] = fVar9 * fVar2;
        pfVar4[2] = fVar10 * fVar6;
        pfVar4[3] = fVar11 * fVar7;
        lVar16 = lVar16 + 4;
      } while (lVar16 < (int)uVar17);
    }
    for (lVar16 = (longlong)(int)uVar17; lVar16 < (int)uVar3; lVar16 = lVar16 + 1) {
      uVar15 = ~uVar17 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pfVar4 = param_1->DataPtr;
      uVar14 = 0;
      if ((int)uVar17 < param_2->ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar1 = param_2->DataPtr[lVar16];
      fVar2 = pfVar4[lVar16];
      uVar14 = 0;
      if ((int)uVar17 < param_3->ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar17 = uVar17 + 1;
      param_3->DataPtr[lVar16] = fVar1 * fVar2;
    }
  }
  else {
    ::ArrayMultiply(param_1->DataPtr,param_2->DataPtr,param_3->DataPtr,uVar3);
  }
  FCsvProfiler::EndStat("ArrayMultiply",uVar12);
  return;
}

// ArrayMultiplyAddInPlace @ 1444b2c30

void __cdecl
Audio::ArrayMultiplyAddInPlace
          (TArrayView<float_const_,int> *param_1,float param_2,TArrayView<float,int> *param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  bool bVar15;
  float *pfVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  
  if (!__CsvProfilerStat1212) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMultiplyAddInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1212 = true;
  }
  uVar14 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayMultiplyAddInPlace",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMultiplyAddInPlace");
  if (param_1->ArrayNum != param_3->ArrayNum) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InValues.Num() == InAccumulateValues.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x4bd,L"");
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar3 = param_1->ArrayNum;
  lVar20 = (longlong)(int)uVar3;
  pfVar4 = param_1->DataPtr;
  pfVar5 = param_3->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar22 = 0;
    uVar23 = 0;
    if (((0 < (int)uVar3) && (0xf < uVar3)) &&
       ((pfVar4 + (int)(uVar3 - 1) < pfVar5 || (pfVar5 + (int)(uVar3 - 1) < pfVar4)))) {
      uVar17 = uVar3 & 0x8000000f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
      }
      lVar18 = (longlong)pfVar4 - (longlong)pfVar5;
      pfVar16 = pfVar5 + 4;
      uVar24 = uVar22;
      do {
        uVar23 = (int)uVar24 + 0x10;
        uVar24 = (ulonglong)uVar23;
        uVar22 = uVar22 + 0x10;
        pfVar2 = (float *)((longlong)pfVar16 + lVar18 + -0x10);
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar1 = (float *)((longlong)pfVar16 + lVar18);
        fVar10 = *pfVar1;
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar16[-4] = *pfVar2 * param_2 + pfVar16[-4];
        pfVar16[-3] = fVar7 * param_2 + pfVar16[-3];
        pfVar16[-2] = fVar8 * param_2 + pfVar16[-2];
        pfVar16[-1] = fVar9 * param_2 + pfVar16[-1];
        *pfVar16 = param_2 * fVar10 + *pfVar16;
        pfVar16[1] = param_2 * fVar11 + pfVar16[1];
        pfVar16[2] = param_2 * fVar12 + pfVar16[2];
        pfVar16[3] = param_2 * fVar13 + pfVar16[3];
        pfVar1 = (float *)((longlong)pfVar16 + lVar18 + 0x10);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar16[4] = *pfVar1 * param_2 + pfVar16[4];
        pfVar16[5] = fVar7 * param_2 + pfVar16[5];
        pfVar16[6] = fVar8 * param_2 + pfVar16[6];
        pfVar16[7] = fVar9 * param_2 + pfVar16[7];
        pfVar1 = (float *)((longlong)pfVar16 + lVar18 + 0x20);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar16[8] = *pfVar1 * param_2 + pfVar16[8];
        pfVar16[9] = fVar7 * param_2 + pfVar16[9];
        pfVar16[10] = fVar8 * param_2 + pfVar16[10];
        pfVar16[0xb] = fVar9 * param_2 + pfVar16[0xb];
        pfVar16 = pfVar16 + 0x10;
      } while ((longlong)uVar22 < (longlong)(int)(uVar3 - uVar17));
    }
    lVar18 = (longlong)(int)uVar23;
    if (lVar18 < lVar20) {
      if (3 < lVar20 - lVar18) {
        pfVar16 = pfVar5 + lVar18 + 1;
        lVar21 = (longlong)pfVar4 - (longlong)pfVar5;
        lVar19 = ((lVar20 - lVar18) - 4U >> 2) + 1;
        lVar18 = lVar18 + lVar19 * 4;
        do {
          pfVar16[-1] = param_2 * *(float *)(lVar21 + -4 + (longlong)pfVar16) + pfVar16[-1];
          *pfVar16 = param_2 * *(float *)(lVar21 + (longlong)pfVar16) + *pfVar16;
          pfVar16[1] = param_2 * *(float *)(lVar21 + 4 + (longlong)pfVar16) + pfVar16[1];
          pfVar16[2] = param_2 * *(float *)(lVar21 + 8 + (longlong)pfVar16) + pfVar16[2];
          pfVar16 = pfVar16 + 4;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        if (lVar20 <= lVar18) goto LAB_1444b2e5e;
      }
      pfVar16 = pfVar5 + lVar18;
      lVar20 = lVar20 - lVar18;
      do {
        *pfVar16 = param_2 * *(float *)(((longlong)pfVar4 - (longlong)pfVar5) + (longlong)pfVar16) +
                   *pfVar16;
        pfVar16 = pfVar16 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
  }
  else {
    ::ArrayMultiplyAddInPlace(pfVar4,param_2,pfVar5,uVar3);
  }
LAB_1444b2e5e:
  FCsvProfiler::EndStat("ArrayMultiplyAddInPlace",uVar14);
  return;
}

// ArrayMultiplyByConstant @ 1444b2e90

void __cdecl
Audio::ArrayMultiplyByConstant
          (TArrayView<float_const_,int> *param_1,float param_2,TArrayView<float,int> *param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  bool bVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  
  if (!__CsvProfilerStat1039) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMultiplyByConstant",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1039 = true;
  }
  uVar15 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayMultiplyByConstant",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMultiplyByConstant");
  if (param_1->ArrayNum != param_3->ArrayNum) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InFloatBuffer.Num() == OutFloatBuffer.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x410,L"");
    if (bVar16) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar3 = param_1->ArrayNum;
  lVar22 = (longlong)(int)uVar3;
  pfVar4 = param_1->DataPtr;
  pfVar5 = param_3->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar23 = uVar3 & 0xfffffffc;
    if ((uVar23 != 0) && (0 < (int)uVar23)) {
      lVar18 = ((longlong)(int)uVar23 - 1U >> 2) + 1;
      pfVar17 = pfVar5;
      do {
        pfVar1 = (float *)((longlong)pfVar17 + ((longlong)pfVar4 - (longlong)pfVar5));
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        *pfVar17 = *pfVar1 * param_2;
        pfVar17[1] = fVar7 * param_2;
        pfVar17[2] = fVar8 * param_2;
        pfVar17[3] = fVar9 * param_2;
        lVar18 = lVar18 + -1;
        pfVar17 = pfVar17 + 4;
      } while (lVar18 != 0);
    }
    if ((uVar3 & 3) != 0) {
      if (((int)uVar23 < (int)uVar3) && (0xf < uVar3 - uVar23)) {
        lVar18 = (longlong)(int)uVar23;
        if ((pfVar4 + (int)(uVar3 - 1) < pfVar5 + lVar18) ||
           (pfVar5 + (int)(uVar3 - 1) < pfVar4 + lVar18)) {
          uVar20 = uVar3 - uVar23 & 0x8000000f;
          if ((int)uVar20 < 0) {
            uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
          }
          lVar19 = (longlong)pfVar4 - (longlong)pfVar5;
          pfVar17 = pfVar5 + lVar18 + 4;
          do {
            pfVar2 = (float *)((longlong)pfVar17 + lVar19 + -0x10);
            fVar7 = pfVar2[1];
            fVar8 = pfVar2[2];
            fVar9 = pfVar2[3];
            uVar23 = uVar23 + 0x10;
            lVar18 = lVar18 + 0x10;
            pfVar1 = (float *)((longlong)pfVar17 + lVar19);
            fVar10 = *pfVar1;
            fVar11 = pfVar1[1];
            fVar12 = pfVar1[2];
            fVar13 = pfVar1[3];
            pfVar17[-4] = *pfVar2 * param_2;
            pfVar17[-3] = fVar7 * param_2;
            pfVar17[-2] = fVar8 * param_2;
            pfVar17[-1] = fVar9 * param_2;
            pfVar1 = (float *)((longlong)pfVar17 + lVar19 + 0x10);
            fVar7 = *pfVar1;
            fVar8 = pfVar1[1];
            fVar9 = pfVar1[2];
            fVar14 = pfVar1[3];
            *pfVar17 = fVar10 * param_2;
            pfVar17[1] = fVar11 * param_2;
            pfVar17[2] = fVar12 * param_2;
            pfVar17[3] = fVar13 * param_2;
            pfVar1 = (float *)((longlong)pfVar17 + lVar19 + 0x20);
            fVar10 = *pfVar1;
            fVar11 = pfVar1[1];
            fVar12 = pfVar1[2];
            fVar13 = pfVar1[3];
            pfVar17[4] = fVar7 * param_2;
            pfVar17[5] = fVar8 * param_2;
            pfVar17[6] = fVar9 * param_2;
            pfVar17[7] = fVar14 * param_2;
            pfVar17[8] = fVar10 * param_2;
            pfVar17[9] = fVar11 * param_2;
            pfVar17[10] = fVar12 * param_2;
            pfVar17[0xb] = fVar13 * param_2;
            pfVar17 = pfVar17 + 0x10;
          } while (lVar18 < (int)(uVar3 - uVar20));
        }
      }
      lVar18 = (longlong)(int)uVar23;
      if (lVar18 < lVar22) {
        if (3 < lVar22 - lVar18) {
          lVar19 = lVar18 + 1;
          lVar21 = ((lVar22 - lVar18) - 4U >> 2) + 1;
          lVar18 = lVar18 + lVar21 * 4;
          pfVar17 = pfVar5 + lVar19;
          do {
            pfVar1 = pfVar17 + 4;
            pfVar17[-1] = param_2 * *(float *)((longlong)pfVar4 + (-0x14 - (longlong)pfVar5) +
                                              (longlong)pfVar1);
            *pfVar17 = param_2 * *(float *)((longlong)pfVar4 + (-0x10 - (longlong)pfVar5) +
                                           (longlong)pfVar1);
            pfVar17[1] = param_2 * *(float *)((longlong)pfVar4 + (-0xc - (longlong)pfVar5) +
                                             (longlong)pfVar1);
            pfVar17[2] = param_2 * *(float *)((longlong)pfVar4 + (-8 - (longlong)pfVar5) +
                                             (longlong)pfVar1);
            lVar21 = lVar21 + -1;
            pfVar17 = pfVar1;
          } while (lVar21 != 0);
          if (lVar22 <= lVar18) goto LAB_1444b30ea;
        }
        lVar22 = lVar22 - lVar18;
        pfVar17 = pfVar5 + lVar18;
        do {
          *pfVar17 = param_2 * *(float *)((longlong)pfVar4 + (-4 - (longlong)pfVar5) +
                                         (longlong)(pfVar17 + 1));
          lVar22 = lVar22 + -1;
          pfVar17 = pfVar17 + 1;
        } while (lVar22 != 0);
      }
    }
  }
  else {
    ::ArrayMultiplyByConstant(pfVar4,param_2,pfVar5);
  }
LAB_1444b30ea:
  FCsvProfiler::EndStat("ArrayMultiplyByConstant",uVar15);
  return;
}

// ArrayMultiplyByConstantInPlace @ 1444b3120

void __cdecl Audio::ArrayMultiplyByConstantInPlace(TArrayView<float,int> *param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  
  if (!__CsvProfilerStat1090) {
    FCsvProfilerTrace::OutputInlineStat
              ("ArrayMultiplyByConstantInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1090 = true;
  }
  uVar8 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayMultiplyByConstantInPlace",_GCsvCategory_Audio_Dsp.Index,
             "CSV_ArrayMultiplyByConstantInPlace");
  uVar2 = param_1->ArrayNum;
  lVar14 = (longlong)(int)uVar2;
  pfVar3 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar13 = uVar2 & 0xfffffffc;
    if ((uVar13 != 0) && (0 < (int)uVar13)) {
      lVar9 = 0;
      do {
        pfVar10 = pfVar3 + lVar9;
        fVar4 = pfVar10[1];
        fVar5 = pfVar10[2];
        fVar6 = pfVar10[3];
        pfVar1 = pfVar3 + lVar9;
        *pfVar1 = *pfVar10 * param_2;
        pfVar1[1] = fVar4 * param_2;
        pfVar1[2] = fVar5 * param_2;
        pfVar1[3] = fVar6 * param_2;
        lVar9 = lVar9 + 4;
      } while (lVar9 < (int)uVar13);
    }
    if ((uVar2 & 3) != 0) {
      if (((int)uVar13 < (int)uVar2) && (0xf < uVar2 - uVar13)) {
        lVar9 = (longlong)(int)uVar13;
        uVar11 = uVar2 - uVar13 & 0x8000000f;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
        }
        pfVar10 = pfVar3 + lVar9 + 8;
        do {
          uVar13 = uVar13 + 0x10;
          lVar9 = lVar9 + 0x10;
          pfVar10[-8] = pfVar10[-8] * param_2;
          pfVar10[-7] = pfVar10[-7] * param_2;
          pfVar10[-6] = pfVar10[-6] * param_2;
          pfVar10[-5] = pfVar10[-5] * param_2;
          pfVar10[-4] = param_2 * pfVar10[-4];
          pfVar10[-3] = param_2 * pfVar10[-3];
          pfVar10[-2] = param_2 * pfVar10[-2];
          pfVar10[-1] = param_2 * pfVar10[-1];
          *pfVar10 = *pfVar10 * param_2;
          pfVar10[1] = pfVar10[1] * param_2;
          pfVar10[2] = pfVar10[2] * param_2;
          pfVar10[3] = pfVar10[3] * param_2;
          pfVar10[4] = pfVar10[4] * param_2;
          pfVar10[5] = pfVar10[5] * param_2;
          pfVar10[6] = pfVar10[6] * param_2;
          pfVar10[7] = pfVar10[7] * param_2;
          pfVar10 = pfVar10 + 0x10;
        } while (lVar9 < (int)(uVar2 - uVar11));
      }
      lVar9 = (longlong)(int)uVar13;
      if (lVar9 < lVar14) {
        if (3 < lVar14 - lVar9) {
          lVar7 = lVar9 + 2;
          lVar12 = ((lVar14 - lVar9) - 4U >> 2) + 1;
          lVar9 = lVar9 + lVar12 * 4;
          pfVar10 = pfVar3 + lVar7;
          do {
            pfVar10[-2] = param_2 * pfVar10[-2];
            pfVar10[-1] = param_2 * pfVar10[-1];
            *pfVar10 = param_2 * *pfVar10;
            pfVar10[1] = param_2 * pfVar10[1];
            lVar12 = lVar12 + -1;
            pfVar10 = pfVar10 + 4;
          } while (lVar12 != 0);
          if (lVar14 <= lVar9) goto LAB_1444b32f7;
        }
        do {
          pfVar3[lVar9] = param_2 * pfVar3[lVar9];
          lVar9 = lVar9 + 1;
        } while (lVar9 < lVar14);
      }
    }
  }
  else {
    ::ArrayMultiplyByConstantInPlace(pfVar3,uVar2,param_2);
  }
LAB_1444b32f7:
  FCsvProfiler::EndStat("ArrayMultiplyByConstantInPlace",uVar8);
  return;
}

// ArrayMultiplyInPlace @ 1444b3320

void __cdecl
Audio::ArrayMultiplyInPlace(TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  
  if (!__CsvProfilerStat861) {
    FCsvProfilerTrace::OutputInlineStat("ArrayMultiplyInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat861 = true;
  }
  uVar12 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayMultiplyInPlace",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayMultiplyInPlace");
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFloatBuffer.Num() == BufferToMultiply.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x35e,L"Input buffers must be equal length"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = param_2->ArrayNum;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar17 = uVar3 & 0xfffffffc;
    if (uVar17 != 0) {
      uVar14 = 0;
      if (0 < (int)uVar17) {
        lVar16 = 0;
        do {
          uVar18 = ~uVar14 >> 0x1f;
          uVar15 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pfVar4 = param_1->DataPtr + lVar16;
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          fVar6 = pfVar4[2];
          fVar7 = pfVar4[3];
          uVar15 = 0;
          if ((int)uVar14 < param_2->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pfVar4 = param_2->DataPtr + lVar16;
          fVar8 = *pfVar4;
          fVar9 = pfVar4[1];
          fVar10 = pfVar4[2];
          fVar11 = pfVar4[3];
          uVar15 = 0;
          if ((int)uVar14 < param_2->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = uVar14 + 4;
          pfVar4 = param_2->DataPtr + lVar16;
          *pfVar4 = fVar8 * fVar1;
          pfVar4[1] = fVar9 * fVar2;
          pfVar4[2] = fVar10 * fVar6;
          pfVar4[3] = fVar11 * fVar7;
          lVar16 = lVar16 + 4;
        } while (lVar16 < (int)uVar17);
      }
    }
    if ((uVar3 & 3) != 0) {
      for (lVar16 = (longlong)(int)uVar17; lVar16 < (int)uVar3; lVar16 = lVar16 + 1) {
        uVar15 = ~uVar17 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pfVar4 = param_1->DataPtr;
        uVar14 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar1 = param_2->DataPtr[lVar16];
        fVar2 = pfVar4[lVar16];
        uVar14 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar17 = uVar17 + 1;
        param_2->DataPtr[lVar16] = fVar1 * fVar2;
      }
    }
  }
  else {
    ::ArrayMultiplyInPlace(param_1->DataPtr,param_2->DataPtr,uVar3);
  }
  FCsvProfiler::EndStat("ArrayMultiplyInPlace",uVar12);
  return;
}

// ArrayPcm16ToFloat @ 1444b3670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::ArrayPcm16ToFloat(TArrayView<short_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  float *pfVar6;
  code *pcVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  bool bVar19;
  float *pfVar20;
  short *psVar21;
  ulonglong *puVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined2 uVar34;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  if (!__CsvProfilerStat2478) {
    FCsvProfilerTrace::OutputInlineStat("ArrayPcm16ToFloat",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2478 = true;
  }
  uVar18 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayPcm16ToFloat",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayPcm16ToFloat")
  ;
  if ((param_2->ArrayNum < param_1->ArrayNum) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutView.Num() >= InView.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x9b0,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar17 = _UNK_150d565ec;
  fVar16 = _UNK_150d565e8;
  fVar15 = _UNK_150d565e4;
  fVar14 = ___xmm_38000100380001003800010038000100;
  iVar4 = param_1->ArrayNum;
  uVar29 = (ulonglong)iVar4;
  psVar5 = param_1->DataPtr;
  pfVar6 = param_2->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar24 = 0;
    uVar25 = uVar29 & 0xfffffffffffffffc;
    uVar28 = uVar24;
    if (0 < (longlong)uVar25) {
      uVar28 = (ulonglong)((int)(uVar25 - 1 >> 2) * 4 + 4);
      psVar21 = psVar5 + 2;
      do {
        sVar1 = psVar21[-1];
        sVar2 = *psVar21;
        sVar3 = psVar21[1];
        pfVar20 = pfVar6 + uVar24;
        *pfVar20 = (float)(int)psVar21[-2] * fVar14;
        pfVar20[1] = (float)(int)sVar1 * fVar15;
        pfVar20[2] = (float)(int)sVar2 * fVar16;
        pfVar20[3] = (float)(int)sVar3 * fVar17;
        uVar24 = uVar24 + 4;
        psVar21 = psVar21 + 4;
      } while ((longlong)uVar24 < (longlong)uVar25);
    }
    uVar27 = (uint)uVar28;
    if (((int)uVar27 < iVar4) && (0xf < iVar4 - uVar27)) {
      lVar26 = (longlong)(int)uVar27;
      if ((psVar5 + (iVar4 + -1) < pfVar6 + lVar26) || (pfVar6 + (iVar4 + -1) < psVar5 + lVar26)) {
        uVar23 = iVar4 - uVar27 & 0x8000000f;
        if ((int)uVar23 < 0) {
          uVar23 = (uVar23 - 1 | 0xfffffff0) + 1;
        }
        pfVar20 = pfVar6 + lVar26 + 8;
        puVar22 = (ulonglong *)(psVar5 + lVar26 + 8);
        do {
          uVar24 = puVar22[-2];
          uVar25 = puVar22[-1];
          uVar34 = (undefined2)(uVar24 >> 0x30);
          auVar33._8_4_ = 0;
          auVar33._0_8_ = uVar24;
          auVar33._12_2_ = uVar34;
          auVar33._14_2_ = uVar34;
          uVar34 = (undefined2)(uVar24 >> 0x20);
          auVar32._12_4_ = auVar33._12_4_;
          auVar32._8_2_ = 0;
          auVar32._0_8_ = uVar24;
          auVar32._10_2_ = uVar34;
          auVar31._10_6_ = auVar32._10_6_;
          auVar31._8_2_ = uVar34;
          auVar31._0_8_ = uVar24;
          uVar34 = (undefined2)(uVar24 >> 0x10);
          auVar8._4_8_ = auVar31._8_8_;
          auVar8._2_2_ = uVar34;
          auVar8._0_2_ = uVar34;
          uVar27 = (int)uVar28 + 0x10;
          uVar28 = (ulonglong)uVar27;
          lVar26 = lVar26 + 0x10;
          uVar34 = (undefined2)(uVar25 >> 0x30);
          auVar37._8_4_ = 0;
          auVar37._0_8_ = uVar25;
          auVar37._12_2_ = uVar34;
          auVar37._14_2_ = uVar34;
          uVar34 = (undefined2)(uVar25 >> 0x20);
          auVar36._12_4_ = auVar37._12_4_;
          auVar36._8_2_ = 0;
          auVar36._0_8_ = uVar25;
          auVar36._10_2_ = uVar34;
          auVar35._10_6_ = auVar36._10_6_;
          auVar35._8_2_ = uVar34;
          auVar35._0_8_ = uVar25;
          uVar34 = (undefined2)(uVar25 >> 0x10);
          auVar9._4_8_ = auVar35._8_8_;
          auVar9._2_2_ = uVar34;
          auVar9._0_2_ = uVar34;
          pfVar20[-8] = (float)(int)(short)uVar24 * fVar14;
          pfVar20[-7] = (float)(auVar8._0_4_ >> 0x10) * fVar15;
          pfVar20[-6] = (float)(auVar31._8_4_ >> 0x10) * fVar16;
          pfVar20[-5] = (float)(auVar32._12_4_ >> 0x10) * fVar17;
          uVar24 = *puVar22;
          uVar34 = (undefined2)(uVar24 >> 0x30);
          auVar40._8_4_ = 0;
          auVar40._0_8_ = uVar24;
          auVar40._12_2_ = uVar34;
          auVar40._14_2_ = uVar34;
          uVar34 = (undefined2)(uVar24 >> 0x20);
          auVar39._12_4_ = auVar40._12_4_;
          auVar39._8_2_ = 0;
          auVar39._0_8_ = uVar24;
          auVar39._10_2_ = uVar34;
          auVar38._10_6_ = auVar39._10_6_;
          auVar38._8_2_ = uVar34;
          auVar38._0_8_ = uVar24;
          uVar34 = (undefined2)(uVar24 >> 0x10);
          auVar10._4_8_ = auVar38._8_8_;
          auVar10._2_2_ = uVar34;
          auVar10._0_2_ = uVar34;
          pfVar20[-4] = (float)(int)(short)uVar25 * fVar14;
          pfVar20[-3] = (float)(auVar9._0_4_ >> 0x10) * fVar15;
          pfVar20[-2] = (float)(auVar35._8_4_ >> 0x10) * fVar16;
          pfVar20[-1] = (float)(auVar36._12_4_ >> 0x10) * fVar17;
          uVar25 = puVar22[1];
          uVar34 = (undefined2)(uVar25 >> 0x30);
          auVar43._8_4_ = 0;
          auVar43._0_8_ = uVar25;
          auVar43._12_2_ = uVar34;
          auVar43._14_2_ = uVar34;
          uVar34 = (undefined2)(uVar25 >> 0x20);
          auVar42._12_4_ = auVar43._12_4_;
          auVar42._8_2_ = 0;
          auVar42._0_8_ = uVar25;
          auVar42._10_2_ = uVar34;
          auVar41._10_6_ = auVar42._10_6_;
          auVar41._8_2_ = uVar34;
          auVar41._0_8_ = uVar25;
          uVar34 = (undefined2)(uVar25 >> 0x10);
          auVar11._4_8_ = auVar41._8_8_;
          auVar11._2_2_ = uVar34;
          auVar11._0_2_ = uVar34;
          *pfVar20 = (float)(int)(short)uVar24 * fVar14;
          pfVar20[1] = (float)(auVar10._0_4_ >> 0x10) * fVar15;
          pfVar20[2] = (float)(auVar38._8_4_ >> 0x10) * fVar16;
          pfVar20[3] = (float)(auVar39._12_4_ >> 0x10) * fVar17;
          pfVar20[4] = (float)(int)(short)uVar25 * fVar14;
          pfVar20[5] = (float)(auVar11._0_4_ >> 0x10) * fVar15;
          pfVar20[6] = (float)(auVar41._8_4_ >> 0x10) * fVar16;
          pfVar20[7] = (float)(auVar42._12_4_ >> 0x10) * fVar17;
          pfVar20 = pfVar20 + 0x10;
          puVar22 = puVar22 + 4;
        } while (lVar26 < (int)(iVar4 - uVar23));
      }
    }
    fVar14 = __real_38000100;
    lVar26 = (longlong)(int)uVar27;
    if (lVar26 < (longlong)uVar29) {
      if (3 < (longlong)(uVar29 - lVar26)) {
        lVar12 = lVar26 + 2;
        lVar30 = ((uVar29 - lVar26) - 4 >> 2) + 1;
        lVar13 = lVar26 + 2;
        lVar26 = lVar26 + lVar30 * 4;
        pfVar20 = pfVar6 + lVar12;
        psVar21 = psVar5 + lVar13;
        do {
          pfVar20[-2] = (float)(int)psVar21[-2] * fVar14;
          pfVar20[-1] = (float)(int)psVar21[-1] * fVar14;
          *pfVar20 = (float)(int)*psVar21 * fVar14;
          pfVar20[1] = (float)(int)psVar21[1] * fVar14;
          lVar30 = lVar30 + -1;
          pfVar20 = pfVar20 + 4;
          psVar21 = psVar21 + 4;
        } while (lVar30 != 0);
        if ((longlong)uVar29 <= lVar26) goto LAB_1444b396e;
      }
      do {
        pfVar6[lVar26] = (float)(int)psVar5[lVar26] * fVar14;
        lVar26 = lVar26 + 1;
      } while (lVar26 < (longlong)uVar29);
    }
  }
  else {
    ::ArrayPcm16ToFloat(psVar5,pfVar6,iVar4);
  }
LAB_1444b396e:
  FCsvProfiler::EndStat("ArrayPcm16ToFloat",uVar18);
  return;
}

// ArrayPowerToDecibelInPlace @ 1444b3990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Audio::ArrayPowerToDecibelInPlace(TArrayView<float,int> *param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  float fVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined1 auVar15 [16];
  float extraout_XMM0_Dd_00;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (!__CsvProfilerStat1697) {
    FCsvProfilerTrace::OutputInlineStat("ArrayPowerToDecibelInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1697 = true;
  }
  uVar9 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayPowerToDecibelInPlace",_GCsvCategory_Audio_Dsp.Index,
             "CSV_ArrayPowerToDecibelInPlace");
  uVar2 = param_1->ArrayNum;
  pfVar3 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    fVar14 = expf(MathIntrinsics::Loge10 * param_2 * __real_3dcccccd);
    fVar5 = __real_41200000;
    auVar21._4_4_ = fVar14;
    auVar21._0_4_ = fVar14;
    auVar21._8_4_ = fVar14;
    auVar21._12_4_ = fVar14;
    fVar25 = __real_3f800000 / MathIntrinsics::Loge10;
    fVar26 = fVar25 * __real_41200000;
    uVar11 = uVar2 & 0xfffffffc;
    if ((uVar11 != 0) && (0 < (int)uVar11)) {
      lVar12 = 0;
      do {
        maxps(*(undefined1 (*) [16])(pfVar3 + lVar12),auVar21);
        __vdecl_logf4();
        pfVar1 = pfVar3 + lVar12;
        *pfVar1 = extraout_XMM0_Da * fVar26;
        pfVar1[1] = extraout_XMM0_Db * fVar26;
        pfVar1[2] = extraout_XMM0_Dc * fVar26;
        pfVar1[3] = extraout_XMM0_Dd * fVar26;
        lVar12 = lVar12 + 4;
      } while (lVar12 < (int)uVar11);
    }
    fVar8 = _UNK_15076c1dc;
    fVar7 = _UNK_15076c1d8;
    fVar6 = _UNK_15076c1d4;
    fVar26 = ___xmm_41200000412000004120000041200000;
    if ((uVar2 & 3) != 0) {
      if (((int)uVar11 < (int)uVar2) && (3 < uVar2 - uVar11)) {
        uVar10 = uVar2 - uVar11 & 0x80000003;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
        }
        auVar15._4_4_ = MathIntrinsics::Loge10;
        auVar15._0_4_ = MathIntrinsics::Loge10;
        auVar15._8_4_ = MathIntrinsics::Loge10;
        auVar15._12_4_ = MathIntrinsics::Loge10;
        auVar21 = rcpps(auVar21,auVar15);
        fVar20 = auVar21._0_4_;
        fVar22 = auVar21._4_4_;
        fVar23 = auVar21._8_4_;
        fVar24 = auVar21._12_4_;
        fVar16 = fVar20 * fVar20 * MathIntrinsics::Loge10;
        fVar17 = fVar22 * fVar22 * MathIntrinsics::Loge10;
        fVar18 = fVar23 * fVar23 * MathIntrinsics::Loge10;
        fVar19 = fVar24 * fVar24 * MathIntrinsics::Loge10;
        pauVar13 = (undefined1 (*) [16])(pfVar3 + (int)uVar11);
        do {
          auVar4._4_4_ = fVar14;
          auVar4._0_4_ = fVar14;
          auVar4._8_4_ = fVar14;
          auVar4._12_4_ = fVar14;
          maxps(*pauVar13,auVar4);
          __vdecl_logf4();
          uVar11 = uVar11 + 4;
          *(float *)*pauVar13 = extraout_XMM0_Da_00 * ((fVar20 + fVar20) - fVar16) * fVar26;
          *(float *)(*pauVar13 + 4) = extraout_XMM0_Db_00 * ((fVar22 + fVar22) - fVar17) * fVar6;
          *(float *)(*pauVar13 + 8) = extraout_XMM0_Dc_00 * ((fVar23 + fVar23) - fVar18) * fVar7;
          *(float *)(*pauVar13 + 0xc) = extraout_XMM0_Dd_00 * ((fVar24 + fVar24) - fVar19) * fVar8;
          pauVar13 = pauVar13 + 1;
        } while ((int)uVar11 < (int)(uVar2 - uVar10));
      }
      for (lVar12 = (longlong)(int)uVar11; lVar12 < (int)uVar2; lVar12 = lVar12 + 1) {
        fVar26 = pfVar3[lVar12];
        if (pfVar3[lVar12] <= fVar14) {
          fVar26 = fVar14;
        }
        fVar26 = logf(fVar26);
        pfVar3[lVar12] = fVar26 * fVar5 * fVar25;
      }
    }
  }
  else {
    ::ArrayPowerToDecibelInPlace(pfVar3,param_2,uVar2);
  }
  FCsvProfiler::EndStat("ArrayPowerToDecibelInPlace",uVar9);
  return;
}

// ArrayRangeClamp @ 1444b3be0

void __cdecl Audio::ArrayRangeClamp(TArrayView<float,int> *param_1,float param_2,float param_3)

{
  uint uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  float *pfVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auVar23 [16];
  
  if (!__CsvProfilerStat1904) {
    FCsvProfilerTrace::OutputInlineStat("ArrayRangeClamp",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1904 = true;
  }
  uVar14 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayRangeClamp",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayRangeClamp");
  uVar1 = param_1->ArrayNum;
  lVar21 = (longlong)(int)uVar1;
  pfVar2 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar20 = uVar1 & 0xfffffffc;
    if ((uVar20 != 0) && (0 < (int)uVar20)) {
      lVar15 = 0;
      do {
        pfVar17 = pfVar2 + lVar15;
        fVar10 = *pfVar17;
        fVar22 = pfVar17[1];
        fVar11 = pfVar17[2];
        fVar12 = pfVar17[3];
        pfVar17 = pfVar2 + lVar15;
        *pfVar17 = (float)(~-(uint)(param_3 < fVar10) &
                           (~-(uint)(fVar10 < param_2) & (uint)fVar10 |
                           -(uint)(fVar10 < param_2) & (uint)param_2) |
                          -(uint)(param_3 < fVar10) & (uint)param_3);
        pfVar17[1] = (float)(~-(uint)(param_3 < fVar22) &
                             (~-(uint)(fVar22 < param_2) & (uint)fVar22 |
                             -(uint)(fVar22 < param_2) & (uint)param_2) |
                            -(uint)(param_3 < fVar22) & (uint)param_3);
        pfVar17[2] = (float)(~-(uint)(param_3 < fVar11) &
                             (~-(uint)(fVar11 < param_2) & (uint)fVar11 |
                             -(uint)(fVar11 < param_2) & (uint)param_2) |
                            -(uint)(param_3 < fVar11) & (uint)param_3);
        pfVar17[3] = (float)(~-(uint)(param_3 < fVar12) &
                             (~-(uint)(fVar12 < param_2) & (uint)fVar12 |
                             -(uint)(fVar12 < param_2) & (uint)param_2) |
                            -(uint)(param_3 < fVar12) & (uint)param_3);
        lVar15 = lVar15 + 4;
      } while (lVar15 < (int)uVar20);
    }
    if ((uVar1 & 3) != 0) {
      if (((int)uVar20 < (int)uVar1) && (0xf < uVar1 - uVar20)) {
        lVar15 = (longlong)(int)uVar20;
        uVar18 = uVar1 - uVar20 & 0x8000000f;
        if ((int)uVar18 < 0) {
          uVar18 = (uVar18 - 1 | 0xfffffff0) + 1;
        }
        pauVar16 = (undefined1 (*) [16])(pfVar2 + lVar15 + 8);
        do {
          uVar20 = uVar20 + 0x10;
          lVar15 = lVar15 + 0x10;
          auVar23._4_4_ = param_3;
          auVar23._0_4_ = param_3;
          auVar23._8_4_ = param_3;
          auVar23._12_4_ = param_3;
          auVar23 = minps(pauVar16[-2],auVar23);
          auVar6._4_4_ = param_2;
          auVar6._0_4_ = param_2;
          auVar6._8_4_ = param_2;
          auVar6._12_4_ = param_2;
          auVar23 = maxps(auVar23,auVar6);
          pauVar16[-2] = auVar23;
          auVar3._4_4_ = param_3;
          auVar3._0_4_ = param_3;
          auVar3._8_4_ = param_3;
          auVar3._12_4_ = param_3;
          auVar23 = minps(pauVar16[-1],auVar3);
          auVar7._4_4_ = param_2;
          auVar7._0_4_ = param_2;
          auVar7._8_4_ = param_2;
          auVar7._12_4_ = param_2;
          auVar23 = maxps(auVar23,auVar7);
          pauVar16[-1] = auVar23;
          auVar4._4_4_ = param_3;
          auVar4._0_4_ = param_3;
          auVar4._8_4_ = param_3;
          auVar4._12_4_ = param_3;
          auVar23 = minps(*pauVar16,auVar4);
          auVar8._4_4_ = param_2;
          auVar8._0_4_ = param_2;
          auVar8._8_4_ = param_2;
          auVar8._12_4_ = param_2;
          auVar23 = maxps(auVar23,auVar8);
          *pauVar16 = auVar23;
          auVar5._4_4_ = param_3;
          auVar5._0_4_ = param_3;
          auVar5._8_4_ = param_3;
          auVar5._12_4_ = param_3;
          auVar23 = minps(pauVar16[1],auVar5);
          auVar9._4_4_ = param_2;
          auVar9._0_4_ = param_2;
          auVar9._8_4_ = param_2;
          auVar9._12_4_ = param_2;
          auVar23 = maxps(auVar23,auVar9);
          pauVar16[1] = auVar23;
          pauVar16 = pauVar16 + 4;
        } while (lVar15 < (int)(uVar1 - uVar18));
      }
      lVar15 = (longlong)(int)uVar20;
      if (lVar15 < lVar21) {
        if (3 < lVar21 - lVar15) {
          lVar13 = lVar15 + 2;
          lVar19 = ((lVar21 - lVar15) - 4U >> 2) + 1;
          lVar15 = lVar15 + lVar19 * 4;
          pfVar17 = pfVar2 + lVar13;
          do {
            fVar10 = pfVar17[-1];
            if (param_3 <= pfVar17[-1]) {
              fVar10 = param_3;
            }
            fVar22 = param_3;
            if (pfVar17[-2] <= param_3) {
              fVar22 = pfVar17[-2];
            }
            if (fVar10 <= param_2) {
              fVar10 = param_2;
            }
            if (fVar22 <= param_2) {
              fVar22 = param_2;
            }
            pfVar17[-1] = fVar10;
            pfVar17[-2] = fVar22;
            fVar10 = *pfVar17;
            if (param_3 <= *pfVar17) {
              fVar10 = param_3;
            }
            fVar22 = param_3;
            if (pfVar17[1] <= param_3) {
              fVar22 = pfVar17[1];
            }
            if (fVar10 <= param_2) {
              fVar10 = param_2;
            }
            if (fVar22 <= param_2) {
              fVar22 = param_2;
            }
            *pfVar17 = fVar10;
            pfVar17[1] = fVar22;
            lVar19 = lVar19 + -1;
            pfVar17 = pfVar17 + 4;
          } while (lVar19 != 0);
          if (lVar21 <= lVar15) goto LAB_1444b3e2c;
        }
        do {
          fVar10 = pfVar2[lVar15];
          if (param_3 <= pfVar2[lVar15]) {
            fVar10 = param_3;
          }
          if (fVar10 <= param_2) {
            fVar10 = param_2;
          }
          pfVar2[lVar15] = fVar10;
          lVar15 = lVar15 + 1;
        } while (lVar15 < lVar21);
      }
    }
  }
  else {
    ::ArrayRangeClamp(pfVar2,uVar1,param_2,param_3);
  }
LAB_1444b3e2c:
  FCsvProfiler::EndStat("ArrayRangeClamp",uVar14);
  return;
}

// ArrayScaledComplexConjugate @ 1444b3e60

void __cdecl
Audio::ArrayScaledComplexConjugate(float *param_1,int param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar5 = __xmm_80000000800000008000000080000000;
  if (!bAudio_FloatArrayMath_ISPC_Enabled) {
    uVar8 = (ulonglong)param_2;
    fVar11 = (float)((uint)param_4 ^ __xmm_80000000800000008000000080000000);
    uVar10 = uVar8 & 0xfffffffffffffffc;
    lVar7 = (longlong)param_1 - (longlong)param_3;
    if (0 < (longlong)uVar10) {
      lVar9 = (uVar10 - 1 >> 2) + 1;
      pfVar6 = param_3;
      do {
        pfVar1 = (float *)(lVar7 + (longlong)pfVar6);
        fVar2 = pfVar1[1];
        fVar3 = pfVar1[2];
        fVar4 = pfVar1[3];
        *pfVar6 = *pfVar1 * param_4;
        pfVar6[1] = fVar2 * fVar11;
        pfVar6[2] = fVar3 * param_4;
        pfVar6[3] = fVar4 * fVar11;
        lVar9 = lVar9 + -1;
        pfVar6 = pfVar6 + 4;
      } while (lVar9 != 0);
    }
    if ((longlong)uVar10 < (longlong)uVar8) {
      lVar9 = ((uVar8 - uVar10) - 1 >> 1) + 1;
      pfVar6 = param_3 + uVar10 + 1;
      do {
        pfVar1 = pfVar6 + 2;
        fVar11 = *(float *)(lVar7 + -0xc + (longlong)pfVar1);
        *pfVar6 = (float)((uint)(param_4 * *(float *)(lVar7 + -8 + (longlong)pfVar1)) ^ uVar5);
        pfVar6[-1] = param_4 * fVar11;
        lVar9 = lVar9 + -1;
        pfVar6 = pfVar1;
      } while (lVar9 != 0);
    }
    return;
  }
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayScaledComplexConjugate_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayScaledComplexConjugate_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayScaledComplexConjugate_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayScaledComplexConjugate_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArraySetToConstantInplace @ 1444b3f10

void __cdecl Audio::ArraySetToConstantInplace(TArrayView<float,int> *param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  uint uVar6;
  
  if (!__CsvProfilerStat1953) {
    FCsvProfilerTrace::OutputInlineStat("ArraySetToConstantInplace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1953 = true;
  }
  uVar3 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArraySetToConstantInplace",_GCsvCategory_Audio_Dsp.Index,
             "CSV_ArraySetToConstantInplace");
  uVar2 = param_1->ArrayNum;
  pfVar5 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar6 = uVar2 & 0xfffffffc;
    if ((uVar6 != 0) && (0 < (int)uVar6)) {
      lVar4 = 0;
      do {
        pfVar1 = pfVar5 + lVar4;
        *pfVar1 = param_2;
        pfVar1[1] = param_2;
        pfVar1[2] = param_2;
        pfVar1[3] = param_2;
        lVar4 = lVar4 + 4;
      } while (lVar4 < (int)uVar6);
    }
    if (((uVar2 & 3) != 0) && ((int)uVar6 < (int)uVar2)) {
      pfVar5 = pfVar5 + (int)uVar6;
      for (lVar4 = (longlong)(int)(uVar2 - uVar6); lVar4 != 0; lVar4 = lVar4 + -1) {
        *pfVar5 = param_2;
        pfVar5 = pfVar5 + 1;
      }
    }
  }
  else {
    ::ArraySetToConstantInplace(pfVar5,uVar2,param_2);
  }
  FCsvProfiler::EndStat("ArraySetToConstantInplace",uVar3);
  return;
}

// ArraySqrtInPlace @ 1444b3ff0

void __cdecl Audio::ArraySqrtInPlace(TArrayView<float,int> *param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (!__CsvProfilerStat1530) {
    FCsvProfilerTrace::OutputInlineStat("ArraySqrtInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1530 = true;
  }
  uVar4 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArraySqrtInPlace",_GCsvCategory_Audio_Dsp.Index,"CSV_ArraySqrtInPlace");
  iVar2 = param_1->ArrayNum;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar9 = 0;
    if (0 < iVar2) {
      lVar7 = 0;
      uVar8 = (longlong)iVar2;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (int)uVar8) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = (ulonglong)(uint)param_1->ArrayNum;
        fVar1 = param_1->DataPtr[lVar7];
        uVar6 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = uVar9 + 1;
        param_1->DataPtr[lVar7] = SQRT(fVar1);
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar2);
    }
  }
  else {
    ::ArraySqrtInPlace(param_1->DataPtr,iVar2);
  }
  FCsvProfiler::EndStat("ArraySqrtInPlace",uVar4);
  return;
}

// ArraySquare @ 1444b4170

void __cdecl
Audio::ArraySquare(TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  float *pfVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  
  if (!__CsvProfilerStat1451) {
    FCsvProfilerTrace::OutputInlineStat("ArraySquare",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1451 = true;
  }
  uVar15 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArraySquare",_GCsvCategory_Audio_Dsp.Index,"CSV_ArraySquare");
  if (param_1->ArrayNum != param_2->ArrayNum) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InValues.Num() == OutValues.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                        ,0x5ac,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar4 = param_1->ArrayNum;
  lVar22 = (longlong)(int)uVar4;
  pfVar5 = param_1->DataPtr;
  pfVar6 = param_2->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled != false) {
    ::ArraySquare(pfVar5,pfVar6,uVar4);
    goto LAB_1444b441e;
  }
  uVar20 = uVar4 & 0xfffffffc;
  if ((uVar20 != 0) && (0 < (int)uVar20)) {
    lVar19 = ((longlong)(int)uVar20 - 1U >> 2) + 1;
    pfVar18 = pfVar6;
    do {
      pfVar1 = (float *)((longlong)pfVar18 + ((longlong)pfVar5 - (longlong)pfVar6));
      fVar24 = pfVar1[1];
      fVar25 = pfVar1[2];
      fVar8 = pfVar1[3];
      *pfVar18 = *pfVar1 * *pfVar1;
      pfVar18[1] = fVar24 * fVar24;
      pfVar18[2] = fVar25 * fVar25;
      pfVar18[3] = fVar8 * fVar8;
      lVar19 = lVar19 + -1;
      pfVar18 = pfVar18 + 4;
    } while (lVar19 != 0);
  }
  if ((uVar4 & 3) == 0) goto LAB_1444b441e;
  uVar23 = uVar4 - uVar20;
  if (((int)uVar20 < (int)uVar4) && (1 < uVar23)) {
    if ((pfVar5 + (int)(uVar4 - 1) < pfVar6 + (int)uVar20) ||
       (pfVar6 + (int)(uVar4 - 1) < pfVar5 + (int)uVar20)) {
      if (0xf < uVar23) {
        uVar17 = uVar23 & 0x8000000f;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
        }
        lVar19 = (longlong)pfVar5 - (longlong)pfVar6;
        pfVar18 = pfVar6 + (longlong)(int)uVar20 + 4;
        do {
          pfVar2 = (float *)((longlong)pfVar18 + lVar19 + -0x10);
          fVar24 = pfVar2[1];
          fVar25 = pfVar2[2];
          fVar8 = pfVar2[3];
          uVar20 = uVar20 + 0x10;
          pfVar1 = (float *)((longlong)pfVar18 + lVar19);
          fVar9 = *pfVar1;
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar18[-4] = *pfVar2 * *pfVar2;
          pfVar18[-3] = fVar24 * fVar24;
          pfVar18[-2] = fVar25 * fVar25;
          pfVar18[-1] = fVar8 * fVar8;
          pfVar1 = (float *)((longlong)pfVar18 + lVar19 + 0x10);
          fVar24 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar13 = pfVar1[3];
          *pfVar18 = fVar9 * fVar9;
          pfVar18[1] = fVar10 * fVar10;
          pfVar18[2] = fVar11 * fVar11;
          pfVar18[3] = fVar12 * fVar12;
          pfVar1 = (float *)((longlong)pfVar18 + lVar19 + 0x20);
          fVar9 = *pfVar1;
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar18[4] = fVar24 * fVar24;
          pfVar18[5] = fVar25 * fVar25;
          pfVar18[6] = fVar8 * fVar8;
          pfVar18[7] = fVar13 * fVar13;
          pfVar18[8] = fVar9 * fVar9;
          pfVar18[9] = fVar10 * fVar10;
          pfVar18[10] = fVar11 * fVar11;
          pfVar18[0xb] = fVar12 * fVar12;
          pfVar18 = pfVar18 + 0x10;
        } while ((int)uVar20 < (int)(uVar4 - uVar17));
        if (((byte)uVar23 & 0xf) < 2) goto LAB_1444b4369;
      }
      uVar23 = uVar23 & 0x80000001;
      if ((int)uVar23 < 0) {
        uVar23 = (uVar23 - 1 | 0xfffffffe) + 1;
      }
      pfVar18 = pfVar6 + (int)uVar20;
      do {
        uVar3 = *(undefined8 *)(((longlong)pfVar5 - (longlong)pfVar6) + (longlong)pfVar18);
        fVar24 = (float)uVar3;
        fVar25 = (float)((ulonglong)uVar3 >> 0x20);
        uVar20 = uVar20 + 2;
        *(ulonglong *)pfVar18 = CONCAT44(fVar25 * fVar25,fVar24 * fVar24);
        pfVar18 = pfVar18 + 2;
      } while ((int)uVar20 < (int)(uVar4 - uVar23));
    }
  }
LAB_1444b4369:
  lVar19 = (longlong)(int)uVar20;
  if (lVar19 < lVar22) {
    if (3 < lVar22 - lVar19) {
      lVar14 = lVar19 + 1;
      lVar21 = ((lVar22 - lVar19) - 4U >> 2) + 1;
      lVar19 = lVar19 + lVar21 * 4;
      pfVar18 = pfVar6 + lVar14;
      do {
        fVar24 = *(float *)((longlong)pfVar5 + (-4 - (longlong)pfVar6) + (longlong)pfVar18);
        pfVar1 = pfVar18 + 4;
        pfVar18[-1] = fVar24 * fVar24;
        fVar24 = *(float *)((longlong)pfVar5 + (-0x10 - (longlong)pfVar6) + (longlong)pfVar1);
        *pfVar18 = fVar24 * fVar24;
        fVar24 = *(float *)((longlong)pfVar5 + (-0xc - (longlong)pfVar6) + (longlong)pfVar1);
        pfVar18[1] = fVar24 * fVar24;
        fVar24 = *(float *)((longlong)pfVar5 + (-8 - (longlong)pfVar6) + (longlong)pfVar1);
        pfVar18[2] = fVar24 * fVar24;
        lVar21 = lVar21 + -1;
        pfVar18 = pfVar1;
      } while (lVar21 != 0);
      if (lVar22 <= lVar19) goto LAB_1444b441e;
    }
    lVar22 = lVar22 - lVar19;
    pfVar18 = pfVar6 + lVar19;
    do {
      fVar24 = *(float *)(((longlong)pfVar5 - (longlong)pfVar6) + (longlong)pfVar18);
      *pfVar18 = fVar24 * fVar24;
      lVar22 = lVar22 + -1;
      pfVar18 = pfVar18 + 1;
    } while (lVar22 != 0);
  }
LAB_1444b441e:
  FCsvProfiler::EndStat("ArraySquare",uVar15);
  return;
}

// ArraySquareInPlace @ 1444b4450

void __cdecl Audio::ArraySquareInPlace(TArrayView<float,int> *param_1)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  
  if (!__CsvProfilerStat1492) {
    FCsvProfilerTrace::OutputInlineStat("ArraySquareInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1492 = true;
  }
  uVar6 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArraySquareInPlace",_GCsvCategory_Audio_Dsp.Index,"CSV_ArraySquareInPlace");
  uVar2 = param_1->ArrayNum;
  lVar13 = (longlong)(int)uVar2;
  pfVar3 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled != false) {
    ::ArraySquareInPlace(pfVar3,uVar2);
    goto LAB_1444b4658;
  }
  uVar10 = uVar2 & 0xfffffffc;
  if ((uVar10 != 0) && (0 < (int)uVar10)) {
    lVar8 = 0;
    do {
      pfVar9 = pfVar3 + lVar8;
      fVar14 = pfVar9[1];
      fVar15 = pfVar9[2];
      fVar4 = pfVar9[3];
      pfVar1 = pfVar3 + lVar8;
      *pfVar1 = *pfVar9 * *pfVar9;
      pfVar1[1] = fVar14 * fVar14;
      pfVar1[2] = fVar15 * fVar15;
      pfVar1[3] = fVar4 * fVar4;
      lVar8 = lVar8 + 4;
    } while (lVar8 < (int)uVar10);
  }
  if ((uVar2 & 3) == 0) goto LAB_1444b4658;
  uVar12 = uVar2 - uVar10;
  if (((int)uVar10 < (int)uVar2) && (1 < uVar12)) {
    if (0xf < uVar12) {
      uVar7 = uVar12 & 0x8000000f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
      }
      pfVar9 = pfVar3 + (longlong)(int)uVar10 + 8;
      do {
        uVar10 = uVar10 + 0x10;
        pfVar9[-8] = pfVar9[-8] * pfVar9[-8];
        pfVar9[-7] = pfVar9[-7] * pfVar9[-7];
        pfVar9[-6] = pfVar9[-6] * pfVar9[-6];
        pfVar9[-5] = pfVar9[-5] * pfVar9[-5];
        pfVar9[-4] = pfVar9[-4] * pfVar9[-4];
        pfVar9[-3] = pfVar9[-3] * pfVar9[-3];
        pfVar9[-2] = pfVar9[-2] * pfVar9[-2];
        pfVar9[-1] = pfVar9[-1] * pfVar9[-1];
        *pfVar9 = *pfVar9 * *pfVar9;
        pfVar9[1] = pfVar9[1] * pfVar9[1];
        pfVar9[2] = pfVar9[2] * pfVar9[2];
        pfVar9[3] = pfVar9[3] * pfVar9[3];
        pfVar9[4] = pfVar9[4] * pfVar9[4];
        pfVar9[5] = pfVar9[5] * pfVar9[5];
        pfVar9[6] = pfVar9[6] * pfVar9[6];
        pfVar9[7] = pfVar9[7] * pfVar9[7];
        pfVar9 = pfVar9 + 0x10;
      } while ((int)uVar10 < (int)(uVar2 - uVar7));
      if (((byte)uVar12 & 0xf) < 2) goto LAB_1444b45b8;
    }
    uVar12 = uVar12 & 0x80000001;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffffe) + 1;
    }
    pfVar9 = pfVar3 + (int)uVar10;
    do {
      fVar14 = (float)*(undefined8 *)pfVar9;
      fVar15 = (float)((ulonglong)*(undefined8 *)pfVar9 >> 0x20);
      uVar10 = uVar10 + 2;
      *(ulonglong *)pfVar9 = CONCAT44(fVar15 * fVar15,fVar14 * fVar14);
      pfVar9 = pfVar9 + 2;
    } while ((int)uVar10 < (int)(uVar2 - uVar12));
  }
LAB_1444b45b8:
  lVar8 = (longlong)(int)uVar10;
  if (lVar8 < lVar13) {
    if (3 < lVar13 - lVar8) {
      lVar5 = lVar8 + 2;
      lVar11 = ((lVar13 - lVar8) - 4U >> 2) + 1;
      lVar8 = lVar8 + lVar11 * 4;
      pfVar9 = pfVar3 + lVar5;
      do {
        pfVar9[-2] = pfVar9[-2] * pfVar9[-2];
        pfVar9[-1] = pfVar9[-1] * pfVar9[-1];
        *pfVar9 = *pfVar9 * *pfVar9;
        pfVar9[1] = pfVar9[1] * pfVar9[1];
        lVar11 = lVar11 + -1;
        pfVar9 = pfVar9 + 4;
      } while (lVar11 != 0);
      if (lVar13 <= lVar8) goto LAB_1444b4658;
    }
    do {
      pfVar3[lVar8] = pfVar3[lVar8] * pfVar3[lVar8];
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar13);
  }
LAB_1444b4658:
  FCsvProfiler::EndStat("ArraySquareInPlace",uVar6);
  return;
}

// ArraySubtract @ 1444b4680

void __cdecl
Audio::ArraySubtract
          (TArrayView<float_const_,int> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<float,int> *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int *local_70;
  
  if (!__CsvProfilerStat1292) {
    FCsvProfilerTrace::OutputInlineStat("ArraySubtract",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1292 = true;
  }
  uVar12 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArraySubtract",_GCsvCategory_Audio_Dsp.Index,"CSV_ArraySubtract");
  uVar3 = param_1->ArrayNum;
  if (((uVar3 != param_2->ArrayNum) || (uVar3 != param_3->ArrayNum)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num == InSubtrahend.Num() && Num == OutBuffer.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x50f,
                          L"InMinuend, InSubtrahend, and OutBuffer must have equal Num elements (%d vs %d vs %d)"
                         ), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar17 = uVar3 & 0xfffffffc;
    if (uVar17 != 0) {
      uVar14 = 0;
      if (0 < (int)uVar17) {
        lVar16 = 0;
        do {
          uVar18 = ~uVar14 >> 0x1f;
          uVar15 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pfVar4 = param_1->DataPtr + lVar16;
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          fVar6 = pfVar4[2];
          fVar7 = pfVar4[3];
          uVar15 = 0;
          if ((int)uVar14 < param_2->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pfVar4 = param_2->DataPtr + lVar16;
          fVar8 = *pfVar4;
          fVar9 = pfVar4[1];
          fVar10 = pfVar4[2];
          fVar11 = pfVar4[3];
          uVar15 = 0;
          if ((int)uVar14 < param_3->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = uVar14 + 4;
          pfVar4 = param_3->DataPtr + lVar16;
          *pfVar4 = fVar1 - fVar8;
          pfVar4[1] = fVar2 - fVar9;
          pfVar4[2] = fVar6 - fVar10;
          pfVar4[3] = fVar7 - fVar11;
          lVar16 = lVar16 + 4;
        } while (lVar16 < (int)uVar17);
      }
    }
    local_70 = &param_3->ArrayNum;
    if ((uVar3 & 3) != 0) {
      for (lVar16 = (longlong)(int)uVar17; lVar16 < (int)uVar3; lVar16 = lVar16 + 1) {
        uVar15 = ~uVar17 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pfVar4 = param_1->DataPtr;
        uVar14 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar1 = pfVar4[lVar16];
        fVar2 = param_2->DataPtr[lVar16];
        uVar14 = 0;
        if ((int)uVar17 < *local_70) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar17 = uVar17 + 1;
        param_3->DataPtr[lVar16] = fVar1 - fVar2;
      }
    }
  }
  else {
    ::ArraySubtract(param_1->DataPtr,param_2->DataPtr,param_3->DataPtr,uVar3);
  }
  FCsvProfiler::EndStat("ArraySubtract",uVar12);
  return;
}

// ArraySubtractByConstantInPlace @ 1444b4a50

void __cdecl Audio::ArraySubtractByConstantInPlace(TArrayView<float,int> *param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  
  if (!__CsvProfilerStat1413) {
    FCsvProfilerTrace::OutputInlineStat
              ("ArraySubtractByConstantInPlace",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1413 = true;
  }
  uVar7 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArraySubtractByConstantInPlace",_GCsvCategory_Audio_Dsp.Index,
             "CSV_ArraySubtractByConstantInPlace");
  uVar2 = param_1->ArrayNum;
  lVar13 = (longlong)(int)uVar2;
  pfVar3 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar12 = uVar2 & 0xfffffffc;
    if ((uVar12 != 0) && (0 < (int)uVar12)) {
      lVar8 = 0;
      do {
        pfVar9 = pfVar3 + lVar8;
        fVar4 = pfVar9[1];
        fVar5 = pfVar9[2];
        fVar6 = pfVar9[3];
        pfVar1 = pfVar3 + lVar8;
        *pfVar1 = *pfVar9 - param_2;
        pfVar1[1] = fVar4 - param_2;
        pfVar1[2] = fVar5 - param_2;
        pfVar1[3] = fVar6 - param_2;
        lVar8 = lVar8 + 4;
      } while (lVar8 < (int)uVar12);
    }
    if ((uVar2 & 3) != 0) {
      if (((int)uVar12 < (int)uVar2) && (0xf < uVar2 - uVar12)) {
        lVar8 = (longlong)(int)uVar12;
        uVar10 = uVar2 - uVar12 & 0x8000000f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
        }
        pfVar9 = pfVar3 + lVar8 + 8;
        do {
          uVar12 = uVar12 + 0x10;
          lVar8 = lVar8 + 0x10;
          pfVar9[-8] = pfVar9[-8] - param_2;
          pfVar9[-7] = pfVar9[-7] - param_2;
          pfVar9[-6] = pfVar9[-6] - param_2;
          pfVar9[-5] = pfVar9[-5] - param_2;
          pfVar9[-4] = pfVar9[-4] - param_2;
          pfVar9[-3] = pfVar9[-3] - param_2;
          pfVar9[-2] = pfVar9[-2] - param_2;
          pfVar9[-1] = pfVar9[-1] - param_2;
          *pfVar9 = *pfVar9 - param_2;
          pfVar9[1] = pfVar9[1] - param_2;
          pfVar9[2] = pfVar9[2] - param_2;
          pfVar9[3] = pfVar9[3] - param_2;
          pfVar9[4] = pfVar9[4] - param_2;
          pfVar9[5] = pfVar9[5] - param_2;
          pfVar9[6] = pfVar9[6] - param_2;
          pfVar9[7] = pfVar9[7] - param_2;
          pfVar9 = pfVar9 + 0x10;
        } while (lVar8 < (int)(uVar2 - uVar10));
      }
      lVar8 = (longlong)(int)uVar12;
      if (lVar8 < lVar13) {
        if (3 < lVar13 - lVar8) {
          pfVar9 = pfVar3 + lVar8 + 2;
          lVar11 = ((lVar13 - lVar8) - 4U >> 2) + 1;
          lVar8 = lVar8 + lVar11 * 4;
          do {
            pfVar9[-2] = pfVar9[-2] - param_2;
            pfVar9[-1] = pfVar9[-1] - param_2;
            *pfVar9 = *pfVar9 - param_2;
            pfVar9[1] = pfVar9[1] - param_2;
            pfVar9 = pfVar9 + 4;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          if (lVar13 <= lVar8) goto LAB_1444b4c18;
        }
        do {
          pfVar3[lVar8] = pfVar3[lVar8] - param_2;
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar13);
      }
    }
  }
  else {
    ::ArraySubtractByConstantInPlace(pfVar3,param_2);
  }
LAB_1444b4c18:
  FCsvProfiler::EndStat("ArraySubtractByConstantInPlace",uVar7);
  return;
}

// ArraySubtractInPlace1 @ 1444b4c40

void __cdecl
Audio::ArraySubtractInPlace1(TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  
  if (!__CsvProfilerStat1332) {
    FCsvProfilerTrace::OutputInlineStat("ArraySubtractInPlace1",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1332 = true;
  }
  uVar12 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArraySubtractInPlace1",_GCsvCategory_Audio_Dsp.Index,"CSV_ArraySubtractInPlace1");
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InMinuend.Num() == InOutSubtrahend.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x535,L"Input buffers must be equal length"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = param_1->ArrayNum;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar17 = uVar3 & 0xfffffffc;
    if (uVar17 != 0) {
      uVar14 = 0;
      if (0 < (int)uVar17) {
        lVar16 = 0;
        do {
          uVar18 = ~uVar14 >> 0x1f;
          uVar15 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pfVar4 = param_1->DataPtr + lVar16;
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          fVar6 = pfVar4[2];
          fVar7 = pfVar4[3];
          uVar15 = 0;
          if ((int)uVar14 < param_2->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pfVar4 = param_2->DataPtr + lVar16;
          fVar8 = *pfVar4;
          fVar9 = pfVar4[1];
          fVar10 = pfVar4[2];
          fVar11 = pfVar4[3];
          uVar15 = 0;
          if ((int)uVar14 < param_2->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = uVar14 + 4;
          pfVar4 = param_2->DataPtr + lVar16;
          *pfVar4 = fVar1 - fVar8;
          pfVar4[1] = fVar2 - fVar9;
          pfVar4[2] = fVar6 - fVar10;
          pfVar4[3] = fVar7 - fVar11;
          lVar16 = lVar16 + 4;
        } while (lVar16 < (int)uVar17);
      }
    }
    if ((uVar3 & 3) != 0) {
      for (lVar16 = (longlong)(int)uVar17; lVar16 < (int)uVar3; lVar16 = lVar16 + 1) {
        uVar15 = ~uVar17 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pfVar4 = param_1->DataPtr;
        uVar14 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar1 = pfVar4[lVar16];
        fVar2 = param_2->DataPtr[lVar16];
        uVar14 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar17 = uVar17 + 1;
        param_2->DataPtr[lVar16] = fVar1 - fVar2;
      }
    }
  }
  else {
    ::ArraySubtractInPlace1(param_1->DataPtr,param_2->DataPtr,uVar3);
  }
  FCsvProfiler::EndStat("ArraySubtractInPlace1",uVar12);
  return;
}

// ArraySubtractInPlace2 @ 1444b4f90

void __cdecl
Audio::ArraySubtractInPlace2(TArrayView<float,int> *param_1,TArrayView<float_const_,int> *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  
  if (!__CsvProfilerStat1373) {
    FCsvProfilerTrace::OutputInlineStat("ArraySubtractInPlace2",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1373 = true;
  }
  uVar11 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArraySubtractInPlace2",_GCsvCategory_Audio_Dsp.Index,"CSV_ArraySubtractInPlace2");
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InOutMinuend.Num() == InSubtrahend.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x55e,L"Input buffers must be equal length"), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar15 = param_1->ArrayNum;
  lVar18 = (longlong)(int)uVar15;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar14 = uVar15 & 3;
    uVar16 = uVar15 & 0xfffffffc;
    if (uVar16 != 0) {
      uVar17 = 0;
      if (0 < (int)uVar16) {
        lVar20 = 0;
        do {
          uVar19 = ~uVar17 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar17 < (int)uVar15) {
            uVar13 = uVar19;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pfVar3 = param_1->DataPtr + lVar20;
          fVar1 = *pfVar3;
          fVar2 = pfVar3[1];
          fVar5 = pfVar3[2];
          fVar6 = pfVar3[3];
          uVar15 = 0;
          if ((int)uVar17 < param_2->ArrayNum) {
            uVar15 = uVar19;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar15 = param_1->ArrayNum;
          pfVar3 = param_2->DataPtr + lVar20;
          fVar7 = *pfVar3;
          fVar8 = pfVar3[1];
          fVar9 = pfVar3[2];
          fVar10 = pfVar3[3];
          uVar13 = 0;
          if ((int)uVar17 < (int)uVar15) {
            uVar13 = uVar19;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar17 = uVar17 + 4;
          pfVar3 = param_1->DataPtr + lVar20;
          *pfVar3 = fVar1 - fVar7;
          pfVar3[1] = fVar2 - fVar8;
          pfVar3[2] = fVar5 - fVar9;
          pfVar3[3] = fVar6 - fVar10;
          lVar20 = lVar20 + 4;
        } while (lVar20 < (int)uVar16);
      }
    }
    if (uVar14 != 0) {
      for (lVar20 = (longlong)(int)uVar16; lVar20 < lVar18; lVar20 = lVar20 + 1) {
        uVar17 = ~uVar16 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar16 < (int)uVar15) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pfVar3 = param_1->DataPtr;
        uVar15 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar15 = uVar17;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar1 = pfVar3[lVar20];
        uVar15 = param_1->ArrayNum;
        fVar2 = param_2->DataPtr[lVar20];
        uVar14 = 0;
        if ((int)uVar16 < (int)uVar15) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar16 = uVar16 + 1;
        param_1->DataPtr[lVar20] = fVar1 - fVar2;
      }
    }
  }
  else {
    ::ArraySubtractInPlace2(param_1->DataPtr,param_2->DataPtr,uVar15);
  }
  FCsvProfiler::EndStat("ArraySubtractInPlace2",uVar11);
  return;
}

// ArraySum @ 1444b5300

void __cdecl
Audio::ArraySum(TArrayView<float_const_,int> *param_1,TArrayView<float_const_,int> *param_2,
               TArrayView<float,int> *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  
  if (!__CsvProfilerStat92) {
    FCsvProfilerTrace::OutputInlineStat("ArraySum",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat92 = true;
  }
  uVar12 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArraySum",_GCsvCategory_Audio_Dsp.Index,"CSV_ArraySum");
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFloatBuffer1.Num() == InFloatBuffer2.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x5d,L"Input buffers must be equal length"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = param_1->ArrayNum;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar17 = uVar3 & 0xfffffffc;
    if (uVar17 != 0) {
      uVar14 = 0;
      if (0 < (int)uVar17) {
        lVar16 = 0;
        do {
          uVar18 = ~uVar14 >> 0x1f;
          uVar15 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pfVar4 = param_1->DataPtr + lVar16;
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          fVar6 = pfVar4[2];
          fVar7 = pfVar4[3];
          uVar15 = 0;
          if ((int)uVar14 < param_2->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pfVar4 = param_2->DataPtr + lVar16;
          fVar8 = *pfVar4;
          fVar9 = pfVar4[1];
          fVar10 = pfVar4[2];
          fVar11 = pfVar4[3];
          uVar15 = 0;
          if ((int)uVar14 < param_3->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = uVar14 + 4;
          pfVar4 = param_3->DataPtr + lVar16;
          *pfVar4 = fVar8 + fVar1;
          pfVar4[1] = fVar9 + fVar2;
          pfVar4[2] = fVar10 + fVar6;
          pfVar4[3] = fVar11 + fVar7;
          lVar16 = lVar16 + 4;
        } while (lVar16 < (int)uVar17);
      }
    }
    if ((uVar3 & 3) != 0) {
      for (lVar16 = (longlong)(int)uVar17; lVar16 < (int)uVar3; lVar16 = lVar16 + 1) {
        uVar15 = ~uVar17 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pfVar4 = param_1->DataPtr;
        uVar14 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar1 = pfVar4[lVar16];
        fVar2 = param_2->DataPtr[lVar16];
        uVar14 = 0;
        if ((int)uVar17 < param_3->ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar17 = uVar17 + 1;
        param_3->DataPtr[lVar16] = fVar1 + fVar2;
      }
    }
  }
  else {
    ArraySum2(param_1->DataPtr,param_2->DataPtr,param_3->DataPtr,uVar3);
  }
  FCsvProfiler::EndStat("ArraySum",uVar12);
  return;
}

// ArraySum @ 1444b5670

void __cdecl Audio::ArraySum(TArrayView<float_const_,int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (!__CsvProfilerStat48) {
    FCsvProfilerTrace::OutputInlineStat("ArraySum",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat48 = true;
  }
  uVar4 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArraySum",_GCsvCategory_Audio_Dsp.Index,"CSV_ArraySum");
  uVar2 = param_1->ArrayNum;
  *param_2 = 0.0;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar8 = uVar2 & 0xfffffffc;
    lVar9 = (longlong)(int)uVar8;
    if (uVar8 != 0) {
      uVar7 = 0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      if (0 < (int)uVar8) {
        lVar10 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar7 < (int)uVar2) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar7 = uVar7 + 4;
          pfVar1 = param_1->DataPtr + lVar10;
          lVar10 = lVar10 + 4;
          fVar11 = fVar11 + *pfVar1;
          fVar12 = fVar12 + pfVar1[1];
          fVar13 = fVar13 + pfVar1[2];
          fVar14 = fVar14 + pfVar1[3];
        } while (lVar10 < lVar9);
      }
      *param_2 = fVar11 + fVar12 + fVar13 + fVar14 + *param_2;
    }
    if ((uVar2 & 3) != 0) {
      for (; lVar9 < (int)uVar2; lVar9 = lVar9 + 1) {
        uVar7 = 0;
        if ((int)uVar8 < (int)uVar2) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = uVar8 + 1;
        *param_2 = param_1->DataPtr[lVar9] + *param_2;
      }
    }
  }
  else {
    ::ArraySum(param_1->DataPtr,param_2,uVar2);
  }
  FCsvProfiler::EndStat("ArraySum",uVar4);
  return;
}

// ArrayUnderflowClamp @ 1444b58a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Audio::ArrayUnderflowClamp(TArrayView<float,int> *param_1)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  longlong lVar18;
  float *pfVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  
  if (!__CsvProfilerStat1850) {
    FCsvProfilerTrace::OutputInlineStat("ArrayUnderflowClamp",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1850 = true;
  }
  uVar17 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat
            ("ArrayUnderflowClamp",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayUnderflowClamp");
  fVar16 = _UNK_150d5668c;
  fVar15 = _UNK_150d56688;
  fVar14 = _UNK_150d56684;
  fVar13 = ___xmm_80800000808000008080000080800000;
  fVar12 = _UNK_1508be49c;
  fVar23 = _UNK_1508be498;
  fVar11 = _UNK_1508be494;
  fVar10 = ___xmm_00800000008000000080000000800000;
  uVar1 = param_1->ArrayNum;
  lVar22 = (longlong)(int)uVar1;
  pfVar2 = param_1->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar20 = uVar1 & 0xfffffffc;
    if ((uVar20 != 0) && (0 < (int)uVar20)) {
      lVar18 = 0;
      do {
        pfVar19 = pfVar2 + lVar18;
        fVar6 = *pfVar19;
        fVar7 = pfVar19[1];
        fVar8 = pfVar19[2];
        fVar9 = pfVar19[3];
        uVar24 = -(uint)(fVar13 < fVar6 && fVar6 < fVar10);
        uVar25 = -(uint)(fVar14 < fVar7 && fVar7 < fVar11);
        uVar26 = -(uint)(fVar15 < fVar8 && fVar8 < fVar23);
        uVar27 = -(uint)(fVar16 < fVar9 && fVar9 < fVar12);
        uVar3 = GlobalVectorConstants::FloatZero.m128_u32[1];
        uVar4 = GlobalVectorConstants::FloatZero.m128_u32[2];
        uVar5 = GlobalVectorConstants::FloatZero.m128_u32[3];
        pfVar19 = pfVar2 + lVar18;
        *pfVar19 = (float)(uVar24 & GlobalVectorConstants::FloatZero.m128_u32[0] |
                          ~uVar24 & (uint)fVar6);
        pfVar19[1] = (float)(uVar25 & uVar3 | ~uVar25 & (uint)fVar7);
        pfVar19[2] = (float)(uVar26 & uVar4 | ~uVar26 & (uint)fVar8);
        pfVar19[3] = (float)(uVar27 & uVar5 | ~uVar27 & (uint)fVar9);
        lVar18 = lVar18 + 4;
      } while (lVar18 < (int)uVar20);
    }
    fVar11 = __real_80800000;
    fVar10 = __real_00800000;
    if (((uVar1 & 3) != 0) && (lVar18 = (longlong)(int)uVar20, lVar18 < lVar22)) {
      if (3 < lVar22 - lVar18) {
        pfVar19 = pfVar2 + lVar18 + 2;
        lVar21 = ((lVar22 - lVar18) - 4U >> 2) + 1;
        lVar18 = lVar18 + lVar21 * 4;
        do {
          fVar23 = pfVar19[-2];
          if ((fVar11 < fVar23) && (fVar23 < fVar10)) {
            fVar23 = 0.0;
          }
          pfVar19[-2] = fVar23;
          fVar23 = pfVar19[-1];
          if ((fVar11 < fVar23) && (fVar23 < fVar10)) {
            fVar23 = 0.0;
          }
          pfVar19[-1] = fVar23;
          fVar23 = *pfVar19;
          if ((fVar11 < fVar23) && (fVar23 < fVar10)) {
            fVar23 = 0.0;
          }
          *pfVar19 = fVar23;
          fVar23 = pfVar19[1];
          if ((fVar11 < fVar23) && (fVar23 < fVar10)) {
            fVar23 = 0.0;
          }
          pfVar19[1] = fVar23;
          pfVar19 = pfVar19 + 4;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        if (lVar22 <= lVar18) goto LAB_1444b5a41;
      }
      do {
        fVar23 = pfVar2[lVar18];
        if ((fVar11 < fVar23) && (fVar23 < fVar10)) {
          fVar23 = 0.0;
        }
        pfVar2[lVar18] = fVar23;
        lVar18 = lVar18 + 1;
      } while (lVar18 < lVar22);
    }
  }
  else {
    ::ArrayUnderflowClamp(pfVar2);
  }
LAB_1444b5a41:
  FCsvProfiler::EndStat("ArrayUnderflowClamp",uVar17);
  return;
}

// ArrayWeightedSum @ 1444b5a60

void __cdecl
Audio::ArrayWeightedSum
          (TArrayView<float_const_,int> *param_1,float param_2,TArrayView<float_const_,int> *param_3
          ,float param_4,TArrayView<float,int> *param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  bool bVar25;
  int iVar26;
  float *pfVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  
  if (!__CsvProfilerStat1992) {
    FCsvProfilerTrace::OutputInlineStat("ArrayWeightedSum",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat1992 = true;
  }
  uVar24 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayWeightedSum",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayWeightedSum");
  if ((param_1->ArrayNum != param_3->ArrayNum) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBuffer1.Num() == InBuffer2.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x7ca,L"Buffers must be equal length"), bVar25)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = param_1->ArrayNum;
  lVar33 = (longlong)(int)uVar3;
  pfVar4 = param_1->DataPtr;
  pfVar5 = param_3->DataPtr;
  pfVar6 = param_5->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar31 = uVar3 & 0xfffffffc;
    if ((uVar31 != 0) && (0 < (int)uVar31)) {
      lVar29 = ((longlong)(int)uVar31 - 1U >> 2) + 1;
      pfVar27 = pfVar4;
      do {
        pfVar1 = (float *)((longlong)pfVar27 + ((longlong)pfVar5 - (longlong)pfVar4));
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        fVar11 = pfVar27[1];
        fVar12 = pfVar27[2];
        fVar13 = pfVar27[3];
        pfVar2 = (float *)((longlong)pfVar27 + ((longlong)pfVar6 - (longlong)pfVar4));
        *pfVar2 = *pfVar1 * param_4 + *pfVar27 * param_2;
        pfVar2[1] = fVar8 * param_4 + fVar11 * param_2;
        pfVar2[2] = fVar9 * param_4 + fVar12 * param_2;
        pfVar2[3] = fVar10 * param_4 + fVar13 * param_2;
        pfVar27 = pfVar27 + 4;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
    if ((uVar3 & 3) != 0) {
      if (((int)uVar31 < (int)uVar3) && (0xf < uVar3 - uVar31)) {
        iVar26 = uVar3 - 1;
        lVar29 = (longlong)(int)uVar31;
        if (((pfVar5 + iVar26 < pfVar6 + lVar29) || (pfVar6 + iVar26 < pfVar5 + lVar29)) &&
           ((pfVar4 + iVar26 < pfVar6 + lVar29 || (pfVar6 + iVar26 < pfVar4 + lVar29)))) {
          uVar28 = uVar3 - uVar31 & 0x8000000f;
          if ((int)uVar28 < 0) {
            uVar28 = (uVar28 - 1 | 0xfffffff0) + 1;
          }
          lVar30 = (longlong)pfVar5 - (longlong)pfVar4;
          lVar32 = (longlong)pfVar6 - (longlong)pfVar4;
          pfVar27 = pfVar4 + lVar29 + 4;
          do {
            pfVar2 = (float *)(lVar30 + -0x10 + (longlong)pfVar27);
            fVar8 = pfVar2[1];
            fVar9 = pfVar2[2];
            fVar10 = pfVar2[3];
            uVar31 = uVar31 + 0x10;
            lVar29 = lVar29 + 0x10;
            fVar11 = pfVar27[-3];
            fVar12 = pfVar27[-2];
            fVar13 = pfVar27[-1];
            pfVar1 = (float *)(lVar30 + (longlong)pfVar27);
            fVar14 = *pfVar1;
            fVar15 = pfVar1[1];
            fVar16 = pfVar1[2];
            fVar17 = pfVar1[3];
            fVar18 = *pfVar27;
            fVar19 = pfVar27[1];
            fVar20 = pfVar27[2];
            fVar21 = pfVar27[3];
            pfVar1 = (float *)(lVar32 + -0x10 + (longlong)pfVar27);
            *pfVar1 = *pfVar2 * param_4 + pfVar27[-4] * param_2;
            pfVar1[1] = fVar8 * param_4 + fVar11 * param_2;
            pfVar1[2] = fVar9 * param_4 + fVar12 * param_2;
            pfVar1[3] = fVar10 * param_4 + fVar13 * param_2;
            pfVar1 = (float *)(lVar30 + 0x10 + (longlong)pfVar27);
            fVar8 = *pfVar1;
            fVar9 = pfVar1[1];
            fVar10 = pfVar1[2];
            fVar11 = pfVar1[3];
            fVar12 = pfVar27[4];
            fVar13 = pfVar27[5];
            fVar22 = pfVar27[6];
            fVar23 = pfVar27[7];
            pfVar1 = (float *)(lVar32 + (longlong)pfVar27);
            *pfVar1 = fVar14 * param_4 + fVar18 * param_2;
            pfVar1[1] = fVar15 * param_4 + fVar19 * param_2;
            pfVar1[2] = fVar16 * param_4 + fVar20 * param_2;
            pfVar1[3] = fVar17 * param_4 + fVar21 * param_2;
            pfVar1 = (float *)(lVar30 + 0x20 + (longlong)pfVar27);
            fVar14 = *pfVar1;
            fVar15 = pfVar1[1];
            fVar16 = pfVar1[2];
            fVar17 = pfVar1[3];
            fVar18 = pfVar27[8];
            fVar19 = pfVar27[9];
            fVar20 = pfVar27[10];
            fVar21 = pfVar27[0xb];
            pfVar1 = (float *)(lVar32 + 0x10 + (longlong)pfVar27);
            *pfVar1 = fVar8 * param_4 + fVar12 * param_2;
            pfVar1[1] = fVar9 * param_4 + fVar13 * param_2;
            pfVar1[2] = fVar10 * param_4 + fVar22 * param_2;
            pfVar1[3] = fVar11 * param_4 + fVar23 * param_2;
            pfVar1 = (float *)(lVar32 + 0x20 + (longlong)pfVar27);
            *pfVar1 = fVar14 * param_4 + fVar18 * param_2;
            pfVar1[1] = fVar15 * param_4 + fVar19 * param_2;
            pfVar1[2] = fVar16 * param_4 + fVar20 * param_2;
            pfVar1[3] = fVar17 * param_4 + fVar21 * param_2;
            pfVar27 = pfVar27 + 0x10;
          } while (lVar29 < (int)(uVar3 - uVar28));
        }
      }
      lVar29 = (longlong)(int)uVar31;
      if (lVar29 < lVar33) {
        if (3 < lVar33 - lVar29) {
          pfVar27 = pfVar5 + lVar29 + 1;
          lVar32 = (longlong)pfVar4 - (longlong)pfVar5;
          lVar34 = (longlong)pfVar6 - (longlong)pfVar5;
          lVar30 = ((lVar33 - lVar29) - 4U >> 2) + 1;
          lVar29 = lVar29 + lVar30 * 4;
          do {
            *(float *)((longlong)pfVar27 + lVar34 + -4) =
                 param_4 * pfVar27[-1] + param_2 * *(float *)((longlong)pfVar27 + lVar32 + -4);
            *(float *)((longlong)pfVar27 + lVar34) =
                 param_2 * *(float *)((longlong)pfVar27 + lVar32) + param_4 * *pfVar27;
            *(float *)((longlong)pfVar27 + lVar34 + 4) =
                 param_4 * pfVar27[1] + param_2 * *(float *)((longlong)pfVar27 + lVar32 + 4);
            *(float *)((longlong)pfVar27 + lVar34 + 8) =
                 param_4 * pfVar27[2] + param_2 * *(float *)((longlong)pfVar27 + lVar32 + 8);
            pfVar27 = pfVar27 + 4;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          if (lVar33 <= lVar29) goto LAB_1444b5dd5;
        }
        pfVar27 = pfVar5 + lVar29;
        lVar33 = lVar33 - lVar29;
        do {
          *(float *)(((longlong)pfVar6 - (longlong)pfVar5) + (longlong)pfVar27) =
               param_2 * *(float *)(((longlong)pfVar4 - (longlong)pfVar5) + (longlong)pfVar27) +
               param_4 * *pfVar27;
          pfVar27 = pfVar27 + 1;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
      }
    }
  }
  else {
    ArrayWeightedSumTwoGain(pfVar4,param_2,pfVar5,param_4,pfVar6,uVar3);
  }
LAB_1444b5dd5:
  FCsvProfiler::EndStat("ArrayWeightedSum",uVar24);
  return;
}

// ArrayWeightedSum @ 1444b5e10

void __cdecl
Audio::ArrayWeightedSum
          (TArrayView<float_const_,int> *param_1,float param_2,TArrayView<float_const_,int> *param_3
          ,TArrayView<float,int> *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  bool bVar27;
  int iVar28;
  float *pfVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  
  if (!__CsvProfilerStat2044) {
    FCsvProfilerTrace::OutputInlineStat("ArrayWeightedSum",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat2044 = true;
  }
  uVar26 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("ArrayWeightedSum",_GCsvCategory_Audio_Dsp.Index,"CSV_ArrayWeightedSum");
  if (((param_1->ArrayNum != param_3->ArrayNum) || (param_1->ArrayNum != param_4->ArrayNum)) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBuffer1.Num() == InBuffer2.Num() && InBuffer1.Num() == OutBuffer.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0x7fd,L"Buffers must be equal length"), bVar27)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = param_1->ArrayNum;
  lVar35 = (longlong)(int)uVar3;
  pfVar4 = param_1->DataPtr;
  pfVar5 = param_4->DataPtr;
  pfVar6 = param_3->DataPtr;
  if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
    uVar33 = uVar3 & 0xfffffffc;
    if ((uVar33 != 0) && (0 < (int)uVar33)) {
      lVar31 = ((longlong)(int)uVar33 - 1U >> 2) + 1;
      pfVar29 = pfVar6;
      do {
        pfVar1 = (float *)((longlong)pfVar29 + ((longlong)pfVar4 - (longlong)pfVar6));
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        fVar11 = pfVar29[1];
        fVar12 = pfVar29[2];
        fVar13 = pfVar29[3];
        pfVar2 = (float *)((longlong)pfVar29 + ((longlong)pfVar5 - (longlong)pfVar6));
        *pfVar2 = *pfVar1 * param_2 + *pfVar29;
        pfVar2[1] = fVar8 * param_2 + fVar11;
        pfVar2[2] = fVar9 * param_2 + fVar12;
        pfVar2[3] = fVar10 * param_2 + fVar13;
        pfVar29 = pfVar29 + 4;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
    }
    if ((uVar3 & 3) != 0) {
      if (((int)uVar33 < (int)uVar3) && (0xf < uVar3 - uVar33)) {
        iVar28 = uVar3 - 1;
        lVar31 = (longlong)(int)uVar33;
        if (((pfVar6 + iVar28 < pfVar5 + lVar31) || (pfVar5 + iVar28 < pfVar6 + lVar31)) &&
           ((pfVar4 + iVar28 < pfVar5 + lVar31 || (pfVar5 + iVar28 < pfVar4 + lVar31)))) {
          uVar30 = uVar3 - uVar33 & 0x8000000f;
          if ((int)uVar30 < 0) {
            uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
          }
          lVar32 = (longlong)pfVar4 - (longlong)pfVar6;
          lVar34 = (longlong)pfVar5 - (longlong)pfVar6;
          pfVar29 = pfVar6 + lVar31 + 4;
          do {
            fVar8 = pfVar29[-3];
            fVar9 = pfVar29[-2];
            fVar10 = pfVar29[-1];
            uVar33 = uVar33 + 0x10;
            lVar31 = lVar31 + 0x10;
            pfVar2 = (float *)(lVar32 + -0x10 + (longlong)pfVar29);
            fVar11 = pfVar2[1];
            fVar12 = pfVar2[2];
            fVar13 = pfVar2[3];
            pfVar1 = (float *)(lVar32 + (longlong)pfVar29);
            fVar14 = *pfVar1;
            fVar15 = pfVar1[1];
            fVar16 = pfVar1[2];
            fVar17 = pfVar1[3];
            fVar18 = *pfVar29;
            fVar19 = pfVar29[1];
            fVar20 = pfVar29[2];
            fVar21 = pfVar29[3];
            fVar22 = pfVar29[4];
            fVar23 = pfVar29[5];
            fVar24 = pfVar29[6];
            fVar25 = pfVar29[7];
            pfVar1 = (float *)(lVar34 + -0x10 + (longlong)pfVar29);
            *pfVar1 = *pfVar2 * param_2 + pfVar29[-4];
            pfVar1[1] = fVar11 * param_2 + fVar8;
            pfVar1[2] = fVar12 * param_2 + fVar9;
            pfVar1[3] = fVar13 * param_2 + fVar10;
            pfVar1 = (float *)(lVar32 + 0x10 + (longlong)pfVar29);
            fVar8 = *pfVar1;
            fVar9 = pfVar1[1];
            fVar10 = pfVar1[2];
            fVar11 = pfVar1[3];
            pfVar1 = (float *)(lVar34 + (longlong)pfVar29);
            *pfVar1 = fVar14 * param_2 + fVar18;
            pfVar1[1] = fVar15 * param_2 + fVar19;
            pfVar1[2] = fVar16 * param_2 + fVar20;
            pfVar1[3] = fVar17 * param_2 + fVar21;
            pfVar1 = (float *)(lVar32 + 0x20 + (longlong)pfVar29);
            fVar12 = *pfVar1;
            fVar13 = pfVar1[1];
            fVar14 = pfVar1[2];
            fVar15 = pfVar1[3];
            fVar16 = pfVar29[8];
            fVar17 = pfVar29[9];
            fVar18 = pfVar29[10];
            fVar19 = pfVar29[0xb];
            pfVar1 = (float *)(lVar34 + 0x10 + (longlong)pfVar29);
            *pfVar1 = fVar8 * param_2 + fVar22;
            pfVar1[1] = fVar9 * param_2 + fVar23;
            pfVar1[2] = fVar10 * param_2 + fVar24;
            pfVar1[3] = fVar11 * param_2 + fVar25;
            pfVar1 = (float *)(lVar34 + 0x20 + (longlong)pfVar29);
            *pfVar1 = fVar12 * param_2 + fVar16;
            pfVar1[1] = fVar13 * param_2 + fVar17;
            pfVar1[2] = fVar14 * param_2 + fVar18;
            pfVar1[3] = fVar15 * param_2 + fVar19;
            pfVar29 = pfVar29 + 0x10;
          } while (lVar31 < (int)(uVar3 - uVar30));
        }
      }
      lVar31 = (longlong)(int)uVar33;
      if (lVar31 < lVar35) {
        if (3 < lVar35 - lVar31) {
          pfVar29 = pfVar6 + lVar31 + 1;
          lVar32 = (longlong)pfVar4 - (longlong)pfVar6;
          lVar34 = (longlong)pfVar5 - (longlong)pfVar6;
          lVar36 = ((lVar35 - lVar31) - 4U >> 2) + 1;
          lVar31 = lVar31 + lVar36 * 4;
          do {
            *(float *)((longlong)pfVar29 + lVar34 + -4) =
                 param_2 * *(float *)((longlong)pfVar29 + lVar32 + -4) + pfVar29[-1];
            *(float *)((longlong)pfVar29 + lVar34) =
                 param_2 * *(float *)((longlong)pfVar29 + lVar32) + *pfVar29;
            *(float *)((longlong)pfVar29 + lVar34 + 4) =
                 param_2 * *(float *)((longlong)pfVar29 + lVar32 + 4) + pfVar29[1];
            *(float *)((longlong)pfVar29 + lVar34 + 8) =
                 param_2 * *(float *)((longlong)pfVar29 + lVar32 + 8) + pfVar29[2];
            pfVar29 = pfVar29 + 4;
            lVar36 = lVar36 + -1;
          } while (lVar36 != 0);
          if (lVar35 <= lVar31) goto LAB_1444b60f5;
        }
        pfVar29 = pfVar6 + lVar31;
        lVar35 = lVar35 - lVar31;
        do {
          *(float *)(((longlong)pfVar5 - (longlong)pfVar6) + (longlong)pfVar29) =
               param_2 * *(float *)(((longlong)pfVar4 - (longlong)pfVar6) + (longlong)pfVar29) +
               *pfVar29;
          pfVar29 = pfVar29 + 1;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
      }
    }
  }
  else {
    ArrayWeightedSumOneGain(pfVar4,param_2,pfVar6,pfVar5,uVar3);
  }
LAB_1444b60f5:
  FCsvProfiler::EndStat("ArrayWeightedSum",uVar26);
  return;
}

// BreakWhenAudible @ 1444b6950

void __cdecl BreakWhenAudible(float *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  if (param_2 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = param_2;
  local_18.DataPtr = param_1;
  fVar3 = Audio::ArrayGetAverageAbsValue(&local_18);
  if (AudibilityThreshold < fVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// BreakWhenTooLoud @ 1444b69c0

void __cdecl BreakWhenTooLoud(float *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  if (param_2 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = param_2;
  local_18.DataPtr = param_1;
  fVar3 = Audio::ArrayGetAverageAbsValue(&local_18);
  if (PainThreshold < fVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// BufferDeinterleave2ChannelFast @ 1444b6a30

void __cdecl
Audio::BufferDeinterleave2ChannelFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  
  uVar15 = param_1->ArrayNum / 2;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  lVar17 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar15,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar15,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar15,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar15,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
  pFVar3 = (param_3->AllocatorInstance).Data;
  pFVar4 = (param_2->AllocatorInstance).Data;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if ((int)uVar15 < 4) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InNumFrames >= (4)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                        ,0x4d2,L"Buffer must have at least %i elements.");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar16 = uVar15 & 0x80000003;
  if ((int)uVar16 < 0) {
    uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
  }
  if (uVar16 != 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("0 == (InNumFrames % (4))",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                        ,0x4d3,L"Buffer length be a multiple of %i.");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (0 < (int)(uVar15 * 2)) {
    pFVar18 = pFVar3;
    do {
      pFVar1 = pFVar5 + lVar17 * 4;
      uVar7 = *(undefined4 *)(pFVar1 + 4);
      uVar8 = *(undefined4 *)(pFVar1 + 8);
      uVar9 = *(undefined4 *)(pFVar1 + 0xc);
      pFVar2 = pFVar5 + lVar17 * 4 + 0x10;
      uVar10 = *(undefined4 *)pFVar2;
      uVar11 = *(undefined4 *)(pFVar2 + 4);
      uVar12 = *(undefined4 *)(pFVar2 + 8);
      uVar13 = *(undefined4 *)(pFVar2 + 0xc);
      lVar17 = lVar17 + 8;
      pFVar2 = pFVar18 + ((longlong)pFVar4 - (longlong)pFVar3);
      *(undefined4 *)pFVar2 = *(undefined4 *)pFVar1;
      *(undefined4 *)(pFVar2 + 4) = uVar8;
      *(undefined4 *)(pFVar2 + 8) = uVar10;
      *(undefined4 *)(pFVar2 + 0xc) = uVar12;
      *(undefined4 *)pFVar18 = uVar7;
      *(undefined4 *)(pFVar18 + 4) = uVar9;
      *(undefined4 *)(pFVar18 + 8) = uVar11;
      *(undefined4 *)(pFVar18 + 0xc) = uVar13;
      pFVar18 = pFVar18 + 0x10;
    } while (lVar17 < (int)(uVar15 * 2));
  }
  return;
}

// BufferDeinterleave2ChannelFast @ 1444b6bf0

void __cdecl
Audio::BufferDeinterleave2ChannelFast(float *param_1,float *param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  float *pfVar14;
  
  if (param_4 < 4) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InNumFrames >= (4)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                        ,0x4d2,L"Buffer must have at least %i elements.");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar12 = param_4 & 0x80000003;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
  }
  if (uVar12 != 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("0 == (InNumFrames % (4))",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                        ,0x4d3,L"Buffer length be a multiple of %i.");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (0 < param_4 * 2) {
    lVar13 = 0;
    pfVar14 = param_3;
    do {
      pfVar2 = param_1 + lVar13;
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      pfVar1 = param_1 + lVar13 + 4;
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      lVar13 = lVar13 + 8;
      pfVar1 = (float *)((longlong)pfVar14 + ((longlong)param_2 - (longlong)param_3));
      *pfVar1 = *pfVar2;
      pfVar1[1] = fVar5;
      pfVar1[2] = fVar7;
      pfVar1[3] = fVar9;
      *pfVar14 = fVar4;
      pfVar14[1] = fVar6;
      pfVar14[2] = fVar8;
      pfVar14[3] = fVar10;
      pfVar14 = pfVar14 + 4;
    } while (lVar13 < param_4 * 2);
  }
  return;
}

// BufferInterleave2ChannelFast @ 1444b6cf0

void __cdecl
Audio::BufferInterleave2ChannelFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InBuffer1.Num() == InBuffer2.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                        ,0x496,L"InBuffer1 Num not equal to InBuffer2 Num");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar2 = param_1->ArrayNum;
  uVar14 = uVar2 * 2;
  if (-1 < (int)uVar14) {
    lVar18 = 0;
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < (int)uVar14) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar14,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar14,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
    pFVar3 = (param_3->AllocatorInstance).Data;
    pFVar16 = (param_2->AllocatorInstance).Data;
    pFVar4 = (param_1->AllocatorInstance).Data;
    if ((int)uVar2 < 4) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNum >= 4",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                          ,0x4a3,L"Buffer must have at least %i elements.");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar14 = uVar2 & 0x80000003;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
    }
    if (uVar14 != 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 == (InNum % (4))",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                          ,0x4a4,L"Buffer length be a multiple of %i.");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (0 < (int)uVar2) {
      lVar17 = (longlong)pFVar4 - (longlong)pFVar16;
      lVar15 = ((longlong)(int)uVar2 - 1U >> 2) + 1;
      do {
        lVar18 = lVar18 + 8;
        pFVar4 = pFVar16 + lVar17;
        uVar6 = *(undefined4 *)(pFVar4 + 4);
        uVar7 = *(undefined4 *)(pFVar4 + 8);
        uVar8 = *(undefined4 *)(pFVar4 + 0xc);
        uVar9 = *(undefined4 *)pFVar16;
        uVar10 = *(undefined4 *)(pFVar16 + 4);
        uVar11 = *(undefined4 *)(pFVar16 + 8);
        uVar12 = *(undefined4 *)(pFVar16 + 0xc);
        pFVar16 = pFVar16 + 0x10;
        pFVar1 = pFVar3 + lVar18 * 4 + -0x20;
        *(undefined4 *)pFVar1 = *(undefined4 *)pFVar4;
        *(undefined4 *)(pFVar1 + 4) = uVar9;
        *(undefined4 *)(pFVar1 + 8) = uVar6;
        *(undefined4 *)(pFVar1 + 0xc) = uVar10;
        pFVar4 = pFVar3 + lVar18 * 4 + -0x10;
        *(undefined4 *)pFVar4 = uVar7;
        *(undefined4 *)(pFVar4 + 4) = uVar11;
        *(undefined4 *)(pFVar4 + 8) = uVar8;
        *(undefined4 *)(pFVar4 + 0xc) = uVar12;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
}

// BufferInterleave2ChannelFast @ 1444b6ea0

void __cdecl
Audio::BufferInterleave2ChannelFast(float *param_1,float *param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  if (param_4 < 4) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InNum >= 4",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                        ,0x4a3,L"Buffer must have at least %i elements.");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar12 = param_4 & 0x80000003;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
  }
  if (uVar12 != 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("0 == (InNum % (4))",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                        ,0x4a4,L"Buffer length be a multiple of %i.");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (0 < param_4) {
    lVar15 = (longlong)param_1 - (longlong)param_2;
    lVar13 = ((longlong)param_4 - 1U >> 2) + 1;
    lVar14 = 0;
    do {
      pfVar1 = (float *)(lVar15 + (longlong)param_2);
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      fVar7 = *param_2;
      fVar8 = param_2[1];
      fVar9 = param_2[2];
      fVar10 = param_2[3];
      param_2 = param_2 + 4;
      pfVar2 = param_3 + lVar14;
      *pfVar2 = *pfVar1;
      pfVar2[1] = fVar7;
      pfVar2[2] = fVar4;
      pfVar2[3] = fVar8;
      pfVar1 = param_3 + lVar14 + 4;
      *pfVar1 = fVar5;
      pfVar1[1] = fVar9;
      pfVar1[2] = fVar6;
      pfVar1[3] = fVar10;
      lVar13 = lVar13 + -1;
      lVar14 = lVar14 + 8;
    } while (lVar13 != 0);
  }
  return;
}

// BufferSum2ChannelToMonoFast @ 1444b6fa0

void __cdecl
Audio::BufferSum2ChannelToMonoFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  
  uVar12 = param_1->ArrayNum / 2;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  lVar14 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar12,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar12,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
  pFVar15 = (param_2->AllocatorInstance).Data;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (((int)uVar12 < 4) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNumFrames >= (4)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                          ,0x4f8,L"Buffer must have at least %i elements."), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar13 = uVar12 & 0x80000003;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar13 != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 == (InNumFrames % (4))",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                          ,0x4f9,L"Buffer length be a multiple of %i."), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < (int)(uVar12 * 2)) {
    do {
      pFVar2 = pFVar3 + lVar14 * 4;
      fVar5 = *(float *)(pFVar2 + 8);
      fVar6 = *(float *)(pFVar2 + 0xc);
      pFVar1 = pFVar3 + lVar14 * 4 + 0x10;
      fVar7 = *(float *)pFVar1;
      fVar8 = *(float *)(pFVar1 + 4);
      fVar9 = *(float *)(pFVar1 + 8);
      fVar10 = *(float *)(pFVar1 + 0xc);
      lVar14 = lVar14 + 8;
      *(float *)pFVar15 = *(float *)(pFVar2 + 4) + *(float *)pFVar2;
      *(float *)(pFVar15 + 4) = fVar6 + fVar5;
      *(float *)(pFVar15 + 8) = fVar8 + fVar7;
      *(float *)(pFVar15 + 0xc) = fVar10 + fVar9;
      pFVar15 = pFVar15 + 0x10;
    } while (lVar14 < (int)(uVar12 * 2));
  }
  return;
}

// BufferSum2ChannelToMonoFast @ 1444b7100

void __cdecl Audio::BufferSum2ChannelToMonoFast(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  
  if (param_3 < 4) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InNumFrames >= (4)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                        ,0x4f8,L"Buffer must have at least %i elements.");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar11 = param_3 & 0x80000003;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
  }
  if (uVar11 != 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("0 == (InNumFrames % (4))",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                        ,0x4f9,L"Buffer length be a multiple of %i.");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (0 < param_3 * 2) {
    lVar12 = 0;
    do {
      pfVar1 = param_1 + lVar12;
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar2 = param_1 + lVar12 + 4;
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      lVar12 = lVar12 + 8;
      *param_2 = pfVar1[1] + *pfVar1;
      param_2[1] = fVar5 + fVar4;
      param_2[2] = fVar7 + fVar6;
      param_2[3] = fVar9 + fVar8;
      param_2 = param_2 + 4;
    } while (lVar12 < param_3 * 2);
  }
  return;
}

// CeilLog2 @ 1444b7ef0

int __cdecl Audio::CeilLog2(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = 0;
  if (1 < param_1) {
    do {
      if (0x3fffffff < iVar2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = 1 << ((byte)iVar1 & 0x1f);
    } while (iVar2 < param_1);
  }
  return iVar1;
}

// CheckBuffer @ 1444b7f20

bool __cdecl
Audio::CheckBuffer(TArrayView<float_const_,int> *param_1,ECheckBufferFlags param_2,
                  ECheckBufferFlags *param_3)

{
  float fVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ECheckBufferFlags EVar10;
  ECheckBufferFlags EVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  <lambda_1> local_res10;
  TArrayView<float_const_,int> local_78;
  float *local_68;
  undefined8 uStack_60;
  
  uVar12 = 0;
  EVar10 = None;
  *param_3 = None;
  if (param_2 == All) {
    uVar6 = AlgoImpl::
            IndexOfByPredicate<TArrayView<float_const_,int>,_Audio::CheckBuffer_::__l5::<lambda_1>_>
                      (param_1,local_res10);
    pfVar2 = param_1->DataPtr;
    if ((uVar6 == 0xffffffff) || (param_1->ArrayNum == 0)) {
      EVar11 = None;
    }
    else {
      uVar7 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      fVar1 = pfVar2[(int)uVar6];
      if ((((uint)fVar1 & 0x7f800000) == 0) && (((uint)fVar1 & 0x7fffff) != 0)) {
        EVar10 = Denormalized;
      }
      iVar8 = _isnan((double)fVar1);
      EVar11 = EVar10 | Nan;
      if (iVar8 == 0) {
        EVar11 = EVar10;
      }
      if ((((uint)fVar1 & 0x7f800000) == 0x7f800000) && (((uint)fVar1 & 0x7fffff) == 0)) {
        *param_3 = EVar11 | Infinity;
        return uVar6 == 0xffffffff;
      }
    }
    *param_3 = EVar11;
    return uVar6 == 0xffffffff;
  }
  if (param_2 == (Nan|Infinity)) {
    iVar8 = param_1->ArrayNum;
    pfVar2 = param_1->DataPtr;
    uVar14 = uVar12;
    if (0 < (longlong)iVar8) {
      do {
        iVar13 = (int)uVar12;
        iVar9 = _finite((double)pfVar2[uVar14]);
        if (iVar9 == 0) goto LAB_1444b80c2;
        uVar12 = (ulonglong)(iVar13 + 1);
        uVar14 = uVar14 + 1;
      } while ((longlong)uVar14 < (longlong)iVar8);
    }
    iVar13 = -1;
LAB_1444b80c2:
    local_78.DataPtr = param_1->DataPtr;
    local_78.ArrayNum = param_1->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
    EVar10 = ClassifyFailure(&local_78,iVar13);
    bVar4 = iVar13 == -1;
    *param_3 = EVar10;
  }
  else {
    if ((param_2 & Nan) != None) {
      iVar8 = (int)*(undefined8 *)&param_1->ArrayNum;
      pfVar2 = param_1->DataPtr;
      uStack_60 = *(undefined8 *)&param_1->ArrayNum;
      uVar14 = uVar12;
      uVar15 = uVar12;
      local_68 = pfVar2;
      if (0 < iVar8) {
        do {
          iVar9 = _isnan((double)pfVar2[uVar15]);
          if (iVar9 != 0) {
            if ((int)uVar14 != -1) {
              *param_3 = *param_3 | Nan;
              return false;
            }
            break;
          }
          uVar15 = uVar15 + 1;
          uVar14 = (ulonglong)((int)uVar14 + 1);
        } while ((longlong)uVar15 < (longlong)iVar8);
      }
    }
    if ((param_2 & Denormalized) != None) {
      iVar8 = (int)*(undefined8 *)&param_1->ArrayNum;
      uVar14 = uVar12;
      uVar15 = uVar12;
      if (0 < iVar8) {
        do {
          if ((((uint)param_1->DataPtr[uVar14] & 0x7f800000) == 0) &&
             (((uint)param_1->DataPtr[uVar14] & 0x7fffff) != 0)) {
            if ((int)uVar15 != -1) {
              *param_3 = *param_3 | Denormalized;
              return false;
            }
            break;
          }
          uVar14 = uVar14 + 1;
          uVar15 = (ulonglong)((int)uVar15 + 1);
        } while ((longlong)uVar14 < (longlong)iVar8);
      }
    }
    if ((param_2 & Infinity) != None) {
      iVar8 = (int)*(undefined8 *)&param_1->ArrayNum;
      uVar14 = uVar12;
      if (0 < iVar8) {
        do {
          if ((((uint)param_1->DataPtr[uVar12] & 0x7f800000) == 0x7f800000) &&
             (((uint)param_1->DataPtr[uVar12] & 0x7fffff) == 0)) {
            if ((int)uVar14 != -1) {
              *param_3 = *param_3 | Infinity;
              return false;
            }
            break;
          }
          uVar12 = uVar12 + 1;
          uVar14 = (ulonglong)((int)uVar14 + 1);
        } while ((longlong)uVar12 < (longlong)iVar8);
      }
    }
    bVar4 = true;
  }
  return bVar4;
}

// ClassifyFailure @ 1444b83a0

ECheckBufferFlags __cdecl Audio::ClassifyFailure(TArrayView<float_const_,int> *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  ECheckBufferFlags EVar4;
  ECheckBufferFlags EVar5;
  
  if ((param_2 != -1) && (param_1->ArrayNum != 0)) {
    pfVar3 = TArrayView<float_const_,int>::operator[](param_1,param_2);
    fVar1 = *pfVar3;
    if ((((uint)fVar1 & 0x7f800000) == 0) && (((uint)fVar1 & 0x7fffff) != 0)) {
      EVar5 = Denormalized;
    }
    else {
      EVar5 = None;
    }
    iVar2 = _isnan((double)fVar1);
    EVar4 = EVar5 | Nan;
    if (iVar2 == 0) {
      EVar4 = EVar5;
    }
    if ((((uint)fVar1 & 0x7f800000) == 0x7f800000) && (((uint)fVar1 & 0x7fffff) == 0)) {
      EVar4 = EVar4 | Infinity;
    }
    return EVar4;
  }
  return None;
}

// ComputeNextLinearAttenuation @ 1444b8b00

float __cdecl
Audio::ComputeNextLinearAttenuation(FAudioBufferDistanceAttenuationSettings *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float local_res10 [6];
  
  fVar3 = __real_3f800000;
  dVar5 = (param_1->DistanceRange).field0_0x0._s_0.Y - (param_1->DistanceRange).field0_0x0._s_0.X;
  local_res10[0] = 0.0;
  if (dVar5 <= __real_3e45798ee0000000) {
    dVar5 = __real_3e45798ee0000000;
  }
  dVar5 = ((double)param_2 - (param_1->DistanceRange).field0_0x0._s_0.X) / (double)(float)dVar5;
  if (__real_3ff0000000000000 <= dVar5) {
    dVar5 = __real_3ff0000000000000;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if ((param_1->AttenuationCurve).Points.ArrayNum < 1) {
    fVar4 = __real_3f800000 - (float)dVar5;
  }
  else {
    bVar2 = FLinearCurve::Eval(&param_1->AttenuationCurve,(float)dVar5,local_res10);
    fVar4 = local_res10[0];
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccess",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioBufferDistanceAttenuation.cpp"
                           ,0x15,L""), fVar4 = local_res10[0], bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = (fVar3 - fVar4) * param_1->AttenuationDbAtMaxRange;
  if (fVar3 < param_1->AttenuationDbAtMaxRange || fVar3 == param_1->AttenuationDbAtMaxRange) {
    return 0.0;
  }
  fVar3 = powf(__real_41200000,fVar3 * __real_3d4ccccd);
  return fVar3;
}

// ContainsDenormalized @ 1444b8c00

bool __cdecl Audio::ContainsDenormalized(TArrayView<float_const_,int> *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  iVar1 = (int)*(undefined8 *)&param_1->ArrayNum;
  uVar4 = uVar2;
  if (0 < iVar1) {
    do {
      iVar3 = (int)uVar4;
      if ((((uint)param_1->DataPtr[uVar2] & 0x7f800000) == 0) &&
         (((uint)param_1->DataPtr[uVar2] & 0x7fffff) != 0)) goto LAB_1444b8c4d;
      uVar2 = uVar2 + 1;
      uVar4 = (ulonglong)(iVar3 + 1);
    } while ((longlong)uVar2 < (longlong)iVar1);
  }
  iVar3 = -1;
LAB_1444b8c4d:
  return iVar3 != -1;
}

// ContainsInfinity @ 1444b8c60

bool __cdecl Audio::ContainsInfinity(TArrayView<float_const_,int> *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  iVar1 = (int)*(undefined8 *)&param_1->ArrayNum;
  uVar4 = uVar2;
  if (0 < iVar1) {
    do {
      iVar3 = (int)uVar4;
      if ((((uint)param_1->DataPtr[uVar2] & 0x7f800000) == 0x7f800000) &&
         (((uint)param_1->DataPtr[uVar2] & 0x7fffff) == 0)) goto LAB_1444b8cb8;
      uVar2 = uVar2 + 1;
      uVar4 = (ulonglong)(iVar3 + 1);
    } while ((longlong)uVar2 < (longlong)iVar1);
  }
  iVar3 = -1;
LAB_1444b8cb8:
  return iVar3 != -1;
}

// ContainsNan @ 1444b8cd0

bool __cdecl Audio::ContainsNan(TArrayView<float_const_,int> *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  iVar2 = (int)*(undefined8 *)&param_1->ArrayNum;
  pfVar1 = param_1->DataPtr;
  uVar6 = uVar4;
  if (0 < iVar2) {
    do {
      iVar5 = (int)uVar6;
      iVar3 = _isnan((double)pfVar1[uVar4]);
      if (iVar3 != 0) goto LAB_1444b8d22;
      uVar4 = uVar4 + 1;
      uVar6 = (ulonglong)(iVar5 + 1);
    } while ((longlong)uVar4 < (longlong)iVar2);
  }
  iVar5 = -1;
LAB_1444b8d22:
  return iVar5 != -1;
}

// Create2DChannelMap @ 1444b8d80

bool __cdecl
Audio::Create2DChannelMap
          (FChannelMapParams *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  uint local_res8 [4];
  uint local_res18 [2];
  uint *local_res20;
  
  local_res18[0] = param_1->NumOutputChannels;
  local_res8[0] = param_1->NumInputChannels;
  if (((int)local_res18[0] < 1) || (8 < local_res18[0])) {
    local_res20 = local_res18;
    bVar2 = `Audio::ChannelMapPrivate::EnsureValidChannelCounts'::__l3::<lambda_1>::operator()
                      (&local_res20);
    if (!bVar2) {
      return false;
    }
  }
  if (((int)local_res8[0] < 1) || (8 < local_res8[0])) {
    local_res20 = local_res8;
    bVar2 = `Audio::ChannelMapPrivate::EnsureValidChannelCounts'::__l6::<lambda_2>::operator()
                      (&local_res20);
    if (!bVar2) {
      return false;
    }
  }
  iVar1 = param_1->NumInputChannels;
  if (iVar1 == 1) {
    bVar2 = ChannelMapPrivate::Create2DMonoInputChannelMap
                      (param_1->NumOutputChannels,param_1->MonoUpmixMethod,
                       param_1->bIsCenterChannelOnly,param_2);
  }
  else if (iVar1 == 4) {
    bVar2 = ChannelMapPrivate::Create2DQuadInputChannelMap(param_1->NumOutputChannels,param_2);
  }
  else {
    bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap
                      (iVar1,param_1->NumOutputChannels,param_2);
  }
  if ((bVar2 != false) && (param_1->Order == InputMajorOrder)) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder
              (param_1->NumInputChannels,param_1->NumOutputChannels,param_2);
  }
  return bVar2;
}

// Create2DGenericInputChannelMap @ 1444b8e60

bool __cdecl
Audio::ChannelMapPrivate::Create2DGenericInputChannelMap
          (int param_1,int param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  
  uVar9 = (ulonglong)(uint)param_1;
  if (((int)(param_2 - 1U) < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputChannelMapIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ChannelMap.cpp"
                         ,0xde,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((7 < param_2 - 1U) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputChannelMapIndex < ChannelMapMaxNumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ChannelMap.cpp"
                         ,0xdf,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar10 = *(FScriptContainerElement **)(&MonoUpmixEqualPower + (longlong)param_2 * 2);
  if ((pFVar10 == (FScriptContainerElement *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Matrix != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ChannelMap.cpp"
                         ,0xe2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (0 < param_1) {
    do {
      uVar7 = (ulonglong)(uint)param_2;
      pFVar8 = pFVar10;
      if (0 < param_2) {
        do {
          pFVar2 = (param_3->AllocatorInstance).Data;
          if (((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + (longlong)param_3->ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar6 = param_3->ArrayNum;
          if (iVar6 == param_3->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          uVar1 = *(undefined4 *)pFVar8;
          param_3->ArrayNum = iVar6 + 1;
          *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 4) = uVar1;
          uVar7 = uVar7 - 1;
          pFVar8 = pFVar8 + 0x20;
        } while (uVar7 != 0);
      }
      pFVar10 = pFVar10 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return true;
}

// Create2DMonoInputChannelMap @ 1444b9000

bool __cdecl
Audio::ChannelMapPrivate::Create2DMonoInputChannelMap
          (int param_1,EChannelMapMonoUpmixMethod param_2,bool param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined4 uVar10;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  if (((int)(param_1 - 1U) < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputChannelMapIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ChannelMap.cpp"
                         ,0xfb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((7 < param_1 - 1U) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputChannelMapIndex < ChannelMapMaxNumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ChannelMap.cpp"
                         ,0xfc,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (param_1 == 1) {
    pFVar9 = (param_4->AllocatorInstance).Data;
    local_18 = 0x3f800000;
    if (((pFVar9 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar9 + (longlong)param_4->ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar6 = param_4->ArrayNum;
    if (iVar6 == param_4->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar6 + 1;
    *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18;
  }
  else if (((param_1 == 3) || (4 < param_1)) && (param_3)) {
    iVar6 = 0;
    if (0 < param_1) {
      do {
        pFVar9 = (param_4->AllocatorInstance).Data;
        if (iVar6 == 2) {
          local_14 = 0x3f800000;
          if (((pFVar9 <= (FScriptContainerElement *)&local_14) &&
              ((FScriptContainerElement *)&local_14 < pFVar9 + (longlong)param_4->ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar7 = param_4->ArrayNum;
          uVar10 = local_14;
          if (iVar7 == param_4->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
            uVar10 = local_14;
          }
        }
        else {
          local_10[0] = 0;
          if (((pFVar9 <= (FScriptContainerElement *)local_10) &&
              ((FScriptContainerElement *)local_10 < pFVar9 + (longlong)param_4->ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar7 = param_4->ArrayNum;
          uVar10 = local_10[0];
          if (iVar7 == param_4->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
            uVar10 = local_10[0];
          }
        }
        iVar6 = iVar6 + 1;
        param_4->ArrayNum = iVar7 + 1;
        *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar7 * 4) = uVar10;
      } while (iVar6 < param_1);
    }
  }
  else {
    if (param_2 == Linear) {
      pFVar9 = (param_4->AllocatorInstance).Data;
      if (((pFVar9 < (FScriptContainerElement *)0x150d5282d) &&
          (&MonoUpmixLinear < pFVar9 + (longlong)param_4->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_4->ArrayNum;
      if (iVar6 == param_4->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = 0x3f000000;
      pFVar9 = (param_4->AllocatorInstance).Data;
      if (((pFVar9 < (FScriptContainerElement *)0x150d5282d) &&
          (&MonoUpmixLinear < pFVar9 + (longlong)param_4->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_4->ArrayNum;
      if (iVar6 == param_4->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = 0x3f000000;
    }
    else if (param_2 == EqualPower) {
      pFVar9 = (param_4->AllocatorInstance).Data;
      if (((pFVar9 < (FScriptContainerElement *)0x150d52829) &&
          (&MonoUpmixEqualPower < pFVar9 + (longlong)param_4->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_4->ArrayNum;
      if (iVar6 == param_4->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = 0x3f34fdf4;
      pFVar9 = (param_4->AllocatorInstance).Data;
      if (((pFVar9 < (FScriptContainerElement *)0x150d52829) &&
          (&MonoUpmixEqualPower < pFVar9 + (longlong)param_4->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_4->ArrayNum;
      if (iVar6 == param_4->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = 0x3f34fdf4;
    }
    else if (param_2 == FullVolume) {
      pFVar9 = (param_4->AllocatorInstance).Data;
      if (((pFVar9 < (FScriptContainerElement *)0x150d52825) &&
          (&MonoUpmixFullVolume < pFVar9 + (longlong)param_4->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_4->ArrayNum;
      if (iVar6 == param_4->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = 0x3f800000;
      pFVar9 = (param_4->AllocatorInstance).Data;
      if (((pFVar9 < (FScriptContainerElement *)0x150d52825) &&
          (&MonoUpmixFullVolume < pFVar9 + (longlong)param_4->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_4->ArrayNum;
      if (iVar6 == param_4->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = 0x3f800000;
    }
    lVar1 = *(longlong *)(&MonoUpmixEqualPower + (longlong)param_1 * 2);
    if ((lVar1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Matrix != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ChannelMap.cpp"
                           ,300,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (2 < param_1) {
      pFVar9 = (FScriptContainerElement *)(lVar1 + 0x40);
      uVar8 = (ulonglong)(param_1 - 2);
      do {
        pFVar2 = (param_4->AllocatorInstance).Data;
        if (((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)param_4->ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar6 = param_4->ArrayNum;
        if (iVar6 == param_4->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar6 + 1;
        uVar10 = *(undefined4 *)pFVar9;
        pFVar9 = pFVar9 + 0x20;
        *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = uVar10;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return true;
}

// Create2DQuadInputChannelMap @ 1444b9710

bool __cdecl
Audio::ChannelMapPrivate::Create2DQuadInputChannelMap
          (int param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  
  uVar8 = (ulonglong)(uint)param_1;
  if (((int)(param_1 - 1U) < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputChannelMapIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ChannelMap.cpp"
                         ,0x143,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((7 < param_1 - 1U) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputChannelMapIndex < ChannelMapMaxNumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ChannelMap.cpp"
                         ,0x144,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar10 = *(FScriptContainerElement **)(&MonoUpmixEqualPower + (longlong)param_1 * 2);
  if ((pFVar10 == (FScriptContainerElement *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Matrix != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ChannelMap.cpp"
                         ,0x147,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar7 = uVar8;
  pFVar9 = pFVar10;
  if (0 < param_1) {
    do {
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      uVar1 = *(undefined4 *)pFVar9;
      param_2->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = uVar1;
      uVar7 = uVar7 - 1;
      pFVar9 = pFVar9 + 0x20;
    } while (uVar7 != 0);
    pFVar9 = pFVar10 + 4;
    uVar7 = uVar8;
    do {
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      uVar1 = *(undefined4 *)pFVar9;
      pFVar9 = pFVar9 + 0x20;
      param_2->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = uVar1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    pFVar9 = pFVar10 + 0x10;
    uVar7 = uVar8;
    do {
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      uVar1 = *(undefined4 *)pFVar9;
      pFVar9 = pFVar9 + 0x20;
      param_2->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = uVar1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    pFVar10 = pFVar10 + 0x14;
    do {
      pFVar9 = (param_2->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar10) && (pFVar10 < pFVar9 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      uVar1 = *(undefined4 *)pFVar10;
      pFVar10 = pFVar10 + 0x20;
      param_2->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = uVar1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return true;
}

// CreateVorbis2DChannelMap @ 1444b9c70

bool __cdecl
Audio::CreateVorbis2DChannelMap
          (int param_1,EChannelMapOrder param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int local_res8 [2];
  int *local_res20;
  
  local_res8[0] = param_1;
  if ((param_1 < 1) || (8 < (uint)param_1)) {
    local_res20 = local_res8;
    bVar4 = `Audio::CreateVorbis2DChannelMap'::__l3::<lambda_1>::operator()(&local_res20);
    if (!bVar4) {
      return false;
    }
  }
  pfVar12 = ChannelMapPrivate::VorbisChannelMaps[local_res8[0] + -1];
  if ((pfVar12 == (float *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != VorbisMatrix",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ChannelMap.cpp"
                         ,0x1bf,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar10 = 0;
  iVar11 = 0;
  piVar9 = &param_3->ArrayMax;
  if (0 < local_res8[0]) {
    iVar7 = 0;
    do {
      pFVar2 = (param_3->AllocatorInstance).Data;
      pFVar1 = (FScriptContainerElement *)(pfVar12 + iVar7);
      if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)*piVar9 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_3->ArrayNum;
      if (iVar6 == *piVar9) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,piVar9);
      }
      param_3->ArrayNum = iVar6 + 1;
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + 6;
      *(float *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 4) = *(float *)pFVar1;
    } while (iVar11 < local_res8[0]);
  }
  iVar11 = 0;
  pfVar8 = pfVar12;
  if (0 < local_res8[0]) {
    do {
      pFVar2 = (param_3->AllocatorInstance).Data;
      pFVar1 = (FScriptContainerElement *)(pfVar8 + 1);
      if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)*piVar9 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == *piVar9) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,piVar9);
      }
      param_3->ArrayNum = iVar7 + 1;
      iVar11 = iVar11 + 1;
      *(float *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = *(float *)pFVar1;
      pfVar8 = pfVar8 + 6;
    } while (iVar11 < local_res8[0]);
  }
  piVar9 = &param_3->ArrayMax;
  iVar11 = 0;
  pfVar8 = pfVar12;
  if (0 < local_res8[0]) {
    do {
      pFVar2 = (param_3->AllocatorInstance).Data;
      pFVar1 = (FScriptContainerElement *)(pfVar8 + 2);
      if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)*piVar9 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == *piVar9) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,piVar9);
      }
      param_3->ArrayNum = iVar7 + 1;
      iVar11 = iVar11 + 1;
      *(float *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = *(float *)pFVar1;
      pfVar8 = pfVar8 + 6;
    } while (iVar11 < local_res8[0]);
  }
  piVar9 = &param_3->ArrayMax;
  iVar11 = 0;
  pfVar8 = pfVar12;
  if (0 < local_res8[0]) {
    do {
      pFVar2 = (param_3->AllocatorInstance).Data;
      pFVar1 = (FScriptContainerElement *)(pfVar8 + 3);
      if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)*piVar9 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == *piVar9) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,piVar9);
      }
      param_3->ArrayNum = iVar7 + 1;
      iVar11 = iVar11 + 1;
      *(float *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = *(float *)pFVar1;
      pfVar8 = pfVar8 + 6;
    } while (iVar11 < local_res8[0]);
  }
  piVar9 = &param_3->ArrayMax;
  iVar11 = 0;
  pfVar8 = pfVar12;
  if (0 < local_res8[0]) {
    do {
      pFVar2 = (param_3->AllocatorInstance).Data;
      pFVar1 = (FScriptContainerElement *)(pfVar8 + 4);
      if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)*piVar9 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == *piVar9) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,piVar9);
      }
      param_3->ArrayNum = iVar7 + 1;
      iVar11 = iVar11 + 1;
      *(float *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = *(float *)pFVar1;
      pfVar8 = pfVar8 + 6;
    } while (iVar11 < local_res8[0]);
  }
  piVar9 = &param_3->ArrayMax;
  if (0 < local_res8[0]) {
    do {
      pFVar2 = (param_3->AllocatorInstance).Data;
      pFVar1 = (FScriptContainerElement *)(pfVar12 + 5);
      if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)*piVar9 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar11 = param_3->ArrayNum;
      if (iVar11 == *piVar9) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_3->AllocatorInstance,piVar9);
      }
      param_3->ArrayNum = iVar11 + 1;
      iVar10 = iVar10 + 1;
      pfVar12 = pfVar12 + 6;
      *(float *)((param_3->AllocatorInstance).Data + (longlong)iVar11 * 4) = *(float *)pFVar1;
    } while (iVar10 < local_res8[0]);
  }
  if (param_2 == InputMajorOrder) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(6,local_res8[0],param_3);
  }
  return true;
}

// DecodeMidSide @ 1444ba740

void __cdecl
Audio::DecodeMidSide
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  undefined4 uStack_10c;
  undefined4 uStack_fc;
  undefined4 uStack_ec;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  TArrayView<float,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48 [2];
  
  uVar2 = param_1->ArrayNum;
  piVar1 = &param_3->ArrayNum;
  if ((*piVar1 < (int)uVar2) || (param_4->ArrayNum < (int)uVar2)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if ((uVar2 == param_2->ArrayNum) && (bVar11)) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    *piVar1 = 0;
    if (param_3->ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar2,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar2,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_1->ArrayNum,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_2->ArrayNum,&param_4->AllocatorInstance,&param_4->ArrayNum,
               &param_4->ArrayMax);
    pFVar6 = (param_3->AllocatorInstance).Data;
    iVar3 = param_3->ArrayNum;
    if (iVar3 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar7 = (param_2->AllocatorInstance).Data;
    iVar4 = param_2->ArrayNum;
    if (iVar4 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar8 = (param_1->AllocatorInstance).Data;
    iVar5 = param_1->ArrayNum;
    if (iVar5 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    fVar10 = __real_3f000000;
    local_a8._12_4_ = uStack_10c;
    local_a8.ArrayNum = iVar3;
    local_98._12_4_ = uStack_fc;
    local_98.ArrayNum = iVar4;
    local_88._12_4_ = uStack_ec;
    local_88.ArrayNum = iVar5;
    local_a8.DataPtr = (float *)pFVar6;
    local_98.DataPtr = (float *)pFVar7;
    local_88.DataPtr = (float *)pFVar8;
    ArrayWeightedSum(&local_88,__real_3f000000,&local_98,__real_3f000000,&local_a8);
    pFVar6 = (param_4->AllocatorInstance).Data;
    iVar3 = param_4->ArrayNum;
    if (iVar3 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar7 = (param_2->AllocatorInstance).Data;
    iVar4 = param_2->ArrayNum;
    if (iVar4 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar8 = (param_1->AllocatorInstance).Data;
    iVar5 = param_1->ArrayNum;
    if (iVar5 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_78._12_4_ = uStack_dc;
    local_78.ArrayNum = iVar3;
    local_68._12_4_ = uStack_cc;
    local_68.ArrayNum = iVar4;
    local_58._12_4_ = uStack_bc;
    local_58.ArrayNum = iVar5;
    local_78.DataPtr = (float *)pFVar6;
    local_68.DataPtr = (float *)pFVar7;
    local_58.DataPtr = (float *)pFVar8;
    ArraySubtract(&local_58,&local_68,&local_78);
    local_48[0].DataPtr = (float *)(param_4->AllocatorInstance).Data;
    iVar3 = param_4->ArrayNum;
    if (iVar3 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_48[0]._12_4_ = uStack_ac;
    local_48[0].ArrayNum = iVar3;
    ArrayMultiplyByConstantInPlace(local_48,fVar10);
  }
  return;
}

// DecodeMonoAmbisonicMixIn @ 1444baaf0

void __cdecl
Audio::DecodeMonoAmbisonicMixIn
          (TArrayView<float_const_*,int> *param_1,TArrayView<float,int> *param_2,
          TArrayView<float_const_,int> *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float **ppfVar5;
  float *pfVar6;
  code *pcVar7;
  float *pfVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong lVar11;
  undefined4 uStack_5c;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48 [3];
  
  iVar2 = param_1->ArrayNum;
  iVar3 = param_2->ArrayNum;
  pfVar4 = param_3->DataPtr;
  ppfVar5 = param_1->DataPtr;
  if (0 < (longlong)iVar2) {
    lVar11 = 0;
    do {
      pfVar6 = ppfVar5[lVar11];
      fVar1 = pfVar4[lVar11];
      pfVar8 = param_2->DataPtr;
      uVar9._0_4_ = param_2->ArrayNum;
      uVar9._4_4_ = *(undefined4 *)&param_2->field_0xc;
      if ((iVar3 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_48[0]._12_4_ = uStack_5c;
      local_48[0].ArrayNum = iVar3;
      local_58.DataPtr = pfVar8;
      local_58._8_8_ = uVar9;
      local_48[0].DataPtr = pfVar6;
      ArrayMixIn(local_48,&local_58,fVar1);
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar2);
  }
  return;
}

// DepthFirstTopologicalSortVisit @ 1444bb220

bool __cdecl
Audio::DirectedGraphAlgoPrivate::DepthFirstTopologicalSortVisit
          (int param_1,
          TMap<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>_>
          *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FDepthFirstSortInfo *pFVar6;
  FScriptContainerElement *pFVar7;
  int local_res8 [2];
  undefined1 local_res20 [8];
  
  local_res8[0] = param_1;
  pFVar6 = TMapBase<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>_>
           ::FindChecked((TMapBase<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>_>
                          *)param_2,param_1);
  if (pFVar6->PermanentMark != false) {
    return true;
  }
  if (pFVar6->TemporaryMark == false) {
    pFVar6->TemporaryMark = true;
    pFVar7 = (pFVar6->Children).AllocatorInstance.Data;
    iVar5 = (pFVar6->Children).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar5 * 4;
    while( true ) {
      if ((pFVar6->Children).ArrayNum != iVar5) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar7 == pFVar1) {
        pFVar6->TemporaryMark = false;
        pFVar6->PermanentMark = true;
        pFVar1 = (param_3->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_res8) &&
            ((FScriptContainerElement *)local_res8 < pFVar1 + (longlong)param_3->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar5 = param_3->ArrayNum;
        if (iVar5 == param_3->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar5 + 1;
        *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_res8[0];
        return true;
      }
      bVar3 = DepthFirstTopologicalSortVisit(*(int *)pFVar7,param_2,param_3);
      if (!bVar3) break;
      pFVar7 = pFVar7 + 4;
    }
  }
  return false;
}

// DistanceAttenuationProcessAudio @ 1444bbc70

void __cdecl
Audio::DistanceAttenuationProcessAudio
          (TArrayView<short,int> *param_1,uint param_2,float param_3,
          FAudioBufferDistanceAttenuationSettings *param_4,float *param_5)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutBuffer.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioBufferDistanceAttenuation.cpp"
                         ,0x2d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioBufferDistanceAttenuation.cpp"
                         ,0x2e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_3 < 0.0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDistance >= 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioBufferDistanceAttenuation.cpp"
                         ,0x2f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = (ulonglong)(uint)param_1->ArrayNum / (ulonglong)param_2;
  fVar10 = ComputeNextLinearAttenuation(param_4,param_3);
  uVar9 = 0;
  fVar12 = *param_5;
  if (*param_5 < 0.0) {
    fVar12 = fVar10;
  }
  iVar6 = (int)uVar5;
  fVar11 = fVar10 - fVar12;
  if (0 < iVar6) {
    do {
      uVar8 = (ulonglong)param_2;
      uVar7 = uVar9;
      if (param_2 != 0) {
        do {
          uVar4 = 0;
          if ((int)uVar7 < param_1->ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          sVar1 = param_1->DataPtr[(int)uVar7];
          uVar4 = 0;
          if ((int)uVar7 < param_1->ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          param_1->DataPtr[(int)uVar7] = (short)(int)((float)(int)sVar1 * fVar12);
          uVar8 = uVar8 - 1;
          uVar7 = uVar7 + 1;
        } while (uVar8 != 0);
      }
      uVar9 = uVar9 + param_2;
      fVar12 = fVar12 + fVar11 / (float)iVar6;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *param_5 = fVar10;
  return;
}

// DistanceAttenuationProcessAudio @ 1444bbed0

void __cdecl
Audio::DistanceAttenuationProcessAudio
          (TArrayView<float,int> *param_1,uint param_2,float param_3,
          FAudioBufferDistanceAttenuationSettings *param_4,float *param_5)

{
  uint uVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_4c;
  TArrayView<float,int> local_48 [4];
  
  if (param_1->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOutBuffer.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioBufferDistanceAttenuation.cpp"
                       ,0x4d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumChannels > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioBufferDistanceAttenuation.cpp"
                       ,0x4e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_3 < 0.0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDistance >= 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioBufferDistanceAttenuation.cpp"
                       ,0x4f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = param_1->ArrayNum;
  fVar6 = ComputeNextLinearAttenuation(param_4,param_3);
  iVar5 = (uVar1 / param_2) * param_2;
  fVar7 = *param_5;
  if (*param_5 < 0.0) {
    fVar7 = fVar6;
  }
  pfVar2 = param_1->DataPtr;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48[0]._12_4_ = uStack_4c;
  local_48[0].ArrayNum = iVar5;
  local_48[0].DataPtr = pfVar2;
  ArrayFade(local_48,fVar7,fVar6);
  *param_5 = fVar6;
  return;
}

// DownmixAndSumIntoBuffer @ 1444bc2a0

void __cdecl
Audio::DownmixAndSumIntoBuffer
          (int param_1,int param_2,TArray<float,TAlignedHeapAllocator<16>_> *param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4,float *param_5)

{
  DownmixAndSumIntoBuffer
            (param_1,param_2,(float *)(param_3->AllocatorInstance).Data,
             (float *)(param_4->AllocatorInstance).Data,param_3->ArrayNum / param_1,param_5);
  return;
}

// DownmixAndSumIntoBuffer @ 1444bc2e0

void __cdecl
Audio::DownmixAndSumIntoBuffer
          (int param_1,int param_2,float *param_3,float *param_4,int param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  
  uVar12 = (ulonglong)(uint)param_5;
  uVar17 = (ulonglong)param_2;
  uVar13 = uVar17;
  if (0 < param_5) {
    do {
      iVar21 = 0;
      lVar19 = 0;
      if (0 < (longlong)uVar17) {
        do {
          iVar20 = 0;
          lVar11 = 0;
          fVar22 = 0.0;
          if (3 < param_1) {
            iVar9 = (int)uVar13;
            lVar15 = (longlong)(iVar21 + iVar9 * 2);
            pfVar14 = param_3 + 2;
            pfVar16 = param_6 + lVar15;
            uVar10 = (param_1 - 4U >> 2) + 1;
            uVar13 = (ulonglong)uVar10;
            iVar20 = uVar10 * 4;
            lVar11 = (ulonglong)uVar10 * 4;
            do {
              pfVar4 = pfVar16 + (iVar21 - lVar15);
              pfVar1 = pfVar14 + -2;
              pfVar5 = pfVar16 + ((iVar21 + iVar9) - lVar15);
              pfVar2 = pfVar14 + -1;
              fVar7 = *pfVar16;
              fVar8 = *pfVar14;
              pfVar6 = pfVar16 + ((iVar21 + iVar9 * 3) - lVar15);
              pfVar16 = pfVar16 + iVar9 * 4;
              pfVar3 = pfVar14 + 1;
              pfVar14 = pfVar14 + 4;
              fVar22 = *pfVar4 * *pfVar1 + fVar22 + *pfVar5 * *pfVar2 + fVar7 * fVar8 +
                       *pfVar6 * *pfVar3;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
            uVar13 = (ulonglong)(uint)param_2;
          }
          if (iVar20 < param_1) {
            pfVar14 = param_3 + lVar11;
            uVar18 = (ulonglong)(uint)(param_1 - iVar20);
            pfVar16 = param_6 + (iVar20 * (int)uVar13 + iVar21);
            do {
              fVar7 = *pfVar16;
              pfVar16 = pfVar16 + uVar17;
              fVar8 = *pfVar14;
              pfVar14 = pfVar14 + 1;
              fVar22 = fVar22 + fVar7 * fVar8;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          iVar21 = iVar21 + 1;
          param_4[lVar19] = fVar22 + param_4[lVar19];
          lVar19 = lVar19 + 1;
        } while (lVar19 < (longlong)uVar17);
      }
      param_3 = param_3 + param_1;
      param_4 = param_4 + uVar17;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

// DownmixBuffer @ 1444bc4e0

void __cdecl
Audio::DownmixBuffer
          (int param_1,int param_2,TArray<float,TAlignedHeapAllocator<16>_> *param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4,float *param_5,float *param_6)

{
  DownmixBuffer(param_1,param_2,(float *)(param_3->AllocatorInstance).Data,
                (float *)(param_4->AllocatorInstance).Data,param_3->ArrayNum / param_1,param_5,
                param_6);
  return;
}

// DownmixBuffer @ 1444bc520

void __cdecl
Audio::DownmixBuffer
          (int param_1,int param_2,TArray<float,TAlignedHeapAllocator<16>_> *param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4,float *param_5)

{
  DownmixBuffer(param_1,param_2,(float *)(param_3->AllocatorInstance).Data,
                (float *)(param_4->AllocatorInstance).Data,param_3->ArrayNum / param_1,param_5);
  return;
}

// DownmixBuffer @ 1444bc560

void __cdecl
Audio::DownmixBuffer
          (int param_1,int param_2,float *param_3,float *param_4,int param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  
  uVar11 = (ulonglong)(uint)param_5;
  lVar19 = (longlong)param_2;
  if (0 < param_5) {
    do {
      iVar16 = 0;
      lVar18 = 0;
      if (0 < lVar19) {
        do {
          iVar17 = 0;
          lVar10 = 0;
          fVar20 = 0.0;
          if (3 < param_1) {
            lVar14 = (longlong)(iVar16 + param_2 * 2);
            pfVar13 = param_3 + 2;
            pfVar15 = param_6 + lVar14;
            uVar9 = (param_1 - 4U >> 2) + 1;
            uVar12 = (ulonglong)uVar9;
            iVar17 = uVar9 * 4;
            lVar10 = (ulonglong)uVar9 * 4;
            do {
              pfVar4 = pfVar15 + (iVar16 - lVar14);
              pfVar1 = pfVar13 + -2;
              pfVar5 = pfVar15 + ((iVar16 + param_2) - lVar14);
              pfVar2 = pfVar13 + -1;
              fVar7 = *pfVar13;
              fVar8 = *pfVar15;
              pfVar6 = pfVar15 + ((iVar16 + param_2 * 3) - lVar14);
              pfVar15 = pfVar15 + param_2 * 4;
              pfVar3 = pfVar13 + 1;
              pfVar13 = pfVar13 + 4;
              fVar20 = *pfVar4 * *pfVar1 + fVar20 + *pfVar5 * *pfVar2 + fVar7 * fVar8 +
                       *pfVar6 * *pfVar3;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if (iVar17 < param_1) {
            pfVar13 = param_3 + lVar10;
            uVar12 = (ulonglong)(uint)(param_1 - iVar17);
            pfVar15 = param_6 + (iVar17 * param_2 + iVar16);
            do {
              fVar7 = *pfVar15;
              pfVar15 = pfVar15 + lVar19;
              fVar8 = *pfVar13;
              pfVar13 = pfVar13 + 1;
              fVar20 = fVar20 + fVar7 * fVar8;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          param_4[lVar18] = fVar20;
          iVar16 = iVar16 + 1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < lVar19);
      }
      param_4 = param_4 + lVar19;
      param_3 = param_3 + param_1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}

// DownmixBuffer @ 1444bc750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Audio::DownmixBuffer
          (int param_1,int param_2,float *param_3,float *param_4,int param_5,float *param_6,
          float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  float *pfVar16;
  ulonglong uVar17;
  float *pfVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  uint local_1b4;
  float *local_198;
  int local_190;
  float *local_188;
  float *local_158;
  float local_148 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  uVar19 = (ulonglong)param_2;
  local_158 = param_6;
  local_1b4 = param_2;
  local_198 = param_3;
  local_190 = param_1;
  local_188 = param_4;
  if (((8 < param_1) || (8 < param_2)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumSourceChannels <= 8 && NumDestinationChannels <= 8",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                          ,0x45b,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar27 = __real_3f800000;
  local_1b8 = 0;
  uVar15 = uVar19;
  if (0 < param_2) {
    pfVar18 = param_6 + uVar19;
    uVar21 = uVar19;
    do {
      iVar25 = 0;
      if (3 < param_1) {
        iVar20 = (int)uVar15;
        lVar22 = (longlong)(int)(local_1b8 + iVar20 * 2) - uVar21;
        lVar12 = lVar22 * 4 - (longlong)param_6;
        fVar26 = fVar27 / (float)param_5;
        lVar23 = (longlong)(int)(local_1b8 + iVar20 * 3) - uVar21;
        lVar13 = lVar23 * 4 - (longlong)param_6;
        lVar14 = uVar19 * -4 - (longlong)param_6;
        uVar11 = (param_1 - 4U >> 2) + 1;
        uVar15 = (ulonglong)uVar11;
        iVar25 = uVar11 * 4;
        pfVar16 = pfVar18;
        do {
          fVar1 = *(float *)((longlong)pfVar16 + ((longlong)param_7 - (longlong)param_6));
          fVar2 = *pfVar16;
          *(float *)((longlong)pfVar16 + (longlong)local_148 + lVar14) =
               (*(float *)((longlong)pfVar16 + lVar14 + (longlong)param_7) - pfVar16[-uVar19]) *
               fVar26;
          fVar3 = *(float *)((longlong)pfVar16 + lVar12 + (longlong)param_7);
          fVar4 = pfVar16[lVar22];
          *(float *)((longlong)pfVar16 + ((longlong)local_148 - (longlong)param_6)) =
               (fVar1 - fVar2) * fVar26;
          fVar1 = *(float *)((longlong)pfVar16 + lVar13 + (longlong)param_7);
          fVar2 = pfVar16[lVar23];
          *(float *)((longlong)pfVar16 + (longlong)local_148 + lVar12) = (fVar3 - fVar4) * fVar26;
          *(float *)((longlong)pfVar16 + (longlong)local_148 + lVar13) = (fVar1 - fVar2) * fVar26;
          pfVar16 = pfVar16 + iVar20 * 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        uVar15 = (ulonglong)local_1b4;
        param_6 = local_158;
        param_1 = local_190;
      }
      iVar20 = (int)uVar15;
      if (iVar25 < param_1) {
        pfVar16 = param_6 + (int)(iVar20 * iVar25 + local_1b8);
        uVar17 = (ulonglong)(uint)(param_1 - iVar25);
        do {
          *(float *)(((longlong)local_148 - (longlong)param_6) + (longlong)pfVar16) =
               (*(float *)(((longlong)param_7 - (longlong)param_6) + (longlong)pfVar16) - *pfVar16)
               * (fVar27 / (float)param_5);
          pfVar16 = pfVar16 + iVar20;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      local_1b8 = local_1b8 + 1;
      uVar21 = uVar21 + 1;
      pfVar18 = pfVar18 + 1;
      param_4 = local_188;
      param_3 = local_198;
    } while ((int)local_1b8 < iVar20);
  }
  uVar19 = (ulonglong)(uint)param_5;
  if (0 < param_5) {
    lVar12 = (longlong)(int)uVar15;
    do {
      iVar25 = 0;
      lVar13 = 0;
      if (0 < lVar12) {
        local_1b8 = (uint)uVar15;
        uVar21 = uVar15 & 0xffffffff;
        do {
          iVar20 = 0;
          lVar14 = 0;
          fVar27 = 0.0;
          uVar11 = (uint)uVar21;
          if (3 < param_1) {
            iVar9 = (int)uVar15;
            pfVar18 = param_3 + 2;
            pfVar16 = param_6 + (int)(uint)uVar21;
            lVar22 = (longlong)(iVar9 + iVar25);
            lVar24 = (iVar25 + iVar9 * 2) - lVar22;
            lVar23 = iVar25 - lVar22;
            lVar22 = (iVar25 + iVar9 * 3) - lVar22;
            uVar11 = (param_1 - 4U >> 2) + 1;
            uVar15 = (ulonglong)uVar11;
            iVar20 = uVar11 * 4;
            lVar14 = (ulonglong)uVar11 * 4;
            do {
              fVar26 = pfVar16[lVar23];
              fVar1 = pfVar18[-2];
              pfVar16[lVar23] =
                   fVar26 + *(float *)((longlong)pfVar16 +
                                      (longlong)local_148 + (lVar23 * 4 - (longlong)param_6));
              fVar2 = *pfVar16;
              fVar3 = pfVar18[-1];
              *pfVar16 = fVar2 + *(float *)(((longlong)local_148 - (longlong)param_6) +
                                           (longlong)pfVar16);
              fVar4 = pfVar16[lVar24];
              fVar5 = *pfVar18;
              pfVar16[lVar24] =
                   fVar4 + *(float *)((longlong)local_148 + (lVar24 * 4 - (longlong)param_6) +
                                     (longlong)pfVar16);
              fVar6 = pfVar16[lVar22];
              fVar7 = pfVar18[1];
              pfVar18 = pfVar18 + 4;
              pfVar16[lVar22] =
                   fVar6 + *(float *)((longlong)local_148 + (lVar22 * 4 - (longlong)param_6) +
                                     (longlong)pfVar16);
              fVar27 = fVar26 * fVar1 + fVar27 + fVar2 * fVar3 + fVar4 * fVar5 + fVar6 * fVar7;
              pfVar16 = pfVar16 + iVar9 * 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            uVar15 = (ulonglong)local_1b4;
            param_6 = local_158;
            uVar11 = local_1b8;
          }
          if (iVar20 < param_1) {
            pfVar18 = local_198 + lVar14;
            pfVar16 = param_6 + ((int)uVar15 * iVar20 + iVar25);
            uVar21 = (ulonglong)(uint)(param_1 - iVar20);
            do {
              fVar26 = *pfVar16;
              fVar1 = *pfVar18;
              pfVar18 = pfVar18 + 1;
              *pfVar16 = fVar26 + *(float *)((longlong)pfVar16 +
                                            ((longlong)local_148 - (longlong)param_6));
              fVar27 = fVar27 + fVar26 * fVar1;
              pfVar16 = pfVar16 + lVar12;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          iVar25 = iVar25 + 1;
          local_188[lVar13] = fVar27;
          lVar13 = lVar13 + 1;
          local_1b8 = uVar11 + 1;
          uVar21 = (ulonglong)local_1b8;
          param_4 = local_188;
          param_3 = local_198;
        } while (lVar13 < lVar12);
      }
      param_4 = param_4 + lVar12;
      param_3 = param_3 + param_1;
      uVar19 = uVar19 - 1;
      local_198 = param_3;
      local_188 = param_4;
    } while (uVar19 != 0);
  }
  return;
}

// EncodeMidSide @ 1444bcda0

void __cdecl
Audio::EncodeMidSide
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float_const_,int> local_38;
  
  uVar1 = param_1->ArrayNum;
  if ((param_3->ArrayNum < (int)uVar1) || (param_4->ArrayNum < (int)uVar1)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((uVar1 == param_2->ArrayNum) && (bVar9)) {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar1,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar1,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar1,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar1,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
    iVar2 = param_4->ArrayNum;
    pFVar5 = (param_4->AllocatorInstance).Data;
    if (iVar2 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    iVar3 = param_2->ArrayNum;
    if (iVar3 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    if (iVar4 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_88._12_4_ = uStack_dc;
    local_88.ArrayNum = iVar2;
    local_78._12_4_ = uStack_cc;
    local_78.ArrayNum = iVar3;
    local_68._12_4_ = uStack_bc;
    local_68.ArrayNum = iVar4;
    local_88.DataPtr = (float *)pFVar5;
    local_78.DataPtr = (float *)pFVar6;
    local_68.DataPtr = (float *)pFVar7;
    ArraySubtract(&local_68,&local_78,&local_88);
    iVar2 = param_3->ArrayNum;
    pFVar5 = (param_3->AllocatorInstance).Data;
    if (iVar2 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    iVar3 = param_2->ArrayNum;
    if (iVar3 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    if (iVar4 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_58._12_4_ = uStack_ac;
    local_58.ArrayNum = iVar2;
    local_48._12_4_ = uStack_9c;
    local_48.ArrayNum = iVar3;
    local_38._12_4_ = uStack_8c;
    local_38.ArrayNum = iVar4;
    local_58.DataPtr = (float *)pFVar5;
    local_48.DataPtr = (float *)pFVar6;
    local_38.DataPtr = (float *)pFVar7;
    ArraySum(&local_38,&local_48,&local_58);
  }
  return;
}

// EncodeMonoAmbisonicMixIn @ 1444bd0c0

void __cdecl
Audio::EncodeMonoAmbisonicMixIn
          (TArrayView<float_const_,int> *param_1,TArrayView<float_*,int> *param_2,
          TArrayView<float_const_,int> *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float **ppfVar5;
  float *pfVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  undefined4 uStack_4c;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38 [2];
  
  iVar2 = param_3->ArrayNum;
  iVar3 = param_1->ArrayNum;
  pfVar4 = param_3->DataPtr;
  ppfVar5 = param_2->DataPtr;
  if (0 < (longlong)iVar2) {
    lVar9 = 0;
    do {
      pfVar6 = ppfVar5[lVar9];
      fVar1 = pfVar4[lVar9];
      if ((iVar3 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_38[0].DataPtr = param_1->DataPtr;
      local_38[0].ArrayNum = param_1->ArrayNum;
      local_38[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_48._12_4_ = uStack_4c;
      local_48.ArrayNum = iVar3;
      local_48.DataPtr = pfVar6;
      ArrayMixIn(local_38,&local_48,fVar1);
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
  }
  return;
}

// EnsureValidChannelCounts @ 1444bd2b0

bool __cdecl Audio::ChannelMapPrivate::EnsureValidChannelCounts(int param_1,int param_2)

{
  bool bVar1;
  uint local_res8 [2];
  int local_res10 [2];
  uint *local_res18 [2];
  
  local_res8[0] = param_1;
  local_res10[0] = param_2;
  if ((param_2 < 1) || (8 < (uint)param_2)) {
    local_res18[0] = (uint *)local_res10;
    bVar1 = `Audio::ChannelMapPrivate::EnsureValidChannelCounts'::__l3::<lambda_1>::operator()
                      (local_res18);
    if (!bVar1) {
      return false;
    }
  }
  if ((0 < (int)local_res8[0]) && (local_res8[0] < 9)) {
    return true;
  }
  local_res18[0] = local_res8;
  bVar1 = `Audio::ChannelMapPrivate::EnsureValidChannelCounts'::__l6::<lambda_2>::operator()
                    (local_res18);
  return bVar1;
}

// FillArrayWithTruncatedGaussian @ 1444bdea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::PseudoConstantQIntrinsics::FillArrayWithTruncatedGaussian
          (float param_1,float param_2,int param_3,float param_4,
          TArray<float,TAlignedHeapAllocator<16>_> *param_5,int *param_6)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((param_2 <= 0.0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBandWidth > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                         ,0xd,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_3 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFFTSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                         ,0xe,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 < 0.0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCenterFreq >= 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                         ,0xf,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_4 <= 0.0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSampleRate > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                         ,0x10,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar4 = __real_bf000000;
  fVar15 = param_1 - param_2 * ___real_40c23b0d;
  fVar17 = param_2 * ___real_40c23b0d + param_1;
  fVar18 = (float)param_3;
  fVar16 = param_4 * __real_3f000000;
  if (fVar16 <= fVar17) {
    fVar17 = fVar16;
  }
  if (fVar16 <= fVar15) {
    fVar15 = fVar16;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  iVar10 = (int)ROUND(__real_bf000000 - fVar15 * fVar18 * (__real_40000000 / param_4)) >> 1;
  iVar11 = -iVar10;
  uVar6 = ((int)ROUND(fVar17 * fVar18 * (__real_40000000 / param_4) - __real_3f000000) >> 1) +
          iVar10 + 1;
  uVar12 = 1;
  if (0 < (int)uVar6) {
    uVar12 = uVar6;
  }
  *param_6 = iVar11;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  uVar9 = 0;
  piVar1 = &param_5->ArrayNum;
  uVar6 = 0;
  *piVar1 = 0;
  if (param_5->ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar12,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar12,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
  if (0 < (int)uVar12) {
    fVar18 = __real_3f800000 / fVar18;
    dVar3 = __real_3ff0000000000000 / (double)(param_2 * param_2);
    uVar13 = uVar9;
    uVar8 = uVar6;
    do {
      fVar15 = (float)(int)(uVar8 + iVar11) * param_4 * fVar18 - param_1;
      dVar14 = exp((double)(fVar15 * fVar15 * fVar4) * dVar3);
      uVar7 = uVar6;
      if ((int)uVar8 < *piVar1) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar8 + 1;
      *(float *)((param_5->AllocatorInstance).Data + uVar13 * 4) = (float)dVar14;
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < (longlong)(int)uVar12);
  }
  iVar10 = *piVar1;
  uVar13 = uVar9;
  if (0 < iVar10) {
    do {
      uVar8 = (uint)uVar9;
      uVar12 = uVar6;
      if ((int)uVar8 < iVar10) {
        uVar12 = ~uVar8 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar10 = _finite((double)*(float *)((param_5->AllocatorInstance).Data + uVar13));
      if (iVar10 == 0) {
        uVar12 = 0;
        if ((int)uVar8 < *piVar1) {
          uVar12 = ~uVar8 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)((param_5->AllocatorInstance).Data + uVar13) = 0;
      }
      iVar10 = *piVar1;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar13 = uVar13 + 4;
    } while ((int)(uVar8 + 1) < iVar10);
  }
  return;
}

// FindArg @ 1444be360

TOptional<FString> * __cdecl
BufferDiagnosticsPrivate::FindArg
          (TOptional<FString> *__return_storage_ptr__,wchar_t *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FString *this;
  TOptional<FString> *pTVar4;
  FString local_28;
  FString local_18;
  
  this = AlgoImpl::
         FindByPredicate<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,_BufferDiagnosticsPrivate::FindArg_::__l3::<lambda_1>_>
                   (param_2,(<lambda_1>)param_1);
  if (this == (FString *)0x0) {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  else {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::FString(&local_18,param_1);
    ::FString::Split(this,&local_18,(FString *)0x0,&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_28.Data.ArrayNum;
    iVar2 = local_28.Data.ArrayMax;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    if ((iVar2 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<FString> *)(*pcVar1)();
      return pTVar4;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// FindDenormalized @ 1444be5a0

int __cdecl Audio::FindDenormalized(TArrayView<float_const_,int> *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (0 < (longlong)param_1->ArrayNum) {
    do {
      if ((((uint)param_1->DataPtr[uVar1] & 0x7f800000) == 0) &&
         (((uint)param_1->DataPtr[uVar1] & 0x7fffff) != 0)) {
        return (int)uVar2;
      }
      uVar1 = uVar1 + 1;
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while ((longlong)uVar1 < (longlong)param_1->ArrayNum);
  }
  return -1;
}

// FindInfinity @ 1444be5f0

int __cdecl Audio::FindInfinity(TArrayView<float_const_,int> *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (0 < (longlong)param_1->ArrayNum) {
    do {
      if ((((uint)param_1->DataPtr[uVar1] & 0x7f800000) == 0x7f800000) &&
         (((uint)param_1->DataPtr[uVar1] & 0x7fffff) == 0)) {
        return (int)uVar2;
      }
      uVar1 = uVar1 + 1;
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while ((longlong)uVar1 < (longlong)param_1->ArrayNum);
  }
  return -1;
}

// FindNan @ 1444be660

int __cdecl Audio::FindNan(TArrayView<float_const_,int> *param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar1 = param_1->ArrayNum;
  uVar4 = 0;
  pfVar2 = param_1->DataPtr;
  uVar5 = uVar4;
  if (0 < (longlong)iVar1) {
    do {
      iVar3 = _isnan((double)pfVar2[uVar4]);
      if (iVar3 != 0) {
        return (int)uVar5;
      }
      uVar4 = uVar4 + 1;
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while ((longlong)uVar4 < (longlong)iVar1);
  }
  return -1;
}

// GenerateBlackmanWindow @ 1444bf210

void __cdecl Audio::GenerateBlackmanWindow(float *param_1,int param_2,int param_3,bool param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float _X;
  float fVar17;
  
  dVar4 = __real_3fb47ae147ae147b;
  fVar3 = __real_3ed70a3d;
  fVar1 = __real_3f000000;
  lVar9 = (longlong)param_3;
  uVar2 = param_2;
  if (!param_4) {
    uVar2 = param_2 - 1;
  }
  uVar5 = uVar2 + 1;
  if ((uVar2 & 1) == 0) {
    uVar5 = uVar2;
  }
  iVar11 = 0;
  iVar6 = (int)uVar5 / 2;
  _X = 0.0;
  fVar17 = __real_40c90fdb / (float)(int)(uVar2 - 1);
  if (-1 < iVar6) {
    iVar10 = 0;
    do {
      if (param_2 <= iVar11) break;
      fVar15 = cosf(_X + _X);
      fVar16 = cosf(_X);
      _X = _X + fVar17;
      if (0 < param_3) {
        pfVar12 = param_1 + iVar10;
        for (lVar7 = lVar9; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pfVar12 = (float)((double)fVar15 * dVar4 + (double)(fVar3 - fVar16 * fVar1));
          pfVar12 = pfVar12 + 1;
        }
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + param_3;
    } while (iVar11 <= iVar6);
  }
  iVar11 = iVar6 + 1;
  if (iVar11 < param_2) {
    pfVar12 = param_1 + iVar11 * param_3;
    uVar14 = (ulonglong)(uint)(param_2 - iVar11);
    pfVar8 = param_1 + ((longlong)iVar6 * 2 - (longlong)iVar11);
    do {
      fVar1 = *pfVar8;
      lVar7 = lVar9;
      pfVar13 = pfVar12;
      if (0 < param_3) {
        for (; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pfVar13 = fVar1;
          pfVar13 = pfVar13 + 1;
        }
      }
      pfVar12 = pfVar12 + lVar9;
      pfVar8 = pfVar8 + -1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}

// GenerateHammingWindow @ 1444bf5e0

void __cdecl Audio::GenerateHammingWindow(float *param_1,int param_2,int param_3,bool param_4)

{
  int iVar1;
  float fVar2;
  double dVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float *pfVar6;
  float fVar7;
  float _X;
  float fVar8;
  
  dVar3 = __real_3fe147ae147ae148;
  fVar2 = __real_3eeb851f;
  iVar1 = param_2;
  if (!param_4) {
    iVar1 = param_2 + -1;
  }
  _X = 0.0;
  fVar8 = __real_40c90fdb / (float)iVar1;
  if (0 < param_2) {
    uVar5 = (ulonglong)(uint)param_2;
    do {
      fVar7 = cosf(_X);
      _X = _X + fVar8;
      if (0 < param_3) {
        pfVar6 = param_1;
        for (uVar4 = (longlong)param_3 & 0x3fffffffffffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pfVar6 = (float)(dVar3 - (double)(fVar7 * fVar2));
          pfVar6 = pfVar6 + 1;
        }
      }
      param_1 = param_1 + param_3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// GenerateHannWindow @ 1444bf6e0

void __cdecl Audio::GenerateHannWindow(float *param_1,int param_2,int param_3,bool param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float *pfVar6;
  float fVar7;
  float _X;
  float fVar8;
  
  fVar3 = __real_3f000000;
  fVar2 = __real_3f800000;
  iVar1 = param_2;
  if (!param_4) {
    iVar1 = param_2 + -1;
  }
  _X = 0.0;
  fVar8 = __real_40c90fdb / (float)iVar1;
  if (0 < param_2) {
    uVar5 = (ulonglong)(uint)param_2;
    do {
      fVar7 = cosf(_X);
      _X = _X + fVar8;
      if (0 < param_3) {
        pfVar6 = param_1;
        for (uVar4 = (longlong)param_3 & 0x3fffffffffffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pfVar6 = (fVar2 - fVar7) * fVar3;
          pfVar6 = pfVar6 + 1;
        }
      }
      param_1 = param_1 + param_3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// GenerateRectangularWindow @ 1444bf7e0

void __cdecl Audio::GenerateRectangularWindow(float *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = param_2 * param_3;
  if (iVar4 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioFFT.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < iVar4) {
    for (lVar3 = (longlong)iVar4; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_1 = 1.0;
      param_1 = param_1 + 1;
    }
  }
  return;
}

// GenerateWindow @ 1444bf840

void __cdecl
Audio::GenerateWindow(float *param_1,EWindowType param_2,int param_3,int param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 != None) {
    if (param_2 == Hamming) {
      GenerateHammingWindow(param_1,param_3,param_4,param_5);
      return;
    }
    if (param_2 == Hann) {
      GenerateHannWindow(param_1,param_3,param_4,param_5);
      return;
    }
    if (param_2 == Blackman) {
      GenerateBlackmanWindow(param_1,param_3,param_4,param_5);
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioFFT.cpp"
                       ,0x78,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GenerateRectangularWindow(param_1,param_3,param_4);
  return;
}

// GetCOLAHopSizeForWindow @ 1444bfa70

uint __cdecl Audio::GetCOLAHopSizeForWindow(EWindowType param_1,uint param_2)

{
  if (param_1 != None) {
    if ((param_1 == Hamming) || (param_1 == Hann)) {
      return (int)ROUND((float)param_2 - __real_3f000000) >> 1;
    }
    if (param_1 == Blackman) {
      return (int)ROUND((float)param_2 * __real_3f2d9168 - __real_3f000000) >> 1;
    }
  }
  return param_2;
}

// GetPowerSpectrumScaling @ 1444c0920

float __cdecl Audio::GetPowerSpectrumScaling(int param_1,EFFTScaling param_2,EFFTScaling param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int local_res8 [2];
  int *local_res20;
  
  local_res8[0] = param_1;
  if (param_1 < 1) {
    local_res20 = local_res8;
    bVar1 = `Audio::GetPowerSpectrumScaling'::__l3::<lambda_1>::operator()(&local_res20);
    if (!bVar1) {
      return __real_3f800000;
    }
  }
  fVar2 = FFTIntrinsics::GetScalingExponent(param_3);
  fVar3 = FFTIntrinsics::GetScalingExponent(param_2);
  fVar2 = powf((float)local_res8[0],(fVar2 - fVar3) + (fVar2 - fVar3));
  return fVar2;
}

// GetPrioritizedSupportingFactories @ 1444c09b0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> * __cdecl
Audio::GetPrioritizedSupportingFactories
          (TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,FFFTSettings *param_1,FName *param_2)

{
  FName FVar1;
  code *pcVar2;
  FFFTSettings *pFVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  IModularFeatures *pIVar9;
  longlong lVar10;
  TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FName *pFVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  FFFTSettings *local_res10;
  FName *local_res18;
  FFFTSettings local_res20;
  TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> local_c8;
  TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> local_b8;
  TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> local_a8;
  TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> local_98;
  TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> local_88;
  longlong local_78;
  FName local_70;
  FName FStack_68;
  undefined1 local_60 [8];
  FString local_58;
  
  iVar16 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  pIVar9 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar9 + 8))(pIVar9);
  pIVar9 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&ModularFeatureName,L"AudioFFTAlgorithmFactory");
    _Init_thread_footer(&::_TSS0);
  }
  FVar1 = ModularFeatureName;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar7 = (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,FVar1);
  if (0 < iVar7) {
    do {
      lVar10 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar1,iVar16);
      pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_78 = lVar10 + -8;
      if (lVar10 == 0) {
        local_78 = 0;
      }
      if (((pFVar14 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 <
           pFVar14 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar11 = (TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar11;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      iVar16 = iVar16 + 1;
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_78;
      param_2 = local_res18;
    } while (iVar16 < iVar7);
  }
  pIVar9 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9);
  pFVar15 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = (FScriptContainerElement *)0x0;
  iVar16 = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  pFVar14 = pFVar15 + (longlong)__return_storage_ptr__->ArrayNum * 8;
  FVar13.Data = pFVar18;
  pFVar17 = pFVar18;
  FVar4.Data = local_b8.AllocatorInstance.Data;
  for (; local_b8.AllocatorInstance.Data = FVar13.Data, pFVar15 != pFVar14; pFVar15 = pFVar15 + 8) {
    FVar13.Data = local_b8.AllocatorInstance.Data;
    if (*(longlong *)pFVar15 != 0) {
      iVar16 = (int)pFVar17;
      if ((local_b8.AllocatorInstance.Data <= pFVar15) &&
         (pFVar15 < local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayMax * 8)) {
        local_b8.AllocatorInstance.Data = FVar4.Data;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar11 = (TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)()
          ;
          return pTVar11;
        }
        FVar13.Data = local_b8.AllocatorInstance.Data;
        iVar16 = local_b8.ArrayNum;
        FVar4.Data = local_b8.AllocatorInstance.Data;
      }
      local_b8.AllocatorInstance.Data = FVar4.Data;
      if (iVar16 == local_b8.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
        FVar13.Data = local_b8.AllocatorInstance.Data;
      }
      local_b8.ArrayNum = iVar16 + 1U;
      *(longlong *)(FVar13.Data + (longlong)iVar16 * 8) = *(longlong *)pFVar15;
      pFVar17 = (FScriptContainerElement *)(ulonglong)(iVar16 + 1U);
      FVar13.Data = local_b8.AllocatorInstance.Data;
      FVar4.Data = local_b8.AllocatorInstance.Data;
    }
    local_b8.AllocatorInstance.Data = FVar4.Data;
    iVar16 = (int)pFVar17;
    FVar4.Data = local_b8.AllocatorInstance.Data;
  }
  pFVar14 = local_b8.AllocatorInstance.Data;
  if (__return_storage_ptr__ != &local_b8) {
    pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      local_b8.AllocatorInstance.Data = FVar4.Data;
      FMemory::Free(pFVar14);
      iVar16 = local_b8.ArrayNum;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_b8.AllocatorInstance.Data;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = iVar16;
    __return_storage_ptr__->ArrayMax = local_b8.ArrayMax;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    pFVar14 = pFVar18;
    FVar4.Data = local_b8.AllocatorInstance.Data;
  }
  local_b8.AllocatorInstance.Data = FVar4.Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == 0) {
    if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    }
  }
  else {
    FVar1 = *param_2;
    if (FFFTFactory::AnyAlgorithmFactory != FVar1) {
      pFVar15 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      pFVar14 = pFVar15 + (longlong)iVar16 * 8;
      for (; pFVar15 != pFVar14; pFVar15 = pFVar15 + 8) {
        pFVar12 = (FName *)(**(code **)(**(longlong **)pFVar15 + 8))(*(longlong **)pFVar15,local_60)
        ;
        if (FVar1 == *pFVar12) {
          if (((local_a8.AllocatorInstance.Data <= pFVar15) &&
              (pFVar15 < local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar2)();
            return pTVar11;
          }
          iVar16 = local_a8.ArrayNum;
          if (local_a8.ArrayNum == local_a8.ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
          }
          local_a8.ArrayNum = iVar16 + 1;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + (longlong)iVar16 * 8) =
               *(undefined8 *)pFVar15;
        }
      }
      if (__return_storage_ptr__ != &local_a8) {
        pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        (__return_storage_ptr__->AllocatorInstance).Data = local_a8.AllocatorInstance.Data;
        __return_storage_ptr__->ArrayNum = local_a8.ArrayNum;
        local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayMax = local_a8.ArrayMax;
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
      }
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      iVar16 = __return_storage_ptr__->ArrayNum;
      if (iVar16 == 0) {
        if ((byte)LogSignalProcessing._0_1_ < 3) {
          return __return_storage_ptr__;
        }
        ::FName::ToString(param_2,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
        if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
    }
    pFVar3 = local_res10;
    if (local_res10->bEnableHardwareAcceleration == false) {
      pFVar15 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      pFVar14 = pFVar15 + (longlong)iVar16 * 8;
      iVar7 = 0;
      if (pFVar15 != pFVar14) {
        do {
          cVar6 = (**(code **)(**(longlong **)pFVar15 + 0x10))();
          if (cVar6 == '\0') {
            if (((local_c8.AllocatorInstance.Data <= pFVar15) &&
                (pFVar15 < local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar2 = (code *)swi(3);
              pTVar11 = (TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> *)
                        (*pcVar2)();
              return pTVar11;
            }
            iVar16 = local_c8.ArrayNum;
            if (local_c8.ArrayNum == local_c8.ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
            }
            local_c8.ArrayNum = iVar16 + 1;
            *(undefined8 *)(local_c8.AllocatorInstance.Data + (longlong)iVar16 * 8) =
                 *(undefined8 *)pFVar15;
          }
          pFVar15 = pFVar15 + 8;
        } while (pFVar15 != pFVar14);
        pFVar15 = (__return_storage_ptr__->AllocatorInstance).Data;
        iVar16 = __return_storage_ptr__->ArrayNum;
        iVar7 = local_c8.ArrayNum;
      }
      if (__return_storage_ptr__ != &local_c8) {
        iVar16 = iVar7;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
          iVar16 = local_c8.ArrayNum;
        }
        (__return_storage_ptr__->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
        local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayNum = iVar16;
        __return_storage_ptr__->ArrayMax = local_c8.ArrayMax;
        local_c8.ArrayNum = 0;
        local_c8.ArrayMax = 0;
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
        iVar16 = __return_storage_ptr__->ArrayNum;
      }
    }
    if (pFVar3->bArrays128BitAligned == false) {
      pFVar15 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      pFVar14 = pFVar15 + (longlong)iVar16 * 8;
      if (pFVar15 != pFVar14) {
        do {
          cVar6 = (**(code **)(**(longlong **)pFVar15 + 0x18))();
          if (cVar6 == '\0') {
            if (((local_98.AllocatorInstance.Data <= pFVar15) &&
                (pFVar15 < local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar2 = (code *)swi(3);
              pTVar11 = (TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> *)
                        (*pcVar2)();
              return pTVar11;
            }
            iVar16 = local_98.ArrayNum;
            if (local_98.ArrayNum == local_98.ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_98.AllocatorInstance,&local_98.ArrayMax);
            }
            local_98.ArrayNum = iVar16 + 1;
            *(undefined8 *)(local_98.AllocatorInstance.Data + (longlong)iVar16 * 8) =
                 *(undefined8 *)pFVar15;
          }
          pFVar15 = pFVar15 + 8;
        } while (pFVar15 != pFVar14);
        pFVar15 = (__return_storage_ptr__->AllocatorInstance).Data;
      }
      if (__return_storage_ptr__ != &local_98) {
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        (__return_storage_ptr__->AllocatorInstance).Data = local_98.AllocatorInstance.Data;
        __return_storage_ptr__->ArrayNum = local_98.ArrayNum;
        local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayMax = local_98.ArrayMax;
        local_98.ArrayNum = 0;
        local_98.ArrayMax = 0;
      }
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
    }
    local_res20 = *pFVar3;
    pFVar15 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    pFVar14 = pFVar15 + (longlong)__return_storage_ptr__->ArrayNum * 8;
    if (pFVar15 != pFVar14) {
      do {
        cVar6 = (**(code **)(**(longlong **)pFVar15 + 0x20))(*(longlong **)pFVar15,&local_res20);
        if (cVar6 != '\0') {
          if (((local_88.AllocatorInstance.Data <= pFVar15) &&
              (pFVar15 < local_88.AllocatorInstance.Data + (longlong)local_88.ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar2)();
            return pTVar11;
          }
          iVar16 = local_88.ArrayNum;
          if (local_88.ArrayNum == local_88.ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_88.AllocatorInstance,&local_88.ArrayMax);
          }
          local_88.ArrayNum = iVar16 + 1;
          *(undefined8 *)(local_88.AllocatorInstance.Data + (longlong)iVar16 * 8) =
               *(undefined8 *)pFVar15;
        }
        pFVar15 = pFVar15 + 8;
      } while (pFVar15 != pFVar14);
      pFVar15 = (__return_storage_ptr__->AllocatorInstance).Data;
    }
    if (__return_storage_ptr__ != &local_88) {
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_88.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_88.ArrayNum;
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayMax = local_88.ArrayMax;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&local_70,L"FVectorFFTFactory");
      ::FName::FName(&FStack_68,L"OriginalFFT_Deprecated");
      InternalFFTFActoryPriority.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      InternalFFTFActoryPriority.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,2,0,&InternalFFTFActoryPriority.AllocatorInstance,2,
                 &InternalFFTFActoryPriority.ArrayMax);
      FVar4 = InternalFFTFActoryPriority.AllocatorInstance;
      *(FName *)InternalFFTFActoryPriority.AllocatorInstance.Data = local_70;
      *(FName *)(FVar4.Data + 8) = FStack_68;
      atexit(`Audio::GetPrioritizedSupportingFactories'::__l2::
             _dynamic_atexit_destructor_for__InternalFFTFActoryPriority__);
      _Init_thread_footer(&::_TSS0);
    }
    AlgoImpl::
    IntroSortInternal<Audio::IFFTAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IFFTAlgorithmFactory_*,_Audio::GetPrioritizedSupportingFactories_::__l2::<lambda_6>_>_>
              ((IFFTAlgorithmFactory **)(__return_storage_ptr__->AllocatorInstance).Data,
               __return_storage_ptr__->ArrayNum,local_res18._0_1_,(<lambda_6> *)local_res8);
  }
  return __return_storage_ptr__;
}

// HandleDiagnosticsCmd @ 1444c1530

void __cdecl
BufferDiagnosticsPrivate::HandleDiagnosticsCmd
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FOutputDevice *param_2)

{
  FCheckedBufferState *pFVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  TOptional<FString> *pTVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  ECheckBufferFlags EVar9;
  undefined8 uVar10;
  EBufferCheckBehavior local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c8 [8];
  TOptional<FString>_u_0 local_c0;
  undefined1 local_b0 [4];
  ECheckBufferFlags local_ac;
  ECheckBufferFlags local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  undefined4 *local_78;
  FString *local_70;
  EBufferCheckBehavior *local_68;
  ECheckBufferFlags *local_60;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  FOutputDevice *local_40;
  
  pTVar5 = FindArg((TOptional<FString> *)&local_c0.TypedValue,L"-Help",param_1);
  iVar4 = *(int *)((longlong)&pTVar5->field0_0x0 + 0xc);
  if ((local_c0.TypedValue.Data.ArrayMax != -1) &&
     (local_c0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_c0.TypedValue.Data.AllocatorInstance.Data);
  }
  if (iVar4 == -1) {
    EVar9 = None;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    FindArg((TOptional<FString> *)&local_c0.TypedValue,L"-Filter=",param_1);
    uVar3 = local_c0.TypedValue.Data.ArrayMax;
    uVar2 = local_c0.TypedValue.Data.AllocatorInstance.Data;
    if (local_c0.TypedValue.Data.ArrayMax != -1) {
      iVar4 = local_c0.TypedValue.Data.ArrayNum + -1;
      if (local_c0.TypedValue.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AssignRange
                (&local_88,(wchar_t *)local_c0.TypedValue.Data.AllocatorInstance.Data,iVar4);
      if ((uVar3 != -1) && ((FScriptContainerElement *)uVar2 != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)uVar2);
      }
    }
    local_res18[0] = Ensure;
    FindArg((TOptional<FString> *)&local_c0.TypedValue,L"-Behavior=",param_1);
    uVar3 = local_c0.TypedValue.Data.ArrayMax;
    uVar2 = local_c0.TypedValue.Data.AllocatorInstance.Data;
    if (local_c0.TypedValue.Data.ArrayMax != -1) {
      uVar10 = L"";
      if (local_c0.TypedValue.Data.ArrayNum != 0) {
        uVar10 = local_c0.TypedValue.Data.AllocatorInstance.Data;
      }
      pwVar6 = LexToString(Nothing);
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)uVar10,pwVar6);
      if (iVar4 == 0) {
        local_res18[0] = Nothing;
      }
      else {
        pwVar6 = LexToString(Ensure);
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)uVar10,pwVar6);
        if (iVar4 != 0) {
          pwVar6 = LexToString(Log);
          iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)uVar10,pwVar6);
          if (iVar4 == 0) {
            local_res18[0] = Log;
          }
          else {
            pwVar6 = LexToString(Break);
            iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)uVar10,pwVar6);
            if (iVar4 == 0) {
              local_res18[0] = Break;
            }
          }
        }
      }
      if ((uVar3 != -1) && ((FScriptContainerElement *)uVar2 != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)uVar2);
      }
    }
    local_ac = All;
    FindArg((TOptional<FString> *)&local_c0.TypedValue,L"-Checks=",param_1);
    if (local_c0.TypedValue.Data.ArrayMax != -1) {
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      ::FString::ParseIntoArray(&local_c0.TypedValue,&local_98,Delims,3,true);
      iVar4 = local_98.ArrayNum;
      pFVar8 = local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10;
      FVar7.Data = local_98.AllocatorInstance.Data;
      while( true ) {
        if (local_98.ArrayNum != iVar4) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_b0);
        }
        if (FVar7.Data == pFVar8) break;
        local_a8 = None;
        if (*(int *)(FVar7.Data + 8) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = *(wchar_t **)FVar7.Data;
        }
        TryLexFromString(pwVar6,&local_a8);
        EVar9 = EVar9 | local_a8;
        FVar7.Data = FVar7.Data + 0x10;
      }
      local_ac = EVar9;
      DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
    }
    if ((local_c0.TypedValue.Data.ArrayMax != -1) &&
       (local_c0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_c0.TypedValue.Data.AllocatorInstance.Data);
    }
    local_c8[0] = 0;
    pTVar5 = FindArg((TOptional<FString> *)&local_c0.TypedValue,L"-Verbose",param_1);
    iVar4 = *(int *)((longlong)&pTVar5->field0_0x0 + 0xc);
    if ((local_c0.TypedValue.Data.ArrayMax != -1) &&
       (local_c0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_c0.TypedValue.Data.AllocatorInstance.Data);
    }
    if (iVar4 != -1) {
      local_c8[0] = 1;
    }
    local_res20[0] = 0;
    pTVar5 = FindArg((TOptional<FString> *)&local_c0.TypedValue,L"-Reset",param_1);
    iVar4 = *(int *)((longlong)&pTVar5->field0_0x0 + 0xc);
    if ((local_c0.TypedValue.Data.ArrayMax != -1) &&
       (local_c0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_c0.TypedValue.Data.AllocatorInstance.Data);
    }
    if (iVar4 != -1) {
      local_res20[0] = 1;
    }
    LexToString(local_res18[0]);
    ToDelimString(&local_c0.TypedValue,local_ac);
    FOutputDevice::LogfImpl
              (param_2,L"Submix Buffer Diagnostics. UsingFlags=\'%s\', Behavior=\'%s\'");
    if (local_c0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c0.TypedValue.Data.AllocatorInstance.Data);
    }
    local_78 = local_a0;
    local_a0[0] = 0;
    local_70 = &local_88;
    local_a4 = 0;
    local_68 = local_res18;
    local_60 = &local_ac;
    local_58 = local_res20;
    local_50 = &local_a4;
    local_48 = local_c8;
    local_40 = param_2;
    EnterCriticalSection((LPCRITICAL_SECTION)&Audio::FCheckedBufferState::ListCs);
    for (pFVar1 = Audio::FCheckedBufferState::Head; pFVar1 != (FCheckedBufferState *)0x0;
        pFVar1 = pFVar1->Next) {
      `BufferDiagnosticsPrivate::HandleDiagnosticsCmd'::__l2::<lambda_1>::operator()
                (&local_78,pFVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&Audio::FCheckedBufferState::ListCs);
    FOutputDevice::LogfImpl(param_2,L"TotalChecks=%d, Filtered=%d");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    return;
  }
  FOutputDevice::Log(param_2,
                     L"-Filter=<match> -Behavior=Break|Log|Ensure|Nothing -Check=Nan|Infinity|Denormalized|All -Reset -Verbose -Help"
                    );
  return;
}

// LagrangianInterpolation @ 1444c4c60

float __cdecl
Audio::LagrangianInterpolation
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong local_res8;
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_3f800000;
  fVar13 = __real_322bcc77;
  lVar7 = (longlong)param_1->ArrayNum;
  fVar16 = 0.0;
  uVar9 = 0;
  if (0 < lVar7) {
    lVar11 = 0;
    local_res8 = lVar7;
    do {
      uVar8 = 0;
      lVar12 = 0;
      lVar10 = lVar7;
      fVar15 = fVar3;
      do {
        if (uVar9 != uVar8) {
          uVar6 = 0;
          if ((int)uVar9 < param_1->ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            fVar13 = (float)(*pcVar2)();
            return fVar13;
          }
          pFVar1 = (param_1->AllocatorInstance).Data;
          uVar6 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            fVar13 = (float)(*pcVar2)();
            return fVar13;
          }
          fVar14 = (float)(*(double *)(pFVar1 + lVar11) -
                          *(double *)((param_1->AllocatorInstance).Data + lVar12));
          if ((float)((uint)fVar14 & uVar4) < fVar13) {
            fVar14 = fVar13;
          }
          uVar6 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            fVar13 = (float)(*pcVar2)();
            return fVar13;
          }
          fVar15 = fVar15 * ((param_2 -
                             (float)*(double *)((param_1->AllocatorInstance).Data + lVar12)) /
                            fVar14);
        }
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 0x10;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar8 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        fVar13 = (float)(*pcVar2)();
        return fVar13;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar11 + 8;
      lVar11 = lVar11 + 0x10;
      local_res8 = local_res8 + -1;
      fVar16 = fVar16 + (float)*(double *)((param_1->AllocatorInstance).Data + lVar10) * fVar15;
    } while (local_res8 != 0);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return fVar16;
}

// LexToString @ 1444c4f50

wchar_t * __cdecl BufferDiagnosticsPrivate::LexToString(EBufferCheckBehavior param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  if (param_1 == Nothing) {
    wVar1 = L'E';
    pwVar2 = L"EBufferCheckBehavior::Nothing";
    while (wVar1 != L':') {
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
      if (wVar1 == L'\0') {
        return L"EBufferCheckBehavior::Nothing";
      }
    }
  }
  else if (param_1 == Ensure) {
    wVar1 = L'E';
    pwVar2 = L"EBufferCheckBehavior::Ensure";
    while (wVar1 != L':') {
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
      if (wVar1 == L'\0') {
        return L"EBufferCheckBehavior::Ensure";
      }
    }
  }
  else if (param_1 == Log) {
    wVar1 = L'E';
    pwVar2 = L"EBufferCheckBehavior::Log";
    while (wVar1 != L':') {
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
      if (wVar1 == L'\0') {
        return L"EBufferCheckBehavior::Log";
      }
    }
  }
  else {
    if (param_1 != Break) {
      return L"Unknown EBufferCheckBehavior";
    }
    wVar1 = L'E';
    pwVar2 = L"EBufferCheckBehavior::Break";
    while (wVar1 != L':') {
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
      if (wVar1 == L'\0') {
        return L"EBufferCheckBehavior::Break";
      }
    }
  }
  return pwVar2 + 2;
}

// LexToString @ 1444c5040

wchar_t * __cdecl BufferDiagnosticsPrivate::LexToString(ECheckBufferFlags param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  if (param_1 == None) {
    wVar1 = L'E';
    pwVar2 = L"ECheckBufferFlags::None";
    while (wVar1 != L':') {
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
      if (wVar1 == L'\0') {
        return L"ECheckBufferFlags::None";
      }
    }
  }
  else if (param_1 == Infinity) {
    wVar1 = L'E';
    pwVar2 = L"ECheckBufferFlags::Infinity";
    while (wVar1 != L':') {
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
      if (wVar1 == L'\0') {
        return L"ECheckBufferFlags::Infinity";
      }
    }
  }
  else if (param_1 == Nan) {
    wVar1 = L'E';
    pwVar2 = L"ECheckBufferFlags::Nan";
    while (wVar1 != L':') {
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
      if (wVar1 == L'\0') {
        return L"ECheckBufferFlags::Nan";
      }
    }
  }
  else if (param_1 == Denormalized) {
    wVar1 = L'E';
    pwVar2 = L"ECheckBufferFlags::Denormalized";
    while (wVar1 != L':') {
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
      if (wVar1 == L'\0') {
        return L"ECheckBufferFlags::Denormalized";
      }
    }
  }
  else {
    if (param_1 != All) {
      return L"Unknown ECheckBufferFlags";
    }
    wVar1 = L'E';
    pwVar2 = L"ECheckBufferFlags::All";
    while (wVar1 != L':') {
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
      if (wVar1 == L'\0') {
        return L"ECheckBufferFlags::All";
      }
    }
  }
  return pwVar2 + 2;
}

// Mix2ChannelsTo2ChannelsFast @ 1444c5170

void __cdecl
Audio::Mix2ChannelsTo2ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3,float *param_4)

{
  Mix2ChannelsTo2ChannelsFast
            ((float *)(param_1->AllocatorInstance).Data,(float *)(param_2->AllocatorInstance).Data,
             param_2->ArrayNum / 2,param_3,param_4);
  return;
}

// Mix2ChannelsTo2ChannelsFast @ 1444c51b0

void __cdecl
Audio::Mix2ChannelsTo2ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pFVar6 = (param_2->AllocatorInstance).Data;
  pFVar7 = (param_1->AllocatorInstance).Data;
  fVar11 = (float)*(undefined8 *)param_3;
  fVar12 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  iVar8 = param_2->ArrayNum / 2;
  fVar13 = (float)*(undefined8 *)(param_3 + 2);
  fVar14 = (float)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
  if (0 < iVar8) {
    pFVar9 = pFVar7 + 0xc;
    lVar10 = ((longlong)iVar8 - 1U >> 1) + 1;
    do {
      fVar2 = *(float *)(pFVar9 + -8);
      fVar3 = *(float *)pFVar9;
      fVar4 = *(float *)(pFVar9 + -0xc);
      fVar5 = *(float *)(pFVar9 + -4);
      pFVar1 = pFVar9 + (longlong)(pFVar6 + (-0xc - (longlong)pFVar7));
      *(float *)pFVar1 = fVar2 * fVar13 + fVar4 * fVar11;
      *(float *)(pFVar1 + 4) = fVar2 * fVar14 + fVar4 * fVar12;
      *(float *)(pFVar1 + 8) = fVar3 * fVar13 + fVar5 * fVar11;
      *(float *)(pFVar1 + 0xc) = fVar3 * fVar14 + fVar5 * fVar12;
      pFVar9 = pFVar9 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// Mix2ChannelsTo2ChannelsFast @ 1444c5270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::Mix2ChannelsTo2ChannelsFast
          (float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  fVar18 = (float)*(undefined8 *)param_4;
  fVar4 = (float)*(undefined8 *)param_5;
  auVar20._0_4_ = fVar4 - fVar18;
  fVar19 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  fVar14 = (float)((ulonglong)*(undefined8 *)param_5 >> 0x20);
  auVar20._4_4_ = fVar14 - fVar19;
  auVar20._8_4_ = fVar4 - fVar18;
  auVar20._12_4_ = fVar14 - fVar19;
  fVar4 = (float)param_3 * __real_3f000000;
  auVar21._4_4_ = fVar4;
  auVar21._0_4_ = fVar4;
  auVar21._8_4_ = fVar4;
  auVar21._12_4_ = fVar4;
  auVar21 = divps(auVar20,auVar21);
  fVar16 = ___xmm_3f8000003f8000003f0000003f000000 * auVar21._0_4_ + fVar18;
  fVar17 = _UNK_150d56614 * auVar21._4_4_ + fVar19;
  fVar18 = _UNK_150d56618 * auVar21._8_4_ + fVar18;
  fVar19 = _UNK_150d5661c * auVar21._12_4_ + fVar19;
  fVar14 = (float)*(undefined8 *)(param_4 + 2);
  fVar13 = (float)*(undefined8 *)(param_5 + 2);
  auVar22._0_4_ = fVar13 - fVar14;
  fVar15 = (float)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20);
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_5 + 2) >> 0x20);
  auVar22._4_4_ = fVar5 - fVar15;
  auVar22._8_4_ = fVar13 - fVar14;
  auVar22._12_4_ = fVar5 - fVar15;
  auVar23._4_4_ = fVar4;
  auVar23._0_4_ = fVar4;
  auVar23._8_4_ = fVar4;
  auVar23._12_4_ = fVar4;
  auVar23 = divps(auVar22,auVar23);
  fVar4 = ___xmm_3f8000003f8000003f0000003f000000 * auVar23._0_4_ + fVar14;
  fVar13 = _UNK_150d56614 * auVar23._4_4_ + fVar15;
  fVar14 = _UNK_150d56618 * auVar23._8_4_ + fVar14;
  fVar15 = _UNK_150d5661c * auVar23._12_4_ + fVar15;
  if (0 < param_3) {
    pfVar2 = param_1 + 3;
    uVar3 = (ulonglong)((param_3 - 1U >> 1) + 1);
    do {
      fVar9 = pfVar2[-2] * fVar4;
      fVar10 = pfVar2[-2] * fVar13;
      fVar11 = *pfVar2 * fVar14;
      fVar12 = *pfVar2 * fVar15;
      fVar4 = fVar4 + auVar23._0_4_;
      fVar13 = fVar13 + auVar23._4_4_;
      fVar14 = fVar14 + auVar23._8_4_;
      fVar15 = fVar15 + auVar23._12_4_;
      fVar5 = pfVar2[-3] * fVar16;
      fVar6 = pfVar2[-3] * fVar17;
      fVar7 = pfVar2[-1] * fVar18;
      fVar8 = pfVar2[-1] * fVar19;
      fVar16 = fVar16 + auVar21._0_4_;
      fVar17 = fVar17 + auVar21._4_4_;
      fVar18 = fVar18 + auVar21._8_4_;
      fVar19 = fVar19 + auVar21._12_4_;
      pfVar1 = (float *)((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)pfVar2);
      *pfVar1 = fVar9 + fVar5;
      pfVar1[1] = fVar10 + fVar6;
      pfVar1[2] = fVar11 + fVar7;
      pfVar1[3] = fVar12 + fVar8;
      pfVar2 = pfVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// Mix2ChannelsTo2ChannelsFast @ 1444c53a0

void __cdecl
Audio::Mix2ChannelsTo2ChannelsFast(float *param_1,float *param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < param_3) {
    fVar8 = (float)*(undefined8 *)param_4;
    fVar9 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
    fVar10 = (float)*(undefined8 *)(param_4 + 2);
    fVar11 = (float)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20);
    pfVar6 = param_1 + 3;
    uVar7 = (ulonglong)((param_3 - 1U >> 1) + 1);
    do {
      fVar2 = pfVar6[-3];
      fVar3 = pfVar6[-2];
      fVar4 = *pfVar6;
      fVar5 = pfVar6[-1];
      pfVar1 = (float *)((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)pfVar6);
      *pfVar1 = fVar2 * fVar8 + fVar3 * fVar10;
      pfVar1[1] = fVar2 * fVar9 + fVar3 * fVar11;
      pfVar1[2] = fVar5 * fVar8 + fVar4 * fVar10;
      pfVar1[3] = fVar5 * fVar9 + fVar4 * fVar11;
      pfVar6 = pfVar6 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// Mix2ChannelsTo4ChannelsFast @ 1444c5450

void __cdecl
Audio::Mix2ChannelsTo4ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3,float *param_4)

{
  Mix2ChannelsTo4ChannelsFast
            ((float *)(param_1->AllocatorInstance).Data,(float *)(param_2->AllocatorInstance).Data,
             (int)((param_2->ArrayNum >> 0x1f & 3U) + param_2->ArrayNum) >> 2,param_3,param_4);
  return;
}

// Mix2ChannelsTo4ChannelsFast @ 1444c5490

void __cdecl
Audio::Mix2ChannelsTo4ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3)

{
  Mix2ChannelsTo4ChannelsFast
            ((float *)(param_1->AllocatorInstance).Data,(float *)(param_2->AllocatorInstance).Data,
             (int)((param_2->ArrayNum >> 0x1f & 3U) + param_2->ArrayNum) >> 2,param_3);
  return;
}

// Mix2ChannelsTo4ChannelsFast @ 1444c54c0

void __cdecl
Audio::Mix2ChannelsTo4ChannelsFast
          (float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar41;
  float fVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar43;
  
  fVar14 = *param_4;
  fVar16 = param_4[1];
  fVar18 = param_4[2];
  fVar20 = param_4[3];
  lVar4 = (longlong)param_3;
  fVar23 = param_4[4];
  fVar26 = param_4[5];
  fVar29 = param_4[6];
  fVar32 = param_4[7];
  lVar1 = 0;
  auVar34._0_4_ = *param_5 - fVar14;
  auVar34._4_4_ = param_5[1] - fVar16;
  auVar34._8_4_ = param_5[2] - fVar18;
  auVar34._12_4_ = param_5[3] - fVar20;
  auVar39._0_4_ = param_5[4] - fVar23;
  auVar39._4_4_ = param_5[5] - fVar26;
  auVar39._8_4_ = param_5[6] - fVar29;
  auVar39._12_4_ = param_5[7] - fVar32;
  auVar40._0_4_ = (float)param_3;
  auVar40._4_4_ = auVar40._0_4_;
  auVar40._8_4_ = auVar40._0_4_;
  auVar40._12_4_ = auVar40._0_4_;
  auVar34 = divps(auVar34,auVar40);
  auVar40 = divps(auVar39,auVar40);
  fVar33 = auVar34._0_4_;
  fVar35 = auVar34._4_4_;
  fVar36 = auVar34._8_4_;
  fVar37 = auVar34._12_4_;
  fVar38 = auVar40._0_4_;
  fVar41 = auVar40._4_4_;
  fVar42 = auVar40._8_4_;
  fVar43 = auVar40._12_4_;
  if (3 < lVar4) {
    pfVar3 = param_1 + 3;
    pfVar5 = param_2 + 8;
    lVar2 = (lVar4 - 4U >> 2) + 1;
    lVar1 = lVar2 * 4;
    do {
      fVar8 = pfVar3[-2];
      fVar7 = pfVar3[-3];
      fVar21 = fVar33 + fVar33 + fVar14;
      fVar24 = fVar35 + fVar35 + fVar16;
      fVar27 = fVar36 + fVar36 + fVar18;
      fVar30 = fVar37 + fVar37 + fVar20;
      fVar6 = *pfVar3;
      pfVar5[-8] = fVar8 * fVar23 + fVar7 * fVar14;
      pfVar5[-7] = fVar8 * fVar26 + fVar7 * fVar16;
      pfVar5[-6] = fVar8 * fVar29 + fVar7 * fVar18;
      pfVar5[-5] = fVar8 * fVar32 + fVar7 * fVar20;
      fVar8 = pfVar3[-1];
      fVar9 = fVar38 + fVar38 + fVar23;
      fVar10 = fVar41 + fVar41 + fVar26;
      fVar11 = fVar42 + fVar42 + fVar29;
      fVar12 = fVar43 + fVar43 + fVar32;
      fVar13 = fVar33 + fVar21;
      fVar15 = fVar35 + fVar24;
      fVar17 = fVar36 + fVar27;
      fVar19 = fVar37 + fVar30;
      fVar7 = pfVar3[1];
      fVar22 = fVar38 + fVar9;
      fVar25 = fVar41 + fVar10;
      fVar28 = fVar42 + fVar11;
      fVar31 = fVar43 + fVar12;
      pfVar5[-4] = fVar8 * (fVar33 + fVar14) + fVar6 * (fVar38 + fVar23);
      pfVar5[-3] = fVar8 * (fVar35 + fVar16) + fVar6 * (fVar41 + fVar26);
      pfVar5[-2] = fVar8 * (fVar36 + fVar18) + fVar6 * (fVar42 + fVar29);
      pfVar5[-1] = fVar8 * (fVar37 + fVar20) + fVar6 * (fVar43 + fVar32);
      fVar23 = pfVar3[2];
      fVar8 = pfVar3[3];
      fVar14 = fVar13 + fVar33;
      fVar16 = fVar15 + fVar35;
      fVar18 = fVar17 + fVar36;
      fVar20 = fVar19 + fVar37;
      *pfVar5 = fVar23 * fVar9 + fVar7 * fVar21;
      pfVar5[1] = fVar23 * fVar10 + fVar7 * fVar24;
      pfVar5[2] = fVar23 * fVar11 + fVar7 * fVar27;
      pfVar5[3] = fVar23 * fVar12 + fVar7 * fVar30;
      fVar7 = pfVar3[4];
      pfVar3 = pfVar3 + 8;
      fVar23 = fVar22 + fVar38;
      fVar26 = fVar25 + fVar41;
      fVar29 = fVar28 + fVar42;
      fVar32 = fVar31 + fVar43;
      pfVar5[4] = fVar7 * fVar22 + fVar8 * fVar13;
      pfVar5[5] = fVar7 * fVar25 + fVar8 * fVar15;
      pfVar5[6] = fVar7 * fVar28 + fVar8 * fVar17;
      pfVar5[7] = fVar7 * fVar31 + fVar8 * fVar19;
      pfVar5 = pfVar5 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lVar1 < lVar4) {
    pfVar3 = param_2 + lVar1 * 4;
    do {
      fVar8 = param_1[lVar1 * 2 + 1];
      fVar7 = param_1[lVar1 * 2];
      lVar1 = lVar1 + 1;
      fVar11 = fVar8 * fVar23;
      fVar12 = fVar8 * fVar26;
      fVar13 = fVar8 * fVar29;
      fVar8 = fVar8 * fVar32;
      fVar23 = fVar23 + fVar38;
      fVar26 = fVar26 + fVar41;
      fVar29 = fVar29 + fVar42;
      fVar32 = fVar32 + fVar43;
      fVar6 = fVar7 * fVar14;
      fVar9 = fVar7 * fVar16;
      fVar10 = fVar7 * fVar18;
      fVar7 = fVar7 * fVar20;
      fVar14 = fVar14 + fVar33;
      fVar16 = fVar16 + fVar35;
      fVar18 = fVar18 + fVar36;
      fVar20 = fVar20 + fVar37;
      *pfVar3 = fVar11 + fVar6;
      pfVar3[1] = fVar12 + fVar9;
      pfVar3[2] = fVar13 + fVar10;
      pfVar3[3] = fVar8 + fVar7;
      pfVar3 = pfVar3 + 4;
    } while (lVar1 < lVar4);
  }
  return;
}

// Mix2ChannelsTo4ChannelsFast @ 1444c5650

void __cdecl
Audio::Mix2ChannelsTo4ChannelsFast(float *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  lVar13 = 0;
  fVar9 = param_4[4];
  fVar10 = param_4[5];
  fVar11 = param_4[6];
  fVar12 = param_4[7];
  lVar16 = (longlong)param_3;
  if (3 < lVar16) {
    pfVar14 = param_2 + 8;
    lVar15 = (lVar16 - 4U >> 2) + 1;
    pfVar17 = param_1 + 3;
    lVar13 = lVar15 * 4;
    do {
      fVar1 = pfVar17[-2];
      fVar2 = pfVar17[-3];
      fVar3 = pfVar17[-1];
      fVar4 = *pfVar17;
      pfVar14[-8] = fVar1 * fVar9 + fVar2 * fVar5;
      pfVar14[-7] = fVar1 * fVar10 + fVar2 * fVar6;
      pfVar14[-6] = fVar1 * fVar11 + fVar2 * fVar7;
      pfVar14[-5] = fVar1 * fVar12 + fVar2 * fVar8;
      fVar1 = pfVar17[2];
      fVar2 = pfVar17[1];
      pfVar14[-4] = fVar3 * fVar5 + fVar4 * fVar9;
      pfVar14[-3] = fVar3 * fVar6 + fVar4 * fVar10;
      pfVar14[-2] = fVar3 * fVar7 + fVar4 * fVar11;
      pfVar14[-1] = fVar3 * fVar8 + fVar4 * fVar12;
      fVar3 = pfVar17[4];
      fVar4 = pfVar17[3];
      pfVar17 = pfVar17 + 8;
      *pfVar14 = fVar1 * fVar9 + fVar2 * fVar5;
      pfVar14[1] = fVar1 * fVar10 + fVar2 * fVar6;
      pfVar14[2] = fVar1 * fVar11 + fVar2 * fVar7;
      pfVar14[3] = fVar1 * fVar12 + fVar2 * fVar8;
      pfVar14[4] = fVar3 * fVar9 + fVar4 * fVar5;
      pfVar14[5] = fVar3 * fVar10 + fVar4 * fVar6;
      pfVar14[6] = fVar3 * fVar11 + fVar4 * fVar7;
      pfVar14[7] = fVar3 * fVar12 + fVar4 * fVar8;
      pfVar14 = pfVar14 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  if (lVar13 < lVar16) {
    pfVar14 = param_2 + lVar13 * 4;
    do {
      fVar1 = param_1[lVar13 * 2 + 1];
      fVar2 = param_1[lVar13 * 2];
      lVar13 = lVar13 + 1;
      *pfVar14 = fVar1 * fVar9 + fVar2 * fVar5;
      pfVar14[1] = fVar1 * fVar10 + fVar2 * fVar6;
      pfVar14[2] = fVar1 * fVar11 + fVar2 * fVar7;
      pfVar14[3] = fVar1 * fVar12 + fVar2 * fVar8;
      pfVar14 = pfVar14 + 4;
    } while (lVar13 < lVar16);
  }
  return;
}

// Mix2ChannelsTo6ChannelsFast @ 1444c5770

void __cdecl
Audio::Mix2ChannelsTo6ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3,float *param_4)

{
  int iVar1;
  
  iVar1 = param_2->ArrayNum;
  Mix2ChannelsTo6ChannelsFast
            ((float *)(param_1->AllocatorInstance).Data,(float *)(param_2->AllocatorInstance).Data,
             iVar1 / 6 + (iVar1 >> 0x1f) +
             (int)(((longlong)iVar1 / 6 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f),param_3,
             param_4);
  return;
}

// Mix2ChannelsTo6ChannelsFast @ 1444c57b0

void __cdecl
Audio::Mix2ChannelsTo6ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  longlong lVar29;
  
  pFVar8 = (param_2->AllocatorInstance).Data;
  iVar28 = param_2->ArrayNum;
  uVar6 = *(undefined8 *)(param_3 + 4);
  uVar7 = *(undefined8 *)(param_3 + 10);
  pFVar9 = (param_1->AllocatorInstance).Data;
  fVar10 = *param_3;
  fVar11 = param_3[1];
  fVar12 = param_3[2];
  fVar13 = param_3[3];
  iVar28 = iVar28 / 6 + (iVar28 >> 0x1f) +
           (int)(((longlong)iVar28 / 6 + ((longlong)iVar28 >> 0x3f) & 0xffffffffU) >> 0x1f);
  fVar14 = param_3[6];
  fVar15 = param_3[7];
  fVar16 = param_3[8];
  fVar17 = param_3[9];
  fVar18 = param_3[2];
  fVar19 = param_3[3];
  fVar20 = param_3[4];
  fVar21 = param_3[5];
  fVar22 = param_3[8];
  fVar23 = param_3[9];
  fVar24 = param_3[10];
  fVar25 = param_3[0xb];
  if (0 < iVar28) {
    lVar26 = 0;
    lVar27 = 0;
    lVar29 = 0;
    do {
      fVar2 = *(float *)(pFVar9 + lVar26 * 8);
      fVar3 = *(float *)(pFVar9 + lVar26 * 8 + 4);
      fVar4 = *(float *)(pFVar9 + lVar29 + 8);
      fVar5 = *(float *)(pFVar9 + lVar26 * 8 + 0xc);
      lVar26 = lVar26 + 2;
      lVar29 = lVar29 + 0x10;
      pFVar1 = pFVar8 + lVar27;
      *(float *)pFVar1 = fVar2 * fVar10 + fVar3 * fVar14;
      *(float *)(pFVar1 + 4) = fVar2 * fVar11 + fVar3 * fVar15;
      *(float *)(pFVar1 + 8) = fVar2 * fVar12 + fVar3 * fVar16;
      *(float *)(pFVar1 + 0xc) = fVar2 * fVar13 + fVar3 * fVar17;
      pFVar1 = pFVar8 + lVar27 + 0x10;
      *(float *)pFVar1 = fVar2 * (float)uVar6 + fVar3 * (float)uVar7;
      *(float *)(pFVar1 + 4) =
           fVar2 * (float)((ulonglong)uVar6 >> 0x20) + fVar3 * (float)((ulonglong)uVar7 >> 0x20);
      *(float *)(pFVar1 + 8) = fVar4 * fVar10 + fVar5 * fVar14;
      *(float *)(pFVar1 + 0xc) = fVar4 * fVar11 + fVar5 * fVar15;
      pFVar1 = pFVar8 + lVar27 + 0x20;
      *(float *)pFVar1 = fVar5 * fVar22 + fVar4 * fVar18;
      *(float *)(pFVar1 + 4) = fVar5 * fVar23 + fVar4 * fVar19;
      *(float *)(pFVar1 + 8) = fVar5 * fVar24 + fVar4 * fVar20;
      *(float *)(pFVar1 + 0xc) = fVar5 * fVar25 + fVar4 * fVar21;
      lVar27 = lVar27 + 0x30;
    } while (lVar26 < iVar28);
  }
  return;
}

// Mix2ChannelsTo6ChannelsFast @ 1444c5920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::Mix2ChannelsTo6ChannelsFast
          (float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  fVar36 = *param_4;
  fVar37 = param_4[1];
  fVar38 = param_4[2];
  fVar39 = param_4[3];
  fVar40 = param_4[6];
  fVar41 = param_4[7];
  fVar42 = param_4[8];
  fVar43 = param_4[9];
  fVar28 = (float)*(undefined8 *)(param_4 + 4);
  auVar44._0_4_ = (float)*(undefined8 *)(param_5 + 4) - fVar28;
  fVar29 = (float)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20);
  auVar44._4_4_ = (float)((ulonglong)*(undefined8 *)(param_5 + 4) >> 0x20) - fVar29;
  auVar44._8_4_ = (float)*(undefined8 *)param_5 - fVar36;
  auVar44._12_4_ = (float)((ulonglong)*(undefined8 *)param_5 >> 0x20) - fVar37;
  auVar22._0_4_ = param_5[6] - fVar40;
  auVar22._4_4_ = param_5[7] - fVar41;
  auVar22._8_4_ = param_5[8] - fVar42;
  auVar22._12_4_ = param_5[9] - fVar43;
  auVar49._0_4_ = *param_5 - fVar36;
  auVar49._4_4_ = param_5[1] - fVar37;
  auVar49._8_4_ = param_5[2] - fVar38;
  auVar49._12_4_ = param_5[3] - fVar39;
  fVar5 = (float)param_3 * __real_3f000000;
  auVar23._4_4_ = fVar5;
  auVar23._0_4_ = fVar5;
  auVar23._8_4_ = fVar5;
  auVar23._12_4_ = fVar5;
  auVar44 = divps(auVar44,auVar23);
  auVar47._0_4_ = param_5[2] - param_4[2];
  auVar47._4_4_ = param_5[3] - param_4[3];
  auVar47._8_4_ = param_5[4] - param_4[4];
  auVar47._12_4_ = param_5[5] - param_4[5];
  auVar46._4_4_ = fVar5;
  auVar46._0_4_ = fVar5;
  auVar46._8_4_ = fVar5;
  auVar46._12_4_ = fVar5;
  auVar23 = divps(auVar22,auVar46);
  fVar28 = ___xmm_3f0000003f0000000000000000000000 * auVar44._0_4_ + fVar28;
  fVar29 = _UNK_150d56604 * auVar44._4_4_ + fVar29;
  fVar30 = _UNK_150d56608 * auVar44._8_4_ + fVar36;
  fVar31 = _UNK_150d5660c * auVar44._12_4_ + fVar37;
  fVar25 = (float)*(undefined8 *)(param_4 + 10);
  auVar45._0_4_ = (float)*(undefined8 *)(param_5 + 10) - fVar25;
  fVar26 = (float)((ulonglong)*(undefined8 *)(param_4 + 10) >> 0x20);
  auVar45._4_4_ = (float)((ulonglong)*(undefined8 *)(param_5 + 10) >> 0x20) - fVar26;
  auVar45._8_4_ = (float)*(undefined8 *)(param_5 + 6) - fVar40;
  auVar45._12_4_ = (float)((ulonglong)*(undefined8 *)(param_5 + 6) >> 0x20) - fVar41;
  auVar48._4_4_ = fVar5;
  auVar48._0_4_ = fVar5;
  auVar48._8_4_ = fVar5;
  auVar48._12_4_ = fVar5;
  auVar48 = divps(auVar47,auVar48);
  auVar50._4_4_ = fVar5;
  auVar50._0_4_ = fVar5;
  auVar50._8_4_ = fVar5;
  auVar50._12_4_ = fVar5;
  auVar46 = divps(auVar45,auVar50);
  auVar1._4_4_ = fVar5;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar5;
  auVar1._12_4_ = fVar5;
  auVar50 = divps(auVar49,auVar1);
  fVar32 = ___xmm_3f0000003f0000003f0000003f000000 * auVar48._0_4_ + param_4[2];
  fVar33 = _UNK_150689624 * auVar48._4_4_ + param_4[3];
  fVar34 = _UNK_150689628 * auVar48._8_4_ + param_4[4];
  fVar35 = _UNK_15068962c * auVar48._12_4_ + param_4[5];
  fVar25 = ___xmm_3f0000003f0000000000000000000000 * auVar46._0_4_ + fVar25;
  fVar26 = _UNK_150d56604 * auVar46._4_4_ + fVar26;
  fVar5 = _UNK_150d56608 * auVar46._8_4_ + fVar40;
  fVar27 = _UNK_150d5660c * auVar46._12_4_ + fVar41;
  if (0 < param_3) {
    pfVar3 = param_2 + 8;
    pfVar2 = param_1 + 3;
    uVar4 = (ulonglong)((param_3 - 1U >> 1) + 1);
    do {
      fVar17 = pfVar2[-1];
      fVar19 = pfVar2[-2];
      fVar15 = pfVar2[-3];
      fVar6 = fVar15 * fVar36;
      fVar7 = fVar15 * fVar37;
      fVar8 = fVar15 * fVar38;
      fVar9 = fVar15 * fVar39;
      fVar36 = fVar36 + auVar50._0_4_;
      fVar37 = fVar37 + auVar50._4_4_;
      fVar38 = fVar38 + auVar50._8_4_;
      fVar39 = fVar39 + auVar50._12_4_;
      fVar10 = fVar19 * fVar40;
      fVar11 = fVar19 * fVar41;
      fVar12 = fVar19 * fVar42;
      fVar13 = fVar19 * fVar43;
      fVar40 = fVar40 + auVar23._0_4_;
      fVar41 = fVar41 + auVar23._4_4_;
      fVar42 = fVar42 + auVar23._8_4_;
      fVar43 = fVar43 + auVar23._12_4_;
      fVar24 = *pfVar2;
      pfVar2 = pfVar2 + 4;
      fVar18 = fVar19 * fVar25;
      fVar19 = fVar19 * fVar26;
      fVar20 = fVar24 * fVar5;
      fVar21 = fVar24 * fVar27;
      fVar25 = fVar25 + auVar46._0_4_;
      fVar26 = fVar26 + auVar46._4_4_;
      fVar5 = fVar5 + auVar46._8_4_;
      fVar27 = fVar27 + auVar46._12_4_;
      fVar24 = fVar17 + fVar24;
      fVar14 = fVar15 * fVar28;
      fVar15 = fVar15 * fVar29;
      fVar16 = fVar17 * fVar30;
      fVar17 = fVar17 * fVar31;
      fVar28 = fVar28 + auVar44._0_4_;
      fVar29 = fVar29 + auVar44._4_4_;
      fVar30 = fVar30 + auVar44._8_4_;
      fVar31 = fVar31 + auVar44._12_4_;
      pfVar3[-8] = fVar10 + fVar6;
      pfVar3[-7] = fVar11 + fVar7;
      pfVar3[-6] = fVar12 + fVar8;
      pfVar3[-5] = fVar13 + fVar9;
      fVar6 = fVar24 * fVar32;
      fVar7 = fVar24 * fVar33;
      fVar8 = fVar24 * fVar34;
      fVar24 = fVar24 * fVar35;
      fVar32 = fVar32 + auVar48._0_4_;
      fVar33 = fVar33 + auVar48._4_4_;
      fVar34 = fVar34 + auVar48._8_4_;
      fVar35 = fVar35 + auVar48._12_4_;
      pfVar3[-4] = fVar18 + fVar14;
      pfVar3[-3] = fVar19 + fVar15;
      pfVar3[-2] = fVar20 + fVar16;
      pfVar3[-1] = fVar21 + fVar17;
      *pfVar3 = fVar6;
      pfVar3[1] = fVar7;
      pfVar3[2] = fVar8;
      pfVar3[3] = fVar24;
      pfVar3 = pfVar3 + 0xc;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// Mix2ChannelsTo6ChannelsFast @ 1444c5b20

void __cdecl
Audio::Mix2ChannelsTo6ChannelsFast(float *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *pfVar23;
  float *pfVar24;
  ulonglong uVar25;
  
  uVar5 = *(undefined8 *)(param_4 + 4);
  uVar6 = *(undefined8 *)(param_4 + 10);
  fVar7 = *param_4;
  fVar8 = param_4[1];
  fVar9 = param_4[2];
  fVar10 = param_4[3];
  fVar11 = param_4[6];
  fVar12 = param_4[7];
  fVar13 = param_4[8];
  fVar14 = param_4[9];
  fVar15 = param_4[2];
  fVar16 = param_4[3];
  fVar17 = param_4[4];
  fVar18 = param_4[5];
  fVar19 = param_4[8];
  fVar20 = param_4[9];
  fVar21 = param_4[10];
  fVar22 = param_4[0xb];
  if (0 < param_3) {
    pfVar24 = param_2 + 8;
    pfVar23 = param_1 + 3;
    uVar25 = (ulonglong)((param_3 - 1U >> 1) + 1);
    do {
      fVar1 = pfVar23[-2];
      fVar2 = pfVar23[-3];
      fVar3 = *pfVar23;
      fVar4 = pfVar23[-1];
      pfVar23 = pfVar23 + 4;
      pfVar24[-8] = fVar2 * fVar7 + fVar1 * fVar11;
      pfVar24[-7] = fVar2 * fVar8 + fVar1 * fVar12;
      pfVar24[-6] = fVar2 * fVar9 + fVar1 * fVar13;
      pfVar24[-5] = fVar2 * fVar10 + fVar1 * fVar14;
      pfVar24[-4] = fVar1 * (float)uVar6 + fVar2 * (float)uVar5;
      pfVar24[-3] = fVar1 * (float)((ulonglong)uVar6 >> 0x20) +
                    fVar2 * (float)((ulonglong)uVar5 >> 0x20);
      pfVar24[-2] = fVar3 * fVar11 + fVar4 * fVar7;
      pfVar24[-1] = fVar3 * fVar12 + fVar4 * fVar8;
      *pfVar24 = fVar4 * fVar15 + fVar3 * fVar19;
      pfVar24[1] = fVar4 * fVar16 + fVar3 * fVar20;
      pfVar24[2] = fVar4 * fVar17 + fVar3 * fVar21;
      pfVar24[3] = fVar4 * fVar18 + fVar3 * fVar22;
      pfVar24 = pfVar24 + 0xc;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  return;
}

// Mix2ChannelsTo8ChannelsFast @ 1444c5c70

void __cdecl
Audio::Mix2ChannelsTo8ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3,float *param_4)

{
  Mix2ChannelsTo8ChannelsFast
            ((float *)(param_1->AllocatorInstance).Data,(float *)(param_2->AllocatorInstance).Data,
             (int)((param_2->ArrayNum >> 0x1f & 7U) + param_2->ArrayNum) >> 3,param_3,param_4);
  return;
}

// Mix2ChannelsTo8ChannelsFast @ 1444c5cb0

void __cdecl
Audio::Mix2ChannelsTo8ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3)

{
  Mix2ChannelsTo8ChannelsFast
            ((float *)(param_1->AllocatorInstance).Data,(float *)(param_2->AllocatorInstance).Data,
             (int)((param_2->ArrayNum >> 0x1f & 7U) + param_2->ArrayNum) >> 3,param_3);
  return;
}

// Mix2ChannelsTo8ChannelsFast @ 1444c5ce0

void __cdecl
Audio::Mix2ChannelsTo8ChannelsFast
          (float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar58;
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  float fVar61;
  float fVar64;
  float fVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  float fVar67;
  float fVar70;
  float fVar71;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar72;
  float fVar73;
  float fVar75;
  float fVar76;
  undefined1 auVar74 [16];
  float fVar77;
  
  fVar24 = *param_4;
  fVar26 = param_4[1];
  fVar28 = param_4[2];
  fVar30 = param_4[3];
  lVar5 = (longlong)param_3;
  fVar33 = param_4[4];
  fVar36 = param_4[5];
  fVar39 = param_4[6];
  fVar42 = param_4[7];
  fVar44 = param_4[8];
  fVar19 = param_4[9];
  fVar20 = param_4[10];
  fVar21 = param_4[0xb];
  fVar49 = param_4[0xc];
  fVar51 = param_4[0xd];
  fVar53 = param_4[0xe];
  fVar55 = param_4[0xf];
  auVar56._0_4_ = *param_5 - fVar24;
  auVar56._4_4_ = param_5[1] - fVar26;
  auVar56._8_4_ = param_5[2] - fVar28;
  auVar56._12_4_ = param_5[3] - fVar30;
  auVar62._0_4_ = param_5[4] - fVar33;
  auVar62._4_4_ = param_5[5] - fVar36;
  auVar62._8_4_ = param_5[6] - fVar39;
  auVar62._12_4_ = param_5[7] - fVar42;
  lVar2 = 0;
  auVar68._0_4_ = param_5[8] - fVar44;
  auVar68._4_4_ = param_5[9] - fVar19;
  auVar68._8_4_ = param_5[10] - fVar20;
  auVar68._12_4_ = param_5[0xb] - fVar21;
  auVar74._0_4_ = param_5[0xc] - fVar49;
  auVar74._4_4_ = param_5[0xd] - fVar51;
  auVar74._8_4_ = param_5[0xe] - fVar53;
  auVar74._12_4_ = param_5[0xf] - fVar55;
  fVar7 = (float)param_3;
  auVar57._4_4_ = fVar7;
  auVar57._0_4_ = fVar7;
  auVar57._8_4_ = fVar7;
  auVar57._12_4_ = fVar7;
  auVar74 = divps(auVar74,auVar57);
  auVar63._4_4_ = fVar7;
  auVar63._0_4_ = fVar7;
  auVar63._8_4_ = fVar7;
  auVar63._12_4_ = fVar7;
  auVar57 = divps(auVar56,auVar63);
  auVar69._4_4_ = fVar7;
  auVar69._0_4_ = fVar7;
  auVar69._8_4_ = fVar7;
  auVar69._12_4_ = fVar7;
  auVar63 = divps(auVar62,auVar69);
  auVar1._4_4_ = fVar7;
  auVar1._0_4_ = fVar7;
  auVar1._8_4_ = fVar7;
  auVar1._12_4_ = fVar7;
  auVar69 = divps(auVar68,auVar1);
  fVar7 = auVar57._0_4_;
  fVar58 = auVar57._4_4_;
  fVar59 = auVar57._8_4_;
  fVar60 = auVar57._12_4_;
  fVar67 = auVar69._0_4_;
  fVar70 = auVar69._4_4_;
  fVar71 = auVar69._8_4_;
  fVar72 = auVar69._12_4_;
  fVar61 = auVar63._0_4_;
  fVar64 = auVar63._4_4_;
  fVar65 = auVar63._8_4_;
  fVar66 = auVar63._12_4_;
  fVar73 = auVar74._0_4_;
  fVar75 = auVar74._4_4_;
  fVar76 = auVar74._8_4_;
  fVar77 = auVar74._12_4_;
  if (3 < lVar5) {
    pfVar4 = param_1 + 2;
    pfVar6 = param_2 + 8;
    lVar3 = (lVar5 - 4U >> 2) + 1;
    lVar2 = lVar3 * 4;
    do {
      fVar10 = pfVar4[-2];
      fVar9 = pfVar4[-1];
      fVar8 = pfVar4[1];
      fVar31 = fVar7 + fVar7 + fVar24;
      fVar34 = fVar58 + fVar58 + fVar26;
      fVar37 = fVar59 + fVar59 + fVar28;
      fVar40 = fVar60 + fVar60 + fVar30;
      pfVar6[-8] = fVar9 * fVar44 + fVar10 * fVar24;
      pfVar6[-7] = fVar9 * fVar19 + fVar10 * fVar26;
      pfVar6[-6] = fVar9 * fVar20 + fVar10 * fVar28;
      pfVar6[-5] = fVar9 * fVar21 + fVar10 * fVar30;
      pfVar6[-4] = fVar9 * fVar49 + fVar10 * fVar33;
      pfVar6[-3] = fVar9 * fVar51 + fVar10 * fVar36;
      pfVar6[-2] = fVar9 * fVar53 + fVar10 * fVar39;
      pfVar6[-1] = fVar9 * fVar55 + fVar10 * fVar42;
      fVar10 = *pfVar4;
      fVar11 = fVar67 + fVar67 + fVar44;
      fVar12 = fVar70 + fVar70 + fVar19;
      fVar13 = fVar71 + fVar71 + fVar20;
      fVar14 = fVar72 + fVar72 + fVar21;
      fVar15 = fVar61 + fVar61 + fVar33;
      fVar16 = fVar64 + fVar64 + fVar36;
      fVar17 = fVar65 + fVar65 + fVar39;
      fVar18 = fVar66 + fVar66 + fVar42;
      fVar43 = fVar67 + fVar11;
      fVar45 = fVar70 + fVar12;
      fVar46 = fVar71 + fVar13;
      fVar47 = fVar72 + fVar14;
      fVar9 = pfVar4[2];
      *pfVar6 = (fVar7 + fVar24) * fVar10 + (fVar67 + fVar44) * fVar8;
      pfVar6[1] = (fVar58 + fVar26) * fVar10 + (fVar70 + fVar19) * fVar8;
      pfVar6[2] = (fVar59 + fVar28) * fVar10 + (fVar71 + fVar20) * fVar8;
      pfVar6[3] = (fVar60 + fVar30) * fVar10 + (fVar72 + fVar21) * fVar8;
      fVar19 = fVar73 + fVar73 + fVar49;
      fVar20 = fVar75 + fVar75 + fVar51;
      fVar21 = fVar76 + fVar76 + fVar53;
      fVar22 = fVar77 + fVar77 + fVar55;
      fVar44 = pfVar4[3];
      fVar23 = fVar7 + fVar31;
      fVar25 = fVar58 + fVar34;
      fVar27 = fVar59 + fVar37;
      fVar29 = fVar60 + fVar40;
      fVar48 = fVar73 + fVar19;
      fVar50 = fVar75 + fVar20;
      fVar52 = fVar76 + fVar21;
      fVar54 = fVar77 + fVar22;
      fVar32 = fVar61 + fVar15;
      fVar35 = fVar64 + fVar16;
      fVar38 = fVar65 + fVar17;
      fVar41 = fVar66 + fVar18;
      pfVar6[4] = (fVar61 + fVar33) * fVar10 + (fVar73 + fVar49) * fVar8;
      pfVar6[5] = (fVar64 + fVar36) * fVar10 + (fVar75 + fVar51) * fVar8;
      pfVar6[6] = (fVar65 + fVar39) * fVar10 + (fVar76 + fVar53) * fVar8;
      pfVar6[7] = (fVar66 + fVar42) * fVar10 + (fVar77 + fVar55) * fVar8;
      fVar10 = pfVar4[4];
      pfVar6[8] = fVar11 * fVar44 + fVar31 * fVar9;
      pfVar6[9] = fVar12 * fVar44 + fVar34 * fVar9;
      pfVar6[10] = fVar13 * fVar44 + fVar37 * fVar9;
      pfVar6[0xb] = fVar14 * fVar44 + fVar40 * fVar9;
      fVar8 = pfVar4[5];
      fVar24 = fVar23 + fVar7;
      fVar26 = fVar25 + fVar58;
      fVar28 = fVar27 + fVar59;
      fVar30 = fVar29 + fVar60;
      pfVar6[0xc] = fVar19 * fVar44 + fVar15 * fVar9;
      pfVar6[0xd] = fVar20 * fVar44 + fVar16 * fVar9;
      pfVar6[0xe] = fVar21 * fVar44 + fVar17 * fVar9;
      pfVar6[0xf] = fVar22 * fVar44 + fVar18 * fVar9;
      pfVar6[0x10] = fVar43 * fVar8 + fVar23 * fVar10;
      pfVar6[0x11] = fVar45 * fVar8 + fVar25 * fVar10;
      pfVar6[0x12] = fVar46 * fVar8 + fVar27 * fVar10;
      pfVar6[0x13] = fVar47 * fVar8 + fVar29 * fVar10;
      fVar44 = fVar43 + fVar67;
      fVar19 = fVar45 + fVar70;
      fVar20 = fVar46 + fVar71;
      fVar21 = fVar47 + fVar72;
      pfVar4 = pfVar4 + 8;
      fVar33 = fVar32 + fVar61;
      fVar36 = fVar35 + fVar64;
      fVar39 = fVar38 + fVar65;
      fVar42 = fVar41 + fVar66;
      fVar49 = fVar48 + fVar73;
      fVar51 = fVar50 + fVar75;
      fVar53 = fVar52 + fVar76;
      fVar55 = fVar54 + fVar77;
      pfVar6[0x14] = fVar48 * fVar8 + fVar32 * fVar10;
      pfVar6[0x15] = fVar50 * fVar8 + fVar35 * fVar10;
      pfVar6[0x16] = fVar52 * fVar8 + fVar38 * fVar10;
      pfVar6[0x17] = fVar54 * fVar8 + fVar41 * fVar10;
      pfVar6 = pfVar6 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar2 < lVar5) {
    pfVar4 = param_2 + lVar2 * 8;
    do {
      fVar10 = param_1[lVar2 * 2];
      fVar9 = param_1[lVar2 * 2 + 1];
      lVar2 = lVar2 + 1;
      fVar14 = fVar10 * fVar24;
      fVar15 = fVar10 * fVar26;
      fVar16 = fVar10 * fVar28;
      fVar17 = fVar10 * fVar30;
      fVar8 = fVar9 * fVar44;
      fVar11 = fVar9 * fVar19;
      fVar12 = fVar9 * fVar20;
      fVar13 = fVar9 * fVar21;
      fVar24 = fVar24 + fVar7;
      fVar26 = fVar26 + fVar58;
      fVar28 = fVar28 + fVar59;
      fVar30 = fVar30 + fVar60;
      fVar25 = fVar10 * fVar33;
      fVar27 = fVar10 * fVar36;
      fVar29 = fVar10 * fVar39;
      fVar10 = fVar10 * fVar42;
      fVar44 = fVar44 + fVar67;
      fVar19 = fVar19 + fVar70;
      fVar20 = fVar20 + fVar71;
      fVar21 = fVar21 + fVar72;
      fVar18 = fVar9 * fVar49;
      fVar22 = fVar9 * fVar51;
      fVar23 = fVar9 * fVar53;
      fVar9 = fVar9 * fVar55;
      fVar33 = fVar33 + fVar61;
      fVar36 = fVar36 + fVar64;
      fVar39 = fVar39 + fVar65;
      fVar42 = fVar42 + fVar66;
      fVar49 = fVar49 + fVar73;
      fVar51 = fVar51 + fVar75;
      fVar53 = fVar53 + fVar76;
      fVar55 = fVar55 + fVar77;
      *pfVar4 = fVar14 + fVar8;
      pfVar4[1] = fVar15 + fVar11;
      pfVar4[2] = fVar16 + fVar12;
      pfVar4[3] = fVar17 + fVar13;
      pfVar4[4] = fVar25 + fVar18;
      pfVar4[5] = fVar27 + fVar22;
      pfVar4[6] = fVar29 + fVar23;
      pfVar4[7] = fVar10 + fVar9;
      pfVar4 = pfVar4 + 8;
    } while (lVar2 < lVar5);
  }
  return;
}

// Mix2ChannelsTo8ChannelsFast @ 1444c5fd0

void __cdecl
Audio::Mix2ChannelsTo8ChannelsFast(float *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong lVar21;
  float *pfVar22;
  float *pfVar23;
  longlong lVar24;
  longlong lVar25;
  
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  fVar9 = param_4[4];
  fVar10 = param_4[5];
  fVar11 = param_4[6];
  fVar12 = param_4[7];
  fVar13 = param_4[8];
  fVar14 = param_4[9];
  fVar15 = param_4[10];
  fVar16 = param_4[0xb];
  fVar17 = param_4[0xc];
  fVar18 = param_4[0xd];
  fVar19 = param_4[0xe];
  fVar20 = param_4[0xf];
  lVar25 = (longlong)param_3;
  lVar24 = 0;
  if (3 < lVar25) {
    pfVar22 = param_2 + 8;
    lVar21 = (lVar25 - 4U >> 2) + 1;
    pfVar23 = param_1 + 2;
    lVar24 = lVar21 * 4;
    do {
      fVar1 = pfVar23[-2];
      fVar2 = pfVar23[-1];
      fVar3 = *pfVar23;
      pfVar22[-4] = fVar2 * fVar17 + fVar1 * fVar9;
      pfVar22[-3] = fVar2 * fVar18 + fVar1 * fVar10;
      pfVar22[-2] = fVar2 * fVar19 + fVar1 * fVar11;
      pfVar22[-1] = fVar2 * fVar20 + fVar1 * fVar12;
      fVar4 = pfVar23[1];
      pfVar22[-8] = fVar2 * fVar13 + fVar1 * fVar5;
      pfVar22[-7] = fVar2 * fVar14 + fVar1 * fVar6;
      pfVar22[-6] = fVar2 * fVar15 + fVar1 * fVar7;
      pfVar22[-5] = fVar2 * fVar16 + fVar1 * fVar8;
      fVar1 = pfVar23[3];
      pfVar22[4] = fVar3 * fVar9 + fVar4 * fVar17;
      pfVar22[5] = fVar3 * fVar10 + fVar4 * fVar18;
      pfVar22[6] = fVar3 * fVar11 + fVar4 * fVar19;
      pfVar22[7] = fVar3 * fVar12 + fVar4 * fVar20;
      fVar2 = pfVar23[2];
      *pfVar22 = fVar3 * fVar5 + fVar4 * fVar13;
      pfVar22[1] = fVar3 * fVar6 + fVar4 * fVar14;
      pfVar22[2] = fVar3 * fVar7 + fVar4 * fVar15;
      pfVar22[3] = fVar3 * fVar8 + fVar4 * fVar16;
      fVar3 = pfVar23[4];
      pfVar22[0xc] = fVar1 * fVar17 + fVar2 * fVar9;
      pfVar22[0xd] = fVar1 * fVar18 + fVar2 * fVar10;
      pfVar22[0xe] = fVar1 * fVar19 + fVar2 * fVar11;
      pfVar22[0xf] = fVar1 * fVar20 + fVar2 * fVar12;
      fVar4 = pfVar23[5];
      pfVar23 = pfVar23 + 8;
      pfVar22[8] = fVar1 * fVar13 + fVar2 * fVar5;
      pfVar22[9] = fVar1 * fVar14 + fVar2 * fVar6;
      pfVar22[10] = fVar1 * fVar15 + fVar2 * fVar7;
      pfVar22[0xb] = fVar1 * fVar16 + fVar2 * fVar8;
      pfVar22[0x10] = fVar4 * fVar13 + fVar3 * fVar5;
      pfVar22[0x11] = fVar4 * fVar14 + fVar3 * fVar6;
      pfVar22[0x12] = fVar4 * fVar15 + fVar3 * fVar7;
      pfVar22[0x13] = fVar4 * fVar16 + fVar3 * fVar8;
      pfVar22[0x14] = fVar4 * fVar17 + fVar3 * fVar9;
      pfVar22[0x15] = fVar4 * fVar18 + fVar3 * fVar10;
      pfVar22[0x16] = fVar4 * fVar19 + fVar3 * fVar11;
      pfVar22[0x17] = fVar4 * fVar20 + fVar3 * fVar12;
      pfVar22 = pfVar22 + 0x20;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  if (lVar24 < lVar25) {
    pfVar22 = param_2 + lVar24 * 8;
    do {
      fVar1 = param_1[lVar24 * 2];
      fVar2 = param_1[lVar24 * 2 + 1];
      lVar24 = lVar24 + 1;
      *pfVar22 = fVar1 * fVar5 + fVar2 * fVar13;
      pfVar22[1] = fVar1 * fVar6 + fVar2 * fVar14;
      pfVar22[2] = fVar1 * fVar7 + fVar2 * fVar15;
      pfVar22[3] = fVar1 * fVar8 + fVar2 * fVar16;
      pfVar22[4] = fVar1 * fVar9 + fVar2 * fVar17;
      pfVar22[5] = fVar1 * fVar10 + fVar2 * fVar18;
      pfVar22[6] = fVar1 * fVar11 + fVar2 * fVar19;
      pfVar22[7] = fVar1 * fVar12 + fVar2 * fVar20;
      pfVar22 = pfVar22 + 8;
    } while (lVar24 < lVar25);
  }
  return;
}

// MixMonoTo2ChannelsFast @ 1444c6170

void __cdecl
Audio::MixMonoTo2ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar2 = param_1->ArrayNum;
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar4 = (param_1->AllocatorInstance).Data;
  if ((int)uVar2 < 4) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InNumFrames >= (4)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                        ,0xc2,L"Buffer must have at least %i elements.");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar11 = uVar2 & 0x80000003;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
  }
  if (uVar11 != 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("0 == (InNumFrames % (4))",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                        ,0xc3,L"Buffer length be a multiple of %i.");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (0 < (int)uVar2) {
    lVar12 = 0;
    lVar13 = lVar12;
    do {
      pFVar1 = pFVar4 + lVar12 * 4;
      uVar6 = *(undefined4 *)pFVar1;
      uVar7 = *(undefined4 *)(pFVar1 + 4);
      uVar8 = *(undefined4 *)(pFVar1 + 8);
      uVar9 = *(undefined4 *)(pFVar1 + 0xc);
      lVar12 = lVar12 + 4;
      lVar13 = lVar13 + 8;
      pFVar1 = pFVar3 + lVar13 * 4 + -0x20;
      *(undefined4 *)pFVar1 = uVar6;
      *(undefined4 *)(pFVar1 + 4) = uVar6;
      *(undefined4 *)(pFVar1 + 8) = uVar7;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
      pFVar1 = pFVar3 + lVar13 * 4 + -0x10;
      *(undefined4 *)pFVar1 = uVar8;
      *(undefined4 *)(pFVar1 + 4) = uVar8;
      *(undefined4 *)(pFVar1 + 8) = uVar9;
      *(undefined4 *)(pFVar1 + 0xc) = uVar9;
    } while (lVar12 < (int)uVar2);
  }
  return;
}

// MixMonoTo2ChannelsFast @ 1444c6250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::MixMonoTo2ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3,float *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar4 = param_2->ArrayNum / 2;
  fVar12 = (float)*(undefined8 *)param_3;
  fVar6 = (float)*(undefined8 *)param_4;
  auVar14._0_4_ = fVar6 - fVar12;
  fVar13 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  fVar11 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  auVar14._4_4_ = fVar11 - fVar13;
  auVar14._8_4_ = fVar6 - fVar12;
  auVar14._12_4_ = fVar11 - fVar13;
  fVar6 = (float)iVar4 * __real_3f000000;
  auVar15._4_4_ = fVar6;
  auVar15._0_4_ = fVar6;
  auVar15._8_4_ = fVar6;
  auVar15._12_4_ = fVar6;
  auVar15 = divps(auVar14,auVar15);
  fVar6 = ___xmm_3f8000003f8000003f0000003f000000 * auVar15._0_4_ + fVar12;
  fVar11 = _UNK_150d56614 * auVar15._4_4_ + fVar13;
  fVar12 = _UNK_150d56618 * auVar15._8_4_ + fVar12;
  fVar13 = _UNK_150d5661c * auVar15._12_4_ + fVar13;
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      fVar8 = *(float *)(pFVar3 + lVar5 * 4);
      fVar10 = *(float *)(pFVar3 + lVar5 * 4 + 4);
      fVar7 = fVar8 * fVar6;
      fVar8 = fVar8 * fVar11;
      fVar9 = fVar10 * fVar12;
      fVar10 = fVar10 * fVar13;
      fVar6 = fVar6 + auVar15._0_4_;
      fVar11 = fVar11 + auVar15._4_4_;
      fVar12 = fVar12 + auVar15._8_4_;
      fVar13 = fVar13 + auVar15._12_4_;
      pFVar1 = pFVar2 + lVar5 * 8;
      *(float *)pFVar1 = fVar7;
      *(float *)(pFVar1 + 4) = fVar8;
      *(float *)(pFVar1 + 8) = fVar9;
      *(float *)(pFVar1 + 0xc) = fVar10;
      lVar5 = lVar5 + 2;
    } while (lVar5 < iVar4);
  }
  return;
}

// MixMonoTo2ChannelsFast @ 1444c62d0

void __cdecl
Audio::MixMonoTo2ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  pFVar5 = (param_2->AllocatorInstance).Data;
  uVar4 = *(undefined8 *)param_3;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar7 = param_2->ArrayNum / 2;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      fVar2 = *(float *)(pFVar6 + lVar8 * 4);
      fVar3 = *(float *)(pFVar6 + lVar8 * 4 + 4);
      fVar9 = (float)uVar4;
      fVar10 = (float)((ulonglong)uVar4 >> 0x20);
      pFVar1 = pFVar5 + lVar8 * 8;
      *(float *)pFVar1 = fVar2 * fVar9;
      *(float *)(pFVar1 + 4) = fVar2 * fVar10;
      *(float *)(pFVar1 + 8) = fVar3 * fVar9;
      *(float *)(pFVar1 + 0xc) = fVar3 * fVar10;
      lVar8 = lVar8 + 2;
    } while (lVar8 < iVar7);
  }
  return;
}

// MixMonoTo2ChannelsFast @ 1444c6320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::MixMonoTo2ChannelsFast
          (float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  fVar9 = (float)*(undefined8 *)param_4;
  fVar3 = (float)*(undefined8 *)param_5;
  auVar11._0_4_ = fVar3 - fVar9;
  fVar10 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  fVar8 = (float)((ulonglong)*(undefined8 *)param_5 >> 0x20);
  auVar11._4_4_ = fVar8 - fVar10;
  auVar11._8_4_ = fVar3 - fVar9;
  auVar11._12_4_ = fVar8 - fVar10;
  fVar3 = (float)param_3 * __real_3f000000;
  auVar12._4_4_ = fVar3;
  auVar12._0_4_ = fVar3;
  auVar12._8_4_ = fVar3;
  auVar12._12_4_ = fVar3;
  auVar12 = divps(auVar11,auVar12);
  fVar3 = ___xmm_3f8000003f8000003f0000003f000000 * auVar12._0_4_ + fVar9;
  fVar8 = _UNK_150d56614 * auVar12._4_4_ + fVar10;
  fVar9 = _UNK_150d56618 * auVar12._8_4_ + fVar9;
  fVar10 = _UNK_150d5661c * auVar12._12_4_ + fVar10;
  if (0 < param_3) {
    uVar2 = (ulonglong)((param_3 - 1U >> 1) + 1);
    do {
      fVar5 = *param_1;
      pfVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      fVar4 = fVar5 * fVar3;
      fVar5 = fVar5 * fVar8;
      fVar6 = *pfVar1 * fVar9;
      fVar7 = *pfVar1 * fVar10;
      fVar3 = fVar3 + auVar12._0_4_;
      fVar8 = fVar8 + auVar12._4_4_;
      fVar9 = fVar9 + auVar12._8_4_;
      fVar10 = fVar10 + auVar12._12_4_;
      *param_2 = fVar4;
      param_2[1] = fVar5;
      param_2[2] = fVar6;
      param_2[3] = fVar7;
      param_2 = param_2 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// MixMonoTo2ChannelsFast @ 1444c63a0

void __cdecl Audio::MixMonoTo2ChannelsFast(float *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = *(undefined8 *)param_4;
  if (0 < param_3) {
    uVar4 = (ulonglong)((param_3 - 1U >> 1) + 1);
    do {
      fVar1 = *param_1;
      fVar2 = param_1[1];
      param_1 = param_1 + 2;
      fVar5 = (float)uVar3;
      fVar6 = (float)((ulonglong)uVar3 >> 0x20);
      *param_2 = fVar1 * fVar5;
      param_2[1] = fVar1 * fVar6;
      param_2[2] = fVar2 * fVar5;
      param_2[3] = fVar2 * fVar6;
      uVar4 = uVar4 - 1;
      param_2 = param_2 + 4;
    } while (uVar4 != 0);
  }
  return;
}

// MixMonoTo2ChannelsFast @ 1444c63f0

void __cdecl Audio::MixMonoTo2ChannelsFast(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_3 < 4) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumFrames >= (4)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                       ,0xc2,L"Buffer must have at least %i elements.");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar8 = param_3 & 0x80000003;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
  }
  if (uVar8 != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 == (InNumFrames % (4))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                       ,0xc3,L"Buffer length be a multiple of %i.");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0 < param_3) {
    lVar9 = 0;
    lVar10 = lVar9;
    do {
      pfVar1 = param_1 + lVar9;
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      lVar9 = lVar9 + 4;
      pfVar1 = param_2 + lVar10;
      *pfVar1 = fVar3;
      pfVar1[1] = fVar3;
      pfVar1[2] = fVar4;
      pfVar1[3] = fVar4;
      pfVar1 = param_2 + lVar10 + 4;
      *pfVar1 = fVar5;
      pfVar1[1] = fVar5;
      pfVar1[2] = fVar6;
      pfVar1[3] = fVar6;
      lVar10 = lVar10 + 8;
    } while (lVar9 < param_3);
  }
  return;
}

// MixMonoTo4ChannelsFast @ 1444c64d0

void __cdecl
Audio::MixMonoTo4ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3,float *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  
  pFVar5 = (param_2->AllocatorInstance).Data;
  fVar15 = *param_3;
  fVar17 = param_3[1];
  fVar19 = param_3[2];
  fVar21 = param_3[3];
  pFVar1 = (param_1->AllocatorInstance).Data;
  iVar2 = (int)(param_2->ArrayNum + (param_2->ArrayNum >> 0x1f & 3U)) >> 2;
  lVar6 = (longlong)iVar2;
  auVar23._0_4_ = *param_4 - fVar15;
  auVar23._4_4_ = param_4[1] - fVar17;
  auVar23._8_4_ = param_4[2] - fVar19;
  auVar23._12_4_ = param_4[3] - fVar21;
  lVar3 = 0;
  auVar24._0_4_ = (float)iVar2;
  auVar24._4_4_ = auVar24._0_4_;
  auVar24._8_4_ = auVar24._0_4_;
  auVar24._12_4_ = auVar24._0_4_;
  auVar24 = divps(auVar23,auVar24);
  fVar22 = auVar24._0_4_;
  fVar25 = auVar24._4_4_;
  fVar26 = auVar24._8_4_;
  fVar27 = auVar24._12_4_;
  if (3 < lVar6) {
    pFVar7 = pFVar5 + 0x20;
    lVar4 = (lVar6 - 4U >> 2) + 1;
    pFVar8 = pFVar1 + 8;
    lVar3 = lVar4 * 4;
    do {
      fVar9 = *(float *)(pFVar8 + -8);
      fVar10 = fVar22 + fVar22 + fVar15;
      fVar11 = fVar25 + fVar25 + fVar17;
      fVar12 = fVar26 + fVar26 + fVar19;
      fVar13 = fVar27 + fVar27 + fVar21;
      *(float *)(pFVar7 + -0x20) = fVar9 * fVar15;
      *(float *)(pFVar7 + -0x1c) = fVar9 * fVar17;
      *(float *)(pFVar7 + -0x18) = fVar9 * fVar19;
      *(float *)(pFVar7 + -0x14) = fVar9 * fVar21;
      fVar9 = *(float *)(pFVar8 + -4);
      fVar14 = fVar22 + fVar10;
      fVar16 = fVar25 + fVar11;
      fVar18 = fVar26 + fVar12;
      fVar20 = fVar27 + fVar13;
      *(float *)(pFVar7 + -0x10) = fVar9 * (fVar22 + fVar15);
      *(float *)(pFVar7 + -0xc) = fVar9 * (fVar25 + fVar17);
      *(float *)(pFVar7 + -8) = fVar9 * (fVar26 + fVar19);
      *(float *)(pFVar7 + -4) = fVar9 * (fVar27 + fVar21);
      fVar15 = *(float *)pFVar8;
      *(float *)pFVar7 = fVar15 * fVar10;
      *(float *)(pFVar7 + 4) = fVar15 * fVar11;
      *(float *)(pFVar7 + 8) = fVar15 * fVar12;
      *(float *)(pFVar7 + 0xc) = fVar15 * fVar13;
      fVar9 = *(float *)(pFVar8 + 4);
      pFVar8 = pFVar8 + 0x10;
      fVar15 = fVar14 + fVar22;
      fVar17 = fVar16 + fVar25;
      fVar19 = fVar18 + fVar26;
      fVar21 = fVar20 + fVar27;
      *(float *)(pFVar7 + 0x10) = fVar9 * fVar14;
      *(float *)(pFVar7 + 0x14) = fVar9 * fVar16;
      *(float *)(pFVar7 + 0x18) = fVar9 * fVar18;
      *(float *)(pFVar7 + 0x1c) = fVar9 * fVar20;
      pFVar7 = pFVar7 + 0x40;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar3 < lVar6) {
    pFVar5 = pFVar5 + lVar3 * 0x10;
    do {
      fVar9 = *(float *)(pFVar1 + lVar3 * 4);
      lVar3 = lVar3 + 1;
      fVar10 = fVar9 * fVar15;
      fVar11 = fVar9 * fVar17;
      fVar12 = fVar9 * fVar19;
      fVar9 = fVar9 * fVar21;
      fVar15 = fVar15 + fVar22;
      fVar17 = fVar17 + fVar25;
      fVar19 = fVar19 + fVar26;
      fVar21 = fVar21 + fVar27;
      *(float *)pFVar5 = fVar10;
      *(float *)(pFVar5 + 4) = fVar11;
      *(float *)(pFVar5 + 8) = fVar12;
      *(float *)(pFVar5 + 0xc) = fVar9;
      pFVar5 = pFVar5 + 0x10;
    } while (lVar3 < lVar6);
  }
  return;
}

// MixMonoTo4ChannelsFast @ 1444c65d0

void __cdecl
Audio::MixMonoTo4ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  
  pFVar9 = (param_2->AllocatorInstance).Data;
  pFVar2 = (param_1->AllocatorInstance).Data;
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  lVar12 = (longlong)((int)(param_2->ArrayNum + (param_2->ArrayNum >> 0x1f & 3U)) >> 2);
  lVar7 = 0;
  if (3 < lVar12) {
    lVar11 = (lVar12 - 4U >> 2) + 1;
    lVar7 = lVar11 * 4;
    pFVar8 = pFVar9 + 0x20;
    pFVar10 = pFVar2 + 8;
    do {
      fVar1 = *(float *)(pFVar10 + -8);
      *(float *)(pFVar8 + -0x20) = fVar1 * fVar3;
      *(float *)(pFVar8 + -0x1c) = fVar1 * fVar4;
      *(float *)(pFVar8 + -0x18) = fVar1 * fVar5;
      *(float *)(pFVar8 + -0x14) = fVar1 * fVar6;
      fVar1 = *(float *)(pFVar10 + -4);
      *(float *)(pFVar8 + -0x10) = fVar1 * fVar3;
      *(float *)(pFVar8 + -0xc) = fVar1 * fVar4;
      *(float *)(pFVar8 + -8) = fVar1 * fVar5;
      *(float *)(pFVar8 + -4) = fVar1 * fVar6;
      fVar1 = *(float *)pFVar10;
      *(float *)pFVar8 = fVar1 * fVar3;
      *(float *)(pFVar8 + 4) = fVar1 * fVar4;
      *(float *)(pFVar8 + 8) = fVar1 * fVar5;
      *(float *)(pFVar8 + 0xc) = fVar1 * fVar6;
      fVar1 = *(float *)(pFVar10 + 4);
      *(float *)(pFVar8 + 0x10) = fVar1 * fVar3;
      *(float *)(pFVar8 + 0x14) = fVar1 * fVar4;
      *(float *)(pFVar8 + 0x18) = fVar1 * fVar5;
      *(float *)(pFVar8 + 0x1c) = fVar1 * fVar6;
      lVar11 = lVar11 + -1;
      pFVar8 = pFVar8 + 0x40;
      pFVar10 = pFVar10 + 0x10;
    } while (lVar11 != 0);
  }
  if (lVar7 < lVar12) {
    pFVar9 = pFVar9 + lVar7 * 0x10;
    do {
      fVar1 = *(float *)(pFVar2 + lVar7 * 4);
      lVar7 = lVar7 + 1;
      *(float *)pFVar9 = fVar1 * fVar3;
      *(float *)(pFVar9 + 4) = fVar1 * fVar4;
      *(float *)(pFVar9 + 8) = fVar1 * fVar5;
      *(float *)(pFVar9 + 0xc) = fVar1 * fVar6;
      pFVar9 = pFVar9 + 0x10;
    } while (lVar7 < lVar12);
  }
  return;
}

// MixMonoTo4ChannelsFast @ 1444c66a0

void __cdecl
Audio::MixMonoTo4ChannelsFast
          (float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  
  fVar12 = *param_4;
  fVar14 = param_4[1];
  fVar16 = param_4[2];
  fVar18 = param_4[3];
  lVar4 = (longlong)param_3;
  lVar1 = 0;
  auVar21._0_4_ = (float)param_3;
  auVar20._0_4_ = *param_5 - fVar12;
  auVar20._4_4_ = param_5[1] - fVar14;
  auVar20._8_4_ = param_5[2] - fVar16;
  auVar20._12_4_ = param_5[3] - fVar18;
  auVar21._4_4_ = auVar21._0_4_;
  auVar21._8_4_ = auVar21._0_4_;
  auVar21._12_4_ = auVar21._0_4_;
  auVar21 = divps(auVar20,auVar21);
  fVar19 = auVar21._0_4_;
  fVar22 = auVar21._4_4_;
  fVar23 = auVar21._8_4_;
  fVar24 = auVar21._12_4_;
  if (3 < lVar4) {
    pfVar3 = param_1 + 2;
    pfVar5 = param_2 + 8;
    lVar2 = (lVar4 - 4U >> 2) + 1;
    lVar1 = lVar2 * 4;
    do {
      fVar6 = pfVar3[-2];
      fVar7 = fVar19 + fVar19 + fVar12;
      fVar8 = fVar22 + fVar22 + fVar14;
      fVar9 = fVar23 + fVar23 + fVar16;
      fVar10 = fVar24 + fVar24 + fVar18;
      pfVar5[-8] = fVar6 * fVar12;
      pfVar5[-7] = fVar6 * fVar14;
      pfVar5[-6] = fVar6 * fVar16;
      pfVar5[-5] = fVar6 * fVar18;
      fVar6 = pfVar3[-1];
      fVar11 = fVar19 + fVar7;
      fVar13 = fVar22 + fVar8;
      fVar15 = fVar23 + fVar9;
      fVar17 = fVar24 + fVar10;
      pfVar5[-4] = fVar6 * (fVar19 + fVar12);
      pfVar5[-3] = fVar6 * (fVar22 + fVar14);
      pfVar5[-2] = fVar6 * (fVar23 + fVar16);
      pfVar5[-1] = fVar6 * (fVar24 + fVar18);
      fVar12 = *pfVar3;
      *pfVar5 = fVar12 * fVar7;
      pfVar5[1] = fVar12 * fVar8;
      pfVar5[2] = fVar12 * fVar9;
      pfVar5[3] = fVar12 * fVar10;
      fVar6 = pfVar3[1];
      pfVar3 = pfVar3 + 4;
      fVar12 = fVar11 + fVar19;
      fVar14 = fVar13 + fVar22;
      fVar16 = fVar15 + fVar23;
      fVar18 = fVar17 + fVar24;
      pfVar5[4] = fVar6 * fVar11;
      pfVar5[5] = fVar6 * fVar13;
      pfVar5[6] = fVar6 * fVar15;
      pfVar5[7] = fVar6 * fVar17;
      pfVar5 = pfVar5 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lVar1 < lVar4) {
    pfVar3 = param_2 + lVar1 * 4;
    do {
      fVar6 = param_1[lVar1];
      lVar1 = lVar1 + 1;
      fVar7 = fVar6 * fVar12;
      fVar8 = fVar6 * fVar14;
      fVar9 = fVar6 * fVar16;
      fVar6 = fVar6 * fVar18;
      fVar12 = fVar12 + fVar19;
      fVar14 = fVar14 + fVar22;
      fVar16 = fVar16 + fVar23;
      fVar18 = fVar18 + fVar24;
      *pfVar3 = fVar7;
      pfVar3[1] = fVar8;
      pfVar3[2] = fVar9;
      pfVar3[3] = fVar6;
      pfVar3 = pfVar3 + 4;
    } while (lVar1 < lVar4);
  }
  return;
}

// MixMonoTo4ChannelsFast @ 1444c6790

void __cdecl Audio::MixMonoTo4ChannelsFast(float *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  lVar10 = (longlong)param_3;
  lVar7 = 0;
  if (3 < lVar10) {
    lVar11 = (lVar10 - 4U >> 2) + 1;
    lVar7 = lVar11 * 4;
    pfVar8 = param_2 + 8;
    pfVar9 = param_1 + 2;
    do {
      fVar1 = pfVar9[-2];
      fVar2 = pfVar9[-1];
      pfVar8[-8] = fVar1 * fVar3;
      pfVar8[-7] = fVar1 * fVar4;
      pfVar8[-6] = fVar1 * fVar5;
      pfVar8[-5] = fVar1 * fVar6;
      fVar1 = *pfVar9;
      pfVar8[-4] = fVar2 * fVar3;
      pfVar8[-3] = fVar2 * fVar4;
      pfVar8[-2] = fVar2 * fVar5;
      pfVar8[-1] = fVar2 * fVar6;
      fVar2 = pfVar9[1];
      *pfVar8 = fVar1 * fVar3;
      pfVar8[1] = fVar1 * fVar4;
      pfVar8[2] = fVar1 * fVar5;
      pfVar8[3] = fVar1 * fVar6;
      pfVar8[4] = fVar2 * fVar3;
      pfVar8[5] = fVar2 * fVar4;
      pfVar8[6] = fVar2 * fVar5;
      pfVar8[7] = fVar2 * fVar6;
      lVar11 = lVar11 + -1;
      pfVar8 = pfVar8 + 0x10;
      pfVar9 = pfVar9 + 4;
    } while (lVar11 != 0);
  }
  if (lVar7 < lVar10) {
    pfVar8 = param_2 + lVar7 * 4;
    do {
      fVar1 = param_1[lVar7];
      lVar7 = lVar7 + 1;
      *pfVar8 = fVar1 * fVar3;
      pfVar8[1] = fVar1 * fVar4;
      pfVar8[2] = fVar1 * fVar5;
      pfVar8[3] = fVar1 * fVar6;
      pfVar8 = pfVar8 + 4;
    } while (lVar7 < lVar10);
  }
  return;
}

// MixMonoTo6ChannelsFast @ 1444c6860

void __cdecl
Audio::MixMonoTo6ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3,float *param_4)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined8 uVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  iVar6 = param_2->ArrayNum;
  uVar16 = *(undefined8 *)(param_3 + 4);
  fVar19 = *param_3;
  fVar20 = param_3[1];
  fVar21 = param_3[2];
  fVar22 = param_3[3];
  pFVar2 = (param_1->AllocatorInstance).Data;
  fVar23 = param_3[2];
  fVar24 = param_3[3];
  fVar25 = param_3[4];
  fVar26 = param_3[5];
  iVar6 = iVar6 / 6 + (iVar6 >> 0x1f) +
          (int)(((longlong)iVar6 / 6 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  auVar27._0_4_ = (float)*(undefined8 *)(param_4 + 4) - (float)uVar16;
  auVar27._4_4_ =
       (float)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20) - (float)((ulonglong)uVar16 >> 0x20)
  ;
  auVar27._8_4_ = (float)*(undefined8 *)param_4 - fVar19;
  auVar27._12_4_ = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20) - fVar20;
  auVar29._0_4_ = *param_4 - fVar19;
  auVar29._4_4_ = param_4[1] - fVar20;
  auVar29._8_4_ = param_4[2] - fVar21;
  auVar29._12_4_ = param_4[3] - fVar22;
  auVar30._0_4_ = param_4[2] - fVar23;
  auVar30._4_4_ = param_4[3] - fVar24;
  auVar30._8_4_ = param_4[4] - fVar25;
  auVar30._12_4_ = param_4[5] - fVar26;
  fVar12 = (float)iVar6 * __real_3f000000;
  auVar28._4_4_ = fVar12;
  auVar28._0_4_ = fVar12;
  auVar28._8_4_ = fVar12;
  auVar28._12_4_ = fVar12;
  auVar29 = divps(auVar29,auVar28);
  auVar31._4_4_ = fVar12;
  auVar31._0_4_ = fVar12;
  auVar31._8_4_ = fVar12;
  auVar31._12_4_ = fVar12;
  auVar28 = divps(auVar27,auVar31);
  auVar3._4_4_ = fVar12;
  auVar3._0_4_ = fVar12;
  auVar3._8_4_ = fVar12;
  auVar3._12_4_ = fVar12;
  auVar31 = divps(auVar30,auVar3);
  if (0 < iVar6) {
    lVar4 = 0;
    pFVar5 = (param_2->AllocatorInstance).Data + 0x20;
    fVar12 = fVar19;
    fVar18 = fVar20;
    do {
      fVar11 = *(float *)(pFVar2 + lVar4 * 4 + 4);
      fVar1 = *(float *)(pFVar2 + lVar4 * 4);
      lVar4 = lVar4 + 2;
      fVar7 = fVar1 * fVar19;
      fVar8 = fVar1 * fVar20;
      fVar9 = fVar1 * fVar21;
      fVar10 = fVar1 * fVar22;
      fVar19 = fVar19 + auVar29._0_4_;
      fVar20 = fVar20 + auVar29._4_4_;
      fVar21 = fVar21 + auVar29._8_4_;
      fVar22 = fVar22 + auVar29._12_4_;
      fVar15 = (float)uVar16;
      fVar17 = (float)((ulonglong)uVar16 >> 0x20);
      fVar13 = fVar11 * fVar12;
      fVar14 = fVar11 * fVar18;
      uVar16 = CONCAT44(fVar17 + auVar28._4_4_,fVar15 + auVar28._0_4_);
      fVar12 = fVar12 + auVar28._8_4_;
      fVar18 = fVar18 + auVar28._12_4_;
      *(float *)(pFVar5 + -0x20) = fVar7;
      *(float *)(pFVar5 + -0x1c) = fVar8;
      *(float *)(pFVar5 + -0x18) = fVar9;
      *(float *)(pFVar5 + -0x14) = fVar10;
      fVar7 = fVar11 * fVar23;
      fVar8 = fVar11 * fVar24;
      fVar9 = fVar11 * fVar25;
      fVar11 = fVar11 * fVar26;
      fVar23 = fVar23 + auVar31._0_4_;
      fVar24 = fVar24 + auVar31._4_4_;
      fVar25 = fVar25 + auVar31._8_4_;
      fVar26 = fVar26 + auVar31._12_4_;
      *(float *)(pFVar5 + -0x10) = fVar1 * fVar15;
      *(float *)(pFVar5 + -0xc) = fVar1 * fVar17;
      *(float *)(pFVar5 + -8) = fVar13;
      *(float *)(pFVar5 + -4) = fVar14;
      *(float *)pFVar5 = fVar7;
      *(float *)(pFVar5 + 4) = fVar8;
      *(float *)(pFVar5 + 8) = fVar9;
      *(float *)(pFVar5 + 0xc) = fVar11;
      pFVar5 = pFVar5 + 0x30;
    } while (lVar4 < iVar6);
  }
  return;
}

// MixMonoTo6ChannelsFast @ 1444c6980

void __cdecl
Audio::MixMonoTo6ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  
  iVar15 = param_2->ArrayNum;
  uVar3 = *(undefined8 *)(param_3 + 4);
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  pFVar4 = (param_1->AllocatorInstance).Data;
  fVar9 = param_3[2];
  fVar10 = param_3[3];
  fVar11 = param_3[4];
  fVar12 = param_3[5];
  iVar15 = iVar15 / 6 + (iVar15 >> 0x1f) +
           (int)(((longlong)iVar15 / 6 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >> 0x1f);
  if (0 < iVar15) {
    lVar13 = 0;
    pFVar14 = (param_2->AllocatorInstance).Data + 0x20;
    do {
      fVar1 = *(float *)(pFVar4 + lVar13 * 4 + 4);
      fVar2 = *(float *)(pFVar4 + lVar13 * 4);
      lVar13 = lVar13 + 2;
      *(float *)(pFVar14 + -0x20) = fVar2 * fVar5;
      *(float *)(pFVar14 + -0x1c) = fVar2 * fVar6;
      *(float *)(pFVar14 + -0x18) = fVar2 * fVar7;
      *(float *)(pFVar14 + -0x14) = fVar2 * fVar8;
      *(float *)(pFVar14 + -0x10) = fVar2 * (float)uVar3;
      *(float *)(pFVar14 + -0xc) = fVar2 * (float)((ulonglong)uVar3 >> 0x20);
      *(float *)(pFVar14 + -8) = fVar1 * fVar5;
      *(float *)(pFVar14 + -4) = fVar1 * fVar6;
      *(float *)pFVar14 = fVar1 * fVar9;
      *(float *)(pFVar14 + 4) = fVar1 * fVar10;
      *(float *)(pFVar14 + 8) = fVar1 * fVar11;
      *(float *)(pFVar14 + 0xc) = fVar1 * fVar12;
      pFVar14 = pFVar14 + 0x30;
    } while (lVar13 < iVar15);
  }
  return;
}

// MixMonoTo6ChannelsFast @ 1444c6a30

void __cdecl
Audio::MixMonoTo6ChannelsFast
          (float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined8 uVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  uVar14 = *(undefined8 *)(param_4 + 4);
  fVar17 = *param_4;
  fVar18 = param_4[1];
  fVar19 = param_4[2];
  fVar20 = param_4[3];
  auVar27._0_4_ = *param_5 - fVar17;
  auVar27._4_4_ = param_5[1] - fVar18;
  auVar27._8_4_ = param_5[2] - fVar19;
  auVar27._12_4_ = param_5[3] - fVar20;
  auVar25._0_4_ = (float)*(undefined8 *)(param_5 + 4) - (float)uVar14;
  auVar25._4_4_ =
       (float)((ulonglong)*(undefined8 *)(param_5 + 4) >> 0x20) - (float)((ulonglong)uVar14 >> 0x20)
  ;
  auVar25._8_4_ = (float)*(undefined8 *)param_5 - fVar17;
  auVar25._12_4_ = (float)((ulonglong)*(undefined8 *)param_5 >> 0x20) - fVar18;
  fVar21 = param_4[2];
  fVar22 = param_4[3];
  fVar23 = param_4[4];
  fVar24 = param_4[5];
  auVar28._0_4_ = param_5[2] - fVar21;
  auVar28._4_4_ = param_5[3] - fVar22;
  auVar28._8_4_ = param_5[4] - fVar23;
  auVar28._12_4_ = param_5[5] - fVar24;
  fVar5 = (float)param_3 * __real_3f000000;
  auVar26._4_4_ = fVar5;
  auVar26._0_4_ = fVar5;
  auVar26._8_4_ = fVar5;
  auVar26._12_4_ = fVar5;
  auVar27 = divps(auVar27,auVar26);
  auVar29._4_4_ = fVar5;
  auVar29._0_4_ = fVar5;
  auVar29._8_4_ = fVar5;
  auVar29._12_4_ = fVar5;
  auVar26 = divps(auVar25,auVar29);
  auVar2._4_4_ = fVar5;
  auVar2._0_4_ = fVar5;
  auVar2._8_4_ = fVar5;
  auVar2._12_4_ = fVar5;
  auVar29 = divps(auVar28,auVar2);
  if (0 < param_3) {
    pfVar3 = param_2 + 8;
    uVar4 = (ulonglong)((param_3 - 1U >> 1) + 1);
    fVar5 = fVar17;
    fVar16 = fVar18;
    do {
      fVar10 = param_1[1];
      fVar1 = *param_1;
      param_1 = param_1 + 2;
      fVar6 = fVar1 * fVar17;
      fVar7 = fVar1 * fVar18;
      fVar8 = fVar1 * fVar19;
      fVar9 = fVar1 * fVar20;
      fVar17 = fVar17 + auVar27._0_4_;
      fVar18 = fVar18 + auVar27._4_4_;
      fVar19 = fVar19 + auVar27._8_4_;
      fVar20 = fVar20 + auVar27._12_4_;
      fVar13 = (float)uVar14;
      fVar15 = (float)((ulonglong)uVar14 >> 0x20);
      fVar11 = fVar10 * fVar5;
      fVar12 = fVar10 * fVar16;
      uVar14 = CONCAT44(fVar15 + auVar26._4_4_,fVar13 + auVar26._0_4_);
      fVar5 = fVar5 + auVar26._8_4_;
      fVar16 = fVar16 + auVar26._12_4_;
      pfVar3[-8] = fVar6;
      pfVar3[-7] = fVar7;
      pfVar3[-6] = fVar8;
      pfVar3[-5] = fVar9;
      fVar6 = fVar10 * fVar21;
      fVar7 = fVar10 * fVar22;
      fVar8 = fVar10 * fVar23;
      fVar10 = fVar10 * fVar24;
      fVar21 = fVar21 + auVar29._0_4_;
      fVar22 = fVar22 + auVar29._4_4_;
      fVar23 = fVar23 + auVar29._8_4_;
      fVar24 = fVar24 + auVar29._12_4_;
      pfVar3[-4] = fVar1 * fVar13;
      pfVar3[-3] = fVar1 * fVar15;
      pfVar3[-2] = fVar11;
      pfVar3[-1] = fVar12;
      *pfVar3 = fVar6;
      pfVar3[1] = fVar7;
      pfVar3[2] = fVar8;
      pfVar3[3] = fVar10;
      pfVar3 = pfVar3 + 0xc;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// MixMonoTo6ChannelsFast @ 1444c6b50

void __cdecl Audio::MixMonoTo6ChannelsFast(float *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  ulonglong uVar13;
  
  if (0 < param_3) {
    uVar3 = *(undefined8 *)(param_4 + 4);
    fVar4 = *param_4;
    fVar5 = param_4[1];
    fVar6 = param_4[2];
    fVar7 = param_4[3];
    fVar8 = param_4[2];
    fVar9 = param_4[3];
    fVar10 = param_4[4];
    fVar11 = param_4[5];
    uVar13 = (ulonglong)((param_3 - 1U >> 1) + 1);
    pfVar12 = param_2 + 8;
    do {
      fVar1 = param_1[1];
      fVar2 = *param_1;
      param_1 = param_1 + 2;
      pfVar12[-8] = fVar2 * fVar4;
      pfVar12[-7] = fVar2 * fVar5;
      pfVar12[-6] = fVar2 * fVar6;
      pfVar12[-5] = fVar2 * fVar7;
      pfVar12[-4] = fVar2 * (float)uVar3;
      pfVar12[-3] = fVar2 * (float)((ulonglong)uVar3 >> 0x20);
      pfVar12[-2] = fVar1 * fVar4;
      pfVar12[-1] = fVar1 * fVar5;
      *pfVar12 = fVar1 * fVar8;
      pfVar12[1] = fVar1 * fVar9;
      pfVar12[2] = fVar1 * fVar10;
      pfVar12[3] = fVar1 * fVar11;
      uVar13 = uVar13 - 1;
      pfVar12 = pfVar12 + 0xc;
    } while (uVar13 != 0);
  }
  return;
}

// MixMonoTo8ChannelsFast @ 1444c6bf0

void __cdecl
Audio::MixMonoTo8ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3,float *param_4)

{
  MixMonoTo8ChannelsFast
            ((float *)(param_1->AllocatorInstance).Data,(float *)(param_2->AllocatorInstance).Data,
             (int)((param_2->ArrayNum >> 0x1f & 7U) + param_2->ArrayNum) >> 3,param_3,param_4);
  return;
}

// MixMonoTo8ChannelsFast @ 1444c6c30

void __cdecl
Audio::MixMonoTo8ChannelsFast
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,float *param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  
  pFVar12 = (param_2->AllocatorInstance).Data;
  pFVar2 = (param_1->AllocatorInstance).Data;
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  lVar13 = 0;
  fVar7 = param_3[4];
  fVar8 = param_3[5];
  fVar9 = param_3[6];
  fVar10 = param_3[7];
  lVar14 = (longlong)((int)(param_2->ArrayNum + (param_2->ArrayNum >> 0x1f & 7U)) >> 3);
  if (3 < lVar14) {
    lVar11 = (lVar14 - 4U >> 2) + 1;
    lVar13 = lVar11 * 4;
    pFVar15 = pFVar2 + 8;
    pFVar16 = pFVar12 + 0x20;
    do {
      fVar1 = *(float *)(pFVar15 + -8);
      *(float *)(pFVar16 + -0x20) = fVar1 * fVar3;
      *(float *)(pFVar16 + -0x1c) = fVar1 * fVar4;
      *(float *)(pFVar16 + -0x18) = fVar1 * fVar5;
      *(float *)(pFVar16 + -0x14) = fVar1 * fVar6;
      fVar1 = *(float *)(pFVar15 + -8);
      *(float *)(pFVar16 + -0x10) = fVar1 * fVar7;
      *(float *)(pFVar16 + -0xc) = fVar1 * fVar8;
      *(float *)(pFVar16 + -8) = fVar1 * fVar9;
      *(float *)(pFVar16 + -4) = fVar1 * fVar10;
      fVar1 = *(float *)(pFVar15 + -4);
      *(float *)pFVar16 = fVar1 * fVar3;
      *(float *)(pFVar16 + 4) = fVar1 * fVar4;
      *(float *)(pFVar16 + 8) = fVar1 * fVar5;
      *(float *)(pFVar16 + 0xc) = fVar1 * fVar6;
      fVar1 = *(float *)(pFVar15 + -4);
      *(float *)(pFVar16 + 0x10) = fVar1 * fVar7;
      *(float *)(pFVar16 + 0x14) = fVar1 * fVar8;
      *(float *)(pFVar16 + 0x18) = fVar1 * fVar9;
      *(float *)(pFVar16 + 0x1c) = fVar1 * fVar10;
      fVar1 = *(float *)pFVar15;
      *(float *)(pFVar16 + 0x20) = fVar1 * fVar3;
      *(float *)(pFVar16 + 0x24) = fVar1 * fVar4;
      *(float *)(pFVar16 + 0x28) = fVar1 * fVar5;
      *(float *)(pFVar16 + 0x2c) = fVar1 * fVar6;
      fVar1 = *(float *)pFVar15;
      *(float *)(pFVar16 + 0x30) = fVar1 * fVar7;
      *(float *)(pFVar16 + 0x34) = fVar1 * fVar8;
      *(float *)(pFVar16 + 0x38) = fVar1 * fVar9;
      *(float *)(pFVar16 + 0x3c) = fVar1 * fVar10;
      fVar1 = *(float *)(pFVar15 + 4);
      *(float *)(pFVar16 + 0x40) = fVar1 * fVar3;
      *(float *)(pFVar16 + 0x44) = fVar1 * fVar4;
      *(float *)(pFVar16 + 0x48) = fVar1 * fVar5;
      *(float *)(pFVar16 + 0x4c) = fVar1 * fVar6;
      fVar1 = *(float *)(pFVar15 + 4);
      *(float *)(pFVar16 + 0x50) = fVar1 * fVar7;
      *(float *)(pFVar16 + 0x54) = fVar1 * fVar8;
      *(float *)(pFVar16 + 0x58) = fVar1 * fVar9;
      *(float *)(pFVar16 + 0x5c) = fVar1 * fVar10;
      lVar11 = lVar11 + -1;
      pFVar15 = pFVar15 + 0x10;
      pFVar16 = pFVar16 + 0x80;
    } while (lVar11 != 0);
  }
  if (lVar13 < lVar14) {
    pFVar12 = pFVar12 + lVar13 * 0x20;
    do {
      fVar1 = *(float *)(pFVar2 + lVar13 * 4);
      *(float *)pFVar12 = fVar1 * fVar3;
      *(float *)(pFVar12 + 4) = fVar1 * fVar4;
      *(float *)(pFVar12 + 8) = fVar1 * fVar5;
      *(float *)(pFVar12 + 0xc) = fVar1 * fVar6;
      fVar1 = *(float *)(pFVar2 + lVar13 * 4);
      lVar13 = lVar13 + 1;
      *(float *)(pFVar12 + 0x10) = fVar1 * fVar7;
      *(float *)(pFVar12 + 0x14) = fVar1 * fVar8;
      *(float *)(pFVar12 + 0x18) = fVar1 * fVar9;
      *(float *)(pFVar12 + 0x1c) = fVar1 * fVar10;
      pFVar12 = pFVar12 + 0x20;
    } while (lVar13 < lVar14);
  }
  return;
}

// MixMonoTo8ChannelsFast @ 1444c6d70

void __cdecl
Audio::MixMonoTo8ChannelsFast
          (float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  float fVar35;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  
  fVar11 = *param_4;
  fVar13 = param_4[1];
  fVar15 = param_4[2];
  fVar17 = param_4[3];
  lVar4 = (longlong)param_3;
  fVar20 = param_4[4];
  fVar23 = param_4[5];
  fVar26 = param_4[6];
  fVar29 = param_4[7];
  lVar3 = 0;
  auVar31._0_4_ = *param_5 - fVar11;
  auVar31._4_4_ = param_5[1] - fVar13;
  auVar31._8_4_ = param_5[2] - fVar15;
  auVar31._12_4_ = param_5[3] - fVar17;
  auVar36._0_4_ = param_5[4] - fVar20;
  auVar36._4_4_ = param_5[5] - fVar23;
  auVar36._8_4_ = param_5[6] - fVar26;
  auVar36._12_4_ = param_5[7] - fVar29;
  auVar37._0_4_ = (float)param_3;
  auVar37._4_4_ = auVar37._0_4_;
  auVar37._8_4_ = auVar37._0_4_;
  auVar37._12_4_ = auVar37._0_4_;
  auVar31 = divps(auVar31,auVar37);
  auVar37 = divps(auVar36,auVar37);
  fVar30 = auVar31._0_4_;
  fVar32 = auVar31._4_4_;
  fVar33 = auVar31._8_4_;
  fVar34 = auVar31._12_4_;
  fVar35 = auVar37._0_4_;
  fVar38 = auVar37._4_4_;
  fVar39 = auVar37._8_4_;
  fVar40 = auVar37._12_4_;
  if (3 < lVar4) {
    pfVar2 = param_1 + 2;
    lVar1 = (lVar4 - 4U >> 2) + 1;
    pfVar5 = param_2 + 8;
    lVar3 = lVar1 * 4;
    do {
      fVar6 = pfVar2[-2];
      pfVar5[-4] = fVar6 * fVar20;
      pfVar5[-3] = fVar6 * fVar23;
      pfVar5[-2] = fVar6 * fVar26;
      pfVar5[-1] = fVar6 * fVar29;
      fVar19 = pfVar2[-1];
      fVar18 = fVar30 + fVar30 + fVar11;
      fVar21 = fVar32 + fVar32 + fVar13;
      fVar24 = fVar33 + fVar33 + fVar15;
      fVar27 = fVar34 + fVar34 + fVar17;
      pfVar5[-8] = fVar6 * fVar11;
      pfVar5[-7] = fVar6 * fVar13;
      pfVar5[-6] = fVar6 * fVar15;
      pfVar5[-5] = fVar6 * fVar17;
      fVar6 = fVar35 + fVar35 + fVar20;
      fVar7 = fVar38 + fVar38 + fVar23;
      fVar8 = fVar39 + fVar39 + fVar26;
      fVar9 = fVar40 + fVar40 + fVar29;
      pfVar5[4] = fVar19 * (fVar35 + fVar20);
      pfVar5[5] = fVar19 * (fVar38 + fVar23);
      pfVar5[6] = fVar19 * (fVar39 + fVar26);
      pfVar5[7] = fVar19 * (fVar40 + fVar29);
      fVar20 = *pfVar2;
      fVar10 = fVar30 + fVar18;
      fVar12 = fVar32 + fVar21;
      fVar14 = fVar33 + fVar24;
      fVar16 = fVar34 + fVar27;
      *pfVar5 = fVar19 * (fVar30 + fVar11);
      pfVar5[1] = fVar19 * (fVar32 + fVar13);
      pfVar5[2] = fVar19 * (fVar33 + fVar15);
      pfVar5[3] = fVar19 * (fVar34 + fVar17);
      fVar19 = fVar35 + fVar6;
      fVar22 = fVar38 + fVar7;
      fVar25 = fVar39 + fVar8;
      fVar28 = fVar40 + fVar9;
      pfVar5[0xc] = fVar20 * fVar6;
      pfVar5[0xd] = fVar20 * fVar7;
      pfVar5[0xe] = fVar20 * fVar8;
      pfVar5[0xf] = fVar20 * fVar9;
      fVar6 = pfVar2[1];
      pfVar2 = pfVar2 + 4;
      pfVar5[8] = fVar20 * fVar18;
      pfVar5[9] = fVar20 * fVar21;
      pfVar5[10] = fVar20 * fVar24;
      pfVar5[0xb] = fVar20 * fVar27;
      fVar20 = fVar19 + fVar35;
      fVar23 = fVar22 + fVar38;
      fVar26 = fVar25 + fVar39;
      fVar29 = fVar28 + fVar40;
      fVar11 = fVar10 + fVar30;
      fVar13 = fVar12 + fVar32;
      fVar15 = fVar14 + fVar33;
      fVar17 = fVar16 + fVar34;
      pfVar5[0x14] = fVar6 * fVar19;
      pfVar5[0x15] = fVar6 * fVar22;
      pfVar5[0x16] = fVar6 * fVar25;
      pfVar5[0x17] = fVar6 * fVar28;
      pfVar5[0x10] = fVar6 * fVar10;
      pfVar5[0x11] = fVar6 * fVar12;
      pfVar5[0x12] = fVar6 * fVar14;
      pfVar5[0x13] = fVar6 * fVar16;
      pfVar5 = pfVar5 + 0x20;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (lVar3 < lVar4) {
    pfVar2 = param_2 + lVar3 * 8;
    do {
      fVar6 = param_1[lVar3];
      lVar3 = lVar3 + 1;
      fVar9 = fVar6 * fVar20;
      fVar10 = fVar6 * fVar23;
      fVar12 = fVar6 * fVar26;
      fVar14 = fVar6 * fVar29;
      fVar19 = fVar6 * fVar11;
      fVar7 = fVar6 * fVar13;
      fVar8 = fVar6 * fVar15;
      fVar6 = fVar6 * fVar17;
      fVar20 = fVar20 + fVar35;
      fVar23 = fVar23 + fVar38;
      fVar26 = fVar26 + fVar39;
      fVar29 = fVar29 + fVar40;
      fVar11 = fVar11 + fVar30;
      fVar13 = fVar13 + fVar32;
      fVar15 = fVar15 + fVar33;
      fVar17 = fVar17 + fVar34;
      pfVar2[4] = fVar9;
      pfVar2[5] = fVar10;
      pfVar2[6] = fVar12;
      pfVar2[7] = fVar14;
      *pfVar2 = fVar19;
      pfVar2[1] = fVar7;
      pfVar2[2] = fVar8;
      pfVar2[3] = fVar6;
      pfVar2 = pfVar2 + 8;
    } while (lVar3 < lVar4);
  }
  return;
}

// MixMonoTo8ChannelsFast @ 1444c6ee0

void __cdecl Audio::MixMonoTo8ChannelsFast(float *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  fVar7 = param_4[4];
  fVar8 = param_4[5];
  fVar9 = param_4[6];
  fVar10 = param_4[7];
  lVar13 = (longlong)param_3;
  lVar12 = 0;
  if (3 < lVar13) {
    lVar14 = (lVar13 - 4U >> 2) + 1;
    lVar12 = lVar14 * 4;
    pfVar11 = param_2 + 8;
    pfVar15 = param_1 + 2;
    do {
      fVar1 = pfVar15[-2];
      fVar2 = pfVar15[-1];
      pfVar11[-8] = fVar1 * fVar3;
      pfVar11[-7] = fVar1 * fVar4;
      pfVar11[-6] = fVar1 * fVar5;
      pfVar11[-5] = fVar1 * fVar6;
      pfVar11[-4] = fVar1 * fVar7;
      pfVar11[-3] = fVar1 * fVar8;
      pfVar11[-2] = fVar1 * fVar9;
      pfVar11[-1] = fVar1 * fVar10;
      fVar1 = *pfVar15;
      *pfVar11 = fVar2 * fVar3;
      pfVar11[1] = fVar2 * fVar4;
      pfVar11[2] = fVar2 * fVar5;
      pfVar11[3] = fVar2 * fVar6;
      pfVar11[4] = fVar2 * fVar7;
      pfVar11[5] = fVar2 * fVar8;
      pfVar11[6] = fVar2 * fVar9;
      pfVar11[7] = fVar2 * fVar10;
      fVar2 = pfVar15[1];
      pfVar11[8] = fVar1 * fVar3;
      pfVar11[9] = fVar1 * fVar4;
      pfVar11[10] = fVar1 * fVar5;
      pfVar11[0xb] = fVar1 * fVar6;
      pfVar11[0xc] = fVar1 * fVar7;
      pfVar11[0xd] = fVar1 * fVar8;
      pfVar11[0xe] = fVar1 * fVar9;
      pfVar11[0xf] = fVar1 * fVar10;
      pfVar11[0x14] = fVar2 * fVar7;
      pfVar11[0x15] = fVar2 * fVar8;
      pfVar11[0x16] = fVar2 * fVar9;
      pfVar11[0x17] = fVar2 * fVar10;
      pfVar11[0x10] = fVar2 * fVar3;
      pfVar11[0x11] = fVar2 * fVar4;
      pfVar11[0x12] = fVar2 * fVar5;
      pfVar11[0x13] = fVar2 * fVar6;
      lVar14 = lVar14 + -1;
      pfVar11 = pfVar11 + 0x20;
      pfVar15 = pfVar15 + 4;
    } while (lVar14 != 0);
  }
  if (lVar12 < lVar13) {
    pfVar11 = param_2 + lVar12 * 8;
    do {
      fVar1 = param_1[lVar12];
      lVar12 = lVar12 + 1;
      pfVar11[4] = fVar1 * fVar7;
      pfVar11[5] = fVar1 * fVar8;
      pfVar11[6] = fVar1 * fVar9;
      pfVar11[7] = fVar1 * fVar10;
      *pfVar11 = fVar1 * fVar3;
      pfVar11[1] = fVar1 * fVar4;
      pfVar11[2] = fVar1 * fVar5;
      pfVar11[3] = fVar1 * fVar6;
      pfVar11 = pfVar11 + 8;
    } while (lVar12 < lVar13);
  }
  return;
}

// NewPseudoConstantQKernelTransform @ 1444c7750

TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
 __cdecl Audio::NewPseudoConstantQKernelTransform
                   (FPseudoConstantQKernelSettings *param_1,int param_2,float param_3)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  float _X;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
  TVar7;
  FContiguousSparse2DKernelTransform *this;
  FContiguousSparse2DKernelTransform *pFVar8;
  undefined4 in_register_00000014;
  int *piVar9;
  int iVar10;
  FContiguousSparse2DKernelTransform *pFVar11;
  int in_R8D;
  float fVar12;
  float fVar13;
  float in_XMM3_Da;
  int local_res18 [4];
  TArray<float,TAlignedHeapAllocator<16>_> local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<float_const_,int> local_d8;
  FPseudoConstantQBandSettings local_c8 [8];
  
  piVar9 = (int *)CONCAT44(in_register_00000014,param_2);
  if ((in_XMM3_Da <= 0.0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSampleRate > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                         ,0xa1,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    TVar7.Ptr = (FContiguousSparse2DKernelTransform *)(*pcVar2)();
    return (TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
            )TVar7.Ptr;
  }
  if ((in_R8D < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFFTSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                         ,0xa2,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    TVar7.Ptr = (FContiguousSparse2DKernelTransform *)(*pcVar2)();
    return (TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
            )TVar7.Ptr;
  }
  this = ::operator_new(0x20);
  pFVar11 = (FContiguousSparse2DKernelTransform *)0x0;
  pFVar8 = pFVar11;
  if (this != (FContiguousSparse2DKernelTransform *)0x0) {
    pFVar8 = FContiguousSparse2DKernelTransform::FContiguousSparse2DKernelTransform
                       (this,in_R8D / 2 + 1,*piVar9);
  }
  *(FContiguousSparse2DKernelTransform **)param_1 = pFVar8;
  _X = __real_40000000;
  fVar3 = __real_3f800000;
  local_c8[0].Normalization = *(EPseudoConstantQNormalization *)(piVar9 + 4);
  if (0 < *piVar9) {
    do {
      fVar1 = (float)piVar9[1];
      fVar13 = (float)piVar9[2];
      if ((fVar1 <= 0.0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InBandsPerOctave > 0.f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                             ,0x3c,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (FContiguousSparse2DKernelTransform *)(*pcVar2)();
        return (TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
                )TVar7.Ptr;
      }
      iVar10 = (int)pFVar11;
      fVar12 = powf(_X,(float)iVar10 / fVar1);
      fVar1 = (float)piVar9[3];
      fVar12 = fVar12 * fVar13;
      fVar13 = (float)piVar9[1];
      local_c8[0].CenterFreq = fVar12;
      if ((fVar13 <= 0.0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InBandsPerOctave > 0.f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                             ,0x42,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (FContiguousSparse2DKernelTransform *)(*pcVar2)();
        return (TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
                )TVar7.Ptr;
      }
      fVar13 = powf(_X,fVar3 / fVar13);
      local_c8[0].BandWidth = (fVar13 - fVar3) * fVar12 * fVar1;
      if ((fVar12 - local_c8[0].BandWidth <= in_XMM3_Da) && (fVar12 <= in_XMM3_Da + in_XMM3_Da)) {
        local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0;
        local_res18[0] = 0;
        FPseudoConstantQ::FillArrayWithConstantQBand(local_c8,&local_f8,local_res18);
        FVar4.Data = local_f8.AllocatorInstance.Data;
        iVar5 = local_f8.ArrayNum;
        pFVar8 = *(FContiguousSparse2DKernelTransform **)param_1;
        local_e8 = local_f8.AllocatorInstance.Data;
        if ((local_f8.ArrayNum < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (FContiguousSparse2DKernelTransform *)(*pcVar2)();
          return (TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
                  )TVar7.Ptr;
        }
        iStack_e0 = iVar5;
        local_d8._12_4_ = uStack_dc;
        local_d8.ArrayNum = iVar5;
        local_d8.DataPtr = (float *)local_e8;
        FContiguousSparse2DKernelTransform::SetRow(pFVar8,iVar10,local_res18[0],&local_d8);
        if (FVar4.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar4.Data);
        }
      }
      pFVar11 = (FContiguousSparse2DKernelTransform *)(ulonglong)(iVar10 + 1U);
    } while ((int)(iVar10 + 1U) < *piVar9);
  }
  return (TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
          )(FContiguousSparse2DKernelTransform *)param_1;
}

// NormalizedLinearToLog @ 1444c7de0

float __cdecl Audio::EarlyReflectionsPrivate::NormalizedLinearToLog(float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = __real_3f800000;
  if (0.0 <= param_1) {
    if ((__real_3f800000 < param_1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InLinear <= 1.f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EarlyReflectionsFast.cpp"
                           ,0xd,L""), bVar2)) goto code_r0x0001444c7e51;
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InLinear >= 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EarlyReflectionsFast.cpp"
                       ,0xc,L"");
    if (bVar2) {
code_r0x0001444c7e51:
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = logf(param_1 + fVar3);
  return fVar3 * InvLn2;
}

// ScalePowerSpectrumInPlace @ 1444e2380

void __cdecl
Audio::ScalePowerSpectrumInPlace
          (int param_1,EFFTScaling param_2,EFFTScaling param_3,TArrayView<float,int> *param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float local_res10 [2];
  TArrayView<float,int> local_28 [2];
  
  if (param_2 == param_3) {
    return;
  }
  local_res10[0] = (float)param_1;
  if (param_1 < 1) {
    local_28[0].DataPtr = local_res10;
    bVar1 = `Audio::GetPowerSpectrumScaling'::__l3::<lambda_1>::operator()(local_28);
    fVar2 = __real_3f800000;
    if (!bVar1) goto LAB_1444e2403;
  }
  fVar2 = FFTIntrinsics::GetScalingExponent(param_3);
  fVar3 = FFTIntrinsics::GetScalingExponent(param_2);
  fVar2 = powf((float)(int)local_res10[0],(fVar2 - fVar3) + (fVar2 - fVar3));
LAB_1444e2403:
  local_28[0].DataPtr = param_4->DataPtr;
  local_28[0].ArrayNum = param_4->ArrayNum;
  local_28[0]._12_4_ = *(undefined4 *)&param_4->field_0xc;
  ArrayMultiplyByConstantInPlace(local_28,fVar2);
  return;
}

// ToDelimString @ 1444e6110

FString * __cdecl
BufferDiagnosticsPrivate::ToDelimString(FString *__return_storage_ptr__,ECheckBufferFlags param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  wchar_t wVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  FString local_18;
  
  pwVar1 = LexToString(param_1);
  if (pwVar1 != (wchar_t *)0x0) {
    ::FString::FString(__return_storage_ptr__,pwVar1);
    return __return_storage_ptr__;
  }
  wVar6 = L'E';
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  wVar5 = L'E';
  if ((param_1 & Infinity) != None) {
    pwVar1 = L"ECheckBufferFlags::Infinity";
    pwVar2 = L"ECheckBufferFlags::Infinity";
    wVar4 = wVar5;
    do {
      if (wVar4 == L':') {
        pwVar1 = pwVar2 + 2;
        break;
      }
      wVar4 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
    } while (wVar4 != L'\0');
    sVar3 = wcslen(pwVar1);
    ::FString::AppendChars(&local_18,pwVar1,(int)sVar3);
    ::FString::AppendChars(&local_18,L"|",1);
  }
  if ((param_1 & Nan) != None) {
    pwVar1 = L"ECheckBufferFlags::Nan";
    wVar4 = L'E';
    pwVar2 = L"ECheckBufferFlags::Nan";
    do {
      if (wVar4 == L':') {
        pwVar1 = pwVar2 + 2;
        break;
      }
      wVar4 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
    } while (wVar4 != L'\0');
    sVar3 = wcslen(pwVar1);
    ::FString::AppendChars(&local_18,pwVar1,(int)sVar3);
    ::FString::AppendChars(&local_18,L"|",1);
  }
  if ((param_1 & Denormalized) != None) {
    pwVar1 = L"ECheckBufferFlags::Denormalized";
    pwVar2 = L"ECheckBufferFlags::Denormalized";
    do {
      if (wVar5 == L':') {
        pwVar1 = pwVar2 + 2;
        break;
      }
      wVar5 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
    } while (wVar5 != L'\0');
    sVar3 = wcslen(pwVar1);
    ::FString::AppendChars(&local_18,pwVar1,(int)sVar3);
    ::FString::AppendChars(&local_18,L"|",1);
  }
  if (((byte)param_1 & 0xe) == 0xe) {
    pwVar1 = L"ECheckBufferFlags::All";
    pwVar2 = L"ECheckBufferFlags::All";
    do {
      if (wVar6 == L':') {
        pwVar1 = pwVar2 + 2;
        break;
      }
      wVar6 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
    } while (wVar6 != L'\0');
    sVar3 = wcslen(pwVar1);
    ::FString::AppendChars(&local_18,pwVar1,(int)sVar3);
    ::FString::AppendChars(&local_18,L"|",1);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// ToDelimitedString @ 1444e6310

FString * __cdecl
Audio::ToDelimitedString(FString *__return_storage_ptr__,ECheckBufferFlags param_1)

{
  BufferDiagnosticsPrivate::ToDelimString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransposeOutputMajorOrderToInputMajorOrder @ 1444e6780

void __cdecl
Audio::ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder
          (int param_1,int param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined4 uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint local_res8;
  uint local_res18;
  longlong local_res20;
  longlong local_78;
  ForAnyElementType local_68;
  int local_60;
  int local_5c [7];
  
  if ((param_3->ArrayNum != param_1 * param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutChannelMap.Num() == (InNumInputChannels * InNumOutputChannels)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ChannelMap.cpp"
                         ,0x17d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_60 = param_3->ArrayNum;
  lVar6 = (longlong)local_60;
  _Src = (param_3->AllocatorInstance).Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  if (local_60 == 0) {
    local_5c[0] = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_60,0,&local_68,local_60,local_5c);
    memcpy(local_68.Data,_Src,lVar6 << 2);
    iVar5 = local_60;
  }
  local_res8 = 0;
  if (0 < param_1) {
    local_78 = 0;
    local_res18 = 0;
    local_res20 = 0;
    do {
      uVar10 = (ulonglong)(uint)param_2;
      lVar6 = local_78;
      lVar9 = local_res20;
      uVar8 = local_res18;
      uVar7 = local_res8;
      if (0 < param_2) {
        do {
          uVar4 = 0;
          if ((int)uVar8 < iVar5) {
            uVar4 = ~uVar8 >> 0x1f;
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
          uVar1 = *(undefined4 *)(local_68.Data + lVar9);
          uVar4 = 0;
          if ((int)uVar7 < param_3->ArrayNum) {
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
          *(undefined4 *)((param_3->AllocatorInstance).Data + lVar6) = uVar1;
          uVar10 = uVar10 - 1;
          lVar6 = lVar6 + (longlong)param_1 * 4;
          lVar9 = lVar9 + 4;
          iVar5 = local_60;
          uVar8 = uVar8 + 1;
          uVar7 = uVar7 + param_1;
        } while (uVar10 != 0);
      }
      local_res8 = local_res8 + 1;
      local_res18 = local_res18 + param_2;
      local_res20 = local_res20 + (longlong)param_2 * 4;
      local_78 = local_78 + 4;
    } while ((int)local_res8 < param_1);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// TryLexFromString @ 1444e6a30

bool __cdecl BufferDiagnosticsPrivate::TryLexFromString(wchar_t *param_1,ECheckBufferFlags *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  
  wVar5 = L'E';
  pwVar3 = L"ECheckBufferFlags::None";
  pwVar2 = L"ECheckBufferFlags::None";
  wVar4 = L'E';
  wVar6 = wVar4;
  do {
    if (wVar6 == L':') {
      pwVar3 = pwVar2 + 2;
      break;
    }
    wVar6 = pwVar2[1];
    pwVar2 = pwVar2 + 1;
  } while (wVar6 != L'\0');
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,pwVar3);
  if (iVar1 == 0) {
    *param_2 = None;
    return true;
  }
  pwVar3 = L"ECheckBufferFlags::Infinity";
  pwVar2 = L"ECheckBufferFlags::Infinity";
  do {
    if (wVar4 == L':') {
      pwVar3 = pwVar2 + 2;
      break;
    }
    wVar4 = pwVar2[1];
    pwVar2 = pwVar2 + 1;
  } while (wVar4 != L'\0');
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,pwVar3);
  if (iVar1 == 0) {
    *param_2 = Infinity;
    return true;
  }
  pwVar3 = L"ECheckBufferFlags::Nan";
  wVar4 = L'E';
  pwVar2 = L"ECheckBufferFlags::Nan";
  wVar6 = wVar4;
  do {
    if (wVar6 == L':') {
      pwVar3 = pwVar2 + 2;
      break;
    }
    wVar6 = pwVar2[1];
    pwVar2 = pwVar2 + 1;
  } while (wVar6 != L'\0');
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,pwVar3);
  if (iVar1 == 0) {
    *param_2 = Nan;
    return true;
  }
  pwVar3 = L"ECheckBufferFlags::Denormalized";
  pwVar2 = L"ECheckBufferFlags::Denormalized";
  do {
    if (wVar4 == L':') {
      pwVar3 = pwVar2 + 2;
      break;
    }
    wVar4 = pwVar2[1];
    pwVar2 = pwVar2 + 1;
  } while (wVar4 != L'\0');
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,pwVar3);
  if (iVar1 == 0) {
    *param_2 = Denormalized;
    return true;
  }
  pwVar3 = L"ECheckBufferFlags::All";
  pwVar2 = L"ECheckBufferFlags::All";
  do {
    if (wVar5 == L':') {
      pwVar3 = pwVar2 + 2;
      break;
    }
    wVar5 = pwVar2[1];
    pwVar2 = pwVar2 + 1;
  } while (wVar5 != L'\0');
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,pwVar3);
  if (iVar1 != 0) {
    return false;
  }
  *param_2 = All;
  return true;
}

// ListCs'' @ 15036bed0

void __cdecl `dynamic_atexit_destructor_for_'Audio::FCheckedBufferState::ListCs__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015036bed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&Audio::FCheckedBufferState::ListCs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAudioFloatArrayMathISPCEnabled'' @ 15036bef0

void __cdecl _dynamic_atexit_destructor_for__CVarAudioFloatArrayMathISPCEnabled__(void)

{
  CVarAudioFloatArrayMathISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAudioFloatArrayMathISPCEnabled)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayResetFadeLengthSamples'' @ 15036bf10

void __cdecl _dynamic_atexit_destructor_for__CVarDelayResetFadeLengthSamples__(void)

{
  CVarDelayResetFadeLengthSamples._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayResetFadeLengthSamples);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFDelayInitialAllocationSeconds'' @ 15036bf30

void __cdecl _dynamic_atexit_destructor_for__CVarFDelayInitialAllocationSeconds__(void)

{
  CVarFDelayInitialAllocationSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFDelayInitialAllocationSeconds)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarFFTMethod'' @ 15036bf50

void __cdecl _dynamic_atexit_destructor_for__CVarFFTMethod__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFFTMethod);
  return;
}

// `dynamic_atexit_destructor_for_'CmdBufferDiagnostics'' @ 15036bf70

void __cdecl BufferDiagnosticsPrivate::_dynamic_atexit_destructor_for__CmdBufferDiagnostics__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdBufferDiagnostics);
  return;
}

// `dynamic_atexit_destructor_for_'InternalFFTFActoryPriority'' @ 15036bf90

void __cdecl
`Audio::GetPrioritizedSupportingFactories'::__l2::
_dynamic_atexit_destructor_for__InternalFFTFActoryPriority__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InternalFFTFActoryPriority.AllocatorInstance.Data;
  if (InternalFFTFActoryPriority.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InternalFFTFActoryPriority.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OggExtension'' @ 15036bfb0

void __cdecl
`Audio::FAudioFileWriter::GetNewEncoderForFile'::__l2::
_dynamic_atexit_destructor_for__OggExtension__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OggExtension.Data.AllocatorInstance.Data;
  if (OggExtension.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OggExtension.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OpusExtension'' @ 15036bfd0

void __cdecl
`Audio::FAudioFileWriter::GetNewEncoderForFile'::__l2::
_dynamic_atexit_destructor_for__OpusExtension__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OpusExtension.Data.AllocatorInstance.Data;
  if (OpusExtension.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OpusExtension.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'WavExtension'' @ 15036bff0

void __cdecl
`Audio::FAudioFileWriter::GetNewEncoderForFile'::__l2::
_dynamic_atexit_destructor_for__WavExtension__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WavExtension.Data.AllocatorInstance.Data;
  if (WavExtension.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WavExtension.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_Audio_Dsp'' @ 15036c010

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Audio_Dsp__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Audio_Dsp.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Audio_Dsp.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Audio_Dsp.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// operator() @ 1504bf0e0

bool __thiscall `Audio::CreateVorbis2DChannelMap'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3292703662064795209>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3292703662064795209>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bf130

bool __thiscall
`Audio::ChannelMapPrivate::EnsureValidChannelCounts'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3292703662064795283>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3292703662064795283>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bf180

bool __thiscall `Audio::GetPowerSpectrumScaling'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6552673488581165314>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6552673488581165314>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bf450

bool __thiscall
`Audio::ChannelMapPrivate::EnsureValidChannelCounts'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3292703662064795280>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3292703662064795280>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

