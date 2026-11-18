// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 515

// GetResetFunction @ 14ad6ae70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ad6ae80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ad6ae90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ad6b110

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ad6b120

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ad6b130

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ad6cfb0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
::GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ad6cfc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ad6cfd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ad6e700

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ad6e710

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ad6e720

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ad6fe90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ad6fea0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ad6feb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ad73f60

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ad73f70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ad73f80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ad77010

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ad77020

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ad77030

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ad79f30

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ad7a030

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ad7a040

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ad7e7c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ad7e7d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ad7e7e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_> @ 14ad9c920

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_> @ 14ad9c940

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_> @ 14ad9c960

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_> @ 14ad9c980

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_> @ 14ad9c9a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_> @ 14ad9c9c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FConverterOperator> @ 14ad9c9e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::FConverterOperator> @ 14ad9ca00

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator> @ 14ad9ca20

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14adb80c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[0xb],(FTransmissionAddress *)(param_1 + 0xe));
  if (bVar5) {
    ReceiveNodePrivate::
    TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    ResetReceiverAndCleanupChannel
              ((TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)param_1);
    IVar2 = param_1[0xb];
    param_1[0xf] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0x10] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0x11] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = ReceiveNodePrivate::
            TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
            ::CreateNewReceiver((TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                                 *)param_1);
    pTVar1 = (TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *)(param_1 + 0x14);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)();
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
  }
  if (param_1[0x14] == (IOperator)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3419017988815191922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                       ,0x8e,"Receiver.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    bVar5 = TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
            CanPop((TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                    *)param_1[0x14]);
    if (bVar5) {
      TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::Pop
                ((TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  *)param_1[0x14],
                 (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
                 param_1[7]);
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  if (*(char *)(param_1 + 1) != '\0') {
    TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
               param_1[7],
               (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
               param_1[3]);
    return;
  }
  return;
}

// ExecuteFunction @ 14adb8200

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::
  TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::Execute(param_1)
  ;
  return;
}

// ExecuteFunction @ 14adb8250

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>::Execute
            ((TReceiverOperator<Metasound::Frontend::FAnalyzerAddress> *)param_1);
  return;
}

