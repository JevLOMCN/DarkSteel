// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 339

// ResetFunction @ 14b030e40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TADEnvelopeNodeOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TADEnvelopeNodeOperator<float>::Reset((TADEnvelopeNodeOperator<float> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b030ea0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::Reset
            ((TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b030f00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
  ::Reset((TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
           *)param_1,param_2);
  return;
}

// ResetFunction @ 14b030f60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::Reset
            ((TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
              *)param_1,param_2);
  return;
}

// ResetFunction @ 14b030fc0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAbsNodeOperator<int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = -*(int *)param_1[2];
  if (iVar3 < 0) {
    iVar3 = *(int *)param_1[2];
  }
  *(int *)param_1[6] = iVar3;
  return;
}

// ResetFunction @ 14b031020

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAbsNodeOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)param_1[6] = *(uint *)param_1[2] & __xmm_7fffffff7fffffff7fffffff7fffffff;
  return;
}

// ResetFunction @ 14b031080

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAbsNodeOperator<Metasound::FAudioBuffer>::GetAbs
            ((TAbsNodeOperator<Metasound::FAudioBuffer> *)param_1);
  return;
}

// ResetFunction @ 14b0310d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAbsNodeOperator<Metasound::FTime>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(ulonglong *)param_1[6] =
       CONCAT44((uint)((ulonglong)*(undefined8 *)param_1[2] >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                (uint)*(undefined8 *)param_1[2] & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  return;
}

// ResetFunction @ 14b031130

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TBandSplitterOperator<2,1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<2,1>::Reset((TBandSplitterOperator<2,1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b031190

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TBandSplitterOperator<2,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<2,2>::Reset((TBandSplitterOperator<2,2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b0311f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TBandSplitterOperator<3,1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<3,1>::Reset((TBandSplitterOperator<3,1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b031250

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TBandSplitterOperator<3,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<3,2>::Reset((TBandSplitterOperator<3,2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b0312b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TBandSplitterOperator<4,1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<4,1>::Reset((TBandSplitterOperator<4,1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b031310

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TBandSplitterOperator<4,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<4,2>::Reset((TBandSplitterOperator<4,2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b031370

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TBandSplitterOperator<5,1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<5,1>::Reset((TBandSplitterOperator<5,1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b0313d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TBandSplitterOperator<5,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<5,2>::Reset((TBandSplitterOperator<5,2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b031430

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b031480

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b0314d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[3];
  IVar2 = param_1[7];
  uVar4 = *(undefined8 *)((longlong)IVar1 + 8);
  *(undefined8 *)IVar2 = *(undefined8 *)IVar1;
  *(undefined8 *)((longlong)IVar2 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)IVar1 + 0x18);
  *(undefined8 *)((longlong)IVar2 + 0x10) = *(undefined8 *)((longlong)IVar1 + 0x10);
  *(undefined8 *)((longlong)IVar2 + 0x18) = uVar4;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>::
  operator=((TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)((longlong)IVar2 + 0x20),
            (TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)((longlong)IVar1 + 0x20));
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>::
  operator=((TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)((longlong)IVar2 + 0x30),
            (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)((longlong)IVar1 + 0x30));
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b031560

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[3];
  IVar2 = param_1[7];
  uVar4 = *(undefined8 *)((longlong)IVar1 + 8);
  *(undefined8 *)IVar2 = *(undefined8 *)IVar1;
  *(undefined8 *)((longlong)IVar2 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)IVar1 + 0x18);
  *(undefined8 *)((longlong)IVar2 + 0x10) = *(undefined8 *)((longlong)IVar1 + 0x10);
  *(undefined8 *)((longlong)IVar2 + 0x18) = uVar4;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>::
  operator=((TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)((longlong)IVar2 + 0x20),
            (TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)((longlong)IVar1 + 0x20));
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>::
  operator=((TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)((longlong)IVar2 + 0x30),
            (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)((longlong)IVar1 + 0x30));
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b0315f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b0316d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b0317b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
  TVar5;
  TAudioSender<Metasound::FMonoAudioFormat> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::ResetSenderAndCleanupChannel
            ((TSendOperator<Metasound::FMonoAudioFormat> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::CreateNewSender
                    ((TSendOperator<Metasound::FMonoAudioFormat> *)param_1);
  pTVar6 = (TAudioSender<Metasound::FMonoAudioFormat> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b031890

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
  TVar5;
  TAudioSender<Metasound::FStereoAudioFormat> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::ResetSenderAndCleanupChannel
            ((TSendOperator<Metasound::FStereoAudioFormat> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::CreateNewSender
                    ((TSendOperator<Metasound::FStereoAudioFormat> *)param_1);
  pTVar6 = (TAudioSender<Metasound::FStereoAudioFormat> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b031970

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FAdditiveSynthOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FAdditiveSynthOperator::CreateSinusoids((FAdditiveSynthOperator *)param_1);
  iVar1 = *(int *)((longlong)param_1[0x1f] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1f],0,(longlong)iVar1 << 2);
  }
  iVar1 = *(int *)((longlong)param_1[0x23] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x23],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b031a00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FBiquadFilterOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBiquadFilterOperator::ResetInternal((FBiquadFilterOperator *)param_1);
  return;
}

// ResetFunction @ 14b031a50

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ResetFunction @ 14b031ab0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ResetFunction @ 14b031b10

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ResetFunction @ 14b031b70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ResetFunction @ 14b031bd0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ResetFunction @ 14b031c30

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ResetFunction @ 14b031c90

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b031cf0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b031d50

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(float *)param_1[6] = (float)*(int *)IVar1;
  return;
}

// ResetFunction @ 14b031db0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(bool *)param_1[6] = *(int *)IVar1 != 0;
  return;
}

// ResetFunction @ 14b031e10

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ResetFunction @ 14b031e70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ResetFunction @ 14b031ed0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FLadderFilterOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar2 = param_1[0xf];
  *(undefined4 *)(param_1 + 0xd) = 0xbf800000;
  *(undefined4 *)&param_1[0xd].field_0x4 = 0xbf800000;
  iVar1 = *(int *)((longlong)IVar2 + 8);
  if (0 < iVar1) {
    memset(*(void **)IVar2,0,(longlong)iVar1 << 2);
  }
  (**(code **)((longlong)param_1[0x14] + 8))
            (param_1 + 0x14,*(undefined4 *)&param_1[0x12].field_0x4,1,0,0);
  return;
}

// ResetFunction @ 14b031f70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FOnePoleHighPassFilterOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_1[10] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[10],0,(longlong)iVar1 << 2);
  }
  Audio::FInterpolatedHPF::Init
            ((FInterpolatedHPF *)(param_1 + 0xe),*(float *)&param_1[0xd].field_0x4,1);
  return;
}

// ResetFunction @ 14b031fe0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FOnePoleLowPassFilterOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_1[10] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[10],0,(longlong)iVar1 << 2);
  }
  Audio::FInterpolatedLPF::Init
            ((FInterpolatedLPF *)(param_1 + 0xe),*(float *)&param_1[0xd].field_0x4,1);
  return;
}

// ResetFunction @ 14b032050

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FStateVariableFilterOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar2 = param_1[0x14];
  *(undefined4 *)(param_1 + 0x11) = 0xbf800000;
  *(undefined4 *)&param_1[0x11].field_0x4 = 0xbf800000;
  *(undefined4 *)(param_1 + 0x12) = 0xbf800000;
  iVar1 = *(int *)((longlong)IVar2 + 8);
  if (0 < iVar1) {
    memset(*(void **)IVar2,0,(longlong)iVar1 << 2);
  }
  iVar1 = *(int *)((longlong)param_1[0x18] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x18],0,(longlong)iVar1 << 2);
  }
  iVar1 = *(int *)((longlong)param_1[0x1c] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1c],0,(longlong)iVar1 << 2);
  }
  iVar1 = *(int *)((longlong)param_1[0x20] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x20],0,(longlong)iVar1 << 2);
  }
  (**(code **)((longlong)param_1[0x25] + 8))
            (param_1 + 0x25,*(undefined4 *)&param_1[0x23].field_0x4,1,0,0);
  return;
}

// ResetFunction @ 14b07af30

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TClampNodeOperator<int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar2 = *(int *)param_1[10];
  if (*(int *)param_1[2] < *(int *)param_1[10]) {
    iVar2 = *(int *)param_1[2];
  }
  iVar4 = *(int *)param_1[6];
  if (*(int *)param_1[6] < iVar2) {
    iVar4 = iVar2;
  }
  *(int *)param_1[0xe] = iVar4;
  return;
}

// ResetFunction @ 14b07afa0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TClampNodeOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[10];
  if (*(float *)param_1[2] <= *(float *)param_1[10]) {
    fVar3 = *(float *)param_1[2];
  }
  if (fVar3 <= *(float *)param_1[6]) {
    fVar3 = *(float *)param_1[6];
  }
  *(float *)param_1[0xe] = fVar3;
  return;
}

// ResetFunction @ 14b07b000

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundClampNodePrivate::TClamp<Metasound::FAudioBuffer>::GetClamped
            ((FAudioBuffer *)param_1[2],(FAudioBuffer *)param_1[6],(FAudioBuffer *)param_1[10],
             (FAudioBuffer *)param_1[0xe]);
  return;
}

// ResetFunction @ 14b07b060

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TConversionOperator<int,Metasound::FTime>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(double *)param_1[6] = (double)*(int *)param_1[2];
  return;
}

