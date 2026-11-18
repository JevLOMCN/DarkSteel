// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 6

// GetFactoryName @ 1444e85d0

FName __thiscall
Audio::FUniformPartitionConvolutionFactory::GetFactoryName
          (FUniformPartitionConvolutionFactory *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"UniformPartitionConvolutionFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// IsHardwareAccelerated @ 1444e8650

bool __thiscall
Audio::FUniformPartitionConvolutionFactory::IsHardwareAccelerated
          (FUniformPartitionConvolutionFactory *this)

{
  return false;
}

// AreConvolutionSettingsSupported @ 1444e8660

bool __thiscall
Audio::FUniformPartitionConvolutionFactory::AreConvolutionSettingsSupported
          (FUniformPartitionConvolutionFactory *this,FConvolutionSettings *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  ulonglong uVar9;
  byte bVar10;
  FFFTSettings local_res10;
  int local_res18;
  undefined1 uStackX_1c;
  undefined1 uStackX_1d;
  undefined2 uStackX_1e;
  
  iVar1 = param_1->NumInputChannels;
  uVar2 = param_1->BlockNumSamples;
  iVar3 = param_1->NumOutputChannels;
  iVar4 = param_1->NumImpulseResponses;
  iVar5 = param_1->MaxNumImpulseResponseSamples;
  local_res18 = 0;
  if (((int)uVar2 < 1) ||
     (uVar9 = (longlong)(int)uVar2 - ((ulonglong)(longlong)(int)uVar2 >> 1 & 0x5555555555555555),
     uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333),
     (char)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\x01')) {
    uStackX_1d = param_1->bEnableHardwareAcceleration;
    bVar10 = 0;
    if (uVar2 == 0) goto LAB_1444e8728;
  }
  else {
    uStackX_1d = param_1->bEnableHardwareAcceleration;
    bVar10 = 1;
  }
  iVar6 = 0;
  if (uVar2 != 0) {
    for (; (uVar2 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
    }
  }
  local_res18 = 0x20;
  if (uVar2 != 0) {
    local_res18 = iVar6;
  }
  local_res18 = local_res18 + 1;
LAB_1444e8728:
  uStackX_1c = 1;
  local_res10.bArrays128BitAligned = true;
  local_res10.Log2Size = local_res18;
  local_res10.bEnableHardwareAcceleration = (bool)uStackX_1d;
  local_res10._6_2_ = uStackX_1e;
  bVar7 = FFFTFactory::AreFFTSettingsSupported(&local_res10,&FFFTFactory::AnyAlgorithmFactory);
  bVar8 = 0;
  if (0 < iVar5) {
    bVar8 = bVar7 & bVar10;
  }
  bVar10 = 0;
  if (0 < iVar3) {
    bVar10 = bVar8 & 0 < iVar4;
  }
  return (bool)(bVar10 & 0 < iVar1);
}

// NewConvolutionAlgorithm @ 1444e8780

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_> __thiscall
Audio::FUniformPartitionConvolutionFactory::NewConvolutionAlgorithm
          (FUniformPartitionConvolutionFactory *this,FConvolutionSettings *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  FFFTSettings FVar4;
  char cVar5;
  bool bVar6;
  TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_> TVar7;
  FUniformPartitionConvolution *pFVar8;
  FUniformPartitionConvolution *pFVar9;
  undefined8 *puVar10;
  FNameEntryId FVar11;
  FUniformPartitionConvolution *pFVar13;
  undefined1 *in_R8;
  FFFTSettings local_res18;
  FName local_res20;
  FUniformPartitionConvolutionSettings local_48;
  TSharedRef<Audio::IFFTAlgorithm,1> local_38;
  int iVar12;
  
  cVar5 = (**(code **)((longlong)*this + 0x18))();
  if ((cVar5 == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AreConvolutionSettingsSupported(InSettings)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\UniformPartitionConvolution.cpp"
                         ,0x206,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (IConvolutionAlgorithm *)(*pcVar3)();
    return (TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>)
           TVar7.Ptr;
  }
  pFVar9 = (FUniformPartitionConvolution *)0x0;
  local_res20.Number._1_1_ = *in_R8;
  FVar11.Value = 0;
  uVar1 = *(uint *)(in_R8 + 4);
  local_res20._0_5_ = 0x100000000;
  if (uVar1 != 0) {
    iVar2 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    iVar12 = 0x20;
    if (uVar1 != 0) {
      iVar12 = iVar2;
    }
    FVar11.Value = iVar12 + 1;
  }
  local_res20.ComparisonIndex.Value = FVar11.Value;
  FFFTFactory::NewFFTAlgorithm(&local_res18,&local_res20);
  FVar4 = local_res18;
  if (local_res18 == (FFFTSettings)0x0) {
    if (1 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    }
    param_1->bEnableHardwareAcceleration = false;
    *(undefined3 *)&param_1->field_0x1 = 0;
    param_1->BlockNumSamples = 0;
    if (local_res18 == (FFFTSettings)0x0) {
      return (TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>
             )(IConvolutionAlgorithm *)param_1;
    }
    puVar10 = *(undefined8 **)local_res18;
  }
  else {
    local_res18.Log2Size = 0;
    local_res18.bArrays128BitAligned = false;
    local_res18.bEnableHardwareAcceleration = false;
    local_res18._6_2_ = 0;
    pFVar8 = ::operator_new(0x18);
    pFVar13 = pFVar9;
    if (pFVar8 != (FUniformPartitionConvolution *)0x0) {
      (pFVar8->Settings).NumInputChannels = 1;
      (pFVar8->Settings).NumOutputChannels = 1;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VIFFTAlgorithm_Audio__U__DefaultDeleter_VIFFTAlgorithm_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(FFFTSettings *)&(pFVar8->Settings).NumImpulseResponses = FVar4;
      pFVar13 = pFVar8;
    }
    if ((FVar4 == (FFFTSettings)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IConvolutionAlgorithm *)(*pcVar3)();
      return (TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>
             )TVar7.Ptr;
    }
    local_48.NumInputChannels = *(int *)(in_R8 + 8);
    local_48.NumOutputChannels = *(int *)(in_R8 + 0xc);
    local_48.NumImpulseResponses = *(int *)(in_R8 + 0x10);
    local_48.MaxNumImpulseResponseSamples = *(int *)(in_R8 + 0x14);
    pFVar8 = ::operator_new(0xd8);
    if (pFVar8 != (FUniformPartitionConvolution *)0x0) {
      local_38.Object = (IFFTAlgorithm *)FVar4;
      if (pFVar13 != (FUniformPartitionConvolution *)0x0) {
        LOCK();
        (pFVar13->Settings).NumInputChannels = (pFVar13->Settings).NumInputChannels + 1;
        UNLOCK();
      }
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
      pFVar9 = FUniformPartitionConvolution::FUniformPartitionConvolution
                         (pFVar8,&local_48,&local_38);
    }
    *(FUniformPartitionConvolution **)param_1 = pFVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
    if (local_res18 == (FFFTSettings)0x0) {
      return (TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>
             )(IConvolutionAlgorithm *)param_1;
    }
    puVar10 = *(undefined8 **)local_res18;
  }
  (*(code *)*puVar10)(local_res18,1);
  return (TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>)
         (IConvolutionAlgorithm *)param_1;
}

// ~FUniformPartitionConvolutionFactory @ 1444f4800

void __thiscall
Audio::FUniformPartitionConvolutionFactory::~FUniformPartitionConvolutionFactory
          (FUniformPartitionConvolutionFactory *this)

{
  *this = (FUniformPartitionConvolutionFactory)&___7FUniformPartitionConvolutionFactory_Audio__6B_;
  IConvolutionAlgorithmFactory::~IConvolutionAlgorithmFactory((IConvolutionAlgorithmFactory *)this);
  return;
}

// FFTSettingsFromConvolutionSettings @ 1444fb6c0

FFFTSettings __cdecl
Audio::FUniformPartitionConvolutionFactory::FFTSettingsFromConvolutionSettings
          (FConvolutionSettings *param_1)

{
  uint uVar1;
  int iVar2;
  FFFTSettings FVar3;
  FFFTSettings FVar4;
  int iVar5;
  undefined2 uStackX_e;
  
  uVar1 = param_1->BlockNumSamples;
  if (uVar1 != 0) {
    iVar2 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    iVar5 = 0x20;
    if (uVar1 != 0) {
      iVar5 = iVar2;
    }
    FVar3.bArrays128BitAligned = true;
    FVar3.Log2Size = iVar5 + 1;
    FVar3.bEnableHardwareAcceleration = param_1->bEnableHardwareAcceleration;
    FVar3._6_2_ = uStackX_e;
    return FVar3;
  }
  FVar4.bEnableHardwareAcceleration = param_1->bEnableHardwareAcceleration;
  FVar4.Log2Size = 0;
  FVar4.bArrays128BitAligned = true;
  FVar4._6_2_ = uStackX_e;
  return FVar4;
}