// ExecuteFunction @ 14adb82a0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::
    TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    ResetSenderAndCleanupChannel
              ((TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
            ::CreateNewSender((TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                               *)param_1);
    pTVar1 = (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *)
             (param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::Push
            ((TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *)
             param_1[0x10],
             (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)param_1[2]
            );
  return;
}

// ExecuteFunction @ 14adb83b0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::ESharedStateBehaviorType,1> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14adb84c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::Frontend::FAnalyzerAddress> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
    ResetSenderAndCleanupChannel((TSendOperator<Metasound::Frontend::FAnalyzerAddress> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::CreateNewSender
                      ((TSendOperator<Metasound::Frontend::FAnalyzerAddress> *)param_1);
    pTVar1 = (TSender<Metasound::Frontend::FAnalyzerAddress> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::Frontend::FAnalyzerAddress>::Push
            ((TSender<Metasound::Frontend::FAnalyzerAddress> *)param_1[0x10],
             (FAnalyzerAddress *)param_1[2]);
  return;
}

// ExecuteFunction @ 14adb85d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ExecuteFunction @ 14adb8620

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14adb8670

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// GetResetFunction @ 14ae92260

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_>::
GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14ae923d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_>::
GetExecuteFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_> *this
                  )

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ae923e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ae944f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ae94590

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ae945a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ae98ca0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14ae98cb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_>::
GetExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ae98e10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ae9b800

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,float>::FConverterOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14ae9b810

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ae9b820

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ae9ba50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ae9ba60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ae9ba70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ae9c1c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>::
GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ae9c1d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>::
GetExecuteFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ae9c1e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ae9df30

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<float,int>::FConverterOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14ae9df40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ae9dff0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ae9e840

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_>::
GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14ae9e880

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_>::
GetExecuteFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ae9e890

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ae9eb60

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_>::GetResetFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<int>_>::ResetFunction;
}

// GetExecuteFunction @ 14ae9ec00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ae9ec10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ae9f650

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14ae9f6d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ae9f6e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aea0960

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,int>::FConverterOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14aea0970

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aea0980

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aea2300

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
::GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aea23e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aea2750

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aea5e10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>::
GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aea5e20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>::
GetExecuteFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aea5e30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aea7300

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aea7310

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aea7320

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeacae0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeacaf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeacb20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aead080

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_>::GetResetFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<bool>_>::ResetFunction;
}

// GetExecuteFunction @ 14aead0d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aead140

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeaf560

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeaf570

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeaf5b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeaf7d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeaf800

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeaf8b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb09a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb09b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb09c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb1020

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb10c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb10d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb1ca0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<bool,float>::FConverterOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14aeb1ce0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb1cf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb26a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb26b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb26c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb30d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb30e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb30f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb3950

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb3960

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb3970

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb4910

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<bool,int>::FConverterOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14aeb4920

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb4930

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb4a50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb4aa0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb4ab0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb4d40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb4d50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb4de0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb56d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb56e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb5750

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb5d60

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb5d70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb5d80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb63d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<float,bool>::FConverterOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14aeb63e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb63f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb64e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb64f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb6500

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb6840

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb68b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb6910

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb6e00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb6e10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb6e80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb6e90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb6ea0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb6eb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb8bb0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeb8bf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb8c00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb9b00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,bool>::FConverterOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14aeb9b10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeb9b50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeba290

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeba380

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeba390

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeba730

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeba7b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeba7c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebb100

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aebb140

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aebb1b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebb4d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>::
GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aebb540

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>::
GetExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aebb550

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebbbf0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aebbc40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aebbd10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebc450

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aebc460

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aebc470

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebc520

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aebc530

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aebc540

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebc6c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14aebc6d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aebc6e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebd1f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aebd200

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aebd210

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebd220

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aebd230

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aebd240

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebe480

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aebe490

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aebe4a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebf1e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aebf1f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aebf210

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebf6c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aebf760

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aebf770

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec0c80

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aec0ce0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aec0d00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec1bc0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aec1bd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aec1be0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec1fb0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>::
GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aec1fc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>::
GetExecuteFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aec1fd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec2430

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aec2440

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aec2450

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec2ca0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aec2cb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aec2cc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec39f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aec3a00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aec3a10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec42d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aec4320

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aec4330

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec6e00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aec6e10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aec6e20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec8730

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aec8740

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aec8750

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec9af0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aec9b00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aec9b10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec9ec0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aec9fb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeca050

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeca9e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeca9f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aecaa00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aecadb0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aecadc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aecae00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aecb860

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>::
GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14aecb870

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>::
GetExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aecb880

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aecb9e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aecb9f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aecba20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aecc570

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aecc580

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aecc590

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeccea0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aecceb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeccec0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aecd760

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aecd770

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aecd780

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aecec00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aecec10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aecec20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aecf0e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aecf0f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aecf100

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aecf5d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aecf5e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aecf5f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aecf600

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>::
GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14aecf610

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>::
GetExecuteFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aecf620

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed03a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14aed03b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aed03c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed03d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aed03e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aed03f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed2220

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aed2230

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aed2240

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed3740

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aed3910

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aed3930

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed4530

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aed4540

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aed4550

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed4cb0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aed4cc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aed4d20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed51b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aed51c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aed51d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed6ea0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aed6eb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aed6ec0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed70a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>::
GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14aed70b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>::
GetExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aed70c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed7a90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aed7aa0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aed7ab0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed9690

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aed96a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aed96b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeda2d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeda2e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeda2f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeda890

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aeda8a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aeda8b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aedb200

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aedb210

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aedb220

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aedb390

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aedb3a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aedb540

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aedc240

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aedc250

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aedc260

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aedcae0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetResetFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aedcaf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aedcb00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aede910

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aede920

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aede960

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aedeb00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aedebf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aedec00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aedeee0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_>::
GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_> *this
                )

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14aedeef0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_>::
GetExecuteFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aedef00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aee1b70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator>::
GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<float,float>::FConverterOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14aee1b80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aee1b90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator> *this
          )

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aee43d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_>::
GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<FString>_>::ResetFunction;
}