// ResetFunction @ 14b07b0c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundConversionNodePrivate::TConversionNodeSpecialization<float,Metasound::FAudioBuffer>::
  GetConvertedValue(*(float *)param_1[2],(FAudioBuffer *)param_1[6]);
  return;
}

// ResetFunction @ 14b07b110

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TConversionOperator<float,Metasound::FTime>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(double *)param_1[6] = (double)*(float *)param_1[2];
  return;
}

// ResetFunction @ 14b07b170

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundConversionNodePrivate::TConversionNodeSpecialization<Metasound::FAudioBuffer,float>::
  GetConvertedValue((FAudioBuffer *)param_1[2],(float *)param_1[6]);
  return;
}

// ResetFunction @ 14b07b1c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TConversionOperator<Metasound::FTime,int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = (int)*(double *)param_1[2];
  return;
}

// ResetFunction @ 14b07b210

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TConversionOperator<Metasound::FTime,float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)param_1[6] = (float)*(double *)param_1[2];
  return;
}

// ResetFunction @ 14b07b270

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,2>::PerformCrossfadeOutput((TCrossfadeOperator<float,2> *)param_1);
  return;
}

// ResetFunction @ 14b07b2c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,3>::PerformCrossfadeOutput((TCrossfadeOperator<float,3> *)param_1);
  return;
}

// ResetFunction @ 14b07b310

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,4>::PerformCrossfadeOutput((TCrossfadeOperator<float,4> *)param_1);
  return;
}

// ResetFunction @ 14b07b360

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,5>::PerformCrossfadeOutput((TCrossfadeOperator<float,5> *)param_1);
  return;
}

// ResetFunction @ 14b07b3b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,6>::PerformCrossfadeOutput((TCrossfadeOperator<float,6> *)param_1);
  return;
}

// ResetFunction @ 14b07b400

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,7>::PerformCrossfadeOutput((TCrossfadeOperator<float,7> *)param_1);
  return;
}

// ResetFunction @ 14b07b450

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,8>::PerformCrossfadeOutput((TCrossfadeOperator<float,8> *)param_1);
  return;
}

// ResetFunction @ 14b07b4a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,2>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,2> *)param_1);
  return;
}

// ResetFunction @ 14b07b4f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,3>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,3> *)param_1);
  return;
}

// ResetFunction @ 14b07b540

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,4>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,4> *)param_1);
  return;
}

// ResetFunction @ 14b07b590

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,5>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,5> *)param_1);
  return;
}

// ResetFunction @ 14b07b5e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,6>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,6> *)param_1);
  return;
}

// ResetFunction @ 14b07b630

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,7>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,7> *)param_1);
  return;
}

// ResetFunction @ 14b07b680

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,8>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,8> *)param_1);
  return;
}

// ResetFunction @ 14b07b6d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar1 = *(float *)(param_1 + 0x25);
  *(undefined4 *)&param_1[0x24].field_0x4 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xbf800000;
  Audio::FDelay::Init((FDelay *)(param_1 + 0x19),(float)param_2->OperatorSettings->SampleRate,fVar1)
  ;
  iVar2 = *(int *)((longlong)param_1[0x16] + 8);
  if (0 < iVar2) {
    memset(*(void **)param_1[0x16],0,(longlong)iVar2 << 2);
  }
  return;
}

// ResetFunction @ 14b07b770

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TDelayNodeOperator<Metasound::FTime>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar1 = *(float *)(param_1 + 0x25);
  *(undefined4 *)&param_1[0x24].field_0x4 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xbf800000;
  Audio::FDelay::Init((FDelay *)(param_1 + 0x19),(float)param_2->OperatorSettings->SampleRate,fVar1)
  ;
  iVar2 = *(int *)((longlong)param_1[0x16] + 8);
  if (0 < iVar2) {
    memset(*(void **)param_1[0x16],0,(longlong)iVar2 << 2);
  }
  return;
}