// GetExecuteFunction @ 14aee4420

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_>::
GetExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aee4790

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aee8790

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14aee87a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14aee87b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// ~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af3f380

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af3f3a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af3f3c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af3f3e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af3f400

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af3f420

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af3f440

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af3f460

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af3f480

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af3f4a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af3f4c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af3f4e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af3f500

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af3f520

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af3f540

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af3f560

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af3f580

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af3f5a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af3f5c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af3f5e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af3f600

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af3f620

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af3f640

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af3f660

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af3f680

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af3f6a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af3f6c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af3f6e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af3f700

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af3f720

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af3f740

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af3f760

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af3f780

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af3f7a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af3f7c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af3f7e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af3f800

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af3f820

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af3f840

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af3f860

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af3f880

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af3f8a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af3f8c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af3f8e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af3f900

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af3f920

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af3f940

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af3f960

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_> @ 14af3f980

void __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_>::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_> @ 14af3f9a0

void __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_>::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af3f9c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af3f9e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_> @ 14af3fa00

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af3fa20

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af3fa40

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af3fa60

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af3fa80

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_> @ 14af3faa0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_> @ 14af3fac0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_> @ 14af3fae0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_> @ 14af3fb00

void __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_> *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_> @ 14af3fb20

void __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>
::~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_> @ 14af3fb40

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_> @ 14af3fb60

void __thiscall
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_>::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_> *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_> @ 14af3fb80

void __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_> @ 14af3fba0

void __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af3fbc0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af3fbe0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_> @ 14af3fc00

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af3fc20

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af3fc40

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af3fc60

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af3fc80

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_> @ 14af3fca0

void __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>
::~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_> @ 14af3fcc0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_> @ 14af3fce0

void __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>
::~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_> @ 14af3fd00

void __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_> *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_> @ 14af3fd20

void __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_> *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_> @ 14af3fd40

void __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_> @ 14af3fd60

void __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_> *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator> @ 14af3fd80

void __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator> @ 14af3fda0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator> @ 14af3fdc0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator> @ 14af3fde0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator> @ 14af3fe00

void __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator> *this
          )

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator> @ 14af3fe20

void __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator> @ 14af3fe40

void __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator> @ 14af3fe60

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator> @ 14af3fe80

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator> @ 14af3fea0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator> @ 14af3fec0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator> @ 14af3fee0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator> @ 14af3ff00

void __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator> @ 14af3ff20

void __thiscall
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator>::
~TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14af8b2a0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)param_1[0xe],
               (TArray<int,TSizedDefaultAllocator<32>_> *)param_1[6]);
    IVar2 = param_1[0xe];
    IVar3 = param_1[10];
    if ((IVar2 == IVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar3 + 8))->Data;
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar1,(ForAnyElementType *)IVar2,(int *)((longlong)IVar2 + 8),
                         (int *)((longlong)IVar2 + 0xc));
      memcpy(*(FScriptContainerElement **)IVar2 + (longlong)iVar6 * 4,
             *(FScriptContainerElement **)IVar3,(longlong)iVar1 << 2);
    }
  }
  return;
}

// ExecuteFunction @ 14af8b390

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)param_1[0xe],
               (TArray<float,TSizedDefaultAllocator<32>_> *)param_1[6]);
    IVar2 = param_1[0xe];
    IVar3 = param_1[10];
    if ((IVar2 == IVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar3 + 8))->Data;
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar1,(ForAnyElementType *)IVar2,(int *)((longlong)IVar2 + 8),
                         (int *)((longlong)IVar2 + 0xc));
      memcpy(*(FScriptContainerElement **)IVar2 + (longlong)iVar6 * 4,
             *(FScriptContainerElement **)IVar3,(longlong)iVar1 << 2);
    }
  }
  return;
}

// ExecuteFunction @ 14af8b480

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)param_1[0xe],
               (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)param_1[6]);
    IVar2 = param_1[0xe];
    IVar3 = param_1[10];
    if ((IVar2 == IVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar3 + 8))->Data;
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,iVar1,(ForAnyElementType *)IVar2,(int *)((longlong)IVar2 + 8),
                         (int *)((longlong)IVar2 + 0xc));
      ConstructItems<Metasound::FSendAddress,Metasound::FSendAddress,int>
                (*(FScriptContainerElement **)IVar2 + (longlong)iVar6 * 0x20,
                 (FSendAddress *)*(FScriptContainerElement **)IVar3,iVar1);
    }
  }
  return;
}

// ExecuteFunction @ 14af8b570

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_1[0xe],
               (TArray<FString,TSizedDefaultAllocator<32>_> *)param_1[6]);
    IVar2 = param_1[0xe];
    IVar3 = param_1[10];
    if ((IVar2 == IVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar3 + 8))->Data;
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar1,(ForAnyElementType *)IVar2,(int *)((longlong)IVar2 + 8),
                         (int *)((longlong)IVar2 + 0xc));
      ConstructItems<FString,FString,int>
                (*(FScriptContainerElement **)IVar2 + (longlong)iVar6 * 0x10,
                 (FString *)*(FScriptContainerElement **)IVar3,iVar1);
    }
  }
  return;
}

// ExecuteFunction @ 14af8b660

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)param_1[0xe],
               (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)param_1[6]);
    IVar2 = param_1[0xe];
    IVar3 = param_1[10];
    if ((IVar2 == IVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar3 + 8))->Data;
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar1,(ForAnyElementType *)IVar2,(int *)((longlong)IVar2 + 8),
                         (int *)((longlong)IVar2 + 0xc));
      ConstructItems<Metasound::FTime,Metasound::FTime,int>
                (*(FScriptContainerElement **)IVar2 + (longlong)iVar6 * 8,
                 (FTime *)*(FScriptContainerElement **)IVar3,iVar1);
    }
  }
  return;
}

// ExecuteFunction @ 14af8b750

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<bool,TSizedDefaultAllocator<32>_> *)param_1[0xe],
               (TArray<bool,TSizedDefaultAllocator<32>_> *)param_1[6]);
    IVar2 = param_1[0xe];
    IVar3 = param_1[10];
    if ((IVar2 == IVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar3 + 8))->Data;
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar1,(ForAnyElementType *)IVar2,(int *)((longlong)IVar2 + 8),
                         (int *)((longlong)IVar2 + 0xc));
      memcpy(*(FScriptContainerElement **)IVar2 + iVar6,*(FScriptContainerElement **)IVar3,
             (longlong)iVar1);
    }
  }
  return;
}

// ExecuteFunction @ 14af8b830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    IVar2 = param_1[6];
    iVar1 = *(int *)param_1[10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)param_1[0xe] = *(undefined4 *)(*(longlong *)IVar2 + (longlong)iVar1 * 4);
    }
  }
  return;
}

// ExecuteFunction @ 14af8b940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    IVar2 = param_1[6];
    iVar1 = *(int *)param_1[10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)param_1[0xe] = *(undefined4 *)(*(longlong *)IVar2 + (longlong)iVar1 * 4);
    }
  }
  return;
}

// ExecuteFunction @ 14af8ba50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    IVar2 = param_1[6];
    iVar1 = *(int *)param_1[10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      IVar3 = param_1[0xe];
      lVar6 = (longlong)iVar1 * 0x20 + *(longlong *)IVar2;
      *(undefined8 *)((longlong)IVar3 + 8) = *(undefined8 *)(lVar6 + 8);
      *(undefined8 *)((longlong)IVar3 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
      *(undefined8 *)((longlong)IVar3 + 0x18) = *(undefined8 *)(lVar6 + 0x18);
    }
  }
  return;
}

// ExecuteFunction @ 14af8bb70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    IVar2 = param_1[6];
    iVar1 = *(int *)param_1[10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::operator=
                ((FString *)param_1[0xe],(FString *)((longlong)iVar1 * 0x10 + *(longlong *)IVar2));
    }
  }
  return;
}

// ExecuteFunction @ 14af8bc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    IVar2 = param_1[6];
    iVar1 = *(int *)param_1[10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)param_1[0xe] = *(undefined8 *)(*(longlong *)IVar2 + (longlong)iVar1 * 8);
    }
  }
  return;
}