// ResetFunction @ 14b07b810

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TPrintLogOperator<int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TPrintLogOperator<int>::Reset((TPrintLogOperator<int> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b07b870

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TPrintLogOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TPrintLogOperator<float>::Reset((TPrintLogOperator<float> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b07b8d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TPrintLogOperator<FString>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TPrintLogOperator<FString>::Reset((TPrintLogOperator<FString> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b07b930

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TPrintLogOperator<bool>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TPrintLogOperator<bool>::Reset((TPrintLogOperator<bool> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b07b990

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b07b9e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b07bac0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FBPMToSecondsOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBPMToSecondsOperator::UpdateTime((FBPMToSecondsOperator *)param_1);
  return;
}

// ResetFunction @ 14b07bb10

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FBitcrusherOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBitcrusherOperator::Reset((FBitcrusherOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b07bb70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FCompressorOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FCompressorOperator::Reset((FCompressorOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b07bbd0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ResetFunction @ 14b07bc30

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b07bc90

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(float *)param_1[6] = (float)*(int *)IVar1;
  return;
}

// ResetFunction @ 14b07bcf0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(bool *)param_1[6] = *(int *)IVar1 != 0;
  return;
}

// ResetFunction @ 14b07bd50

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FDecibelsToLinearGainOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = powf(__real_41200000,*(float *)param_1[2] * __real_3d4ccccd);
  *(float *)param_1[6] = fVar3;
  return;
}

// ResetFunction @ 14b07bdc0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FDiffuserOperator>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  IOperator IVar5;
  undefined1 local_res8 [8];
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar5 = param_1[0x12];
  iVar2 = *(int *)(param_1 + 0x13);
  IVar1 = (IOperator)((longlong)IVar5 + (longlong)iVar2 * 8);
  while( true ) {
    if (*(int *)(param_1 + 0x13) != iVar2) {
      `TCheckedPointerIterator<Audio::FLongDelayAPF_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (IVar5 == IVar1) break;
    Audio::FLongDelayAPF::Reset(*(FLongDelayAPF **)IVar5);
    IVar5 = (IOperator)((longlong)IVar5 + 8);
  }
  iVar2 = *(int *)((longlong)param_1[0xf] + 8);
  if (0 < iVar2) {
    memset(*(void **)param_1[0xf],0,(longlong)iVar2 << 2);
  }
  return;
}

// ResetFunction @ 14b07be80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FDopplerPitchShiftOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FDopplerPitchShiftOperator::Reset((FDopplerPitchShiftOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b07bee0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FDynamicFilterOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_1[0x3b] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x3b],0,(longlong)iVar1 << 2);
  }
  Audio::FDynamicStateVariableFilter::Reset((FDynamicStateVariableFilter *)(param_1 + 0x3e));
  FDynamicFilterOperator::UpdateFilterSettings((FDynamicFilterOperator *)param_1);
  return;
}

// ResetFunction @ 14b07bf60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FEnvelopeFollowerOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FEnvelopeFollowerOperator::Reset((FEnvelopeFollowerOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b07bfc0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FTriggerOnNanOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[10]);
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}

// ResetFunction @ 14b0e56f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundMapRangeNodePrivate::FAudioRange::DoMapping((FAudioRange *)(param_1 + 1));
  return;
}

// ResetFunction @ 14b0e5740

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundMapRangeNodePrivate::FFloatRange::DoMapping((FFloatRange *)(param_1 + 1));
  return;
}

// ResetFunction @ 14b0e5790

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundMapRangeNodePrivate::FIntRange::DoMapping((FIntRange *)(param_1 + 1));
  return;
}

// ResetFunction @ 14b0e57e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpAdd<Metasound::FAudioBuffer,float>::Calculate
            ((TMathOpAdd<Metasound::FAudioBuffer,float> *)(param_1 + 1),
             (TDataReadReference<Metasound::FAudioBuffer> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<Metasound::FAudioBuffer> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5840

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            ((TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer> *)(param_1 + 1),
             (TDataReadReference<Metasound::FAudioBuffer> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
              *)(param_1 + 6),(TDataWriteReference<Metasound::FAudioBuffer> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e58a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpAdd<float,float>::Calculate
            ((TMathOpAdd<float,float> *)(param_1 + 1),(TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5900

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpAdd<int,int>::Calculate
            ((TMathOpAdd<int,int> *)(param_1 + 1),(TDataReadReference<int> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(param_1 + 6)
             ,(TDataWriteReference<int> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5960

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpAdd<Metasound::FTime,Metasound::FTime>::Calculate
            ((TMathOpAdd<Metasound::FTime,Metasound::FTime> *)(param_1 + 1),
             (TDataReadReference<Metasound::FTime> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<Metasound::FTime>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<Metasound::FTime> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e59c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpDivide<float,float>::Calculate
            ((TMathOpDivide<float,float> *)(param_1 + 1),(TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5a20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpDivide<int,int>::Calculate
            ((TMathOpDivide<int,int> *)(param_1 + 1),(TDataReadReference<int> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(param_1 + 6)
             ,(TDataWriteReference<int> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5a80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpDivide<Metasound::FTime,float>::Calculate
            ((TMathOpDivide<Metasound::FTime,float> *)(param_1 + 1),
             (TDataReadReference<Metasound::FTime> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<Metasound::FTime> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5ae0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpLogarithm<float,float>::Calculate
            ((TMathOpLogarithm<float,float> *)(param_1 + 1),
             (TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5b40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpModulo<int,int>::Calculate
            ((TMathOpModulo<int,int> *)(param_1 + 1),(TDataReadReference<int> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(param_1 + 6)
             ,(TDataWriteReference<int> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5ba0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = *(int *)((longlong)param_1[9] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[9],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b0e5c10

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            ((TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer> *)(param_1 + 1),
             (TDataReadReference<Metasound::FAudioBuffer> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
              *)(param_1 + 6),(TDataWriteReference<Metasound::FAudioBuffer> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5c70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpMultiply<float,float>::Calculate
            ((TMathOpMultiply<float,float> *)(param_1 + 1),
             (TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5cd0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpMultiply<int,int>::Calculate
            ((TMathOpMultiply<int,int> *)(param_1 + 1),(TDataReadReference<int> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(param_1 + 6)
             ,(TDataWriteReference<int> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5d30

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpMultiply<Metasound::FTime,float>::Calculate
            ((TMathOpMultiply<Metasound::FTime,float> *)(param_1 + 1),
             (TDataReadReference<Metasound::FTime> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<Metasound::FTime> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5d90

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpPower<float,float>::Calculate
            ((TMathOpPower<float,float> *)(param_1 + 1),(TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5df0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            ((TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer> *)(param_1 + 1),
             (TDataReadReference<Metasound::FAudioBuffer> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
              *)(param_1 + 6),(TDataWriteReference<Metasound::FAudioBuffer> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5e50

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpSubtract<float,float>::Calculate
            ((TMathOpSubtract<float,float> *)(param_1 + 1),
             (TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5eb0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpSubtract<int,int>::Calculate
            ((TMathOpSubtract<int,int> *)(param_1 + 1),(TDataReadReference<int> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(param_1 + 6)
             ,(TDataWriteReference<int> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5f10

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpSubtract<Metasound::FTime,Metasound::FTime>::Calculate
            ((TMathOpSubtract<Metasound::FTime,Metasound::FTime> *)(param_1 + 1),
             (TDataReadReference<Metasound::FTime> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<Metasound::FTime>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<Metasound::FTime> *)(param_1 + 8));
  return;
}

// ResetFunction @ 14b0e5f70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b0e5fc0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b0e6010

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b0e6060

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b0e60b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b0e6190

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b0e6270

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b0e6350

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
  ::ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)(param_1 + 0x10)
  ;
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b0e6430

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FConvertQToBandwidthNodeOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[2];
  if (*(float *)param_1[2] <= __real_38d1b717) {
    fVar3 = __real_38d1b717;
  }
  fVar3 = logf(SQRT(__real_3f800000 / (fVar3 * fVar3) + __real_40800000) * __real_3f000000 +
               __real_3f000000 / fVar3);
  *(float *)param_1[6] = fVar3 * __real_4038aa3b;
  return;
}

// ResetFunction @ 14b0e64d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ResetFunction @ 14b0e6530

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FConverterOperator
  ::Execute(param_1);
  return;
}

// ResetFunction @ 14b0e6590

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ResetFunction @ 14b0e65f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ResetFunction @ 14b0e6650

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b0e66b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b0e6710

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b0e6770

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b0e67d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FFlangerOperator>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_1[0x16] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x16],0,(longlong)iVar1 << 2);
  }
  Audio::FFlanger::Init((FFlanger *)(param_1 + 0x1a),(float)param_2->OperatorSettings->SampleRate);
  return;
}

// ResetFunction @ 14b0e6860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FFreqToMidiOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[2];
  *(float *)(param_1 + 9) = fVar3;
  fVar3 = logf(fVar3 * ___real_3b14f209);
  *(float *)param_1[6] = fVar3 * ___real_418a7fac + __real_428a0000;
  return;
}

// ResetFunction @ 14b0e68e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FFrequencyMultiplierToSemitoneOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)(param_1 + 9) = *(float *)param_1[2];
  fVar3 = *(float *)param_1[2];
  if (fVar3 <= 0.0) {
    *(undefined4 *)param_1[6] = __real_c39f73da;
    return;
  }
  fVar3 = logf(fVar3);
  *(float *)param_1[6] = fVar3 * ___real_418a7fac;
  return;
}

// ResetFunction @ 14b0e6970

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FGrainDelayOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  FGrainDelay *this;
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_1[0x31] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x31],0,(longlong)iVar1 << 2);
  }
  this = (FGrainDelay *)(param_1 + 0x36);
  Audio::GrainDelay::FGrainDelay::Reset(this);
  fVar5 = Audio::GrainDelay::FGrainDelay::GetGrainDelayClamped(this,*(float *)param_1[0xc]);
  *(int *)(param_1 + 0x34) = (int)fVar5;
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)param_1[0x24];
  fVar5 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftClamped(this,*(float *)param_1[0x1c]);
  IVar2 = param_1[0x24];
  *(float *)&param_1[0x34].field_0x4 = fVar5;
  Audio::GrainDelay::FGrainDelay::SetGrainEnvelope(this,*(EEnvelope *)IVar2);
  fVar5 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftFrameRatio
                    (this,*(float *)&param_1[0x34].field_0x4);
  Audio::GrainDelay::FGrainDelay::SetGrainBasePitchShiftRatio(this,fVar5);
  return;
}

// ResetFunction @ 14b0e6a60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FITDPannerOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_1[0x12] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x12],0,(longlong)iVar1 << 2);
  }
  iVar1 = *(int *)((longlong)param_1[0x16] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x16],0,(longlong)iVar1 << 2);
  }
  Audio::FDelay::Reset((FDelay *)(param_1 + 0x1f));
  Audio::FDelay::Reset((FDelay *)(param_1 + 0x2a));
  fVar5 = *(float *)param_1[6];
  if (__real_43b40000 <= *(float *)param_1[6]) {
    fVar5 = __real_43b40000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x19) = fVar5;
  fVar5 = *(float *)param_1[10];
  if (__real_3f800000 <= *(float *)param_1[10]) {
    fVar5 = __real_3f800000;
  }
  IVar2 = param_1[0xe];
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)&param_1[0x1a].field_0x4 = fVar5;
  fVar5 = *(float *)IVar2;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x1b) = fVar5;
  FITDPannerOperator::UpdateParams((FITDPannerOperator *)param_1,true);
  *(undefined4 *)&param_1[0x1d].field_0x4 = *(undefined4 *)&param_1[0x1b].field_0x4;
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_1 + 0x1c);
  return;
}

// ResetFunction @ 14b0e6b70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FInterpToOperator>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Audio::FVolumeFader::SetVolume((FVolumeFader *)(param_1 + 0xd),*(float *)param_1[2]);
  fVar5 = FOperatorSettings::GetActualBlockRate(param_2->OperatorSettings);
  IVar1 = param_1[2];
  IVar2 = param_1[10];
  *(float *)&param_1[0x10].field_0x4 = __real_3f800000 / fVar5;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)IVar1;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b0e6c00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FLimiterOperator>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FLimiterOperator::Reset((FLimiterOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b0e6c60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FLinearGainToDecibelsOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar4 = *(float *)param_1[2];
  if (*(float *)param_1[2] <= __real_00800000) {
    fVar4 = __real_00800000;
  }
  fVar3 = logf(fVar4);
  fVar4 = fVar3 * __real_410af967;
  if (fVar3 * __real_410af967 <= __real_c3700000) {
    fVar4 = __real_c3700000;
  }
  *(float *)param_1[6] = fVar4;
  return;
}

// ResetFunction @ 14b0e6cd0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FLinearToLogFrequencyOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)param_1[2];
  fVar3 = FLinearToLogFrequencyOperator::GetOutputValue((FLinearToLogFrequencyOperator *)param_1);
  *(float *)param_1[0x16] = fVar3;
  return;
}

// ResetFunction @ 14b0e6d30

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FLowFrequencyNoiseOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  IVar1 = param_1[0x2d];
  *(undefined4 *)&param_1[1].field_0x4 = 0;
  *(undefined4 *)IVar1 = 0;
  *(undefined4 *)param_1[0x31] = 0;
  FLowFrequencyNoiseOperator::SetSeedAndFillValues((FLowFrequencyNoiseOperator *)param_1);
  return;
}

// ResetFunction @ 14b1a7ef0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<2,1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<2,1>::Reset((TAudioMixerNodeOperator<2,1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a7f50

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<2,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<2,2>::Reset((TAudioMixerNodeOperator<2,2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a7fb0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<3,1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<3,1>::Reset((TAudioMixerNodeOperator<3,1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a8010

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<3,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<3,2>::Reset((TAudioMixerNodeOperator<3,2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a8070

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<4,1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<4,1>::Reset((TAudioMixerNodeOperator<4,1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a80d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<4,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<4,2>::Reset((TAudioMixerNodeOperator<4,2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a8130

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<5,1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<5,1>::Reset((TAudioMixerNodeOperator<5,1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a8190

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<5,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<5,2>::Reset((TAudioMixerNodeOperator<5,2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a81f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<6,1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<6,1>::Reset((TAudioMixerNodeOperator<6,1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a8250

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<6,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<6,2>::Reset((TAudioMixerNodeOperator<6,2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a82b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<7,1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<7,1>::Reset((TAudioMixerNodeOperator<7,1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a8310

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<7,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<7,2>::Reset((TAudioMixerNodeOperator<7,2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a8370

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<8,1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<8,1>::Reset((TAudioMixerNodeOperator<8,1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a83d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<8,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<8,2>::Reset((TAudioMixerNodeOperator<8,2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1a8430

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMaxNodeOperator<int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar2 = *(int *)param_1[6];
  if (*(int *)param_1[6] < *(int *)param_1[2]) {
    iVar2 = *(int *)param_1[2];
  }
  *(int *)param_1[10] = iVar2;
  return;
}

// ResetFunction @ 14b1a8490

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMaxNodeOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[6];
  if (*(float *)param_1[6] <= *(float *)param_1[2]) {
    fVar3 = *(float *)param_1[2];
  }
  *(float *)param_1[10] = fVar3;
  return;
}

// ResetFunction @ 14b1a84f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundMaxNodePrivate::TMax<Metasound::FAudioBuffer>::GetMax
            ((FAudioBuffer *)param_1[2],(FAudioBuffer *)param_1[6],(FAudioBuffer *)param_1[10]);
  return;
}

// ResetFunction @ 14b1a8540

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMidiToFreqOperator<int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar5 = __real_40000000;
  iVar3 = *(int *)param_1[2];
  *(int *)(param_1 + 9) = iVar3;
  iVar4 = 0x7f;
  if (iVar3 < 0x7f) {
    iVar4 = iVar3;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    iVar3 = iVar4;
  }
  fVar5 = powf(fVar5,((float)iVar3 - __real_428a0000) * __real_3daaaaab);
  *(float *)param_1[6] = (float)(int)(fVar5 * __real_43dc0000);
  return;
}

// ResetFunction @ 14b1a85e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMidiToFreqOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[2];
  *(float *)(param_1 + 9) = fVar3;
  if (__real_42fe0000 <= fVar3) {
    fVar3 = __real_42fe0000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar3 = powf(__real_40000000,(fVar3 - __real_428a0000) * __real_3daaaaab);
  *(float *)param_1[6] = fVar3 * __real_43dc0000;
  return;
}

// ResetFunction @ 14b1a8670

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMinNodeOperator<int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar2 = *(int *)param_1[6];
  if (*(int *)param_1[2] < *(int *)param_1[6]) {
    iVar2 = *(int *)param_1[2];
  }
  *(int *)param_1[10] = iVar2;
  return;
}

// ResetFunction @ 14b1a86d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMinNodeOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[6];
  if (*(float *)param_1[2] <= *(float *)param_1[6]) {
    fVar3 = *(float *)param_1[2];
  }
  *(float *)param_1[10] = fVar3;
  return;
}

// ResetFunction @ 14b1a8730

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMinNodeOperator<Metasound::FAudioBuffer>::GetMin
            ((TMinNodeOperator<Metasound::FAudioBuffer> *)param_1);
  return;
}

// ResetFunction @ 14b1a8780

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a8830

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a88e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a8990

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a8a40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a8af0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a8ba0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a8c50

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a8d00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a8db0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a8e60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a8f10

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a8fc0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a9070

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a9120

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a91d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  IOperator IVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = __real_bf800000;
  fVar6 = *(float *)param_1[0x11];
  if (__real_43b40000 <= *(float *)param_1[0x11]) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  IVar5._4_4_ = 0;
  IVar5._0_4_ = fVar6 * __real_3b360b61;
  param_1[1] = IVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  iVar1 = *(int *)((longlong)param_1[0x1d] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x1d],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a9280

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar2 = param_1[0x22];
  fVar5 = *(float *)param_1[0x16];
  if (__real_43b40000 <= *(float *)param_1[0x16]) {
    fVar5 = __real_43b40000;
  }
  param_1[2] = (IOperator)0x0;
  param_1[3] = (IOperator)0x0;
  param_1[4] = (IOperator)0x0;
  param_1[5] = (IOperator)0x0;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar5 = fVar5 * __real_3c8efa36;
  *(undefined4 *)(param_1 + 6) = 0xbf800000;
  *(float *)&param_1[6].field_0x4 = fVar5;
  *(undefined4 *)(param_1 + 7) = uStack_10;
  *(undefined4 *)&param_1[7].field_0x4 = uStack_c;
  iVar1 = *(int *)((longlong)IVar2 + 8);
  if (0 < iVar1) {
    memset(*(void **)IVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1a9330

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b1a9380

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b1a93d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b1a9420

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b1a9470

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b1a94c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b1a9510

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b1a9560

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b1a9640

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b1a9720

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b1a9800

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b1a98e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          ::CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b1a99c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b1a9aa0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b1a9b80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FConverterOperator
  ::Execute(param_1);
  return;
}

// ResetFunction @ 14b1a9be0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ResetFunction @ 14b1a9c40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ResetFunction @ 14b1a9ca0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ResetFunction @ 14b1a9d00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ResetFunction @ 14b1a9d60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ResetFunction @ 14b1a9dc0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FConverterOperator
  ::Execute(param_1);
  return;
}

// ResetFunction @ 14b1a9e20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b1a9e80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b1a9ee0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b1a9f40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b1a9fa0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b1aa000

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b1aa060

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b1aa0c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(float *)param_1[6] = (float)*(int *)IVar1;
  return;
}

// ResetFunction @ 14b1aa120

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  IVar1 = param_1[2];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(bool *)param_1[6] = *(int *)IVar1 != 0;
  return;
}

// ResetFunction @ 14b1aa180

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FLfoOperator>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar4 = *(float *)param_1[0x18];
  if (__real_43b40000 <= *(float *)param_1[0x18]) {
    fVar4 = __real_43b40000;
  }
  IVar1 = param_1[0x20];
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)&param_1[1].field_0x4 = fVar4 * __real_3b360b61;
  *(undefined4 *)IVar1 = 0;
  return;
}

// ResetFunction @ 14b1aa200

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FMidSideDecodeOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMidSideDecodeOperator::Reset((FMidSideDecodeOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1aa260

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FMidSideEncodeOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMidSideEncodeOperator::Reset((FMidSideEncodeOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1aa2c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FMidiNoteQuantizerOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMidiNoteQuantizerOperator::Reset((FMidiNoteQuantizerOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1aa320

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FMusicalScaleToNoteArrayOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  Scale SVar1;
  code *pcVar2;
  bool bVar3;
  ScaleDegreeSet *this;
  TArrayView<float,int> *pTVar4;
  TArrayView<float,int> local_18;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SVar1 = *(Scale *)param_1[2];
  *(Scale *)(param_1 + 0xd) = SVar1;
  param_1[0xd].field_0x4 = *(undefined1 *)param_1[6];
  this = TMapBase<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>_>
         ::FindChecked(&Audio::FMidiNoteQuantizer::ScaleDegreeSetMap,SVar1);
  pTVar4 = Audio::ScaleDegreeSet::GetScaleDegreeSet(this,&local_18,(bool)param_1[0xd].field_0x4);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=<float,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)param_1[10],pTVar4);
  return;
}

// ResetFunction @ 14b1ea1d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TRandomNodeOperator<int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TRandomNodeOperator<int>::ResetInternal((TRandomNodeOperator<int> *)param_1);
  return;
}

// ResetFunction @ 14b1ea220

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TRandomNodeOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TRandomNodeOperator<float>::ResetInternal((TRandomNodeOperator<float> *)param_1);
  return;
}

// ResetFunction @ 14b1ea270

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TRandomNodeOperator<Metasound::FTime>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TRandomNodeOperator<Metasound::FTime>::ResetInternal
            ((TRandomNodeOperator<Metasound::FTime> *)param_1);
  return;
}

// ResetFunction @ 14b1ea2c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TRandomNodeOperator<bool>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TRandomNodeOperator<bool>::ResetInternal((TRandomNodeOperator<bool> *)param_1);
  return;
}

// ResetFunction @ 14b1ea310

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b1ea360

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b1ea3b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b1ea490

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b1ea570

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ResetFunction @ 14b1ea5d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator
  ::Execute(param_1);
  return;
}

// ResetFunction @ 14b1ea630

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b1ea690

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b1ea6f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FPerlinAudioRate>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::Reset
            ((TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate> *)
             param_1,param_2);
  return;
}

// ResetFunction @ 14b1ea750

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FPerlinControlRate>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::Reset
            ((TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1ea7b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FPlateReverbOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPlateReverbOperator::Reset((FPlateReverbOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1ea810

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FRingModOperator>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_1[10] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[10],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// ResetFunction @ 14b1ea880

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FSampleAndHoldOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSampleAndHoldOperator::Reset((FSampleAndHoldOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b1ea8e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FSemitoneToFrequencyMultiplierOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0x44,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar3 = __real_3f800000;
  if (*(float *)param_1[2] != 0.0) {
    fVar3 = powf(__real_40000000,*(float *)param_1[2] * __real_3daaaaab);
  }
  *(float *)param_1[6] = fVar3;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)param_1[2];
  return;
}

// ResetFunction @ 14b1ea960

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FStereoDelayOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_1[0x22] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x22],0,(longlong)iVar1 << 2);
  }
  iVar1 = *(int *)((longlong)param_1[0x26] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x26],0,(longlong)iVar1 << 2);
  }
  fVar3 = __real_3f800000;
  fVar5 = (float)*(double *)param_1[0xe];
  if (*(float *)(param_1 + 0x40) <= (float)*(double *)param_1[0xe]) {
    fVar5 = *(float *)(param_1 + 0x40);
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x3f) = fVar5 * __real_447a0000;
  fVar5 = *(float *)param_1[0x12];
  if (fVar3 <= *(float *)param_1[0x12]) {
    fVar5 = fVar3;
  }
  if (fVar5 <= __real_bf800000) {
    fVar5 = __real_bf800000;
  }
  *(float *)&param_1[0x3f].field_0x4 = fVar5;
  Audio::FDelay::Reset((FDelay *)(param_1 + 0x29));
  Audio::FDelay::SetDelayMsec
            ((FDelay *)(param_1 + 0x29),
             (*(float *)&param_1[0x3f].field_0x4 + fVar3) * *(float *)(param_1 + 0x3f));
  Audio::FDelay::Reset((FDelay *)(param_1 + 0x34));
  Audio::FDelay::SetDelayMsec
            ((FDelay *)(param_1 + 0x34),
             (fVar3 - *(float *)&param_1[0x3f].field_0x4) * *(float *)(param_1 + 0x3f));
  return;
}

// ResetFunction @ 14b1eaaa0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FStereoPannerOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_1[0xe] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0xe],0,(longlong)iVar1 << 2);
  }
  iVar1 = *(int *)((longlong)param_1[0x12] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x12],0,(longlong)iVar1 << 2);
  }
  fVar4 = *(float *)param_1[6];
  if (__real_3f800000 <= *(float *)param_1[6]) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= __real_bf800000) {
    fVar4 = __real_bf800000;
  }
  *(float *)(param_1 + 0x15) = fVar4;
  FStereoPannerOperator::ComputePanGains
            ((FStereoPannerOperator *)param_1,fVar4,(float *)&param_1[0x15].field_0x4,
             (float *)(param_1 + 0x16));
  return;
}

// ResetFunction @ 14b1eab60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FSubharmonizerOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)&param_1[0x19].field_0x4 = param_2->OperatorSettings->NumFramesPerBlock;
  *(float *)(param_1 + 0x19) = (float)param_2->OperatorSettings->SampleRate;
  FSubharmonizerOperator::InternalReset((FSubharmonizerOperator *)param_1);
  return;
}

// ResetFunction @ 14b1eabe0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FSuperOscillatorOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*param_1 + 0x50))(param_1);
  (**(code **)((longlong)*param_1 + 0x60))(param_1);
  FSuperOscillatorOperator::InitializeGenerators((FSuperOscillatorOperator *)param_1);
  return;
}

// ResetFunction @ 14b1eac40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FSwitchAndRampOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_1[0xe] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0xe],0,(longlong)iVar1 << 2);
  }
  *(undefined8 *)&param_1[0x11].field_0x4 = 0;
  *(undefined8 *)&param_1[0x12].field_0x4 = 0;
  return;
}

// ResetFunction @ 14b28ba20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b28ba70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b28bac0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b28bb10

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b28bbf0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b28bcd0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b28bdb0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[8]);
  TTriggerAccumulatorOperator<1>::ResetTriggerState((TTriggerAccumulatorOperator<1> *)param_1);
  return;
}

// ResetFunction @ 14b28be00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[8]);
  TTriggerAccumulatorOperator<2>::ResetTriggerState((TTriggerAccumulatorOperator<2> *)param_1);
  return;
}

// ResetFunction @ 14b28be50

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[8]);
  TTriggerAccumulatorOperator<3>::ResetTriggerState((TTriggerAccumulatorOperator<3> *)param_1);
  return;
}

// ResetFunction @ 14b28bea0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[8]);
  TTriggerAccumulatorOperator<4>::ResetTriggerState((TTriggerAccumulatorOperator<4> *)param_1);
  return;
}

// ResetFunction @ 14b28bef0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[8]);
  TTriggerAccumulatorOperator<5>::ResetTriggerState((TTriggerAccumulatorOperator<5> *)param_1);
  return;
}

// ResetFunction @ 14b28bf40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[8]);
  TTriggerAccumulatorOperator<6>::ResetTriggerState((TTriggerAccumulatorOperator<6> *)param_1);
  return;
}

// ResetFunction @ 14b28bf90

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[8]);
  TTriggerAccumulatorOperator<7>::ResetTriggerState((TTriggerAccumulatorOperator<7> *)param_1);
  return;
}

// ResetFunction @ 14b28bfe0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[8]);
  TTriggerAccumulatorOperator<8>::ResetTriggerState((TTriggerAccumulatorOperator<8> *)param_1);
  return;
}

// ResetFunction @ 14b28c030

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAnyOperator<2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[4]);
  return;
}

// ResetFunction @ 14b28c080

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAnyOperator<3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[4]);
  return;
}

// ResetFunction @ 14b28c0d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAnyOperator<4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[4]);
  return;
}

// ResetFunction @ 14b28c120

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAnyOperator<5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[4]);
  return;
}

// ResetFunction @ 14b28c170

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAnyOperator<6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[4]);
  return;
}

// ResetFunction @ 14b28c1c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAnyOperator<7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[4]);
  return;
}

// ResetFunction @ 14b28c210

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerAnyOperator<8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[4]);
  return;
}

// ResetFunction @ 14b28c260

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerCompareNodeOperator<int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0x12]);
  FTrigger::Reset((FTrigger *)param_1[0x16]);
  return;
}

// ResetFunction @ 14b28c2c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerCompareNodeOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0x12]);
  FTrigger::Reset((FTrigger *)param_1[0x16]);
  return;
}

// ResetFunction @ 14b28c320

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerCompareNodeOperator<bool>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0x12]);
  FTrigger::Reset((FTrigger *)param_1[0x16]);
  return;
}

// ResetFunction @ 14b28c380

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerOnThresholdOperator<int,int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0xe]);
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)&param_1[0x11].field_0x4 = 0;
  return;
}

// ResetFunction @ 14b28c3e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerOnThresholdOperator<float,float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0xe]);
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)&param_1[0x11].field_0x4 = 0;
  return;
}

// ResetFunction @ 14b28c440

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0xe]);
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)&param_1[0x11].field_0x4 = 0;
  return;
}

// ResetFunction @ 14b28c4a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerOnValueChangeOperator<int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)param_1[2];
  return;
}

// ResetFunction @ 14b28c500

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerOnValueChangeOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)param_1[2];
  return;
}

// ResetFunction @ 14b28c560

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerOnValueChangeOperator<bool>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)param_1[2];
  return;
}

// ResetFunction @ 14b28c5c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<int,2>::Update((TTriggerRouteOperator<int,2> *)param_1);
  return;
}

// ResetFunction @ 14b28c620

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<int,3>::Update((TTriggerRouteOperator<int,3> *)param_1);
  return;
}

// ResetFunction @ 14b28c680

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<int,4>::Update((TTriggerRouteOperator<int,4> *)param_1);
  return;
}

// ResetFunction @ 14b28c6e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<int,5>::Update((TTriggerRouteOperator<int,5> *)param_1);
  return;
}

// ResetFunction @ 14b28c740

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<int,6>::Update((TTriggerRouteOperator<int,6> *)param_1);
  return;
}

// ResetFunction @ 14b28c7a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<int,7>::Update((TTriggerRouteOperator<int,7> *)param_1);
  return;
}

// ResetFunction @ 14b28c800

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<int,8>::Update((TTriggerRouteOperator<int,8> *)param_1);
  return;
}

// ResetFunction @ 14b28c860

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<float,2>::Update((TTriggerRouteOperator<float,2> *)param_1);
  return;
}

// ResetFunction @ 14b28c8c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<float,3>::Update((TTriggerRouteOperator<float,3> *)param_1);
  return;
}

// ResetFunction @ 14b28c920

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<float,4>::Update((TTriggerRouteOperator<float,4> *)param_1);
  return;
}

// ResetFunction @ 14b28c980

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<float,5>::Update((TTriggerRouteOperator<float,5> *)param_1);
  return;
}

// ResetFunction @ 14b28c9e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<float,6>::Update((TTriggerRouteOperator<float,6> *)param_1);
  return;
}

// ResetFunction @ 14b28ca40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<float,7>::Update((TTriggerRouteOperator<float,7> *)param_1);
  return;
}

// ResetFunction @ 14b28caa0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<float,8>::Update((TTriggerRouteOperator<float,8> *)param_1);
  return;
}

// ResetFunction @ 14b28cb00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FAudioBuffer,2>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,2> *)param_1);
  return;
}

// ResetFunction @ 14b28cb60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FAudioBuffer,3>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,3> *)param_1);
  return;
}

// ResetFunction @ 14b28cbc0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FAudioBuffer,4>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,4> *)param_1);
  return;
}

// ResetFunction @ 14b28cc20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FAudioBuffer,5>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,5> *)param_1);
  return;
}

// ResetFunction @ 14b28cc80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FAudioBuffer,6>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,6> *)param_1);
  return;
}

// ResetFunction @ 14b28cce0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FAudioBuffer,7>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,7> *)param_1);
  return;
}

// ResetFunction @ 14b28cd40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FAudioBuffer,8>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,8> *)param_1);
  return;
}

// ResetFunction @ 14b28cda0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FTime,2>::Update
            ((TTriggerRouteOperator<Metasound::FTime,2> *)param_1);
  return;
}

// ResetFunction @ 14b28ce00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FTime,3>::Update
            ((TTriggerRouteOperator<Metasound::FTime,3> *)param_1);
  return;
}

// ResetFunction @ 14b28ce60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FTime,4>::Update
            ((TTriggerRouteOperator<Metasound::FTime,4> *)param_1);
  return;
}

// ResetFunction @ 14b28cec0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FTime,5>::Update
            ((TTriggerRouteOperator<Metasound::FTime,5> *)param_1);
  return;
}

// ResetFunction @ 14b28cf20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FTime,6>::Update
            ((TTriggerRouteOperator<Metasound::FTime,6> *)param_1);
  return;
}

// ResetFunction @ 14b28cf80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FTime,7>::Update
            ((TTriggerRouteOperator<Metasound::FTime,7> *)param_1);
  return;
}

// ResetFunction @ 14b28cfe0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<Metasound::FTime,8>::Update
            ((TTriggerRouteOperator<Metasound::FTime,8> *)param_1);
  return;
}

// ResetFunction @ 14b28d040

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<bool,2>::Update((TTriggerRouteOperator<bool,2> *)param_1);
  return;
}

// ResetFunction @ 14b28d0a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<bool,3>::Update((TTriggerRouteOperator<bool,3> *)param_1);
  return;
}

// ResetFunction @ 14b28d100

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<bool,4>::Update((TTriggerRouteOperator<bool,4> *)param_1);
  return;
}

// ResetFunction @ 14b28d160

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<bool,5>::Update((TTriggerRouteOperator<bool,5> *)param_1);
  return;
}

// ResetFunction @ 14b28d1c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<bool,6>::Update((TTriggerRouteOperator<bool,6> *)param_1);
  return;
}

// ResetFunction @ 14b28d220

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<bool,7>::Update((TTriggerRouteOperator<bool,7> *)param_1);
  return;
}

// ResetFunction @ 14b28d280

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[6]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  TTriggerRouteOperator<bool,8>::Update((TTriggerRouteOperator<bool,8> *)param_1);
  return;
}

// ResetFunction @ 14b28d2e0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSelectOperator<2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 10) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[9]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return;
}

// ResetFunction @ 14b28d390

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSelectOperator<3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 10) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[9]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}

// ResetFunction @ 14b28d440

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSelectOperator<4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 10) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[9]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}

// ResetFunction @ 14b28d4f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSelectOperator<5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 10) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[9]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
  return;
}

// ResetFunction @ 14b28d5a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSelectOperator<6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 10) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[9]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  return;
}

// ResetFunction @ 14b28d650

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSelectOperator<7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 10) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[9]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return;
}

// ResetFunction @ 14b28d700

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSelectOperator<8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 10) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[9]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}

// ResetFunction @ 14b28d7b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  *(undefined4 *)(param_1 + 0xf) = 0;
  return;
}

// ResetFunction @ 14b28d860

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  *(undefined4 *)(param_1 + 0xf) = 0;
  return;
}

// ResetFunction @ 14b28d910

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  *(undefined4 *)(param_1 + 0xf) = 0;
  return;
}

// ResetFunction @ 14b28d9c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
  *(undefined4 *)(param_1 + 0xf) = 0;
  return;
}

// ResetFunction @ 14b28da70

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  *(undefined4 *)(param_1 + 0xf) = 0;
  return;
}

// ResetFunction @ 14b28db20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  *(undefined4 *)(param_1 + 0xf) = 0;
  return;
}

// ResetFunction @ 14b28dbd0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  *(undefined4 *)(param_1 + 0xf) = 0;
  return;
}

// ResetFunction @ 14b28dc80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TValueOperator<int>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0x16]);
  FTrigger::Reset((FTrigger *)param_1[0x1a]);
  *(undefined4 *)param_1[0x12] = *(undefined4 *)param_1[10];
  return;
}

// ResetFunction @ 14b28dcf0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TValueOperator<float>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0x16]);
  FTrigger::Reset((FTrigger *)param_1[0x1a]);
  *(undefined4 *)param_1[0x12] = *(undefined4 *)param_1[10];
  return;
}

// ResetFunction @ 14b28dd60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TValueOperator<FString>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0x16]);
  FTrigger::Reset((FTrigger *)param_1[0x1a]);
  ::FString::operator=((FString *)param_1[0x12],(FString *)param_1[10]);
  return;
}

// ResetFunction @ 14b28ddd0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TValueOperator<bool>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0x16]);
  FTrigger::Reset((FTrigger *)param_1[0x1a]);
  *(undefined1 *)param_1[0x12] = *(undefined1 *)param_1[10];
  return;
}

// ResetFunction @ 14b28de40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ResetFunction @ 14b28dea0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ResetFunction @ 14b28df00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ResetFunction @ 14b28df60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b28dfc0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b28e020

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b28e080

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FTriggerCoinOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  code *pcVar2;
  bool bVar3;
  LARGE_INTEGER local_res8 [4];
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0x12]);
  FTrigger::Reset((FTrigger *)param_1[0x16]);
  IVar1 = param_1[10];
  *(undefined2 *)(param_1 + 0x1a) = 0;
  if (*(int *)IVar1 == -1) {
    *(undefined2 *)(param_1 + 0x1a) = 0x101;
    QueryPerformanceCounter(local_res8);
  }
  else {
    param_1[0x1a].field_0x1 = 1;
    local_res8[0]._0_4_ = *(undefined4 *)IVar1;
  }
  *(undefined4 *)(param_1 + 0x19) = local_res8[0]._0_4_;
  *(undefined4 *)&param_1[0x19].field_0x4 = local_res8[0]._0_4_;
  return;
}

// ResetFunction @ 14b28e120

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FTriggerControlOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0x16]);
  *(bool *)(param_1 + 0x19) = *(char *)param_1[0x12] == '\0';
  return;
}

// ResetFunction @ 14b28e180

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FTriggerCounterOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0x16]);
  FTrigger::Reset((FTrigger *)param_1[0x1a]);
  *(undefined4 *)param_1[0x1e] = *(undefined4 *)param_1[10];
  *(undefined4 *)param_1[0x22] = 0;
  iVar3 = *(int *)param_1[0x12];
  *(undefined8 *)&param_1[0x25].field_0x4 = 0;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  param_1[0x26].field_0x4 = 1;
  *(int *)(param_1 + 0x25) = iVar3;
  return;
}

// ResetFunction @ 14b28e220

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FTriggerDelayOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0xb]);
  return;
}

// ResetFunction @ 14b28e270

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FTriggerOnceOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0xe]);
  *(bool *)(param_1 + 0x11) = *(char *)param_1[10] == '\0';
  return;
}

// ResetFunction @ 14b28e2d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FTriggerPipeOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)&param_1[2].field_0x4;
  *(undefined4 *)(param_1 + 2) = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(param_1 + 1),0,(int *)&param_1[2].field_0x4);
  }
  FTrigger::Reset((FTrigger *)param_1[0xc]);
  return;
}

// ResetFunction @ 14b28e350

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FTriggerRepeatOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  FTrigger::Reset((FTrigger *)param_1[3]);
  param_1[0x17] = (IOperator)0x0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return;
}

// ResetFunction @ 14b28e3b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FTriggerToggleOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::Reset((FTrigger *)param_1[0xe]);
  *(undefined1 *)param_1[0x12] = *(undefined1 *)param_1[10];
  return;
}

// ResetFunction @ 14b28e410

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FWaveShaperOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_1[0x16] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x16],0,(longlong)iVar1 << 2);
  }
  Audio::FWaveShaper::Init
            ((FWaveShaper *)(param_1 + 0x19),(float)param_2->OperatorSettings->SampleRate);
  return;
}

// ResetFunction @ 14b2a18a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TWaveWriterOperator<1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[0x12].field_0x4 != '\0') {
    TWaveWriterOperator<1>::Disable((TWaveWriterOperator<1> *)param_1);
    return;
  }
  return;
}

// ResetFunction @ 14b2a1900

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TWaveWriterOperator<2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[0x12].field_0x4 != '\0') {
    TWaveWriterOperator<2>::Disable((TWaveWriterOperator<2> *)param_1);
    return;
  }
  return;
}

// ResetFunction @ 14b2a1960

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TWaveWriterOperator<3>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[0x12].field_0x4 != '\0') {
    TWaveWriterOperator<3>::Disable((TWaveWriterOperator<3> *)param_1);
    return;
  }
  return;
}

// ResetFunction @ 14b2a19c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TWaveWriterOperator<4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[0x12].field_0x4 != '\0') {
    TWaveWriterOperator<4>::Disable((TWaveWriterOperator<4> *)param_1);
    return;
  }
  return;
}

// ResetFunction @ 14b2a1a20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TWaveWriterOperator<5>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[0x12].field_0x4 != '\0') {
    TWaveWriterOperator<5>::Disable((TWaveWriterOperator<5> *)param_1);
    return;
  }
  return;
}

// ResetFunction @ 14b2a1a80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TWaveWriterOperator<6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[0x12].field_0x4 != '\0') {
    TWaveWriterOperator<6>::Disable((TWaveWriterOperator<6> *)param_1);
    return;
  }
  return;
}

// ResetFunction @ 14b2a1ae0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TWaveWriterOperator<7>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[0x12].field_0x4 != '\0') {
    TWaveWriterOperator<7>::Disable((TWaveWriterOperator<7> *)param_1);
    return;
  }
  return;
}

// ResetFunction @ 14b2a1b40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TWaveWriterOperator<8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[0x12].field_0x4 != '\0') {
    TWaveWriterOperator<8>::Disable((TWaveWriterOperator<8> *)param_1);
    return;
  }
  return;
}