// ExecuteFunction @ 14af8bd90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    IVar2 = param_1[6];
    iVar1 = *(int *)param_1[10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined1 *)param_1[0xe] = *(undefined1 *)((longlong)iVar1 + *(longlong *)IVar2);
    }
  }
  return;
}

// ExecuteFunction @ 14af8bea0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ExecuteFunction @ 14af8bef0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ExecuteFunction @ 14af8bf40

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ExecuteFunction @ 14af8bf90

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ExecuteFunction @ 14af8bfe0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ExecuteFunction @ 14af8c030

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ExecuteFunction @ 14af8c080

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ExecuteFunction @ 14af8c0d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ExecuteFunction @ 14af8c120

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ExecuteFunction @ 14af8c170

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ExecuteFunction @ 14af8c1c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ExecuteFunction @ 14af8c210

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ExecuteFunction @ 14af8c260

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8c2b0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8c300

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
              *)param_1);
  return;
}

// ExecuteFunction @ 14af8c350

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8c3a0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
             param_1);
  return;
}

// ExecuteFunction @ 14af8c3f0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8c440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  undefined4 uVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[4] + 0x1c)) {
    IVar3 = param_1[0xc];
    iVar1 = *(int *)param_1[0x10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar3 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      uVar2 = *(undefined4 *)param_1[0x14];
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(*(longlong *)IVar3 + (longlong)iVar1 * 4) = uVar2;
    }
  }
  return;
}

// ExecuteFunction @ 14af8c550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  undefined4 uVar1;
  int iVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[4] + 0x1c)) {
    IVar3 = param_1[0xc];
    iVar2 = *(int *)param_1[0x10];
    if ((iVar2 < 0) || (*(int *)((longlong)IVar3 + 8) <= iVar2)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      uVar1 = *(undefined4 *)param_1[0x14];
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(*(longlong *)IVar3 + (longlong)iVar2 * 4) = uVar1;
    }
  }
  return;
}

// ExecuteFunction @ 14af8c670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[4] + 0x1c)) {
    IVar2 = param_1[0xc];
    iVar1 = *(int *)param_1[0x10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      IVar3 = param_1[0x14];
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = (longlong)iVar1 * 0x20 + *(longlong *)IVar2;
      *(undefined8 *)(lVar6 + 8) = *(undefined8 *)((longlong)IVar3 + 8);
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)((longlong)IVar3 + 0x10);
      *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)((longlong)IVar3 + 0x18);
    }
  }
  return;
}

// ExecuteFunction @ 14af8c7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[4] + 0x1c)) {
    IVar2 = param_1[0xc];
    iVar1 = *(int *)param_1[0x10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      IVar3 = param_1[0x14];
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::FString::operator=
                ((FString *)((longlong)iVar1 * 0x10 + *(longlong *)IVar2),(FString *)IVar3);
    }
  }
  return;
}

// ExecuteFunction @ 14af8c8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[4] + 0x1c)) {
    IVar2 = param_1[0xc];
    iVar1 = *(int *)param_1[0x10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      IVar3 = param_1[0x14];
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(*(longlong *)IVar2 + (longlong)iVar1 * 8) = *(undefined8 *)IVar3;
    }
  }
  return;
}

// ExecuteFunction @ 14af8c9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  undefined1 uVar1;
  int iVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[4] + 0x1c)) {
    IVar3 = param_1[0xc];
    iVar2 = *(int *)param_1[0x10];
    if ((iVar2 < 0) || (*(int *)((longlong)IVar3 + 8) <= iVar2)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      uVar1 = *(undefined1 *)param_1[0x14];
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined1 *)((longlong)iVar2 + *(longlong *)IVar3) = uVar1;
    }
  }
  return;
}

// ExecuteFunction @ 14af8cae0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8cb30

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8cb80

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             param_1);
  return;
}

// ExecuteFunction @ 14af8cbd0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8cc20

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)param_1
            );
  return;
}

// ExecuteFunction @ 14af8cc70

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8ccc0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8cd10

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8cd60

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FSendAddress *pFVar9;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    IVar1 = param_1[0x12];
    iVar6 = *(int *)((longlong)IVar1 + 0xc);
    *(undefined4 *)&((ForAnyElementType *)((longlong)IVar1 + 8))->Data = 0;
    if (iVar6 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)IVar1,0,(int *)((longlong)IVar1 + 0xc));
    }
    IVar1 = param_1[6];
    iVar6 = *(int *)((longlong)IVar1 + 8);
    uVar4 = *(uint *)param_1[10];
    if ((int)*(uint *)param_1[10] < 0) {
      uVar4 = 0;
    }
    iVar7 = *(int *)param_1[0xe] + 1;
    if (iVar6 < *(int *)param_1[0xe] + 1) {
      iVar7 = iVar6;
    }
    if ((int)uVar4 < iVar7) {
      IVar2 = param_1[0x12];
      iVar7 = iVar7 - uVar4;
      uVar8 = 0;
      if ((int)uVar4 < iVar6) {
        uVar8 = ~uVar4 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (FSendAddress *)((longlong)(int)uVar4 * 0x20 + *(longlong *)IVar1);
      if (((pFVar9 == (FSendAddress *)0x0) && (iVar7 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,iVar7,(ForAnyElementType *)IVar2,(int *)((longlong)IVar2 + 8),
                         (int *)((longlong)IVar2 + 0xc));
      ConstructItems<Metasound::FSendAddress,Metasound::FSendAddress,int>
                (*(FScriptContainerElement **)IVar2 + (longlong)iVar6 * 0x20,pFVar9,iVar7);
    }
  }
  return;
}

// ExecuteFunction @ 14af8cf00

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8cf50

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  FTime *pFVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < *(int *)((longlong)param_1[2] + 0x1c)) {
    IVar2 = param_1[0x12];
    iVar7 = *(int *)((longlong)IVar2 + 0xc);
    *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
    if (iVar7 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
    }
    IVar2 = param_1[6];
    iVar7 = *(int *)((longlong)IVar2 + 8);
    uVar5 = *(uint *)param_1[10];
    if ((int)*(uint *)param_1[10] < 0) {
      uVar5 = 0;
    }
    iVar8 = *(int *)param_1[0xe] + 1;
    if (iVar7 < *(int *)param_1[0xe] + 1) {
      iVar8 = iVar7;
    }
    if ((int)uVar5 < iVar8) {
      IVar3 = param_1[0x12];
      iVar8 = iVar8 - uVar5;
      uVar9 = 0;
      if ((int)uVar5 < iVar7) {
        uVar9 = ~uVar5 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (FTime *)(*(longlong *)IVar2 + (longlong)(int)uVar5 * 8);
      if (((pFVar1 == (FTime *)0x0) && (iVar8 != 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar8,(ForAnyElementType *)IVar3,(int *)((longlong)IVar3 + 8),
                         (int *)((longlong)IVar3 + 0xc));
      ConstructItems<Metasound::FTime,Metasound::FTime,int>
                (*(FScriptContainerElement **)IVar3 + (longlong)iVar7 * 8,pFVar1,iVar8);
    }
  }
  return;
}

// ExecuteFunction @ 14af8d0e0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d130

void __cdecl
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<int>::Execute((TReceiverOperator<int> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d180

void __cdecl
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<float>::Execute((TReceiverOperator<float> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d1d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Execute
            ((TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d220

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Execute
            ((TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d270

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::
  TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::Execute
            ((TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)param_1);
  return;
}

// ExecuteFunction @ 14af8d2c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::
  TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Execute
            ((TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             param_1);
  return;
}

// ExecuteFunction @ 14af8d310

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Execute
            ((TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d360

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
  Execute((TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d3b0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Execute
            ((TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d400

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>::Execute
            ((TReceiverOperator<Metasound::FAudioBuffer> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d450

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>::Execute
            ((TReceiverOperator<FMetasoundParameterStorageWrapper> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d4a0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>::Execute
            ((TReceiverOperator<Metasound::FSendAddress> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d4f0

void __cdecl
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<FString>::Execute((TReceiverOperator<FString> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d540

void __cdecl
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>::Execute
            ((TReceiverOperator<Metasound::FTime> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d590

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>::Execute
            ((TReceiverOperator<Metasound::FTrigger> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d5e0

void __cdecl
Metasound::TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<bool>::Execute((TReceiverOperator<bool> *)param_1);
  return;
}

// ExecuteFunction @ 14af8d630

void __cdecl
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<int>_>::ExecuteFunction
          (IOperator *param_1)

{
  TSender<int> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_> TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<int>::ResetSenderAndCleanupChannel((TSendOperator<int> *)param_1)
    ;
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<int>::CreateNewSender((TSendOperator<int> *)param_1);
    pTVar1 = (TSender<int> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<int>::Push((TSender<int> *)param_1[0x10],(int *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8d740

void __cdecl
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  TSender<float> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_> TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<float>::ResetSenderAndCleanupChannel
              ((TSendOperator<float> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<float>::CreateNewSender((TSendOperator<float> *)param_1);
    pTVar1 = (TSender<float> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<float>::Push((TSender<float> *)param_1[0x10],(float *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8d850

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
    ResetSenderAndCleanupChannel((TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)param_1)
    ;
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
            CreateNewSender((TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)param_1);
    pTVar1 = (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<TArray<int,TSizedDefaultAllocator<32>_>_>::Push
            ((TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)param_1[0x10],
             (TArray<int,TSizedDefaultAllocator<32>_> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8d960

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
    ResetSenderAndCleanupChannel
              ((TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
            CreateNewSender((TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)param_1);
    pTVar1 = (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<TArray<float,TSizedDefaultAllocator<32>_>_>::Push
            ((TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)param_1[0x10],
             (TArray<float,TSizedDefaultAllocator<32>_> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8da70

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::
    TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
    ResetSenderAndCleanupChannel
              ((TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::
            TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
            CreateNewSender((TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                             *)param_1);
    pTVar1 = (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)
             (param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::Push
            ((TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)
             param_1[0x10],
             (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8db80

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
    ResetSenderAndCleanupChannel
              ((TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::
            TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
            CreateNewSender((TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                             *)param_1);
    pTVar1 = (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             (param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Push
            ((TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)param_1[0x10],
             (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8dc90

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
    ResetSenderAndCleanupChannel
              ((TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
            CreateNewSender((TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)param_1);
    pTVar1 = (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>::Push
            ((TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)param_1[0x10],
             (TArray<FString,TSizedDefaultAllocator<32>_> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8dda0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
    ResetSenderAndCleanupChannel
              ((TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
            CreateNewSender((TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                            param_1);
    pTVar1 = (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Push
            ((TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)param_1[0x10],
             (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8deb0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    ResetSenderAndCleanupChannel
              ((TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
            CreateNewSender((TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)param_1);
    pTVar1 = (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>::Push
            ((TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)param_1[0x10],
             (TArray<bool,TSizedDefaultAllocator<32>_> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8dfc0

void __cdecl
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::FAudioBuffer> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::ResetSenderAndCleanupChannel
              ((TSendOperator<Metasound::FAudioBuffer> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::CreateNewSender
                      ((TSendOperator<Metasound::FAudioBuffer> *)param_1);
    pTVar1 = (TSender<Metasound::FAudioBuffer> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::FAudioBuffer>::Push
            ((TSender<Metasound::FAudioBuffer> *)param_1[0x10],(FAudioBuffer *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8e0d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>::
ExecuteFunction(IOperator *param_1)

{
  TSender<FMetasoundParameterStorageWrapper> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::ResetSenderAndCleanupChannel
              ((TSendOperator<FMetasoundParameterStorageWrapper> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::CreateNewSender
                      ((TSendOperator<FMetasoundParameterStorageWrapper> *)param_1);
    pTVar1 = (TSender<FMetasoundParameterStorageWrapper> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<FMetasoundParameterStorageWrapper>::Push
            ((TSender<FMetasoundParameterStorageWrapper> *)param_1[0x10],
             (FMetasoundParameterStorageWrapper *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8e1e0

void __cdecl
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::FSendAddress> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<Metasound::FSendAddress>::ResetSenderAndCleanupChannel
              ((TSendOperator<Metasound::FSendAddress> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<Metasound::FSendAddress>::CreateNewSender
                      ((TSendOperator<Metasound::FSendAddress> *)param_1);
    pTVar1 = (TSender<Metasound::FSendAddress> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::FSendAddress>::Push
            ((TSender<Metasound::FSendAddress> *)param_1[0x10],(FSendAddress *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8e2f0

void __cdecl
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<FString>_>::ExecuteFunction
          (IOperator *param_1)

{
  TSender<FString> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_> TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<FString>::ResetSenderAndCleanupChannel
              ((TSendOperator<FString> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<FString>::CreateNewSender
                      ((TSendOperator<FString> *)param_1);
    pTVar1 = (TSender<FString> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<FString>::Push((TSender<FString> *)param_1[0x10],(FString *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8e400

void __cdecl
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>::
ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::FTime> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<Metasound::FTime>::ResetSenderAndCleanupChannel
              ((TSendOperator<Metasound::FTime> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<Metasound::FTime>::CreateNewSender
                      ((TSendOperator<Metasound::FTime> *)param_1);
    pTVar1 = (TSender<Metasound::FTime> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::FTime>::Push((TSender<Metasound::FTime> *)param_1[0x10],(FTime *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8e510

void __cdecl
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>::
ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::FTrigger> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
  TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<Metasound::FTrigger>::ResetSenderAndCleanupChannel
              ((TSendOperator<Metasound::FTrigger> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<Metasound::FTrigger>::CreateNewSender
                      ((TSendOperator<Metasound::FTrigger> *)param_1);
    pTVar1 = (TSender<Metasound::FTrigger> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::FTrigger>::Push
            ((TSender<Metasound::FTrigger> *)param_1[0x10],(FTrigger *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8e620

void __cdecl
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<bool>_>::ExecuteFunction
          (IOperator *param_1)

{
  TSender<bool> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_> TVar7;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)param_1[6] + 0x30))(param_1[6],param_1 + 9);
  if (cVar6 == '\0') {
    SendNodePrivate::TSendOperator<bool>::ResetSenderAndCleanupChannel
              ((TSendOperator<bool> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar7 = SendNodePrivate::TSendOperator<bool>::CreateNewSender((TSendOperator<bool> *)param_1);
    pTVar1 = (TSender<bool> *)(param_1 + 0x10);
    if (pTVar1 != TVar7.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<bool>::Push((TSender<bool> *)param_1[0x10],(bool *)param_1[2]);
  return;
}

// ExecuteFunction @ 14af8e730

void __cdecl
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,int>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14af8e780

void __cdecl
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,float>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)param_1[6] = (float)*(int *)param_1[2];
  return;
}

// ExecuteFunction @ 14af8e7e0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<int,bool>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(bool *)param_1[6] = *(int *)param_1[2] != 0;
  return;
}

// ExecuteFunction @ 14af8e830

void __cdecl
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,int>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = (int)*(float *)param_1[2];
  return;
}

// ExecuteFunction @ 14af8e880

void __cdecl
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,float>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14af8e8d0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<float,bool>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(float *)param_1[2] != 0.0) {
    *(undefined1 *)param_1[6] = 1;
    return;
  }
  *(undefined1 *)param_1[6] = 0;
  return;
}

// ExecuteFunction @ 14af8e930

void __cdecl
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<FString,FString>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<FString,FString>::FConverterOperator::Execute((FConverterOperator *)param_1);
  return;
}

// ExecuteFunction @ 14af8e980

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ExecuteFunction @ 14af8e9d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)param_1[6] = (uint)(0 < *(int *)((longlong)param_1[2] + 0x1c));
  return;
}

// ExecuteFunction @ 14af8ea30

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)param_1[6] = (float)(0 < *(int *)((longlong)param_1[2] + 0x1c));
  return;
}

// ExecuteFunction @ 14af8ea90

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(bool *)param_1[6] = 0 < *(int *)((longlong)param_1[2] + 0x1c);
  return;
}

// ExecuteFunction @ 14af8eaf0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,int>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)param_1[6] = (uint)*(byte *)param_1[2];
  return;
}

// ExecuteFunction @ 14af8eb40

void __cdecl
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,float>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)param_1[6] = (float)*(byte *)param_1[2];
  return;
}

// ExecuteFunction @ 14af8eba0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAutoConverterNode<bool,bool>::FConverterOperator>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined1 *)param_1[6] = *(undefined1 *)param_1[2];
  return;
}

